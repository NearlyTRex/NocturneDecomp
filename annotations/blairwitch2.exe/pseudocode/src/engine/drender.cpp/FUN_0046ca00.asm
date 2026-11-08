; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ca00(int param_1,int param_2)
;
;
; XREF[69]:
;   FUN_004159e0 at 00415a7b
;   FUN_00415ee0 at 00415f0c
;   FUN_00424c80 at 00424ce8
;   FUN_004264d0 at 004264fb
;   FUN_0042b760 at 0042be24
;   FUN_0043e930 at 0043efb8
;   FUN_0044b020 at 0044b4f9
;   FUN_0044b920 at 0044b933
;   FUN_0044b960 at 0044bf9c
;   FUN_0044d060 at 0044d0c3
;   ... and 59 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d172d
;   TerminatedCString s_CDR_texture_Too_many_cap_005d1743
;   undefined4 DAT_01ba5cc8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ca00
        ;   Label: FUN_0046ca00
    PUSH EBP                            ; 0046ca01
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046ca02
    PUSH ESI                            ; 0046ca06
    CALL FUN_00574e00                   ; 0046ca07
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    ADD ESP,0x4                         ; 0046ca0c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046ca0f
    CMP dword ptr [EAX + 0x1c],0x0      ; 0046ca13
    JZ 0x0046ca90                       ; 0046ca17
        ;   XREF to: 0046ca90 (CONDITIONAL_JUMP)  ; LAB_0046ca90
    PUSH EDI                            ; 0046ca19
    MOV ECX,dword ptr [0x01ba5cc8]      ; 0046ca1a | DAT_01ba5cc8
    INC ECX                             ; 0046ca20
    MOV dword ptr [0x01ba5cc8],ECX      ; 0046ca21 | DAT_01ba5cc8
    CMP ECX,0x64                        ; 0046ca27
    JLE 0x0046ca4f                      ; 0046ca2a
        ;   XREF to: 0046ca4f (CONDITIONAL_JUMP)  ; LAB_0046ca4f
    MOV EDI,0x5d172d                    ; 0046ca2c | = "..\\engine\\drender.cpp"
    MOV EBP,0xbf3                       ; 0046ca31
    PUSH 0x5d1743                       ; 0046ca36 | = "CDR::texture - Too many captured text..."
    MOV dword ptr [0x01d046a0],EDI      ; 0046ca3b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0046ca41 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0046ca47
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0046ca4c
    MOV EDX,dword ptr [0x01ba5cc8]      ; 0046ca4f | DAT_01ba5cc8
        ;   Label: LAB_0046ca4f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0046ca55
    ADD EAX,EDX                         ; 0046ca5c
    SHL EAX,0x3                         ; 0046ca5e
    MOV EDX,dword ptr [ESI + 0x4]       ; 0046ca61
    MOV dword ptr [EAX + 0x1bd1bf0],EDX ; 0046ca64
    ADD EAX,0x1bd1bec                   ; 0046ca6a
    ADD ESI,0x8                         ; 0046ca6f
    LEA EDI,[EAX + 0x8]                 ; 0046ca72
    PUSH EDI                            ; 0046ca75
    MOV AL,byte ptr [ESI]               ; 0046ca76
        ;   Label: LAB_0046ca76
    MOV byte ptr [EDI],AL               ; 0046ca78
    CMP AL,0x0                          ; 0046ca7a
    JZ 0x0046ca8e                       ; 0046ca7c
        ;   XREF to: 0046ca8e (CONDITIONAL_JUMP)  ; LAB_0046ca8e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046ca7e
    ADD ESI,0x2                         ; 0046ca81
    MOV byte ptr [EDI + 0x1],AL         ; 0046ca84
    ADD EDI,0x2                         ; 0046ca87
    CMP AL,0x0                          ; 0046ca8a
    JNZ 0x0046ca76                      ; 0046ca8c
        ;   XREF to: 0046ca76 (CONDITIONAL_JUMP)  ; LAB_0046ca76
    POP EDI                             ; 0046ca8e
        ;   Label: LAB_0046ca8e
    POP EDI                             ; 0046ca8f
    POP EBP                             ; 0046ca90
        ;   Label: LAB_0046ca90
    POP ESI                             ; 0046ca91
    RET                                 ; 0046ca92

