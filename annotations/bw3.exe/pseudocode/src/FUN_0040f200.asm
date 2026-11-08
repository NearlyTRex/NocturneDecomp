; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040f200(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f200
        ;   Label: FUN_0040f200
    PUSH ESI                            ; 0040f201
    PUSH EDI                            ; 0040f202
    SUB ESP,0x30                        ; 0040f203
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040f206
    PUSH EBX                            ; 0040f20a
    CALL FUN_004087f0                   ; 0040f20b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0040f210
    PUSH 0x0                            ; 0040f213
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040f215
    PUSH EBX                            ; 0040f21b
    LEA ESI,[ESP + 0x8]                 ; 0040f21c
    LEA EDI,[ESP + 0x20]                ; 0040f220
    CALL dword ptr [EAX + 0x1c]         ; 0040f224
    MOV ECX,0x6                         ; 0040f227
    ADD ESP,0x4                         ; 0040f22c
    LEA EAX,[ESP + 0x1c]                ; 0040f22f
    LEA ESI,[ESP + 0x4]                 ; 0040f233
    PUSH EAX                            ; 0040f237
    MOVSD.REP ES:EDI,ESI                ; 0040f238
    CALL FUN_0041daf0                   ; 0040f23a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0040f23f
    MOV ESI,EAX                         ; 0040f242
    TEST EAX,EAX                        ; 0040f244
    JNZ 0x0040f25a                      ; 0040f246
        ;   XREF to: 0040f25a (CONDITIONAL_JUMP)  ; LAB_0040f25a
    PUSH EBX                            ; 0040f248
    CALL FUN_00408830                   ; 0040f249
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040f24e
    MOV EAX,ESI                         ; 0040f251
    ADD ESP,0x30                        ; 0040f253
    POP EDI                             ; 0040f256
    POP ESI                             ; 0040f257
    POP EBX                             ; 0040f258
    RET                                 ; 0040f259
    PUSH -0x1                           ; 0040f25a
        ;   Label: LAB_0040f25a
    LEA EAX,[EBX + 0x188]               ; 0040f25c
    PUSH dword ptr [EBX + 0x184]        ; 0040f262
    PUSH EAX                            ; 0040f268
    CALL FUN_00462540                   ; 0040f269
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0040f26e
    PUSH EBX                            ; 0040f271
    CALL FUN_00408830                   ; 0040f272
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040f277
    MOV EAX,ESI                         ; 0040f27a
    ADD ESP,0x30                        ; 0040f27c
    POP EDI                             ; 0040f27f
    POP ESI                             ; 0040f280
    POP EBX                             ; 0040f281
    RET                                 ; 0040f282

