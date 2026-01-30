; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_FUN_004b1970(int param_1)
;
; Parameters:
; int              Stack[0x4]:4   param_1
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055da1b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1970
        ;   Label: core_event.cpp_FUN_004b1970
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 004b1974
    RET                                 ; 004b197a

