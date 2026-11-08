; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005abdd0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Dummy01_005f0d31
;   TerminatedCString s_BDOG_DFM_005f0d39
;   TerminatedCString s_Bip01_Head_005f0d42
;
; Called Functions:
;   FUN_00540e80
;   FUN_0059e6a0
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abdd0
        ;   Label: FUN_005abdd0
    PUSH ESI                            ; 005abdd1
    PUSH EDI                            ; 005abdd2
    PUSH EBP                            ; 005abdd3
    MOV EBP,ESP                         ; 005abdd4
    SUB ESP,0xc                         ; 005abdd6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005abdd9
    PUSH EBX                            ; 005abddc
    CALL FUN_0059e6a0                   ; 005abddd
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005abde2
    PUSH 0x1                            ; 005abde5
    PUSH 0x5f0d31                       ; 005abde7 | = "Dummy01"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005abdec
    PUSH EDX                            ; 005abdf2
    CALL FUN_00540e80                   ; 005abdf3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005abdf8
    MOV ECX,dword ptr [EBX + 0x1185c]   ; 005abdfb
    MOV dword ptr [EBX + 0x11850],EAX   ; 005abe01
    TEST ECX,ECX                        ; 005abe07
    JZ 0x005abe1c                       ; 005abe09
        ;   XREF to: 005abe1c (CONDITIONAL_JUMP)  ; LAB_005abe1c
    PUSH EBX                            ; 005abe0b
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 005abe0c
    PUSH ECX                            ; 005abe12
    CALL dword ptr [EDX + 0x90]         ; 005abe13
    ADD ESP,0x8                         ; 005abe19
    PUSH 0x5f0d39                       ; 005abe1c | = "BDOG.DFM"
        ;   Label: LAB_005abe1c
    LEA EAX,[EBX + 0x2514]              ; 005abe21
    PUSH EAX                            ; 005abe27
    CALL FUN_005b8c30                   ; 005abe28
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 005abe2d
    TEST EAX,EAX                        ; 005abe30
    JZ 0x005abe3b                       ; 005abe32
        ;   XREF to: 005abe3b (CONDITIONAL_JUMP)  ; LAB_005abe3b
    MOV ESP,EBP                         ; 005abe34
        ;   Label: LAB_005abe34
    POP EBP                             ; 005abe36
    POP EDI                             ; 005abe37
    POP ESI                             ; 005abe38
    POP EBX                             ; 005abe39
    RET                                 ; 005abe3a
    PUSH 0x1                            ; 005abe3b
        ;   Label: LAB_005abe3b
    PUSH 0x5f0d42                       ; 005abe3d | = "Bip01 Head"
    MOV ESI,dword ptr [EBX + 0x113b0]   ; 005abe42
    ADD EBX,0x10a3c                     ; 005abe48
    PUSH ESI                            ; 005abe4e
    MOV EDI,0x3f800000                  ; 005abe4f
    MOV dword ptr [EBX + -0x14],0x1     ; 005abe54
    CALL FUN_00540e80                   ; 005abe5b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [EBX + -0x18],EAX     ; 005abe60
    XOR EAX,EAX                         ; 005abe63
    ADD ESP,0xc                         ; 005abe65
    MOV dword ptr [EBP + -0x8],EAX      ; 005abe68
    MOV dword ptr [EBP + -0x4],EAX      ; 005abe6b
    LEA EAX,[EBP + -0xc]                ; 005abe6e
    MOV dword ptr [EBP + -0xc],EDI      ; 005abe71
    CMP EBX,EAX                         ; 005abe74
    JZ 0x005abe34                       ; 005abe76
        ;   XREF to: 005abe34 (CONDITIONAL_JUMP)  ; LAB_005abe34
    MOV dword ptr [EBX],EDI             ; 005abe78
    MOV EAX,dword ptr [EBP + -0x8]      ; 005abe7a
    MOV dword ptr [EBX + 0x4],EAX       ; 005abe7d
    MOV EAX,dword ptr [EBP + -0x4]      ; 005abe80
    MOV dword ptr [EBX + 0x8],EAX       ; 005abe83
    MOV ESP,EBP                         ; 005abe86
    POP EBP                             ; 005abe88
    POP EDI                             ; 005abe89
    POP ESI                             ; 005abe8a
    POP EBX                             ; 005abe8b
    RET                                 ; 005abe8c

