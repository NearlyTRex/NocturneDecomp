#pragma once

#include "common/fwd.h"
#include "engine/2d/2d.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::shape {

// The dialog layer: a stack of modal windows drawn over whatever the screen holds, each saving
// the pixels under it and the clip it narrowed, in the editor font. Everything is measured and
// drawn at the HUD scale.
class CEditorTools {
public:
    // Up to five windows open at once.
    static constexpr std::size_t kMaxWindows = 5;
    // A window that doesn't save the screen under it.
    static constexpr std::uint32_t kNoBackup = 1;

    CEditorTools(engine::C2d &two_d, engine::CMatrix &matrix, engine::C3d &three_d,
                 engine::IScreenDevice &screen, engine::CSpecial &special, engine::CKeys &keys,
                 platform::IClock &clock);
    CEditorTools(const CEditorTools &) = delete;
    CEditorTools &operator=(const CEditorTools &) = delete;
    CEditorTools(CEditorTools &&) = delete;
    CEditorTools &operator=(CEditorTools &&) = delete;
    ~CEditorTools();

    // gEdFont: which font the dialogs use, which the application must set.
    void setEditorFont(engine::CBitFont *font);
    [[nodiscard]] engine::CBitFont *getEditorFont() const;

    // A box titled "Message" holding the message, until a key is pressed.
    void showMessage(std::string_view message);
    // A box titled "Warning" holding the message, until a key is pressed.
    void showWarning(std::string_view message);
    void showError(char *format, ...);
    void displayCenteredStatusMessage(char *format, ...);
    int showFileSelectionDialog(char *dialog_title, char *search_directory, char *file_pattern,
                                char *output_filename, std::uint32_t flags);
    int showFilenameInputDialog(char *dialog_title, char *directory_path, char *file_extension,
                                char *output_buffer, std::uint32_t flags);
    int promptForValidInteger(char *prompt_text, int *result_ptr, int enable_range_check,
                              int min_value, int max_value, int show_current_value);
    int promptForValidFloat(char *prompt_text, float *result_ptr, int enable_range_check,
                            float min_value, float max_value, int show_current_value);
    int showTextInputDialog(char *prompt_text, char *input_buffer, int buffer_size,
                            int dialog_flags);
    int showCheatInputDialog(char *prompt_text, char *input_buffer, int buffer_size,
                             int dialog_flags);
    // A window titled message_text, at least half the screen wide, showing a progress bar from 0%.
    void showCenteredProgressDialog(std::string_view message_text);
    // Redraws the top window's bar when the percentage changes or every four seconds, with the
    // time left once five seconds have passed. Fatal with no window open.
    void updatePercentage(float current_progress, float total_progress);
    // A window at least min_width by min_height, wide enough for its title, in the middle of
    // the screen and no bigger than it.
    void createCenteredModal(int min_width, int min_height, std::string_view text_content,
                             std::uint32_t window_flags);
    // A window around the rectangle, with a margin and room for its title, which leaves the clip
    // on its inside.
    void createModalWindow(int left, int top, int right, int bottom, std::string_view text_content,
                           std::uint32_t window_flags);
    // Puts back the screen under the top window and closes it.
    void restoreWindowAndCleanup();
    // Closes the top window, putting back the clip and projection it narrowed.
    void popWindowState();
    // Draws the top window: its frame, then its title over a rule.
    void paintCurrentWindow();
    std::uint32_t getTimeCycledColorByte();
    void drawMousePointer(int use_clipping);
    char *getClipboardText();
    void setClipboardText(char *text_data);
    void draw3DAxisLabels(float scale_factor, int text_color);
    void draw3DAxisLabelsAt(float scale_factor, int text_color, common::CVector3f *world_position,
                            common::UOrientationVector *orientation);
    void displayMemoryDiagnostics(char *output_buffer);
    void draw3DProjectedLine(common::CVector3f *world_point, int line_length);

    [[nodiscard]] std::size_t getWindowCount() const;

private:
    struct SWindow {
        engine::SClipRect rect;
        engine::SClipRect saved_clip;
        engine::SProjectionParams saved_projection;
        int saved_viewport_width = 0;
        int saved_viewport_height = 0;
        std::string text_buffer;
        // The screen's bytes under the window, row by row; empty when it saved none.
        std::vector<std::byte> screen_backup_buffer;
        // A progress window's last drawn percentage, -1 before the first, and in seconds when it
        // opened and was last drawn.
        int progress_percentage = -1;
        double progress_start_time = 0.0;
        double progress_timestamp = 0.0;
    };

    void showPrompt(std::string_view title, std::string_view message, int text_color);
    void drawProgress(int percentage, float fraction);
    void drawTimeRemaining(float current_progress, float total_progress, double elapsed);
    void drawCentredLine(std::string_view text, int y, int color);
    [[nodiscard]] double getSeconds() const;
    void initEditorFontMetrics();
    [[nodiscard]] int getScale() const;
    [[nodiscard]] engine::CBitFont &requireEditorFont();
    void pullExternalFrame();

    engine::C2d &two_d_;
    engine::CMatrix &matrix_;
    engine::C3d &three_d_;
    engine::IScreenDevice &screen_;
    engine::CSpecial &special_;
    engine::CKeys &keys_;
    platform::IClock &clock_;
    engine::CBitFont *editor_font_ = nullptr;
    int editor_font_max_char_width_ = 0;
    // The height of a 'j'.
    int editor_font_line_height_ = 0;
    std::array<SWindow, kMaxWindows> window_stack_;
    std::size_t window_stack_count_ = 0;
    int window_content_color_ = 0;
    int window_border_highlight_color_ = 0;
    int title_bar_color_ = 0;
    int window_font_color_ = 0;
    int warning_text_color_ = 0;
    int window_status_text_color_ = 0;
    int progress_bar_background_color_ = 0;
    int progress_bar_border_color_ = 0;
    int progress_bar_fill_color_ = 0;
};

} // namespace nocturne::shape
