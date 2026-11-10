; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_004229f0(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 00421531
;
; Called Functions:
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004229f0
        ;   Label: core_bugs.cpp_CBugs_updateBoundingBox_FUN_004229f0
    PUSH EDX                            ; 004229f4
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0 ; 004229f5
        ;   XREF to: 00423bc0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004229fa
    RET                                 ; 004229fd

