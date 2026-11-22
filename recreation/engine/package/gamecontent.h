#pragma once

#include <array>
#include <cstdint>
#include <functional>
#include <map>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {

struct SGameChapter {
    std::string name;
    std::string mission;
    // Listed only when the whole game is installed.
    bool needs_full_install = false;

    bool operator==(const SGameChapter &) const = default;
};

// The key in nocturne.ini's Game section, and the value there that opens a story's chapters.
struct SStoryUnlock {
    std::string key;
    int code = 0;

    bool operator==(const SStoryUnlock &) const = default;
};

struct SGameStory {
    std::string id;
    // Its line in the list of stories.
    std::string name;
    // Over its chapters, and over the screen as its session starts.
    std::string title;
    // Shown with the title; 0 shows none.
    int year = 0;
    // A loading picture's id, or empty for none.
    std::string loading;
    std::optional<SStoryUnlock> unlock;
    // Stories whose chapters must all be open before this one is listed.
    std::vector<std::string> required_stories;
    std::vector<SGameChapter> chapters;

    bool operator==(const SGameStory &) const = default;
};

// Where the moon indicator turns over a loading picture, and its tint.
struct SMoonWindow {
    int x = 0;
    int y = 0;
    // Red, green and blue, from 0 to 0xff00.
    std::array<int, 3> tint{};

    bool operator==(const SMoonWindow &) const = default;
};

// A 640x480 picture the loading screen shows.
struct SLoadingPicture {
    std::string id;
    // For the moon indicator; without it the moon is drawn as it is without a picture.
    std::optional<SMoonWindow> moon;
    // One of those a mission without a story picks from.
    bool random = false;

    bool operator==(const SLoadingPicture &) const = default;
};

// What the credits roll: a text file in "data", the picture beside them, and the music under them.
// The column_scroll credits: a column up the right of the image, between strips over its top and
// foot, each line centred in it; the roll ends with the music or on Cancel.
struct SCreditsColumnScroll {
    std::string font;
    // The column's left edge, the top strip's foot and the bottom strip's top, on the layout.
    int column_left = 0;
    int top_strip_bottom = 0;
    int bottom_strip_top = 0;
    int strip_colour = 0;
    int text_colour = 0;
    int heading_colour = 0;
    int shadow_colour = 0;
    // Layout pixels a second, from start_y.
    int scroll_speed = 0;
    int start_y = 0;
    // The line the credits stop before.
    std::string end_line;
    // A line starting with the marker loses it and the character after; with heading after, it
    // is a heading.
    char marker = 0;
    char heading = 0;

    bool operator==(const SCreditsColumnScroll &) const = default;
};

// BW2's credits: the image at its point, every line centred across the layout and faded by how
// far it is from the fade's centre, scrolling up and starting over until the music ends.
struct SCreditsFadeLoop {
    std::string font;
    // The image's top left on the layout.
    int image_x = 0;
    int image_y = 0;
    int text_colour = 0;
    int heading_colour = 0;
    int shadow_colour = 0;
    // Layout pixels a second, from start_y; once the top is above loop_below, from restart_y.
    int scroll_speed = 0;
    int start_y = 0;
    int loop_below = 0;
    int restart_y = 0;
    // A line at fade_centre is opaque, and fade_reach from it clear.
    int fade_centre = 0;
    int fade_reach = 0;
    std::string end_line;
    char marker = 0;
    char heading = 0;

    bool operator==(const SCreditsFadeLoop &) const = default;
};

// BW3's credits, with no image: a line centred between centre_left and centre_right, or one
// split in two columns, between black strips across the whole width, starting over once none
// is on the screen and its top is above the screen's.
struct SCreditsTwoColumn {
    std::string font;
    int centre_left = 0;
    int centre_right = 0;
    // A line led by the marker and left_column is split where the marker and right_column are;
    // one without them both draws nothing.
    int left_x = 0;
    int right_x = 0;
    char left_column = 0;
    char right_column = 0;
    int top_strip_bottom = 0;
    int bottom_strip_top = 0;
    int strip_colour = 0;
    int text_colour = 0;
    int heading_colour = 0;
    int shadow_colour = 0;
    int scroll_speed = 0;
    int start_y = 0;
    std::string end_line;
    // A line led by the marker and heading is a heading, and loses the two.
    char marker = 0;
    char heading = 0;

