; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
;
;
; Referenced Globals:
;   undefined4 DAT_01c03958
;   undefined4 DAT_01c03960
;   undefined4 DAT_01c03968
;   undefined4 DAT_01c03970
;   undefined4 DAT_01c03978
;   undefined4 DAT_01c03980
;   undefined4 DAT_01c03988
;   undefined4 DAT_01c03990
;
; *****************************************************************************

section .text

    MOVQ qword ptr [0x01c03958],MM0     ; 00463a40 | DAT_01c03958
        ;   Label: core_dstrender.cpp_saveMMXRegisters_FUN_00463a40
    MOVQ qword ptr [0x01c03960],MM1     ; 00463a47 | DAT_01c03960
    MOVQ qword ptr [0x01c03968],MM2     ; 00463a4e | DAT_01c03968
    MOVQ qword ptr [0x01c03970],MM3     ; 00463a55 | DAT_01c03970
    MOVQ qword ptr [0x01c03978],MM4     ; 00463a5c | DAT_01c03978
    MOVQ qword ptr [0x01c03980],MM5     ; 00463a63 | DAT_01c03980
    MOVQ qword ptr [0x01c03988],MM6     ; 00463a6a | DAT_01c03988
    MOVQ qword ptr [0x01c03990],MM7     ; 00463a71 | DAT_01c03990
    RET                                 ; 00463a78

