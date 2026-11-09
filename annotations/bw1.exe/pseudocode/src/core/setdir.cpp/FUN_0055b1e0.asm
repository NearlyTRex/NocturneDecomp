; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_FUN_0055b1e0(CDemonSet *this_ptr,int camera_index,float hold_time)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; float            Stack[0xc]:4   hold_time
;
; XREF[3]:
;   core_event.cpp_FUN_004a1d00 at 004a64a3
;   core_platfrm.cpp_FUN_00539810 at 0053993b
;   core_script.cpp_CScript_step_FUN_00544460 at 0054a42c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055b1e0
        ;   Label: core_setdir.cpp_FUN_0055b1e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055b1e4
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 0055b1e8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055b1ee
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 0055b1f2
    RET                                 ; 0055b1f8

