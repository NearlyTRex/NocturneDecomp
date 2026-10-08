#pragma once

#include "sound/fwd.h"
#include "sound/sndwav/sounddevice.h"

#include <cstdint>

namespace nocturne::sound {

class CDirectSoundDevice : public CSoundDevice {
public:
    virtual ~CDirectSoundDevice();

    virtual int close();
    virtual int start();
    virtual int reset();
    virtual int setMode(int bits_per_sample, int channels, int sample_rate,
                        int *out_samples_per_block);
    virtual int poll(std::int16_t *output_buffer, int num_samples);
    virtual int hasHardware3D();
    virtual void set3DListenerPos(double x, double y, double z);
    virtual void set3DListenerOrient(double x_front, double y_front, double z_front, double x_top,
                                     double y_top, double z_top, double x_right, double y_right,
                                     double z_right);
    virtual void set3DListenerVelocity(double x_velocity, double y_velocity, double z_velocity);
    virtual void set3DListenerDistanceFactor(double distance_in_feet);
    virtual void commitDeferredSettings();
    virtual int allocateSample(int bits_per_sample, int channel_count, int sample_rate,
                               int sample_count);
    virtual void freeSample(int buffer_id);
    virtual void *lockSample(int buffer_id, int offset, int size);
    virtual void unlockSample(int buffer_id);
    virtual int allocateSfx(int sample_buffer_id);
    virtual int setSfxPos(CSfxSlot *slot, int update_flags);
    virtual double getSfxPlaybackPos(CSfxSlot *slot);
    virtual int startSfx(CSfxSlot *slot);
    virtual void killSfx(CSfxSlot *slot);
    virtual int isSfxPlaying(CSfxSlot *slot);
};

} // namespace nocturne::sound
