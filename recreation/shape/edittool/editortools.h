#pragma once

#include "core/fwd.h"
#include "shape/fwd.h"

#include <cstdint>

namespace nocturne::shape {

class CEditorTools {
public:
    CEditorTools();
    ~CEditorTools();

    void showMessage(char *format, ...);
    void showWarning(char *format, ...);
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
    void showCenteredProgressDialog(char *message_text);
    void updatePercentage(float current_progress, float total_progress);
    void createCenteredModal(int min_width, int min_height, char *text_content,
                             std::uint32_t window_flags);
    void restoreWindowAndCleanup();
    void paintCurrentWindow();
    std::uint32_t getTimeCycledColorByte();
    void drawMousePointer(int use_clipping);
    char *getClipboardText();
    void setClipboardText(char *text_data);
    void draw3DAxisLabels(float scale_factor, int text_color);
    void draw3DAxisLabelsAt(float scale_factor, int text_color, core::CVector3f *world_position,
                            core::UOrientationVector *orientation);
    void displayMemoryDiagnostics(char *output_buffer);
    void draw3DProjectedLine(core::CVector3f *world_point, int line_length);
};

} // namespace nocturne::shape
