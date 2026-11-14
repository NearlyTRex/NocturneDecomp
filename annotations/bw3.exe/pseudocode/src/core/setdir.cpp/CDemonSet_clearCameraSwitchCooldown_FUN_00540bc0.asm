; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_FUN_004f7590 at 004f7690
;   core_platfrm.cpp_CPlatform_process_FUN_005114f0 at 00511681
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b889
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00540bc0
        ;   Label: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0
    FLD float ptr [EDX + 0x15aecc]      ; 00540bc4
    FLDZ                                ; 00540bca
    FCOMPP                              ; 00540bcc
    FNSTSW AX                           ; 00540bce
    SAHF                                ; 00540bd0
    JC 0x00540bd4                       ; 00540bd1
        ;   XREF to: 00540bd4 (CONDITIONAL_JUMP)  ; LAB_00540bd4
    RET                                 ; 00540bd3
    MOV dword ptr [EDX + 0x15aecc],0x1e3ce508 ; 00540bd4
        ;   Label: LAB_00540bd4
    RET                                 ; 00540bde

