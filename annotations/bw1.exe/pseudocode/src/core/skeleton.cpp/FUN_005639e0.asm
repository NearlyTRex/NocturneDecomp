; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005639e0(int *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00564ed0 at 00565047
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f1ef2
;   TerminatedCString s_CDeformableModel_allocLO_005f1f07
;   TerminatedCString s_core_skeleton_cpp_005f1f3a
;   TerminatedCString s_Out_of_hunk_in_CDeformab_005f1f4f
;   undefined4 DAT_006058c0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005637d0
;   FUN_005c0336
;   FUN_005c1268
;   FUN_005c267a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005639e0
        ;   Label: FUN_005639e0
    PUSH ESI                            ; 005639e1
    PUSH EDI                            ; 005639e2
    PUSH EBP                            ; 005639e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005639e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005639e8
    TEST EDI,EDI                        ; 005639ec
    JL 0x005639f4                       ; 005639ee
        ;   XREF to: 005639f4 (CONDITIONAL_JUMP)  ; LAB_005639f4
    CMP EDI,dword ptr [ESI]             ; 005639f0
    JL 0x00563a18                       ; 005639f2
        ;   XREF to: 00563a18 (CONDITIONAL_JUMP)  ; LAB_00563a18
    PUSH EDI                            ; 005639f4
        ;   Label: LAB_005639f4
    MOV ECX,0x5f1ef2                    ; 005639f5 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2a3                       ; 005639fa
    PUSH 0x5f1f07                       ; 005639ff | = "CDeformableModel::allocLOD - invalid ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00563a04 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00563a0a | DAT_01d1d404
    CALL FUN_005030e0                   ; 00563a10
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00563a15
    LEA EBX,[EDI*0x4 + 0x0]             ; 00563a18
        ;   Label: LAB_00563a18
    ADD EBX,ESI                         ; 00563a1f
    MOV EBP,dword ptr [EBX + 0x40]      ; 00563a21
    PUSH EBP                            ; 00563a24
    CALL FUN_005c0336                   ; 00563a25
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00563a2a
    MOV EAX,dword ptr [EBX + 0x7c]      ; 00563a2d
    PUSH EAX                            ; 00563a30
    CALL FUN_005c0336                   ; 00563a31
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00563a36
    MOV EDX,dword ptr [EBX + 0x90]      ; 00563a39
    PUSH EDX                            ; 00563a3f
    CALL FUN_005c0336                   ; 00563a40
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00563a45
    MOV ECX,dword ptr [EBX + 0xa4]      ; 00563a48
    PUSH ECX                            ; 00563a4e
    CALL FUN_005c0336                   ; 00563a4f
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00563a54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00563a57
    PUSH 0x6058c0                       ; 00563a5b | DAT_006058c0
    MOV dword ptr [EBX + 0x2c],EAX      ; 00563a60
    MOV EAX,dword ptr [ESP + 0x24]      ; 00563a63
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00563a67
    MOV dword ptr [EBX + 0x54],EAX      ; 00563a6a
    MOV EAX,dword ptr [ESP + 0x28]      ; 00563a6d
    PUSH EDX                            ; 00563a71
    MOV dword ptr [EBX + 0x68],EAX      ; 00563a72
    LEA EAX,[EDX*0x4 + 0x0]             ; 00563a75
    SUB EAX,EDX                         ; 00563a7c
    SHL EAX,0x2                         ; 00563a7e
    ADD EAX,EDX                         ; 00563a81
    SHL EAX,0x2                         ; 00563a83
    PUSH EAX                            ; 00563a86
    CALL FUN_005c1268                   ; 00563a87
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    ADD ESP,0x4                         ; 00563a8c
    PUSH EAX                            ; 00563a8f
    CALL FUN_005c267a                   ; 00563a90
        ;   XREF to: 005c267a (UNCONDITIONAL_CALL)  ; undefined FUN_005c267a()
    MOV EDX,dword ptr [EBX + 0x54]      ; 00563a95
    ADD EDX,dword ptr [EBX + 0x68]      ; 00563a98
    MOV dword ptr [EBX + 0x40],EAX      ; 00563a9b
    LEA EAX,[EDX*0x8 + 0x0]             ; 00563a9e
    ADD EAX,EDX                         ; 00563aa5
    ADD ESP,0xc                         ; 00563aa7
    ADD EAX,EAX                         ; 00563aaa
    PUSH EAX                            ; 00563aac
    CALL FUN_005c1268                   ; 00563aad
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    MOV dword ptr [EBX + 0x7c],EAX      ; 00563ab2
    MOV EDX,dword ptr [EBX + 0x68]      ; 00563ab5
    MOV EAX,dword ptr [EBX + 0x54]      ; 00563ab8
    ADD EAX,EDX                         ; 00563abb
    ADD ESP,0x4                         ; 00563abd
    SHL EAX,0x2                         ; 00563ac0
    PUSH EAX                            ; 00563ac3
    CALL FUN_005c1268                   ; 00563ac4
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    ADD ESP,0x4                         ; 00563ac9
    MOV ECX,dword ptr [EBX + 0x68]      ; 00563acc
    MOV dword ptr [EBX + 0x90],EAX      ; 00563acf
    TEST ECX,ECX                        ; 00563ad5
    JLE 0x00563b21                      ; 00563ad7
        ;   XREF to: 00563b21 (CONDITIONAL_JUMP)  ; LAB_00563b21
    LEA EAX,[ECX*0x4 + 0x0]             ; 00563ad9
    PUSH EAX                            ; 00563ae0
    CALL FUN_005c1268                   ; 00563ae1
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    ADD ESP,0x4                         ; 00563ae6
    MOV dword ptr [EBX + 0xa4],EAX      ; 00563ae9
    LEA EAX,[EDI*0x4 + 0x0]             ; 00563aef
        ;   Label: LAB_00563aef
    ADD EAX,ESI                         ; 00563af6
    CMP dword ptr [EAX + 0x40],0x0      ; 00563af8
    JZ 0x00563b2d                       ; 00563afc
        ;   XREF to: 00563b2d (CONDITIONAL_JUMP)  ; LAB_00563b2d
    CMP dword ptr [EAX + 0x7c],0x0      ; 00563afe
    JZ 0x00563b2d                       ; 00563b02
        ;   XREF to: 00563b2d (CONDITIONAL_JUMP)  ; LAB_00563b2d
    CMP dword ptr [EAX + 0x90],0x0      ; 00563b04
    JZ 0x00563b2d                       ; 00563b0b
        ;   XREF to: 00563b2d (CONDITIONAL_JUMP)  ; LAB_00563b2d
    CMP dword ptr [EAX + 0x68],0x0      ; 00563b0d
    JLE 0x00563b1c                      ; 00563b11
        ;   XREF to: 00563b1c (CONDITIONAL_JUMP)  ; LAB_00563b1c
    CMP dword ptr [EAX + 0xa4],0x0      ; 00563b13
    JZ 0x00563b2d                       ; 00563b1a
        ;   XREF to: 00563b2d (CONDITIONAL_JUMP)  ; LAB_00563b2d
    POP EBP                             ; 00563b1c
        ;   Label: LAB_00563b1c
    POP EDI                             ; 00563b1d
    POP ESI                             ; 00563b1e
    POP EBX                             ; 00563b1f
    RET                                 ; 00563b20
    MOV dword ptr [EBX + 0xa4],0x0      ; 00563b21
        ;   Label: LAB_00563b21
    JMP 0x00563aef                      ; 00563b2b
        ;   XREF to: 00563aef (UNCONDITIONAL_JUMP)  ; LAB_00563aef
    PUSH ESI                            ; 00563b2d
        ;   Label: LAB_00563b2d
    CALL FUN_005637d0                   ; 00563b2e
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005637d0()
    ADD ESP,0x4                         ; 00563b33
    LEA EAX,[ESI + 0x68]                ; 00563b36
    PUSH EAX                            ; 00563b39
    LEA EAX,[ESI + 0x54]                ; 00563b3a
    PUSH EAX                            ; 00563b3d
    ADD ESI,0x2c                        ; 00563b3e
    PUSH ESI                            ; 00563b41
    MOV EBX,0x5f1f3a                    ; 00563b42 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x2c7                       ; 00563b47
    PUSH 0x5f1f4f                       ; 00563b4c | = "Out of hunk in CDeformableModel::allo..."
    MOV dword ptr [0x01d1d400],EBX      ; 00563b51 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00563b57 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00563b5d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x10                        ; 00563b62
    POP EBP                             ; 00563b65
    POP EDI                             ; 00563b66
    POP ESI                             ; 00563b67
    POP EBX                             ; 00563b68
    RET                                 ; 00563b69

