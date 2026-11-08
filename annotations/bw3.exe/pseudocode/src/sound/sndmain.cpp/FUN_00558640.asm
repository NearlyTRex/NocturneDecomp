; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558640(int param_1)
;
;
; XREF[4]:
;   FUN_004e94f0 at 004e9d1b
;   FUN_00557f60 at 00557ff6
;   FUN_00558730 at 00558743
;   FUN_00559220 at 00559304
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3b2e
;   TerminatedCString s_selectSoundDevice_device_005d3b43
;   undefined4 DAT_0060423c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_00558430
;   FUN_00558520
;   FUN_005586b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558640
        ;   Label: FUN_00558640
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558641
    CALL FUN_005586b0                   ; 00558645
        ;   XREF to: 005586b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586b0()
    TEST EAX,EAX                        ; 0055864a
    JNZ 0x00558670                      ; 0055864c
        ;   XREF to: 00558670 (CONDITIONAL_JUMP)  ; LAB_00558670
    TEST EBX,EBX                        ; 0055864e
        ;   Label: LAB_0055864e
    JGE 0x00558658                      ; 00558650
        ;   XREF to: 00558658 (CONDITIONAL_JUMP)  ; LAB_00558658
    MOV EBX,dword ptr [0x0060423c]      ; 00558652 | DAT_0060423c
    CALL FUN_00558430                   ; 00558658
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; undefined FUN_00558430()
        ;   Label: LAB_00558658
    CMP EBX,EAX                         ; 0055865d
    JL 0x00558695                       ; 0055865f
        ;   XREF to: 00558695 (CONDITIONAL_JUMP)  ; LAB_00558695
    CALL FUN_00558520                   ; 00558661
        ;   XREF to: 00558520 (UNCONDITIONAL_CALL)  ; undefined FUN_00558520()
        ;   Label: LAB_00558661
    MOV EBX,EAX                         ; 00558666
    MOV dword ptr [0x0060423c],EBX      ; 00558668 | DAT_0060423c
    POP EBX                             ; 0055866e
    RET                                 ; 0055866f
    MOV EDX,0x5d3b2e                    ; 00558670 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00558670
    MOV ECX,0x1575                      ; 00558675
    PUSH 0x5d3b43                       ; 0055867a | = "selectSoundDevice - device already open."
    MOV dword ptr [0x01d71de0],EDX      ; 0055867f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00558685 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055868b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00558690
    JMP 0x0055864e                      ; 00558693
        ;   XREF to: 0055864e (UNCONDITIONAL_JUMP)  ; LAB_0055864e
    TEST EBX,EBX                        ; 00558695
        ;   Label: LAB_00558695
    JL 0x00558661                       ; 00558697
        ;   XREF to: 00558661 (CONDITIONAL_JUMP)  ; LAB_00558661
    MOV dword ptr [0x0060423c],EBX      ; 00558699 | DAT_0060423c
    POP EBX                             ; 0055869f
    RET                                 ; 005586a0

