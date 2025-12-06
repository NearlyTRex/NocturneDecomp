; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 at 0048b0b6
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0062217e
;   TerminatedCString s_CDR_captureFace_too_many_00622194
;   int g_CaptureFaceCount
;   int g_CaptureTextureCount
;   SFace[5000] g_CapturedFaces
;   undefined4 g_CapturedFaces[0].render_flags
;   undefined4 g_CapturedFaces[0].depth
;   undefined4 g_CapturedFaces[0].indices.vertex_index_0
;   undefined4 DAT_02c6d608
;   undefined4 DAT_02c6d60c
;   undefined4 DAT_02c6d610
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
    JZ 0x0048d9ce                       ; 0048d8af | LAB_0048d9ce
        ;   XREF to: 0048d9ce (CONDITIONAL_JUMP)
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
    JZ 0x0048d910                       ; 0048d906 | LAB_0048d910
        ;   XREF to: 0048d910 (CONDITIONAL_JUMP)
    TEST AL,0xff                        ; 0048d908
    JNZ 0x0048d9ca                      ; 0048d90a | LAB_0048d9ca
        ;   XREF to: 0048d9ca (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0048d910
        ;   Label: LAB_0048d910
    CMP dword ptr [0x02c6d5ec],0x1388   ; 0048d911 | int g_CaptureFaceCount
    JL 0x0048d93f                       ; 0048d91b | LAB_0048d93f
        ;   XREF to: 0048d93f (CONDITIONAL_JUMP)
    MOV EDI,0x62217e                    ; 0048d91d | = "..\\engine\\drender.cpp" | s_engine_drender_cpp_0062217e = ..\engine\drender.cpp
    MOV EAX,0xb78                       ; 0048d922
    PUSH 0x622194                       ; 0048d927 | = "CDR::captureFace - too many faces cap..." | s_CDR_captureFace_too_many_00622194 = CDR::captureFace - too many faces captured
    MOV dword ptr [0x02f0ca48],EDI      ; 0048d92c | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0048d932 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048d937 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048d93c
    MOV EDX,dword ptr [0x02c6d5ec]      ; 0048d93f | int g_CaptureFaceCount
        ;   Label: LAB_0048d93f
    SHL EDX,0x5                         ; 0048d945
    MOV ESI,EBX                         ; 0048d948
    LEA EDI,[EDX + 0x2c6d600]           ; 0048d94a | g_CapturedFaces[0].indices.vertex_index_0
    MOV EAX,[0x02c6d5f0]                ; 0048d950 | int g_CaptureTextureCount
    MOVSD ES:EDI,ESI                    ; 0048d955 | g_CapturedFaces[0].indices.vertex_index_0
    MOVSD ES:EDI,ESI                    ; 0048d956 | DAT_02c6d604
    MOVSD ES:EDI,ESI                    ; 0048d957 | DAT_02c6d608
    MOVSD ES:EDI,ESI                    ; 0048d958 | DAT_02c6d60c
    MOVSW ES:EDI,ESI                    ; 0048d959 | DAT_02c6d610
    MOV dword ptr [EDX + 0x2c6d5f4],EAX ; 0048d95b | SFace[5000] g_CapturedFaces
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
    JGE 0x0048d9e3                      ; 0048d9b7 | LAB_0048d9e3
        ;   XREF to: 0048d9e3 (CONDITIONAL_JUMP)
    CMP ESI,EAX                         ; 0048d9b9
    JGE 0x0048d9e3                      ; 0048d9bb | LAB_0048d9e3
        ;   XREF to: 0048d9e3 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2c6d5fc],ESI ; 0048d9bd | g_CapturedFaces[0].depth
    INC dword ptr [0x02c6d5ec]          ; 0048d9c3 | int g_CaptureFaceCount
    POP EDI                             ; 0048d9c9
    POP EBP                             ; 0048d9ca
        ;   Label: LAB_0048d9ca
    POP ESI                             ; 0048d9cb
    POP EBX                             ; 0048d9cc
    RET                                 ; 0048d9cd
    PUSH EBX                            ; 0048d9ce
        ;   Label: LAB_0048d9ce
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0 ; 0048d9cf | int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices * triangle)
        ;   XREF to: 005523f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048d9d4
    TEST EAX,EAX                        ; 0048d9d7
    JNZ 0x0048d910                      ; 0048d9d9 | LAB_0048d910
        ;   XREF to: 0048d910 (CONDITIONAL_JUMP)
    POP EBP                             ; 0048d9df
    POP ESI                             ; 0048d9e0
    POP EBX                             ; 0048d9e1
    RET                                 ; 0048d9e2
    MOV EDX,dword ptr [0x02c6d5ec]      ; 0048d9e3 | int g_CaptureFaceCount
        ;   Label: LAB_0048d9e3
    SHL EDX,0x5                         ; 0048d9e9
    CMP EDI,EAX                         ; 0048d9ec
    JGE 0x0048da01                      ; 0048d9ee | LAB_0048da01
        ;   XREF to: 0048da01 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2c6d5fc],EDI ; 0048d9f0 | g_CapturedFaces[0].depth
    INC dword ptr [0x02c6d5ec]          ; 0048d9f6 | int g_CaptureFaceCount
    POP EDI                             ; 0048d9fc
    POP EBP                             ; 0048d9fd
    POP ESI                             ; 0048d9fe
    POP EBX                             ; 0048d9ff
    RET                                 ; 0048da00
    MOV dword ptr [EDX + 0x2c6d5fc],EAX ; 0048da01 | g_CapturedFaces[0].depth
        ;   Label: LAB_0048da01
    INC dword ptr [0x02c6d5ec]          ; 0048da07 | int g_CaptureFaceCount
    POP EDI                             ; 0048da0d
    POP EBP                             ; 0048da0e
    POP ESI                             ; 0048da0f
    POP EBX                             ; 0048da10
    RET                                 ; 0048da11

