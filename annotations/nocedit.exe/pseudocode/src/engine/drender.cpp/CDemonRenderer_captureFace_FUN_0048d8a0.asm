; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; STrianglePackedIndices * Stack[0x8]:4   triangle_indices
; int              Stack[0xc]:4   render_flags
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 at 0048d88d
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700 at 0048d792
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d19e
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0048b030 at 0048b0b6
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0062217e
;   TerminatedCString s_CDR_captureFace_too_many_00622194
;   int g_CaptureFaceCount
;   int g_CaptureTextureCount
;   SFace[5000] g_CapturedFaces
;   undefined4 g_CapturedFaces[0].render_flags
;   undefined4 g_CapturedFaces[0].depth
;   undefined4 g_CapturedFaces[0].face_data.vertex_indices.vertex_index_0
;   undefined4 g_CapturedFaces[0].face_data.v_coord_2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d8a0
        ;   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
    PUSH ESI                            ; 0048d8a1
    PUSH EBP                            ; 0048d8a2
    MOV EBP,dword ptr [ESP + 0x10]      ; 0048d8a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048d8a7
    CMP dword ptr [EBP + 0x10],0x0      ; 0048d8ab
    JZ 0x0048d9ce                       ; 0048d8af
        ;   XREF to: 0048d9ce (CONDITIONAL_JUMP)  ; LAB_0048d9ce
    XOR EDX,EDX                         ; 0048d8b5
    MOV DX,word ptr [EBX + 0x2]         ; 0048d8b7
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048d8bb
    SUB EAX,EDX                         ; 0048d8c2
    XOR ECX,ECX                         ; 0048d8c4
    SHL EAX,0x4                         ; 0048d8c6
    MOV EDX,dword ptr [EBP]             ; 0048d8c9
    MOV CX,word ptr [EBX]               ; 0048d8cc
    LEA ESI,[EDX + EAX*0x1]             ; 0048d8cf
    LEA EAX,[ECX*0x4 + 0x0]             ; 0048d8d2
    SUB EAX,ECX                         ; 0048d8d9
    SHL EAX,0x4                         ; 0048d8db
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0048d8de
    MOV ECX,dword ptr [ESI + 0x10]      ; 0048d8e2
    MOV ESI,EAX                         ; 0048d8e5
    AND ESI,ECX                         ; 0048d8e7
    XOR ECX,ECX                         ; 0048d8e9
    MOV CX,word ptr [EBX + 0x4]         ; 0048d8eb
    LEA EAX,[ECX*0x4 + 0x0]             ; 0048d8ef
    SUB EAX,ECX                         ; 0048d8f6
    SHL EAX,0x4                         ; 0048d8f8
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0048d8fb
    AND EAX,ESI                         ; 0048d8ff
    TEST EAX,0x80000000                 ; 0048d901
    JZ 0x0048d910                       ; 0048d906
        ;   XREF to: 0048d910 (CONDITIONAL_JUMP)  ; LAB_0048d910
    TEST AL,0xff                        ; 0048d908
    JNZ 0x0048d9ca                      ; 0048d90a
        ;   XREF to: 0048d9ca (CONDITIONAL_JUMP)  ; LAB_0048d9ca
    PUSH EDI                            ; 0048d910
        ;   Label: LAB_0048d910
    CMP dword ptr [0x02c6d5ec],0x1388   ; 0048d911 | g_CaptureFaceCount
    JL 0x0048d93f                       ; 0048d91b
        ;   XREF to: 0048d93f (CONDITIONAL_JUMP)  ; LAB_0048d93f
    MOV EDI,0x62217e                    ; 0048d91d | = "..\\engine\\drender.cpp"
    MOV EAX,0xb78                       ; 0048d922
    PUSH 0x622194                       ; 0048d927 | = "CDR::captureFace - too many faces cap..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0048d92c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d932 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d937
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048d93c
    MOV EDX,dword ptr [0x02c6d5ec]      ; 0048d93f | g_CaptureFaceCount
        ;   Label: LAB_0048d93f
    SHL EDX,0x5                         ; 0048d945
    MOV ESI,EBX                         ; 0048d948
    LEA EDI,[EDX + 0x2c6d600]           ; 0048d94a | g_CapturedFaces[0].face_data.vertex_indices.vertex_index_0
    JMP 0x00604d30                      ; 0048d950
        ;   XREF to: 00604d30 (UNCONDITIONAL_JUMP)  ; LAB_00604d30
    MOVSW ES:EDI,ESI                    ; 0048d959 | g_CapturedFaces[0].face_data.v_coord_2
        ;   Label: LAB_0048d959
    MOV dword ptr [EDX + 0x2c6d5f4],EAX ; 0048d95b | g_CapturedFaces
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048d961
    XOR ECX,ECX                         ; 0048d965
    MOV dword ptr [EDX + 0x2c6d5f8],EAX ; 0048d967 | g_CapturedFaces[0].render_flags
    MOV CX,word ptr [EBX]               ; 0048d96d
    LEA EAX,[ECX*0x4 + 0x0]             ; 0048d970
    XOR EDI,EDI                         ; 0048d977
    SUB EAX,ECX                         ; 0048d979
    MOV ECX,dword ptr [EBP]             ; 0048d97b
    SHL EAX,0x4                         ; 0048d97e
    MOV DI,word ptr [EBX + 0x2]         ; 0048d981
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 0048d985
    LEA EAX,[EDI*0x4 + 0x0]             ; 0048d989
    SUB EAX,EDI                         ; 0048d990
    SHL EAX,0x4                         ; 0048d992
    LEA EDI,[ECX + EAX*0x1]             ; 0048d995
    MOV BX,word ptr [EBX + 0x4]         ; 0048d998
    MOV EDI,dword ptr [EDI + 0x8]       ; 0048d99c
    AND EBX,0xffff                      ; 0048d99f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048d9a5
    SUB EAX,EBX                         ; 0048d9ac
    SHL EAX,0x4                         ; 0048d9ae
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0048d9b1
    CMP ESI,EDI                         ; 0048d9b5
    JGE 0x0048d9e3                      ; 0048d9b7
        ;   XREF to: 0048d9e3 (CONDITIONAL_JUMP)  ; LAB_0048d9e3
    CMP ESI,EAX                         ; 0048d9b9
    JGE 0x0048d9e3                      ; 0048d9bb
        ;   XREF to: 0048d9e3 (CONDITIONAL_JUMP)  ; LAB_0048d9e3
    MOV dword ptr [EDX + 0x2c6d5fc],ESI ; 0048d9bd | g_CapturedFaces[0].depth
    INC dword ptr [0x02c6d5ec]          ; 0048d9c3 | g_CaptureFaceCount
    POP EDI                             ; 0048d9c9
    POP EBP                             ; 0048d9ca
        ;   Label: LAB_0048d9ca
    POP ESI                             ; 0048d9cb
    POP EBX                             ; 0048d9cc
    RET                                 ; 0048d9cd
    PUSH EBX                            ; 0048d9ce
        ;   Label: LAB_0048d9ce
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0 ; 0048d9cf
        ;   XREF to: 005523f0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 0048d9d4
    TEST EAX,EAX                        ; 0048d9d7
    JNZ 0x0048d910                      ; 0048d9d9
        ;   XREF to: 0048d910 (CONDITIONAL_JUMP)  ; LAB_0048d910
    POP EBP                             ; 0048d9df
    POP ESI                             ; 0048d9e0
    POP EBX                             ; 0048d9e1
    RET                                 ; 0048d9e2
    MOV EDX,dword ptr [0x02c6d5ec]      ; 0048d9e3 | g_CaptureFaceCount
        ;   Label: LAB_0048d9e3
    SHL EDX,0x5                         ; 0048d9e9
    CMP EDI,EAX                         ; 0048d9ec
    JGE 0x0048da01                      ; 0048d9ee
        ;   XREF to: 0048da01 (CONDITIONAL_JUMP)  ; LAB_0048da01
    MOV dword ptr [EDX + 0x2c6d5fc],EDI ; 0048d9f0 | g_CapturedFaces[0].depth
    INC dword ptr [0x02c6d5ec]          ; 0048d9f6 | g_CaptureFaceCount
    POP EDI                             ; 0048d9fc
    POP EBP                             ; 0048d9fd
    POP ESI                             ; 0048d9fe
    POP EBX                             ; 0048d9ff
    RET                                 ; 0048da00
    MOV dword ptr [EDX + 0x2c6d5fc],EAX ; 0048da01 | g_CapturedFaces[0].depth
        ;   Label: LAB_0048da01
    INC dword ptr [0x02c6d5ec]          ; 0048da07 | g_CaptureFaceCount
    POP EDI                             ; 0048da0d
    POP EBP                             ; 0048da0e
    POP ESI                             ; 0048da0f
    POP EBX                             ; 0048da10
    RET                                 ; 0048da11
    MOV EAX,[0x02c6d5f0]                ; 00604d30 | g_CaptureTextureCount
        ;   Label: LAB_00604d30
    MOV ECX,dword ptr [ESI]             ; 00604d35
    MOV dword ptr [EDI],ECX             ; 00604d37
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604d39
    MOV dword ptr [EDI + 0x4],ECX       ; 00604d3c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604d3f
    MOV dword ptr [EDI + 0x8],ECX       ; 00604d42
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604d45
    MOV dword ptr [EDI + 0xc],ECX       ; 00604d48
    ADD ESI,0x10                        ; 00604d4b
    ADD EDI,0x10                        ; 00604d4e
    JMP 0x0048d959                      ; 00604d51
        ;   XREF to: 0048d959 (UNCONDITIONAL_JUMP)  ; LAB_0048d959

