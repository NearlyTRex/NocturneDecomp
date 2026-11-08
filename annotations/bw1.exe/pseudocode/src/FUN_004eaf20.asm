; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eaf20(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_stopGettingGrabbed_005e47c5
;   TerminatedCString s_GETGRABBED_005e47ef
;   TerminatedCString s_STAND_005e47fa
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0078a123
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00431440
;   FUN_00445430
;   FUN_00524150
;   FUN_00524850
;   FUN_00524a00
;   FUN_00524a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaf20
        ;   Label: FUN_004eaf20
    PUSH ESI                            ; 004eaf21
    SUB ESP,0x4                         ; 004eaf22
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eaf25
    MOV EDX,dword ptr [EBX + 0x26fc]    ; 004eaf29
    TEST EDX,EDX                        ; 004eaf2f
    JNZ 0x004eafac                      ; 004eaf31
        ;   XREF to: 004eafac (CONDITIONAL_JUMP)  ; LAB_004eafac
    CMP dword ptr [EBX + 0x68],0x78a123 ; 004eaf37 | DAT_0078a123
        ;   Label: LAB_004eaf37
    JNZ 0x004eaf9d                      ; 004eaf3e
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    LEA EAX,[EBX + 0x158]               ; 004eaf40
    CMP dword ptr [EAX + 0x23a0],0x0    ; 004eaf46
    JZ 0x004eaf9d                       ; 004eaf4d
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH 0x0                            ; 004eaf4f
    PUSH 0x5e47ef                       ; 004eaf51 | = "GETGRABBED"
    LEA ESI,[EBX + 0x158]               ; 004eaf56
    PUSH ESI                            ; 004eaf5c
    CALL FUN_00524a00                   ; 004eaf5d
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004eaf62
    PUSH EAX                            ; 004eaf65
    CALL FUN_00524150                   ; 004eaf66
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; undefined FUN_00524150()
    ADD ESP,0xc                         ; 004eaf6b
    TEST EAX,EAX                        ; 004eaf6e
    JL 0x004eaf9d                       ; 004eaf70
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH EAX                            ; 004eaf72
    PUSH ESI                            ; 004eaf73
    CALL FUN_00524a40                   ; 004eaf74
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004eaf79
    FLD float ptr [ESP + 0x8]           ; 004eaf7d
    FLDZ                                ; 004eaf81
    ADD ESP,0x8                         ; 004eaf83
    FCOMPP                              ; 004eaf86
    FNSTSW AX                           ; 004eaf88
    SAHF                                ; 004eaf8a
    JNC 0x004eaf9d                      ; 004eaf8b
        ;   XREF to: 004eaf9d (CONDITIONAL_JUMP)  ; LAB_004eaf9d
    PUSH 0x1                            ; 004eaf8d
    PUSH 0x5e47fa                       ; 004eaf8f | = "STAND"
    PUSH ESI                            ; 004eaf94
    CALL FUN_00524850                   ; 004eaf95
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; undefined FUN_00524850()
    ADD ESP,0xc                         ; 004eaf9a
    PUSH EBX                            ; 004eaf9d
        ;   Label: LAB_004eaf9d
    CALL FUN_00431440                   ; 004eaf9e
        ;   XREF to: 00431440 (UNCONDITIONAL_CALL)  ; undefined FUN_00431440()
    ADD ESP,0x4                         ; 004eafa3
    ADD ESP,0x4                         ; 004eafa6
    POP ESI                             ; 004eafa9
    POP EBX                             ; 004eafaa
    RET                                 ; 004eafab
    PUSH EDI                            ; 004eafac
        ;   Label: LAB_004eafac
    MOV ECX,dword ptr [EBX + 0x2700]    ; 004eafad
    PUSH ECX                            ; 004eafb3
    PUSH EDX                            ; 004eafb4
    PUSH 0x5e47c5                       ; 004eafb5 | = "CHero::stopGettingGrabbed by %s, type..."
    MOV EDI,dword ptr [0x00611100]      ; 004eafba | PTR_DAT_00611100
    PUSH EDI                            ; 004eafc0 | DAT_007db5f0
    CALL FUN_00445430                   ; 004eafc1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 004eafc6
    POP EDI                             ; 004eafc9
    JMP 0x004eaf37                      ; 004eafca
        ;   XREF to: 004eaf37 (UNCONDITIONAL_JUMP)  ; LAB_004eaf37

