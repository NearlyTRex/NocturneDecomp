#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

class CSoundDevice {
public:
    virtual ~CSoundDevice();

    virtual int close() = 0;
    virtual int start() = 0;
    virtual int reset() = 0;
    virtual int setMode(int bits_per_sample, int channels, int sample_rate,
                        int *out_samples_per_block) = 0;
    virtual int poll(std::int16_t *output_buffer, int num_samples) = 0;
    virtual int hasHardware3D() = 0;
    virtual void set3DListenerPos(double x, double y, double z) = 0;
    virtual void set3DListenerOrient(double x_front, double y_front, double z_front, double x_top,
                                     double y_top, double z_top, double x_right, double y_right,
                                     double z_right) = 0;
    virtual void set3DListenerVelocity(double x_velocity, double y_velocity, double z_velocity) = 0;
    virtual void set3DListenerDistanceFactor(double distance_in_feet) = 0;
    virtual void commitDeferredSettings() = 0;
    virtual int allocateSample(int bits_per_sample, int channel_count, int sample_rate,
                               int sample_count) = 0;
    virtual void freeSample(int buffer_id) = 0;
    virtual void *lockSample(int buffer_id, int offset, int size) = 0;
    virtual void unlockSample(int buffer_id) = 0;
    virtual int allocateSfx(int sample_buffer_id) = 0;
    virtual int setSfxPos(CSfxSlot *slot, int update_flags) = 0;
    virtual double getSfxPlaybackPos(CSfxSlot *slot) = 0;
    virtual int startSfx(CSfxSlot *slot) = 0;
    virtual void killSfx(CSfxSlot *slot) = 0;
    virtual int isSfxPlaying(CSfxSlot *slot) = 0;
};

} // namespace nocturne::sound
