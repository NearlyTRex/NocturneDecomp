; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_clipPolygonBottomPlane_FUN_00430f2e(undefined4 *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00430f18 = 00430f87
;   undefined1* PTR_caseD_1_00430f1c = 00430fb2
;   undefined1* PTR_caseD_3_00430f24 = 00430f8c
;   TerminatedCString s_engine_clipper_c_005cd962
;   TerminatedCString s_Ran_out_of_clipped_verts_005cd976
;   undefined4 DAT_007bfab8
;   undefined4 DAT_007bfcf8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00430950
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00430f2e
        ;   Label: engine_clipper.c_clipPolygonBottomPlane_FUN_00430f2e
    PUSH EBX                            ; 00430f30
    PUSH ESI                            ; 00430f31
    PUSH EDI                            ; 00430f32
    PUSH EBP                            ; 00430f33
    SUB ESP,0x8                         ; 00430f34
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00430f37
    MOV EBP,dword ptr [ESP + 0x20]      ; 00430f3b
    XOR EBX,EBX                         ; 00430f3f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430f41
    MOV dword ptr [ESP],EBX             ; 00430f45
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00430f48
    TEST EAX,EAX                        ; 00430f4c
    JLE 0x00430fa8                      ; 00430f4e
        ;   XREF to: 00430fa8 (CONDITIONAL_JUMP)  ; LAB_00430fa8
    MOV dword ptr [ESP + 0x4],EDX       ; 00430f50
    MOV EDI,dword ptr [ESP + 0x4]       ; 00430f54
        ;   Label: LAB_00430f54
    MOV EDX,dword ptr [ESI + 0x8]       ; 00430f58
    MOV ECX,dword ptr [ESI + 0x4]       ; 00430f5b
    XOR EAX,EAX                         ; 00430f5e
    NEG EDX                             ; 00430f60
    MOV EDI,dword ptr [EDI]             ; 00430f62
    CMP EDX,ECX                         ; 00430f64
    JL 0x00430f6d                       ; 00430f66
        ;   XREF to: 00430f6d (CONDITIONAL_JUMP)  ; LAB_00430f6d
    MOV EAX,0x1                         ; 00430f68
    MOV EDX,dword ptr [EDI + 0x8]       ; 00430f6d
        ;   Label: LAB_00430f6d
    MOV ECX,dword ptr [EDI + 0x4]       ; 00430f70
    NEG EDX                             ; 00430f73
    CMP EDX,ECX                         ; 00430f75
    JL 0x00430f7b                       ; 00430f77
        ;   XREF to: 00430f7b (CONDITIONAL_JUMP)  ; LAB_00430f7b
    OR AL,0x2                           ; 00430f79
    CMP EAX,0x3                         ; 00430f7b
        ;   Label: LAB_00430f7b
    JA 0x00430f8c                       ; 00430f7e
        ;   XREF to: 00430f8c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x430f18]  ; 00430f80 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00430f87
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00430f88
    MOV EAX,dword ptr [ESP + 0x4]       ; 00430f8c
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00430f90
    MOV ECX,dword ptr [ESP + 0x24]      ; 00430f93
    MOV ESI,EDI                         ; 00430f97
    ADD EAX,0x4                         ; 00430f99
    INC EDX                             ; 00430f9c
    MOV dword ptr [ESP + 0x4],EAX       ; 00430f9d
    MOV dword ptr [ESP],EDX             ; 00430fa1
    CMP EDX,ECX                         ; 00430fa4
    JL 0x00430f54                       ; 00430fa6
        ;   XREF to: 00430f54 (CONDITIONAL_JUMP)  ; LAB_00430f54
    MOV EAX,EBX                         ; 00430fa8
        ;   Label: LAB_00430fa8
    ADD ESP,0x8                         ; 00430faa
    POP EBP                             ; 00430fad
    POP EDI                             ; 00430fae
    POP ESI                             ; 00430faf
    POP EBX                             ; 00430fb0
    RET                                 ; 00430fb1
    CMP dword ptr [0x007bfcf8],0xc      ; 00430fb2 | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00430fdd                       ; 00430fb9
        ;   XREF to: 00430fdd (CONDITIONAL_JUMP)  ; LAB_00430fdd
    MOV ECX,0x5cd962                    ; 00430fbb | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00430fc0
    PUSH 0x5cd976                       ; 00430fc5 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 00430fca | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00430fd0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00430fd5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00430fda
    MOV EAX,[0x007bfcf8]                ; 00430fdd | DAT_007bfcf8
        ;   Label: LAB_00430fdd
    IMUL EDX,EAX,0x30                   ; 00430fe2
    ADD EDX,0x7bfab8                    ; 00430fe5 | DAT_007bfab8
    PUSH EDX                            ; 00430feb
    PUSH ESI                            ; 00430fec
    INC EBX                             ; 00430fed
    INC EAX                             ; 00430fee
    PUSH EDI                            ; 00430fef
    MOV [0x007bfcf8],EAX                ; 00430ff0 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00430ff5
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00430950 ; 00430ff9
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00430950(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00430ffe
    JMP 0x00430f8c                      ; 00431001
        ;   XREF to: 00430f8c (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431003
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 00431004 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00431009
    CMP EAX,0xc                         ; 0043100d
    JL 0x00431035                       ; 00431010
        ;   XREF to: 00431035 (CONDITIONAL_JUMP)  ; LAB_00431035
    MOV EDX,0x5cd962                    ; 00431012 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431017
    PUSH 0x5cd976                       ; 0043101c | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 00431021 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00431027 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0043102d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00431032
    MOV EAX,[0x007bfcf8]                ; 00431035 | DAT_007bfcf8
        ;   Label: LAB_00431035
    IMUL EDX,EAX,0x30                   ; 0043103a
    ADD EDX,0x7bfab8                    ; 0043103d | DAT_007bfab8
    PUSH EDX                            ; 00431043
    PUSH EDI                            ; 00431044
    INC EBX                             ; 00431045
    INC EAX                             ; 00431046
    PUSH ESI                            ; 00431047
    MOV [0x007bfcf8],EAX                ; 00431048 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043104d
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00430950 ; 00431051
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00430950(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00431056
    JMP 0x00430f8c                      ; 00431059
        ;   XREF to: 00430f8c (UNCONDITIONAL_JUMP)  ; caseD_3

