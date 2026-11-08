; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004859e0(int *param_1)
;
;
; XREF[2]:
;   FUN_00485640 at 0048564d
;   FUN_00485b00 at 00485b12
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd914
;   TerminatedCString s_CEdScrollBar_computeThum_005bd92a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004859e0
        ;   Label: FUN_004859e0
    PUSH ESI                            ; 004859e1
    PUSH EDI                            ; 004859e2
    PUSH EBP                            ; 004859e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004859e4
    MOV EDX,dword ptr [EBX + 0x4]       ; 004859e8
    CMP EDX,dword ptr [EBX + 0x8]       ; 004859eb
    JLE 0x00485a99                      ; 004859ee
        ;   XREF to: 00485a99 (CONDITIONAL_JUMP)  ; LAB_00485a99
    CMP EDX,0x1                         ; 004859f4
    JL 0x00485a99                       ; 004859f7
        ;   XREF to: 00485a99 (CONDITIONAL_JUMP)  ; LAB_00485a99
    MOV EDI,dword ptr [EBX + 0x24]      ; 004859fd
    MOV ESI,dword ptr [EBX + 0x28]      ; 00485a00
    SUB ESI,EDI                         ; 00485a03
    CMP ESI,0x1                         ; 00485a05
    JL 0x00485aaa                       ; 00485a08
        ;   XREF to: 00485aaa (CONDITIONAL_JUMP)  ; LAB_00485aaa
    MOV EDX,dword ptr [EBX + 0x8]       ; 00485a0e
        ;   Label: LAB_00485a0e
    IMUL EDX,ESI                        ; 00485a11
    MOV ECX,dword ptr [EBX + 0x4]       ; 00485a14
    MOV EAX,EDX                         ; 00485a17
    SAR EDX,0x1f                        ; 00485a19
    IDIV ECX                            ; 00485a1c
    MOV EDI,dword ptr [EBX + 0x10]      ; 00485a1e
    MOV ECX,EAX                         ; 00485a21
    TEST EDI,EDI                        ; 00485a23
    JZ 0x00485ad1                       ; 00485a25
        ;   XREF to: 00485ad1 (CONDITIONAL_JUMP)  ; LAB_00485ad1
    MOV EAX,dword ptr [EBX + 0x18]      ; 00485a2b
    MOV EDX,dword ptr [EBX + 0x20]      ; 00485a2e
    SUB EDX,EAX                         ; 00485a31
    CMP ECX,EDX                         ; 00485a33
    JGE 0x00485a39                      ; 00485a35
        ;   XREF to: 00485a39 (CONDITIONAL_JUMP)  ; LAB_00485a39
        ;   Label: LAB_00485a35
    MOV ECX,EDX                         ; 00485a37
    CMP ECX,ESI                         ; 00485a39
        ;   Label: LAB_00485a39
    JLE 0x00485a3f                      ; 00485a3b
        ;   XREF to: 00485a3f (CONDITIONAL_JUMP)  ; LAB_00485a3f
    MOV ECX,ESI                         ; 00485a3d
    MOV EDI,dword ptr [EBX + 0x8]       ; 00485a3f
        ;   Label: LAB_00485a3f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00485a42
    SUB EDX,EDI                         ; 00485a45
    MOV EDI,EDX                         ; 00485a47
    MOV EDX,ESI                         ; 00485a49
    MOV EBP,dword ptr [EBX]             ; 00485a4b
    SUB EDX,ECX                         ; 00485a4d
    IMUL EDX,EBP                        ; 00485a4f
    MOV EAX,EDX                         ; 00485a52
    SAR EDX,0x1f                        ; 00485a54
    IDIV EDI                            ; 00485a57
    MOV EDX,dword ptr [EBX + 0x24]      ; 00485a59
    ADD EDX,EAX                         ; 00485a5c
    MOV dword ptr [EBX + 0x2c],EDX      ; 00485a5e
    MOV EAX,EDX                         ; 00485a61
    MOV EDX,dword ptr [EBX + 0x24]      ; 00485a63
    CMP EAX,EDX                         ; 00485a66
    JGE 0x00485a6d                      ; 00485a68
        ;   XREF to: 00485a6d (CONDITIONAL_JUMP)  ; LAB_00485a6d
    MOV dword ptr [EBX + 0x2c],EDX      ; 00485a6a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00485a6d
        ;   Label: LAB_00485a6d
    ADD EDX,ECX                         ; 00485a70
    MOV ECX,dword ptr [EBX + 0x28]      ; 00485a72
    MOV dword ptr [EBX + 0x30],EDX      ; 00485a75
    CMP EDX,ECX                         ; 00485a78
    JLE 0x00485a8c                      ; 00485a7a
        ;   XREF to: 00485a8c (CONDITIONAL_JUMP)  ; LAB_00485a8c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00485a7c
    SUB EDX,ECX                         ; 00485a7f
    MOV EAX,dword ptr [EBX + 0x28]      ; 00485a81
    SUB EDI,EDX                         ; 00485a84
    MOV dword ptr [EBX + 0x30],EAX      ; 00485a86
    MOV dword ptr [EBX + 0x2c],EDI      ; 00485a89
    MOV EBP,dword ptr [EBX + 0x24]      ; 00485a8c
        ;   Label: LAB_00485a8c
    CMP EBP,dword ptr [EBX + 0x2c]      ; 00485a8f
    JG 0x00485ae0                       ; 00485a92
        ;   XREF to: 00485ae0 (CONDITIONAL_JUMP)  ; LAB_00485ae0
    POP EBP                             ; 00485a94
    POP EDI                             ; 00485a95
    POP ESI                             ; 00485a96
    POP EBX                             ; 00485a97
    RET                                 ; 00485a98
    MOV EAX,dword ptr [EBX + 0x24]      ; 00485a99
        ;   Label: LAB_00485a99
    MOV dword ptr [EBX + 0x2c],EAX      ; 00485a9c
    MOV EAX,dword ptr [EBX + 0x28]      ; 00485a9f
    MOV dword ptr [EBX + 0x30],EAX      ; 00485aa2
    POP EBP                             ; 00485aa5
    POP EDI                             ; 00485aa6
    POP ESI                             ; 00485aa7
    POP EBX                             ; 00485aa8
    RET                                 ; 00485aa9
    MOV EBP,0x5bd914                    ; 00485aaa | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00485aaa
    MOV EAX,0x12ce                      ; 00485aaf
    PUSH 0x5bd92a                       ; 00485ab4 | = "CEdScrollBar::computeThumb - invalid ..."
    MOV dword ptr [0x01d71de0],EBP      ; 00485ab9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00485abf | DAT_01d71de4
    CALL FUN_004e4330                   ; 00485ac4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00485ac9
    JMP 0x00485a0e                      ; 00485acc
        ;   XREF to: 00485a0e (UNCONDITIONAL_JUMP)  ; LAB_00485a0e
    MOV EBP,dword ptr [EBX + 0x14]      ; 00485ad1
        ;   Label: LAB_00485ad1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00485ad4
    SUB EDX,EBP                         ; 00485ad7
    CMP EAX,EDX                         ; 00485ad9
    JMP 0x00485a35                      ; 00485adb
        ;   XREF to: 00485a35 (UNCONDITIONAL_JUMP)  ; LAB_00485a35
    MOV dword ptr [EBX + 0x2c],EBP      ; 00485ae0
        ;   Label: LAB_00485ae0
    POP EBP                             ; 00485ae3
    POP EDI                             ; 00485ae4
    POP ESI                             ; 00485ae5
    POP EBX                             ; 00485ae6
    RET                                 ; 00485ae7

