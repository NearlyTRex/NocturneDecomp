; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_getSelectedCameraIndex_FUN_00481920(CDemonSet *set_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   set_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005024cb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481920
        ;   Label: core_event.cpp_getSelectedCameraIndex_FUN_00481920
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 00481924
    RET                                 ; 0048192a

