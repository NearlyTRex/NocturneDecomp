; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_getSelectedCameraIndex_FUN_00492630(CDemonSet *set_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   set_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00525e21
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492630
        ;   Label: core_event.cpp_getSelectedCameraIndex_FUN_00492630
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 00492634
    RET                                 ; 0049263a

