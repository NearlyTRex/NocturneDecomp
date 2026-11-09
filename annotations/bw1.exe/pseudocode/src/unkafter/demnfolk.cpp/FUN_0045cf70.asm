; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_demnfolk_cpp_FUN_0045cf70(int param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_005d8308
;   undefined1 DAT_005d8309
;   undefined1 DAT_005d830a
;   undefined1 DAT_005d830b
;   undefined1 DAT_005d830e
;   undefined1 DAT_005d830f
;   undefined1 DAT_005d8310
;   TerminatedCString s_e_wav_2_005d8311
;   undefined4 DAT_0152c320
;   undefined4 DAT_0152c321
;   undefined4 DAT_0152c322
;   undefined4 DAT_0152c323
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cf70
        ;   Label: unkafter_demnfolk.cpp_FUN_0045cf70
    PUSH ESI                            ; 0045cf71
    PUSH EDI                            ; 0045cf72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045cf73
    MOV ESI,0x5d8308                    ; 0045cf77 | DAT_005d8308
    MOV EDI,0x152c320                   ; 0045cf7c
    PUSH EDI                            ; 0045cf81 | DAT_0152c320
    MOV AL,byte ptr [ESI]               ; 0045cf82 | DAT_005d8308 | DAT_005d830a
        ;   Label: LAB_0045cf82
    MOV byte ptr [EDI],AL               ; 0045cf84 | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045cf86
    JZ 0x0045cf9a                       ; 0045cf88
        ;   XREF to: 0045cf9a (CONDITIONAL_JUMP)  ; LAB_0045cf9a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cf8a | DAT_005d8309 | DAT_005d830b
    ADD ESI,0x2                         ; 0045cf8d
    MOV byte ptr [EDI + 0x1],AL         ; 0045cf90 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045cf93
    CMP AL,0x0                          ; 0045cf96
    JNZ 0x0045cf82                      ; 0045cf98
        ;   XREF to: 0045cf82 (CONDITIONAL_JUMP)  ; LAB_0045cf82
    POP EDI                             ; 0045cf9a
        ;   Label: LAB_0045cf9a
    LEA ESI,[EBX + 0xc36c]              ; 0045cf9b
    PUSH EDI                            ; 0045cfa1 | DAT_0152c320
    SUB ECX,ECX                         ; 0045cfa2
    DEC ECX                             ; 0045cfa4
    MOV AL,0x0                          ; 0045cfa5
    SCASB.REPNE ES:EDI                  ; 0045cfa7 | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045cfa9
    MOV AL,byte ptr [ESI]               ; 0045cfaa
        ;   Label: LAB_0045cfaa
    MOV byte ptr [EDI],AL               ; 0045cfac | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045cfae
    JZ 0x0045cfc2                       ; 0045cfb0
        ;   XREF to: 0045cfc2 (CONDITIONAL_JUMP)  ; LAB_0045cfc2
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cfb2
    ADD ESI,0x2                         ; 0045cfb5
    MOV byte ptr [EDI + 0x1],AL         ; 0045cfb8 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045cfbb
    CMP AL,0x0                          ; 0045cfbe
    JNZ 0x0045cfaa                      ; 0045cfc0
        ;   XREF to: 0045cfaa (CONDITIONAL_JUMP)  ; LAB_0045cfaa
    POP EDI                             ; 0045cfc2
        ;   Label: LAB_0045cfc2
    MOV ESI,0x5d830e                    ; 0045cfc3 | DAT_005d830e
    PUSH EDI                            ; 0045cfc8 | DAT_0152c320
    SUB ECX,ECX                         ; 0045cfc9
    DEC ECX                             ; 0045cfcb
    MOV AL,0x0                          ; 0045cfcc
    SCASB.REPNE ES:EDI                  ; 0045cfce | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045cfd0
    MOV AL,byte ptr [ESI]               ; 0045cfd1 | DAT_005d830e | DAT_005d8310
        ;   Label: LAB_0045cfd1
    MOV byte ptr [EDI],AL               ; 0045cfd3 | DAT_0152c320 | DAT_0152c322 | DAT_0152c321
    CMP AL,0x0                          ; 0045cfd5
    JZ 0x0045cfe9                       ; 0045cfd7
        ;   XREF to: 0045cfe9 (CONDITIONAL_JUMP)  ; LAB_0045cfe9
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cfd9 | DAT_005d830f | = "e.wav @ 2"
    ADD ESI,0x2                         ; 0045cfdc
    MOV byte ptr [EDI + 0x1],AL         ; 0045cfdf | DAT_0152c321 | DAT_0152c323 | DAT_0152c322
    ADD EDI,0x2                         ; 0045cfe2
    CMP AL,0x0                          ; 0045cfe5
    JNZ 0x0045cfd1                      ; 0045cfe7
        ;   XREF to: 0045cfd1 (CONDITIONAL_JUMP)  ; LAB_0045cfd1
    POP EDI                             ; 0045cfe9
        ;   Label: LAB_0045cfe9
    MOV EDX,dword ptr [EBX + 0xc358]    ; 0045cfea
    PUSH EDX                            ; 0045cff0
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045cff1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045cff6
    TEST EAX,EAX                        ; 0045cff9
    JZ 0x0045d001                       ; 0045cffb
        ;   XREF to: 0045d001 (CONDITIONAL_JUMP)  ; LAB_0045d001
    POP EDI                             ; 0045cffd
    POP ESI                             ; 0045cffe
    POP EBX                             ; 0045cfff
    RET                                 ; 0045d000
    PUSH EDI                            ; 0045d001 | DAT_0152c320
        ;   Label: LAB_0045d001
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045d002
    PUSH EBX                            ; 0045d008
    CALL dword ptr [EAX + 0x2c]         ; 0045d009
    ADD ESP,0x8                         ; 0045d00c
    MOV dword ptr [EBX + 0xc358],EAX    ; 0045d00f
    POP EDI                             ; 0045d015
    POP ESI                             ; 0045d016
    POP EBX                             ; 0045d017
    RET                                 ; 0045d018

