; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00424f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5e90
        ;   Label: FUN_004b5e90
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b5e94
    PUSH dword ptr [ESP + 0x10]         ; 004b5e98
    PUSH EDX                            ; 004b5e9c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b5e9d
    PUSH ECX                            ; 004b5ea1
    PUSH EAX                            ; 004b5ea2
    MOV dword ptr [EAX + 0xbc8c],0x0    ; 004b5ea3
    CALL FUN_00424f40                   ; 004b5ead
        ;   XREF to: 00424f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00424f40()
    ADD ESP,0x10                        ; 004b5eb2
    RET                                 ; 004b5eb5

