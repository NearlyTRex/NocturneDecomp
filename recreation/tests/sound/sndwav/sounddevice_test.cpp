#include "sound/sndwav/sounddevice.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSoundDevice, IsConcrete) {
    static_assert(!std::is_abstract_v<CSoundDevice>);
}

} // namespace
} // namespace nocturne::sound
