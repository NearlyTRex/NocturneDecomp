; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_00420830(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_0041f390 at 0041f43c
;
; Called Functions:
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00421a00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00420830
        ;   Label: core_bugs.cpp_CBugs_updateBoundingBox_FUN_00420830
    PUSH EDX                            ; 00420834
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00421a00 ; 00420835
        ;   XREF to: 00421a00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00421a00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042083a
    RET                                 ; 0042083d

