; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x488]:8  local_488
; undefined8       Stack[-0x480]:8  local_480
; undefined8       Stack[-0x478]:8  local_478
; undefined4       Stack[-0x470]:4  local_470
; undefined        Stack[-0x46c]:1  local_46c
; undefined1       Stack[-0x46b]:1  local_46b
; undefined1       Stack[-0x46a]:1  local_46a
; undefined1       Stack[-0x469]:1  local_469
; undefined        Stack[-0x340]:1  local_340
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527b19
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 00522659
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005229f0 at 00522b65
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526a61
;
; Referenced Globals:
;   TerminatedCString s_anon_005922e5
;   TerminatedCString s_klp_005922e8
;   TerminatedCString s_sound_005922ec
;   TerminatedCString s_sfx_005922f2
;   TerminatedCString s_sound_005922f6
;   TerminatedCString s_rb_005922fc
;   TerminatedCString s_sound_005922ff
;   TerminatedCString s_refDist_f_00592305
;   TerminatedCString s_sound_sndmain_cpp_00592311
;   TerminatedCString s_Reference_distance_speci_00592326
;   TerminatedCString s_sound_sndmain_cpp_0059236b
;   TerminatedCString s_Reference_volume_distanc_00592380
;   TerminatedCString s_minDist_f_005923b9
;   TerminatedCString s_sound_sndmain_cpp_005923c5
;   TerminatedCString s_Minimum_distance_specifi_005923da
;   ... and 28 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_stdio.c_sscanf_FUN_00566b5c
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   crt_string.c_strstr_FUN_00566fe0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521e10
        ;   Label: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
    PUSH ESI                            ; 00521e11
    PUSH EDI                            ; 00521e12
    PUSH EBP                            ; 00521e13
    MOV EBP,ESP                         ; 00521e14
    SUB ESP,0x474                       ; 00521e16
    AND ESP,0xfffffff8                  ; 00521e1c
    FLD double ptr [0x005bea88]         ; 00521e1f | DAT_005bea88
    FLD float ptr [0x005a216c]          ; 00521e25 | FLOAT_005a216c
    FMUL ST1                            ; 00521e2b
    FLD float ptr [0x02dbd370]          ; 00521e2d | g_FLOAT_02dbd370
    FMUL ST2                            ; 00521e33
    FLD float ptr [0x005a2170]          ; 00521e35 | FLOAT_005a2170
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521e3b
    FMULP ST3                           ; 00521e3e
    MOV dword ptr [EAX + 0x124],0x0     ; 00521e40
    PUSH 0x0                            ; 00521e4a
    FXCH                                ; 00521e4c
    FSTP float ptr [EAX + 0x114]        ; 00521e4e
    FSTP float ptr [EAX + 0x118]        ; 00521e54
    FSTP float ptr [EAX + 0x11c]        ; 00521e5a
    LEA EAX,[ESP + 0x354]               ; 00521e60
    PUSH EAX                            ; 00521e67
    PUSH 0x0                            ; 00521e68
    PUSH 0x0                            ; 00521e6a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00521e6c
    PUSH EDX                            ; 00521e6f
    CALL crt_string.c_splitpath_FUN_00566498 ; 00521e70
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00521e75
    PUSH 0x5922e8                       ; 00521e78 | = "klp"
    LEA EAX,[ESP + 0x354]               ; 00521e7d
    PUSH EAX                            ; 00521e84
    PUSH 0x0                            ; 00521e85
    PUSH 0x0                            ; 00521e87
    LEA EAX,[ESP + 0x25c]               ; 00521e89
    PUSH EAX                            ; 00521e90
    CALL crt_file.c_makepath_FUN_0056626c ; 00521e91
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_0056626c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00521e96
    LEA EAX,[ESP + 0x24c]               ; 00521e99
    PUSH EAX                            ; 00521ea0
    PUSH 0x5922ec                       ; 00521ea1 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00521ea6
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00521eab
    TEST EAX,EAX                        ; 00521eae
    JLE 0x00521ebf                      ; 00521eb0
        ;   XREF to: 00521ebf (CONDITIONAL_JUMP)  ; LAB_00521ebf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521eb2
    MOV dword ptr [EAX + 0x124],0x1     ; 00521eb5
    PUSH 0x5922f2                       ; 00521ebf | = "sfx"
        ;   Label: LAB_00521ebf
    LEA EAX,[ESP + 0x354]               ; 00521ec4
    PUSH EAX                            ; 00521ecb
    PUSH 0x0                            ; 00521ecc
    PUSH 0x0                            ; 00521ece
    LEA EAX,[ESP + 0x158]               ; 00521ed0
    PUSH EAX                            ; 00521ed7
    CALL crt_file.c_makepath_FUN_0056626c ; 00521ed8
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_0056626c(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00521edd
    LEA EAX,[ESP + 0x148]               ; 00521ee0
    PUSH EAX                            ; 00521ee7
    PUSH 0x5922f6                       ; 00521ee8 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00521eed
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    MOV EBX,EAX                         ; 00521ef2
    ADD ESP,0x8                         ; 00521ef4
    TEST EAX,EAX                        ; 00521ef7
    JG 0x00521f02                       ; 00521ef9
        ;   XREF to: 00521f02 (CONDITIONAL_JUMP)  ; LAB_00521f02
    MOV ESP,EBP                         ; 00521efb
        ;   Label: LAB_00521efb
    POP EBP                             ; 00521efd
    POP EDI                             ; 00521efe
    POP ESI                             ; 00521eff
    POP EBX                             ; 00521f00
    RET                                 ; 00521f01
    PUSH 0x5922fc                       ; 00521f02 | = "rb"
        ;   Label: LAB_00521f02
    LEA EAX,[ESP + 0x14c]               ; 00521f07
    PUSH EAX                            ; 00521f0e
    PUSH 0x5922ff                       ; 00521f0f | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00521f14
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00521f19
    MOV dword ptr [ESP + 0x468],EAX     ; 00521f1c
    TEST EAX,EAX                        ; 00521f23
    JZ 0x00521efb                       ; 00521f25
        ;   XREF to: 00521efb (CONDITIONAL_JUMP)  ; LAB_00521efb
    PUSH EAX                            ; 00521f27
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00521f28
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 00521f2d
    ADD EBX,EAX                         ; 00521f30
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521f32
    ADD EAX,0x11c                       ; 00521f35
    XOR ECX,ECX                         ; 00521f3a
    MOV dword ptr [ESP + 0x45c],EAX     ; 00521f3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521f43
    MOV dword ptr [ESP + 0x464],EBX     ; 00521f46
    ADD EAX,0x118                       ; 00521f4d
    MOV dword ptr [ESP + 0x470],ECX     ; 00521f52
    MOV dword ptr [ESP + 0x460],EAX     ; 00521f59
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521f60
    MOV dword ptr [ESP + 0x46c],ECX     ; 00521f63
    ADD EAX,0x114                       ; 00521f6a
    MOV dword ptr [ESP + 0x450],ECX     ; 00521f6f
    MOV dword ptr [ESP + 0x458],EAX     ; 00521f76
    MOV EDI,dword ptr [ESP + 0x468]     ; 00521f7d
        ;   Label: LAB_00521f7d
    PUSH EDI                            ; 00521f84
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00521f85
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 00521f8a
    CMP EAX,dword ptr [ESP + 0x464]     ; 00521f8d
    JGE 0x00522464                      ; 00521f94
        ;   XREF to: 00522464 (CONDITIONAL_JUMP)  ; LAB_00522464
    PUSH EDI                            ; 00521f9a
    MOV EBX,dword ptr [ESP + 0x454]     ; 00521f9b
    PUSH 0x12c                          ; 00521fa2
    LEA EAX,[ESP + 0x24]                ; 00521fa7
    INC EBX                             ; 00521fab
    PUSH EAX                            ; 00521fac
    MOV dword ptr [ESP + 0x45c],EBX     ; 00521fad
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00521fb4
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00521fb9
    TEST EAX,EAX                        ; 00521fbc
    JZ 0x00522464                       ; 00521fbe
        ;   XREF to: 00522464 (CONDITIONAL_JUMP)  ; LAB_00522464
    PUSH 0x5922e5                       ; 00521fc4 | = "//"
    LEA EBX,[ESP + 0x20]                ; 00521fc9
    PUSH EBX                            ; 00521fcd
    CALL crt_string.c_strstr_FUN_00566fe0 ; 00521fce
        ;   XREF to: 00566fe0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_00566fe0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 00521fd3
    TEST EAX,EAX                        ; 00521fd6
    JZ 0x00521fdd                       ; 00521fd8
        ;   XREF to: 00521fdd (CONDITIONAL_JUMP)  ; LAB_00521fdd
    MOV byte ptr [EAX],0x0              ; 00521fda
    MOV ESI,EBX                         ; 00521fdd
        ;   Label: LAB_00521fdd
    XOR DL,DL                           ; 00521fdf
    MOV AL,byte ptr [ESI]               ; 00521fe1
        ;   Label: LAB_00521fe1
    CMP AL,DL                           ; 00521fe3
    JZ 0x00521ff9                       ; 00521fe5
        ;   XREF to: 00521ff9 (CONDITIONAL_JUMP)  ; LAB_00521ff9
    CMP AL,0x0                          ; 00521fe7
    JZ 0x00521ff7                       ; 00521fe9
        ;   XREF to: 00521ff7 (CONDITIONAL_JUMP)  ; LAB_00521ff7
    INC ESI                             ; 00521feb
    MOV AL,byte ptr [ESI]               ; 00521fec
    CMP AL,DL                           ; 00521fee
    JZ 0x00521ff9                       ; 00521ff0
        ;   XREF to: 00521ff9 (CONDITIONAL_JUMP)  ; LAB_00521ff9
    INC ESI                             ; 00521ff2
    CMP AL,0x0                          ; 00521ff3
    JNZ 0x00521fe1                      ; 00521ff5
        ;   XREF to: 00521fe1 (CONDITIONAL_JUMP)  ; LAB_00521fe1
    SUB ESI,ESI                         ; 00521ff7
        ;   Label: LAB_00521ff7
    MOV EAX,ESI                         ; 00521ff9
        ;   Label: LAB_00521ff9
    CMP ESI,EBX                         ; 00521ffb
    JBE 0x00522013                      ; 00521ffd
        ;   XREF to: 00522013 (CONDITIONAL_JUMP)  ; LAB_00522013
    MOV CL,byte ptr [EAX + -0x1]        ; 00521fff
        ;   Label: LAB_00521fff
    INC CL                              ; 00522002
    AND ECX,0xff                        ; 00522004
    TEST byte ptr [ECX + 0x5c168c],0x2  ; 0052200a | g_CharacterClassificationTable
    JNZ 0x00522044                      ; 00522011
        ;   XREF to: 00522044 (CONDITIONAL_JUMP)  ; LAB_00522044
    LEA ESI,[EBX + 0x1]                 ; 00522013
        ;   Label: LAB_00522013
    MOV byte ptr [EAX],0x0              ; 00522016
    MOV AL,byte ptr [EBX]               ; 00522019
        ;   Label: LAB_00522019
    INC AL                              ; 0052201b
    AND EAX,0xff                        ; 0052201d
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 00522022 | g_CharacterClassificationTable
    JZ 0x0052204b                       ; 00522029
        ;   XREF to: 0052204b (CONDITIONAL_JUMP)  ; LAB_0052204b
    MOV EDI,EBX                         ; 0052202b
    SUB ECX,ECX                         ; 0052202d
    DEC ECX                             ; 0052202f
    XOR EAX,EAX                         ; 00522030
    SCASB.REPNE ES:EDI                  ; 00522032
    NOT ECX                             ; 00522034
    DEC ECX                             ; 00522036
    PUSH ECX                            ; 00522037
    PUSH ESI                            ; 00522038
    PUSH EBX                            ; 00522039
    CALL crt_string.c_memmove_FUN_00566170 ; 0052203a
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0052203f
    JMP 0x00522019                      ; 00522042
        ;   XREF to: 00522019 (UNCONDITIONAL_JUMP)  ; LAB_00522019
    DEC EAX                             ; 00522044
        ;   Label: LAB_00522044
    CMP EAX,EBX                         ; 00522045
    JA 0x00521fff                       ; 00522047
        ;   XREF to: 00521fff (CONDITIONAL_JUMP)  ; LAB_00521fff
    JMP 0x00522013                      ; 00522049
        ;   XREF to: 00522013 (UNCONDITIONAL_JUMP)  ; LAB_00522013
    CMP byte ptr [ESP + 0x1c],0x0       ; 0052204b
        ;   Label: LAB_0052204b
    JZ 0x00521f7d                       ; 00522050
        ;   XREF to: 00521f7d (CONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EDI,dword ptr [ESP + 0x458]     ; 00522056
    PUSH EDI                            ; 0052205d
    PUSH 0x592305                       ; 0052205e | = "refDist =%f"
    LEA EAX,[ESP + 0x24]                ; 00522063
    PUSH EAX                            ; 00522067
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00522068
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 0052206d
    CMP EAX,0x1                         ; 00522070
    JNZ 0x00522142                      ; 00522073
        ;   XREF to: 00522142 (CONDITIONAL_JUMP)  ; LAB_00522142
    MOV EBX,dword ptr [ESP + 0x46c]     ; 00522079
    TEST EBX,EBX                        ; 00522080
    JZ 0x005220b8                       ; 00522082
        ;   XREF to: 005220b8 (CONDITIONAL_JUMP)  ; LAB_005220b8
    MOV EAX,dword ptr [ESP + 0x450]     ; 00522084
    PUSH EAX                            ; 0052208b
    PUSH EBX                            ; 0052208c
    LEA EAX,[ESP + 0x150]               ; 0052208d
    PUSH EAX                            ; 00522094
    MOV ESI,0x592311                    ; 00522095 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x292                       ; 0052209a
    PUSH 0x592326                       ; 0052209f | = "Reference distance specified in %s on..."
    MOV dword ptr [0x01cc4800],ESI      ; 005220a4 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 005220aa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005220b0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 005220b5
    MOV EAX,dword ptr [ESP + 0x450]     ; 005220b8
        ;   Label: LAB_005220b8
    MOV dword ptr [ESP + 0x46c],EAX     ; 005220bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005220c6
    FLD float ptr [EAX + 0x114]         ; 005220c9
    FST double ptr [ESP]                ; 005220cf
    FCOMP double ptr [0x0059264e]       ; 005220d2 | DOUBLE_0059264e
    FNSTSW AX                           ; 005220d8
    SAHF                                ; 005220da
    JNC 0x0052211a                      ; 005220db
        ;   XREF to: 0052211a (CONDITIONAL_JUMP)  ; LAB_0052211a
    MOV ESI,dword ptr [ESP + 0x450]     ; 005220dd
    PUSH ESI                            ; 005220e4
    LEA EAX,[ESP + 0x14c]               ; 005220e5
    PUSH EAX                            ; 005220ec
    MOV EDI,dword ptr [ESP + 0xc]       ; 005220ed
    PUSH EDI                            ; 005220f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005220f2
    PUSH EAX                            ; 005220f6
    MOV ECX,0x59236b                    ; 005220f7 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x294                       ; 005220fc
    PUSH 0x592380                       ; 00522101 | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01cc4800],ECX      ; 00522106 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 0052210c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00522112
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x14                        ; 00522117
    CMP dword ptr [ESP + 0x470],0x0     ; 0052211a
        ;   Label: LAB_0052211a
    JNZ 0x00521f7d                      ; 00522122
        ;   XREF to: 00521f7d (CONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522128
    FLD float ptr [EAX + 0x114]         ; 0052212b
    FDIV float ptr [0x005a2168]         ; 00522131 | FLOAT_005a2168
    FSTP float ptr [EAX + 0x118]        ; 00522137
    JMP 0x00521f7d                      ; 0052213d
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EAX,dword ptr [ESP + 0x460]     ; 00522142
        ;   Label: LAB_00522142
    PUSH EAX                            ; 00522149
    PUSH 0x5923b9                       ; 0052214a | = "minDist =%f"
    LEA EAX,[ESP + 0x24]                ; 0052214f
    PUSH EAX                            ; 00522153
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00522154
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00522159
    CMP EAX,0x1                         ; 0052215c
    JNZ 0x0052220f                      ; 0052215f
        ;   XREF to: 0052220f (CONDITIONAL_JUMP)  ; LAB_0052220f
    MOV EDI,dword ptr [ESP + 0x470]     ; 00522165
    TEST EDI,EDI                        ; 0052216c
    JZ 0x005221a3                       ; 0052216e
        ;   XREF to: 005221a3 (CONDITIONAL_JUMP)  ; LAB_005221a3
    MOV ECX,dword ptr [ESP + 0x450]     ; 00522170
    PUSH ECX                            ; 00522177
    MOV EAX,0x5923c5                    ; 00522178 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0052217d
    MOV [0x01cc4800],EAX                ; 0052217e | g_CurrentFilename
    LEA EAX,[ESP + 0x150]               ; 00522183
    PUSH EAX                            ; 0052218a
    MOV EDX,0x29a                       ; 0052218b
    PUSH 0x5923da                       ; 00522190 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01cc4804],EDX      ; 00522195 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0052219b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 005221a0
    MOV EAX,dword ptr [ESP + 0x450]     ; 005221a3
        ;   Label: LAB_005221a3
    MOV dword ptr [ESP + 0x470],EAX     ; 005221aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 005221b1
    FLD float ptr [EAX + 0x118]         ; 005221b4
    FST double ptr [ESP + 0x8]          ; 005221ba
    FCOMP double ptr [0x0059264e]       ; 005221be | DOUBLE_0059264e
    FNSTSW AX                           ; 005221c4
    SAHF                                ; 005221c6
    JNC 0x00521f7d                      ; 005221c7
        ;   XREF to: 00521f7d (CONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EAX,dword ptr [ESP + 0x450]     ; 005221cd
    PUSH EAX                            ; 005221d4
    LEA EAX,[ESP + 0x14c]               ; 005221d5
    PUSH EAX                            ; 005221dc
    MOV EDX,dword ptr [ESP + 0x14]      ; 005221dd
    PUSH EDX                            ; 005221e1
    MOV ECX,dword ptr [ESP + 0x14]      ; 005221e2
    PUSH ECX                            ; 005221e6
    MOV ESI,0x59241d                    ; 005221e7 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x29c                       ; 005221ec
    PUSH 0x592432                       ; 005221f1 | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01cc4800],ESI      ; 005221f6 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 005221fc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00522202
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x14                        ; 00522207
    JMP 0x00521f7d                      ; 0052220a
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EDX,dword ptr [ESP + 0x45c]     ; 0052220f
        ;   Label: LAB_0052220f
    PUSH EDX                            ; 00522216
    PUSH 0x59246b                       ; 00522217 | = "maxDist =%f"
    LEA EAX,[ESP + 0x24]                ; 0052221c
    PUSH EAX                            ; 00522220
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00522221
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00522226
    CMP EAX,0x1                         ; 00522229
    JZ 0x00521f7d                       ; 0052222c
        ;   XREF to: 00521f7d (CONDITIONAL_JUMP)  ; LAB_00521f7d
    LEA EAX,[ESP + 0x18]                ; 00522232
    PUSH EAX                            ; 00522236
    PUSH 0x592477                       ; 00522237 | = "maxVol =%f"
    LEA EAX,[ESP + 0x24]                ; 0052223c
    PUSH EAX                            ; 00522240
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00522241
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 00522246
    CMP EAX,0x1                         ; 00522249
    JNZ 0x00522345                      ; 0052224c
        ;   XREF to: 00522345 (CONDITIONAL_JUMP)  ; LAB_00522345
    CMP dword ptr [ESP + 0x46c],0x0     ; 00522252
    JNZ 0x0052228f                      ; 0052225a
        ;   XREF to: 0052228f (CONDITIONAL_JUMP)  ; LAB_0052228f
    MOV EAX,dword ptr [ESP + 0x450]     ; 0052225c
    PUSH EAX                            ; 00522263
    LEA EAX,[ESP + 0x14c]               ; 00522264
    PUSH EAX                            ; 0052226b
    MOV ESI,0x592482                    ; 0052226c | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x2a6                       ; 00522271
    PUSH 0x592497                       ; 00522276 | = "%s specified maxVol on line %d withou..."
    MOV dword ptr [0x01cc4800],ESI      ; 0052227b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00522281 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00522287
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 0052228c
    MOV EDX,dword ptr [ESP + 0x470]     ; 0052228f
        ;   Label: LAB_0052228f
    TEST EDX,EDX                        ; 00522296
    JZ 0x005222ce                       ; 00522298
        ;   XREF to: 005222ce (CONDITIONAL_JUMP)  ; LAB_005222ce
    MOV ESI,dword ptr [ESP + 0x450]     ; 0052229a
    PUSH ESI                            ; 005222a1
    PUSH EDX                            ; 005222a2
    LEA EAX,[ESP + 0x150]               ; 005222a3
    PUSH EAX                            ; 005222aa
    MOV ECX,0x5924e2                    ; 005222ab | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2a7                       ; 005222b0
    PUSH 0x5924f7                       ; 005222b5 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01cc4800],ECX      ; 005222ba | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 005222c0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005222c6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 005222cb
    FLD float ptr [ESP + 0x18]          ; 005222ce
        ;   Label: LAB_005222ce
    MOV EAX,dword ptr [ESP + 0x450]     ; 005222d2
    FST double ptr [ESP + 0x10]         ; 005222d9
    MOV dword ptr [ESP + 0x470],EAX     ; 005222dd
    FCOMP double ptr [0x00592646]       ; 005222e4 | DOUBLE_00592646
    FNSTSW AX                           ; 005222ea
    SAHF                                ; 005222ec
    JC 0x00522307                       ; 005222ed
        ;   XREF to: 00522307 (CONDITIONAL_JUMP)  ; LAB_00522307
    MOV EAX,dword ptr [EBP + 0x14]      ; 005222ef
        ;   Label: LAB_005222ef
    FLD float ptr [EAX + 0x114]         ; 005222f2
    FDIV float ptr [ESP + 0x18]         ; 005222f8
    FSTP float ptr [EAX + 0x118]        ; 005222fc
    JMP 0x00521f7d                      ; 00522302
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV ECX,dword ptr [ESP + 0x450]     ; 00522307
        ;   Label: LAB_00522307
    MOV EAX,0x59253a                    ; 0052230e | = "..\\sound\\sndmain.cpp"
    PUSH ECX                            ; 00522313
    MOV [0x01cc4800],EAX                ; 00522314 | g_CurrentFilename
    LEA EAX,[ESP + 0x14c]               ; 00522319
    PUSH EAX                            ; 00522320
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00522321
    PUSH EBX                            ; 00522325
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00522326
    PUSH ESI                            ; 0052232a
    MOV EDX,0x2a9                       ; 0052232b
    PUSH 0x59254f                       ; 00522330 | = "maxVol %g is too small in %s line %d!"
    MOV dword ptr [0x01cc4804],EDX      ; 00522335 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0052233b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x14                        ; 00522340
    JMP 0x005222ef                      ; 00522343
        ;   XREF to: 005222ef (UNCONDITIONAL_JUMP)  ; LAB_005222ef
    LEA EAX,[ESP + 0x454]               ; 00522345
        ;   Label: LAB_00522345
    PUSH EAX                            ; 0052234c
    PUSH 0x592575                       ; 0052234d | = "length =%d"
    LEA EAX,[ESP + 0x24]                ; 00522352
    PUSH EAX                            ; 00522356
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 00522357
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0xc                         ; 0052235c
    CMP EAX,0x1                         ; 0052235f
    JNZ 0x005223ff                      ; 00522362
        ;   XREF to: 005223ff (CONDITIONAL_JUMP)  ; LAB_005223ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522368
    CMP dword ptr [EAX + 0x110],0x0     ; 0052236b
    JL 0x005223aa                       ; 00522372
        ;   XREF to: 005223aa (CONDITIONAL_JUMP)  ; LAB_005223aa
    MOV ECX,dword ptr [ESP + 0x450]     ; 00522374
    MOV EAX,0x592580                    ; 0052237b | = "..\\sound\\sndmain.cpp"
    PUSH ECX                            ; 00522380
    MOV [0x01cc4800],EAX                ; 00522381 | g_CurrentFilename
    LEA EAX,[ESP + 0x14c]               ; 00522386
    PUSH EAX                            ; 0052238d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052238e
    PUSH EBX                            ; 00522391
    MOV EDX,0x2b0                       ; 00522392
    PUSH 0x592595                       ; 00522397 | = "Length for %s already known, then spe..."
    MOV dword ptr [0x01cc4804],EDX      ; 0052239c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005223a2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 005223a7
    MOV ESI,dword ptr [ESP + 0x454]     ; 005223aa
        ;   Label: LAB_005223aa
    TEST ESI,ESI                        ; 005223b1
    JLE 0x005223ca                      ; 005223b3
        ;   XREF to: 005223ca (CONDITIONAL_JUMP)  ; LAB_005223ca
    MOV ECX,dword ptr [EBP + 0x14]      ; 005223b5
        ;   Label: LAB_005223b5
    MOV EAX,dword ptr [ESP + 0x454]     ; 005223b8
    MOV dword ptr [ECX + 0x110],EAX     ; 005223bf
    JMP 0x00521f7d                      ; 005223c5
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV EDX,dword ptr [ESP + 0x450]     ; 005223ca
        ;   Label: LAB_005223ca
    MOV EAX,0x2b1                       ; 005223d1
    PUSH EDX                            ; 005223d6
    MOV [0x01cc4804],EAX                ; 005223d7 | g_CurrentLineNumber
    LEA EAX,[ESP + 0x14c]               ; 005223dc
    PUSH EAX                            ; 005223e3
    PUSH ESI                            ; 005223e4
    MOV EDI,0x5925d5                    ; 005223e5 | = "..\\sound\\sndmain.cpp"
    PUSH 0x5925ea                       ; 005223ea | = "Invalid length %d in %s line %d"
    MOV dword ptr [0x01cc4800],EDI      ; 005223ef | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005223f5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 005223fa
    JMP 0x005223b5                      ; 005223fd
        ;   XREF to: 005223b5 (UNCONDITIONAL_JUMP)  ; LAB_005223b5
    PUSH 0x59260a                       ; 005223ff | = "loop"
        ;   Label: LAB_005223ff
    LEA EAX,[ESP + 0x20]                ; 00522404
    PUSH EAX                            ; 00522408
    CALL crt_string.c__stricmp_FUN_00564520 ; 00522409
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052240e
    TEST EAX,EAX                        ; 00522411
    JNZ 0x00522427                      ; 00522413
        ;   XREF to: 00522427 (CONDITIONAL_JUMP)  ; LAB_00522427
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522415
    MOV dword ptr [EAX + 0x124],0x1     ; 00522418
    JMP 0x00521f7d                      ; 00522422
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    LEA EAX,[ESP + 0x1c]                ; 00522427
        ;   Label: LAB_00522427
    PUSH EAX                            ; 0052242b
    MOV ESI,dword ptr [ESP + 0x454]     ; 0052242c
    PUSH ESI                            ; 00522433
    LEA EAX,[ESP + 0x150]               ; 00522434
    PUSH EAX                            ; 0052243b
    MOV ECX,0x59260f                    ; 0052243c | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2be                       ; 00522441
    PUSH 0x592624                       ; 00522446 | = "Error parsing %s line %d: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 0052244b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00522451 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00522457
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 0052245c
    JMP 0x00521f7d                      ; 0052245f
        ;   XREF to: 00521f7d (UNCONDITIONAL_JUMP)  ; LAB_00521f7d
    MOV ESI,dword ptr [ESP + 0x468]     ; 00522464
        ;   Label: LAB_00522464
    PUSH ESI                            ; 0052246b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0052246c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00522471
    MOV ESP,EBP                         ; 00522474
    POP EBP                             ; 00522476
    POP EDI                             ; 00522477
    POP ESI                             ; 00522478
    POP EBX                             ; 00522479
    RET                                 ; 0052247a

