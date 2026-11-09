; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_water.cpp_FUN_00577760 at 00577ce4
;
; Referenced Globals:
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046be60
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
    PUSH EBP                            ; 0046be61
    SUB ESP,0x4                         ; 0046be62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046be65
    CMP dword ptr [EBX + 0xc],0x0       ; 0046be69
    JNZ 0x0046bef1                      ; 0046be6d
        ;   XREF to: 0046bef1 (CONDITIONAL_JUMP)  ; LAB_0046bef1
    PUSH EDI                            ; 0046be73
        ;   Label: LAB_0046be73
    PUSH ESI                            ; 0046be74
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046be75
    TEST ECX,ECX                        ; 0046be78
    JZ 0x0046bf0a                       ; 0046be7a
        ;   XREF to: 0046bf0a (CONDITIONAL_JUMP)  ; LAB_0046bf0a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046be80
    MOV EDI,dword ptr [EDX + 0x4]       ; 0046be84
    XOR EAX,EAX                         ; 0046be87
    TEST EDI,EDI                        ; 0046be89
    JLE 0x0046beb0                      ; 0046be8b
        ;   XREF to: 0046beb0 (CONDITIONAL_JUMP)  ; LAB_0046beb0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046be8d
    XOR EDX,EDX                         ; 0046be91
    MOV ESI,dword ptr [ECX + 0x18]      ; 0046be93
        ;   Label: LAB_0046be93
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046be96 | DAT_01bdd818 | DAT_01bdd81c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046be9c
    ADD EDX,0x4                         ; 0046bea0
    INC EAX                             ; 0046bea3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046bea4
    ADD ECX,0xc                         ; 0046bea7
    CMP EAX,EBP                         ; 0046beaa
    JL 0x0046be93                       ; 0046beac
        ;   XREF to: 0046be93 (CONDITIONAL_JUMP)  ; LAB_0046be93
    MOV EAX,EAX                         ; 0046beae
    CMP dword ptr [EBX + 0x4],0x0       ; 0046beb0
        ;   Label: LAB_0046beb0
    JZ 0x0046bf63                       ; 0046beb4
        ;   XREF to: 0046bf63 (CONDITIONAL_JUMP)  ; LAB_0046bf63
    XOR EBP,EBP                         ; 0046beba
    MOV EDI,0x46f9a6                    ; 0046bebc
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046bec1 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046bec7 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDI      ; 0046becd | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bed3
        ;   Label: LAB_0046bed3
    PUSH 0x1bdd818                      ; 0046bed7 | DAT_01bdd818
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046bedc
    PUSH EDX                            ; 0046bedf
    PUSH EBX                            ; 0046bee0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bee1
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046bee6
    POP ESI                             ; 0046bee9
    POP EDI                             ; 0046beea
    ADD ESP,0x4                         ; 0046beeb
        ;   Label: LAB_0046beeb
    POP EBP                             ; 0046beee
    POP EBX                             ; 0046beef
    RET                                 ; 0046bef0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046bef1
        ;   Label: LAB_0046bef1
    ADD EAX,0x8                         ; 0046bef5
    PUSH EAX                            ; 0046bef8
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046bef9
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046befe
    TEST EAX,EAX                        ; 0046bf01
    JZ 0x0046beeb                       ; 0046bf03
        ;   XREF to: 0046beeb (CONDITIONAL_JUMP)  ; LAB_0046beeb
    JMP 0x0046be73                      ; 0046bf05
        ;   XREF to: 0046be73 (UNCONDITIONAL_JUMP)  ; LAB_0046be73
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bf0a
        ;   Label: LAB_0046bf0a
    CMP dword ptr [EAX + 0x4],0x0       ; 0046bf0e
    JLE 0x0046beb0                      ; 0046bf12
        ;   XREF to: 0046beb0 (CONDITIONAL_JUMP)  ; LAB_0046beb0
    XOR EDX,EDX                         ; 0046bf14
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046bf16
        ;   Label: LAB_0046bf16
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046bf19
    TEST EDI,EDI                        ; 0046bf1c
    JZ 0x0046bf3e                       ; 0046bf1e
        ;   XREF to: 0046bf3e (CONDITIONAL_JUMP)  ; LAB_0046bf3e
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046bf20 | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046bf20
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046bf26
    ADD EAX,0xc                         ; 0046bf2a
    INC ECX                             ; 0046bf2d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046bf2e
    ADD EDX,0x4                         ; 0046bf31
    CMP ECX,EBP                         ; 0046bf34
    JGE 0x0046beb0                      ; 0046bf36
        ;   XREF to: 0046beb0 (CONDITIONAL_JUMP)  ; LAB_0046beb0
    JMP 0x0046bf16                      ; 0046bf3c
        ;   XREF to: 0046bf16 (UNCONDITIONAL_JUMP)  ; LAB_0046bf16
    IMUL EDI,ESI,0x30                   ; 0046bf3e
        ;   Label: LAB_0046bf3e
    MOV dword ptr [ESP + 0x8],EDI       ; 0046bf41
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046bf45
    MOV EDI,dword ptr [EBX]             ; 0046bf49
    ADD EBP,EDI                         ; 0046bf4b
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0046bf4d
    MOV dword ptr [EBP + 0x18],EDI      ; 0046bf50
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046bf53
    MOV EBP,dword ptr [EBX]             ; 0046bf57
    ADD EBP,EDI                         ; 0046bf59
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046bf5b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046bf5e
    JMP 0x0046bf20                      ; 0046bf61
        ;   XREF to: 0046bf20 (UNCONDITIONAL_JUMP)  ; LAB_0046bf20
    MOV ECX,0x41                        ; 0046bf63
        ;   Label: LAB_0046bf63
    MOV ESI,0x6                         ; 0046bf68
    MOV EDX,0x47090d                    ; 0046bf6d
    MOV dword ptr [0x01c6e2b4],ECX      ; 0046bf72 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046bf78 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDX      ; 0046bf7e | DAT_01c6b5cc
    JMP 0x0046bed3                      ; 0046bf84
        ;   XREF to: 0046bed3 (UNCONDITIONAL_JUMP)  ; LAB_0046bed3

