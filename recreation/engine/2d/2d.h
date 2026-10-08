#pragma once

#include <cstdint>

namespace nocturne::engine {

void initGraphicsSystem();
void cleanupGraphicsSystem();
void plotPixel(int x, int y);
void drawLine(int x1, int y1, int x2, int y2);
void drawLine3D(int x1, int y1, std::uint32_t z1, int x2, int y2, std::uint32_t z2);
void setupViewportAndClipping(int left, int top, int right, int bottom);
int getStringWidth(char *text);
void drawText(char *text, int x, int y);
void drawString(char *text, int x_pos, int y_pos, int color);
void drawTextXY(int x, int y, char *text);
void drawTextColor(char *text, int x, int y);
void drawTextRightAlignedColor(char *text, int x, int y);
void drawTextCenteredAtColor(char *text, int x, int y);
void drawTextCenteredColor(char *text, int left_x, int right_x, int y);
void drawTextCenteredXYColor(int left_x, int right_x, int y, char *text);
int getTextWrapEnabled();
void setTextWrapEnabled(int enabled);
void disableTextWrap();
int getTextColor();
void setTextColor(int color);
void resetGraphicsSystem();
void reinitializeGraphicsSystem();
void clipLineGlobal(int x1, int y1, int x2, int y2);
void drawHLine(int x1, int y, int x2);
void drawVLine(int x, int y1, int y2);
void fillRectColor(int x1, int y1, int x2, int y2, int color);
void fillRectWithBorder(int x1, int y1, int x2, int y2, int fill_color, int border_color);
void clearInputAndWait();

} // namespace nocturne::engine
