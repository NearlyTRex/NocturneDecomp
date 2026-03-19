; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
; Local Variables:
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407add
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006133d2
;   TerminatedCString s_vlist_too_many_verticies_006133e1
;   uint g_VertexProcessingEnabled = 0x1
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x+3
;   undefined4 g_RenderVertexBuffer[0].a
;   uint g_ProcessedVertexOffset
;   uint g_ProcessedVertexBackupOffset
;   void* g_CurrentVertexData
;   float g_PerspectiveReciprocal
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403840
        ;   Label: engine_3d.c_transformAndBufferVertices_FUN_00403840
    PUSH ESI                            ; 00403841
    PUSH EDI                            ; 00403842
    PUSH EBP                            ; 00403843
    SUB ESP,0x4                         ; 00403844
    MOV EDI,dword ptr [ESP + 0x18]      ; 00403847
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040384b
    ADD EDI,0xc                         ; 0040384f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00403852
    MOV dword ptr [0x00772a94],EDI      ; 00403855 | g_CurrentVertexData
    CMP EDX,0x4e20                      ; 0040385b
    JG 0x00403914                       ; 00403861
        ;   XREF to: 00403914 (CONDITIONAL_JUMP)  ; LAB_00403914
    MOV dword ptr [0x006793bc],0x1      ; 00403867 | g_VertexProcessingEnabled
        ;   Label: LAB_00403867
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403871
    MOV EDX,dword ptr [0x00772a60]      ; 00403875 | g_ProcessedVertexOffset
    MOV ESI,dword ptr [ESI + 0x4]       ; 0040387b
    ADD ESI,EDX                         ; 0040387e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00403880
    SUB EAX,ESI                         ; 00403887
    MOV ESI,0x688014                    ; 00403889 | g_RenderVertexBuffer
    SHL EAX,0x4                         ; 0040388e
    ADD ESI,EAX                         ; 00403891
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403893
    XOR EBP,EBP                         ; 00403897
    MOV ECX,dword ptr [EAX + 0x8]       ; 00403899
    MOV dword ptr [ESP],EBP             ; 0040389c
    TEST ECX,ECX                        ; 0040389f
    JLE 0x004038d2                      ; 004038a1
        ;   XREF to: 004038d2 (CONDITIONAL_JUMP)  ; LAB_004038d2
    PUSH EDI                            ; 004038a3
        ;   Label: LAB_004038a3
    PUSH ESI                            ; 004038a4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004038a5
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x02d051f4]                ; 004038aa | g_PerspectiveReciprocal
    MOV dword ptr [ESI + 0x2c],EAX      ; 004038af | g_RenderVertexBuffer[0].a
    MOV AH,byte ptr [ESI + 0x13]        ; 004038b2 | g_RenderVertexBuffer[0].projected_vertex.screen_x+3
    ADD ESP,0x8                         ; 004038b5
    TEST AH,0x80                        ; 004038b8
    JNZ 0x004038c0                      ; 004038bb
        ;   XREF to: 004038c0 (CONDITIONAL_JUMP)  ; LAB_004038c0
    INC dword ptr [ESP]                 ; 004038bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004038c0
        ;   Label: LAB_004038c0
    ADD ESI,0x30                        ; 004038c4
    INC EBP                             ; 004038c7
    MOV EBX,dword ptr [EAX + 0x8]       ; 004038c8
    ADD EDI,0xc                         ; 004038cb
    CMP EBP,EBX                         ; 004038ce
    JL 0x004038a3                       ; 004038d0
        ;   XREF to: 004038a3 (CONDITIONAL_JUMP)  ; LAB_004038a3
    MOV ESI,dword ptr [0x00772a60]      ; 004038d2 | g_ProcessedVertexOffset
        ;   Label: LAB_004038d2
    TEST ESI,ESI                        ; 004038d8
    JNZ 0x004038e2                      ; 004038da
        ;   XREF to: 004038e2 (CONDITIONAL_JUMP)  ; LAB_004038e2
    MOV dword ptr [0x00772a64],ESI      ; 004038dc | g_ProcessedVertexBackupOffset
    MOV ESI,dword ptr [ESP + 0x18]      ; 004038e2
        ;   Label: LAB_004038e2
    MOV EAX,dword ptr [ESP]             ; 004038e6
    MOV EBP,dword ptr [ESI + 0x8]       ; 004038e9
    CMP EAX,EBP                         ; 004038ec
    JZ 0x0040393c                       ; 004038ee
        ;   XREF to: 0040393c (CONDITIONAL_JUMP)  ; LAB_0040393c
    MOV ESI,dword ptr [ESP + 0x18]      ; 004038f0
        ;   Label: LAB_004038f0
    MOV ESI,dword ptr [ESI + 0x8]       ; 004038f4
    LEA EAX,[ESI*0x4 + 0x0]             ; 004038f7
    SUB EAX,ESI                         ; 004038fe
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403900
    SHL EAX,0x2                         ; 00403904
    ADD ESI,0xc                         ; 00403907
    ADD EAX,ESI                         ; 0040390a
    ADD ESP,0x4                         ; 0040390c
    POP EBP                             ; 0040390f
    POP EDI                             ; 00403910
    POP ESI                             ; 00403911
    POP EBX                             ; 00403912
    RET                                 ; 00403913
    MOV ECX,0x6133d2                    ; 00403914 | = "..\\engine\\3d.c"
        ;   Label: LAB_00403914
    MOV EBX,0x15c                       ; 00403919
    PUSH 0x6133e1                       ; 0040391e | = "vlist - too many verticies"
    MOV dword ptr [0x02f0ca48],ECX      ; 00403923 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00403929 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040392f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403934
    JMP 0x00403867                      ; 00403937
        ;   XREF to: 00403867 (UNCONDITIONAL_JUMP)  ; LAB_00403867
    XOR EAX,EBP                         ; 0040393c
        ;   Label: LAB_0040393c
    MOV [0x006793bc],EAX                ; 0040393e | g_VertexProcessingEnabled
    JMP 0x004038f0                      ; 00403943
        ;   XREF to: 004038f0 (UNCONDITIONAL_JUMP)  ; LAB_004038f0

