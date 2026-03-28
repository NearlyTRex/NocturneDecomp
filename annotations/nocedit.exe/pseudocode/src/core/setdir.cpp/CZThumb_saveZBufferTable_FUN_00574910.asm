; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float unknown_scale,_FILE *file_handle)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   camera_pos
; CVector3f *      Stack[0xc]:4   look_at_pos
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; float            Stack[0x18]:4   unknown_scale
; _FILE *          Stack[0x1c]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_006463fe
;   TerminatedCString s_saveZBufferTable_already_00646411
;   TerminatedCString s_core_setdir_cpp_00646433
;   TerminatedCString s_saveZBufferTable_not_sav_00646446
;   TerminatedCString s_core_setdir_cpp_00646464
;   TerminatedCString s_core_setdir_cpp_00646477
;   TerminatedCString s_Out_of_memory_0064648a
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonSet g_CDemonSetInstance
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setdir.cpp_CZThumb_free_FUN_00574b50
;   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
;   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
;   crt_stdio.c_fread_FUN_005fd990
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574910
        ;   Label: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
    PUSH ESI                            ; 00574911
    PUSH EDI                            ; 00574912
    PUSH EBP                            ; 00574913
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574914
    MOV EDI,dword ptr [ESP + 0x18]      ; 00574918
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057491c
    PUSH ESI                            ; 00574920
    CALL core_setdir.cpp_CZThumb_free_FUN_00574b50 ; 00574921
        ;   XREF to: 00574b50 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_free_FUN_00574b50(CZThumb * this_ptr)
    LEA EAX,[ESI + 0x8]                 ; 00574926
    ADD ESP,0x4                         ; 00574929
    CMP EAX,EDI                         ; 0057492c
    JNZ 0x00574aed                      ; 0057492e
        ;   XREF to: 00574aed (CONDITIONAL_JUMP)  ; LAB_00574aed
    LEA EAX,[ESI + 0x14]                ; 00574934
        ;   Label: LAB_00574934
    CMP EAX,EBX                         ; 00574937
    JZ 0x0057494b                       ; 00574939
        ;   XREF to: 0057494b (CONDITIONAL_JUMP)  ; LAB_0057494b
    MOV EDX,dword ptr [EBX]             ; 0057493b
    MOV dword ptr [EAX],EDX             ; 0057493d
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057493f
    MOV dword ptr [EAX + 0x4],EDX       ; 00574942
    MOV EDX,dword ptr [EBX + 0x8]       ; 00574945
    MOV dword ptr [EAX + 0x8],EDX       ; 00574948
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057494b
        ;   Label: LAB_0057494b
    MOV dword ptr [ESI],EAX             ; 0057494f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574951
    MOV dword ptr [ESI + 0x4],EAX       ; 00574955
    MOV EAX,dword ptr [ESP + 0x28]      ; 00574958
    MOV dword ptr [ESI + 0x20],EAX      ; 0057495c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0057495f
    MOV EAX,dword ptr [ESI]             ; 00574962
    IMUL EAX,EDX                        ; 00574964
    PUSH 0x9e                           ; 00574967
    PUSH 0x646464                       ; 0057496c | = "..\\core\\setdir.cpp"
    SHL EAX,0x2                         ; 00574971
    PUSH EAX                            ; 00574974
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00574975
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057497a
    MOV dword ptr [ESI + 0x24],EAX      ; 0057497d
    TEST EAX,EAX                        ; 00574980
    JNZ 0x005749a7                      ; 00574982
        ;   XREF to: 005749a7 (CONDITIONAL_JUMP)  ; LAB_005749a7
    MOV EBX,0x646477                    ; 00574984 | = "..\\core\\setdir.cpp"
    MOV EDI,0x9f                        ; 00574989
    PUSH 0x64648a                       ; 0057498e | = "Out of memory"
    MOV dword ptr [0x02f0ca48],EBX      ; 00574993 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00574999 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057499f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005749a4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005749a7
        ;   Label: LAB_005749a7
    TEST EBP,EBP                        ; 005749ab
    JNZ 0x00574b02                      ; 005749ad
        ;   XREF to: 00574b02 (CONDITIONAL_JUMP)  ; LAB_00574b02
    MOV EBX,dword ptr [0x006703ec]      ; 005749b3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005749b9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005749ba
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005749bf
    PUSH EBP                            ; 005749c2
    MOV EBP,dword ptr [0x006703ec]      ; 005749c3 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005749c9 | g_CDemonRendererInstance
    MOV EDI,EAX                         ; 005749ca
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 005749cc
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    MOV EAX,[0x0336362c]                ; 005749d1 | g_ZBufferScanlineArrayBackup
    ADD ESP,0x8                         ; 005749d6
    MOV EBX,dword ptr [ESI + 0x4]       ; 005749d9
    TEST EAX,EAX                        ; 005749dc
    JZ 0x00574a03                       ; 005749de
        ;   XREF to: 00574a03 (CONDITIONAL_JUMP)  ; LAB_00574a03
    MOV EDX,0x6463fe                    ; 005749e0 | = "..\\core\\setdir.cpp"
    MOV ECX,0x67                        ; 005749e5
    PUSH 0x646411                       ; 005749ea | = "saveZBufferTable - already saved!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005749ef | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005749f5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005749fb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574a00
    TEST EBX,EBX                        ; 00574a03
        ;   Label: LAB_00574a03
    JLE 0x00574a30                      ; 00574a05
        ;   XREF to: 00574a30 (CONDITIONAL_JUMP)  ; LAB_00574a30
    LEA ECX,[EBX*0x4 + 0x0]             ; 00574a07
    XOR EAX,EAX                         ; 00574a0e
    ADD EAX,0x4                         ; 00574a10
        ;   Label: LAB_00574a10
    MOV EDX,dword ptr [EAX + 0x2cf7d58] ; 00574a13 | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    MOV dword ptr [EAX + 0x3363628],EDX ; 00574a19 | g_ZBufferScanlineArrayBackup | g_ZBufferScanlineArrayBackup[1]
    CMP EAX,ECX                         ; 00574a1f
    JL 0x00574a10                       ; 00574a21
        ;   XREF to: 00574a10 (CONDITIONAL_JUMP)  ; LAB_00574a10
    LEA EAX,[EAX]                       ; 00574a23
    LEA EDX,[EDX]                       ; 00574a29
    NOP                                 ; 00574a2f
    PUSH ESI                            ; 00574a30
        ;   Label: LAB_00574a30
    CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30 ; 00574a31
        ;   XREF to: 00574e30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574a36
    PUSH ESI                            ; 00574a39
    CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 ; 00574a3a
        ;   XREF to: 00574e70 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00574a3f
    PUSH 0x3346d14                      ; 00574a42 | g_VDTempVector
    MOV EBX,dword ptr [0x006703ec]      ; 00574a47 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00574a4d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 ; 00574a4e
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 00574a53
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 00574a56
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    PUSH 0x0                            ; 00574a5b
    MOV EBP,dword ptr [0x006810c8]      ; 00574a5d | g_CDemonSetPtr
    PUSH 0x461c3f9a                     ; 00574a63
    PUSH EBP                            ; 00574a68 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 00574a69
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00574a6e
    PUSH ESI                            ; 00574a71
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0 ; 00574a72
        ;   XREF to: 00574ef0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb * this_ptr)
    MOV EAX,[0x0336362c]                ; 00574a77 | g_ZBufferScanlineArrayBackup
    ADD ESP,0x4                         ; 00574a7c
    MOV ESI,dword ptr [ESI + 0x4]       ; 00574a7f
    TEST EAX,EAX                        ; 00574a82
    JNZ 0x00574aa9                      ; 00574a84
        ;   XREF to: 00574aa9 (CONDITIONAL_JUMP)  ; LAB_00574aa9
    MOV EDX,0x646433                    ; 00574a86 | = "..\\core\\setdir.cpp"
    MOV ECX,0x70                        ; 00574a8b
    PUSH 0x646446                       ; 00574a90 | = "saveZBufferTable - not saved!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00574a95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00574a9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00574aa1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574aa6
    TEST ESI,ESI                        ; 00574aa9
        ;   Label: LAB_00574aa9
    JLE 0x00574ad0                      ; 00574aab
        ;   XREF to: 00574ad0 (CONDITIONAL_JUMP)  ; LAB_00574ad0
    LEA ECX,[ESI*0x4 + 0x0]             ; 00574aad
    XOR EAX,EAX                         ; 00574ab4
    ADD EAX,0x4                         ; 00574ab6
        ;   Label: LAB_00574ab6
    MOV EDX,dword ptr [EAX + 0x3363628] ; 00574ab9 | g_ZBufferScanlineArrayBackup | g_ZBufferScanlineArrayBackup[1]
    MOV dword ptr [EAX + 0x2cf7d58],EDX ; 00574abf | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    CMP EAX,ECX                         ; 00574ac5
    JL 0x00574ab6                       ; 00574ac7
        ;   XREF to: 00574ab6 (CONDITIONAL_JUMP)  ; LAB_00574ab6
    LEA EAX,[EAX]                       ; 00574ac9
    NOP                                 ; 00574acf
    PUSH EDI                            ; 00574ad0
        ;   Label: LAB_00574ad0
    MOV ESI,dword ptr [0x006703ec]      ; 00574ad1 | g_CDemonRendererPtr2
    XOR EBX,EBX                         ; 00574ad7
    PUSH ESI                            ; 00574ad9 | g_CDemonRendererInstance
    MOV dword ptr [0x0336362c],EBX      ; 00574ada | g_ZBufferScanlineArrayBackup
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00574ae0
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00574ae5
    POP EBP                             ; 00574ae8
    POP EDI                             ; 00574ae9
    POP ESI                             ; 00574aea
    POP EBX                             ; 00574aeb
    RET                                 ; 00574aec
    MOV EDX,dword ptr [EDI]             ; 00574aed
        ;   Label: LAB_00574aed
    MOV dword ptr [EAX],EDX             ; 00574aef
    MOV EDX,dword ptr [EDI + 0x4]       ; 00574af1
    MOV dword ptr [EAX + 0x4],EDX       ; 00574af4
    MOV EDX,dword ptr [EDI + 0x8]       ; 00574af7
    MOV dword ptr [EAX + 0x8],EDX       ; 00574afa
    JMP 0x00574934                      ; 00574afd
        ;   XREF to: 00574934 (UNCONDITIONAL_JUMP)  ; LAB_00574934
    MOV EAX,dword ptr [ESI]             ; 00574b02
        ;   Label: LAB_00574b02
    IMUL EAX,dword ptr [ESI + 0x4]      ; 00574b04
    PUSH EBP                            ; 00574b08
    PUSH 0x4                            ; 00574b09
    PUSH EAX                            ; 00574b0b
    MOV ECX,dword ptr [ESI + 0x24]      ; 00574b0c
    PUSH ECX                            ; 00574b0f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00574b10
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00574b15
    POP EBP                             ; 00574b18
    POP EDI                             ; 00574b19
    POP ESI                             ; 00574b1a
    POP EBX                             ; 00574b1b
    RET                                 ; 00574b1c

