#include "shape/edittool/editortools.h"

#include "common/error/error.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/keys/keys.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/clipboard.h"

#include <algorithm>
#include <cstring>
#include <span>

namespace nocturne::shape {
namespace {

// A title wraps to at most 20 lines of under 200 characters.
constexpr int kMaxTitleLines = 20;
constexpr int kTitleLineWidth = 200;
constexpr int kOpaqueAlpha = 0xffff;
constexpr std::string_view kMessageTitle = "Message";
constexpr std::string_view kWarningTitle = "Warning";
constexpr std::string_view kErrorTitle = "Error";

// Bytes in a run of pixels, rounded toward zero.
std::size_t toBytes(int pixels, int bits_per_pixel) {
    return static_cast<std::size_t>((pixels * bits_per_pixel) / 8);
}

std::byte *rowAt(std::span<void *> rows, int y) {
    return static_cast<std::byte *>(rows[static_cast<std::size_t>(y)]);
}

} // namespace

// staticInit built the global instance and init set its colours; the windows, prompts and
// progress bar read these seven.
// deferred: the seven colours retail's init sets for CInputString::draw,
//   displayCenteredStatusMessage, showFilenameInputDialog and draw3DAxisLabels, with those
//   functions
// nocedit 0x0049d170
// nocedit 0x0049df80
// nocedit 0x0049e020
CEditorTools::CEditorTools(const SEditorToolsOwners &owners)
    : two_d_(owners.two_d), matrix_(owners.matrix), three_d_(owners.three_d),
      screen_(owners.screen), special_(owners.special), keys_(owners.keys),
      raw_input_(owners.raw_input), game_clock_(owners.game_clock), clock_(owners.clock),
      clipboard_(owners.clipboard), window_border_highlight_color_(7), title_bar_color_(0xfb),
      window_font_color_(0xff), warning_text_color_(0xff), window_status_text_color_(0xff),
      progress_bar_border_color_(0xff), progress_bar_fill_color_(4) {}

CEditorTools::~CEditorTools() = default;

void CEditorTools::setEditorFont(engine::CBitFont *font) {
    editor_font_ = font;
}

engine::CBitFont *CEditorTools::getEditorFont() const {
    return editor_font_;
}

std::size_t CEditorTools::getWindowCount() const {
    return window_stack_count_;
}

int CEditorTools::getScale() const {
    return engine::getUiScale(screen_.getWindowHeight());
}

engine::CBitFont &CEditorTools::requireEditorFont() {
    if (editor_font_ == nullptr) {
        common::displayErrorAndQuit("gEdFont must be set by the application.");
    }
    return *editor_font_;
}

// Every dialog opens with these two lines, inline; this copy of them has no callers.
// nocedit 0x0049d1f0
void CEditorTools::initEditorFontMetrics() {
    const engine::CBitFont &font = requireEditorFont();
    const int scale = getScale();
    editor_font_max_char_width_ = font.getMaxCharWidth() * scale;
    editor_font_line_height_ = font.getCharHeight('j', scale);
}

int CEditorTools::getEditorFontLineHeight() const {
    return editor_font_line_height_;
}

// The editor's message and warning open its one-button prompt; the game's draw this box
// themselves. The caller formats the message.
// nocedit 0x0049e6a0
void CEditorTools::showMessage(std::string_view message) {
    showPrompt(kMessageTitle, message, window_font_color_);
}

// nocedit 0x0049e6f0
void CEditorTools::showWarning(std::string_view message) {
    showPrompt(kWarningTitle, message, warning_text_color_);
}

// Retail draws it as showWarning does, in the same colour.
// nocedit 0x0049e740
void CEditorTools::showError(std::string_view message) {
    showPrompt(kErrorTitle, message, warning_text_color_);
}

void CEditorTools::showPrompt(std::string_view title, std::string_view message, int text_color) {
    initEditorFontMetrics();
    engine::CBitFont &font = *editor_font_;
    const int scale = getScale();
    const int message_width = font.getTextWidth(message, scale);
    const int width = std::max(font.getTextWidth(title, scale), message_width);
    const int message_height = font.getTextHeight(message, scale);
    createCenteredModal((editor_font_max_char_width_ * 4) + width,
                        (editor_font_line_height_ * 2) + message_height, title, 0);
    paintCurrentWindow();
    three_d_.setRenderAlpha(kOpaqueAlpha);
    const engine::SClipRect clip = two_d_.getClipRect();
    font.drawText(message, ((clip.left + clip.right) - message_width) / 2,
                  ((clip.top + clip.bottom) - message_height) / 2, text_color,
                  engine::CBitFont::kNoShadow, scale);
    screen_.swapBuffers();
    two_d_.clearInputAndWait();
    keys_.getInputKey();
    restoreWindowAndCleanup();
    screen_.swapBuffers();
    two_d_.clearInputAndWait();
}

// The editor's also pads the title with two spaces. The decomp holds the window to the screen:
// the original let one wider than the screen hang past both edges, and its clip decided where it
// landed.
// nocedit 0x004a0890
void CEditorTools::createCenteredModal(int min_width, int min_height, std::string_view text_content,
                                       std::uint32_t window_flags) {
    initEditorFontMetrics();
    if (!text_content.empty()) {
        min_width = std::max(min_width, editor_font_->getTextWidth(text_content, getScale()));
    }
    const int window_width = screen_.getWindowWidth();
    const int window_height = screen_.getWindowHeight();
    min_width = std::min(min_width, window_width);
    min_height = std::min(min_height, window_height);
    const int left = (window_width - min_width) / 2;
    const int top = (window_height - min_height) / 2;
    createModalWindow(left, top, window_width - left, window_height - top, text_content,
                      window_flags);
}

// The editor's saves the whole screen for its first window and an extra line of height for a
// short title. The title wraps in sheet pixels, so it fits once scaled.
// nocedit 0x004a0970
void CEditorTools::createModalWindow(int left, int top, int right, int bottom,
                                     std::string_view text_content, std::uint32_t window_flags) {
    initEditorFontMetrics();
    if (window_stack_count_ >= kMaxWindows) {
        common::displayErrorAndQuit("Can't open another window!");
    }
    const int window_width = screen_.getWindowWidth();
    const int window_height = screen_.getWindowHeight();
    const int margin_x = window_width / 128;
    const int margin_y = window_height / 96;
    SWindow &window = window_stack_[window_stack_count_];
    ++window_stack_count_;
    left = std::max(left - margin_x, 0);
    top -= margin_y;
    right = std::min(right + margin_x, window_width);
    bottom += margin_y;
    const int scale = getScale();
    const std::vector<std::string> lines = editor_font_->wrapText(
        text_content, kMaxTitleLines, kTitleLineWidth, ((right - left) - (margin_x * 2)) / scale);
    window.text_buffer.clear();
    int title_height = 0;
    if (!lines.empty()) {
        for (const std::string &line : lines) {
            window.text_buffer += line;
            window.text_buffer += '\n';
        }
        window.text_buffer.pop_back();
        title_height =
            editor_font_->getTextHeight(window.text_buffer, scale) + editor_font_line_height_;
        bottom += title_height / 2;
        top -= title_height / 2;
    }
    top = std::max(top, 0);
    bottom = std::min(bottom, window_height);
    window.screen_backup_buffer.clear();
    if ((window_flags & kNoBackup) == 0) {
        if (special_.getUseExternalRenderer()) {
            pullExternalFrame();
        }
        const int bits_per_pixel = screen_.getBitsPerPixel();
        const std::size_t row_bytes = toBytes(right - left, bits_per_pixel);
        const std::size_t offset = toBytes(left, bits_per_pixel);
        const std::span<void *> rows = screen_.getScreenRows();
        window.screen_backup_buffer.resize(row_bytes * static_cast<std::size_t>(bottom - top));
        for (int y = top; y < bottom; ++y) {
            std::memcpy(window.screen_backup_buffer.data() +
                            (static_cast<std::size_t>(y - top) * row_bytes),
                        rowAt(rows, y) + offset, row_bytes);
        }
    }
    window.saved_clip = two_d_.getClipRect();
    window.saved_projection = two_d_.getProjection();
    window.saved_viewport_width = two_d_.getViewportWidth();
    window.saved_viewport_height = two_d_.getViewportHeight();
    window.rect = {.left = left, .top = top, .right = right, .bottom = bottom};
    two_d_.setupViewportAndClipping(left + margin_x, top + margin_y + title_height,
                                    (right - margin_x) - 1, (bottom - margin_y) - 1);
}

// Under the hardware renderer the rows don't hold the frame on the screen, so the frame is
// copied into them first and the window saves what is really there.
void CEditorTools::pullExternalFrame() {
    const std::span<void *> rows = screen_.getScreenRows();
    const auto height = static_cast<std::size_t>(screen_.getWindowHeight());
    const std::vector<void *> software_rows(rows.begin(),
                                            rows.begin() + static_cast<std::ptrdiff_t>(height));
    special_.lockFrame();
    const std::size_t row_bytes = toBytes(screen_.getWindowWidth(), screen_.getBitsPerPixel());
    for (std::size_t y = 0; y < height; ++y) {
        std::memmove(software_rows[y], rows[y], row_bytes);
    }
    special_.unlockFrame();
}

// nocedit 0x004a0dd0
void CEditorTools::restoreWindowAndCleanup() {
    if (window_stack_count_ == 0) {
        common::displayErrorAndQuit("CEditorTools::closeWindow() called but no window was opened!");
    }
    const SWindow &window = window_stack_[window_stack_count_ - 1];
    if (!window.screen_backup_buffer.empty()) {
        const int bits_per_pixel = screen_.getBitsPerPixel();
        const std::size_t row_bytes = toBytes(window.rect.right - window.rect.left, bits_per_pixel);
        const std::size_t offset = toBytes(window.rect.left, bits_per_pixel);
        const std::span<void *> rows = screen_.getScreenRows();
        for (int y = window.rect.top; y < window.rect.bottom; ++y) {
            std::memcpy(rowAt(rows, y) + offset,
                        window.screen_backup_buffer.data() +
                            (static_cast<std::size_t>(y - window.rect.top) * row_bytes),
                        row_bytes);
        }
    }
    popWindowState();
}

// nocedit 0x004a0ea0
void CEditorTools::popWindowState() {
    if (window_stack_count_ == 0) {
        common::displayErrorAndQuit("CEditorTools::popWindow() called but no window was opened!");
    }
    --window_stack_count_;
    SWindow &window = window_stack_[window_stack_count_];
    window.screen_backup_buffer = {};
    two_d_.setClipRect(window.saved_clip);
    two_d_.setProjection(window.saved_projection);
    two_d_.setViewportSize(window.saved_viewport_width, window.saved_viewport_height);
}

// The editor's also paints a background, a shadow edge and a title bar.
// nocedit 0x004a0f80
void CEditorTools::paintCurrentWindow() {
    initEditorFontMetrics();
    if (window_stack_count_ == 0) {
        common::displayErrorAndQuit("CEditorTools::paintWindow() called but no window was opened!");
    }
    const int saved_color = two_d_.getActiveRenderColor();
    const SWindow &window = window_stack_[window_stack_count_ - 1];
    const engine::SClipRect &rect = window.rect;
    matrix_.pushViewport(rect.left, rect.top, (rect.right - rect.left) + 1,
                         (rect.bottom - rect.top) + 1);
    two_d_.fillRectWithBorder(rect.left + 1, rect.top + 1, rect.right - 2, rect.bottom - 2,
                              window_content_color_, window_border_highlight_color_);
    matrix_.popViewport();
    if (window.text_buffer.empty()) {
        two_d_.setActiveRenderColor(saved_color);
        return;
    }
    const engine::SClipRect saved_clip = two_d_.getClipRect();
    two_d_.setClipRect({.left = saved_clip.left,
                        .top = rect.top,
                        .right = saved_clip.right,
                        .bottom = saved_clip.bottom});
    three_d_.setRenderAlpha(kOpaqueAlpha);
    const int scale = getScale();
    const int text_width = editor_font_->getTextWidth(window.text_buffer, scale);
    editor_font_->drawText(window.text_buffer, ((rect.left + rect.right) - text_width) / 2,
                           (editor_font_line_height_ / 2) + rect.top + 1, title_bar_color_,
                           engine::CBitFont::kNoShadow, scale);
    two_d_.setActiveRenderColor(window_border_highlight_color_);
    const int text_height = editor_font_->getTextHeight(window.text_buffer, scale);
    two_d_.drawHLine(rect.left + 1, text_height + rect.top + editor_font_line_height_,
                     rect.right - 2);
    two_d_.setClipRect(saved_clip);
    two_d_.setActiveRenderColor(saved_color);
}

// deferred: the copy of the text getClipboardText falls back on when the clipboard holds none,
//   with getClipboardText
// nocedit 0x004a1bc0
void CEditorTools::setClipboardText(std::string_view text_data) {
    clipboard_.setClipboardText(text_data);
}

} // namespace nocturne::shape
