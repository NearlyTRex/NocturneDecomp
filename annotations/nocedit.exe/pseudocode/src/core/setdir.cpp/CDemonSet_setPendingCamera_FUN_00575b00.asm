; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00 (CDemonSet *this_ptr,int camera_index,float hold_time)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; float            Stack[0xc]:4   hold_time
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ad715
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054cd5b
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055f85c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00575b00
        ;   Label: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575b04
    MOV dword ptr [EAX + 0x15aeb0],EDX  ; 00575b08
    MOV EDX,dword ptr [ESP + 0xc]       ; 00575b0e
    MOV dword ptr [EAX + 0x15aeb4],EDX  ; 00575b12
    RET                                 ; 00575b18

