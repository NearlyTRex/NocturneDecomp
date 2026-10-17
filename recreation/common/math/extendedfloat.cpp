#include "common/math/extendedfloat.h"

#include <algorithm>
#include <bit>

namespace nocturne::common {
namespace {

constexpr std::uint64_t kTopBit = std::uint64_t{1} << 63U;
constexpr int kDoubleBias = 1075;
constexpr std::uint32_t kFloatSign = 0x80000000U;
constexpr std::uint32_t kFloatInfinity = 0x7f800000U;
constexpr std::uint32_t kFloatQuietNaN = 0x7fc00000U;
constexpr int kFloatMantissaBits = 24;
constexpr int kFloatMinExponent = -126;
constexpr int kFloatBias = 127;
constexpr std::uint32_t kFloatExponentLimit = 255;

// A 128-bit value, hi above lo.
struct SWide {
    std::uint64_t hi = 0;
    std::uint64_t lo = 0;
};

SWide multiplyWide(std::uint64_t a, std::uint64_t b) {
    constexpr std::uint64_t kLow = 0xffffffffU;
    const std::uint64_t low_low = (a & kLow) * (b & kLow);
    const std::uint64_t low_high = (a & kLow) * (b >> 32U);
    const std::uint64_t high_low = (a >> 32U) * (b & kLow);
    const std::uint64_t high_high = (a >> 32U) * (b >> 32U);
    const std::uint64_t middle = (low_low >> 32U) + (low_high & kLow) + (high_low & kLow);
    return {.hi = high_high + (low_high >> 32U) + (high_low >> 32U) + (middle >> 32U),
            .lo = (middle << 32U) | (low_low & kLow)};
}

// A mantissa moved count bits down from the top of 128, any bit lost past the bottom kept as a
// set lowest bit, which is all rounding needs of it.
SWide alignRight(std::uint64_t mantissa, int count) {
    if (count < 64) {
        return {.hi = mantissa >> count, .lo = (mantissa << 1U) << (63 - count)};
    }
    if (count < 128) {
        const int shift = count - 64;
        const std::uint64_t lost = mantissa & ((std::uint64_t{1} << shift) - 1U);
        return {.hi = 0, .lo = (mantissa >> shift) | static_cast<std::uint64_t>(lost != 0)};
    }
    return {.hi = 0, .lo = 1};
}

// The top bits of a mantissa above shift, rounded to nearest with ties to even.
std::uint64_t roundBelow(std::uint64_t mantissa, int shift) {
    if (shift > 64) {
        return 0;
    }
    const std::uint64_t kept = (mantissa >> 1U) >> (shift - 1);
    const std::uint64_t rest = mantissa & (~std::uint64_t{0} >> (64 - shift));
    const std::uint64_t half = std::uint64_t{1} << (shift - 1);
    if (rest > half || (rest == half && (kept & 1U) != 0)) {
        return kept + 1;
    }
    return kept;
}

} // namespace

CExtendedFloat::CExtendedFloat(double value) {
    const auto bits = std::bit_cast<std::uint64_t>(value);
    negative_ = (bits >> 63U) != 0;
    const auto exponent = static_cast<int>((bits >> 52U) & 0x7ffU);
    const std::uint64_t fraction = bits & ((std::uint64_t{1} << 52U) - 1U);
    if (exponent == 0x7ff) {
        kind_ = fraction == 0 ? EKind::Infinite : EKind::NaN;
        return;
    }
    const std::uint64_t significand =
        exponent == 0 ? fraction : fraction | (std::uint64_t{1} << 52U);
    if (significand == 0) {
        return;
    }
    const int shift = std::countl_zero(significand);
    mantissa_ = significand << shift;
    scale_ = std::max(exponent, 1) - kDoubleBias - shift;
}

CExtendedFloat::CExtendedFloat(EKind kind, bool negative, std::uint64_t mantissa, int scale)
    : kind_(kind), negative_(negative), mantissa_(mantissa), scale_(scale) {}

// The x87's real indefinite, a negative quiet NaN.
CExtendedFloat CExtendedFloat::indefinite() {
    return {EKind::NaN, true, 0, 0};
}

const CExtendedFloat *CExtendedFloat::findNaN(const CExtendedFloat &other) const {
    if (kind_ == EKind::NaN) {
        return this;
    }
    return other.kind_ == EKind::NaN ? &other : nullptr;
}

CExtendedFloat CExtendedFloat::round(bool negative, std::uint64_t hi, std::uint64_t lo, int scale) {
    if (hi == 0 && lo == 0) {
        return {EKind::Finite, false, 0, 0};
    }
    if (hi == 0) {
        hi = lo;
        lo = 0;
        scale -= 64;
    }
    const int shift = std::countl_zero(hi);
    hi = (hi << shift) | ((lo >> 1U) >> (63 - shift));
    lo <<= shift;
    scale -= shift;
    if (lo > kTopBit || (lo == kTopBit && (hi & 1U) != 0)) {
        ++hi;
        if (hi == 0) {
            hi = kTopBit;
            ++scale;
        }
    }
    return {EKind::Finite, negative, hi, scale + 64};
}

bool CExtendedFloat::isZero() const {
    return kind_ == EKind::Finite && mantissa_ == 0;
}

std::strong_ordering CExtendedFloat::compareMagnitude(const CExtendedFloat &other) const {
    const bool infinite = kind_ == EKind::Infinite;
    const bool other_infinite = other.kind_ == EKind::Infinite;
    if (infinite || other_infinite) {
        return static_cast<int>(infinite) <=> static_cast<int>(other_infinite);
    }
    if (isZero() || other.isZero()) {
        return static_cast<int>(!isZero()) <=> static_cast<int>(!other.isZero());
    }
    if (scale_ != other.scale_) {
        return scale_ <=> other.scale_;
    }
    return mantissa_ <=> other.mantissa_;
}

CExtendedFloat CExtendedFloat::operator*(const CExtendedFloat &other) const {
    if (const CExtendedFloat *nan = findNaN(other)) {
        return *nan;
    }
    const bool negative = negative_ != other.negative_;
    if (kind_ == EKind::Infinite || other.kind_ == EKind::Infinite) {
        if (isZero() || other.isZero()) {
            return indefinite();
        }
        return {EKind::Infinite, negative, 0, 0};
    }
    if (isZero() || other.isZero()) {
        return {EKind::Finite, negative, 0, 0};
    }
    const SWide product = multiplyWide(mantissa_, other.mantissa_);
    return round(negative, product.hi, product.lo, scale_ + other.scale_);
}

CExtendedFloat CExtendedFloat::operator+(const CExtendedFloat &other) const {
    if (const CExtendedFloat *nan = findNaN(other)) {
        return *nan;
    }
    if (kind_ == EKind::Infinite) {
        if (other.kind_ == EKind::Infinite && other.negative_ != negative_) {
            return indefinite();
        }
        return *this;
    }
    if (other.kind_ == EKind::Infinite) {
        return other;
    }
    if (other.isZero()) {
        return isZero() ? CExtendedFloat(EKind::Finite, negative_ && other.negative_, 0, 0) : *this;
    }
    if (isZero()) {
        return other;
    }
    return compareMagnitude(other) < 0 ? other.addFinite(*this) : addFinite(other);
}

// Both are finite and not zero, this the larger. Each is moved down a bit first so the sum
// can't carry out of 128 bits.
CExtendedFloat CExtendedFloat::addFinite(const CExtendedFloat &other) const {
    const SWide a = alignRight(mantissa_, 1);
    const SWide b = alignRight(other.mantissa_, scale_ - other.scale_ + 1);
    SWide sum;
    if (negative_ == other.negative_) {
        sum.lo = a.lo + b.lo;
        sum.hi = a.hi + b.hi + static_cast<std::uint64_t>(sum.lo < a.lo);
    } else {
        sum.lo = a.lo - b.lo;
        sum.hi = a.hi - b.hi - static_cast<std::uint64_t>(a.lo < b.lo);
    }
    return round(negative_, sum.hi, sum.lo, scale_ - 63);
}

std::partial_ordering CExtendedFloat::operator<=>(const CExtendedFloat &other) const {
    if (kind_ == EKind::NaN || other.kind_ == EKind::NaN) {
        return std::partial_ordering::unordered;
    }
    if (isZero() && other.isZero()) {
        return std::partial_ordering::equivalent;
    }
    if (negative_ != other.negative_) {
        return negative_ ? std::partial_ordering::less : std::partial_ordering::greater;
    }
    const std::strong_ordering magnitude = compareMagnitude(other);
    return negative_ ? 0 <=> magnitude : magnitude;
}

bool CExtendedFloat::operator==(const CExtendedFloat &other) const {
    return (*this <=> other) == 0;
}

float CExtendedFloat::toFloat() const {
    const std::uint32_t sign = negative_ ? kFloatSign : 0U;
    if (kind_ == EKind::NaN) {
        return std::bit_cast<float>(sign | kFloatQuietNaN);
    }
    if (kind_ == EKind::Infinite) {
        return std::bit_cast<float>(sign | kFloatInfinity);
    }
    if (isZero()) {
        return std::bit_cast<float>(sign);
    }
    // The value is in [2^exponent, 2^(exponent + 1)).
    const int exponent = scale_ + 63;
    if (exponent < kFloatMinExponent) {
        // A subnormal's bits are its mantissa, and one that rounds up to 2^23 is the least normal.
        const auto kept = static_cast<std::uint32_t>(
            roundBelow(mantissa_, 64 - kFloatMantissaBits + (kFloatMinExponent - exponent)));
        return std::bit_cast<float>(sign | kept);
    }
    auto kept = static_cast<std::uint32_t>(roundBelow(mantissa_, 64 - kFloatMantissaBits));
    auto biased = static_cast<std::uint32_t>(exponent + kFloatBias);
    if (kept >> kFloatMantissaBits != 0) {
        kept >>= 1U;
        ++biased;
    }
    if (biased >= kFloatExponentLimit) {
        return std::bit_cast<float>(sign | kFloatInfinity);
    }
    return std::bit_cast<float>(sign | (biased << 23U) | (kept & 0x7fffffU));
}

} // namespace nocturne::common
