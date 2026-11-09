; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
; int              Stack[0xc]:4   render_flags
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 at 0046e5a4
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046dc37
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01bdd820
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046ba70
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046ba71
    MOV EBP,dword ptr [ESP + 0xc]       ; 0046ba75
    CMP dword ptr [ESP + 0x10],-0x1     ; 0046ba79
    JZ 0x0046bae5                       ; 0046ba7e
        ;   XREF to: 0046bae5 (CONDITIONAL_JUMP)  ; LAB_0046bae5
    CMP dword ptr [ECX + 0x1c],0x0      ; 0046ba80
        ;   Label: LAB_0046ba80
    JNZ 0x0046baef                      ; 0046ba84
        ;   XREF to: 0046baef (CONDITIONAL_JUMP)  ; LAB_0046baef
    PUSH EBX                            ; 0046ba86
    CMP dword ptr [ECX + 0x4],0x0       ; 0046ba87
    JZ 0x0046bb00                       ; 0046ba8b
        ;   XREF to: 0046bb00 (CONDITIONAL_JUMP)  ; LAB_0046bb00
    XOR EAX,EAX                         ; 0046ba8d
        ;   Label: LAB_0046ba8d
    MOV AX,word ptr [EBP]               ; 0046ba8f
    MOV [0x01bdd818],EAX                ; 0046ba93 | DAT_01bdd818
    XOR EAX,EAX                         ; 0046ba98
    MOV AX,word ptr [EBP + 0x2]         ; 0046ba9a
    MOV [0x01bdd81c],EAX                ; 0046ba9e | DAT_01bdd81c
    XOR EAX,EAX                         ; 0046baa3
    MOV AX,word ptr [EBP + 0x4]         ; 0046baa5
    MOV EBX,dword ptr [ECX + 0x4]       ; 0046baa9
    MOV [0x01bdd820],EAX                ; 0046baac | DAT_01bdd820
    TEST EBX,EBX                        ; 0046bab1
    JZ 0x0046bb41                       ; 0046bab3
        ;   XREF to: 0046bb41 (CONDITIONAL_JUMP)  ; LAB_0046bb41
    XOR EBX,EBX                         ; 0046bab9
    MOV EDX,0x46f9a6                    ; 0046babb
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046bac0 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBX      ; 0046bac6 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDX      ; 0046bacc | DAT_01c6b5cc
    PUSH 0x1bdd818                      ; 0046bad2 | DAT_01bdd818
    PUSH 0x3                            ; 0046bad7
    PUSH ECX                            ; 0046bad9
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bada
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046badf
    POP EBX                             ; 0046bae2
    POP EBP                             ; 0046bae3
    RET                                 ; 0046bae4
    MOV dword ptr [ESP + 0x10],0x2cd    ; 0046bae5
        ;   Label: LAB_0046bae5
    JMP 0x0046ba80                      ; 0046baed
        ;   XREF to: 0046ba80 (UNCONDITIONAL_JUMP)  ; LAB_0046ba80
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046baef
        ;   Label: LAB_0046baef
    PUSH EDX                            ; 0046baf3
    PUSH EBP                            ; 0046baf4
    PUSH ECX                            ; 0046baf5
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300 ; 0046baf6
        ;   XREF to: 0046e300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0046bafb
    POP EBP                             ; 0046bafe
    RET                                 ; 0046baff
    CMP dword ptr [ECX + 0x20],0x0      ; 0046bb00
        ;   Label: LAB_0046bb00
    JNZ 0x0046ba8d                      ; 0046bb04
        ;   XREF to: 0046ba8d (CONDITIONAL_JUMP)  ; LAB_0046ba8d
    PUSH EDI                            ; 0046bb06
    PUSH ESI                            ; 0046bb07
    MOV EAX,EBP                         ; 0046bb08
    LEA EDI,[EBP + 0x6]                 ; 0046bb0a
    XOR EDX,EDX                         ; 0046bb0d
        ;   Label: LAB_0046bb0d
    MOV DX,word ptr [EAX]               ; 0046bb0f
    IMUL EDX,EDX,0x30                   ; 0046bb12
    XOR ESI,ESI                         ; 0046bb15
    MOV SI,word ptr [EAX + 0x6]         ; 0046bb17
    MOV EBX,dword ptr [ECX]             ; 0046bb1b
    SHL ESI,0x8                         ; 0046bb1d
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0046bb20
    XOR EBX,EBX                         ; 0046bb24
    MOV BX,word ptr [EAX + 0xc]         ; 0046bb26
    MOV ESI,dword ptr [ECX]             ; 0046bb2a
    SHL EBX,0x8                         ; 0046bb2c
    ADD EAX,0x2                         ; 0046bb2f
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0046bb32
    CMP EAX,EDI                         ; 0046bb36
    JNZ 0x0046bb0d                      ; 0046bb38
        ;   XREF to: 0046bb0d (CONDITIONAL_JUMP)  ; LAB_0046bb0d
    POP ESI                             ; 0046bb3a
    POP EDI                             ; 0046bb3b
    JMP 0x0046ba8d                      ; 0046bb3c
        ;   XREF to: 0046ba8d (UNCONDITIONAL_JUMP)  ; LAB_0046ba8d
    CMP dword ptr [0x005fba20],0x20     ; 0046bb41 | DAT_005fba20
        ;   Label: LAB_0046bb41
    JNZ 0x0046bb7a                      ; 0046bb48
        ;   XREF to: 0046bb7a (CONDITIONAL_JUMP)  ; LAB_0046bb7a
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046bb4a | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046bb54
        ;   Label: LAB_0046bb54
    MOV [0x01c6e2b4],EAX                ; 0046bb58 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],0x6      ; 0046bb5d | DAT_01c6e2b8
    PUSH 0x1bdd818                      ; 0046bb67 | DAT_01bdd818
    PUSH 0x3                            ; 0046bb6c
    PUSH ECX                            ; 0046bb6e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bb6f
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046bb74
    POP EBX                             ; 0046bb77
    POP EBP                             ; 0046bb78
    RET                                 ; 0046bb79
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046bb7a | DAT_01c6b5cc
        ;   Label: LAB_0046bb7a
    JMP 0x0046bb54                      ; 0046bb84
        ;   XREF to: 0046bb54 (UNCONDITIONAL_JUMP)  ; LAB_0046bb54

