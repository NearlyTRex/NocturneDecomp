; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *modelStruct)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   modelStruct
;
; XREF[7]:
;   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 at 004b562f
;   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 at 004b55ba
;   engine_model.c_getMRGLBounds_FUN_00528140 at 00528584
;   engine_palette.cpp_CPaletteManager_scanTextures_FUN_00545060 at 0054511d
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 0046830f
;   shape_design.c_loadModelBinary_FUN_00458170 at 004588f5
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048fffe
;
; Referenced Globals:
;   TerminatedCString s_engine_model_c_00639bb3
;   TerminatedCString s_engine_model_c_00639bc5
;
; Called Functions:
;   engine_boss.c_modelStructNotSupported_FUN_0041dbb0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005280b0
        ;   Label: engine_model.c_freeMRGLData_FUN_005280b0
    PUSH EBP                            ; 005280b1
    MOV EBP,dword ptr [ESP + 0xc]       ; 005280b2
    TEST EBP,EBP                        ; 005280b6
    JZ 0x005280d2                       ; 005280b8
        ;   XREF to: 005280d2 (CONDITIONAL_JUMP)  ; LAB_005280d2
    MOV EDX,dword ptr [EBP]             ; 005280ba
    MOV EDI,EBP                         ; 005280bd
    CMP EDX,0x20                        ; 005280bf
    JZ 0x005280d5                       ; 005280c2
        ;   XREF to: 005280d5 (CONDITIONAL_JUMP)  ; LAB_005280d5
    CMP EDX,0x26                        ; 005280c4
    JNZ 0x00528128                      ; 005280c7
        ;   XREF to: 00528128 (CONDITIONAL_JUMP)  ; LAB_00528128
    PUSH EBP                            ; 005280c9
    CALL engine_boss.c_modelStructNotSupported_FUN_0041dbb0 ; 005280ca
        ;   XREF to: 0041dbb0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 005280cf
    POP EBP                             ; 005280d2
        ;   Label: LAB_005280d2
    POP EDI                             ; 005280d3
    RET                                 ; 005280d4
    PUSH ESI                            ; 005280d5
        ;   Label: LAB_005280d5
    PUSH EBX                            ; 005280d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005280d7
    PUSH EBX                            ; 005280da
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 005280db
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * modelStruct)
    ADD ESP,0x4                         ; 005280e0
    MOV ESI,dword ptr [EBP + 0x8]       ; 005280e3
    XOR EBX,EBX                         ; 005280e6
    TEST ESI,ESI                        ; 005280e8
    JLE 0x00528110                      ; 005280ea
        ;   XREF to: 00528110 (CONDITIONAL_JUMP)  ; LAB_00528110
    MOV ESI,EBP                         ; 005280ec
    MOV EAX,dword ptr [ESI + 0x118]     ; 005280ee
        ;   Label: LAB_005280ee
    PUSH EAX                            ; 005280f4
    ADD ESI,0x4                         ; 005280f5
    INC EBX                             ; 005280f8
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 005280f9
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * modelStruct)
    MOV EDX,dword ptr [EDI + 0x8]       ; 005280fe
    ADD ESP,0x4                         ; 00528101
    CMP EBX,EDX                         ; 00528104
    JL 0x005280ee                       ; 00528106
        ;   XREF to: 005280ee (CONDITIONAL_JUMP)  ; LAB_005280ee
    LEA EAX,[EAX]                       ; 00528108
    MOV EDX,EDX                         ; 0052810e
    PUSH 0x133                          ; 00528110
        ;   Label: LAB_00528110
    PUSH 0x639bb3                       ; 00528115 | = "..\\engine\\model.c"
    PUSH EBP                            ; 0052811a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0052811b
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00528120
    POP EBX                             ; 00528123
    POP ESI                             ; 00528124
    POP EBP                             ; 00528125
    POP EDI                             ; 00528126
    RET                                 ; 00528127
    PUSH 0x13c                          ; 00528128
        ;   Label: LAB_00528128
    PUSH 0x639bc5                       ; 0052812d | = "..\\engine\\model.c"
    PUSH EBP                            ; 00528132
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00528133
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00528138
    POP EBP                             ; 0052813b
    POP EDI                             ; 0052813c
    RET                                 ; 0052813d

