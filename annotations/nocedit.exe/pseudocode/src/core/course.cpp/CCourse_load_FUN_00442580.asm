; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_bat.cpp_CBat_setup_FUN_004148a0 at 004148c5
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 004431b5
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e252
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004d17b0 at 004d19c0
;   core_moon.cpp_CMoon_init_FUN_00529ae0 at 00529c92
;
; Referenced Globals:
;   TerminatedCString s_rt_00618f25
;   TerminatedCString s_data_00618f28
;   TerminatedCString s_core_course_cpp_00618f2d
;   TerminatedCString s_CCourse_load_can_t_open__00618f40
;   TerminatedCString s_d_00618f63
;   TerminatedCString s_d_d_00618f67
;   TerminatedCString s_f_f_f_f_f_f_f_00618f6e
;   TerminatedCString s_core_course_cpp_00618f85
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_course.cpp_CCourse_allocMemory_FUN_00442500
;   core_course.cpp_CCourse_free_FUN_004426c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442580
        ;   Label: core_course.cpp_CCourse_load_FUN_00442580
    PUSH ESI                            ; 00442581
    PUSH EDI                            ; 00442582
    PUSH EBP                            ; 00442583
    SUB ESP,0x8                         ; 00442584
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00442587
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044258b
    PUSH EDI                            ; 0044258f
    CALL core_course.cpp_CCourse_free_FUN_004426c0 ; 00442590
        ;   XREF to: 004426c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 00442595
    PUSH 0x618f25                       ; 00442598 | = "rt"
    PUSH EBX                            ; 0044259d
    PUSH 0x618f28                       ; 0044259e | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004425a3
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004425a8
    MOV EBP,EAX                         ; 004425ab
    TEST EAX,EAX                        ; 004425ad
    JZ 0x0044268b                       ; 004425af
        ;   XREF to: 0044268b (CONDITIONAL_JUMP)  ; LAB_0044268b
    MOV EBX,EBP                         ; 004425b5
        ;   Label: LAB_004425b5
    PUSH EBX                            ; 004425b7
        ;   Label: LAB_004425b7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004425b8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004425bd
    TEST EAX,EAX                        ; 004425c0
    JL 0x004425c9                       ; 004425c2
        ;   XREF to: 004425c9 (CONDITIONAL_JUMP)  ; LAB_004425c9
    CMP EAX,0xa                         ; 004425c4
    JNZ 0x004425b7                      ; 004425c7
        ;   XREF to: 004425b7 (CONDITIONAL_JUMP)  ; LAB_004425b7
    MOV EAX,ESP                         ; 004425c9
        ;   Label: LAB_004425c9
    PUSH EAX                            ; 004425cb
    PUSH 0x618f63                       ; 004425cc | = "%d\n"
    PUSH EBP                            ; 004425d1
    MOV EBX,EBP                         ; 004425d2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004425d4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004425d9
    PUSH EBX                            ; 004425dc
        ;   Label: LAB_004425dc
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004425dd
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004425e2
    TEST EAX,EAX                        ; 004425e5
    JL 0x004425ee                       ; 004425e7
        ;   XREF to: 004425ee (CONDITIONAL_JUMP)  ; LAB_004425ee
    CMP EAX,0xa                         ; 004425e9
    JNZ 0x004425dc                      ; 004425ec
        ;   XREF to: 004425dc (CONDITIONAL_JUMP)  ; LAB_004425dc
    LEA EAX,[EDI + 0x8]                 ; 004425ee
        ;   Label: LAB_004425ee
    PUSH EAX                            ; 004425f1
    LEA EAX,[ESP + 0x8]                 ; 004425f2
    PUSH EAX                            ; 004425f6
    PUSH 0x618f67                       ; 004425f7 | = "%d,%d\n"
    PUSH EBP                            ; 004425fc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004425fd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00442602
    MOV EBX,dword ptr [ESP + 0x4]       ; 00442605
    PUSH EBX                            ; 00442609
    PUSH EDI                            ; 0044260a
    CALL core_course.cpp_CCourse_allocMemory_FUN_00442500 ; 0044260b
        ;   XREF to: 00442500 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_allocMemory_FUN_00442500(CCourse * this_ptr)
    MOV EBX,EBP                         ; 00442610
    ADD ESP,0x8                         ; 00442612
    PUSH EBX                            ; 00442615
        ;   Label: LAB_00442615
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00442616
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0044261b
    TEST EAX,EAX                        ; 0044261e
    JL 0x00442627                       ; 00442620
        ;   XREF to: 00442627 (CONDITIONAL_JUMP)  ; LAB_00442627
    CMP EAX,0xa                         ; 00442622
    JNZ 0x00442615                      ; 00442625
        ;   XREF to: 00442615 (CONDITIONAL_JUMP)  ; LAB_00442615
    MOV ESI,dword ptr [EDI]             ; 00442627
        ;   Label: LAB_00442627
    XOR EBX,EBX                         ; 00442629
    TEST ESI,ESI                        ; 0044262b
    JLE 0x00442670                      ; 0044262d
        ;   XREF to: 00442670 (CONDITIONAL_JUMP)  ; LAB_00442670
    XOR ESI,ESI                         ; 0044262f
    MOV EAX,dword ptr [EDI + 0x4]       ; 00442631
        ;   Label: LAB_00442631
    ADD EAX,ESI                         ; 00442634
    LEA EDX,[EAX + 0x18]                ; 00442636
    PUSH EDX                            ; 00442639
    LEA EDX,[EAX + 0x14]                ; 0044263a
    PUSH EDX                            ; 0044263d
    LEA EDX,[EAX + 0x10]                ; 0044263e
    PUSH EDX                            ; 00442641
    LEA EDX,[EAX + 0xc]                 ; 00442642
    PUSH EDX                            ; 00442645
    LEA EDX,[EAX + 0x8]                 ; 00442646
    PUSH EDX                            ; 00442649
    LEA EDX,[EAX + 0x4]                 ; 0044264a
    PUSH EDX                            ; 0044264d
    PUSH EAX                            ; 0044264e
    PUSH 0x618f6e                       ; 0044264f | = "%f,%f,%f, %f,%f,%f,%f\n"
    PUSH EBP                            ; 00442654
    INC EBX                             ; 00442655
    ADD ESI,0x1c                        ; 00442656
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442659
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EDI]             ; 0044265e
    ADD ESP,0x24                        ; 00442660
    CMP EBX,EAX                         ; 00442663
    JL 0x00442631                       ; 00442665
        ;   XREF to: 00442631 (CONDITIONAL_JUMP)  ; LAB_00442631
    LEA EAX,[EAX]                       ; 00442667
    LEA EDX,[EDX]                       ; 0044266d
    PUSH 0x9e                           ; 00442670
        ;   Label: LAB_00442670
    PUSH 0x618f85                       ; 00442675 | = "..\\core\\course.cpp"
    PUSH EBP                            ; 0044267a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0044267b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00442680
    ADD ESP,0x8                         ; 00442683
    POP EBP                             ; 00442686
    POP EDI                             ; 00442687
    POP ESI                             ; 00442688
    POP EBX                             ; 00442689
    RET                                 ; 0044268a
    PUSH EBX                            ; 0044268b
        ;   Label: LAB_0044268b
    MOV EDX,0x618f2d                    ; 0044268c | = "..\\core\\course.cpp"
    MOV ECX,0x7c                        ; 00442691
    PUSH 0x618f40                       ; 00442696 | = "CCourse::load - can't open data\\%s"
    MOV dword ptr [0x02f0ca48],EDX      ; 0044269b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004426a1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004426a7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004426ac
    JMP 0x004425b5                      ; 004426af
        ;   XREF to: 004425b5 (UNCONDITIONAL_JUMP)  ; LAB_004425b5

