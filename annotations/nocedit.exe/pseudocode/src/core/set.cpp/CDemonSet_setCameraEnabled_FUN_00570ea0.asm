; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00570ea0(CDemonSet *this_ptr,int camera_index,int enabled)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; int              Stack[0xc]:4   enabled
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cc94
;   core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0 at 00570ef7
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 00570ea0
        ;   Label: core_set.cpp_CDemonSet_setCameraEnabled_FUN_00570ea0
    ADD EAX,dword ptr [ESP + 0x4]       ; 00570ea8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570eac
    MOV dword ptr [EAX + 0x1a4],EDX     ; 00570eb0
    RET                                 ; 00570eb6

