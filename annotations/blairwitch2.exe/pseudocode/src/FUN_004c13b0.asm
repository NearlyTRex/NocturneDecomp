; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c13b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5d8e77                       ; 004c13b0
        ;   Label: FUN_004c13b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c13b5
    PUSH EDX                            ; 004c13b9
    CALL FUN_0040c840                   ; 004c13ba
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004c13bf
    TEST EAX,EAX                        ; 004c13c2
    JZ 0x004c13d0                       ; 004c13c4
        ;   XREF to: 004c13d0 (CONDITIONAL_JUMP)  ; LAB_004c13d0
    MOV EAX,0x2                         ; 004c13c6
    LEA EAX,[EAX]                       ; 004c13cb
    MOV ECX,ECX                         ; 004c13ce
    RET                                 ; 004c13d0
        ;   Label: LAB_004c13d0

