; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517ec0(int *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00519280 at 005193f7
;
; Referenced Globals:
;   string s_..\\core\\skeleton.cpp_00591571
;   string s_CDeformableModel::allocLOD_-_inv_00591586
;   string s_..\\core\\skeleton.cpp_005915b9
;   string s_Out_of_hunk_in_CDeformableModel:_005915ce
;   undefined4 DAT_005a1ee0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00517cc0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564c18
;   FUN_00566234
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517ec0
        ;   Label: FUN_00517ec0
    PUSH ESI                            ; 00517ec1
    PUSH EDI                            ; 00517ec2
    PUSH EBP                            ; 00517ec3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00517ec4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00517ec8
    TEST EDI,EDI                        ; 00517ecc
    JL 0x00517ed4                       ; 00517ece
        ;   XREF to: 00517ed4 (CONDITIONAL_JUMP)  ; LAB_00517ed4
    CMP EDI,dword ptr [ESI]             ; 00517ed0
    JL 0x00517ef8                       ; 00517ed2
        ;   XREF to: 00517ef8 (CONDITIONAL_JUMP)  ; LAB_00517ef8
    PUSH EDI                            ; 00517ed4
        ;   Label: LAB_00517ed4
    MOV ECX,0x591571                    ; 00517ed5 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x28a                       ; 00517eda
    PUSH 0x591586                       ; 00517edf | = "CDeformableModel::allocLOD - invalid ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00517ee4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00517eea | DAT_01cc4804
    CALL FUN_004c8440                   ; 00517ef0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00517ef5
    LEA EBX,[EDI*0x4 + 0x0]             ; 00517ef8
        ;   Label: LAB_00517ef8
    ADD EBX,ESI                         ; 00517eff
    PUSH 0x5a1ee0                       ; 00517f01 | DAT_005a1ee0
    MOV EBP,dword ptr [EBX + 0x40]      ; 00517f06
    PUSH EBP                            ; 00517f09
    CALL FUN_0056445f                   ; 00517f0a
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00517f0f
    PUSH EAX                            ; 00517f12
    CALL FUN_00564486                   ; 00517f13
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00517f18
    MOV EAX,dword ptr [EBX + 0x7c]      ; 00517f1b
    PUSH EAX                            ; 00517f1e
    CALL FUN_00564486                   ; 00517f1f
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00517f24
    MOV EDX,dword ptr [EBX + 0x90]      ; 00517f27
    PUSH EDX                            ; 00517f2d
    CALL FUN_00564486                   ; 00517f2e
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00517f33
    MOV ECX,dword ptr [EBX + 0xa4]      ; 00517f36
    PUSH ECX                            ; 00517f3c
    CALL FUN_00564486                   ; 00517f3d
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00517f42
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517f45
    PUSH 0x5a1ee0                       ; 00517f49 | DAT_005a1ee0
    MOV dword ptr [EBX + 0x2c],EAX      ; 00517f4e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00517f51
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00517f55
    MOV dword ptr [EBX + 0x54],EAX      ; 00517f58
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517f5b
    PUSH EDX                            ; 00517f5f
    MOV dword ptr [EBX + 0x68],EAX      ; 00517f60
    LEA EAX,[EDX*0x4 + 0x0]             ; 00517f63
    SUB EAX,EDX                         ; 00517f6a
    SHL EAX,0x2                         ; 00517f6c
    ADD EAX,EDX                         ; 00517f6f
    SHL EAX,0x2                         ; 00517f71
    ADD EAX,0x4                         ; 00517f74
    PUSH EAX                            ; 00517f77
    CALL FUN_00564c18                   ; 00517f78
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c18()
    ADD ESP,0x4                         ; 00517f7d
    PUSH EAX                            ; 00517f80
    CALL FUN_00566234                   ; 00517f81
        ;   XREF to: 00566234 (UNCONDITIONAL_CALL)  ; undefined FUN_00566234()
    MOV EDX,dword ptr [EBX + 0x54]      ; 00517f86
    ADD EDX,dword ptr [EBX + 0x68]      ; 00517f89
    MOV dword ptr [EBX + 0x40],EAX      ; 00517f8c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00517f8f
    ADD EAX,EDX                         ; 00517f96
    ADD ESP,0xc                         ; 00517f98
    ADD EAX,EAX                         ; 00517f9b
    PUSH EAX                            ; 00517f9d
    CALL FUN_00564c18                   ; 00517f9e
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c18()
    MOV dword ptr [EBX + 0x7c],EAX      ; 00517fa3
    MOV EDX,dword ptr [EBX + 0x68]      ; 00517fa6
    MOV EAX,dword ptr [EBX + 0x54]      ; 00517fa9
    ADD EAX,EDX                         ; 00517fac
    ADD ESP,0x4                         ; 00517fae
    SHL EAX,0x2                         ; 00517fb1
    PUSH EAX                            ; 00517fb4
    CALL FUN_00564c18                   ; 00517fb5
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c18()
    ADD ESP,0x4                         ; 00517fba
    MOV ECX,dword ptr [EBX + 0x68]      ; 00517fbd
    MOV dword ptr [EBX + 0x90],EAX      ; 00517fc0
    TEST ECX,ECX                        ; 00517fc6
    JLE 0x00518012                      ; 00517fc8
        ;   XREF to: 00518012 (CONDITIONAL_JUMP)  ; LAB_00518012
    LEA EAX,[ECX*0x4 + 0x0]             ; 00517fca
    PUSH EAX                            ; 00517fd1
    CALL FUN_00564c18                   ; 00517fd2
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c18()
    ADD ESP,0x4                         ; 00517fd7
    MOV dword ptr [EBX + 0xa4],EAX      ; 00517fda
    LEA EAX,[EDI*0x4 + 0x0]             ; 00517fe0
        ;   Label: LAB_00517fe0
    ADD EAX,ESI                         ; 00517fe7
    CMP dword ptr [EAX + 0x40],0x0      ; 00517fe9
    JZ 0x0051801e                       ; 00517fed
        ;   XREF to: 0051801e (CONDITIONAL_JUMP)  ; LAB_0051801e
    CMP dword ptr [EAX + 0x7c],0x0      ; 00517fef
    JZ 0x0051801e                       ; 00517ff3
        ;   XREF to: 0051801e (CONDITIONAL_JUMP)  ; LAB_0051801e
    CMP dword ptr [EAX + 0x90],0x0      ; 00517ff5
    JZ 0x0051801e                       ; 00517ffc
        ;   XREF to: 0051801e (CONDITIONAL_JUMP)  ; LAB_0051801e
    CMP dword ptr [EAX + 0x68],0x0      ; 00517ffe
    JLE 0x0051800d                      ; 00518002
        ;   XREF to: 0051800d (CONDITIONAL_JUMP)  ; LAB_0051800d
    CMP dword ptr [EAX + 0xa4],0x0      ; 00518004
    JZ 0x0051801e                       ; 0051800b
        ;   XREF to: 0051801e (CONDITIONAL_JUMP)  ; LAB_0051801e
    POP EBP                             ; 0051800d
        ;   Label: LAB_0051800d
    POP EDI                             ; 0051800e
    POP ESI                             ; 0051800f
    POP EBX                             ; 00518010
    RET                                 ; 00518011
    MOV dword ptr [EBX + 0xa4],0x0      ; 00518012
        ;   Label: LAB_00518012
    JMP 0x00517fe0                      ; 0051801c
        ;   XREF to: 00517fe0 (UNCONDITIONAL_JUMP)  ; LAB_00517fe0
    PUSH ESI                            ; 0051801e
        ;   Label: LAB_0051801e
    CALL FUN_00517cc0                   ; 0051801f
        ;   XREF to: 00517cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00517cc0()
    ADD ESP,0x4                         ; 00518024
    LEA EAX,[ESI + 0x68]                ; 00518027
    PUSH EAX                            ; 0051802a
    LEA EAX,[ESI + 0x54]                ; 0051802b
    PUSH EAX                            ; 0051802e
    ADD ESI,0x2c                        ; 0051802f
    PUSH ESI                            ; 00518032
    MOV EBX,0x5915b9                    ; 00518033 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x2ae                       ; 00518038
    PUSH 0x5915ce                       ; 0051803d | = "Out of hunk in CDeformableModel::allo..."
    MOV dword ptr [0x01cc4800],EBX      ; 00518042 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00518048 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051804e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x10                        ; 00518053
    POP EBP                             ; 00518056
    POP EDI                             ; 00518057
    POP ESI                             ; 00518058
    POP EBX                             ; 00518059
    RET                                 ; 0051805a

