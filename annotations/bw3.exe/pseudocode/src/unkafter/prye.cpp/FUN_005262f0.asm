; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_prye_cpp_FUN_005262f0(int param_1)
;
;
; XREF[1]:
;   unkafter_prye.cpp_FUN_00525930 at 00525953
;
; Referenced Globals:
;   undefined4 DAT_005e3508
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005262f0
        ;   Label: unkafter_prye.cpp_FUN_005262f0
    PUSH ESI                            ; 005262f1
    PUSH EDI                            ; 005262f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005262f3
    MOV EDX,dword ptr [EBX + 0x2628]    ; 005262f7
    XOR ESI,ESI                         ; 005262fd
    TEST EDX,EDX                        ; 005262ff
    JNZ 0x0052634d                      ; 00526301
        ;   XREF to: 0052634d (CONDITIONAL_JUMP)  ; LAB_0052634d
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 00526303
        ;   Label: LAB_00526303
    TEST ECX,ECX                        ; 00526309
    JZ 0x00526362                       ; 0052630b
        ;   XREF to: 00526362 (CONDITIONAL_JUMP)  ; LAB_00526362
    MOV EDI,dword ptr [ECX + 0x2e0]     ; 0052630d
    MOV EAX,ECX                         ; 00526313
    CMP EDI,0x3                         ; 00526315
    JNZ 0x00526362                      ; 00526318
        ;   XREF to: 00526362 (CONDITIONAL_JUMP)  ; LAB_00526362
    PUSH ECX                            ; 0052631a
    MOV EDX,dword ptr [ECX + 0x154]     ; 0052631b
    CALL dword ptr [EDX + 0xe8]         ; 00526321
    ADD ESP,0x4                         ; 00526327
    TEST EAX,EAX                        ; 0052632a
    JZ 0x00526362                       ; 0052632c
        ;   XREF to: 00526362 (CONDITIONAL_JUMP)  ; LAB_00526362
    FLD float ptr [0x005e3508]          ; 0052632e | DAT_005e3508
        ;   Label: LAB_0052632e
    MOV dword ptr [EBX + 0x20b64],0x3   ; 00526334
    MOV EAX,0x1                         ; 0052633e
    FSTP float ptr [EBX + 0x20bdc]      ; 00526343
    POP EDI                             ; 00526349
    POP ESI                             ; 0052634a
    POP EBX                             ; 0052634b
    RET                                 ; 0052634c
    MOV EAX,EDX                         ; 0052634d
        ;   Label: LAB_0052634d
    PUSH EAX                            ; 0052634f
    MOV EDX,dword ptr [EDX + 0x154]     ; 00526350
    CALL dword ptr [EDX + 0x74]         ; 00526356
    ADD ESP,0x4                         ; 00526359
    TEST AL,0x4                         ; 0052635c
    JZ 0x00526303                       ; 0052635e
        ;   XREF to: 00526303 (CONDITIONAL_JUMP)  ; LAB_00526303
    JMP 0x0052632e                      ; 00526360
        ;   XREF to: 0052632e (UNCONDITIONAL_JUMP)  ; LAB_0052632e
    TEST ESI,ESI                        ; 00526362
        ;   Label: LAB_00526362
    JNZ 0x0052632e                      ; 00526364
        ;   XREF to: 0052632e (CONDITIONAL_JUMP)  ; LAB_0052632e
    XOR EAX,EAX                         ; 00526366
    POP EDI                             ; 00526368
    POP ESI                             ; 00526369
    POP EBX                             ; 0052636a
    RET                                 ; 0052636b

