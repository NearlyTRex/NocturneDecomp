#pragma once

#include <compare>
#include <cstdint>

namespace nocturne::common {

// A value as the x87 holds it at its default precision: each result is the exact one rounded to a
// 64-bit mantissa, ties to even. For a step whose constant a double can't hold exactly, where
// working in double rounds differently. Its exponent is unbounded, which no float or double sum
// can tell apart from the x87's. A NaN keeps its sign but not its payload.
class CExtendedFloat {
public:
    // Exact.
    explicit CExtendedFloat(double value);

    [[nodiscard]] CExtendedFloat operator*(const CExtendedFloat &other) const;
    [[nodiscard]] CExtendedFloat operator+(const CExtendedFloat &other) const;
    // Unordered when either is a NaN; zeros of either sign are equal.
    [[nodiscard]] std::partial_ordering operator<=>(const CExtendedFloat &other) const;
    [[nodiscard]] bool operator==(const CExtendedFloat &other) const;
    // To the nearest float, ties to even, as FST stores it.
    [[nodiscard]] float toFloat() const;

private:
    enum class EKind : std::uint8_t { Finite, Infinite, NaN };

    CExtendedFloat(EKind kind, bool negative, std::uint64_t mantissa, int scale);
    [[nodiscard]] static CExtendedFloat indefinite();
    // This if it is a NaN, else the other if that is, which is what an operation on one returns.
    [[nodiscard]] const CExtendedFloat *findNaN(const CExtendedFloat &other) const;
    // The exact value hi * 2^(scale + 64) + lo * 2^scale, rounded.
    [[nodiscard]] static CExtendedFloat round(bool negative, std::uint64_t hi, std::uint64_t lo,
                                              int scale);
    [[nodiscard]] bool isZero() const;
    [[nodiscard]] std::strong_ordering compareMagnitude(const CExtendedFloat &other) const;
    [[nodiscard]] CExtendedFloat addFinite(const CExtendedFloat &other) const;

    EKind kind_ = EKind::Finite;
    bool negative_ = false;
    // mantissa_ * 2^scale_, the mantissa's top bit set unless the value is zero.
    std::uint64_t mantissa_ = 0;
    int scale_ = 0;
};

} // namespace nocturne::common
