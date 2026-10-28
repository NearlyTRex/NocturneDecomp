#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// The cloth a character wears: the files each piece is loaded from.
class CClothList {
public:
    CClothList();
    ~CClothList();
    CClothList(const CClothList &) = delete;
    CClothList &operator=(const CClothList &) = delete;
    CClothList(CClothList &&) = delete;
    CClothList &operator=(CClothList &&) = delete;

    void load();
    void reset();
    void add(char *filename);
    void setup(common::CVector3f *position, common::CVector3f *euler,
               CDeformableModelInstance *model_ptr);
    void process(common::CVector3f *position, common::CVector3f *euler, float delta_time,
                 float floor_y, CDeformableModelInstance *model_ptr);
    void render(CDeformableModelInstance *model_ptr);
    [[nodiscard]] std::span<const std::string> getFilenames() const;
    // As an actor's file lists them, replacing any before.
    void setFilenames(std::vector<std::string> filenames);

private:
    std::vector<std::string> filenames_;
};

} // namespace nocturne::core
