; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 * core_event_cpp_FUN_004b19a1 (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004b19a1
        ;   Label: core_event.cpp_FUN_004b19a1
    AND AL,0x4                          ; 004b19a2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b19a4
    MOV EAX,dword ptr [EAX]             ; 004b19a8
    MOV dword ptr [EDX],EAX             ; 004b19aa
    MOV EAX,EDX                         ; 004b19ac
    RET                                 ; 004b19ae

