; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406210(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406210
        ;   Label: FUN_00406210
    PUSH ESI                            ; 00406211
    PUSH EBP                            ; 00406212
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406213
    LEA ESI,[EBX + 0x18]                ; 00406217
    LEA EAX,[EBX + 0x8]                 ; 0040621a
    PUSH EAX                            ; 0040621d
    CALL FUN_00403970                   ; 0040621e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406223
    TEST EAX,EAX                        ; 00406226
    JZ 0x0040626b                       ; 00406228
        ;   XREF to: 0040626b (CONDITIONAL_JUMP)  ; LAB_0040626b
    CMP dword ptr [0x01c38b40],0x0      ; 0040622a | DAT_01c38b40
    JNZ 0x00406286                      ; 00406231
        ;   XREF to: 00406286 (CONDITIONAL_JUMP)  ; LAB_00406286
    CMP dword ptr [0x006141c0],0x20     ; 00406233 | DAT_006141c0
    JNZ 0x0040627a                      ; 0040623a
        ;   XREF to: 0040627a (CONDITIONAL_JUMP)  ; LAB_0040627a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040623c | DAT_01c35e6c
    PUSH EDI                            ; 00406246
        ;   Label: LAB_00406246
    MOV EDI,0x1                         ; 00406247
    PUSH ESI                            ; 0040624c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040624d
    MOV EBP,0x2                         ; 00406250
    PUSH EAX                            ; 00406255
    MOV dword ptr [0x01c38b54],EDI      ; 00406256 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 0040625c | DAT_01c38b58
    CALL FUN_00431d90                   ; 00406262
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406267
    POP EDI                             ; 0040626a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040626b
        ;   Label: LAB_0040626b
    ADD EBX,0x18                        ; 0040626e
    SHL EAX,0x2                         ; 00406271
    ADD EAX,EBX                         ; 00406274
    POP EBP                             ; 00406276
    POP ESI                             ; 00406277
    POP EBX                             ; 00406278
    RET                                 ; 00406279
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040627a | DAT_01c35e6c
        ;   Label: LAB_0040627a
    JMP 0x00406246                      ; 00406284
        ;   XREF to: 00406246 (UNCONDITIONAL_JUMP)  ; LAB_00406246
    CMP dword ptr [0x006141c0],0x20     ; 00406286 | DAT_006141c0
        ;   Label: LAB_00406286
    JNZ 0x0040629b                      ; 0040628d
        ;   XREF to: 0040629b (CONDITIONAL_JUMP)  ; LAB_0040629b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040628f | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406246                      ; 00406299
        ;   XREF to: 00406246 (UNCONDITIONAL_JUMP)  ; LAB_00406246
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0040629b | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_0040629b
    JMP 0x00406246                      ; 004062a5
        ;   XREF to: 00406246 (UNCONDITIONAL_JUMP)  ; LAB_00406246

