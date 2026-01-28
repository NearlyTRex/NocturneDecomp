; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_event_cpp_FUN_004b1b41 (undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined2 *param_4)
;
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b1b41
        ;   Label: core_event.cpp_FUN_004b1b41
    MOV AL,byte ptr [EDX + 0x2]         ; 004b1b44
    MOV byte ptr [ECX + 0x2],AL         ; 004b1b47
    MOV AX,word ptr [EDX]               ; 004b1b4a
    MOV word ptr [ECX],AX               ; 004b1b4d
    RET 0x4                             ; 004b1b50

