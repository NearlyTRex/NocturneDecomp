; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; STrianglePackedIndices * Stack[0x8]:4   triangle_indices
; int              Stack[0xc]:4   render_flags
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0 at 00461b64
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30 at 00461ac2
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_00461720 at 0046174e
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0 at 0045f666
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dd57
;   TerminatedCString s_CDR_captureFace_too_many_0057dd6d
;   undefined4 DAT_01b4d7ac
;   undefined4 DAT_01b4d7b0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461bd0
        ;   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
    PUSH ESI                            ; 00461bd1
    PUSH EBP                            ; 00461bd2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00461bd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00461bd7
    CMP dword ptr [EBP + 0x10],0x0      ; 00461bdb
    JZ 0x00461cfe                       ; 00461bdf
        ;   XREF to: 00461cfe (CONDITIONAL_JUMP)  ; LAB_00461cfe
    XOR EDX,EDX                         ; 00461be5
    MOV DX,word ptr [EBX + 0x2]         ; 00461be7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00461beb
    SUB EAX,EDX                         ; 00461bf2
    XOR ECX,ECX                         ; 00461bf4
    SHL EAX,0x4                         ; 00461bf6
    MOV EDX,dword ptr [EBP]             ; 00461bf9
    MOV CX,word ptr [EBX]               ; 00461bfc
    LEA ESI,[EDX + EAX*0x1]             ; 00461bff
    LEA EAX,[ECX*0x4 + 0x0]             ; 00461c02
    SUB EAX,ECX                         ; 00461c09
    SHL EAX,0x4                         ; 00461c0b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 00461c0e
    MOV ECX,dword ptr [ESI + 0x10]      ; 00461c12
    MOV ESI,EAX                         ; 00461c15
    AND ESI,ECX                         ; 00461c17
    XOR ECX,ECX                         ; 00461c19
    MOV CX,word ptr [EBX + 0x4]         ; 00461c1b
    LEA EAX,[ECX*0x4 + 0x0]             ; 00461c1f
    SUB EAX,ECX                         ; 00461c26
    SHL EAX,0x4                         ; 00461c28
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 00461c2b
    AND EAX,ESI                         ; 00461c2f
    TEST EAX,0x80000000                 ; 00461c31
    JZ 0x00461c40                       ; 00461c36
        ;   XREF to: 00461c40 (CONDITIONAL_JUMP)  ; LAB_00461c40
    TEST AL,0xff                        ; 00461c38
    JNZ 0x00461cfa                      ; 00461c3a
        ;   XREF to: 00461cfa (CONDITIONAL_JUMP)  ; LAB_00461cfa
    PUSH EDI                            ; 00461c40
        ;   Label: LAB_00461c40
    CMP dword ptr [0x01b4d7ac],0x1388   ; 00461c41 | DAT_01b4d7ac
    JL 0x00461c6f                       ; 00461c4b
        ;   XREF to: 00461c6f (CONDITIONAL_JUMP)  ; LAB_00461c6f
    MOV EDI,0x57dd57                    ; 00461c4d | = "..\\engine\\drender.cpp"
    MOV EAX,0xa81                       ; 00461c52
    PUSH 0x57dd6d                       ; 00461c57 | = "CDR::captureFace - too many faces cap..."
    MOV dword ptr [0x01cc4800],EDI      ; 00461c5c | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 00461c62 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00461c67
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00461c6c
    MOV EDX,dword ptr [0x01b4d7ac]      ; 00461c6f | DAT_01b4d7ac
        ;   Label: LAB_00461c6f
    SHL EDX,0x5                         ; 00461c75
    MOV ESI,EBX                         ; 00461c78
    LEA EDI,[EDX + 0x1b4d7c0]           ; 00461c7a
    MOV EAX,[0x01b4d7b0]                ; 00461c80 | DAT_01b4d7b0
    MOVSD ES:EDI,ESI                    ; 00461c85
    MOVSD ES:EDI,ESI                    ; 00461c86
    MOVSD ES:EDI,ESI                    ; 00461c87
    MOVSD ES:EDI,ESI                    ; 00461c88
    MOVSW ES:EDI,ESI                    ; 00461c89
    MOV dword ptr [EDX + 0x1b4d7b4],EAX ; 00461c8b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00461c91
    XOR ECX,ECX                         ; 00461c95
    MOV dword ptr [EDX + 0x1b4d7b8],EAX ; 00461c97
    MOV CX,word ptr [EBX]               ; 00461c9d
    LEA EAX,[ECX*0x4 + 0x0]             ; 00461ca0
    XOR EDI,EDI                         ; 00461ca7
    SUB EAX,ECX                         ; 00461ca9
    MOV ECX,dword ptr [EBP]             ; 00461cab
    SHL EAX,0x4                         ; 00461cae
    MOV DI,word ptr [EBX + 0x2]         ; 00461cb1
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 00461cb5
    LEA EAX,[EDI*0x4 + 0x0]             ; 00461cb9
    SUB EAX,EDI                         ; 00461cc0
    SHL EAX,0x4                         ; 00461cc2
    LEA EDI,[ECX + EAX*0x1]             ; 00461cc5
    MOV BX,word ptr [EBX + 0x4]         ; 00461cc8
    MOV EDI,dword ptr [EDI + 0x8]       ; 00461ccc
    AND EBX,0xffff                      ; 00461ccf
    LEA EAX,[EBX*0x4 + 0x0]             ; 00461cd5
    SUB EAX,EBX                         ; 00461cdc
    SHL EAX,0x4                         ; 00461cde
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 00461ce1
    CMP ESI,EDI                         ; 00461ce5
    JGE 0x00461d13                      ; 00461ce7
        ;   XREF to: 00461d13 (CONDITIONAL_JUMP)  ; LAB_00461d13
    CMP ESI,EAX                         ; 00461ce9
    JGE 0x00461d13                      ; 00461ceb
        ;   XREF to: 00461d13 (CONDITIONAL_JUMP)  ; LAB_00461d13
    MOV dword ptr [EDX + 0x1b4d7bc],ESI ; 00461ced
    INC dword ptr [0x01b4d7ac]          ; 00461cf3 | DAT_01b4d7ac
    POP EDI                             ; 00461cf9
    POP EBP                             ; 00461cfa
        ;   Label: LAB_00461cfa
    POP ESI                             ; 00461cfb
    POP EBX                             ; 00461cfc
    RET                                 ; 00461cfd
    PUSH EBX                            ; 00461cfe
        ;   Label: LAB_00461cfe
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0 ; 00461cff
        ;   XREF to: 004f9cb0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 00461d04
    TEST EAX,EAX                        ; 00461d07
    JNZ 0x00461c40                      ; 00461d09
        ;   XREF to: 00461c40 (CONDITIONAL_JUMP)  ; LAB_00461c40
    POP EBP                             ; 00461d0f
    POP ESI                             ; 00461d10
    POP EBX                             ; 00461d11
    RET                                 ; 00461d12
    MOV EDX,dword ptr [0x01b4d7ac]      ; 00461d13 | DAT_01b4d7ac
        ;   Label: LAB_00461d13
    SHL EDX,0x5                         ; 00461d19
    CMP EDI,EAX                         ; 00461d1c
    JGE 0x00461d31                      ; 00461d1e
        ;   XREF to: 00461d31 (CONDITIONAL_JUMP)  ; LAB_00461d31
    MOV dword ptr [EDX + 0x1b4d7bc],EDI ; 00461d20
    INC dword ptr [0x01b4d7ac]          ; 00461d26 | DAT_01b4d7ac
    POP EDI                             ; 00461d2c
    POP EBP                             ; 00461d2d
    POP ESI                             ; 00461d2e
    POP EBX                             ; 00461d2f
    RET                                 ; 00461d30
    MOV dword ptr [EDX + 0x1b4d7bc],EAX ; 00461d31
        ;   Label: LAB_00461d31
    INC dword ptr [0x01b4d7ac]          ; 00461d37 | DAT_01b4d7ac
    POP EDI                             ; 00461d3d
    POP EBP                             ; 00461d3e
    POP ESI                             ; 00461d3f
    POP EBX                             ; 00461d40
    RET                                 ; 00461d41

