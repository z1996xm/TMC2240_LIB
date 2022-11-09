#include "TMCStepper.h"
#include "TMC_MACROS.h"

#define SET_GLOBAL_SCALER_REG(SETTING) GLOBAL_SCALER_register.SETTING = B; write(GLOBAL_SCALER_register.address, GLOBAL_SCALER_register.sr);
#define GET_GLOBAL_SCALER_REG(SETTING) return GLOBAL_SCALER_register.SETTING;

// GLOBAL_SCALER
uint32_t TMC2240Stepper::GLOBAL_SCALER() { return GLOBAL_SCALER_register.sr; }
void TMC2240Stepper::GLOBAL_SCALER(uint8_t input) {
	GLOBAL_SCALER_register.sr = input;
	write(GLOBAL_SCALER_register.address, GLOBAL_SCALER_register.sr);
}

void 	TMC2240Stepper::global_scaler(uint8_t B) 		{ SET_GLOBAL_SCALER_REG(GLOBALSCALER);		}
uint8_t TMC2240Stepper::global_scaler() 				{ GET_GLOBAL_SCALER_REG(GLOBALSCALER);		}
