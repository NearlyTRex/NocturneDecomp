#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CSfxSlot.h"
#include "types/classes/CSoundDeviceFull_vtable.h"
#include "types/funcdefs/CSoundDevice_allocateSample.h"
#include "types/funcdefs/CSoundDevice_allocateSfx.h"
#include "types/funcdefs/CSoundDevice_close.h"
#include "types/funcdefs/CSoundDevice_commitDeferredSettings.h"
#include "types/funcdefs/CSoundDevice_freeSample.h"
#include "types/funcdefs/CSoundDevice_getSfxPlaybackPos.h"
#include "types/funcdefs/CSoundDevice_hasHardware3D.h"
#include "types/funcdefs/CSoundDevice_isSfxPlaying.h"
#include "types/funcdefs/CSoundDevice_killSfx.h"
#include "types/funcdefs/CSoundDevice_lockSample.h"
#include "types/funcdefs/CSoundDevice_poll.h"
#include "types/funcdefs/CSoundDevice_reset.h"
#include "types/funcdefs/CSoundDevice_set3DListenerDistanceFactor.h"
#include "types/funcdefs/CSoundDevice_set3DListenerOrient.h"
#include "types/funcdefs/CSoundDevice_set3DListenerPos.h"
#include "types/funcdefs/CSoundDevice_set3DListenerVelocity.h"
#include "types/funcdefs/CSoundDevice_setMode.h"
#include "types/funcdefs/CSoundDevice_setSfxPos.h"
#include "types/funcdefs/CSoundDevice_start.h"
#include "types/funcdefs/CSoundDevice_startSfx.h"
#include "types/funcdefs/CSoundDevice_unlockSample.h"

// Structure: CSoundDevice
// Ghidra size: 0x4 (4 bytes)
typedef struct CSoundDevice {
    struct CSoundDeviceFull_vtable* vtable; // 0x0
} CSoundDevice;

