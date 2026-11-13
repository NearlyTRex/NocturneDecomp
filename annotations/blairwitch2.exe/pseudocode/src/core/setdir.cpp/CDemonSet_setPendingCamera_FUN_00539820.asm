; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00539820(CDemonSet *this_ptr,int camera_index,float hold_time)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; float            Stack[0xc]:4   hold_time
;
; XREF[3]:
;   core_event.cpp_FUN_00489670 at 0048dbe4
;   core_platfrm.cpp_CPlatform_process_FUN_005184c0 at 005185eb
;   core_script.cpp_CScript_step_FUN_00522350 at 00529111
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00539820
        ;   Label: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00539820
    MOV EDX,dword ptr [ESP + 0x8]       ; 00539824
    MOV dword ptr [EAX + 0x15aec4],EDX  ; 00539828
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053982e
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 00539832
    RET                                 ; 00539838

