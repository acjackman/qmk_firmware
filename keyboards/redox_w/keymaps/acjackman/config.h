#pragma once


// Autoshift
/* Enable Auto-SHift in rules.mk */
#define AUTO_SHIFT_TIMEOUT 175  /* Time (in ms) before a press a key before it is auto-shifted. */
//#define NO_AUTO_SHIFT_SPECIAL  /*  Special keys (-_, =+, [{, ]}, ;:, ‘“, ,<, .>, and /?) are not auto-shifted. */
//#define NO_AUTO_SHIFT_NUMEIC  /* 0-9 keys are not auto-shifted. */
#define NO_AUTO_SHIFT_ALPHA  /* Alpha keys are not auto-shifted. */


// Tapping
#define TAPPING_TERM 181 /* Time (in ms) before a press is considered a hold. */
#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
#define IGNORE_MOD_TAP_INTERRUPT



//#define RETRO_TAPPING
