; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cf230(int param_1)
;
;
; XREF[11]:
;   FUN_00435830 at 00435cca
;   FUN_00453250 at 00453bd4
;   FUN_0045ca30 at 0045cc7b
;   FUN_004ad640 at 004ae92c
;   FUN_004af410 at 004af8bb
;   FUN_004cc990 at 004cce5c
;   FUN_004d03b0 at 004d0563
;   FUN_004d4c50 at 004d5241
;   FUN_005656f0 at 00565e45
;   FUN_0056e4d0 at 0056e659
;   ... and 1 more
;
; Called Functions:
;   FUN_0045efc0
;   FUN_00460800
;   FUN_004dee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf230
        ;   Label: FUN_004cf230
    PUSH ESI                            ; 004cf231
    PUSH EBP                            ; 004cf232
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cf233
    MOV EDX,dword ptr [EBX + 0x25604]   ; 004cf237
    XOR ESI,ESI                         ; 004cf23d
    TEST EDX,EDX                        ; 004cf23f
    JNZ 0x004cf249                      ; 004cf241
        ;   XREF to: 004cf249 (CONDITIONAL_JUMP)  ; LAB_004cf249
    MOV EAX,ESI                         ; 004cf243
    POP EBP                             ; 004cf245
    POP ESI                             ; 004cf246
    POP EBX                             ; 004cf247
    RET                                 ; 004cf248
    PUSH 0x1                            ; 004cf249
        ;   Label: LAB_004cf249
    MOV ECX,dword ptr [EDX + 0xaec]     ; 004cf24b
    PUSH ECX                            ; 004cf251
    LEA EAX,[EBX + 0x2437c]             ; 004cf252
    PUSH EAX                            ; 004cf258
    CALL FUN_004dee70                   ; 004cf259
        ;   XREF to: 004dee70 (UNCONDITIONAL_CALL)  ; undefined FUN_004dee70()
    ADD ESP,0xc                         ; 004cf25e
    TEST EAX,EAX                        ; 004cf261
    JZ 0x004cf289                       ; 004cf263
        ;   XREF to: 004cf289 (CONDITIONAL_JUMP)  ; LAB_004cf289
    MOV EBP,dword ptr [EBX + 0x25604]   ; 004cf265
    PUSH EBP                            ; 004cf26b
    MOV ESI,0x1                         ; 004cf26c
    CALL FUN_0045efc0                   ; 004cf271
        ;   XREF to: 0045efc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045efc0()
    ADD ESP,0x4                         ; 004cf276
    MOV dword ptr [EBX + 0x25604],0x0   ; 004cf279
    MOV EAX,ESI                         ; 004cf283
    POP EBP                             ; 004cf285
    POP ESI                             ; 004cf286
    POP EBX                             ; 004cf287
    RET                                 ; 004cf288
    PUSH EDI                            ; 004cf289
        ;   Label: LAB_004cf289
    MOV EDI,dword ptr [EBX + 0x25604]   ; 004cf28a
    PUSH EDI                            ; 004cf290
    CALL FUN_00460800                   ; 004cf291
        ;   XREF to: 00460800 (UNCONDITIONAL_CALL)  ; undefined FUN_00460800()
    ADD ESP,0x4                         ; 004cf296
    POP EDI                             ; 004cf299
    MOV dword ptr [EBX + 0x25604],0x0   ; 004cf29a
    MOV EAX,ESI                         ; 004cf2a4
    POP EBP                             ; 004cf2a6
    POP ESI                             ; 004cf2a7
    POP EBX                             ; 004cf2a8
    RET                                 ; 004cf2a9

