; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void)
;
; Local Variables:
; int              Stack[-0x14]:4  local_14
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
    MOV ECX,dword ptr [0x00825cf4]      ; 00437849 | g_OutputVertexCount
    MOV dword ptr [ESP],EDX             ; 0043784f
    TEST ECX,ECX                        ; 00437852
    JLE 0x004378e9                      ; 00437854
        ;   XREF to: 004378e9 (CONDITIONAL_JUMP)  ; LAB_004378e9
    MOV EBX,0x825d00                    ; 0043785a | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP]             ; 0043785f
        ;   Label: LAB_0043785f
    MOV EBP,dword ptr [0x00825cf4]      ; 00437862 | g_OutputVertexCount
    INC EAX                             ; 00437868
    CMP EAX,EBP                         ; 00437869
    JNZ 0x0043786f                      ; 0043786b
        ;   XREF to: 0043786f (CONDITIONAL_JUMP)  ; LAB_0043786f
    XOR EAX,EBP                         ; 0043786d
    IMUL EAX,EAX,0x30                   ; 0043786f
        ;   Label: LAB_0043786f
    MOV EBP,0x825d00                    ; 00437872 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 00437877
    MOV EDI,dword ptr [EBX + 0x8]       ; 00437879 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | DAT_00825d38
    MOV ECX,dword ptr [EBX]             ; 0043787c | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG EDI                             ; 0043787e
    ADD EBP,EAX                         ; 00437880
    XOR EAX,EAX                         ; 00437882
    CMP EDI,ECX                         ; 00437884
    JL 0x0043788d                       ; 00437886
        ;   XREF to: 0043788d (CONDITIONAL_JUMP)  ; LAB_0043788d
    MOV EAX,0x1                         ; 00437888
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043788d | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043788d
    MOV ESI,dword ptr [EBP]             ; 00437890 | g_ClipperOutputBuffer
    NEG EDI                             ; 00437893
    CMP EDI,ESI                         ; 00437895
    JL 0x0043789b                       ; 00437897
        ;   XREF to: 0043789b (CONDITIONAL_JUMP)  ; LAB_0043789b
    OR AL,0x2                           ; 00437899
    CMP EAX,0x3                         ; 0043789b
        ;   Label: LAB_0043789b
    JA 0x004378d1                       ; 0043789e
        ;   XREF to: 004378d1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x437824]  ; 004378a0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 004378a7 | g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004378ae
    MOV ESI,EDX                         ; 004378b3
    ADD EDI,0x826900                    ; 004378b5 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 004378bb
    MOV EAX,ECX                         ; 004378bc
    SHR ECX,0x2                         ; 004378be
    MOVSD.REP ES:EDI,ESI                ; 004378c1 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | DAT_00825d04
    MOV CL,AL                           ; 004378c3
    AND CL,0x3                          ; 004378c5
    MOVSB.REP ES:EDI,ESI                ; 004378c8 | DAT_00825d04 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 004378ca
    INC dword ptr [0x00825cf8]          ; 004378cb | g_TempVertexCount
    MOV ESI,dword ptr [ESP]             ; 004378d1
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00825cf4]      ; 004378d4 | g_OutputVertexCount
    INC ESI                             ; 004378da
    ADD EBX,0x30                        ; 004378db
    MOV dword ptr [ESP],ESI             ; 004378de
    CMP ESI,EDI                         ; 004378e1
    JL 0x0043785f                       ; 004378e3
        ;   XREF to: 0043785f (CONDITIONAL_JUMP)  ; LAB_0043785f
    ADD ESP,0x4                         ; 004378e9
        ;   Label: LAB_004378e9
    POP EBP                             ; 004378ec
    POP EDI                             ; 004378ed
    POP ESI                             ; 004378ee
    POP EBX                             ; 004378ef
    RET                                 ; 004378f0
    IMUL EAX,dword ptr [0x00825cf8],0x30 ; 004378f1 | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826900                    ; 004378f8 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 004378fd
    PUSH EDX                            ; 004378fe | g_ClipperOutputBuffer
    PUSH EBP                            ; 004378ff
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00437900
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf8]      ; 00437905 | g_TempVertexCount
    INC ESI                             ; 0043790b
    ADD ESP,0xc                         ; 0043790c
    MOV dword ptr [0x00825cf8],ESI      ; 0043790f | g_TempVertexCount
    JMP 0x004378d1                      ; 00437915
        ;   XREF to: 004378d1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 00437917 | g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043791e
    MOV ESI,EDX                         ; 00437923
    ADD EDI,0x826900                    ; 00437925 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043792b
    MOV EAX,ECX                         ; 0043792c
    SHR ECX,0x2                         ; 0043792e
    MOVSD.REP ES:EDI,ESI                ; 00437931 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | DAT_00825d04
    MOV CL,AL                           ; 00437933
    AND CL,0x3                          ; 00437935
    MOVSB.REP ES:EDI,ESI                ; 00437938 | DAT_00825d04 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043793a
    MOV ECX,dword ptr [0x00825cf8]      ; 0043793b | g_TempVertexCount
    INC ECX                             ; 00437941
    MOV dword ptr [0x00825cf8],ECX      ; 00437942 | g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 00437948
    ADD EAX,0x826900                    ; 0043794b | g_ClipperWorkingBuffer
    PUSH EAX                            ; 00437950
    PUSH EBP                            ; 00437951
    PUSH EDX                            ; 00437952 | g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00437953
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf8]      ; 00437958 | g_TempVertexCount
    INC EDI                             ; 0043795e
    ADD ESP,0xc                         ; 0043795f
    MOV dword ptr [0x00825cf8],EDI      ; 00437962 | g_TempVertexCount
    JMP 0x004378d1                      ; 00437968
        ;   XREF to: 004378d1 (UNCONDITIONAL_JUMP)  ; caseD_3

