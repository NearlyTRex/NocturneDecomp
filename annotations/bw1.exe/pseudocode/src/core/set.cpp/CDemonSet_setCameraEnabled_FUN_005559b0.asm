; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0(CDemonSet *this_ptr,int camera_index,int enabled)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; int              Stack[0xc]:4   enabled
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00546f3e
;   core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0 at 00555a07
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 005559b0
        ;   Label: core_set.cpp_CDemonSet_setCameraEnabled_FUN_005559b0
    ADD EAX,dword ptr [ESP + 0x4]       ; 005559b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005559bc
    MOV dword ptr [EAX + 0x1a4],EDX     ; 005559c0
    RET                                 ; 005559c6

