#pragma once
#pragma pack(push, 1)

namespace TMC2240_n {
  struct GCONF_t {
    constexpr static uint8_t address = 0x00;
    union {
      uint16_t sr : 16;
      struct {
        bool    : 1,
              fast_standstill : 1,
              en_pwm_mode : 1,
              multistep_filt : 1,
              shaft : 1,
              diag0_error : 1,
              diag0_otpw : 1,
              diag0_stall : 1,
              diag1_stall : 1,
              diag1_index : 1,
              diag1_onstate : 1,
              diag0_pushpull : 1,            
              diag1_pushpull : 1,            
              small_hysteresis : 1,
              stop_enable : 1,
              direct_mode : 1;
      };
    };
  };
}


namespace TMC2240_n {
  struct GSTAT_t {
      constexpr static uint8_t address = 0x01;
      union {
        uint8_t sr : 8;
        struct {
          bool    reset       : 1,
                  drv_err     : 1,
                  uv_cp       : 1,
                  register_reset : 1,
                  vm_uvlo     : 1;
       };
    };
  };
} 


namespace TMC2240_n {
  struct SLAVECONF_t {
    constexpr static uint8_t address = 0x03;
    union {
      uint16_t sr : 12;
      struct {
        uint16_t  SLAVEADDR : 8;
        uint8_t   SENDDELAY : 4 ;
        };
    };
  };
}


namespace TMC2240_n {
  struct IOIN_t {
    constexpr static uint8_t address = 0x04;
    union {
      uint32_t sr;
      struct {
        bool  step : 1,
              dir : 1,
              encb : 1,
              enca : 1,
              drv_enn : 1,
              encn : 1,
              uart_en : 1,
                : 1,
              comp_a : 1,
              comp_b : 1,
              comp_a1_a2 : 1,
              comp_b1_b2 : 1,
              output : 1,
              ext_res_det : 1,
              ext_clk : 1,
              adc_err : 1;
        uint8_t  silicon_rv : 3,
                : 5,
              version : 8;
      };
    };
  };
}


namespace TMC2240_n {
  struct DRV_CONF_t {
    constexpr static uint8_t address = 0x0A;
    union {
      uint32_t sr;
      struct {
        uint8_t current_range : 2,
                              : 2,
                slope_control : 2;
        uint16_t              : 16;
      };
    };
  };
};


namespace TMC2240_n {
  struct TPOWERDOWN_t {
    constexpr static uint8_t address = 0x11;
    union {
      uint32_t sr;
      struct {
          uint16_t TPOWERDOWN : 8;
      };
    };
  };
};



namespace TMC2240_n {
  struct DRV_STATUS_t {
    constexpr static uint8_t address = 0x6F;
    union {
      uint32_t sr;
      struct {
        uint16_t SG_RESULT : 10;
        uint8_t            : 2; 
        uint8_t      s2vsa : 1,
                     s2vsb : 1,
                   stealth : 1,
                  fsactive : 1;
        uint16_t  CS_ACTUAL : 5;
        uint8_t            : 3;
        bool    stallguard : 1,
                        ot : 1,
                      otpw : 1,
                      s2ga : 1,
                      s2gb : 1,
                       ola : 1,
                       olb : 1,
                      stst : 1;
      };
    };
  };
};


namespace TMC2240_n {
  struct GLOBAL_SCALER_t {
    constexpr static uint8_t address = 0xB;
    union {
      uint8_t sr;
      struct {
           uint8_t  GLOBALSCALER : 8;
      };
    };
  };
};


namespace TMC2240_n {
  struct IHOLD_IRUN_t {
    constexpr static uint8_t address = 0x10;
    union {
      uint32_t sr;
      struct {
        uint8_t  ihold : 5,
                       : 3,
                 irun  : 5,
                       : 3,
            iholddelay : 4,
                       : 4,
            irundelay  : 4;
      };
    };
  };
};
