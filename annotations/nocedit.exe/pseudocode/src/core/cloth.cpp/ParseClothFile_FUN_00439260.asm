; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_cloth_cpp_ParseClothFile_FUN_00439260(void)
;
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043df57
;
; Referenced Globals:
;   TerminatedCString s_wt_006182d9
;   TerminatedCString s_models_006182dc
;   TerminatedCString s_core_cloth_cpp_006182e3
;   TerminatedCString s_CCloth_save_Unable_to_op_006182f5
;   TerminatedCString s_version_00618318
;   TerminatedCString s_d_00618321
;   TerminatedCString s_model_00618325
;   TerminatedCString s_s_0061832c
;   TerminatedCString s_weight_gravity_dampen_sp_00618330
;   TerminatedCString s_f_f_f_f_f_f_f_f_0061837b
;   TerminatedCString s_transparency_00618394
;   TerminatedCString s_f_006183a2
;   TerminatedCString s_doubleSided_006183a6
;   TerminatedCString s_d_006183b3
;   TerminatedCString s_lockedVertexCount_006183b7
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439260
        ;   Label: core_cloth.cpp_ParseClothFile_FUN_00439260
    PUSH ESI                            ; 00439261
    PUSH EDI                            ; 00439262
    PUSH EBP                            ; 00439263
    MOV EBP,dword ptr [ESP + 0x14]      ; 00439264
    PUSH 0x6182d9                       ; 00439268 | = "wt"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043926d
    PUSH EDX                            ; 00439271
    PUSH 0x6182dc                       ; 00439272 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00439277
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043927c
    MOV EDI,EAX                         ; 0043927f
    TEST EAX,EAX                        ; 00439281
    JZ 0x004394b8                       ; 00439283
        ;   XREF to: 004394b8 (CONDITIONAL_JUMP)  ; LAB_004394b8
    PUSH 0x618318                       ; 00439289 | = "version\n"
        ;   Label: LAB_00439289
    PUSH EDI                            ; 0043928e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043928f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00439294
    PUSH 0x3                            ; 00439297
    PUSH 0x618321                       ; 00439299 | = "%d\n"
    PUSH EDI                            ; 0043929e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043929f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004392a4
    PUSH 0x618325                       ; 004392a7 | = "model\n"
    PUSH EDI                            ; 004392ac
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004392ad
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004392b2
    PUSH EBP                            ; 004392b5
    PUSH 0x61832c                       ; 004392b6 | = "%s\n"
    PUSH EDI                            ; 004392bb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004392bc
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004392c1
    PUSH 0x618330                       ; 004392c4 | = "weight,gravity,dampen,spring,bodyFric..."
    PUSH EDI                            ; 004392c9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004392ca
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004392cf
    SUB ESP,0x8                         ; 004392d2
    FLD float ptr [EBP + 0x3ce74]       ; 004392d5
    FSTP double ptr [ESP]               ; 004392db
    SUB ESP,0x8                         ; 004392de
    FLD float ptr [EBP + 0x3ce70]       ; 004392e1
    FSTP double ptr [ESP]               ; 004392e7
    SUB ESP,0x8                         ; 004392ea
    FLD float ptr [EBP + 0x3ce6c]       ; 004392ed
    FSTP double ptr [ESP]               ; 004392f3
    SUB ESP,0x8                         ; 004392f6
    FLD float ptr [EBP + 0x3ce68]       ; 004392f9
    FSTP double ptr [ESP]               ; 004392ff
    SUB ESP,0x8                         ; 00439302
    FLD float ptr [EBP + 0x3ce64]       ; 00439305
    FSTP double ptr [ESP]               ; 0043930b
    SUB ESP,0x8                         ; 0043930e
    FLD float ptr [EBP + 0x3ce60]       ; 00439311
    FSTP double ptr [ESP]               ; 00439317
    SUB ESP,0x8                         ; 0043931a
    FLD float ptr [EBP + 0x3ce5c]       ; 0043931d
    FSTP double ptr [ESP]               ; 00439323
    SUB ESP,0x8                         ; 00439326
    FLD float ptr [EBP + 0x3ce58]       ; 00439329
    FSTP double ptr [ESP]               ; 0043932f
    PUSH 0x61837b                       ; 00439332 | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    PUSH EDI                            ; 00439337
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439338
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x48                        ; 0043933d
    PUSH 0x618394                       ; 00439340 | = "transparency\n"
    PUSH EDI                            ; 00439345
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439346
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0043934b
    SUB ESP,0x8                         ; 0043934e
    FLD float ptr [EBP + 0x3ce88]       ; 00439351
    FSTP double ptr [ESP]               ; 00439357
    PUSH 0x6183a2                       ; 0043935a | = "%f\n"
    PUSH EDI                            ; 0043935f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439360
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00439365
    PUSH 0x6183a6                       ; 00439368 | = "doubleSided\n"
    PUSH EDI                            ; 0043936d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043936e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00439373
    MOV ESI,dword ptr [EBP + 0x3ce84]   ; 00439376
    PUSH ESI                            ; 0043937c
    PUSH 0x6183b3                       ; 0043937d | = "%d\n"
    PUSH EDI                            ; 00439382
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439383
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00439388
    PUSH 0x6183b7                       ; 0043938b | = "lockedVertexCount\n"
    PUSH EDI                            ; 00439390
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439391
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00439396
    MOV EAX,dword ptr [EBP + 0x3f028]   ; 00439399
    PUSH EAX                            ; 0043939f
    PUSH 0x6183ca                       ; 004393a0 | = "%d\n"
    PUSH EDI                            ; 004393a5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004393a6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004393ab
    PUSH 0x6183ce                       ; 004393ae | = "lockedVertexList\n"
    PUSH EDI                            ; 004393b3
    XOR EBX,EBX                         ; 004393b4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004393b6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP + 0x3f028]   ; 004393bb
    ADD ESP,0x8                         ; 004393c1
    TEST EDX,EDX                        ; 004393c4
    JLE 0x004393f0                      ; 004393c6
        ;   XREF to: 004393f0 (CONDITIONAL_JUMP)  ; LAB_004393f0
    MOV ESI,EBP                         ; 004393c8
    MOV ECX,dword ptr [ESI + 0x3f02c]   ; 004393ca
        ;   Label: LAB_004393ca
    PUSH ECX                            ; 004393d0
    PUSH 0x6183e0                       ; 004393d1 | = "%d\n"
    PUSH EDI                            ; 004393d6
    ADD ESI,0x4                         ; 004393d7
    INC EBX                             ; 004393da
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004393db
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x3f028]   ; 004393e0
    ADD ESP,0xc                         ; 004393e6
    CMP EBX,EAX                         ; 004393e9
    JL 0x004393ca                       ; 004393eb
        ;   XREF to: 004393ca (CONDITIONAL_JUMP)  ; LAB_004393ca
    LEA EAX,[EAX]                       ; 004393ed
    PUSH 0x6183e4                       ; 004393f0 | = "collideBoneCount\n"
        ;   Label: LAB_004393f0
    PUSH EDI                            ; 004393f5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004393f6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004393fb
    MOV EDX,dword ptr [EBP + 0x3ce8c]   ; 004393fe
    PUSH EDX                            ; 00439404
    PUSH 0x6183f6                       ; 00439405 | = "%d\n"
    PUSH EDI                            ; 0043940a
    XOR ESI,ESI                         ; 0043940b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043940d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP + 0x3ce8c]   ; 00439412
    ADD ESP,0xc                         ; 00439418
    TEST ECX,ECX                        ; 0043941b
    JLE 0x004394a0                      ; 0043941d
        ;   XREF to: 004394a0 (CONDITIONAL_JUMP)  ; LAB_004394a0
    LEA EBX,[EBP + 0x3ce90]             ; 00439423
    SUB ESP,0x8                         ; 00439429
        ;   Label: LAB_00439429
    FLD float ptr [EBX + 0x34]          ; 0043942c
    FSTP double ptr [ESP]               ; 0043942f
    SUB ESP,0x8                         ; 00439432
    FLD float ptr [EBX + 0x2c]          ; 00439435
    FSTP double ptr [ESP]               ; 00439438
    SUB ESP,0x8                         ; 0043943b
    FLD float ptr [EBX + 0x30]          ; 0043943e
    FSTP double ptr [ESP]               ; 00439441
    SUB ESP,0x8                         ; 00439444
    FLD float ptr [EBX + 0x28]          ; 00439447
    FSTP double ptr [ESP]               ; 0043944a
    SUB ESP,0x8                         ; 0043944d
    FLD float ptr [EBX + 0x24]          ; 00439450
    FSTP double ptr [ESP]               ; 00439453
    SUB ESP,0x8                         ; 00439456
    FLD float ptr [EBX + 0x20]          ; 00439459
    FSTP double ptr [ESP]               ; 0043945c
    SUB ESP,0x8                         ; 0043945f
    FLD float ptr [EBX + 0x1c]          ; 00439462
    FSTP double ptr [ESP]               ; 00439465
    SUB ESP,0x8                         ; 00439468
    FLD float ptr [EBX + 0x18]          ; 0043946b
    FSTP double ptr [ESP]               ; 0043946e
    SUB ESP,0x8                         ; 00439471
    FLD float ptr [EBX + 0x14]          ; 00439474
    FSTP double ptr [ESP]               ; 00439477
    PUSH EBX                            ; 0043947a
    PUSH 0x6183fa                       ; 0043947b | = "\"%s\",%g,%g, %g,%g,%g, %g,%g,%g, %g\n"
    PUSH EDI                            ; 00439480
    INC ESI                             ; 00439481
    ADD EBX,0xac                        ; 00439482
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00439488
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x3ce8c]   ; 0043948d
    ADD ESP,0x54                        ; 00439493
    CMP ESI,EAX                         ; 00439496
    JL 0x00439429                       ; 00439498
        ;   XREF to: 00439429 (CONDITIONAL_JUMP)  ; LAB_00439429
    LEA EAX,[EAX]                       ; 0043949a
    PUSH 0x17b                          ; 004394a0
        ;   Label: LAB_004394a0
    PUSH 0x61841e                       ; 004394a5 | = "..\\core\\cloth.cpp"
    PUSH EDI                            ; 004394aa
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004394ab
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004394b0
    POP EBP                             ; 004394b3
    POP EDI                             ; 004394b4
    POP ESI                             ; 004394b5
    POP EBX                             ; 004394b6
    RET                                 ; 004394b7
    MOV ECX,0x6182e3                    ; 004394b8 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_004394b8
    MOV EBX,0x12d                       ; 004394bd
    PUSH 0x6182f5                       ; 004394c2 | = "CCloth::save - Unable to open file"
    MOV dword ptr [0x02f0ca48],ECX      ; 004394c7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004394cd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004394d3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004394d8
    JMP 0x00439289                      ; 004394db
        ;   XREF to: 00439289 (UNCONDITIONAL_JUMP)  ; LAB_00439289

