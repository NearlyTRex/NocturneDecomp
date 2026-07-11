// Name: FUN_00529a90
// Address: 00529a90
// Address Range: [[00529a90, 00529bac]]
// Convention: unknown
// Signature: undefined8 FUN_00529a90(uint param_1)

#include "nocturne.h"

ulonglong FUN_00529a90(uint param_1)

{
  if (param_1 < 0x88780032) {
    if (0x8007000d < param_1) {
      if (param_1 < 0x8007000f) {
        return CONCAT44(param_1,"DSERR_OUTOFMEMORY: The DirectSound subsystem could not allocate sufficient memory to complete the caller's request.");
      }
      if (param_1 < 0x8878000a) {
        if (param_1 == 0x80070057) {
          return 0x8007005700593dd5;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 < 0x8878000b) {
        return CONCAT44(param_1,"DSERR_ALLOCATED: The request failed because resources, such as a priority level, were already in use by another caller.");
      }
      if (param_1 == 0x8878001e) {
        return 0x8878001e00593cc9;
      }
      return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
    }
    if (0x80004004 < param_1) {
      if (param_1 < 0x80004006) {
        return CONCAT44(param_1,"DSERR_GENERIC: An undetermined error occurred inside the DirectSound subsystem.");
      }
      if (param_1 == 0x80040110) {
        return 0x8004011000593e24;
      }
      return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
    }
    if (param_1 == 0x80004001) {
      return 0x8000400100594047;
    }
  }
  else {
    if (param_1 < 0x88780033) {
      return CONCAT44(param_1,"DSERR_INVALIDCALL: This function is not valid for the current state of this object.");
    }
    if (param_1 < 0x88780082) {
      if (0x88780063 < param_1) {
        if (param_1 < 0x88780065) {
          return CONCAT44(param_1,"DSERR_BADFORMAT: The specified wave format is not supported.");
        }
        if (param_1 == 0x88780078) {
          return 0x8878007800593e62;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 == 0x88780046) {
        return 0x8878004600593f4b;
      }
    }
    else {
      if (param_1 < 0x88780083) {
        return CONCAT44(param_1,"DSERR_ALREADYINITIALIZED: The object is already initialized.");
      }
      if (param_1 < 0x887800a0) {
        if (param_1 == 0x88780096) {
          return 0x8878009600593c81;
        }
      }
      else {
        if (param_1 < 0x887800a1) {
          return CONCAT44(param_1,"DSERR_OTHERAPPHASPRIO: This value is obsolete and is not used.");
        }
        if (param_1 == 0x887800aa) {
          return 0x887800aa00593fb4;
        }
      }
    }
  }
  return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
}
