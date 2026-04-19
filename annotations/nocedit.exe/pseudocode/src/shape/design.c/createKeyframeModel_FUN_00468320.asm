; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)
;
; Local Variables:
; SMRGLKeyframeModel Stack[-0x264]:344  local_264
; char[80]         Stack[-0x10c]:80  local_10c
; char[80]         Stack[-0xbc]:80  local_bc
; byte[80]         Stack[-0x6c]:80  local_6c
; _FILE *          Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6f0
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_final_model_nam_0061cc90
;   TerminatedCString s_Enter_in_number_of_frame_0061ccad
;   TerminatedCString s_Enter_key_frame_of_objec_0061ccca
;   TerminatedCString s_Enter_in_time_per_frame__0061ccea
;   double g_MaxTimePerFrame = 127
;   TerminatedCString s_wb_0061cd1e
;   TerminatedCString s_models_0061cd21
;   double g_TimeConversionFactor = 65536
;   TerminatedCString s_shape_design_c_0061cd36
;   TerminatedCString s_Unable_to_write_keyframe_0061cd48
;   TerminatedCString s_shape_design_c_0061cd68
;   TerminatedCString s_Use_keyframe_0_to_center_0061cd7a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_centerKeyframeModels_FUN_004681a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468320
        ;   Label: shape_design.c_createKeyframeModel_FUN_00468320
    PUSH ESI                            ; 00468321
    PUSH EDI                            ; 00468322
    PUSH EBP                            ; 00468323
    MOV EBP,ESP                         ; 00468324
    SUB ESP,0x25c                       ; 00468326
    PUSH 0x158                          ; 0046832c
    PUSH 0x0                            ; 00468331
    LEA ECX,[EBP + 0xfffffdac]          ; 00468333
    PUSH ECX                            ; 00468339
    CALL crt_memory.c_memset_FUN_005fde40 ; 0046833a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046833f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00468342
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61cc90                    ; 00468347 | = "Enter in final model name : "
    PUSH ECX                            ; 0046834c | = "Enter in final model name : "
    PUSH 0x0                            ; 0046834d
    PUSH 0x0                            ; 0046834f
    PUSH 0x28                           ; 00468351
    LEA ECX,[EBP + 0xffffff04]          ; 00468353
    PUSH ECX                            ; 00468359
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046835a
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046835f
    LEA EDI,[EBP + 0xffffff04]          ; 00468362
    SUB ECX,ECX                         ; 00468368
    DEC ECX                             ; 0046836a
    XOR EAX,EAX                         ; 0046836b
    SCASB.REPNE ES:EDI                  ; 0046836d
    NOT ECX                             ; 0046836f
    DEC ECX                             ; 00468371
    TEST ECX,ECX                        ; 00468372
    JNZ 0x0046837b                      ; 00468374
        ;   XREF to: 0046837b (CONDITIONAL_JUMP)  ; LAB_0046837b
    JMP 0x004685d0                      ; 00468376
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
    MOV ECX,0x61ccad                    ; 0046837b | = "Enter in number of frames : "
        ;   Label: LAB_0046837b
    PUSH ECX                            ; 00468380 | = "Enter in number of frames : "
    PUSH 0xb                            ; 00468381
    PUSH 0x0                            ; 00468383
    PUSH 0x2                            ; 00468385
    LEA ECX,[EBP + -0x5c]               ; 00468387
    PUSH ECX                            ; 0046838a
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046838b
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00468390
    LEA EDI,[EBP + -0x5c]               ; 00468393
    SUB ECX,ECX                         ; 00468396
    DEC ECX                             ; 00468398
    XOR EAX,EAX                         ; 00468399
    SCASB.REPNE ES:EDI                  ; 0046839b
    NOT ECX                             ; 0046839d
    DEC ECX                             ; 0046839f
    TEST ECX,ECX                        ; 004683a0
    JNZ 0x004683a9                      ; 004683a2
        ;   XREF to: 004683a9 (CONDITIONAL_JUMP)  ; LAB_004683a9
    JMP 0x004685d0                      ; 004683a4
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
    LEA EAX,[EBP + -0x5c]               ; 004683a9
        ;   Label: LAB_004683a9
    PUSH EAX                            ; 004683ac
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004683ad
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 004683b2
    MOV dword ptr [EBP + 0xfffffdb4],EAX ; 004683b5
    CMP dword ptr [EBP + 0xfffffdb4],0x2 ; 004683bb
    JL 0x004683cd                       ; 004683c2
        ;   XREF to: 004683cd (CONDITIONAL_JUMP)  ; LAB_004683cd
    CMP dword ptr [EBP + 0xfffffdb4],0x10 ; 004683c4
    JLE 0x004683d2                      ; 004683cb
        ;   XREF to: 004683d2 (CONDITIONAL_JUMP)  ; LAB_004683d2
    JMP 0x004685d0                      ; 004683cd
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
        ;   Label: LAB_004683cd
    MOV dword ptr [EBP + -0x8],0x0      ; 004683d2
        ;   Label: LAB_004683d2
    JMP 0x004683e1                      ; 004683d9
        ;   XREF to: 004683e1 (UNCONDITIONAL_JUMP)  ; LAB_004683e1
    MOV EAX,dword ptr [EBP + -0x8]      ; 004683db
        ;   Label: LAB_004683db
    INC dword ptr [EBP + -0x8]          ; 004683de
    MOV EAX,dword ptr [EBP + -0x8]      ; 004683e1
        ;   Label: LAB_004683e1
    CMP EAX,dword ptr [EBP + 0xfffffdb4] ; 004683e4
    JGE 0x0046846e                      ; 004683ea
        ;   XREF to: 0046846e (CONDITIONAL_JUMP)  ; LAB_0046846e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004683f0
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [EBP + -0x8]      ; 004683f5
    INC ECX                             ; 004683f8
    PUSH ECX                            ; 004683f9
    MOV ECX,0x61ccca                    ; 004683fa | = "Enter key frame of object %d : "
    PUSH ECX                            ; 004683ff | = "Enter key frame of object %d : "
    LEA ECX,[EBP + 0xffffff54]          ; 00468400
    PUSH ECX                            ; 00468406
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00468407
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046840c
    LEA ECX,[EBP + 0xffffff54]          ; 0046840f
    PUSH ECX                            ; 00468415
    PUSH 0x0                            ; 00468416
    PUSH 0x0                            ; 00468418
    PUSH 0x14                           ; 0046841a
    LEA ECX,[EBP + -0x5c]               ; 0046841c
    PUSH ECX                            ; 0046841f
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468420
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00468425
    LEA EDI,[EBP + -0x5c]               ; 00468428
    SUB ECX,ECX                         ; 0046842b
    DEC ECX                             ; 0046842d
    XOR EAX,EAX                         ; 0046842e
    SCASB.REPNE ES:EDI                  ; 00468430
    NOT ECX                             ; 00468432
    DEC ECX                             ; 00468434
    TEST ECX,ECX                        ; 00468435
    JNZ 0x0046843e                      ; 00468437
        ;   XREF to: 0046843e (CONDITIONAL_JUMP)  ; LAB_0046843e
    JMP 0x004685d0                      ; 00468439
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
    LEA ESI,[EBP + -0x5c]               ; 0046843e
        ;   Label: LAB_0046843e
    MOV EDI,dword ptr [EBP + -0x8]      ; 00468441
    SHL EDI,0x4                         ; 00468444
    LEA EAX,[EBP + 0xfffffdc4]          ; 00468447
    ADD EDI,EAX                         ; 0046844d
    PUSH EDI                            ; 0046844f
    MOV AL,byte ptr [ESI]               ; 00468450
        ;   Label: LAB_00468450
    MOV byte ptr [EDI],AL               ; 00468452
    CMP AL,0x0                          ; 00468454
    JZ 0x00468468                       ; 00468456
        ;   XREF to: 00468468 (CONDITIONAL_JUMP)  ; LAB_00468468
    MOV AL,byte ptr [ESI + 0x1]         ; 00468458
    ADD ESI,0x2                         ; 0046845b
    MOV byte ptr [EDI + 0x1],AL         ; 0046845e
    ADD EDI,0x2                         ; 00468461
    CMP AL,0x0                          ; 00468464
    JNZ 0x00468450                      ; 00468466
        ;   XREF to: 00468450 (CONDITIONAL_JUMP)  ; LAB_00468450
    POP EDI                             ; 00468468
        ;   Label: LAB_00468468
    JMP 0x004683db                      ; 00468469
        ;   XREF to: 004683db (UNCONDITIONAL_JUMP)  ; LAB_004683db
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046846e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046846e
    MOV ECX,0x61ccea                    ; 00468473 | = "Enter in time per frame in decimal : "
    PUSH ECX                            ; 00468478 | = "Enter in time per frame in decimal : "
    PUSH 0x0                            ; 00468479
    PUSH 0x0                            ; 0046847b
    PUSH 0x14                           ; 0046847d
    LEA ECX,[EBP + -0x5c]               ; 0046847f
    PUSH ECX                            ; 00468482
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468483
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00468488
    LEA EDI,[EBP + -0x5c]               ; 0046848b
    SUB ECX,ECX                         ; 0046848e
    DEC ECX                             ; 00468490
    XOR EAX,EAX                         ; 00468491
    SCASB.REPNE ES:EDI                  ; 00468493
    NOT ECX                             ; 00468495
    DEC ECX                             ; 00468497
    TEST ECX,ECX                        ; 00468498
    JNZ 0x004684a1                      ; 0046849a
        ;   XREF to: 004684a1 (CONDITIONAL_JUMP)  ; LAB_004684a1
    JMP 0x004685d0                      ; 0046849c
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
    LEA EAX,[EBP + -0x5c]               ; 004684a1
        ;   Label: LAB_004684a1
    PUSH EAX                            ; 004684a4
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 004684a5
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + 0xfffffda4],EAX ; 004684aa
    MOV dword ptr [EBP + 0xfffffda8],EDX ; 004684b0
    FLD double ptr [EBP + 0xfffffda4]   ; 004684b6
    ADD ESP,0x4                         ; 004684bc
    FSTP float ptr [EBP + -0x4]         ; 004684bf
    FLD float ptr [EBP + -0x4]          ; 004684c2
    FLDZ                                ; 004684c5
    FCOMPP                              ; 004684c7
    FNSTSW AX                           ; 004684c9
    SAHF                                ; 004684cb
    JNC 0x004684dc                      ; 004684cc
        ;   XREF to: 004684dc (CONDITIONAL_JUMP)  ; LAB_004684dc
    FLD float ptr [EBP + -0x4]          ; 004684ce
    FCOMP double ptr [0x0061cd16]       ; 004684d1 | g_MaxTimePerFrame
    FNSTSW AX                           ; 004684d7
    SAHF                                ; 004684d9
    JC 0x004684e1                       ; 004684da
        ;   XREF to: 004684e1 (CONDITIONAL_JUMP)  ; LAB_004684e1
    JMP 0x004685d0                      ; 004684dc
        ;   XREF to: 004685d0 (UNCONDITIONAL_JUMP)  ; LAB_004685d0
        ;   Label: LAB_004684dc
    FLD float ptr [EBP + -0x4]          ; 004684e1
        ;   Label: LAB_004684e1
    FMUL double ptr [0x0061cd2e]        ; 004684e4 | g_TimeConversionFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 004684ea
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffffdb8]  ; 004684ef
    MOV dword ptr [EBP + 0xfffffdac],0x20 ; 004684f5
    MOV EAX,0x61cd1e                    ; 004684ff | = "wb"
    PUSH EAX                            ; 00468504 | = "wb"
    LEA EAX,[EBP + 0xffffff04]          ; 00468505
    PUSH EAX                            ; 0046850b
    MOV EAX,0x61cd21                    ; 0046850c | = "models"
    PUSH EAX                            ; 00468511 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00468512
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00468517
    MOV dword ptr [EBP + -0xc],EAX      ; 0046851a
    CMP dword ptr [EBP + -0xc],0x0      ; 0046851d
    JNZ 0x00468545                      ; 00468521
        ;   XREF to: 00468545 (CONDITIONAL_JUMP)  ; LAB_00468545
    MOV dword ptr [0x02f0ca48],0x61cd36 ; 00468523 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2277   ; 0046852d | g_CurrentLineNumber
    MOV EAX,0x61cd48                    ; 00468537 | = "Unable to write keyframed model"
    PUSH EAX                            ; 0046853c | = "Unable to write keyframed model"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046853d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00468542
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468545
        ;   Label: LAB_00468545
    PUSH EAX                            ; 00468548
    PUSH 0x158                          ; 00468549
    PUSH 0x1                            ; 0046854e
    LEA EAX,[EBP + 0xfffffdac]          ; 00468550
    PUSH EAX                            ; 00468556
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00468557
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046855c
    MOV dword ptr [EBP + -0x8],0x0      ; 0046855f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468566
    PUSH EAX                            ; 00468569
    PUSH 0x4                            ; 0046856a
    PUSH 0x1                            ; 0046856c
    LEA EAX,[EBP + -0x8]                ; 0046856e
    PUSH EAX                            ; 00468571
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00468572
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00468577
    PUSH 0x227c                         ; 0046857a
    MOV EAX,0x61cd68                    ; 0046857f | = "..\\shape\\design.c"
    PUSH EAX                            ; 00468584 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468585
    PUSH EAX                            ; 00468588
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00468589
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046858e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00468591
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,0x61cd7a                    ; 00468596 | = "Use keyframe 0 to center (Y/N) ? "
    PUSH EAX                            ; 0046859b | = "Use keyframe 0 to center (Y/N) ? "
    PUSH 0x0                            ; 0046859c
    PUSH 0x0                            ; 0046859e
    PUSH 0x1                            ; 004685a0
    LEA EAX,[EBP + -0x5c]               ; 004685a2
    PUSH EAX                            ; 004685a5
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004685a6
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004685ab
    XOR EAX,EAX                         ; 004685ae
    MOV AL,byte ptr [EBP + -0x5c]       ; 004685b0
    PUSH EAX                            ; 004685b3
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004685b4
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004685b9
    CMP EAX,0x59                        ; 004685bc
    JNZ 0x004685d0                      ; 004685bf
        ;   XREF to: 004685d0 (CONDITIONAL_JUMP)  ; LAB_004685d0
    LEA EAX,[EBP + 0xfffffdac]          ; 004685c1
    PUSH EAX                            ; 004685c7
    CALL shape_design.c_centerKeyframeModels_FUN_004681a0 ; 004685c8
        ;   XREF to: 004681a0 (UNCONDITIONAL_CALL)  ; void shape_design.c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel * keyframe_model)
    ADD ESP,0x4                         ; 004685cd
    MOV ESP,EBP                         ; 004685d0
        ;   Label: LAB_004685d0
    POP EBP                             ; 004685d2
    POP EDI                             ; 004685d3
    POP ESI                             ; 004685d4
    POP EBX                             ; 004685d5
    RET                                 ; 004685d6