    bool operator==(const SCreditsTwoColumn &) const = default;
};

struct SGameCredits {
    std::string text;
    // Empty for none, as two_column draws none.
    std::string image;
    // Empty for none.
    std::string music;
    // Each style's values.
    std::optional<SCreditsColumnScroll> column_scroll;
    std::optional<SCreditsFadeLoop> fade_loop;
    std::optional<SCreditsTwoColumn> two_column;

    bool operator==(const SGameCredits &) const = default;
};

// An action's default codes in a control mode; none leaves it unbound.
struct SControlDefault {
    // The action's INI key without "key", in snake case: walk, strafe_left, next_ammo.
    std::string action;
    std::vector<int> codes;

    bool operator==(const SControlDefault &) const = default;
};

// A control mode the Control line steps through: how it reads the devices is the engine's, by
// id (keyboard, keyboard_mouse, gamepad); its label, aim and default bindings are the game's.
struct SControlMode {
    std::string id;
    std::string label;
    bool manual_aim = false;
    // Every play action the mode binds by default; one not listed starts unbound.
    std::vector<SControlDefault> defaults;

    bool operator==(const SControlMode &) const = default;
};

// A row of the bindings page.
struct SBindingRowSpec {
    std::string action;
    std::string label;

    bool operator==(const SBindingRowSpec &) const = default;
};

// The control modes, in the order the Control line steps, and the bindings page's rows above
// its hotkeys, in order.
struct SControls {
    std::vector<SControlMode> modes;
    std::vector<SBindingRowSpec> bindings;

    bool operator==(const SControls &) const = default;
};

// A run of characters drawn lower by offset pixels.
struct SFontYOffset {
    int offset = 0;
    int first = 0;
    int last = 0;

    bool operator==(const SFontYOffset &) const = default;
};

// The OS font a bitmap font hands its text to when OS text is on.
struct SOsFontSize {
    int height = 0;
    int y_offset1 = 0;
    int y_offset2 = 0;

    bool operator==(const SOsFontSize &) const = default;
};

// A bitmap font's sheet and set-up, under the role the game's code asks for it by: medium, tiny,
// theme, small_editor, console or micro.
struct SFontSpec {
    std::string id;
    std::string file;
    int width = 0;
    int height = 0;
    // The sheet's palette index left clear.
    int transparent = 0;
    // Drawn in the sheet's own colours, not grey levels the text colour covers.
    bool own_colours = false;
    std::vector<SFontYOffset> y_offsets;
    int space_width = 0;
    int shadow_x = 0;
    // None for a font that never takes OS text.
    std::optional<SOsFontSize> os_font;

    bool operator==(const SFontSpec &) const = default;
};

