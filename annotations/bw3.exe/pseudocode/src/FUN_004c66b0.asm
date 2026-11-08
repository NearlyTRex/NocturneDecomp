; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c66b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c403d                       ; 004c66b0
        ;   Label: FUN_004c66b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c66b5
    PUSH EDX                            ; 004c66b9
    CALL FUN_0040c790                   ; 004c66ba
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004c66bf
    TEST EAX,EAX                        ; 004c66c2
    JZ 0x004c66d0                       ; 004c66c4
        ;   XREF to: 004c66d0 (CONDITIONAL_JUMP)  ; LAB_004c66d0
    MOV EAX,0x2                         ; 004c66c6
    LEA EAX,[EAX]                       ; 004c66cb
    MOV ECX,ECX                         ; 004c66ce
    RET                                 ; 004c66d0
        ;   Label: LAB_004c66d0

