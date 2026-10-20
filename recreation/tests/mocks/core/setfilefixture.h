#pragma once

#include "core/set/demonset.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {

// A .SET file of the version. Each field has a label line before it from 11 on, and the parts
// older files lack are left out. The lists hold their counts.
struct SSetFile {
    int version = 26;
    std::string geometry = "pier.geo";
    std::string enviro = "0,moon.kfm";
    std::string weather = "2";
    std::string lights = "0\n";
    std::string cameras = "0\n";
    // One per camera, from 20 on.
    std::string pvs{};
    std::string rooms = "1\n0.5,1.5,2.5\n1,2,3\n0.1,0.2,0.3\n7\n";
    std::string vdir_boxes = "0\n";
    // Versions 4 to 9.
    std::string old_directors = "1\n\"director\", 2\nline\nline\n";

    [[nodiscard]] std::string text() const {
        const std::string label = version >= 11 ? "label\n" : "";
        std::string file = std::to_string(version) + "\n1.5\nunread\n" + geometry + "\n0.25\n";
        if (version == 0) {
            file += "old\nold\nold\n";
        }
        file += version < 17
                    ? "fog\n9,1,2,3\nfog\n4,5,6\n7,8,0,0\n"
                    : std::string("fog\n1,2,3\nfog\n4,5,6\n7,8\n") + (version >= 26 ? "9\n" : "");
        file += "water\n10.5,16\nenviro\n" + enviro + "\n";
        file += version >= 5 ? "wave\n1\n" : "";
        file += version >= 6 ? "sky\n0\n" : "";
        file += version >= 12 ? "200,stars.raw\n" : "";
        file += version >= 13 ? "world\n1,city.geo\n" : "";
        file += version >= 25 ? "weather\n" + weather + "\n" : "";
        file += label + lights + label + cameras;
        file += version >= 1 ? "rooms\n3\n" + rooms : "";
        file += version >= 3 ? "ground\n5\n" : "";
        file += version >= 24 ? "reverb\n6\n" : "";
        file += version >= 4 && version < 10 ? "directors\n" + old_directors : "";
        file += version >= 5 ? "vdir\n" + vdir_boxes : "";
        file += version == 14 ? "stray\nstray\n" : "";
        file += version >= 20 ? "pvs\n" + pvs : "";
        return file;
    }
};

// A camera as a version 23 or later file holds it, with its own fog.
inline std::string cameraText(const std::string &name) {
    return "label\n" + name +
           "\npos\n1,2,3\norient\n0,0,0\nfov\n30\nvmat\n1,0,0\n0,1,0\n0,0,1\n1\nbox\n-1,-2,-3\n"
           "4,5,6\nreverb\n7\n";
}

// A CDemonSet over the renderer fixture, loading models\test.set.
class CSetFileFixture : public engine::CDemonRendererFixture {
protected:
    void load(const SSetFile &file) {
        givenFile("models\\test.set", file.text());
        set_.load("test.set");
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

} // namespace nocturne::core
