; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055d9f0(void)
;
;
; Referenced Globals:
;   void* PTR_waveOutReset_005b348c = 001b3a1a
;   void* PTR_waveOutUnprepareHeader_005b3490 = 001b3a2a
;   undefined4 s_waveOutReset_failed_005d4fcf+1
;   undefined4 DAT_02cf546c
;
; Called Functions:
;   FUN_00558e10
;   FUN_0055a560
;   waveOutReset
;   waveOutUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d9f0
        ;   Label: FUN_0055d9f0
    PUSH ESI                            ; 0055d9f1
    PUSH EDI                            ; 0055d9f2
    MOV EDX,dword ptr [0x02cf546c]      ; 0055d9f3 | DAT_02cf546c
    MOV ESI,0x1                         ; 0055d9f9
    TEST EDX,EDX                        ; 0055d9fe
    JNZ 0x0055da35                      ; 0055da00
        ;   XREF to: 0055da35 (CONDITIONAL_JUMP)  ; LAB_0055da35
    XOR EBX,EBX                         ; 0055da02
        ;   Label: LAB_0055da02
    MOV EDI,dword ptr [EBX + 0x2cf5490] ; 0055da04
        ;   Label: LAB_0055da04
    TEST EDI,EDI                        ; 0055da0a
    JZ 0x0055da1e                       ; 0055da0c
        ;   XREF to: 0055da1e (CONDITIONAL_JUMP)  ; LAB_0055da1e
    PUSH 0x20                           ; 0055da0e
    PUSH EDI                            ; 0055da10
    MOV EAX,[0x02cf546c]                ; 0055da11 | DAT_02cf546c
    PUSH EAX                            ; 0055da16
    CALL dword ptr CS:[0x5b3490]        ; 0055da17 | PTR_waveOutUnprepareHeader_005b3490
    ADD EBX,0x4                         ; 0055da1e
        ;   Label: LAB_0055da1e
    CMP EBX,0x20                        ; 0055da21
    JNZ 0x0055da04                      ; 0055da24
        ;   XREF to: 0055da04 (CONDITIONAL_JUMP)  ; LAB_0055da04
    CALL FUN_00558e10                   ; 0055da26
        ;   XREF to: 00558e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e10()
    TEST EAX,EAX                        ; 0055da2b
    JZ 0x0055da52                       ; 0055da2d
        ;   XREF to: 0055da52 (CONDITIONAL_JUMP)  ; LAB_0055da52
    MOV EAX,ESI                         ; 0055da2f
    POP EDI                             ; 0055da31
    POP ESI                             ; 0055da32
    POP EBX                             ; 0055da33
    RET                                 ; 0055da34
    PUSH EDX                            ; 0055da35
        ;   Label: LAB_0055da35
    CALL dword ptr CS:[0x5b348c]        ; 0055da36 | PTR_waveOutReset_005b348c
    TEST EAX,EAX                        ; 0055da3d
    JZ 0x0055da02                       ; 0055da3f
        ;   XREF to: 0055da02 (CONDITIONAL_JUMP)  ; LAB_0055da02
    PUSH 0x5d4fd0                       ; 0055da41 | s_waveOutReset_failed_005d4fcf+1
    CALL FUN_0055a560                   ; 0055da46
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    XOR ESI,ESI                         ; 0055da4b
    ADD ESP,0x4                         ; 0055da4d
    JMP 0x0055da02                      ; 0055da50
        ;   XREF to: 0055da02 (UNCONDITIONAL_JUMP)  ; LAB_0055da02
    XOR ESI,ESI                         ; 0055da52
        ;   Label: LAB_0055da52
    MOV EAX,ESI                         ; 0055da54
    POP EDI                             ; 0055da56
    POP ESI                             ; 0055da57
    POP EBX                             ; 0055da58
    RET                                 ; 0055da59

