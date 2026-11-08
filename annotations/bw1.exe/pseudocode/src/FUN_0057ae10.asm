; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057ae10(void)
;
;
; Referenced Globals:
;   void* PTR_waveInReset_005d0470 = 001d099a
;   void* PTR_waveInUnprepareHeader_005d0478 = 001d09b6
;   TerminatedCString s_waveInReset_failed_005f584a
;   undefined4 DAT_02c828d8
;
; Called Functions:
;   FUN_005773f0
;   waveInReset
;   waveInUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ae10
        ;   Label: FUN_0057ae10
    PUSH ESI                            ; 0057ae11
    PUSH EDI                            ; 0057ae12
    MOV EDX,dword ptr [0x02c828d8]      ; 0057ae13 | DAT_02c828d8
    MOV ESI,0x1                         ; 0057ae19
    TEST EDX,EDX                        ; 0057ae1e
    JNZ 0x0057ae4c                      ; 0057ae20
        ;   XREF to: 0057ae4c (CONDITIONAL_JUMP)  ; LAB_0057ae4c
    XOR EBX,EBX                         ; 0057ae22
        ;   Label: LAB_0057ae22
    MOV EDI,dword ptr [EBX + 0x2c8292c] ; 0057ae24
        ;   Label: LAB_0057ae24
    TEST EDI,EDI                        ; 0057ae2a
    JZ 0x0057ae3e                       ; 0057ae2c
        ;   XREF to: 0057ae3e (CONDITIONAL_JUMP)  ; LAB_0057ae3e
    PUSH 0x20                           ; 0057ae2e
    PUSH EDI                            ; 0057ae30
    MOV EAX,[0x02c828d8]                ; 0057ae31 | DAT_02c828d8
    PUSH EAX                            ; 0057ae36
    CALL dword ptr CS:[0x5d0478]        ; 0057ae37 | PTR_waveInUnprepareHeader_005d0478
    ADD EBX,0x4                         ; 0057ae3e
        ;   Label: LAB_0057ae3e
    CMP EBX,0x50                        ; 0057ae41
    JNZ 0x0057ae24                      ; 0057ae44
        ;   XREF to: 0057ae24 (CONDITIONAL_JUMP)  ; LAB_0057ae24
    MOV EAX,ESI                         ; 0057ae46
    POP EDI                             ; 0057ae48
    POP ESI                             ; 0057ae49
    POP EBX                             ; 0057ae4a
    RET                                 ; 0057ae4b
    PUSH EDX                            ; 0057ae4c
        ;   Label: LAB_0057ae4c
    CALL dword ptr CS:[0x5d0470]        ; 0057ae4d | PTR_waveInReset_005d0470
    TEST EAX,EAX                        ; 0057ae54
    JZ 0x0057ae22                       ; 0057ae56
        ;   XREF to: 0057ae22 (CONDITIONAL_JUMP)  ; LAB_0057ae22
    PUSH 0x5f584a                       ; 0057ae58 | = "waveInReset failed!"
    CALL FUN_005773f0                   ; 0057ae5d
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    XOR ESI,ESI                         ; 0057ae62
    ADD ESP,0x4                         ; 0057ae64
    JMP 0x0057ae22                      ; 0057ae67
        ;   XREF to: 0057ae22 (UNCONDITIONAL_JUMP)  ; LAB_0057ae22

