; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_0053b340(CDemonSet *this_ptr,int camera_index,int enabled)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; int              Stack[0xc]:4   enabled
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c625
;   core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360 at 0053b397
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 0053b340
        ;   Label: core_set.cpp_CDemonSet_setCameraEnabled_FUN_0053b340
    ADD EAX,dword ptr [ESP + 0x4]       ; 0053b348
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053b34c
    MOV dword ptr [EAX + 0x1a4],EDX     ; 0053b350
    RET                                 ; 0053b356

