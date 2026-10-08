#pragma once

namespace nocturne::shape {

void staticInit();
int qsortByString(char *a, char *b);
int calculateGridWidth();
int wildcardStringMatch(char *pattern, char *target_string, int case_sensitive);

} // namespace nocturne::shape