// The sky_scene title backdrop: the moon turning into place, bats flying their courses across it
// once it has, two layers of cloud drifting over, and the title's animation on top. Rates are
// per second; the doubles are the x87's, compared before they are rounded to float.
struct SSkyScene {
    std::string model;
    // The model the head-of-horror cheat code swaps in.
    std::string cheat_model;
    int cheat_code = 0;
    // The moon's turn: where it starts, how fast it goes, where it stops.
    double start_phase = 0.0;
    double turn_per_second = 0.0;
    double rest_phase = 0.0;
    double projection = 0.0;
    // How far the moon swings across the sky over its turn, and how far before the camera.
    double swing = 0.0;
    double depth = 0.0;
    std::array<int, 3> moon_light{};
    int moon_ambient = 0;
    // The flat colour's three channels, 16.16.
    int moon_flat = 0;
    std::string bat_model;
    std::vector<std::string> bat_courses;
    int bat_count = 0;
    // Course frames, and the model's frames, a second.
    double bat_speed = 0.0;
    double bat_animation_speed = 0.0;
    // Each bat flies up to this far off its course each way.
    double bat_scatter = 0.0;
    std::array<int, 3> bat_light{};
    int bat_ambient = 0;
    std::string cloud_image;
    int cloud_size = 0;
    // 16.16 texels a 16.16 second, as shifts of the frame time.
    int cloud_shift_x = 0;
    int cloud_shift_y = 0;
    // The title's frames, prefix then the index in frame_digits digits.
    std::string frame_prefix;
    int frame_digits = 0;
    int frame_count = 0;
    int frame_x = 0;
    int frame_y = 0;
    int frame_width = 0;
    int frame_height = 0;
    int frame_alpha = 0;
    double frame_rate = 0.0;
    // The timer wraps here; past the frames, the first is held.
    double frame_wrap = 0.0;

    bool operator==(const SSkyScene &) const = default;
};

// A figure_scene model: a frame further each frame the backdrop is drawn, from frame 1, back to
// 0 once past frame_wrap.
struct SFigureModel {
    std::string file;
    int frame_wrap = 0;

    bool operator==(const SFigureModel &) const = default;
};

// The tiled_scroll title backdrop, BW3's: one picture tiled two by two, the tiles stepping each
// drawing and wrapping, a picture over them whose alpha swings between two levels, and an
// overlay on top. Positions are on the layout.
struct STiledScroll {
    std::string tile;
    // The two tiles' starting columns and rows, and the step each drawing.
    std::array<int, 2> columns{};
    std::array<int, 2> rows{};
    int step_x = 0;
    int step_y = 0;
    // A column past wrap_x_above goes to wrap_x_to; a row under wrap_y_below to wrap_y_to.
    int wrap_x_above = 0;
    int wrap_x_to = 0;
    int wrap_y_below = 0;
    int wrap_y_to = 0;
    std::string hand;
    int hand_x = 0;
    int hand_y = 0;
    int hand_width = 0;
    int hand_height = 0;
    // From hand_alpha_start the alpha falls by hand_alpha_step to hand_alpha_low, rises to
    // hand_alpha_high, and falls again.
    int hand_alpha_start = 0;
    int hand_alpha_low = 0;
    int hand_alpha_high = 0;
    int hand_alpha_step = 0;
    std::string overlay;

    bool operator==(const STiledScroll &) const = default;
};

// The figure_scene title backdrop: a still picture, animated models before a fixed camera over
// it, and the title's animation on top. The doubles are the binary's constants.
struct SFigureScene {
    // Over the whole layout.
    std::string backdrop;
    int backdrop_alpha = 0;
    std::vector<SFigureModel> models;
    // The head-of-horror cheat code loads this in the first model's place, and none of the rest.
    std::string cheat_model;
    int cheat_code = 0;
    // The camera's rotation, row by row, its origin and its field of view.
    std::array<double, 9> camera_rotation{};
    std::array<double, 3> camera_origin{};
    double projection = 0.0;
    std::array<int, 3> light{};
    // The flat colour's three channels, 16.16.
    std::array<int, 3> flat{};
    int ambient = 0;
    // The title's frames, prefix then the index in frame_digits digits; the timer's nearest
    // frame is drawn, the first past the last.
    std::string frame_prefix;
    int frame_digits = 0;
    int frame_count = 0;
    int frame_x = 0;
    int frame_y = 0;
    int frame_width = 0;
    int frame_height = 0;
    int frame_alpha = 0;
    double frame_rate = 0.0;
    double frame_wrap = 0.0;

    bool operator==(const SFigureScene &) const = default;
};

// What startup shows: the picture while archives unpack and the game loads, "Loading..." over it,
// then the opening movie.
struct SStartup {
    std::string picture;
    int picture_alpha = 0;
    // The label's centre on the layout.
    int label_x = 0;
    int label_y = 0;
    std::string label_font;
    int label_colour = 0;
    std::string movie_directory;
    std::string movie;

