; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(int *param_1,ushort *param_2,int param_3)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 at 00461e74
;   engine_drender.cpp_FUN_00461720 at 00461787
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01b4d774
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0045f5e0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045f5e1
    MOV EBP,dword ptr [ESP + 0xc]       ; 0045f5e5
    CMP dword ptr [ESP + 0x10],-0x1     ; 0045f5e9
    JZ 0x0045f655                       ; 0045f5ee
        ;   XREF to: 0045f655 (CONDITIONAL_JUMP)  ; LAB_0045f655
    CMP dword ptr [ECX + 0x1c],0x0      ; 0045f5f0
        ;   Label: LAB_0045f5f0
    JNZ 0x0045f65f                      ; 0045f5f4
        ;   XREF to: 0045f65f (CONDITIONAL_JUMP)  ; LAB_0045f65f
    PUSH EBX                            ; 0045f5f6
    CMP dword ptr [ECX + 0x4],0x0       ; 0045f5f7
    JZ 0x0045f670                       ; 0045f5fb
        ;   XREF to: 0045f670 (CONDITIONAL_JUMP)  ; LAB_0045f670
    XOR EAX,EAX                         ; 0045f5fd
        ;   Label: LAB_0045f5fd
    MOV AX,word ptr [EBP]               ; 0045f5ff
    MOV [0x01b4d76c],EAX                ; 0045f603 | DAT_01b4d76c
    XOR EAX,EAX                         ; 0045f608
    MOV AX,word ptr [EBP + 0x2]         ; 0045f60a
    MOV [0x01b4d770],EAX                ; 0045f60e | DAT_01b4d770
    XOR EAX,EAX                         ; 0045f613
    MOV AX,word ptr [EBP + 0x4]         ; 0045f615
    MOV EBX,dword ptr [ECX + 0x4]       ; 0045f619
    MOV [0x01b4d774],EAX                ; 0045f61c | DAT_01b4d774
    TEST EBX,EBX                        ; 0045f621
    JZ 0x0045f6b1                       ; 0045f623
        ;   XREF to: 0045f6b1 (CONDITIONAL_JUMP)  ; LAB_0045f6b1
    XOR EBX,EBX                         ; 0045f629
    MOV EDX,0x463a79                    ; 0045f62b
    MOV dword ptr [0x01c039a0],EBX      ; 0045f630 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBX      ; 0045f636 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EDX      ; 0045f63c | DAT_01c00c7c
    PUSH 0x1b4d76c                      ; 0045f642 | DAT_01b4d76c
    PUSH 0x3                            ; 0045f647
    PUSH ECX                            ; 0045f649
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f64a
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045f64f
    POP EBX                             ; 0045f652
    POP EBP                             ; 0045f653
    RET                                 ; 0045f654
    MOV dword ptr [ESP + 0x10],0x2cd    ; 0045f655
        ;   Label: LAB_0045f655
    JMP 0x0045f5f0                      ; 0045f65d
        ;   XREF to: 0045f5f0 (UNCONDITIONAL_JUMP)  ; LAB_0045f5f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045f65f
        ;   Label: LAB_0045f65f
    PUSH EDX                            ; 0045f663
    PUSH EBP                            ; 0045f664
    PUSH ECX                            ; 0045f665
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 ; 0045f666
        ;   XREF to: 00461bd0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0()
    ADD ESP,0xc                         ; 0045f66b
    POP EBP                             ; 0045f66e
    RET                                 ; 0045f66f
    CMP dword ptr [ECX + 0x20],0x0      ; 0045f670
        ;   Label: LAB_0045f670
    JNZ 0x0045f5fd                      ; 0045f674
        ;   XREF to: 0045f5fd (CONDITIONAL_JUMP)  ; LAB_0045f5fd
    PUSH EDI                            ; 0045f676
    PUSH ESI                            ; 0045f677
    MOV EAX,EBP                         ; 0045f678
    LEA EDI,[EBP + 0x6]                 ; 0045f67a
    XOR EDX,EDX                         ; 0045f67d
        ;   Label: LAB_0045f67d
    MOV DX,word ptr [EAX]               ; 0045f67f
    IMUL EDX,EDX,0x30                   ; 0045f682
    XOR ESI,ESI                         ; 0045f685
    MOV SI,word ptr [EAX + 0x6]         ; 0045f687
    MOV EBX,dword ptr [ECX]             ; 0045f68b
    SHL ESI,0x8                         ; 0045f68d
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0045f690
    XOR EBX,EBX                         ; 0045f694
    MOV BX,word ptr [EAX + 0xc]         ; 0045f696
    MOV ESI,dword ptr [ECX]             ; 0045f69a
    SHL EBX,0x8                         ; 0045f69c
    ADD EAX,0x2                         ; 0045f69f
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0045f6a2
    CMP EAX,EDI                         ; 0045f6a6
    JNZ 0x0045f67d                      ; 0045f6a8
        ;   XREF to: 0045f67d (CONDITIONAL_JUMP)  ; LAB_0045f67d
    POP ESI                             ; 0045f6aa
    POP EDI                             ; 0045f6ab
    JMP 0x0045f5fd                      ; 0045f6ac
        ;   XREF to: 0045f5fd (UNCONDITIONAL_JUMP)  ; LAB_0045f5fd
    CMP dword ptr [0x005b7624],0x20     ; 0045f6b1 | DAT_005b7624
        ;   Label: LAB_0045f6b1
    JNZ 0x0045f6ea                      ; 0045f6b8
        ;   XREF to: 0045f6ea (CONDITIONAL_JUMP)  ; LAB_0045f6ea
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f6ba | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045f6c4
        ;   Label: LAB_0045f6c4
    MOV [0x01c039a0],EAX                ; 0045f6c8 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],0x6      ; 0045f6cd | DAT_01c039a4
    PUSH 0x1b4d76c                      ; 0045f6d7 | DAT_01b4d76c
    PUSH 0x3                            ; 0045f6dc
    PUSH ECX                            ; 0045f6de
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f6df
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045f6e4
    POP EBX                             ; 0045f6e7
    POP EBP                             ; 0045f6e8
    RET                                 ; 0045f6e9
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f6ea | DAT_01c00c7c
        ;   Label: LAB_0045f6ea
    JMP 0x0045f6c4                      ; 0045f6f4
        ;   XREF to: 0045f6c4 (UNCONDITIONAL_JUMP)  ; LAB_0045f6c4

