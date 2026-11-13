; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00534700(CDemonSet *this_ptr,int camera_index,int enabled)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; int              Stack[0xc]:4   enabled
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00525089
;   core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720 at 00534757
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 00534700
        ;   Label: core_set.cpp_CDemonSet_setCameraEnabled_FUN_00534700
    ADD EAX,dword ptr [ESP + 0x4]       ; 00534708
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053470c
    MOV dword ptr [EAX + 0x1a4],EDX     ; 00534710
    RET                                 ; 00534716

