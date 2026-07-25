; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00431a50(undefined4 *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00431a34 = 00431a9f
;   undefined1* PTR_caseD_1_00431a38 = 00431aca
;   undefined1* PTR_caseD_3_00431a40 = 00431aa4
;   TerminatedCString s_engine_clipper_c_0057ac47
;   TerminatedCString s_Ran_out_of_clipped_verts_0057ac5b
;   undefined4 DAT_007678f8
;   undefined4 DAT_00767b38
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431a50
        ;   Label: FUN_00431a50
    PUSH ESI                            ; 00431a51
    PUSH EDI                            ; 00431a52
    PUSH EBP                            ; 00431a53
    SUB ESP,0x8                         ; 00431a54
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00431a57
    MOV EBP,dword ptr [ESP + 0x20]      ; 00431a5b
    XOR EBX,EBX                         ; 00431a5f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00431a61
    MOV dword ptr [ESP],EBX             ; 00431a65
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00431a68
    TEST EAX,EAX                        ; 00431a6c
    JLE 0x00431ac0                      ; 00431a6e
        ;   XREF to: 00431ac0 (CONDITIONAL_JUMP)  ; LAB_00431ac0
    MOV dword ptr [ESP + 0x4],EDX       ; 00431a70
    MOV EDI,dword ptr [ESP + 0x4]       ; 00431a74
        ;   Label: LAB_00431a74
    MOV EDX,dword ptr [ESI]             ; 00431a78
    MOV ECX,dword ptr [ESI + 0x8]       ; 00431a7a
    XOR EAX,EAX                         ; 00431a7d
    MOV EDI,dword ptr [EDI]             ; 00431a7f
    CMP EDX,ECX                         ; 00431a81
    JL 0x00431a8a                       ; 00431a83
        ;   XREF to: 00431a8a (CONDITIONAL_JUMP)  ; LAB_00431a8a
    MOV EAX,0x1                         ; 00431a85
    MOV ECX,dword ptr [EDI + 0x8]       ; 00431a8a
        ;   Label: LAB_00431a8a
    CMP ECX,dword ptr [EDI]             ; 00431a8d
    JG 0x00431a93                       ; 00431a8f
        ;   XREF to: 00431a93 (CONDITIONAL_JUMP)  ; LAB_00431a93
    OR AL,0x2                           ; 00431a91
    CMP EAX,0x3                         ; 00431a93
        ;   Label: LAB_00431a93
    JA 0x00431aa4                       ; 00431a96
        ;   XREF to: 00431aa4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x431a34]  ; 00431a98 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00431a9f
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431aa0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431aa4
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00431aa8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431aab
    MOV ESI,EDI                         ; 00431aaf
    ADD EAX,0x4                         ; 00431ab1
    INC EDX                             ; 00431ab4
    MOV dword ptr [ESP + 0x4],EAX       ; 00431ab5
    MOV dword ptr [ESP],EDX             ; 00431ab9
    CMP EDX,ECX                         ; 00431abc
    JL 0x00431a74                       ; 00431abe
        ;   XREF to: 00431a74 (CONDITIONAL_JUMP)  ; LAB_00431a74
    MOV EAX,EBX                         ; 00431ac0
        ;   Label: LAB_00431ac0
    ADD ESP,0x8                         ; 00431ac2
    POP EBP                             ; 00431ac5
    POP EDI                             ; 00431ac6
    POP ESI                             ; 00431ac7
    POP EBX                             ; 00431ac8
    RET                                 ; 00431ac9
    CMP dword ptr [0x00767b38],0xc      ; 00431aca | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00431af5                       ; 00431ad1
        ;   XREF to: 00431af5 (CONDITIONAL_JUMP)  ; LAB_00431af5
    MOV ECX,0x57ac47                    ; 00431ad3 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431ad8
    PUSH 0x57ac5b                       ; 00431add | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 00431ae2 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00431ae8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00431aed
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00431af2
    MOV EAX,[0x00767b38]                ; 00431af5 | DAT_00767b38
        ;   Label: LAB_00431af5
    IMUL EDX,EAX,0x30                   ; 00431afa
    ADD EDX,0x7678f8                    ; 00431afd | DAT_007678f8
    PUSH EDX                            ; 00431b03
    PUSH ESI                            ; 00431b04
    INC EBX                             ; 00431b05
    INC EAX                             ; 00431b06
    PUSH EDI                            ; 00431b07
    MOV [0x00767b38],EAX                ; 00431b08 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431b0d
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 00431b11
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00431530()
    ADD ESP,0xc                         ; 00431b16
    JMP 0x00431aa4                      ; 00431b19
        ;   XREF to: 00431aa4 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431b1b
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00431b1c | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431b21
    CMP EAX,0xc                         ; 00431b25
    JL 0x00431b4d                       ; 00431b28
        ;   XREF to: 00431b4d (CONDITIONAL_JUMP)  ; LAB_00431b4d
    MOV EDX,0x57ac47                    ; 00431b2a | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431b2f
    PUSH 0x57ac5b                       ; 00431b34 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00431b39 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00431b3f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00431b45
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00431b4a
    MOV EAX,[0x00767b38]                ; 00431b4d | DAT_00767b38
        ;   Label: LAB_00431b4d
    IMUL EDX,EAX,0x30                   ; 00431b52
    ADD EDX,0x7678f8                    ; 00431b55 | DAT_007678f8
    PUSH EDX                            ; 00431b5b
    PUSH EDI                            ; 00431b5c
    INC EBX                             ; 00431b5d
    INC EAX                             ; 00431b5e
    PUSH ESI                            ; 00431b5f
    MOV [0x00767b38],EAX                ; 00431b60 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431b65
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 00431b69
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00431530()
    ADD ESP,0xc                         ; 00431b6e
    JMP 0x00431aa4                      ; 00431b71
        ;   XREF to: 00431aa4 (UNCONDITIONAL_JUMP)  ; caseD_3

