; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined1       Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[79]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a5e1
;   core_ammobox.cpp_CAmmoBox_FUN_00411690 at 004116b5
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 0041321d
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004156c1
;   core_batman.cpp_CBatman_FUN_00417660 at 00417938
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416aee
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 0041897f
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610 at 00419712
;   core_boneguy.cpp_CBoneGuy_FUN_0041cc40 at 0041cee9
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c5f7
;   ... and 69 more
;
; Referenced Globals:
;   TerminatedCString s_engine_console_cpp_00618de9
;   TerminatedCString s_at_00618dff
;   TerminatedCString s_s_00618e02
;   TerminatedCString s_engine_console_cpp_00618e05
;   TerminatedCString s_console_txt_0066e8e8
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_console.cpp_CConsole_writeChar_FUN_00441970
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441890
        ;   Label: engine_console.cpp_CConsole_printf_FUN_00441890
    PUSH ESI                            ; 00441891
    PUSH EDI                            ; 00441892
    PUSH EBP                            ; 00441893
    SUB ESP,0x1004                      ; 00441894
    MOV EBP,dword ptr [ESP + 0x1018]    ; 0044189a
    LEA EAX,[ESP + 0x1020]              ; 004418a1
    MOV dword ptr [ESP + 0x1000],EAX    ; 004418a8
    LEA EAX,[ESP + 0x1000]              ; 004418af
    PUSH EAX                            ; 004418b6
    MOV EDX,dword ptr [ESP + 0x1020]    ; 004418b7
    PUSH EDX                            ; 004418be
    LEA EAX,[ESP + 0x8]                 ; 004418bf
    PUSH EAX                            ; 004418c3
    LEA EDI,[ESP + 0xc]                 ; 004418c4
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004418c8
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 004418cd
    XOR ECX,ECX                         ; 004418d0
    XOR EBX,EBX                         ; 004418d2
    MOV dword ptr [ESP + 0x1000],ECX    ; 004418d4
    SUB ECX,ECX                         ; 004418db
    DEC ECX                             ; 004418dd
    XOR EAX,EAX                         ; 004418de
    SCASB.REPNE ES:EDI                  ; 004418e0
    NOT ECX                             ; 004418e2
    DEC ECX                             ; 004418e4
    MOV ESI,ECX                         ; 004418e5
    TEST ECX,ECX                        ; 004418e7
    JLE 0x00441900                      ; 004418e9
        ;   XREF to: 00441900 (CONDITIONAL_JUMP)  ; LAB_00441900
    XOR EAX,EAX                         ; 004418eb
        ;   Label: LAB_004418eb
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 004418ed
    PUSH EAX                            ; 004418f0
    PUSH EBP                            ; 004418f1
    INC EBX                             ; 004418f2
    CALL engine_console.cpp_CConsole_writeChar_FUN_00441970 ; 004418f3
        ;   XREF to: 00441970 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character)
    ADD ESP,0x8                         ; 004418f8
    CMP EBX,ESI                         ; 004418fb
    JL 0x004418eb                       ; 004418fd
        ;   XREF to: 004418eb (CONDITIONAL_JUMP)  ; LAB_004418eb
    NOP                                 ; 004418ff
    PUSH 0x0                            ; 00441900
        ;   Label: LAB_00441900
    PUSH EBP                            ; 00441902
    CALL engine_console.cpp_CConsole_writeChar_FUN_00441970 ; 00441903
        ;   XREF to: 00441970 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character)
    MOV EBX,dword ptr [EBP]             ; 00441908
    ADD ESP,0x8                         ; 0044190b
    TEST EBX,EBX                        ; 0044190e
    JNZ 0x0044191d                      ; 00441910
        ;   XREF to: 0044191d (CONDITIONAL_JUMP)  ; LAB_0044191d
    ADD ESP,0x1004                      ; 00441912
        ;   Label: LAB_00441912
    POP EBP                             ; 00441918
    POP EDI                             ; 00441919
    POP ESI                             ; 0044191a
    POP EBX                             ; 0044191b
    RET                                 ; 0044191c
    PUSH 0x4a                           ; 0044191d
        ;   Label: LAB_0044191d
    PUSH 0x618de9                       ; 0044191f | = "..\\engine\\console.cpp"
    PUSH 0x618dff                       ; 00441924 | = "at"
    PUSH 0x0                            ; 00441929
    PUSH 0x66e8e8                       ; 0044192b | = "console.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00441930
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00441935
    ADD ESP,0x14                        ; 00441937
    TEST EAX,EAX                        ; 0044193a
    JZ 0x00441912                       ; 0044193c
        ;   XREF to: 00441912 (CONDITIONAL_JUMP)  ; LAB_00441912
    MOV EAX,ESP                         ; 0044193e
    PUSH EAX                            ; 00441940
    PUSH 0x618e02                       ; 00441941 | = "%s"
    PUSH EBX                            ; 00441946
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00441947
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044194c
    PUSH 0x4d                           ; 0044194f
    PUSH 0x618e05                       ; 00441951 | = "..\\engine\\console.cpp"
    PUSH EBX                            ; 00441956
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00441957
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0044195c
    ADD ESP,0x1004                      ; 0044195f
    POP EBP                             ; 00441965
    POP EDI                             ; 00441966
    POP ESI                             ; 00441967
    POP EBX                             ; 00441968
    RET                                 ; 00441969

