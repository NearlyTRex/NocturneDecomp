; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_FUN_004b19b1(int *param_1)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004b19b1
        ;   Label: core_event.cpp_FUN_004b19b1
    AND AL,0x4                          ; 004b19b2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b19b4
    MOV EAX,dword ptr [EAX]             ; 004b19b8
    MOV dword ptr [EDX],EAX             ; 004b19ba
    MOV EAX,EDX                         ; 004b19bc
    RET                                 ; 004b19be

