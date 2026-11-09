; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_clipper_c_FUN_00430cae(undefined4 *param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00430c98 = 00430d05
;   undefined1* PTR_caseD_1_00430c9c = 00430d30
;   undefined1* PTR_caseD_3_00430ca4 = 00430d0a
;   TerminatedCString s_engine_clipper_c_005cd962
;   TerminatedCString s_Ran_out_of_clipped_verts_005cd976
;   undefined4 DAT_007bfab8
;   undefined4 DAT_007bfcf8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00430750
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00430cae
        ;   Label: engine_clipper.c_FUN_00430cae
    PUSH EBX                            ; 00430cb0
    PUSH ESI                            ; 00430cb1
    PUSH EDI                            ; 00430cb2
    PUSH EBP                            ; 00430cb3
    SUB ESP,0x8                         ; 00430cb4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00430cb7
    MOV EBP,dword ptr [ESP + 0x20]      ; 00430cbb
    XOR EBX,EBX                         ; 00430cbf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00430cc1
    MOV dword ptr [ESP],EBX             ; 00430cc5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 00430cc8
    TEST EAX,EAX                        ; 00430ccc
    JLE 0x00430d26                      ; 00430cce
        ;   XREF to: 00430d26 (CONDITIONAL_JUMP)  ; LAB_00430d26
    MOV dword ptr [ESP + 0x4],EDX       ; 00430cd0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00430cd4
        ;   Label: LAB_00430cd4
    MOV EDX,dword ptr [ESI + 0x8]       ; 00430cd8
    MOV ECX,dword ptr [ESI]             ; 00430cdb
    XOR EAX,EAX                         ; 00430cdd
    NEG EDX                             ; 00430cdf
    MOV EDI,dword ptr [EDI]             ; 00430ce1
    CMP EDX,ECX                         ; 00430ce3
    JL 0x00430cec                       ; 00430ce5
        ;   XREF to: 00430cec (CONDITIONAL_JUMP)  ; LAB_00430cec
    MOV EAX,0x1                         ; 00430ce7
    MOV EDX,dword ptr [EDI + 0x8]       ; 00430cec
        ;   Label: LAB_00430cec
    MOV ECX,dword ptr [EDI]             ; 00430cef
    NEG EDX                             ; 00430cf1
    CMP EDX,ECX                         ; 00430cf3
    JL 0x00430cf9                       ; 00430cf5
        ;   XREF to: 00430cf9 (CONDITIONAL_JUMP)  ; LAB_00430cf9
    OR AL,0x2                           ; 00430cf7
    CMP EAX,0x3                         ; 00430cf9
        ;   Label: LAB_00430cf9
    JA 0x00430d0a                       ; 00430cfc
        ;   XREF to: 00430d0a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x430c98]  ; 00430cfe | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00430d05
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00430d06
    MOV EAX,dword ptr [ESP + 0x4]       ; 00430d0a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00430d0e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00430d11
    MOV ESI,EDI                         ; 00430d15
    ADD EAX,0x4                         ; 00430d17
    INC EDX                             ; 00430d1a
    MOV dword ptr [ESP + 0x4],EAX       ; 00430d1b
    MOV dword ptr [ESP],EDX             ; 00430d1f
    CMP EDX,ECX                         ; 00430d22
    JL 0x00430cd4                       ; 00430d24
        ;   XREF to: 00430cd4 (CONDITIONAL_JUMP)  ; LAB_00430cd4
    MOV EAX,EBX                         ; 00430d26
        ;   Label: LAB_00430d26
    ADD ESP,0x8                         ; 00430d28
    POP EBP                             ; 00430d2b
    POP EDI                             ; 00430d2c
    POP ESI                             ; 00430d2d
    POP EBX                             ; 00430d2e
    RET                                 ; 00430d2f
    CMP dword ptr [0x007bfcf8],0xc      ; 00430d30 | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00430d5b                       ; 00430d37
        ;   XREF to: 00430d5b (CONDITIONAL_JUMP)  ; LAB_00430d5b
    MOV ECX,0x5cd962                    ; 00430d39 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00430d3e
    PUSH 0x5cd976                       ; 00430d43 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 00430d48 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00430d4e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00430d53
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00430d58
    MOV EAX,[0x007bfcf8]                ; 00430d5b | DAT_007bfcf8
        ;   Label: LAB_00430d5b
    IMUL EDX,EAX,0x30                   ; 00430d60
    ADD EDX,0x7bfab8                    ; 00430d63 | DAT_007bfab8
    PUSH EDX                            ; 00430d69
    PUSH ESI                            ; 00430d6a
    INC EBX                             ; 00430d6b
    INC EAX                             ; 00430d6c
    PUSH EDI                            ; 00430d6d
    MOV [0x007bfcf8],EAX                ; 00430d6e | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00430d73
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00430750 ; 00430d77
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00430750()
    ADD ESP,0xc                         ; 00430d7c
    JMP 0x00430d0a                      ; 00430d7f
        ;   XREF to: 00430d0a (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00430d81
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 00430d82 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00430d87
    CMP EAX,0xc                         ; 00430d8b
    JL 0x00430db3                       ; 00430d8e
        ;   XREF to: 00430db3 (CONDITIONAL_JUMP)  ; LAB_00430db3
    MOV EDX,0x5cd962                    ; 00430d90 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00430d95
    PUSH 0x5cd976                       ; 00430d9a | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 00430d9f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00430da5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00430dab
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00430db0
    MOV EAX,[0x007bfcf8]                ; 00430db3 | DAT_007bfcf8
        ;   Label: LAB_00430db3
    IMUL EDX,EAX,0x30                   ; 00430db8
    ADD EDX,0x7bfab8                    ; 00430dbb | DAT_007bfab8
    PUSH EDX                            ; 00430dc1
    PUSH EDI                            ; 00430dc2
    INC EBX                             ; 00430dc3
    INC EAX                             ; 00430dc4
    PUSH ESI                            ; 00430dc5
    MOV [0x007bfcf8],EAX                ; 00430dc6 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00430dcb
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00430750 ; 00430dcf
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00430750()
    ADD ESP,0xc                         ; 00430dd4
    JMP 0x00430d0a                      ; 00430dd7
        ;   XREF to: 00430d0a (UNCONDITIONAL_JUMP)  ; caseD_3

