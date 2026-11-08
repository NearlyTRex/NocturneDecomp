; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0055b254(void)
;
;
; XREF[3]:
;   FUN_0043b7f0 at 0043ba1a
;   FUN_0052fad0 at 0052fe38
;   FUN_00538470 at 005385a6
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined8 DAT_0061c78c
;   undefined4 DAT_0061c794
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e54
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055b254
        ;   Label: FUN_0055b254
    PUSH EDI                            ; 0055b255
    PUSHAD                              ; 0055b256
    CLD                                 ; 0055b257
    PUSH DS                             ; 0055b258
    POP ES                              ; 0055b259
    MOV EDI,dword ptr [0x01c2b64c]      ; 0055b25a | DAT_01c2b64c
    MOV EAX,[0x01c35e4c]                ; 0055b260 | DAT_01c35e4c
    MOV ECX,dword ptr [0x006141b8]      ; 0055b265 | DAT_006141b8
    MUL ECX                             ; 0055b26b
    SHL EAX,0x2                         ; 0055b26d
    ADD EDI,EAX                         ; 0055b270
    MOV EAX,[0x01c35e54]                ; 0055b272 | DAT_01c35e54
    SUB EAX,dword ptr [0x01c35e4c]      ; 0055b277 | DAT_01c35e4c
    INC EAX                             ; 0055b27d
    MOV ECX,dword ptr [0x006141b8]      ; 0055b27e | DAT_006141b8
    MUL ECX                             ; 0055b284
    MOV ECX,EAX                         ; 0055b286
    FLD double ptr [0x0061c78c]         ; 0055b288 | DAT_0061c78c
    FST double ptr [EDI]                ; 0055b28e
        ;   Label: LAB_0055b28e
    FST double ptr [EDI + 0x8]          ; 0055b290
    FST double ptr [EDI + 0x10]         ; 0055b293
    FST double ptr [EDI + 0x18]         ; 0055b296
    FST double ptr [EDI + 0x20]         ; 0055b299
    FST double ptr [EDI + 0x28]         ; 0055b29c
    FST double ptr [EDI + 0x30]         ; 0055b29f
    FST double ptr [EDI + 0x38]         ; 0055b2a2
    ADD EDI,0x40                        ; 0055b2a5
    SUB ECX,0x10                        ; 0055b2a8
    JG 0x0055b28e                       ; 0055b2ab
        ;   XREF to: 0055b28e (CONDITIONAL_JUMP)  ; LAB_0055b28e
    FSTP double ptr [0x0061c794]        ; 0055b2ad | DAT_0061c794
    POPAD                               ; 0055b2b3
    POP EDI                             ; 0055b2b4
    POP ESI                             ; 0055b2b5
    RET                                 ; 0055b2b6

