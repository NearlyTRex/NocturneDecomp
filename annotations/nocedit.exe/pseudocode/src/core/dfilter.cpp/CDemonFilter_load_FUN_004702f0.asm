; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter *this_ptr,char *filename)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_FUN_00422d60 at 0042302d
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 at 00470138
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 at 00470889
;
; Referenced Globals:
;   TerminatedCString s_rb_0061e5af
;   TerminatedCString s_art_0061e5b2
;   TerminatedCString s_core_dfilter_cpp_0061e5b6
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e5ca
;   TerminatedCString s_core_dfilter_cpp_0061e5f1
;   TerminatedCString s_art_0061e605
;   TerminatedCString s_core_dfilter_cpp_0061e609
;   TerminatedCString s_CDemonFilter_load_Non_sq_0061e61d
;   TerminatedCString s_core_dfilter_cpp_0061e64a
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e65e
;   TerminatedCString s_core_dfilter_cpp_0061e686
;   TerminatedCString s_CDemonFilter_load_Bad_fi_0061e69a
;   TerminatedCString s_rb_0061e6c2
;   TerminatedCString s_art_0061e6c5
;   TerminatedCString s_core_dfilter_cpp_0061e6c9
;   ... and 4 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fread_FUN_005fd990
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004702f0
        ;   Label: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
    PUSH ESI                            ; 004702f1
    PUSH EDI                            ; 004702f2
    PUSH EBP                            ; 004702f3
    SUB ESP,0x4                         ; 004702f4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004702f7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004702fb
    PUSH 0x61e5af                       ; 004702ff | = "rb"
    PUSH EDI                            ; 00470304
    PUSH 0x61e5b2                       ; 00470305 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0047030a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0047030f
    MOV ESI,EAX                         ; 00470312
    TEST EAX,EAX                        ; 00470314
    JZ 0x00470466                       ; 00470316
        ;   XREF to: 00470466 (CONDITIONAL_JUMP)  ; LAB_00470466
    PUSH 0xad                           ; 0047031c
        ;   Label: LAB_0047031c
    PUSH 0x61e5f1                       ; 00470321 | = "..\\core\\dfilter.cpp"
    PUSH ESI                            ; 00470326
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00470327
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047032c
    PUSH EDI                            ; 0047032f
    PUSH 0x61e605                       ; 00470330 | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00470335
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0047033a
    MOV dword ptr [ESP],EAX             ; 0047033d
    MOV EDX,EAX                         ; 00470340
    FILD dword ptr [ESP]                ; 00470342
    FSQRT                               ; 00470345
    CALL crt_math.c_round_FUN_005fe6b0  ; 00470347
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,EDX                         ; 0047034c
    FISTP dword ptr [EBX]               ; 0047034e
    SAR EDX,0x1f                        ; 00470350
    MOV ECX,dword ptr [EBX]             ; 00470353
    IDIV ECX                            ; 00470355
    MOV dword ptr [EBX + 0x4],EAX       ; 00470357
    MOV EAX,dword ptr [EBX]             ; 0047035a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0047035c
    CMP EAX,ESI                         ; 0047035f
    JZ 0x00470389                       ; 00470361
        ;   XREF to: 00470389 (CONDITIONAL_JUMP)  ; LAB_00470389
    PUSH ESI                            ; 00470363
    MOV ECX,dword ptr [EBX]             ; 00470364
    PUSH ECX                            ; 00470366
    MOV EBP,0x61e609                    ; 00470367 | = "..\\core\\dfilter.cpp"
    MOV EAX,0xb7                        ; 0047036c
    PUSH 0x61e61d                       ; 00470371 | = "CDemonFilter::load - Non-square filte..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00470376 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0047037c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470381
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00470386
    MOV ESI,dword ptr [EBX]             ; 00470389
        ;   Label: LAB_00470389
    CMP ESI,0x40                        ; 0047038b
    JGE 0x0047048f                      ; 0047038e
        ;   XREF to: 0047048f (CONDITIONAL_JUMP)  ; LAB_0047048f
    MOV ECX,dword ptr [EBX]             ; 00470394
        ;   Label: LAB_00470394
    PUSH ECX                            ; 00470396
    MOV EAX,0x61e64a                    ; 00470397 | = "..\\core\\dfilter.cpp"
    MOV EDX,0xb9                        ; 0047039c
    PUSH 0x61e65e                       ; 004703a1 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x02f0ca48],EAX                ; 004703a6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004703ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004703b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004703b6
    MOV ESI,dword ptr [EBX + 0x4]       ; 004703b9
        ;   Label: LAB_004703b9
    CMP ESI,0x40                        ; 004703bc
    JGE 0x004704a0                      ; 004703bf
        ;   XREF to: 004704a0 (CONDITIONAL_JUMP)  ; LAB_004704a0
    MOV ECX,dword ptr [EBX + 0x4]       ; 004703c5
        ;   Label: LAB_004703c5
    PUSH ECX                            ; 004703c8
    MOV EAX,0x61e686                    ; 004703c9 | = "..\\core\\dfilter.cpp"
    MOV EDX,0xbc                        ; 004703ce
    PUSH 0x61e69a                       ; 004703d3 | = "CDemonFilter::load - Bad filter size %d"
    MOV [0x02f0ca48],EAX                ; 004703d8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004703dd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004703e3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004703e8
    PUSH EBX                            ; 004703eb
        ;   Label: LAB_004703eb
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 ; 004703ec
        ;   XREF to: 00470260 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004703f1
    PUSH 0x61e6c2                       ; 004703f4 | = "rb"
    PUSH EDI                            ; 004703f9
    PUSH 0x61e6c5                       ; 004703fa | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004703ff
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00470404
    MOV ESI,EAX                         ; 00470407
    TEST EAX,EAX                        ; 00470409
    JZ 0x004704b1                       ; 0047040b
        ;   XREF to: 004704b1 (CONDITIONAL_JUMP)  ; LAB_004704b1
    PUSH ESI                            ; 00470411
        ;   Label: LAB_00470411
    MOV EDX,dword ptr [EBX + 0x4]       ; 00470412
    PUSH EDX                            ; 00470415
    MOV ECX,dword ptr [EBX]             ; 00470416
    PUSH ECX                            ; 00470418
    MOV EBP,dword ptr [EBX + 0x48]      ; 00470419
    PUSH EBP                            ; 0047041c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0047041d
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00470422
    PUSH 0xce                           ; 00470425
    PUSH 0x61e6ff                       ; 0047042a | = "..\\core\\dfilter.cpp"
    PUSH ESI                            ; 0047042f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00470430
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00470435
    XOR ECX,ECX                         ; 00470438
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047043a
        ;   Label: LAB_0047043a
    MOV EDX,dword ptr [EBX]             ; 0047043d
    IMUL EDX,EAX                        ; 0047043f
    CMP ECX,EDX                         ; 00470442
    JGE 0x004704d8                      ; 00470444
        ;   XREF to: 004704d8 (CONDITIONAL_JUMP)  ; LAB_004704d8
    MOV ESI,dword ptr [EBX + 0x48]      ; 0047044a
    XOR EDX,EDX                         ; 0047044d
    MOV DL,byte ptr [ECX + ESI*0x1]     ; 0047044f
    MOV EAX,EDX                         ; 00470452
    SAR EDX,0x1f                        ; 00470454
    SHL EDX,0x2                         ; 00470457
    SBB EAX,EDX                         ; 0047045a
    SAR EAX,0x2                         ; 0047045c
    INC ECX                             ; 0047045f
    MOV byte ptr [ECX + ESI*0x1 + -0x1],AL ; 00470460
    JMP 0x0047043a                      ; 00470464
        ;   XREF to: 0047043a (UNCONDITIONAL_JUMP)  ; LAB_0047043a
    PUSH EDI                            ; 00470466
        ;   Label: LAB_00470466
    MOV EDX,0x61e5b6                    ; 00470467 | = "..\\core\\dfilter.cpp"
    MOV ECX,0xab                        ; 0047046c
    PUSH 0x61e5ca                       ; 00470471 | = "CDemonFilter::load - Bad filename : %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 00470476 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0047047c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470482
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00470487
    JMP 0x0047031c                      ; 0047048a
        ;   XREF to: 0047031c (UNCONDITIONAL_JUMP)  ; LAB_0047031c
    CMP ESI,0x100                       ; 0047048f
        ;   Label: LAB_0047048f
    JG 0x00470394                       ; 00470495
        ;   XREF to: 00470394 (CONDITIONAL_JUMP)  ; LAB_00470394
    JMP 0x004703b9                      ; 0047049b
        ;   XREF to: 004703b9 (UNCONDITIONAL_JUMP)  ; LAB_004703b9
    CMP ESI,0x100                       ; 004704a0
        ;   Label: LAB_004704a0
    JG 0x004703c5                       ; 004704a6
        ;   XREF to: 004703c5 (CONDITIONAL_JUMP)  ; LAB_004703c5
    JMP 0x004703eb                      ; 004704ac
        ;   XREF to: 004703eb (UNCONDITIONAL_JUMP)  ; LAB_004703eb
    MOV EBP,0x61e6c9                    ; 004704b1 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_004704b1
    MOV EAX,0xc6                        ; 004704b6
    PUSH 0x61e6dd                       ; 004704bb | = "CDemonFilter::load - Bad filename"
    MOV dword ptr [0x02f0ca48],EBP      ; 004704c0 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004704c6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004704cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004704d0
    JMP 0x00470411                      ; 004704d3
        ;   XREF to: 00470411 (UNCONDITIONAL_JUMP)  ; LAB_00470411
    ADD EBX,0x8                         ; 004704d8
        ;   Label: LAB_004704d8
    MOV ESI,EDI                         ; 004704db
    MOV EDI,EBX                         ; 004704dd
    PUSH EDI                            ; 004704df
    MOV AL,byte ptr [ESI]               ; 004704e0
        ;   Label: LAB_004704e0
    MOV byte ptr [EDI],AL               ; 004704e2
    CMP AL,0x0                          ; 004704e4
    JZ 0x004704f8                       ; 004704e6
        ;   XREF to: 004704f8 (CONDITIONAL_JUMP)  ; LAB_004704f8
    MOV AL,byte ptr [ESI + 0x1]         ; 004704e8
    ADD ESI,0x2                         ; 004704eb
    MOV byte ptr [EDI + 0x1],AL         ; 004704ee
    ADD EDI,0x2                         ; 004704f1
    CMP AL,0x0                          ; 004704f4
    JNZ 0x004704e0                      ; 004704f6
        ;   XREF to: 004704e0 (CONDITIONAL_JUMP)  ; LAB_004704e0
    POP EDI                             ; 004704f8
        ;   Label: LAB_004704f8
    ADD ESP,0x4                         ; 004704f9
    POP EBP                             ; 004704fc
    POP EDI                             ; 004704fd
    POP ESI                             ; 004704fe
    POP EBX                             ; 004704ff
    RET                                 ; 00470500

