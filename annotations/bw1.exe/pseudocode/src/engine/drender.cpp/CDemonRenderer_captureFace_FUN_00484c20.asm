; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; STrianglePackedIndices * Stack[0x8]:4   triangle_indices
; int              Stack[0xc]:4   render_flags
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20 at 00484bb4
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00484a80 at 00484b12
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 0048451e
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390 at 00482416
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db4e5
;   TerminatedCString s_CDR_captureFace_too_many_005db4fb
;   undefined4 DAT_01bc1280
;   undefined4 DAT_01bc1284
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484c20
        ;   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20
    PUSH ESI                            ; 00484c21
    PUSH EBP                            ; 00484c22
    MOV EBP,dword ptr [ESP + 0x10]      ; 00484c23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00484c27
    CMP dword ptr [EBP + 0x10],0x0      ; 00484c2b
    JZ 0x00484d4e                       ; 00484c2f
        ;   XREF to: 00484d4e (CONDITIONAL_JUMP)  ; LAB_00484d4e
    XOR EDX,EDX                         ; 00484c35
    MOV DX,word ptr [EBX + 0x2]         ; 00484c37
    LEA EAX,[EDX*0x4 + 0x0]             ; 00484c3b
    SUB EAX,EDX                         ; 00484c42
    XOR ECX,ECX                         ; 00484c44
    SHL EAX,0x4                         ; 00484c46
    MOV EDX,dword ptr [EBP]             ; 00484c49
    MOV CX,word ptr [EBX]               ; 00484c4c
    LEA ESI,[EDX + EAX*0x1]             ; 00484c4f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00484c52
    SUB EAX,ECX                         ; 00484c59
    SHL EAX,0x4                         ; 00484c5b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 00484c5e
    MOV ECX,dword ptr [ESI + 0x10]      ; 00484c62
    MOV ESI,EAX                         ; 00484c65
    AND ESI,ECX                         ; 00484c67
    XOR ECX,ECX                         ; 00484c69
    MOV CX,word ptr [EBX + 0x4]         ; 00484c6b
    LEA EAX,[ECX*0x4 + 0x0]             ; 00484c6f
    SUB EAX,ECX                         ; 00484c76
    SHL EAX,0x4                         ; 00484c78
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 00484c7b
    AND EAX,ESI                         ; 00484c7f
    TEST EAX,0x80000000                 ; 00484c81
    JZ 0x00484c90                       ; 00484c86
        ;   XREF to: 00484c90 (CONDITIONAL_JUMP)  ; LAB_00484c90
    TEST AL,0xff                        ; 00484c88
    JNZ 0x00484d4a                      ; 00484c8a
        ;   XREF to: 00484d4a (CONDITIONAL_JUMP)  ; LAB_00484d4a
    PUSH EDI                            ; 00484c90
        ;   Label: LAB_00484c90
    CMP dword ptr [0x01bc1280],0x1388   ; 00484c91 | DAT_01bc1280
    JL 0x00484cbf                       ; 00484c9b
        ;   XREF to: 00484cbf (CONDITIONAL_JUMP)  ; LAB_00484cbf
    MOV EDI,0x5db4e5                    ; 00484c9d | = "..\\engine\\drender.cpp"
    MOV EAX,0xb78                       ; 00484ca2
    PUSH 0x5db4fb                       ; 00484ca7 | = "CDR::captureFace - too many faces cap..."
    MOV dword ptr [0x01d1d400],EDI      ; 00484cac | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00484cb2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00484cb7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00484cbc
    MOV EDX,dword ptr [0x01bc1280]      ; 00484cbf | DAT_01bc1280
        ;   Label: LAB_00484cbf
    SHL EDX,0x5                         ; 00484cc5
    MOV ESI,EBX                         ; 00484cc8
    LEA EDI,[EDX + 0x1bc1294]           ; 00484cca
    MOV EAX,[0x01bc1284]                ; 00484cd0 | DAT_01bc1284
    MOVSD ES:EDI,ESI                    ; 00484cd5
    MOVSD ES:EDI,ESI                    ; 00484cd6
    MOVSD ES:EDI,ESI                    ; 00484cd7
    MOVSD ES:EDI,ESI                    ; 00484cd8
    MOVSW ES:EDI,ESI                    ; 00484cd9
    MOV dword ptr [EDX + 0x1bc1288],EAX ; 00484cdb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00484ce1
    XOR ECX,ECX                         ; 00484ce5
    MOV dword ptr [EDX + 0x1bc128c],EAX ; 00484ce7
    MOV CX,word ptr [EBX]               ; 00484ced
    LEA EAX,[ECX*0x4 + 0x0]             ; 00484cf0
    XOR EDI,EDI                         ; 00484cf7
    SUB EAX,ECX                         ; 00484cf9
    MOV ECX,dword ptr [EBP]             ; 00484cfb
    SHL EAX,0x4                         ; 00484cfe
    MOV DI,word ptr [EBX + 0x2]         ; 00484d01
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 00484d05
    LEA EAX,[EDI*0x4 + 0x0]             ; 00484d09
    SUB EAX,EDI                         ; 00484d10
    SHL EAX,0x4                         ; 00484d12
    LEA EDI,[ECX + EAX*0x1]             ; 00484d15
    MOV BX,word ptr [EBX + 0x4]         ; 00484d18
    MOV EDI,dword ptr [EDI + 0x8]       ; 00484d1c
    AND EBX,0xffff                      ; 00484d1f
    LEA EAX,[EBX*0x4 + 0x0]             ; 00484d25
    SUB EAX,EBX                         ; 00484d2c
    SHL EAX,0x4                         ; 00484d2e
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 00484d31
    CMP ESI,EDI                         ; 00484d35
    JGE 0x00484d63                      ; 00484d37
        ;   XREF to: 00484d63 (CONDITIONAL_JUMP)  ; LAB_00484d63
    CMP ESI,EAX                         ; 00484d39
    JGE 0x00484d63                      ; 00484d3b
        ;   XREF to: 00484d63 (CONDITIONAL_JUMP)  ; LAB_00484d63
    MOV dword ptr [EDX + 0x1bc1290],ESI ; 00484d3d
    INC dword ptr [0x01bc1280]          ; 00484d43 | DAT_01bc1280
    POP EDI                             ; 00484d49
    POP EBP                             ; 00484d4a
        ;   Label: LAB_00484d4a
    POP ESI                             ; 00484d4b
    POP EBX                             ; 00484d4c
    RET                                 ; 00484d4d
    PUSH EBX                            ; 00484d4e
        ;   Label: LAB_00484d4e
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000 ; 00484d4f
        ;   XREF to: 0053e000 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000()
    ADD ESP,0x4                         ; 00484d54
    TEST EAX,EAX                        ; 00484d57
    JNZ 0x00484c90                      ; 00484d59
        ;   XREF to: 00484c90 (CONDITIONAL_JUMP)  ; LAB_00484c90
    POP EBP                             ; 00484d5f
    POP ESI                             ; 00484d60
    POP EBX                             ; 00484d61
    RET                                 ; 00484d62
    MOV EDX,dword ptr [0x01bc1280]      ; 00484d63 | DAT_01bc1280
        ;   Label: LAB_00484d63
    SHL EDX,0x5                         ; 00484d69
    CMP EDI,EAX                         ; 00484d6c
    JGE 0x00484d81                      ; 00484d6e
        ;   XREF to: 00484d81 (CONDITIONAL_JUMP)  ; LAB_00484d81
    MOV dword ptr [EDX + 0x1bc1290],EDI ; 00484d70
    INC dword ptr [0x01bc1280]          ; 00484d76 | DAT_01bc1280
    POP EDI                             ; 00484d7c
    POP EBP                             ; 00484d7d
    POP ESI                             ; 00484d7e
    POP EBX                             ; 00484d7f
    RET                                 ; 00484d80
    MOV dword ptr [EDX + 0x1bc1290],EAX ; 00484d81
        ;   Label: LAB_00484d81
    INC dword ptr [0x01bc1280]          ; 00484d87 | DAT_01bc1280
    POP EDI                             ; 00484d8d
    POP EBP                             ; 00484d8e
    POP ESI                             ; 00484d8f
    POP EBX                             ; 00484d90
    RET                                 ; 00484d91

