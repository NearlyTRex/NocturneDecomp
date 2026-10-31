#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <memory>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// The cloth a character wears: the files each piece is loaded from, and the pieces.
class CClothList {
public:
    // Each piece's model is loaded from disk, its textures captured by the models.
    CClothList(const engine::CDosIo &dosio, IKeyFramedModels &models);
    ~CClothList();
    CClothList(const CClothList &) = delete;
    CClothList &operator=(const CClothList &) = delete;
    CClothList(CClothList &&) = delete;
    CClothList &operator=(CClothList &&) = delete;

    // Each piece made again from its file.
    void load();
    void reset();
    void add(char *filename);
    void setup(const common::CVector3f &position, const common::CVector3f &euler,
               CDeformableModelInstance *model_ptr);
    void process(const common::CVector3f &position, const common::CVector3f &euler,
                 float delta_time, float floor_y, CDeformableModelInstance *model_ptr,
                 const common::CVector3f &wind);
    void render(CDeformableModelInstance *model_ptr);
    [[nodiscard]] std::span<const std::string> getFilenames() const;
    // As an actor's file lists them, replacing any before.
    void setFilenames(std::vector<std::string> filenames);
    // The pieces loaded, a file each.
    [[nodiscard]] std::span<const std::unique_ptr<CCloth>> getCloths() const;

private:
    const engine::CDosIo &dosio_;
    IKeyFramedModels &models_;
    std::vector<std::string> filenames_;
    std::vector<std::unique_ptr<CCloth>> cloths_;
};

} // namespace nocturne::core
