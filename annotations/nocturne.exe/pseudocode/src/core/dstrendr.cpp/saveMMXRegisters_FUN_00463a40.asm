; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __mmx_save core_dstrendr_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
;
;
; Referenced Globals:
;   _MMX_INTEGER g_MMX_INTEGER_01c03958
;   _MMX_INTEGER g_MMX_INTEGER_01c03960
;   _MMX_INTEGER g_MMX_INTEGER_01c03968
;   _MMX_INTEGER g_MMX_INTEGER_01c03970
;   _MMX_INTEGER g_MMX_INTEGER_01c03978
;   _MMX_INTEGER g_MMX_INTEGER_01c03980
;   _MMX_INTEGER g_MMX_INTEGER_01c03988
;   _MMX_INTEGER g_MMX_INTEGER_01c03990
;
; *****************************************************************************

section .text

    MOVQ qword ptr [0x01c03958],MM0     ; 00463a40 | g_MMX_INTEGER_01c03958
        ;   Label: core_dstrendr.cpp_saveMMXRegisters_FUN_00463a40
    MOVQ qword ptr [0x01c03960],MM1     ; 00463a47 | g_MMX_INTEGER_01c03960
    MOVQ qword ptr [0x01c03968],MM2     ; 00463a4e | g_MMX_INTEGER_01c03968
    MOVQ qword ptr [0x01c03970],MM3     ; 00463a55 | g_MMX_INTEGER_01c03970
    MOVQ qword ptr [0x01c03978],MM4     ; 00463a5c | g_MMX_INTEGER_01c03978
    MOVQ qword ptr [0x01c03980],MM5     ; 00463a63 | g_MMX_INTEGER_01c03980
    MOVQ qword ptr [0x01c03988],MM6     ; 00463a6a | g_MMX_INTEGER_01c03988
    MOVQ qword ptr [0x01c03990],MM7     ; 00463a71 | g_MMX_INTEGER_01c03990
    RET                                 ; 00463a78

