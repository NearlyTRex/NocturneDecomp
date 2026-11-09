; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_0049517e(CEditorTools *param_1,undefined4 param_2,char *param_3,char *param_4,byte param_5)
;
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c_memmove_FUN_005c25d0
;   crt_string.c_strupr_FUN_005c2c20
;   crt_time.c__localtime_FUN_005c2738
;   crt_time.c__strftime_FUN_005c2784
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c26ae
;   crt_unknown.c_FUN_005c26c0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00479320
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00479340
;   engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360
;   engine_dosio.cpp_FUN_00479580
;   engine_dosio.cpp_FUN_004795b0
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0049517e
        ;   Label: shape_edittool.cpp_FUN_0049517e
    PUSH EBX                            ; 00495180
    PUSH EBP                            ; 00495181
    SUB ESP,0x1ed8                      ; 00495182
    MOV EBX,dword ptr [ESP + 0x1ee4]    ; 00495188
    PUSH 0x104                          ; 0049518f
    LEA EAX,[ESP + 0xa14]               ; 00495194
    PUSH EAX                            ; 0049519b
    CALL crt_unknown.c_FUN_005c26ae     ; 0049519c
        ;   XREF to: 005c26ae (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26ae()
    ADD ESP,0x8                         ; 004951a1
    TEST EAX,EAX                        ; 004951a4
    JZ 0x0049547b                       ; 004951a6
        ;   XREF to: 0049547b (CONDITIONAL_JUMP)  ; LAB_0049547b
    PUSH EDI                            ; 004951ac
    PUSH ESI                            ; 004951ad
    MOV ECX,0x41                        ; 004951ae
    LEA EDI,[ESP + 0xc20]               ; 004951b3
    MOV ESI,0x61abd0                    ; 004951ba
    MOV AH,byte ptr [ESP + 0x1efc]      ; 004951bf
    MOVSD.REP ES:EDI,ESI                ; 004951c6
    TEST AH,0x1                         ; 004951c8
    JNZ 0x00495494                      ; 004951cb
        ;   XREF to: 00495494 (CONDITIONAL_JUMP)  ; LAB_00495494
    XOR ECX,ECX                         ; 004951d1
        ;   Label: LAB_004951d1
    MOV dword ptr [ESP + 0x1ed4],ECX    ; 004951d3
    MOV ECX,0x41                        ; 004951da
        ;   Label: LAB_004951da
    LEA EDI,[ESP + 0x70c]               ; 004951df
    PUSH 0x104                          ; 004951e6
    LEA EAX,[ESP + 0x710]               ; 004951eb
    MOV ESI,0x61acd8                    ; 004951f2
    PUSH EAX                            ; 004951f7
    MOVSD.REP ES:EDI,ESI                ; 004951f8
    CALL crt_unknown.c_FUN_005c26ae     ; 004951fa
        ;   XREF to: 005c26ae (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26ae()
    ADD ESP,0x8                         ; 004951ff
    LEA EAX,[ESP + 0x70c]               ; 00495202
    PUSH EAX                            ; 00495209
    MOV ESI,dword ptr [ESP + 0x1ef4]    ; 0049520a
    PUSH ESI                            ; 00495211
    PUSH 0x5dbe35                       ; 00495212
    LEA EAX,[ESP + 0x3d4]               ; 00495217
    PUSH EAX                            ; 0049521e
    CALL crt_unknown.c_FUN_005bfb40     ; 0049521f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00495224
    LEA EAX,[ESP + 0x8]                 ; 00495227
    PUSH EAX                            ; 0049522b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 0049522c
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00495231
    LEA EAX,[ESP + 0x5f8]               ; 00495234
    PUSH EAX                            ; 0049523b
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00479320 ; 0049523c
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00479320(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00495241
    CMP dword ptr [ESP + 0x1ef4],0x0    ; 00495244
    JNZ 0x00495259                      ; 0049524c
        ;   XREF to: 00495259 (CONDITIONAL_JUMP)  ; LAB_00495259
    MOV dword ptr [ESP + 0x1ef4],0x5dbe3b ; 0049524e
    MOV EAX,dword ptr [ESP + 0x1ef4]    ; 00495259
        ;   Label: LAB_00495259
    PUSH EAX                            ; 00495260
    LEA EAX,[ESP + 0x5fc]               ; 00495261
    PUSH EAX                            ; 00495268
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360 ; 00495269
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0049526e
    CMP byte ptr [ESP + 0x5f8],0x0      ; 00495271
    JZ 0x004952a3                       ; 00495279
        ;   XREF to: 004952a3 (CONDITIONAL_JUMP)  ; LAB_004952a3
    TEST byte ptr [ESP + 0x6f8],0x4     ; 0049527b
        ;   Label: LAB_0049527b
    JZ 0x00495531                       ; 00495283
        ;   XREF to: 00495531 (CONDITIONAL_JUMP)  ; LAB_00495531
    LEA EAX,[ESP + 0x5f8]               ; 00495289
        ;   Label: LAB_00495289
    PUSH EAX                            ; 00495290
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0 ; 00495291
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00495296
    CMP byte ptr [ESP + 0x5f8],0x0      ; 00495299
    JNZ 0x0049527b                      ; 004952a1
        ;   XREF to: 0049527b (CONDITIONAL_JUMP)  ; LAB_0049527b
    LEA EAX,[ESP + 0x8]                 ; 004952a3
        ;   Label: LAB_004952a3
    PUSH EAX                            ; 004952a7
    CALL shape_edittool.cpp_CStrList_sortAll_FUN_004997f0 ; 004952a8
        ;   XREF to: 004997f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sortAll_FUN_004997f0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004952ad
    MOV ESI,0xffffffff                  ; 004952b0
    MOV CL,byte ptr [ESP + 0xc20]       ; 004952b5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004952bc
    TEST CL,CL                          ; 004952c0
    JZ 0x00495356                       ; 004952c2
        ;   XREF to: 00495356 (CONDITIONAL_JUMP)  ; LAB_00495356
    XOR ESI,ESI                         ; 004952c8
    TEST EBP,EBP                        ; 004952ca
    JLE 0x00495342                      ; 004952cc
        ;   XREF to: 00495342 (CONDITIONAL_JUMP)  ; LAB_00495342
    PUSH 0x0                            ; 004952ce
        ;   Label: LAB_004952ce
    PUSH ESI                            ; 004952d0
    LEA EAX,[ESP + 0x152c]              ; 004952d1
    PUSH EAX                            ; 004952d8
    LEA EAX,[ESP + 0x14]                ; 004952d9
    PUSH EAX                            ; 004952dd
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 004952de
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 004952e3
    PUSH 0x1                            ; 004952e6
    PUSH ESI                            ; 004952e8
    LEA EAX,[ESP + 0x192c]              ; 004952e9
    PUSH EAX                            ; 004952f0
    LEA EAX,[ESP + 0x14]                ; 004952f1
    PUSH EAX                            ; 004952f5
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 004952f6
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 004952fb
    LEA EAX,[ESP + 0x1924]              ; 004952fe
    PUSH EAX                            ; 00495305
    LEA EAX,[ESP + 0x1528]              ; 00495306
    PUSH EAX                            ; 0049530d
    PUSH 0x0                            ; 0049530e
    PUSH 0x0                            ; 00495310
    LEA EAX,[ESP + 0x924]               ; 00495312
    PUSH EAX                            ; 00495319
    CALL engine_dosio.cpp_FUN_004795b0  ; 0049531a
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049531f
    LEA EAX,[ESP + 0xc20]               ; 00495322
    PUSH EAX                            ; 00495329
    LEA EAX,[ESP + 0x918]               ; 0049532a
    PUSH EAX                            ; 00495331
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00495332
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00495337
    TEST EAX,EAX                        ; 0049533a
    JNZ 0x00495610                      ; 0049533c
        ;   XREF to: 00495610 (CONDITIONAL_JUMP)  ; LAB_00495610
    CMP ESI,dword ptr [ESP + 0x8]       ; 00495342
        ;   Label: LAB_00495342
    JL 0x0049534d                       ; 00495346
        ;   XREF to: 0049534d (CONDITIONAL_JUMP)  ; LAB_0049534d
    MOV ESI,0xffffffff                  ; 00495348
    XOR AH,AH                           ; 0049534d
        ;   Label: LAB_0049534d
    MOV byte ptr [ESP + 0xc20],AH       ; 0049534f
    PUSH 0x5dbe60                       ; 00495356
        ;   Label: LAB_00495356
    LEA EAX,[ESP + 0x5fc]               ; 0049535b
    PUSH EAX                            ; 00495362
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360 ; 00495363
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00495368
    CMP byte ptr [ESP + 0x5f8],0x0      ; 0049536b
    JZ 0x004953c8                       ; 00495373
        ;   XREF to: 004953c8 (CONDITIONAL_JUMP)  ; LAB_004953c8
    TEST byte ptr [ESP + 0x6f8],0x4     ; 00495375
        ;   Label: LAB_00495375
    JZ 0x004953ae                       ; 0049537d
        ;   XREF to: 004953ae (CONDITIONAL_JUMP)  ; LAB_004953ae
    PUSH 0x5dbe64                       ; 0049537f
    LEA EAX,[ESP + 0x5fc]               ; 00495384
    PUSH EAX                            ; 0049538b
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0049538c
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 00495391
    TEST EAX,EAX                        ; 00495394
    JNZ 0x00495622                      ; 00495396
        ;   XREF to: 00495622 (CONDITIONAL_JUMP)  ; LAB_00495622
    PUSH 0x5dbe67                       ; 0049539c
    LEA EAX,[ESP + 0xc]                 ; 004953a1
        ;   Label: LAB_004953a1
    PUSH EAX                            ; 004953a5
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004953a6
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004953ab
    LEA EAX,[ESP + 0x5f8]               ; 004953ae
        ;   Label: LAB_004953ae
    PUSH EAX                            ; 004953b5
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0 ; 004953b6
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004953bb
    CMP byte ptr [ESP + 0x5f8],0x0      ; 004953be
    JNZ 0x00495375                      ; 004953c6
        ;   XREF to: 00495375 (CONDITIONAL_JUMP)  ; LAB_00495375
    MOV EAX,dword ptr [ESP + 0x8]       ; 004953c8
        ;   Label: LAB_004953c8
    DEC EAX                             ; 004953cc
    PUSH EAX                            ; 004953cd
    PUSH EBP                            ; 004953ce
    LEA EAX,[ESP + 0x10]                ; 004953cf
    PUSH EAX                            ; 004953d3
    CALL shape_edittool.cpp_FUN_0049c3e0 ; 004953d4
        ;   XREF to: 0049c3e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c3e0()
    ADD ESP,0xc                         ; 004953d9
    PUSH 0x5dbe7f                       ; 004953dc
    LEA EAX,[ESP + 0xc]                 ; 004953e1
    PUSH EAX                            ; 004953e5
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 004953e6
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004953eb
    PUSH 0x0                            ; 004953ee
    PUSH ESI                            ; 004953f0
    LEA EAX,[ESP + 0x3d0]               ; 004953f1
    PUSH EAX                            ; 004953f8
    LEA EAX,[ESP + 0x14]                ; 004953f9
    PUSH EAX                            ; 004953fd
    CALL shape_edittool.cpp_FUN_0049a8b0 ; 004953fe
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV ESI,EAX                         ; 00495403
    ADD ESP,0x10                        ; 00495405
    TEST EAX,EAX                        ; 00495408
    JL 0x004956d9                       ; 0049540a
        ;   XREF to: 004956d9 (CONDITIONAL_JUMP)  ; LAB_004956d9
    MOV EAX,dword ptr [ESP + 0x8]       ; 00495410
    DEC EAX                             ; 00495414
    CMP ESI,EAX                         ; 00495415
    JL 0x0049575f                       ; 00495417
        ;   XREF to: 0049575f (CONDITIONAL_JUMP)  ; LAB_0049575f
    MOV ECX,0x41                        ; 0049541d
    LEA EDI,[ESP + 0x810]               ; 00495422
    MOV ESI,0x61ade0                    ; 00495429
    MOVSD.REP ES:EDI,ESI                ; 0049542e
    PUSH 0x1                            ; 00495430
        ;   Label: LAB_00495430
    PUSH 0x104                          ; 00495432
    LEA EAX,[ESP + 0x818]               ; 00495437
    PUSH EAX                            ; 0049543e
    PUSH 0x5dbe8d                       ; 0049543f
    PUSH EBX                            ; 00495444
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 00495445
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0049544a
    TEST EAX,EAX                        ; 0049544d
    JNZ 0x0049571c                      ; 0049544f
        ;   XREF to: 0049571c (CONDITIONAL_JUMP)  ; LAB_0049571c
    PUSH 0x0                            ; 00495455
        ;   Label: LAB_00495455
    LEA EAX,[ESP + 0x5fc]               ; 00495457
    PUSH EAX                            ; 0049545e
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00479340 ; 0049545f
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00479340(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00495464
    PUSH 0x0                            ; 00495467
    LEA EAX,[ESP + 0xc]                 ; 00495469
    PUSH EAX                            ; 0049546d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0049546e
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00495473
    JMP 0x004951da                      ; 00495476
        ;   XREF to: 004951da (UNCONDITIONAL_JUMP)  ; LAB_004951da
    PUSH 0x5dbe14                       ; 0049547b
        ;   Label: LAB_0049547b
    PUSH EBX                            ; 00495480
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495481
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 00495486
    XOR EAX,EAX                         ; 00495489
    ADD ESP,0x1ed8                      ; 0049548b
    POP EBP                             ; 00495491
    POP EBX                             ; 00495492
    RET                                 ; 00495493
    LEA EAX,[ESP + 0x1b24]              ; 00495494
        ;   Label: LAB_00495494
    PUSH EAX                            ; 0049549b
    LEA EAX,[ESP + 0x1028]              ; 0049549c
    PUSH EAX                            ; 004954a3
    LEA EAX,[ESP + 0x132c]              ; 004954a4
    PUSH EAX                            ; 004954ab
    LEA EAX,[ESP + 0x1ee8]              ; 004954ac
    PUSH EAX                            ; 004954b3
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 004954b4
    PUSH EDX                            ; 004954bb
    CALL engine_dosio.cpp_FUN_00479580  ; 004954bc
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004954c1
    PUSH 0x0                            ; 004954c4
    PUSH 0x0                            ; 004954c6
    LEA EAX,[ESP + 0x132c]              ; 004954c8
    PUSH EAX                            ; 004954cf
    LEA EAX,[ESP + 0x1ee8]              ; 004954d0
    PUSH EAX                            ; 004954d7
    LEA EAX,[ESP + 0xb2c]               ; 004954d8
    PUSH EAX                            ; 004954df
    CALL engine_dosio.cpp_FUN_004795b0  ; 004954e0
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004954e5
    LEA EAX,[ESP + 0xb1c]               ; 004954e8
    PUSH EAX                            ; 004954ef
    CALL crt_unknown.c_FUN_005c26c0     ; 004954f0
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 004954f5
    LEA EAX,[ESP + 0x1b24]              ; 004954f8
    PUSH EAX                            ; 004954ff
    LEA EAX,[ESP + 0x1028]              ; 00495500
    PUSH EAX                            ; 00495507
    PUSH 0x0                            ; 00495508
    PUSH 0x0                            ; 0049550a
    LEA EAX,[ESP + 0xc30]               ; 0049550c
    PUSH EAX                            ; 00495513
    CALL engine_dosio.cpp_FUN_004795b0  ; 00495514
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00495519
    LEA EAX,[ESP + 0xc20]               ; 0049551c
    PUSH EAX                            ; 00495523
    CALL crt_unknown.c_FUN_005c26c0     ; 00495524
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 00495529
    JMP 0x004951d1                      ; 0049552c
        ;   XREF to: 004951d1 (UNCONDITIONAL_JUMP)  ; LAB_004951d1
    LEA EAX,[ESP + 0x1a24]              ; 00495531
        ;   Label: LAB_00495531
    PUSH EAX                            ; 00495538
    LEA EAX,[ESP + 0x1128]              ; 00495539
    PUSH EAX                            ; 00495540
    PUSH 0x0                            ; 00495541
    PUSH 0x0                            ; 00495543
    LEA EAX,[ESP + 0x608]               ; 00495545
    PUSH EAX                            ; 0049554c
    CALL engine_dosio.cpp_FUN_00479580  ; 0049554d
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00495552
    CMP byte ptr [ESP + 0x1a24],0x2e    ; 00495555
    JNZ 0x00495589                      ; 0049555d
        ;   XREF to: 00495589 (CONDITIONAL_JUMP)  ; LAB_00495589
    LEA EDI,[ESP + 0x1a24]              ; 0049555f
    SUB ECX,ECX                         ; 00495566
    DEC ECX                             ; 00495568
    XOR EAX,EAX                         ; 00495569
    SCASB.REPNE ES:EDI                  ; 0049556b
    NOT ECX                             ; 0049556d
    DEC ECX                             ; 0049556f
    PUSH ECX                            ; 00495570
    LEA EAX,[ESP + 0x1a29]              ; 00495571
    PUSH EAX                            ; 00495578
    LEA EAX,[ESP + 0x1a2c]              ; 00495579
    PUSH EAX                            ; 00495580
    CALL crt_string.c_memmove_FUN_005c25d0 ; 00495581
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00495586
    LEA EAX,[ESP + 0x700]               ; 00495589
        ;   Label: LAB_00495589
    PUSH EAX                            ; 00495590
    CALL crt_time.c__localtime_FUN_005c2738 ; 00495591
        ;   XREF to: 005c2738 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__localtime_FUN_005c2738()
    ADD ESP,0x4                         ; 00495596
    PUSH EAX                            ; 00495599
    PUSH 0x5dbe3f                       ; 0049559a
    PUSH 0x1e                           ; 0049559f
    LEA EAX,[ESP + 0x1ec0]              ; 004955a1
    PUSH EAX                            ; 004955a8
    CALL crt_time.c__strftime_FUN_005c2784 ; 004955a9
        ;   XREF to: 005c2784 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__strftime_FUN_005c2784()
    ADD ESP,0x10                        ; 004955ae
    LEA EAX,[ESP + 0x1eb4]              ; 004955b1
    PUSH EAX                            ; 004955b8
    MOV ECX,dword ptr [ESP + 0x700]     ; 004955b9
    PUSH ECX                            ; 004955c0
    LEA EAX,[ESP + 0x1a2c]              ; 004955c1
    PUSH EAX                            ; 004955c8
    LEA EAX,[ESP + 0x1130]              ; 004955c9
    PUSH EAX                            ; 004955d0
    PUSH 0x5dbe55                       ; 004955d1
    LEA EAX,[ESP + 0x1e00]              ; 004955d6
    PUSH EAX                            ; 004955dd
    CALL crt_unknown.c_FUN_005bfb40     ; 004955de
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x18                        ; 004955e3
    LEA EAX,[ESP + 0x1dec]              ; 004955e6
    PUSH EAX                            ; 004955ed
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004955ee
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    ADD ESP,0x4                         ; 004955f3
    LEA EAX,[ESP + 0x1dec]              ; 004955f6
    PUSH EAX                            ; 004955fd
    LEA EAX,[ESP + 0xc]                 ; 004955fe
    PUSH EAX                            ; 00495602
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00495603
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00495608
    JMP 0x00495289                      ; 0049560b
        ;   XREF to: 00495289 (UNCONDITIONAL_JUMP)  ; LAB_00495289
    MOV EDI,dword ptr [ESP + 0x8]       ; 00495610
        ;   Label: LAB_00495610
    INC ESI                             ; 00495614
    CMP ESI,EDI                         ; 00495615
    JL 0x004952ce                       ; 00495617
        ;   XREF to: 004952ce (CONDITIONAL_JUMP)  ; LAB_004952ce
    JMP 0x00495342                      ; 0049561d
        ;   XREF to: 00495342 (UNCONDITIONAL_JUMP)  ; LAB_00495342
    PUSH 0x5dbe71                       ; 00495622
        ;   Label: LAB_00495622
    LEA EAX,[ESP + 0x5fc]               ; 00495627
    PUSH EAX                            ; 0049562e
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0049562f
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 00495634
    TEST EAX,EAX                        ; 00495637
    JZ 0x004953ae                       ; 00495639
        ;   XREF to: 004953ae (CONDITIONAL_JUMP)  ; LAB_004953ae
    LEA EAX,[ESP + 0x1824]              ; 0049563f
    PUSH EAX                            ; 00495646
    LEA EAX,[ESP + 0x1428]              ; 00495647
    PUSH EAX                            ; 0049564e
    PUSH 0x0                            ; 0049564f
    PUSH 0x0                            ; 00495651
    LEA EAX,[ESP + 0x608]               ; 00495653
    PUSH EAX                            ; 0049565a
    CALL engine_dosio.cpp_FUN_00479580  ; 0049565b
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00495660
    CMP byte ptr [ESP + 0x1824],0x2e    ; 00495663
    JNZ 0x00495697                      ; 0049566b
        ;   XREF to: 00495697 (CONDITIONAL_JUMP)  ; LAB_00495697
    LEA EDI,[ESP + 0x1824]              ; 0049566d
    SUB ECX,ECX                         ; 00495674
    DEC ECX                             ; 00495676
    XOR EAX,EAX                         ; 00495677
    SCASB.REPNE ES:EDI                  ; 00495679
    NOT ECX                             ; 0049567b
    DEC ECX                             ; 0049567d
    PUSH ECX                            ; 0049567e
    LEA EAX,[ESP + 0x1829]              ; 0049567f
    PUSH EAX                            ; 00495686
    LEA EAX,[ESP + 0x182c]              ; 00495687
    PUSH EAX                            ; 0049568e
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0049568f
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00495694
    LEA EAX,[ESP + 0x1824]              ; 00495697
        ;   Label: LAB_00495697
    PUSH EAX                            ; 0049569e
    LEA EAX,[ESP + 0x1428]              ; 0049569f
    PUSH EAX                            ; 004956a6
    PUSH 0x5dbe73                       ; 004956a7
    LEA EAX,[ESP + 0x1d30]              ; 004956ac
    PUSH EAX                            ; 004956b3
    CALL crt_unknown.c_FUN_005bfb40     ; 004956b4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004956b9
    LEA EAX,[ESP + 0x1d24]              ; 004956bc
    PUSH EAX                            ; 004956c3
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004956c4
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    ADD ESP,0x4                         ; 004956c9
    LEA EAX,[ESP + 0x1d24]              ; 004956cc
    PUSH EAX                            ; 004956d3
    JMP 0x004953a1                      ; 004956d4
        ;   XREF to: 004953a1 (UNCONDITIONAL_JUMP)  ; LAB_004953a1
    PUSH 0x0                            ; 004956d9
        ;   Label: LAB_004956d9
    LEA EAX,[ESP + 0x5fc]               ; 004956db
    PUSH EAX                            ; 004956e2
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00479340 ; 004956e3
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00479340(CFileFinder * this_ptr, uint flags)
        ;   Label: LAB_004956e3
    ADD ESP,0x8                         ; 004956e8
    PUSH 0x0                            ; 004956eb
    LEA EAX,[ESP + 0xc]                 ; 004956ed
    PUSH EAX                            ; 004956f1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 004956f2
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004956f7
    LEA EAX,[ESP + 0xa18]               ; 004956fa
    PUSH EAX                            ; 00495701
    CALL crt_unknown.c_FUN_005c26c0     ; 00495702
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 00495707
    MOV EAX,dword ptr [ESP + 0x1ed4]    ; 0049570a
    POP ESI                             ; 00495711
    POP EDI                             ; 00495712
    ADD ESP,0x1ed8                      ; 00495713
    POP EBP                             ; 00495719
    POP EBX                             ; 0049571a
    RET                                 ; 0049571b
    LEA EAX,[ESP + 0x810]               ; 0049571c
        ;   Label: LAB_0049571c
    PUSH EAX                            ; 00495723
    CALL crt_unknown.c_FUN_005c26c0     ; 00495724
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 00495729
    TEST EAX,EAX                        ; 0049572c
    JZ 0x00495455                       ; 0049572e
        ;   XREF to: 00495455 (CONDITIONAL_JUMP)  ; LAB_00495455
    LEA EAX,[ESP + 0x810]               ; 00495734
    PUSH EAX                            ; 0049573b
    PUSH 0x5dbe9c                       ; 0049573c
    PUSH EBX                            ; 00495741
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495742
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 00495747
    LEA EAX,[ESP + 0x70c]               ; 0049574a
    PUSH EAX                            ; 00495751
    CALL crt_unknown.c_FUN_005c26c0     ; 00495752
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 00495757
    JMP 0x00495430                      ; 0049575a
        ;   XREF to: 00495430 (UNCONDITIONAL_JUMP)  ; LAB_00495430
    CMP ESI,EBP                         ; 0049575f
        ;   Label: LAB_0049575f
    JL 0x004957f1                       ; 00495761
        ;   XREF to: 004957f1 (CONDITIONAL_JUMP)  ; LAB_004957f1
    PUSH 0x0                            ; 00495767
    PUSH ESI                            ; 00495769
    LEA EAX,[ESP + 0xe2c]               ; 0049576a
    PUSH EAX                            ; 00495771
    LEA EAX,[ESP + 0x14]                ; 00495772
    PUSH EAX                            ; 00495776
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 00495777
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 0049577c
    PUSH 0x1                            ; 0049577f
    PUSH ESI                            ; 00495781
    LEA EAX,[ESP + 0xd2c]               ; 00495782
    PUSH EAX                            ; 00495789
    LEA EAX,[ESP + 0x14]                ; 0049578a
    PUSH EAX                            ; 0049578e
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 0049578f
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 00495794
    LEA EAX,[ESP + 0xd24]               ; 00495797
    PUSH EAX                            ; 0049579e
    LEA EAX,[ESP + 0xe28]               ; 0049579f
    PUSH EAX                            ; 004957a6
    PUSH 0x0                            ; 004957a7
    PUSH 0x0                            ; 004957a9
    LEA EAX,[ESP + 0xf34]               ; 004957ab
    PUSH EAX                            ; 004957b2
    CALL engine_dosio.cpp_FUN_004795b0  ; 004957b3
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004957b8
    LEA EAX,[ESP + 0xf24]               ; 004957bb
    PUSH EAX                            ; 004957c2
    CALL crt_unknown.c_FUN_005c26c0     ; 004957c3
        ;   XREF to: 005c26c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c0()
    ADD ESP,0x4                         ; 004957c8
    PUSH 0x0                            ; 004957cb
    LEA EAX,[ESP + 0x5fc]               ; 004957cd
    PUSH EAX                            ; 004957d4
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00479340 ; 004957d5
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00479340(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004957da
    PUSH 0x0                            ; 004957dd
    LEA EAX,[ESP + 0xc]                 ; 004957df
    PUSH EAX                            ; 004957e3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 004957e4
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004957e9
    JMP 0x004951da                      ; 004957ec
        ;   XREF to: 004951da (UNCONDITIONAL_JUMP)  ; LAB_004951da
    LEA EAX,[ESP + 0x1c24]              ; 004957f1
        ;   Label: LAB_004957f1
    PUSH EAX                            ; 004957f8
    LEA EAX,[ESP + 0x1228]              ; 004957f9
    PUSH EAX                            ; 00495800
    LEA EAX,[ESP + 0x172c]              ; 00495801
    PUSH EAX                            ; 00495808
    LEA EAX,[ESP + 0x1ee4]              ; 00495809
    PUSH EAX                            ; 00495810
    LEA EAX,[ESP + 0x71c]               ; 00495811
    PUSH EAX                            ; 00495818
    CALL engine_dosio.cpp_FUN_00479580  ; 00495819
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049581e
    LEA EAX,[ESP + 0x1c24]              ; 00495821
    PUSH EAX                            ; 00495828
    LEA EAX,[ESP + 0x1228]              ; 00495829
    PUSH EAX                            ; 00495830
    LEA EAX,[ESP + 0x172c]              ; 00495831
    PUSH EAX                            ; 00495838
    PUSH 0x0                            ; 00495839
    LEA EAX,[ESP + 0x1634]              ; 0049583b
    PUSH EAX                            ; 00495842
    CALL engine_dosio.cpp_FUN_004795b0  ; 00495843
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00495848
    PUSH 0x0                            ; 0049584b
    PUSH ESI                            ; 0049584d
    LEA EAX,[ESP + 0x122c]              ; 0049584e
    PUSH EAX                            ; 00495855
    LEA EAX,[ESP + 0x14]                ; 00495856
    PUSH EAX                            ; 0049585a
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 0049585b
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 00495860
    PUSH 0x1                            ; 00495863
    PUSH ESI                            ; 00495865
    LEA EAX,[ESP + 0x1c2c]              ; 00495866
    PUSH EAX                            ; 0049586d
    LEA EAX,[ESP + 0x14]                ; 0049586e
    PUSH EAX                            ; 00495872
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0 ; 00495873
        ;   XREF to: 004998b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 00495878
    LEA EAX,[ESP + 0x1c24]              ; 0049587b
    PUSH EAX                            ; 00495882
    LEA EAX,[ESP + 0x1228]              ; 00495883
    PUSH EAX                            ; 0049588a
    LEA EAX,[ESP + 0x162c]              ; 0049588b
    PUSH EAX                            ; 00495892
    LEA EAX,[ESP + 0x1ee4]              ; 00495893
    PUSH EAX                            ; 0049589a
    MOV EDX,dword ptr [ESP + 0x1f08]    ; 0049589b
    PUSH EDX                            ; 004958a2
    CALL engine_dosio.cpp_FUN_004795b0  ; 004958a3
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004958a8
    PUSH 0x0                            ; 004958ab
    LEA EAX,[ESP + 0x5fc]               ; 004958ad
    MOV ECX,0x1                         ; 004958b4
    PUSH EAX                            ; 004958b9
    MOV dword ptr [ESP + 0x1edc],ECX    ; 004958ba
    JMP 0x004956e3                      ; 004958c1
        ;   XREF to: 004956e3 (UNCONDITIONAL_JUMP)  ; LAB_004956e3

