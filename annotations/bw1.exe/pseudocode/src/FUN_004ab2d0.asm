; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ab2d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab2d0
        ;   Label: FUN_004ab2d0
    PUSH ESI                            ; 004ab2d1
    PUSH EDI                            ; 004ab2d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ab2d3
    PUSH EBX                            ; 004ab2d7
    CALL FUN_004085c0                   ; 004ab2d8
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004ab2dd
    ADD EAX,0x158                       ; 004ab2e0
    PUSH EAX                            ; 004ab2e5
    CALL FUN_00468860                   ; 004ab2e6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004ab2eb
    LEA EBX,[EAX + 0xfffffea8]          ; 004ab2ee
    PUSH 0x5df0a0                       ; 004ab2f4
    LEA EAX,[EBX + 0x158]               ; 004ab2f9
    PUSH EAX                            ; 004ab2ff
    MOV dword ptr [EBX + 0x154],0x5ffd14 ; 004ab300
    CALL FUN_00468950                   ; 004ab30a
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ab30f
    MOV ESI,0x5df0ad                    ; 004ab312
    LEA EDI,[EBX + 0x2d8]               ; 004ab317
    PUSH EDI                            ; 004ab31d
    MOV AL,byte ptr [ESI]               ; 004ab31e
        ;   Label: LAB_004ab31e
    MOV byte ptr [EDI],AL               ; 004ab320
    CMP AL,0x0                          ; 004ab322
    JZ 0x004ab336                       ; 004ab324
        ;   XREF to: 004ab336 (CONDITIONAL_JUMP)  ; LAB_004ab336
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab326
    ADD ESI,0x2                         ; 004ab329
    MOV byte ptr [EDI + 0x1],AL         ; 004ab32c
    ADD EDI,0x2                         ; 004ab32f
    CMP AL,0x0                          ; 004ab332
    JNZ 0x004ab31e                      ; 004ab334
        ;   XREF to: 004ab31e (CONDITIONAL_JUMP)  ; LAB_004ab31e
    POP EDI                             ; 004ab336
        ;   Label: LAB_004ab336
    MOV EAX,EBX                         ; 004ab337
    POP EDI                             ; 004ab339
    POP ESI                             ; 004ab33a
    POP EBX                             ; 004ab33b
    RET                                 ; 004ab33c

