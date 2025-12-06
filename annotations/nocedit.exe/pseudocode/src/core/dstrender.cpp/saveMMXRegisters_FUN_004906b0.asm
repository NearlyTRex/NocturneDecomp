; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_saveMMXRegisters_FUN_004906b0(void)
;
;
; Referenced Globals:
;   ulonglong g_SavedMMX0
;   ulonglong g_SavedMMX1
;   ulonglong g_SavedMMX2
;   ulonglong g_SavedMMX3
;   ulonglong g_SavedMMX4
;   ulonglong g_SavedMMX5
;   ulonglong g_SavedMMX6
;   ulonglong g_SavedMMX7
;
; *****************************************************************************

section .text

    MOVQ qword ptr [0x02d05258],MM0     ; 004906b0 | ulonglong g_SavedMMX0
        ;   Label: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
    MOVQ qword ptr [0x02d05260],MM1     ; 004906b7 | ulonglong g_SavedMMX1
    MOVQ qword ptr [0x02d05268],MM2     ; 004906be | ulonglong g_SavedMMX2
    MOVQ qword ptr [0x02d05270],MM3     ; 004906c5 | ulonglong g_SavedMMX3
    MOVQ qword ptr [0x02d05278],MM4     ; 004906cc | ulonglong g_SavedMMX4
    MOVQ qword ptr [0x02d05280],MM5     ; 004906d3 | ulonglong g_SavedMMX5
    MOVQ qword ptr [0x02d05288],MM6     ; 004906da | ulonglong g_SavedMMX6
    MOVQ qword ptr [0x02d05290],MM7     ; 004906e1 | ulonglong g_SavedMMX7
    RET                                 ; 004906e8

