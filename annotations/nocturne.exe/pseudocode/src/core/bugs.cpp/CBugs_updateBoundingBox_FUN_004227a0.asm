; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_004227a0(undefined4 param_1)
;
;
; XREF[1]:
;   core_bugs.cpp_FUN_00421480 at 0042152c
;
; Called Functions:
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004227a0
        ;   Label: core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0
    PUSH EDX                            ; 004227a4
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680 ; 004227a5
        ;   XREF to: 00423680 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680()
    ADD ESP,0x4                         ; 004227aa
    RET                                 ; 004227ad

