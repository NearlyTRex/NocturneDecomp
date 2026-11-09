; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_FUN_00540ba0(CDemonSet *this_ptr,int camera_index,float hold_time)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; float            Stack[0xc]:4   hold_time
;
; XREF[3]:
;   core_event.cpp_FUN_0048c2e0 at 00490e53
;   core_platfrm.cpp_FUN_005114f0 at 0051161b
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052fb13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540ba0
        ;   Label: core_setdir.cpp_FUN_00540ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540ba4
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 00540ba8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00540bae
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 00540bb2
    RET                                 ; 00540bb8

