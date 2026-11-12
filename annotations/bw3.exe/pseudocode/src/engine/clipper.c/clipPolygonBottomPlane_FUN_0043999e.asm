; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_0043999e(undefined4 *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00439988 = 004399f7
;   undefined1* PTR_caseD_1_0043998c = 00439a22
;   undefined1* PTR_caseD_3_00439994 = 004399fc
;   TerminatedCString s_engine_clipper_c_005b8f4a
;   TerminatedCString s_Ran_out_of_clipped_verts_005b8f5e
;   undefined4 DAT_007e4b10
;   undefined4 DAT_007e4d50
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043999e
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_0043999e
    PUSH EBX                            ; 004399a0
    PUSH ESI                            ; 004399a1
    PUSH EDI                            ; 004399a2
    PUSH EBP                            ; 004399a3
    SUB ESP,0x8                         ; 004399a4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004399a7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004399ab
    XOR EBX,EBX                         ; 004399af
    MOV EAX,dword ptr [ESP + 0x24]      ; 004399b1
    MOV dword ptr [ESP],EBX             ; 004399b5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 004399b8
    TEST EAX,EAX                        ; 004399bc
    JLE 0x00439a18                      ; 004399be
        ;   XREF to: 00439a18 (CONDITIONAL_JUMP)  ; LAB_00439a18
    MOV dword ptr [ESP + 0x4],EDX       ; 004399c0
    MOV EDI,dword ptr [ESP + 0x4]       ; 004399c4
        ;   Label: LAB_004399c4
    MOV EDX,dword ptr [ESI + 0x8]       ; 004399c8
    MOV ECX,dword ptr [ESI + 0x4]       ; 004399cb
    XOR EAX,EAX                         ; 004399ce
    NEG EDX                             ; 004399d0
    MOV EDI,dword ptr [EDI]             ; 004399d2
    CMP EDX,ECX                         ; 004399d4
    JL 0x004399dd                       ; 004399d6
        ;   XREF to: 004399dd (CONDITIONAL_JUMP)  ; LAB_004399dd
    MOV EAX,0x1                         ; 004399d8
    MOV EDX,dword ptr [EDI + 0x8]       ; 004399dd
        ;   Label: LAB_004399dd
    MOV ECX,dword ptr [EDI + 0x4]       ; 004399e0
    NEG EDX                             ; 004399e3
    CMP EDX,ECX                         ; 004399e5
    JL 0x004399eb                       ; 004399e7
        ;   XREF to: 004399eb (CONDITIONAL_JUMP)  ; LAB_004399eb
    OR AL,0x2                           ; 004399e9
    CMP EAX,0x3                         ; 004399eb
        ;   Label: LAB_004399eb
    JA 0x004399fc                       ; 004399ee
        ;   XREF to: 004399fc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439988]  ; 004399f0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 004399f7
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004399f8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004399fc
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00439a00
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439a03
    MOV ESI,EDI                         ; 00439a07
    ADD EAX,0x4                         ; 00439a09
    INC EDX                             ; 00439a0c
    MOV dword ptr [ESP + 0x4],EAX       ; 00439a0d
    MOV dword ptr [ESP],EDX             ; 00439a11
    CMP EDX,ECX                         ; 00439a14
    JL 0x004399c4                       ; 00439a16
        ;   XREF to: 004399c4 (CONDITIONAL_JUMP)  ; LAB_004399c4
    MOV EAX,EBX                         ; 00439a18
        ;   Label: LAB_00439a18
    ADD ESP,0x8                         ; 00439a1a
    POP EBP                             ; 00439a1d
    POP EDI                             ; 00439a1e
    POP ESI                             ; 00439a1f
    POP EBX                             ; 00439a20
    RET                                 ; 00439a21
    CMP dword ptr [0x007e4d50],0xc      ; 00439a22 | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x00439a4d                       ; 00439a29
        ;   XREF to: 00439a4d (CONDITIONAL_JUMP)  ; LAB_00439a4d
    MOV ECX,0x5b8f4a                    ; 00439a2b | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00439a30
    PUSH 0x5b8f5e                       ; 00439a35 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 00439a3a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00439a40 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00439a45
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00439a4a
    MOV EAX,[0x007e4d50]                ; 00439a4d | DAT_007e4d50
        ;   Label: LAB_00439a4d
    IMUL EDX,EAX,0x30                   ; 00439a52
    ADD EDX,0x7e4b10                    ; 00439a55 | DAT_007e4b10
    PUSH EDX                            ; 00439a5b
    PUSH ESI                            ; 00439a5c
    INC EBX                             ; 00439a5d
    INC EAX                             ; 00439a5e
    PUSH EDI                            ; 00439a5f
    MOV [0x007e4d50],EAX                ; 00439a60 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00439a65
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00439a69
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00439a6e
    JMP 0x004399fc                      ; 00439a71
        ;   XREF to: 004399fc (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00439a73
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 00439a74 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00439a79
    CMP EAX,0xc                         ; 00439a7d
    JL 0x00439aa5                       ; 00439a80
        ;   XREF to: 00439aa5 (CONDITIONAL_JUMP)  ; LAB_00439aa5
    MOV EDX,0x5b8f4a                    ; 00439a82 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00439a87
    PUSH 0x5b8f5e                       ; 00439a8c | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 00439a91 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00439a97 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00439a9d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00439aa2
    MOV EAX,[0x007e4d50]                ; 00439aa5 | DAT_007e4d50
        ;   Label: LAB_00439aa5
    IMUL EDX,EAX,0x30                   ; 00439aaa
    ADD EDX,0x7e4b10                    ; 00439aad | DAT_007e4b10
    PUSH EDX                            ; 00439ab3
    PUSH EDI                            ; 00439ab4
    INC EBX                             ; 00439ab5
    INC EAX                             ; 00439ab6
    PUSH ESI                            ; 00439ab7
    MOV [0x007e4d50],EAX                ; 00439ab8 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00439abd
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00439ac1
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00439ac6
    JMP 0x004399fc                      ; 00439ac9
        ;   XREF to: 004399fc (UNCONDITIONAL_JUMP)  ; caseD_3

