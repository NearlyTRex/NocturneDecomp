; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aa240(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a9ff0 at 004aa03d
;   FUN_004aa1d0 at 004aa1de
;
; Called Functions:
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa240
        ;   Label: FUN_004aa240
    PUSH ESI                            ; 004aa241
    PUSH EDI                            ; 004aa242
    PUSH EBP                            ; 004aa243
    MOV EDI,dword ptr [ESP + 0x14]      ; 004aa244
    MOV EBP,dword ptr [ESP + 0x18]      ; 004aa248
    MOV EDX,dword ptr [EDI + 0x34e8]    ; 004aa24c
    XOR EBX,EBX                         ; 004aa252
    TEST EDX,EDX                        ; 004aa254
    JLE 0x004aa27a                      ; 004aa256
        ;   XREF to: 004aa27a (CONDITIONAL_JUMP)  ; LAB_004aa27a
    LEA ESI,[EDI + 0x34ec]              ; 004aa258
    PUSH EBP                            ; 004aa25e
        ;   Label: LAB_004aa25e
    PUSH ESI                            ; 004aa25f
    CALL FUN_005c04e0                   ; 004aa260
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004aa265
    TEST EAX,EAX                        ; 004aa268
    JZ 0x004aa284                       ; 004aa26a
        ;   XREF to: 004aa284 (CONDITIONAL_JUMP)  ; LAB_004aa284
    INC EBX                             ; 004aa26c
    MOV ECX,dword ptr [EDI + 0x34e8]    ; 004aa26d
    ADD ESI,0x1e                        ; 004aa273
    CMP EBX,ECX                         ; 004aa276
    JL 0x004aa25e                       ; 004aa278
        ;   XREF to: 004aa25e (CONDITIONAL_JUMP)  ; LAB_004aa25e
    MOV EAX,0xffffffff                  ; 004aa27a
        ;   Label: LAB_004aa27a
    POP EBP                             ; 004aa27f
    POP EDI                             ; 004aa280
    POP ESI                             ; 004aa281
    POP EBX                             ; 004aa282
    RET                                 ; 004aa283
    MOV EAX,EBX                         ; 004aa284
        ;   Label: LAB_004aa284
    POP EBP                             ; 004aa286
    POP EDI                             ; 004aa287
    POP ESI                             ; 004aa288
    POP EBX                             ; 004aa289
    RET                                 ; 004aa28a

