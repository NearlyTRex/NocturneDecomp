; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_event_cpp_FUN_004b1b31 (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
;
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b1b31
        ;   Label: core_event.cpp_FUN_004b1b31
    MOV AL,byte ptr [EDX + 0x4]         ; 004b1b34
    MOV byte ptr [ECX + 0x4],AL         ; 004b1b37
    MOV EAX,dword ptr [EDX]             ; 004b1b3a
    MOV dword ptr [ECX],EAX             ; 004b1b3c
    RET 0x4                             ; 004b1b3e

