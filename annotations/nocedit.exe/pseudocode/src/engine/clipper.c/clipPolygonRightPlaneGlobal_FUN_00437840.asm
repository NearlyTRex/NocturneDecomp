; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_00437828 = 004378f1
;   void* PTR_caseD_3_00437830 = 004378d1
;   int g_OutputVertexCount
;   int g_TempVertexCount
;   SRenderVertex[16] g_ClipperOutputBuffer
;   undefined4 DAT_00825d04
;   undefined4 g_ClipperOutputBuffer[0].projected_vertex.transformed_z
;   undefined4 g_ClipperOutputBuffer[1].projected_vertex.transformed_x
;   undefined4 DAT_00825d38
;   SRenderVertex[16] g_ClipperWorkingBuffer
;   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437840
        ;   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
    PUSH ESI                            ; 00437841
    PUSH EDI                            ; 00437842
    PUSH EBP                            ; 00437843
    SUB ESP,0x4                         ; 00437844
    XOR EDX,EDX                         ; 00437847
    MOV ECX,dword ptr [0x00825cf4]      ; 00437849 | int g_OutputVertexCount
    MOV dword ptr [ESP],EDX             ; 0043784f
    TEST ECX,ECX                        ; 00437852
    JLE 0x004378e9                      ; 00437854 | LAB_004378e9
        ;   XREF to: 004378e9 (CONDITIONAL_JUMP)
    MOV EBX,0x825d00                    ; 0043785a | SRenderVertex[16] g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP]             ; 0043785f
        ;   Label: LAB_0043785f
    MOV EBP,dword ptr [0x00825cf4]      ; 00437862 | int g_OutputVertexCount
    INC EAX                             ; 00437868
    CMP EAX,EBP                         ; 00437869
    JNZ 0x0043786f                      ; 0043786b | LAB_0043786f
        ;   XREF to: 0043786f (CONDITIONAL_JUMP)
    XOR EAX,EBP                         ; 0043786d
    IMUL EAX,EAX,0x30                   ; 0043786f
        ;   Label: LAB_0043786f
    MOV EBP,0x825d00                    ; 00437872 | SRenderVertex[16] g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 00437877
    MOV EDI,dword ptr [EBX + 0x8]       ; 00437879 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
    MOV ECX,dword ptr [EBX]             ; 0043787c | SRenderVertex[16] g_ClipperOutputBuffer
    NEG EDI                             ; 0043787e
    ADD EBP,EAX                         ; 00437880
    XOR EAX,EAX                         ; 00437882
    CMP EDI,ECX                         ; 00437884
    JL 0x0043788d                       ; 00437886 | LAB_0043788d
        ;   XREF to: 0043788d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00437888
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043788d | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043788d
    MOV ESI,dword ptr [EBP]             ; 00437890 | SRenderVertex[16] g_ClipperOutputBuffer
    NEG EDI                             ; 00437893
    CMP EDI,ESI                         ; 00437895
    JL 0x0043789b                       ; 00437897 | LAB_0043789b
        ;   XREF to: 0043789b (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 00437899
    CMP EAX,0x3                         ; 0043789b
        ;   Label: LAB_0043789b
    JA 0x004378d1                       ; 0043789e | caseD_3
        ;   XREF to: 004378d1 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x437824]  ; 004378a0 | void * PTR_caseD_3_00437830 | PTR_caseD_1_00437828 = 004378f1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 004378a7 | int g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004378ae
    MOV ESI,EDX                         ; 004378b3
    ADD EDI,0x826900                    ; 004378b5 | SRenderVertex[16] g_ClipperWorkingBuffer
    PUSH EDI                            ; 004378bb
    MOV EAX,ECX                         ; 004378bc
    SHR ECX,0x2                         ; 004378be
    MOVSD.REP ES:EDI,ESI                ; 004378c1 | SRenderVertex[16] g_ClipperOutputBuffer | g_ClipperWorkingBuffer
    MOV CL,AL                           ; 004378c3
    AND CL,0x3                          ; 004378c5
    MOVSB.REP ES:EDI,ESI                ; 004378c8 | DAT_00825d04
    POP EDI                             ; 004378ca
    INC dword ptr [0x00825cf8]          ; 004378cb | int g_TempVertexCount
    MOV ESI,dword ptr [ESP]             ; 004378d1
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00825cf4]      ; 004378d4 | int g_OutputVertexCount
    INC ESI                             ; 004378da
    ADD EBX,0x30                        ; 004378db
    MOV dword ptr [ESP],ESI             ; 004378de
    CMP ESI,EDI                         ; 004378e1
    JL 0x0043785f                       ; 004378e3 | LAB_0043785f
        ;   XREF to: 0043785f (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 004378e9
        ;   Label: LAB_004378e9
    POP EBP                             ; 004378ec
    POP EDI                             ; 004378ed
    POP ESI                             ; 004378ee
    POP EBX                             ; 004378ef
    RET                                 ; 004378f0
    IMUL EAX,dword ptr [0x00825cf8],0x30 ; 004378f1 | int g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826900                    ; 004378f8 | SRenderVertex[16] g_ClipperWorkingBuffer
    PUSH EAX                            ; 004378fd
    PUSH EDX                            ; 004378fe | SRenderVertex[16] g_ClipperOutputBuffer
    PUSH EBP                            ; 004378ff
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00437900 | void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x00825cf8]      ; 00437905 | int g_TempVertexCount
    INC ESI                             ; 0043790b
    ADD ESP,0xc                         ; 0043790c
    MOV dword ptr [0x00825cf8],ESI      ; 0043790f | int g_TempVertexCount
    JMP 0x004378d1                      ; 00437915 | caseD_3
        ;   XREF to: 004378d1 (UNCONDITIONAL_JUMP)
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 00437917 | int g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043791e
    MOV ESI,EDX                         ; 00437923
    ADD EDI,0x826900                    ; 00437925 | SRenderVertex[16] g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043792b
    MOV EAX,ECX                         ; 0043792c
    SHR ECX,0x2                         ; 0043792e
    MOVSD.REP ES:EDI,ESI                ; 00437931 | SRenderVertex[16] g_ClipperOutputBuffer | g_ClipperWorkingBuffer
    MOV CL,AL                           ; 00437933
    AND CL,0x3                          ; 00437935
    MOVSB.REP ES:EDI,ESI                ; 00437938 | DAT_00825d04
    POP EDI                             ; 0043793a
    MOV ECX,dword ptr [0x00825cf8]      ; 0043793b | int g_TempVertexCount
    INC ECX                             ; 00437941
    MOV dword ptr [0x00825cf8],ECX      ; 00437942 | int g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 00437948
    ADD EAX,0x826900                    ; 0043794b | SRenderVertex[16] g_ClipperWorkingBuffer
    PUSH EAX                            ; 00437950
    PUSH EBP                            ; 00437951
    PUSH EDX                            ; 00437952 | SRenderVertex[16] g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00437953 | void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x00825cf8]      ; 00437958 | int g_TempVertexCount
    INC EDI                             ; 0043795e
    ADD ESP,0xc                         ; 0043795f
    MOV dword ptr [0x00825cf8],EDI      ; 00437962 | int g_TempVertexCount
    JMP 0x004378d1                      ; 00437968 | caseD_3
        ;   XREF to: 004378d1 (UNCONDITIONAL_JUMP)

