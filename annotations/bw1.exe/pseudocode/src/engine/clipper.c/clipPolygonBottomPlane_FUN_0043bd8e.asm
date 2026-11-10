; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_0043bd8e(int *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043bd78 = 0043bde7
;   undefined1* PTR_caseD_1_0043bd7c = 0043be12
;   undefined1* PTR_caseD_3_0043bd84 = 0043bdec
;   TerminatedCString s_engine_clipper_c_005d66da
;   TerminatedCString s_Ran_out_of_clipped_verts_005d66ee
;   undefined4 DAT_007c81dc
;   undefined4 DAT_007c841c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043bd8e
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_0043bd8e
    PUSH EBX                            ; 0043bd90
    PUSH ESI                            ; 0043bd91
    PUSH EDI                            ; 0043bd92
    PUSH EBP                            ; 0043bd93
    SUB ESP,0x8                         ; 0043bd94
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043bd97
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043bd9b
    XOR EBX,EBX                         ; 0043bd9f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043bda1
    MOV dword ptr [ESP],EBX             ; 0043bda5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 0043bda8
    TEST EAX,EAX                        ; 0043bdac
    JLE 0x0043be08                      ; 0043bdae
        ;   XREF to: 0043be08 (CONDITIONAL_JUMP)  ; LAB_0043be08
    MOV dword ptr [ESP + 0x4],EDX       ; 0043bdb0
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043bdb4
        ;   Label: LAB_0043bdb4
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043bdb8
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043bdbb
    XOR EAX,EAX                         ; 0043bdbe
    NEG EDX                             ; 0043bdc0
    MOV EDI,dword ptr [EDI]             ; 0043bdc2
    CMP EDX,ECX                         ; 0043bdc4
    JL 0x0043bdcd                       ; 0043bdc6
        ;   XREF to: 0043bdcd (CONDITIONAL_JUMP)  ; LAB_0043bdcd
    MOV EAX,0x1                         ; 0043bdc8
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043bdcd
        ;   Label: LAB_0043bdcd
    MOV ECX,dword ptr [EDI + 0x4]       ; 0043bdd0
    NEG EDX                             ; 0043bdd3
    CMP EDX,ECX                         ; 0043bdd5
    JL 0x0043bddb                       ; 0043bdd7
        ;   XREF to: 0043bddb (CONDITIONAL_JUMP)  ; LAB_0043bddb
    OR AL,0x2                           ; 0043bdd9
    CMP EAX,0x3                         ; 0043bddb
        ;   Label: LAB_0043bddb
    JA 0x0043bdec                       ; 0043bdde
        ;   XREF to: 0043bdec (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43bd78]  ; 0043bde0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043bde7
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043bde8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bdec
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043bdf0
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043bdf3
    MOV ESI,EDI                         ; 0043bdf7
    ADD EAX,0x4                         ; 0043bdf9
    INC EDX                             ; 0043bdfc
    MOV dword ptr [ESP + 0x4],EAX       ; 0043bdfd
    MOV dword ptr [ESP],EDX             ; 0043be01
    CMP EDX,ECX                         ; 0043be04
    JL 0x0043bdb4                       ; 0043be06
        ;   XREF to: 0043bdb4 (CONDITIONAL_JUMP)  ; LAB_0043bdb4
    MOV EAX,EBX                         ; 0043be08
        ;   Label: LAB_0043be08
    ADD ESP,0x8                         ; 0043be0a
    POP EBP                             ; 0043be0d
    POP EDI                             ; 0043be0e
    POP ESI                             ; 0043be0f
    POP EBX                             ; 0043be10
    RET                                 ; 0043be11
    CMP dword ptr [0x007c841c],0xc      ; 0043be12 | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043be3d                       ; 0043be19
        ;   XREF to: 0043be3d (CONDITIONAL_JUMP)  ; LAB_0043be3d
    MOV ECX,0x5d66da                    ; 0043be1b | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043be20
    PUSH 0x5d66ee                       ; 0043be25 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0043be2a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043be30 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043be35
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043be3a
    MOV EAX,[0x007c841c]                ; 0043be3d | DAT_007c841c
        ;   Label: LAB_0043be3d
    IMUL EDX,EAX,0x30                   ; 0043be42
    ADD EDX,0x7c81dc                    ; 0043be45 | DAT_007c81dc
    PUSH EDX                            ; 0043be4b
    PUSH ESI                            ; 0043be4c
    INC EBX                             ; 0043be4d
    INC EAX                             ; 0043be4e
    PUSH EDI                            ; 0043be4f
    MOV [0x007c841c],EAX                ; 0043be50 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043be55
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 0043be59
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    ADD ESP,0xc                         ; 0043be5e
    JMP 0x0043bdec                      ; 0043be61
        ;   XREF to: 0043bdec (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043be63
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043be64 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043be69
    CMP EAX,0xc                         ; 0043be6d
    JL 0x0043be95                       ; 0043be70
        ;   XREF to: 0043be95 (CONDITIONAL_JUMP)  ; LAB_0043be95
    MOV EDX,0x5d66da                    ; 0043be72 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043be77
    PUSH 0x5d66ee                       ; 0043be7c | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],EDX      ; 0043be81 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043be87 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043be8d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043be92
    MOV EAX,[0x007c841c]                ; 0043be95 | DAT_007c841c
        ;   Label: LAB_0043be95
    IMUL EDX,EAX,0x30                   ; 0043be9a
    ADD EDX,0x7c81dc                    ; 0043be9d | DAT_007c81dc
    PUSH EDX                            ; 0043bea3
    PUSH EDI                            ; 0043bea4
    INC EBX                             ; 0043bea5
    INC EAX                             ; 0043bea6
    PUSH ESI                            ; 0043bea7
    MOV [0x007c841c],EAX                ; 0043bea8 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043bead
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 0043beb1
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    ADD ESP,0xc                         ; 0043beb6
    JMP 0x0043bdec                      ; 0043beb9
        ;   XREF to: 0043bdec (UNCONDITIONAL_JUMP)  ; caseD_3