    bool operator==(const SStartup &) const = default;
};

// The moon loading indicator: the moon turning in its light with a glow before it, in a picture's
// window, in the corner window it is given, or over the whole screen above a status line.
struct SMoonIndicator {
    std::string model;
    std::string glow_texture;
    // A picture's moon window's size, and the corner window, on the layout.
    int window_size = 0;
    int corner_x = 0;
    int corner_y = 0;
    int corner_size = 0;
    // Red, green and blue, from 0 to 0xff00, without a picture's own.
    std::array<int, 3> default_tint{};
    int full_projection = 0;
    int window_projection = 0;
    // World units before the camera.
    int depth = 0;
    int light_reach = 0;
    int ambient = 0;
    // The glow's half side, 256 to a world unit.
    int glow_half_size = 0;
    // Left, top, width and height on a 640x480 screen, scaled to the screen's.
    std::array<int, 4> status_box{};
    int status_box_colour = 0;
    std::string status_font;
    int status_colour = 0;

    bool operator==(const SMoonIndicator &) const = default;
};

// A line of the difficulty list, and the puzzle and combat modes it sets: 0 normal, 1 hard.
struct SStoryDifficulty {
    std::string label;
    int puzzle = 0;
    int combat = 0;

    bool operator==(const SStoryDifficulty &) const = default;
};

// The story_list story select: the stories, then the chosen one's chapters, then a difficulty.
struct SStorySelect {
    // A file only a whole install has; without it the install is partial.
    std::string full_install_probe;
    // The loading screen's frames before the chosen mission loads.
    int loading_frames = 0;
    // Listed under the chosen story's title; Cancel goes back to the stories. None asks for no
    // difficulty.
    std::vector<SStoryDifficulty> difficulties;

    bool operator==(const SStorySelect &) const = default;
};

// The direct_start story select, BW2's and BW3's: START plays the first story's first chapter,
// with no list.
struct SDirectStart {
    // The loading screen's frames before the mission loads.
    int loading_frames = 0;

    bool operator==(const SDirectStart &) const = default;
};

// The font the chapter title takes on a screen shorter than below_height; 0 for any height.
struct SChapterTitleFont {
    int below_height = 0;
    std::string font;

    bool operator==(const SChapterTitleFont &) const = default;
};

// The chosen story's year and title over the game's bottom left for its first seconds.
struct SChapterTitle {
    int seconds = 0;
    // {year} and {title} stand for the story's; a story with no year shows its title alone.
    std::string format;
    int colour = 0;
    int shadow = 0;
    int alpha = 0;
    // Glyph widths in from the left and up from the foot.
    int inset_across = 0;
    int inset_up = 0;
    // The first whose height the screen is under; the last has none.
    std::vector<SChapterTitleFont> fonts;

    bool operator==(const SChapterTitle &) const = default;
};

// Colours are palette indices; a shadow of kNoMenuShadow draws none.
inline constexpr int kNoMenuShadow = -1;

// A copy of a line drawn under it, offset in layout pixels and in its own colour, as BW2 shadows
// its menus.
struct SMenuDrop {
    int x = 0;
    int y = 0;
    int colour = 0;

    bool operator==(const SMenuDrop &) const = default;
};

// Where a menu's title and items start across the layout.
enum class EMenuAlign : std::uint8_t {
    // At the layout's `left`.
    Left,
    // Each about the layout's middle, as BW2's are.
    Centre,
};

// A corner a footer line is placed from.
enum class EFooterCorner : std::uint8_t {
    BottomLeft,
    BottomRight,
    TopLeft,
    TopRight,
};

// Whose corner: the screen's, as Nocturne's footer hugs a wide screen's edges, or the 640x480
// layout's, as BW1's copyright ends at 619 on it.
enum class EFooterEdge : std::uint8_t {
    Screen,
    Layout,
};

