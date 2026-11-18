; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_getSelectedCameraIndex_FUN_004aafe0(CDemonSet *set_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   set_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00547e38
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aafe0
        ;   Label: core_event.cpp_getSelectedCameraIndex_FUN_004aafe0
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004aafe4
    RET                                 ; 004aafea

