; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_event_cpp_FUN_004b1b1c (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 004b1b1c
        ;   Label: core_event.cpp_FUN_004b1b1c
    MOV byte ptr [ECX + 0x6],AL         ; 004b1b1f
    MOV AX,word ptr [EDX + 0x4]         ; 004b1b22
    MOV word ptr [ECX + 0x4],AX         ; 004b1b26
    MOV EAX,dword ptr [EDX]             ; 004b1b2a
    MOV dword ptr [ECX],EAX             ; 004b1b2c
    RET 0x4                             ; 004b1b2e

