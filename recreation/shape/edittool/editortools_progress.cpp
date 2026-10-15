#include "common/error/error.h"
#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/screendevice.h"
#include "platform/clock.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <format>

namespace nocturne::shape {
namespace {

constexpr int kOpaqueAlpha = 0xffff;
constexpr double kPercent = 100.0;
// An unchanged bar is redrawn this often, and the time left shows once this much has passed.
constexpr double kRedrawInterval = 4.0;
constexpr double kEstimateDelay = 5.0;
constexpr int kSecondsPerMinute = 60;

// A half added, then the CRT round's chop toward zero.
int roundHalfUp(double value) {
    return common::truncateToInt(value + 0.5);
}

} // namespace

// nocedit 0x004a0430
void CEditorTools::showCenteredProgressDialog(std::string_view message_text) {
    initEditorFontMetrics();
    const int width = std::max(screen_.getWindowWidth() / 2,
                               editor_font_->getTextWidth(message_text, getScale()));
    createCenteredModal(width, editor_font_line_height_ * 6, message_text, 0);
    SWindow &window = window_stack_[window_stack_count_ - 1];
    window.progress_start_time = getSeconds();
    window.progress_percentage = -1;
    updatePercentage(0.0F, 1.0F);
}

// nocedit 0x004a0530
void CEditorTools::updatePercentage(float current_progress, float total_progress) {
    if (window_stack_count_ == 0) {
        common::displayErrorAndQuit("CEditorTools::updatePercentageWindow - no window open!");
    }
    float fraction = 0.0F;
    if (total_progress > 0.0F) {
        current_progress = std::clamp(current_progress, 0.0F, total_progress);
        fraction = current_progress / total_progress;
    }
    const int percentage = roundHalfUp(static_cast<double>(fraction) * kPercent);
    const double now = getSeconds();
    SWindow &window = window_stack_[window_stack_count_ - 1];
    if (percentage == window.progress_percentage &&
        now - window.progress_timestamp < kRedrawInterval) {
        return;
    }
    drawProgress(percentage, fraction);
    const double elapsed = now - window.progress_start_time;
    if (percentage > 0 && elapsed > kEstimateDelay) {
        drawTimeRemaining(current_progress, total_progress, elapsed);
    }
    screen_.swapBuffers();
    window.progress_percentage = percentage;
    window.progress_timestamp = now;
}

// The editor's also outlines the bar's top and left edges.
void CEditorTools::drawProgress(int percentage, float fraction) {
    paintCurrentWindow();
    three_d_.setRenderAlpha(kOpaqueAlpha);
    const engine::SClipRect clip = two_d_.getClipRect();
    drawCentredLine(std::format("{}% complete", percentage), clip.top, window_status_text_color_);
    const int left = clip.left + 1;
    const int right = clip.right - 1;
    const int top = clip.top + (editor_font_line_height_ * 2) + 1;
    const int bottom = clip.top + (editor_font_line_height_ * 4) - 1;
    two_d_.fillRectWithBorder(left, top, right, bottom, progress_bar_background_color_,
                              progress_bar_border_color_);
    const int fill_right =
        roundHalfUp(static_cast<double>(right - left + 1) * static_cast<double>(fraction)) + left;
    if (fill_right > left) {
        two_d_.fillRectColor(left, top, std::min(fill_right, right - 1), bottom,
                             progress_bar_fill_color_);
    }
}

// The time left assumes the rest goes at the rate so far, with the elapsed time rounded to a float
// as the original kept it for this.
void CEditorTools::drawTimeRemaining(float current_progress, float total_progress, double elapsed) {
    const int remaining = roundHalfUp(
        ((static_cast<double>(total_progress) - current_progress) * static_cast<float>(elapsed)) /
        static_cast<double>(current_progress));
    if (remaining <= 0) {
        return;
    }
    const int shown = roundHalfUp(elapsed);
    three_d_.setRenderAlpha(kOpaqueAlpha);
    drawCentredLine(std::format("{}:{:02} elapsed, approximately {}:{:02} remaining",
                                shown / kSecondsPerMinute, shown % kSecondsPerMinute,
                                remaining / kSecondsPerMinute, remaining % kSecondsPerMinute),
                    two_d_.getClipRect().bottom - editor_font_line_height_,
                    window_status_text_color_);
}

// Centred in the clip at the HUD scale, as the rest of the dialog is measured; the decomp draws
// these lines unscaled.
void CEditorTools::drawCentredLine(std::string_view text, int y, int color) {
    const int scale = getScale();
    const engine::SClipRect clip = two_d_.getClipRect();
    const int x = (clip.left + clip.right + 1 - editor_font_->getTextWidth(text, scale)) / 2;
    editor_font_->drawText(text, x, y, color, engine::CBitFont::kNoShadow, scale);
}

double CEditorTools::getSeconds() const {
    return static_cast<double>(clock_.getCounter()) /
           static_cast<double>(clock_.getCounterFrequency());
}

} // namespace nocturne::shape