// Where a footer line goes: its outer edges x and y layout pixels in from the corner.
struct SFooterPlace {
    EFooterCorner corner = EFooterCorner::BottomLeft;
    EFooterEdge edge = EFooterEdge::Screen;
    int x = 0;
    int y = 0;

    bool operator==(const SFooterPlace &) const = default;
};

// A page's title, and the gap in lines between it and the page's lines.
struct SMenuTitle {
    int colour = 0;
    int shadow = 0;
    int gap_lines = 0;
    std::optional<SMenuDrop> drop;
    // A [[font]] id; empty for the items' font.
    std::string font;

    bool operator==(const SMenuTitle &) const = default;
};

// Copies of the selected item drawn about it at random offsets and alphas.
struct SMenuGlow {
    int colour = 0;
    int copies = 0;
    // Pulsing with the title backdrop's animation; without it the selected item is steady.
    bool flicker = false;
    // The glowing item's own colour; none draws it in the copies' colour, as Nocturne did.
    std::optional<int> item_colour;

    bool operator==(const SMenuGlow &) const = default;
};

// Where a menu line goes on the layout: its left edge at x, or its middle there when centred.
struct SMenuPoint {
    int x = 0;
    int y = 0;
    bool centred = false;

    bool operator==(const SMenuPoint &) const = default;
};

struct SMenuItems {
    // A [[font]] id, for the lines under a title.
    std::string font;
    // Those of a list without a title, as BW3's main menu; empty for font.
    std::string untitled_font;
    // Each line of a list without a title at its own point, as BW3's main menu centres its
    // lines on 320; lines past the last follow it as they would without them.
    std::vector<SMenuPoint> untitled_positions;
    int colour = 0;
    int selected_colour = 0;
    int alpha = 0;
    int shadow = 0;
    // Lines from one item to the next, under a title and without one.
    int spacing_titled = 0;
    int spacing_untitled = 0;
    SMenuGlow glow;
    std::optional<SMenuDrop> drop;

    bool operator==(const SMenuItems &) const = default;
};

// The copyright in the screen's bottom right and the build's line in a corner.
struct SMenuFooter {
    std::string font;
    int colour = 0;
    int shadow = 0;
    int version_alpha = 0;
    SFooterPlace copyright;
    // The recreation's build line, where the game drew its version, or Nocturne's when it drew
    // none.
    SFooterPlace version;

    bool operator==(const SMenuFooter &) const = default;
};

// A glyph beside the title art, drawn in the footer's font and colours.
struct SMenuTrademark {
    int x = 0;
    int y = 0;
    // The character, in the font's Windows-1252.
    int glyph = 0;
    int alpha = 0;

    bool operator==(const SMenuTrademark &) const = default;
};

// The monitor calibration: each step over the image, the title above and the prompt below.
struct SMenuCalibration {
    std::string image;
    std::vector<std::string> steps;
    std::string title;
    // After each step's text.
    std::string prompt;
    std::string font;
    int colour = 0;
    // The title's line from the top, and the prompt's from the bottom.
    int title_lines = 0;
    int prompt_lines = 0;

    bool operator==(const SMenuCalibration &) const = default;
};

// The sound page's level bars, each drawn in a frame one on from the last column's.
struct SMenuSpectrum {
    std::vector<std::string> frames;
    // Frames the counter steps a second.
    int fps = 0;
    // Layout pixels from one bar to the next, and half a bar's width.
    int pitch = 0;
    int half_width = 0;
    // The margin each side of a channel's share of the screen's width, as a fraction of it.
    int margin_divisor = 0;
    // A full level's height, as a percentage of the screen's.
    int height_percent = 0;
    int alpha = 0;
    // A bar right of the middle is drawn as far left of the screen's right edge, so the right
    // half runs backwards, as BW2's does.
    bool mirrored = false;

    bool operator==(const SMenuSpectrum &) const = default;
};

