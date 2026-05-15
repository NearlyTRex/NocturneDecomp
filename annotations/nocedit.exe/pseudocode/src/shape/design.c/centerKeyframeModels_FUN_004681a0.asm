; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)
;
; Parameters:
; SMRGLKeyframeModel * Stack[0x4]:4   keyframe_model
; Local Variables:
; char[80]         Stack[-0x74]:80  local_74
; int              Stack[-0x24]:4  local_24
; SMRGLHeaderExtended * Stack[-0x20]:4  local_20
; SMRGLHeaderExtended * Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CVector3i *      Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_createKeyframeModel_FUN_00468320 at 004685c8
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_common_nonmovin_0061cc1f
;   TerminatedCString s_models_0061cc45
;   TerminatedCString s_wb_0061cc4c
;   TerminatedCString s_models_0061cc4f
;   TerminatedCString s_shape_design_c_0061cc56
;   TerminatedCString s_Can_t_write_key_model_0061cc68
;   TerminatedCString s_shape_design_c_0061cc7e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_dosio.cpp_getFileSize_FUN_00481880
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_loadModelFile_FUN_00527ec0
;   shape_design.c_applyVertexCentering_FUN_004680f0
;   shape_design.c_findVertexListInModel_FUN_00468000
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004681a0
        ;   Label: shape_design.c_centerKeyframeModels_FUN_004681a0
    PUSH ESI                            ; 004681a1
    PUSH EDI                            ; 004681a2
    PUSH EBP                            ; 004681a3
    MOV EBP,ESP                         ; 004681a4
    SUB ESP,0x6c                        ; 004681a6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004681ac
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61cc1f                    ; 004681b1 | = "Enter in common nonmoving vertex # : "
    PUSH ECX                            ; 004681b6 | = "Enter in common nonmoving vertex # : "
    PUSH 0x0                            ; 004681b7
    PUSH 0x0                            ; 004681b9
    PUSH 0x8                            ; 004681bb
    LEA ECX,[EBP + -0x64]               ; 004681bd
    PUSH ECX                            ; 004681c0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004681c1
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004681c6
    LEA EDI,[EBP + -0x64]               ; 004681c9
    SUB ECX,ECX                         ; 004681cc
    DEC ECX                             ; 004681ce
    XOR EAX,EAX                         ; 004681cf
    SCASB.REPNE ES:EDI                  ; 004681d1
    NOT ECX                             ; 004681d3
    DEC ECX                             ; 004681d5
    TEST ECX,ECX                        ; 004681d6
    JNZ 0x004681df                      ; 004681d8
        ;   XREF to: 004681df (CONDITIONAL_JUMP)  ; LAB_004681df
    JMP 0x00468317                      ; 004681da
        ;   XREF to: 00468317 (UNCONDITIONAL_JUMP)  ; LAB_00468317
    LEA EAX,[EBP + -0x64]               ; 004681df
        ;   Label: LAB_004681df
    PUSH EAX                            ; 004681e2
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004681e3
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 004681e8
    MOV dword ptr [EBP + -0x8],EAX      ; 004681eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004681ee
    ADD EAX,0x18                        ; 004681f1
    PUSH EAX                            ; 004681f4
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 004681f5
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 004681fa
    MOV dword ptr [EBP + -0xc],EAX      ; 004681fd
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468200
    PUSH EAX                            ; 00468203
    CALL shape_design.c_findVertexListInModel_FUN_00468000 ; 00468204
        ;   XREF to: 00468000 (UNCONDITIONAL_CALL)  ; CVector3i * shape_design.c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended * model_ptr)
    ADD ESP,0x4                         ; 00468209
    MOV dword ptr [EBP + -0x4],EAX      ; 0046820c
    MOV dword ptr [EBP + -0x14],0x1     ; 0046820f
    JMP 0x0046821e                      ; 00468216
        ;   XREF to: 0046821e (UNCONDITIONAL_JUMP)  ; LAB_0046821e
    MOV EAX,dword ptr [EBP + -0x14]     ; 00468218
        ;   Label: LAB_00468218
    INC dword ptr [EBP + -0x14]         ; 0046821b
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046821e
        ;   Label: LAB_0046821e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00468221
    CMP EAX,dword ptr [EDX + 0x8]       ; 00468224
    JGE 0x0046830b                      ; 00468227
        ;   XREF to: 0046830b (CONDITIONAL_JUMP)  ; LAB_0046830b
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046822d
    SHL EDX,0x4                         ; 00468230
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468233
    ADD EAX,0x18                        ; 00468236
    ADD EAX,EDX                         ; 00468239
    PUSH EAX                            ; 0046823b
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 0046823c
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 00468241
    MOV dword ptr [EBP + -0x10],EAX     ; 00468244
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468247
    PUSH EAX                            ; 0046824a
    IMUL EAX,dword ptr [EBP + -0x8],0xc ; 0046824b
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046824f
    PUSH EAX                            ; 00468252
    MOV EAX,dword ptr [EBP + -0x10]     ; 00468253
    PUSH EAX                            ; 00468256
    CALL shape_design.c_applyVertexCentering_FUN_004680f0 ; 00468257
        ;   XREF to: 004680f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended * target_model, CVector3i * reference_vertex_list, int reference_vertex_id)
    ADD ESP,0xc                         ; 0046825c
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046825f
    SHL EAX,0x4                         ; 00468262
    MOV EDX,dword ptr [EBP + 0x14]      ; 00468265
    ADD EDX,0x18                        ; 00468268
    ADD EAX,EDX                         ; 0046826b
    PUSH EAX                            ; 0046826d
    MOV EAX,0x61cc45                    ; 0046826e | = "models"
    PUSH EAX                            ; 00468273 | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_00481880 ; 00468274
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00468279
    MOV dword ptr [EBP + -0x6c],EAX     ; 0046827c
    MOV EAX,0x61cc4c                    ; 0046827f | = "wb"
    PUSH EAX                            ; 00468284 | = "wb"
    MOV EAX,dword ptr [EBP + -0x14]     ; 00468285
    SHL EAX,0x4                         ; 00468288
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046828b
    ADD EDX,0x18                        ; 0046828e
    ADD EAX,EDX                         ; 00468291
    PUSH EAX                            ; 00468293
    MOV EAX,0x61cc4f                    ; 00468294 | = "models"
    PUSH EAX                            ; 00468299 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 0046829a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046829f
    MOV dword ptr [EBP + -0x68],EAX     ; 004682a2
    CMP dword ptr [EBP + -0x68],0x0     ; 004682a5
    JNZ 0x004682cd                      ; 004682a9
        ;   XREF to: 004682cd (CONDITIONAL_JUMP)  ; LAB_004682cd
    MOV dword ptr [0x02f0ca48],0x61cc56 ; 004682ab | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2235   ; 004682b5 | g_CurrentLineNumber
    MOV EAX,0x61cc68                    ; 004682bf | = "Can't write key model"
    PUSH EAX                            ; 004682c4 | = "Can't write key model"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004682c5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004682ca
    MOV EAX,dword ptr [EBP + -0x68]     ; 004682cd
        ;   Label: LAB_004682cd
    PUSH EAX                            ; 004682d0
    PUSH 0x1                            ; 004682d1
    MOV EAX,dword ptr [EBP + -0x6c]     ; 004682d3
    PUSH EAX                            ; 004682d6
    MOV EAX,dword ptr [EBP + -0x10]     ; 004682d7
    PUSH EAX                            ; 004682da
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004682db
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004682e0
    PUSH 0x2237                         ; 004682e3
    MOV EAX,0x61cc7e                    ; 004682e8 | = "..\\shape\\design.c"
    PUSH EAX                            ; 004682ed | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x68]     ; 004682ee
    PUSH EAX                            ; 004682f1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004682f2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004682f7
    MOV EAX,dword ptr [EBP + -0x10]     ; 004682fa
    PUSH EAX                            ; 004682fd
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 004682fe
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 00468303
    JMP 0x00468218                      ; 00468306
        ;   XREF to: 00468218 (UNCONDITIONAL_JUMP)  ; LAB_00468218
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046830b
        ;   Label: LAB_0046830b
    PUSH EAX                            ; 0046830e
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 0046830f
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 00468314
    MOV ESP,EBP                         ; 00468317
        ;   Label: LAB_00468317
    POP EBP                             ; 00468319
    POP EDI                             ; 0046831a
    POP ESI                             ; 0046831b
    POP EBX                             ; 0046831c
    RET                                 ; 0046831d

