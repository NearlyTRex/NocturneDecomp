; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00532af0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604608
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00433e80
;   FUN_00434a80
;   FUN_004a6c30
;   FUN_0051b160
;   FUN_0051b740
;   FUN_00524270
;   FUN_00524770
;   FUN_005247c0
;   FUN_005675a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532af0
        ;   Label: FUN_00532af0
    PUSH ESI                            ; 00532af1
    PUSH EDI                            ; 00532af2
    PUSH EBP                            ; 00532af3
    MOV EBP,ESP                         ; 00532af4
    SUB ESP,0x1c                        ; 00532af6
    AND ESP,0xfffffff8                  ; 00532af9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00532afc
    FLD float ptr [EBX + 0x207f0]       ; 00532aff
    FLD1                                ; 00532b05
    FCOMPP                              ; 00532b07
    FNSTSW AX                           ; 00532b09
    SAHF                                ; 00532b0b
    JA 0x00532b15                       ; 00532b0c
        ;   XREF to: 00532b15 (CONDITIONAL_JUMP)  ; LAB_00532b15
    MOV ESP,EBP                         ; 00532b0e
    POP EBP                             ; 00532b10
    POP EDI                             ; 00532b11
    POP ESI                             ; 00532b12
    POP EBX                             ; 00532b13
    RET                                 ; 00532b14
    LEA ESI,[EBX + 0x158]               ; 00532b15
        ;   Label: LAB_00532b15
    PUSH ESI                            ; 00532b1b
    CALL FUN_00524770                   ; 00532b1c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00532b21
    ADD ESP,0x4                         ; 00532b24
    MOV EDI,EAX                         ; 00532b27
    CMP EAX,0x1                         ; 00532b29
    JZ 0x00532bd5                       ; 00532b2c
        ;   XREF to: 00532bd5 (CONDITIONAL_JUMP)  ; LAB_00532bd5
    CMP EAX,0x2                         ; 00532b32
    JZ 0x00532bd5                       ; 00532b35
        ;   XREF to: 00532bd5 (CONDITIONAL_JUMP)  ; LAB_00532bd5
    LEA EAX,[EBX + 0x1fab8]             ; 00532b3b
    PUSH EAX                            ; 00532b41
    MOV EDX,dword ptr [0x0061b4d0]      ; 00532b42 | DAT_0061b4d0
    PUSH EDX                            ; 00532b48
    CALL FUN_004a6c30                   ; 00532b49
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00532b4e
    TEST EAX,EAX                        ; 00532b51
    JNZ 0x00532ba1                      ; 00532b53
        ;   XREF to: 00532ba1 (CONDITIONAL_JUMP)  ; LAB_00532ba1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00532b55
        ;   Label: LAB_00532b55
    MOV dword ptr [ESP],EAX             ; 00532b58
    LEA EAX,[EBX + 0x249c]              ; 00532b5b
    MOV dword ptr [EAX + 0x8],0x0       ; 00532b61
    LEA ESI,[EBX + 0x158]               ; 00532b68
    MOV EDX,dword ptr [EAX + 0x8]       ; 00532b6e
    MOV dword ptr [EAX + 0x4],EDX       ; 00532b71
    MOV EDX,dword ptr [EAX + 0x4]       ; 00532b74
    MOV dword ptr [EAX],EDX             ; 00532b77
    FLD float ptr [ESP]                 ; 00532b79
        ;   Label: LAB_00532b79
    FLDZ                                ; 00532b7c
    FCOMPP                              ; 00532b7e
    FNSTSW AX                           ; 00532b80
    SAHF                                ; 00532b82
    JNC 0x00532c3e                      ; 00532b83
        ;   XREF to: 00532c3e (CONDITIONAL_JUMP)  ; LAB_00532c3e
    MOV EAX,ESP                         ; 00532b89
    PUSH EAX                            ; 00532b8b
    PUSH ESI                            ; 00532b8c
    CALL FUN_00524270                   ; 00532b8d
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 00532b92
    PUSH EAX                            ; 00532b95
    PUSH EBX                            ; 00532b96
    CALL FUN_00434a80                   ; 00532b97
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 00532b9c
    JMP 0x00532b79                      ; 00532b9f
        ;   XREF to: 00532b79 (UNCONDITIONAL_JUMP)  ; LAB_00532b79
    PUSH 0x1                            ; 00532ba1
        ;   Label: LAB_00532ba1
    PUSH 0x1                            ; 00532ba3
    PUSH ESI                            ; 00532ba5
    CALL FUN_005247c0                   ; 00532ba6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV AH,byte ptr [EBX + 0x1fb5c]     ; 00532bab
    ADD ESP,0xc                         ; 00532bb1
    TEST AH,AH                          ; 00532bb4
    JZ 0x00532b55                       ; 00532bb6
        ;   XREF to: 00532b55 (CONDITIONAL_JUMP)  ; LAB_00532b55
    LEA ESI,[EBX + 0x1fb5c]             ; 00532bb8
    PUSH ESI                            ; 00532bbe
    MOV EAX,dword ptr [EBX + 0x154]     ; 00532bbf
    PUSH EBX                            ; 00532bc5
    CALL dword ptr [EAX + 0x2c]         ; 00532bc6
    ADD ESP,0x8                         ; 00532bc9
    MOV byte ptr [EBX + 0x1fb5c],0x0    ; 00532bcc
    JMP 0x00532b55                      ; 00532bd3
        ;   XREF to: 00532b55 (UNCONDITIONAL_JUMP)  ; LAB_00532b55
    CMP EDI,0x2                         ; 00532bd5
        ;   Label: LAB_00532bd5
    JNZ 0x00532b55                      ; 00532bd8
        ;   XREF to: 00532b55 (CONDITIONAL_JUMP)  ; LAB_00532b55
    FLD float ptr [EBP + 0x18]          ; 00532bde
    FDIV float ptr [0x00604608]         ; 00532be1 | DAT_00604608
    FADD float ptr [EBX + 0x207f0]      ; 00532be7
    FST float ptr [EBX + 0x207f0]       ; 00532bed
    FLD1                                ; 00532bf3
    FCOMPP                              ; 00532bf5
    FNSTSW AX                           ; 00532bf7
    SAHF                                ; 00532bf9
    JA 0x00532b55                       ; 00532bfa
        ;   XREF to: 00532b55 (CONDITIONAL_JUMP)  ; LAB_00532b55
    MOV EDX,dword ptr [EBX + 0x1fbc0]   ; 00532c00
    TEST EDX,EDX                        ; 00532c06
    JZ 0x00532b55                       ; 00532c08
        ;   XREF to: 00532b55 (CONDITIONAL_JUMP)  ; LAB_00532b55
    PUSH EDX                            ; 00532c0e
    MOV ESI,dword ptr [0x0061f650]      ; 00532c0f | DAT_0061f650
    PUSH ESI                            ; 00532c15 | DAT_01d2c900
    CALL FUN_0051b160                   ; 00532c16
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 00532c1b
    PUSH 0x1                            ; 00532c1e
    PUSH EBX                            ; 00532c20
    MOV EAX,[0x0061f650]                ; 00532c21 | DAT_0061f650
    PUSH EAX                            ; 00532c26 | DAT_01d2c900
    MOV dword ptr [EBX + 0x1fbc0],0x0   ; 00532c27
    CALL FUN_0051b740                   ; 00532c31
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b740()
    ADD ESP,0xc                         ; 00532c36
    JMP 0x00532b55                      ; 00532c39
        ;   XREF to: 00532b55 (UNCONDITIONAL_JUMP)  ; LAB_00532b55
    TEST EDI,EDI                        ; 00532c3e
        ;   Label: LAB_00532c3e
    JZ 0x00532cab                       ; 00532c40
        ;   XREF to: 00532cab (CONDITIONAL_JUMP)  ; LAB_00532cab
    LEA EAX,[EBX + 0x249c]              ; 00532c42
    PUSH EAX                            ; 00532c48
    PUSH EBX                            ; 00532c49
    LEA ESI,[ESP + 0x18]                ; 00532c4a
    LEA EDI,[ESP + 0xc]                 ; 00532c4e
    CALL FUN_00408ac0                   ; 00532c52
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x18]                ; 00532c57
    ADD ESP,0x8                         ; 00532c5b
    LEA EAX,[EBX + 0x20]                ; 00532c5e
    MOVSD ES:EDI,ESI                    ; 00532c61
    MOVSD ES:EDI,ESI                    ; 00532c62
    MOVSD ES:EDI,ESI                    ; 00532c63
    FLD float ptr [EAX]                 ; 00532c64
    FLD float ptr [EAX + 0x4]           ; 00532c66
    FLD float ptr [EAX + 0x8]           ; 00532c69
    FXCH ST2                            ; 00532c6c
    FADD float ptr [ESP + 0x4]          ; 00532c6e
    FXCH                                ; 00532c72
    FADD float ptr [ESP + 0x8]          ; 00532c74
    FXCH ST2                            ; 00532c78
    FADD float ptr [ESP + 0xc]          ; 00532c7a
    FXCH                                ; 00532c7e
    FSTP float ptr [EAX]                ; 00532c80
    FXCH                                ; 00532c82
    FSTP float ptr [EAX + 0x4]          ; 00532c84
    FSTP float ptr [EAX + 0x8]          ; 00532c87
    MOV ECX,dword ptr [EBX + 0x1fbc0]   ; 00532c8a
    TEST ECX,ECX                        ; 00532c90
    JZ 0x00532cab                       ; 00532c92
        ;   XREF to: 00532cab (CONDITIONAL_JUMP)  ; LAB_00532cab
    MOV EDX,dword ptr [EAX]             ; 00532c94
    MOV dword ptr [ECX + 0x20],EDX      ; 00532c96
    MOV EDX,dword ptr [EAX + 0x4]       ; 00532c99
    MOV dword ptr [ECX + 0x24],EDX      ; 00532c9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00532c9f
    MOV dword ptr [ECX + 0x28],EDX      ; 00532ca2
    MOV EAX,dword ptr [EAX + 0xc]       ; 00532ca5
    MOV dword ptr [ECX + 0x2c],EAX      ; 00532ca8
    LEA EAX,[EBX + 0x158]               ; 00532cab
        ;   Label: LAB_00532cab
    PUSH EAX                            ; 00532cb1
    CALL FUN_005675a0                   ; 00532cb2
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 00532cb7
    PUSH dword ptr [EBP + 0x18]         ; 00532cba
    PUSH EBX                            ; 00532cbd
    CALL FUN_00433e80                   ; 00532cbe
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x8                         ; 00532cc3
    MOV ESP,EBP                         ; 00532cc6
    POP EBP                             ; 00532cc8
    POP EDI                             ; 00532cc9
    POP ESI                             ; 00532cca
    POP EBX                             ; 00532ccb
    RET                                 ; 00532ccc