// The modal bar a sensitivity is set on.
struct SMenuSlider {
    // Its width, as share parts of the screen's.
    int width_share = 0;
    int width_parts = 0;
    int height = 0;
    int bar_colour = 0;
    int trough_colour = 0;
    int border_colour = 0;
    int text_colour = 0;
    int text_shadow = 0;

    bool operator==(const SMenuSlider &) const = default;
};

// The movies the main menu plays when its music ends, one at random.
struct SMenuAttract {
    std::string directory;
    std::vector<std::string> movies;

    bool operator==(const SMenuAttract &) const = default;
};

// The menu lines a game shows for features only some games have.
struct SMenuFeatures {
    // The options page's puzzle and combat difficulty lines, before Credits.
    bool difficulty = false;

    bool operator==(const SMenuFeatures &) const = default;
};

// What the menus play: one sample for an output rate of 30000Hz or less, one for the rest.
struct SMenuMusic {
    std::string low_rate;
    std::string high_rate;

    bool operator==(const SMenuMusic &) const = default;
};

// How the menus look and where their lists go on the front end's layout, a list moving up to fit
// the screen.
struct SMenuLayout {
    // The items' left edge, where they start unless centred.
    int left = 0;
    EMenuAlign align = EMenuAlign::Left;
    // A list without a title, the main menu's among them.
    int top = 0;
    int titled_top = 0;
    // Beside the title art, or none.
    std::optional<SMenuTrademark> trademark;
    // A titled page's own top, by its id; a page not listed takes titled_top.
    std::map<std::string, int, std::less<>> page_tops;
    SMenuTitle title;
    SMenuItems item;
    SMenuFooter footer;
    SMenuCalibration calibration;
    // The hero type the options pages show the controls of, whoever is playing.
    int options_hero = 0;
    // The most characters of the 3D card's name the graphic page shows, "..." standing for the
    // rest; its list shows the whole name.
    int card_name_length = 0;
    // What the sound page plays as the effects volume changes.
    std::string effects_sample;
    // None draws no bars.
    std::optional<SMenuSpectrum> spectrum;
    SMenuSlider slider;
    // None plays no movies.
    std::optional<SMenuAttract> attract;
    SMenuFeatures features;
    SMenuMusic music;

    bool operator==(const SMenuLayout &) const = default;
};

// The style each part of the front end is drawn in, by what it draws rather than by game, so a
// game takes any mix of the parts this build has.
struct SFrontEndParts {
    // Behind the main menu.
    std::optional<std::string> title_backdrop;
    // What shows a level loading.
    std::optional<std::string> loading_indicator;
    // How the credits roll.
    std::optional<std::string> credits;
    // How START picks the mission.
    std::optional<std::string> story_select;

    bool operator==(const SFrontEndParts &) const = default;
};

// The pointer the dialogs draw: it cycles through four colours, a phase each 65536 game-clock
// ticks.
struct SPointerLook {
    // Colour-cube entries.
    std::array<int, 4> cube_colours{};
    // Its size before any cursor sets one, and a cursor's height that gives none.
    int size = 0;
    int default_height = 0;

    bool operator==(const SPointerLook &) const = default;
};

// Times are game-clock ticks, 18 x 65536 a second.
struct SScrollBarLook {
    // A held press repeats after the first delay, then every repeat delay.
    int first_repeat_ticks = 0;
    int repeat_ticks = 0;
    int track_fill_colour = 0;
    int track_border_colour = 0;

    bool operator==(const SScrollBarLook &) const = default;
};

// The pick lists every front-end and editor list draws.
struct SListLook {
    int item_colour = 0;
    int disabled_colour = 0;
    // The selection's highlight, and its colour once picked.
    int selected_colour = 0;
    int confirmed_colour = 0;
    int separator_colour = 0;
    int alpha = 0;
    int shadow = 0;
    // Either side of a column's text, at the HUD scale; then the window's room around the
    // columns.
    int column_padding = 0;
    int margin_width = 0;
    int margin_height = 0;
    // A field is followed by a gap of this fraction of the screen's width.
    int field_gap_divisor = 0;
    // A row is a line of the font and these pixels more.
    int row_extra = 0;
    // The lines of the screen's height a list leaves free, and the share of its width its
    // columns may take.
    int reserved_lines = 0;
    int width_share = 0;
    int width_parts = 0;
    int double_click_ticks = 0;
    SPointerLook pointer;
    SScrollBarLook scroll_bar;

