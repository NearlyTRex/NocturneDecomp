; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
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

    MOVQ qword ptr [0x02d05258],MM0     ; 004906b0 | g_SavedMMX0
        ;   Label: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
    MOVQ qword ptr [0x02d05260],MM1     ; 004906b7 | g_SavedMMX1
    MOVQ qword ptr [0x02d05268],MM2     ; 004906be | g_SavedMMX2
    MOVQ qword ptr [0x02d05270],MM3     ; 004906c5 | g_SavedMMX3
    MOVQ qword ptr [0x02d05278],MM4     ; 004906cc | g_SavedMMX4
    MOVQ qword ptr [0x02d05280],MM5     ; 004906d3 | g_SavedMMX5
    MOVQ qword ptr [0x02d05288],MM6     ; 004906da | g_SavedMMX6
    MOVQ qword ptr [0x02d05290],MM7     ; 004906e1 | g_SavedMMX7
    RET                                 ; 004906e8

