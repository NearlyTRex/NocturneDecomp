; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005621e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00478550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005621e0
        ;   Label: FUN_005621e0
    PUSH ESI                            ; 005621e1
    PUSH EDI                            ; 005621e2
    PUSH EBP                            ; 005621e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005621e4
    LEA ESI,[EBP + 0x2cc]               ; 005621e8
    XOR EBX,EBX                         ; 005621ee
    XOR EDI,EDI                         ; 005621f0
    MOV EAX,dword ptr [EBP + 0x2c8]     ; 005621f2
        ;   Label: LAB_005621f2
    ADD EAX,EAX                         ; 005621f8
    CMP EBX,EAX                         ; 005621fa
    JL 0x00562205                       ; 005621fc
        ;   XREF to: 00562205 (CONDITIONAL_JUMP)  ; LAB_00562205
    MOV EAX,EDI                         ; 005621fe
    POP EBP                             ; 00562200
    POP EDI                             ; 00562201
    POP ESI                             ; 00562202
    POP EBX                             ; 00562203
    RET                                 ; 00562204
    MOV EDX,dword ptr [ESP + 0x20]      ; 00562205
        ;   Label: LAB_00562205
    PUSH EDX                            ; 00562209
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056220a
    PUSH dword ptr [ESP + 0x20]         ; 0056220e
    PUSH ECX                            ; 00562212
    PUSH ESI                            ; 00562213
    CALL FUN_00478550                   ; 00562214
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 00562219
    TEST EAX,EAX                        ; 0056221c
    JZ 0x00562225                       ; 0056221e
        ;   XREF to: 00562225 (CONDITIONAL_JUMP)  ; LAB_00562225
    MOV EDI,0x1                         ; 00562220
    INC EBX                             ; 00562225
        ;   Label: LAB_00562225
    ADD ESI,0x38                        ; 00562226
    JMP 0x005621f2                      ; 00562229
        ;   XREF to: 005621f2 (UNCONDITIONAL_JUMP)  ; LAB_005621f2

