// Name: sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
// Address: 00529a90
// Address Range: [[00529a90, 00529bac]]
// Convention: __cdecl
// Signature: char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)

#include "nocturne.h"

char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)

{
  if (error_code < 0x88780032) {
    if (0x8007000d < error_code) {
      if (error_code < 0x8007000f) {
        return "DSERR_OUTOFMEMORY: The DirectSound subsystem could not allocate sufficient memory to complete the caller's request.";
      }
      if (error_code < 0x8878000a) {
        if (error_code == 0x80070057) {
          return "DSERR_INVALIDPARAM: An invalid parameter was passed to the returning function.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code < 0x8878000b) {
        return "DSERR_ALLOCATED: The request failed because resources, such as a priority level, were already in use by another caller.";
      }
      if (error_code == 0x8878001e) {
        return "DSERR_CONTROLUNAVAIL: The control (volume, pan, and so forth) requested by the caller is not available.";
      }
      return "DSERR_ELIFINO: Unknown error status code.";
    }
    if (0x80004004 < error_code) {
      if (error_code < 0x80004006) {
        return "DSERR_GENERIC: An undetermined error occurred inside the DirectSound subsystem.";
      }
      if (error_code == 0x80040110) {
        return "DSERR_NOAGGREGATION: The object does not support aggregation.";
      }
      return "DSERR_ELIFINO: Unknown error status code.";
    }
    if (error_code == 0x80004001) {
      return "DSERR_UNSUPPORTED: The function called is not supported at this time.";
    }
  }
  else {
    if (error_code < 0x88780033) {
      return "DSERR_INVALIDCALL: This function is not valid for the current state of this object.";
    }
    if (error_code < 0x88780082) {
      if (0x88780063 < error_code) {
        if (error_code < 0x88780065) {
          return "DSERR_BADFORMAT: The specified wave format is not supported.";
        }
        if (error_code == 0x88780078) {
          return "DSERR_NODRIVER: No sound driver is available for use.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code == 0x88780046) {
        return "DSERR_PRIOLEVELNEEDED: The caller does not have the priority level required for the function to succeed.";
      }
    }
    else {
      if (error_code < 0x88780083) {
        return "DSERR_ALREADYINITIALIZED: The object is already initialized.";
      }
      if (error_code < 0x887800a0) {
        if (error_code == 0x88780096) {
          return "DSERR_BUFFERLOST: The buffer memory has been lost and must be restored.";
        }
      }
      else {
        if (error_code < 0x887800a1) {
          return "DSERR_OTHERAPPHASPRIO: This value is obsolete and is not used.";
        }
        if (error_code == 0x887800aa) {
          return "DSERR_UNINITIALIZED: The IDirectSound::Initialize method has not been called or has not been called successfully before other methods were called.";
        }
      }
    }
  }
  return "DSERR_ELIFINO: Unknown error status code.";
}
