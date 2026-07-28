; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet *this_ptr,int camera_index,float hold_time)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   camera_index
; float            Stack[0xc]:4   hold_time
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047d6a5
;   core_platfrm.cpp_FUN_004f6170 at 004f629b
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00504316
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005135d0
        ;   Label: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005135d4
    MOV dword ptr [EAX + 0x15aac8],EDX  ; 005135d8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005135de
    MOV dword ptr [EAX + 0x15aacc],EDX  ; 005135e2
    RET                                 ; 005135e8

