; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __mmx_save core_dstrendr_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
;
;
; Referenced Globals:
;   _MMX_INTEGER g_SavedMMX0
;   _MMX_INTEGER g_SavedMMX1
;   _MMX_INTEGER g_SavedMMX2
;   _MMX_INTEGER g_SavedMMX3
;   _MMX_INTEGER g_SavedMMX4
;   _MMX_INTEGER g_SavedMMX5
;   _MMX_INTEGER g_SavedMMX6
;   _MMX_INTEGER g_SavedMMX7
;
; *****************************************************************************

section .text

    MOVQ qword ptr [0x01c03958],MM0     ; 00463a40 | g_SavedMMX0
        ;   Label: core_dstrendr.cpp_saveMMXRegisters_FUN_00463a40
    MOVQ qword ptr [0x01c03960],MM1     ; 00463a47 | g_SavedMMX1
    MOVQ qword ptr [0x01c03968],MM2     ; 00463a4e | g_SavedMMX2
    MOVQ qword ptr [0x01c03970],MM3     ; 00463a55 | g_SavedMMX3
    MOVQ qword ptr [0x01c03978],MM4     ; 00463a5c | g_SavedMMX4
    MOVQ qword ptr [0x01c03980],MM5     ; 00463a63 | g_SavedMMX5
    MOVQ qword ptr [0x01c03988],MM6     ; 00463a6a | g_SavedMMX6
    MOVQ qword ptr [0x01c03990],MM7     ; 00463a71 | g_SavedMMX7
    RET                                 ; 00463a78