    bool operator==(const SListLook &) const = default;
};

// The windows, prompts, progress bar and controls of every dialog.
struct SDialogLook {
    int content_colour = 0;
    int border_colour = 0;
    int title_colour = 0;
    // A message's text, a warning's and an error's.
    int text_colour = 0;
    int warning_colour = 0;
    // The progress bar's status line, and the status message's.
    int window_status_colour = 0;
    int status_colour = 0;
    int progress_background_colour = 0;
    int progress_border_colour = 0;
    int progress_fill_colour = 0;
    // A control's edges lit and shaded, its face, and its marks.
    int bevel_highlight_colour = 0;
    int bevel_shade_colour = 0;
    int bevel_face_colour = 0;
    int bevel_mark_colour = 0;
    // A window's room each side, as a fraction of the screen's width and height.
    int margin_width_divisor = 0;
    int margin_height_divisor = 0;
    // The controls' grid, as a fraction of the screen's width, and a button's room above its
    // text, as a fraction of its height.
    int grid_divisor = 0;
    int button_margin_divisor = 0;
    // A prompt's room around its text: widest characters across, lines down.
    int prompt_padding_chars = 0;
    int prompt_padding_lines = 0;

    bool operator==(const SDialogLook &) const = default;
};

// English text to a language's, as msglist.txt maps it.
using TranslationTable = std::map<std::string, std::string, std::less<>>;

// What the shipped binary hard-coded about its own game, as a package gives it. Whatever a
// package leaves unset an earlier one's gives.
struct SGameContent {
    // The game's name as its own folders spell it, such as the one in the user's cache.
    std::optional<std::string> title;
    // Each part set by the package that sets it last.
    SFrontEndParts front_end;
    std::optional<std::string> copyright;
    // With the (c), which only the OS fonts have.
    std::optional<std::string> copyright_os_font;
    std::optional<SGameCredits> credits;
    std::optional<SMenuLayout> menu;
    // By id; a later package's replaces an earlier one's with the same id.
    std::vector<SFontSpec> fonts;
    std::optional<SControls> controls;
    std::optional<SListLook> list;
    std::optional<SDialogLook> dialog;
    std::optional<SStartup> startup;
    // The sky_scene title backdrop's values.
    std::optional<SSkyScene> sky_scene;
    // The figure_scene title backdrop's values.
    std::optional<SFigureScene> figure_scene;
    // The tiled_scroll title backdrop's values.
    std::optional<STiledScroll> tiled_scroll;
    std::vector<SLoadingPicture> loading;
    // The moon loading indicator's values.
    std::optional<SMoonIndicator> moon_indicator;
    std::vector<SGameStory> stories;
    // The story_list style's values.
    std::optional<SStorySelect> story_select;
    // The direct_start style's values.
    std::optional<SDirectStart> direct_start;
    // None shows no title.
    std::optional<SChapterTitle> chapter_title;
    // The engine's English text to the game's, before translation; key by key over earlier
    // packages'.
    TranslationTable labels;
    // By language code.
    std::map<std::string, TranslationTable, std::less<>> translations;

    bool operator==(const SGameContent &) const = default;
};

struct SMergedGameContent {
    SGameContent content;
    // A story naming a loading picture or another story that no package has.
    std::vector<std::string> notes;
};

// The packages' content, first loaded first. A later package's value wins, and its story or
// loading picture replaces an earlier one with the same id where it stands; new ones go at the end.
[[nodiscard]] SMergedGameContent mergeGameContent(std::span<const SGameContent *const> in_order);

} // namespace nocturne::engine
