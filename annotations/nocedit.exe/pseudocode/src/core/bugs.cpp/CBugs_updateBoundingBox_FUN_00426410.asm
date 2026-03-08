; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_00426410(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_004250f0 at 0042519c
;
; Called Functions:
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00426410
        ;   Label: core_bugs.cpp_CBugs_updateBoundingBox_FUN_00426410
    PUSH EDX                            ; 00426414
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0 ; 00426415
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042641a
    RET                                 ; 0042641d

