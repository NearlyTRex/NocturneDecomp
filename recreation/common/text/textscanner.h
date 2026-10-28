#pragma once

#include <cstddef>
#include <optional>
#include <string_view>

namespace nocturne::common {

// Reads text the way the game's fscanf and fgets calls did. A failed read leaves the position
// where the read stopped, as fscanf does.
class CTextScanner {
public:
    explicit CTextScanner(std::string_view text);

    [[nodiscard]] bool atEnd() const;
    // A space in a scanf format: any run of whitespace, including none.
    void skipWhitespace();
    // fgets: through the next newline, or to the end.
    void skipLine();
    // fgets, keeping the line: what skipLine would pass over, without its newline.
    std::string_view readLine();
    // A literal in a scanf format; false when the next character isn't it.
    bool expect(char literal);
    // "%d", including the whitespace it skips first.
    [[nodiscard]] std::optional<int> scanInteger();
    // "%f", likewise.
    [[nodiscard]] std::optional<float> scanFloat();
    // "%s": the next whitespace-separated word, after skipping whitespace; empty at the end.
    [[nodiscard]] std::string_view scanWord();
    // "%[^c]": everything up to the delimiter. scanf fails on an empty match, and so does this.
    [[nodiscard]] std::optional<std::string_view> scanUntil(char delimiter);
    // "%[^...]": everything up to any of the delimiters, likewise.
    [[nodiscard]] std::optional<std::string_view> scanUntilAny(std::string_view delimiters);
    // How much of the text has been read: scanf's "%n".
    [[nodiscard]] std::size_t getPosition() const;

private:
    std::string_view text_;
    std::size_t position_ = 0;
};

} // namespace nocturne::common
