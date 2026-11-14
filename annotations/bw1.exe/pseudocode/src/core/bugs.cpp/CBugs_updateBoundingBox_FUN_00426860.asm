; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_00426860(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_004253c0 at 0042546c
;
; Called Functions:
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00427a30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00426860
        ;   Label: core_bugs.cpp_CBugs_updateBoundingBox_FUN_00426860
    PUSH EDX                            ; 00426864
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00427a30 ; 00426865
        ;   XREF to: 00427a30 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00427a30(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042686a
    RET                                 ; 0042686d

