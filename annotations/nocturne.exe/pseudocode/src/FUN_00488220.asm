; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488220(void)
;
;
; XREF[1]:
;   FUN_0048af70 at 0048afc1
;
; Referenced Globals:
;   string s_fr46%03d.raw_0058139c
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488220
        ;   Label: FUN_00488220
    PUSH ESI                            ; 00488221
    PUSH EDI                            ; 00488222
    PUSH EBP                            ; 00488223
    MOV EDI,0x1c09c28                   ; 00488224
    MOV ESI,0xbe                        ; 00488229
    XOR EBX,EBX                         ; 0048822e
    ADD EDI,0x8                         ; 00488230
    IMUL EAX,EBX,0x18                   ; 00488233
        ;   Label: LAB_00488233
    PUSH ESI                            ; 00488236
    PUSH 0x58139c                       ; 00488237 | = "fr46%03d.raw"
    MOV EBP,0x1c09c28                   ; 0048823c
    PUSH EDI                            ; 00488241
    ADD EBP,EAX                         ; 00488242
    CALL FUN_00563c90                   ; 00488244
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 00488249
    PUSH EBP                            ; 0048824c
    MOV EDX,dword ptr [0x005ae704]      ; 0048824d | DAT_005ae704
    INC ESI                             ; 00488253
    PUSH EDX                            ; 00488254 | DAT_01b4d738
    ADD EDI,0x18                        ; 00488255
    INC EBX                             ; 00488258
    CALL FUN_00461eb0                   ; 00488259
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 0048825e
    CMP EBX,0x14                        ; 00488261
    JL 0x00488233                       ; 00488264
        ;   XREF to: 00488233 (CONDITIONAL_JUMP)  ; LAB_00488233
    POP EBP                             ; 00488266
    POP EDI                             ; 00488267
    POP ESI                             ; 00488268
    POP EBX                             ; 00488269
    RET                                 ; 0048826a

