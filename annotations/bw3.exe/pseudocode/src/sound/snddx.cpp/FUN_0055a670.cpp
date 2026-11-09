// Name: sound_snddx.cpp_FUN_0055a670
// Address: 0055a670
// Address Range: [[0055a670, 0055a7bb]]
// Convention: __cdecl
// Signature: char * __cdecl sound_snddx_cpp_FUN_0055a670(uint error_code)

#include "nocturne.h"

char * __cdecl sound_snddx_cpp_FUN_0055a670(uint error_code)

{
  if (error_code < 0x8878001e) {
    if (error_code < 0x80004005) {
      if (0x80004000 < error_code) {
        if (error_code < 0x80004002) {
          return "DSERR_UNSUPPORTED: The function called is not supported at this time.";
        }
        if (error_code == 0x80004002) {
          return "DSERR_NOINTERFACE: The requested interface is not available.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code == 0) {
        return "DS_OK: The request completed successfully.";
      }
    }
    else {
      if (error_code < 0x80004006) {
        return &DAT_005d418b;
      }
      if (error_code < 0x8007000e) {
        if (error_code == 0x80040110) {
          return "DSERR_NOAGGREGATION: The object does not support aggregation.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code < 0x8007000f) {
        return &DAT_005d439d;
      }
      if (0x80070056 < error_code) {
        if (error_code < 0x80070058) {
          return "DSERR_INVALIDPARAM: An invalid parameter was passed to the returning function.";
        }
        if (error_code == 0x8878000a) {
          return "DSERR_ALLOCATED: The request failed because resources, such as a priority level, were already in use by another caller.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
    }
  }
  else {
    if (error_code < 0x8878001f) {
      return "DSERR_CONTROLUNAVAIL: The control -- volume, pan, and so on -- requested by the caller is not available.";
    }
    if (error_code < 0x88780078) {
      if (0x88780045 < error_code) {
        if (error_code < 0x88780047) {
          return "DSERR_PRIOLEVELNEEDED: The caller does not have the priority level required for the function to succeed.";
        }
        if (error_code == 0x88780064) {
          return "DSERR_BADFORMAT: The specified wave format is not supported.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code == 0x88780032) {
        return "DSERR_INVALIDCALL: This function is not valid for the current state of this object.";
      }
    }
    else {
      if (error_code < 0x88780079) {
        return "DSERR_NODRIVER: No sound driver is available for use.";
      }
      if (error_code < 0x88780096) {
        if (error_code == 0x88780082) {
          return "DSERR_ALREADYINITIALIZED: The object is already initialized.";
        }
      }
      else {
        if (error_code < 0x88780097) {
          return "DSERR_BUFFERLOST: The buffer memory has been lost and must be restored.";
        }
        if (0x8878009f < error_code) {
          if (error_code < 0x887800a1) {
            return "DSERR_OTHERAPPHASPRIO: Another application has a higher priority level, preventing this call from succeeding";
          }
          if (error_code == 0x887800aa) {
            return "DSERR_UNINITIALIZED: DirectSound has not been initialized correctly.";
          }
        }
      }
    }
  }
  return "DSERR_ELIFINO: Unknown error status code.";
}
