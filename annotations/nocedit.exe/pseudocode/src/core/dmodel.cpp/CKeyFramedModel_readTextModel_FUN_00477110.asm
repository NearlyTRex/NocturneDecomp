; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, FILE * file)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476e79
;
; Referenced Globals:
;   TerminatedCString s_d_0061f3e7
;   TerminatedCString s_core_dmodel_cpp_0061f3eb
;   TerminatedCString s_KFM_file_is_invalid_vers_0061f3fe
;   TerminatedCString s_core_dmodel_cpp_0061f41d
;   TerminatedCString s_KFM_file_is_version_d_th_0061f430
;   TerminatedCString s_d_d_d_d_d_0061f473
;   TerminatedCString s_d_0061f483
;   TerminatedCString s_d_0061f487
;   TerminatedCString s_d_0061f48b
;   TerminatedCString s_d_0061f48f
;   TerminatedCString s_d_d_d_0061f493
;   TerminatedCString s_d_d_0061f49d
;   TerminatedCString s_d_d_d_0061f4a3
;   TerminatedCString s_anon_0061f4ae
;   TerminatedCString s_core_dmodel_cpp_0061f4b0
;   ... and 9 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477110
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
    PUSH ESI                            ; 00477111
    PUSH EDI                            ; 00477112
    PUSH EBP                            ; 00477113
    SUB ESP,0x38                        ; 00477114
    MOV EBP,dword ptr [ESP + 0x50]      ; 00477117
    MOV EDX,0xffffffff                  ; 0047711b
    MOV EBX,0x1                         ; 00477120
    MOV ESI,EBP                         ; 00477125
    MOV dword ptr [ESP + 0x4],EDX       ; 00477127
    PUSH ESI                            ; 0047712b
        ;   Label: LAB_0047712b
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047712c | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00477131
    TEST EAX,EAX                        ; 00477134
    JL 0x00477142                       ; 00477136 | LAB_00477142
        ;   XREF to: 00477142 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00477138
    JNZ 0x0047712b                      ; 0047713b | LAB_0047712b
        ;   XREF to: 0047712b (CONDITIONAL_JUMP)
    DEC EBX                             ; 0047713d
    TEST EBX,EBX                        ; 0047713e
    JG 0x0047712b                       ; 00477140 | LAB_0047712b
        ;   XREF to: 0047712b (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4]                 ; 00477142
        ;   Label: LAB_00477142
    PUSH EAX                            ; 00477146
    PUSH 0x61f3e7                       ; 00477147 | = "%d\n" | s_d_0061f3e7 = %d

    PUSH EBP                            ; 0047714c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0047714d | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00477152
    MOV ECX,dword ptr [ESP + 0x4]       ; 00477155
    CMP ECX,0x5                         ; 00477159
    JGE 0x00477182                      ; 0047715c | LAB_00477182
        ;   XREF to: 00477182 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 0047715e
    MOV EBX,0x61f3eb                    ; 0047715f | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f3eb = ..\core\dmodel.cpp
    MOV ESI,0x128                       ; 00477164
    PUSH 0x61f3fe                       ; 00477169 | = "KFM file is invalid version %d" | s_KFM_file_is_invalid_vers_0061f3fe = KFM file is invalid version %d
    MOV dword ptr [0x02f0ca48],EBX      ; 0047716e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00477174 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047717a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047717f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00477182
        ;   Label: LAB_00477182
    CMP EAX,0x8                         ; 00477186
    JG 0x0047734d                       ; 00477189 | LAB_0047734d
        ;   XREF to: 0047734d (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 0047718f
        ;   Label: LAB_0047718f
    MOV ESI,EBP                         ; 00477194
    PUSH ESI                            ; 00477196
        ;   Label: LAB_00477196
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00477197 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047719c
    TEST EAX,EAX                        ; 0047719f
    JL 0x004771ad                       ; 004771a1 | LAB_004771ad
        ;   XREF to: 004771ad (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004771a3
    JNZ 0x00477196                      ; 004771a6 | LAB_00477196
        ;   XREF to: 00477196 (CONDITIONAL_JUMP)
    DEC EBX                             ; 004771a8
    TEST EBX,EBX                        ; 004771a9
    JG 0x00477196                       ; 004771ab | LAB_00477196
        ;   XREF to: 00477196 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x18]                ; 004771ad
        ;   Label: LAB_004771ad
    PUSH EAX                            ; 004771b1
    LEA EAX,[ESP + 0x18]                ; 004771b2
    PUSH EAX                            ; 004771b6
    LEA EAX,[ESP + 0x18]                ; 004771b7
    PUSH EAX                            ; 004771bb
    LEA EAX,[ESP + 0x18]                ; 004771bc
    PUSH EAX                            ; 004771c0
    LEA EAX,[ESP + 0x18]                ; 004771c1
    PUSH EAX                            ; 004771c5
    PUSH 0x61f473                       ; 004771c6 | = "%d,%d,%d,%d,%d\n" | s_d_d_d_d_d_0061f473 = %d,%d,%d,%d,%d

    PUSH EBP                            ; 004771cb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004771cc | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004771d1
    MOV ESI,dword ptr [ESP + 0x18]      ; 004771d4
    PUSH ESI                            ; 004771d8
    MOV EDI,dword ptr [ESP + 0x18]      ; 004771d9
    PUSH EDI                            ; 004771dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004771de
    PUSH EAX                            ; 004771e2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004771e3
    PUSH EDX                            ; 004771e7
    MOV ECX,dword ptr [ESP + 0x18]      ; 004771e8
    PUSH ECX                            ; 004771ec
    MOV EBX,dword ptr [ESP + 0x60]      ; 004771ed
    PUSH EBX                            ; 004771f1
    MOV ESI,EBP                         ; 004771f2
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 ; 004771f4 | void core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, ...)
        ;   XREF to: 00477bf0 (UNCONDITIONAL_CALL)
    MOV EBX,0x1                         ; 004771f9
    ADD ESP,0x18                        ; 004771fe
    PUSH ESI                            ; 00477201
        ;   Label: LAB_00477201
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00477202 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00477207
    TEST EAX,EAX                        ; 0047720a
    JL 0x00477218                       ; 0047720c | LAB_00477218
        ;   XREF to: 00477218 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0047720e
    JNZ 0x00477201                      ; 00477211 | LAB_00477201
        ;   XREF to: 00477201 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00477213
    TEST EBX,EBX                        ; 00477214
    JG 0x00477201                       ; 00477216 | LAB_00477201
        ;   XREF to: 00477201 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00477218
        ;   Label: LAB_00477218
    PUSH EAX                            ; 0047721a
    PUSH 0x61f483                       ; 0047721b | = "%d\n" | s_d_0061f483 = %d

    PUSH EBP                            ; 00477220
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477221 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00477226
    CMP dword ptr [ESP + 0x4],0x6       ; 00477229
    JL 0x00477378                       ; 0047722e | LAB_00477378
        ;   XREF to: 00477378 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 00477234
    MOV ESI,EBP                         ; 00477239
    PUSH ESI                            ; 0047723b
        ;   Label: LAB_0047723b
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047723c | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00477241
    TEST EAX,EAX                        ; 00477244
    JL 0x00477252                       ; 00477246 | LAB_00477252
        ;   XREF to: 00477252 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00477248
    JNZ 0x0047723b                      ; 0047724b | LAB_0047723b
        ;   XREF to: 0047723b (CONDITIONAL_JUMP)
    DEC EBX                             ; 0047724d
    TEST EBX,EBX                        ; 0047724e
    JG 0x0047723b                       ; 00477250 | LAB_0047723b
        ;   XREF to: 0047723b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477252
        ;   Label: LAB_00477252
    ADD EAX,0x569c                      ; 00477256
    PUSH EAX                            ; 0047725b
    PUSH 0x61f487                       ; 0047725c | = "%d\n" | s_d_0061f487 = %d

    PUSH EBP                            ; 00477261
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477262 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00477267
    CMP dword ptr [ESP + 0x4],0x8       ; 0047726a
        ;   Label: LAB_0047726a
    JL 0x0047738b                       ; 0047726f | LAB_0047738b
        ;   XREF to: 0047738b (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 00477275
    MOV ESI,EBP                         ; 0047727a
    PUSH ESI                            ; 0047727c
        ;   Label: LAB_0047727c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047727d | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00477282
    TEST EAX,EAX                        ; 00477285
    JL 0x00477293                       ; 00477287 | LAB_00477293
        ;   XREF to: 00477293 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00477289
    JNZ 0x0047727c                      ; 0047728c | LAB_0047727c
        ;   XREF to: 0047727c (CONDITIONAL_JUMP)
    DEC EBX                             ; 0047728e
    TEST EBX,EBX                        ; 0047728f
    JG 0x0047727c                       ; 00477291 | LAB_0047727c
        ;   XREF to: 0047727c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477293
        ;   Label: LAB_00477293
    ADD EAX,0x56a0                      ; 00477297
    PUSH EAX                            ; 0047729c
    PUSH 0x61f48b                       ; 0047729d | = "%d\n" | s_d_0061f48b = %d

    PUSH EBP                            ; 004772a2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004772a3 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004772a8
    XOR EAX,EAX                         ; 004772ab
        ;   Label: LAB_004772ab
    MOV EDX,dword ptr [ESP + 0x4]       ; 004772ad
    MOV dword ptr [ESP + 0x1c],EAX      ; 004772b1
    CMP EDX,0x7                         ; 004772b5
    JL 0x004772eb                       ; 004772b8 | LAB_004772eb
        ;   XREF to: 004772eb (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 004772ba
    MOV ESI,EBP                         ; 004772bf
    PUSH ESI                            ; 004772c1
        ;   Label: LAB_004772c1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004772c2 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004772c7
    TEST EAX,EAX                        ; 004772ca
    JL 0x004772d8                       ; 004772cc | LAB_004772d8
        ;   XREF to: 004772d8 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004772ce
    JNZ 0x004772c1                      ; 004772d1 | LAB_004772c1
        ;   XREF to: 004772c1 (CONDITIONAL_JUMP)
    DEC EBX                             ; 004772d3
    TEST EBX,EBX                        ; 004772d4
    JG 0x004772c1                       ; 004772d6 | LAB_004772c1
        ;   XREF to: 004772c1 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1c]                ; 004772d8
        ;   Label: LAB_004772d8
    PUSH EAX                            ; 004772dc
    PUSH 0x61f48f                       ; 004772dd | = "%d\n" | s_d_0061f48f = %d

    PUSH EBP                            ; 004772e2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004772e3 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004772e8
    MOV EBX,0x1                         ; 004772eb
        ;   Label: LAB_004772eb
    MOV ESI,EBP                         ; 004772f0
    PUSH ESI                            ; 004772f2
        ;   Label: LAB_004772f2
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004772f3 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004772f8
    TEST EAX,EAX                        ; 004772fb
    JL 0x00477309                       ; 004772fd | LAB_00477309
        ;   XREF to: 00477309 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004772ff
    JNZ 0x004772f2                      ; 00477302 | LAB_004772f2
        ;   XREF to: 004772f2 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00477304
    TEST EBX,EBX                        ; 00477305
    JG 0x004772f2                       ; 00477307 | LAB_004772f2
        ;   XREF to: 004772f2 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00477309
        ;   Label: LAB_00477309
    XOR EBX,EBX                         ; 0047730b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0047730d
        ;   Label: LAB_0047730d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477311
    MOV ECX,dword ptr [EDI + 0x100]     ; 00477315
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047731b
    IMUL EAX,ECX                        ; 00477321
    CMP EBX,EAX                         ; 00477324
    JGE 0x0047739e                      ; 00477326 | LAB_0047739e
        ;   XREF to: 0047739e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00477328
    ADD EAX,ESI                         ; 0047732e
    LEA EDI,[EAX + 0x8]                 ; 00477330
    PUSH EDI                            ; 00477333
    LEA EDI,[EAX + 0x4]                 ; 00477334
    PUSH EDI                            ; 00477337
    PUSH EAX                            ; 00477338
    PUSH 0x61f493                       ; 00477339 | = "%d,%d,%d\n" | s_d_d_d_0061f493 = %d,%d,%d

    PUSH EBP                            ; 0047733e
    INC EBX                             ; 0047733f
    ADD ESI,0xc                         ; 00477340
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477343 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00477348
    JMP 0x0047730d                      ; 0047734b | LAB_0047730d
        ;   XREF to: 0047730d (UNCONDITIONAL_JUMP)
    PUSH 0x8                            ; 0047734d
        ;   Label: LAB_0047734d
    PUSH EAX                            ; 0047734f
    MOV EDX,0x61f41d                    ; 00477350 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f41d = ..\core\dmodel.cpp
    MOV ECX,0x12b                       ; 00477355
    PUSH 0x61f430                       ; 0047735a | = "KFM file is version %d, this .exe can..." | s_KFM_file_is_version_d_th_0061f430 = KFM file is version %d, this .exe can only handle up to version %d
    MOV dword ptr [0x02f0ca48],EDX      ; 0047735f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00477365 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047736b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00477370
    JMP 0x0047718f                      ; 00477373 | LAB_0047718f
        ;   XREF to: 0047718f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477378
        ;   Label: LAB_00477378
    MOV dword ptr [EAX + 0x569c],0x0    ; 0047737c
    JMP 0x0047726a                      ; 00477386 | LAB_0047726a
        ;   XREF to: 0047726a (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047738b
        ;   Label: LAB_0047738b
    MOV dword ptr [EAX + 0x56a0],0x0    ; 0047738f
    JMP 0x004772ab                      ; 00477399 | LAB_004772ab
        ;   XREF to: 004772ab (UNCONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 0047739e
        ;   Label: LAB_0047739e
    MOV EDI,EBP                         ; 004773a3
    PUSH EDI                            ; 004773a5
        ;   Label: LAB_004773a5
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004773a6 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004773ab
    TEST EAX,EAX                        ; 004773ae
    JL 0x004773bc                       ; 004773b0 | LAB_004773bc
        ;   XREF to: 004773bc (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004773b2
    JNZ 0x004773a5                      ; 004773b5 | LAB_004773a5
        ;   XREF to: 004773a5 (CONDITIONAL_JUMP)
    DEC EBX                             ; 004773b7
    TEST EBX,EBX                        ; 004773b8
    JG 0x004773a5                       ; 004773ba | LAB_004773a5
        ;   XREF to: 004773a5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004773bc
        ;   Label: LAB_004773bc
    XOR EBX,EBX                         ; 004773c0
    MOV ESI,dword ptr [EAX + 0x110]     ; 004773c2
    MOV dword ptr [ESP + 0x2c],EBX      ; 004773c8
    TEST ESI,ESI                        ; 004773cc
    JLE 0x004774a0                      ; 004773ce | LAB_004774a0
        ;   XREF to: 004774a0 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x28],EBX      ; 004773d4
    MOV dword ptr [ESP + 0x24],EBX      ; 004773d8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004773dc
        ;   Label: LAB_004773dc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004773e0
    MOV EAX,dword ptr [EAX + 0x114]     ; 004773e4
    ADD EBX,EAX                         ; 004773ea
    MOV dword ptr [ESP + 0x34],EBX      ; 004773ec
    LEA EAX,[EBX + 0x4]                 ; 004773f0
    PUSH EAX                            ; 004773f3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004773f4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004773f8
    MOV EAX,dword ptr [EAX + 0x118]     ; 004773fc
    ADD EAX,ESI                         ; 00477402
    PUSH EAX                            ; 00477404
    PUSH 0x61f49d                       ; 00477405 | = "%d,%d" | s_d_d_0061f49d = %d,%d
    PUSH EBP                            ; 0047740a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0047740b | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00477410
    MOV EAX,dword ptr [ESP + 0x34]      ; 00477413
    MOV EDI,dword ptr [EAX + 0x4]       ; 00477417
    XOR EBX,EBX                         ; 0047741a
    TEST EDI,EDI                        ; 0047741c
    JLE 0x00477461                      ; 0047741e | LAB_00477461
        ;   XREF to: 00477461 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x34]      ; 00477420
    MOV EDI,dword ptr [ESP + 0x34]      ; 00477424
    ADD EAX,0x18                        ; 00477428
    ADD ESI,0x1c                        ; 0047742b
    ADD EDI,0x20                        ; 0047742e
    MOV dword ptr [ESP + 0x30],EAX      ; 00477431
    IMUL EAX,EBX,0xc                    ; 00477435
        ;   Label: LAB_00477435
    PUSH EDI                            ; 00477438
    MOV EDX,dword ptr [ESP + 0x34]      ; 00477439
    PUSH ESI                            ; 0047743d
    ADD EAX,EDX                         ; 0047743e
    PUSH EAX                            ; 00477440
    PUSH 0x61f4a3                       ; 00477441 | = ", %d,%d,%d" | s_d_d_d_0061f4a3 = , %d,%d,%d
    PUSH EBP                            ; 00477446
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477447 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0047744c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0047744f
    ADD EDI,0xc                         ; 00477453
    INC EBX                             ; 00477456
    MOV ECX,dword ptr [EAX + 0x4]       ; 00477457
    ADD ESI,0xc                         ; 0047745a
    CMP EBX,ECX                         ; 0047745d
    JL 0x00477435                       ; 0047745f | LAB_00477435
        ;   XREF to: 00477435 (CONDITIONAL_JUMP)
    PUSH 0x61f4ae                       ; 00477461 | = "\n" | s_anon_0061f4ae =

        ;   Label: LAB_00477461
    PUSH EBP                            ; 00477466
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477467 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047746c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047746f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00477473
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00477477
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0047747b
    ADD EDI,0x4                         ; 0047747f
    ADD EAX,0x48                        ; 00477482
    INC EDX                             ; 00477485
    MOV ECX,dword ptr [EBX + 0x110]     ; 00477486
    MOV dword ptr [ESP + 0x24],EDI      ; 0047748c
    MOV dword ptr [ESP + 0x28],EAX      ; 00477490
    MOV dword ptr [ESP + 0x2c],EDX      ; 00477494
    CMP EDX,ECX                         ; 00477498
    JL 0x004773dc                       ; 0047749a | LAB_004773dc
        ;   XREF to: 004773dc (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x1c],0x0      ; 004774a0
        ;   Label: LAB_004774a0
    JNZ 0x004775bb                      ; 004774a5 | LAB_004775bb
        ;   XREF to: 004775bb (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004774ab
    MOV ECX,ECX                         ; 004774ae
    MOV EBX,0x1                         ; 004774b0
        ;   Label: LAB_004774b0
    MOV ESI,EBP                         ; 004774b5
    PUSH ESI                            ; 004774b7
        ;   Label: LAB_004774b7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004774b8 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004774bd
    TEST EAX,EAX                        ; 004774c0
    JL 0x004774ce                       ; 004774c2 | LAB_004774ce
        ;   XREF to: 004774ce (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004774c4
    JNZ 0x004774b7                      ; 004774c7 | LAB_004774b7
        ;   XREF to: 004774b7 (CONDITIONAL_JUMP)
    DEC EBX                             ; 004774c9
    TEST EBX,EBX                        ; 004774ca
    JG 0x004774b7                       ; 004774cc | LAB_004774b7
        ;   XREF to: 004774b7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004774ce
        ;   Label: LAB_004774ce
    MOV EBX,dword ptr [EAX + 0x120]     ; 004774d2
    XOR ESI,ESI                         ; 004774d8
    TEST EBX,EBX                        ; 004774da
    JLE 0x00477510                      ; 004774dc | LAB_00477510
        ;   XREF to: 00477510 (CONDITIONAL_JUMP)
    LEA EBX,[EAX + 0x12c]               ; 004774de
    PUSH EBX                            ; 004774e4
        ;   Label: LAB_004774e4
    PUSH 0x61f4fb                       ; 004774e5 | = "%[^\n]\n" | s_anon_0061f4fb = %[^
        ; ]

    PUSH EBP                            ; 004774ea
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004774eb | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004774f0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004774f3
    INC ESI                             ; 004774f7
    MOV EDI,dword ptr [EAX + 0x120]     ; 004774f8
    ADD EBX,0x48                        ; 004774fe
    CMP ESI,EDI                         ; 00477501
    JL 0x004774e4                       ; 00477503 | LAB_004774e4
        ;   XREF to: 004774e4 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00477505
    LEA EDX,[EDX]                       ; 0047750b
    MOV EBX,EBX                         ; 0047750e
    MOV EBX,0x1                         ; 00477510
        ;   Label: LAB_00477510
    MOV ESI,EBP                         ; 00477515
    PUSH ESI                            ; 00477517
        ;   Label: LAB_00477517
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00477518 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047751d
    TEST EAX,EAX                        ; 00477520
    JL 0x0047752e                       ; 00477522 | LAB_0047752e
        ;   XREF to: 0047752e (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00477524
    JNZ 0x00477517                      ; 00477527 | LAB_00477517
        ;   XREF to: 00477517 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00477529
    TEST EBX,EBX                        ; 0047752a
    JG 0x00477517                       ; 0047752c | LAB_00477517
        ;   XREF to: 00477517 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047752e
        ;   Label: LAB_0047752e
    MOV EDX,dword ptr [EAX + 0x5584]    ; 00477532
    XOR EBX,EBX                         ; 00477538
    TEST EDX,EDX                        ; 0047753a
    JLE 0x00477580                      ; 0047753c | LAB_00477580
        ;   XREF to: 00477580 (CONDITIONAL_JUMP)
    LEA EDI,[EAX + 0x5588]              ; 0047753e
    LEA ESI,[EAX + 0x558c]              ; 00477544
    LEA EAX,[EBX*0x8 + 0x0]             ; 0047754a
        ;   Label: LAB_0047754a
    PUSH ESI                            ; 00477551
    ADD EAX,EDI                         ; 00477552
    PUSH EAX                            ; 00477554
    PUSH 0x61f502                       ; 00477555 | = "%d,%d\n" | s_d_d_0061f502 = %d,%d

    PUSH EBP                            ; 0047755a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0047755b | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00477560
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477563
    INC EBX                             ; 00477567
    MOV ECX,dword ptr [EAX + 0x5584]    ; 00477568
    ADD ESI,0x8                         ; 0047756e
    CMP EBX,ECX                         ; 00477571
    JL 0x0047754a                       ; 00477573 | LAB_0047754a
        ;   XREF to: 0047754a (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00477575
    LEA EDX,[EDX]                       ; 0047757b
    MOV EBX,EBX                         ; 0047757e
    TEST byte ptr [EBP + 0xc],0x20      ; 00477580
        ;   Label: LAB_00477580
    JZ 0x004775a9                       ; 00477584 | LAB_004775a9
        ;   XREF to: 004775a9 (CONDITIONAL_JUMP)
    MOV EBX,0x61f509                    ; 00477586 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f509 = ..\core\dmodel.cpp
    MOV ESI,0x197                       ; 0047758b
    PUSH 0x61f51c                       ; 00477590 | = "Error reading KFM model" | s_Error_reading_KFM_model_0061f51c = Error reading KFM model
    MOV dword ptr [0x02f0ca48],EBX      ; 00477595 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0047759b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004775a1 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004775a6
    CMP dword ptr [ESP],0x0             ; 004775a9
        ;   Label: LAB_004775a9
    JNZ 0x00477677                      ; 004775ad | LAB_00477677
        ;   XREF to: 00477677 (CONDITIONAL_JUMP)
    ADD ESP,0x38                        ; 004775b3
    POP EBP                             ; 004775b6
    POP EDI                             ; 004775b7
    POP ESI                             ; 004775b8
    POP EBX                             ; 004775b9
    RET                                 ; 004775ba
    PUSH 0x177                          ; 004775bb
        ;   Label: LAB_004775bb
    MOV EAX,dword ptr [ESP + 0x50]      ; 004775c0
    PUSH 0x61f4b0                       ; 004775c4 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f4b0 = ..\core\dmodel.cpp
    MOV ESI,dword ptr [EAX + 0x110]     ; 004775c9
    PUSH ESI                            ; 004775cf
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004775d0 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004775d5
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004775d8
    MOV dword ptr [EBX + 0x11c],EAX     ; 004775dc
    TEST EAX,EAX                        ; 004775e2
    JZ 0x00477650                       ; 004775e4 | LAB_00477650
        ;   XREF to: 00477650 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 004775e6
        ;   Label: LAB_004775e6
    MOV ESI,EBP                         ; 004775eb
    PUSH ESI                            ; 004775ed
        ;   Label: LAB_004775ed
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004775ee | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004775f3
    TEST EAX,EAX                        ; 004775f6
    JL 0x00477604                       ; 004775f8 | LAB_00477604
        ;   XREF to: 00477604 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 004775fa
    JNZ 0x004775ed                      ; 004775fd | LAB_004775ed
        ;   XREF to: 004775ed (CONDITIONAL_JUMP)
    DEC EBX                             ; 004775ff
    TEST EBX,EBX                        ; 00477600
    JG 0x004775ed                       ; 00477602 | LAB_004775ed
        ;   XREF to: 004775ed (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477604
        ;   Label: LAB_00477604
    MOV EDX,dword ptr [EAX + 0x110]     ; 00477608
    XOR EBX,EBX                         ; 0047760e
    TEST EDX,EDX                        ; 00477610
    JLE 0x004774b0                      ; 00477612 | LAB_004774b0
        ;   XREF to: 004774b0 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x20]                ; 00477618
        ;   Label: LAB_00477618
    PUSH EAX                            ; 0047761c
    PUSH 0x61f4f7                       ; 0047761d | = "%d\n" | s_d_0061f4f7 = %d

    PUSH EBP                            ; 00477622
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00477623 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00477628
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047762b
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0047762f
    LEA ESI,[EAX + EBX*0x1]             ; 00477635
    MOV AL,byte ptr [ESP + 0x20]        ; 00477638
    MOV byte ptr [ESI],AL               ; 0047763c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047763e
    INC EBX                             ; 00477642
    CMP EBX,dword ptr [EAX + 0x110]     ; 00477643
    JL 0x00477618                       ; 00477649 | LAB_00477618
        ;   XREF to: 00477618 (CONDITIONAL_JUMP)
    JMP 0x004774b0                      ; 0047764b | LAB_004774b0
        ;   XREF to: 004774b0 (UNCONDITIONAL_JUMP)
    MOV EAX,0x61f4c3                    ; 00477650 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f4c3 = ..\core\dmodel.cpp
        ;   Label: LAB_00477650
    MOV EDX,0x178                       ; 00477655
    PUSH 0x61f4d6                       ; 0047765a | = "Out of memory for envMapOpacList" | s_Out_of_memory_for_envMap_0061f4d6 = Out of memory for envMapOpacList
    MOV [0x02f0ca48],EAX                ; 0047765f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00477664 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047766a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047766f
    JMP 0x004775e6                      ; 00477672 | LAB_004775e6
        ;   XREF to: 004775e6 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00477677
        ;   Label: LAB_00477677
    PUSH EBP                            ; 0047767b
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 ; 0047767c | void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel * this_ptr)
        ;   XREF to: 00478830 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00477681
    ADD ESP,0x38                        ; 00477684
    POP EBP                             ; 00477687
    POP EDI                             ; 00477688
    POP ESI                             ; 00477689
    POP EBX                             ; 0047768a
    RET                                 ; 0047768b

