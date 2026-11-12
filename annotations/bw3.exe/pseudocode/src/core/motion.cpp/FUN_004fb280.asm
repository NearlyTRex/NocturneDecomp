; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0 at 00547fc6
;
; Referenced Globals:
;   undefined4 DAT_005c974c
;   TerminatedCString s_core_motion_cpp_005c9750
;   TerminatedCString s_Error_reading_motion_lis_005c9763
;   TerminatedCString s_core_motion_cpp_005c977e
;   TerminatedCString s_Can_t_read_motion_list_i_005c9791
;   undefined4 DAT_005c9804
;   undefined4 DAT_005c9808
;   undefined4 DAT_005c980c
;   TerminatedCString s_f_d_d_d_005c9810
;   TerminatedCString s_d_d_f_005c9825
;   TerminatedCString s_d_f_d_005c982f
;   TerminatedCString s_d_f_005c9839
;   TerminatedCString s_d_d_005c9840
;   undefined4 DAT_005c9847
;   TerminatedCString s_core_motion_cpp_005c984b
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_morph.cpp_FUN_004fb210
;   crt_memory.c_malloc_FUN_005a3650
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb280
        ;   Label: core_motion.cpp_FUN_004fb280
    PUSH ESI                            ; 004fb281
    PUSH EDI                            ; 004fb282
    PUSH EBP                            ; 004fb283
    SUB ESP,0x18                        ; 004fb284
    MOV EDI,dword ptr [ESP + 0x30]      ; 004fb287
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fb28b
    PUSH EDX                            ; 004fb28f
    CALL core_morph.cpp_FUN_004fb210    ; 004fb290
        ;   XREF to: 004fb210 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_004fb210()
    MOV ECX,0xffffffff                  ; 004fb295
    ADD ESP,0x4                         ; 004fb29a
    MOV EBX,EDI                         ; 004fb29d
    MOV dword ptr [ESP + 0x4],ECX       ; 004fb29f
    PUSH EBX                            ; 004fb2a3
        ;   Label: LAB_004fb2a3
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb2a4
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb2a9
    TEST EAX,EAX                        ; 004fb2ac
    JL 0x004fb2b5                       ; 004fb2ae
        ;   XREF to: 004fb2b5 (CONDITIONAL_JUMP)  ; LAB_004fb2b5
    CMP EAX,0xa                         ; 004fb2b0
    JNZ 0x004fb2a3                      ; 004fb2b3
        ;   XREF to: 004fb2a3 (CONDITIONAL_JUMP)  ; LAB_004fb2a3
    LEA EAX,[ESP + 0x4]                 ; 004fb2b5
        ;   Label: LAB_004fb2b5
    PUSH EAX                            ; 004fb2b9
    PUSH 0x5c974c                       ; 004fb2ba | DAT_005c974c
    PUSH EDI                            ; 004fb2bf
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb2c0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004fb2c5
    CMP dword ptr [ESP + 0x4],0x0       ; 004fb2c8
    JL 0x004fb63a                       ; 004fb2cd
        ;   XREF to: 004fb63a (CONDITIONAL_JUMP)  ; LAB_004fb63a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fb2d3
        ;   Label: LAB_004fb2d3
    CMP EAX,0x3                         ; 004fb2d7
    JG 0x004fb662                       ; 004fb2da
        ;   XREF to: 004fb662 (CONDITIONAL_JUMP)  ; LAB_004fb662
    MOV EBX,EDI                         ; 004fb2e0
        ;   Label: LAB_004fb2e0
    PUSH EBX                            ; 004fb2e2
        ;   Label: LAB_004fb2e2
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb2e3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb2e8
    TEST EAX,EAX                        ; 004fb2eb
    JL 0x004fb2f4                       ; 004fb2ed
        ;   XREF to: 004fb2f4 (CONDITIONAL_JUMP)  ; LAB_004fb2f4
    CMP EAX,0xa                         ; 004fb2ef
    JNZ 0x004fb2e2                      ; 004fb2f2
        ;   XREF to: 004fb2e2 (CONDITIONAL_JUMP)  ; LAB_004fb2e2
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fb2f4
        ;   Label: LAB_004fb2f4
    PUSH ESI                            ; 004fb2f8
    PUSH 0x5c9804                       ; 004fb2f9 | DAT_005c9804
    PUSH EDI                            ; 004fb2fe
    XOR EBX,EBX                         ; 004fb2ff
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb301
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBP,dword ptr [ESI]             ; 004fb306
    ADD ESP,0xc                         ; 004fb308
    TEST EBP,EBP                        ; 004fb30b
    JLE 0x004fb330                      ; 004fb30d
        ;   XREF to: 004fb330 (CONDITIONAL_JUMP)  ; LAB_004fb330
    ADD ESI,0x4                         ; 004fb30f
    PUSH ESI                            ; 004fb312
        ;   Label: LAB_004fb312
    PUSH 0x5c9808                       ; 004fb313 | DAT_005c9808
    PUSH EDI                            ; 004fb318
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb319
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004fb31e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fb321
    INC EBX                             ; 004fb325
    MOV EDX,dword ptr [EAX]             ; 004fb326
    ADD ESI,0x1e                        ; 004fb328
    CMP EBX,EDX                         ; 004fb32b
    JL 0x004fb312                       ; 004fb32d
        ;   XREF to: 004fb312 (CONDITIONAL_JUMP)  ; LAB_004fb312
    NOP                                 ; 004fb32f
    MOV ESI,EDI                         ; 004fb330
        ;   Label: LAB_004fb330
    PUSH ESI                            ; 004fb332
        ;   Label: LAB_004fb332
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb333
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb338
    TEST EAX,EAX                        ; 004fb33b
    JL 0x004fb344                       ; 004fb33d
        ;   XREF to: 004fb344 (CONDITIONAL_JUMP)  ; LAB_004fb344
    CMP EAX,0xa                         ; 004fb33f
    JNZ 0x004fb332                      ; 004fb342
        ;   XREF to: 004fb332 (CONDITIONAL_JUMP)  ; LAB_004fb332
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fb344
        ;   Label: LAB_004fb344
    ADD EAX,0x1c24                      ; 004fb348
    PUSH EAX                            ; 004fb34d
    PUSH 0x5c980c                       ; 004fb34e | DAT_005c980c
    PUSH EDI                            ; 004fb353
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb354
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004fb359
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fb35c
    XOR ECX,ECX                         ; 004fb360
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 004fb362
    MOV dword ptr [ESP + 0xc],ECX       ; 004fb368
    TEST EBX,EBX                        ; 004fb36c
    JLE 0x004fb632                      ; 004fb36e
        ;   XREF to: 004fb632 (CONDITIONAL_JUMP)  ; LAB_004fb632
    ADD EAX,0x1c28                      ; 004fb374
    MOV dword ptr [ESP + 0x8],EAX       ; 004fb379
    MOV ESI,dword ptr [ESP + 0x8]       ; 004fb37d
        ;   Label: LAB_004fb37d
    MOV EBX,EDI                         ; 004fb381
    PUSH EBX                            ; 004fb383
        ;   Label: LAB_004fb383
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb384
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb389
    TEST EAX,EAX                        ; 004fb38c
    JL 0x004fb395                       ; 004fb38e
        ;   XREF to: 004fb395 (CONDITIONAL_JUMP)  ; LAB_004fb395
    CMP EAX,0xa                         ; 004fb390
    JNZ 0x004fb383                      ; 004fb393
        ;   XREF to: 004fb383 (CONDITIONAL_JUMP)  ; LAB_004fb383
    LEA EAX,[ESI + 0x64]                ; 004fb395
        ;   Label: LAB_004fb395
    PUSH EAX                            ; 004fb398
    LEA EAX,[ESI + 0x60]                ; 004fb399
    PUSH EAX                            ; 004fb39c
    LEA EAX,[ESI + 0x24]                ; 004fb39d
    PUSH EAX                            ; 004fb3a0
    LEA EAX,[ESI + 0x20]                ; 004fb3a1
    PUSH EAX                            ; 004fb3a4
    PUSH ESI                            ; 004fb3a5
    PUSH 0x5c9810                       ; 004fb3a6 | = "\"%[^\"]\",%f,%d,%d,%d\n"
    PUSH EDI                            ; 004fb3ab
    MOV EBX,EDI                         ; 004fb3ac
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb3ae
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x1c                        ; 004fb3b3
    PUSH EBX                            ; 004fb3b6
        ;   Label: LAB_004fb3b6
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb3b7
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb3bc
    TEST EAX,EAX                        ; 004fb3bf
    JL 0x004fb3c8                       ; 004fb3c1
        ;   XREF to: 004fb3c8 (CONDITIONAL_JUMP)  ; LAB_004fb3c8
    CMP EAX,0xa                         ; 004fb3c3
    JNZ 0x004fb3b6                      ; 004fb3c6
        ;   XREF to: 004fb3b6 (CONDITIONAL_JUMP)  ; LAB_004fb3b6
    LEA EAX,[ESI + 0x38]                ; 004fb3c8
        ;   Label: LAB_004fb3c8
    PUSH EAX                            ; 004fb3cb
    LEA EAX,[ESI + 0x34]                ; 004fb3cc
    PUSH EAX                            ; 004fb3cf
    LEA EAX,[ESI + 0x28]                ; 004fb3d0
    PUSH EAX                            ; 004fb3d3
    PUSH 0x5c9825                       ; 004fb3d4 | = "%d,%d,%f\n"
    PUSH EDI                            ; 004fb3d9
    MOV EBX,EDI                         ; 004fb3da
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb3dc
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 004fb3e1
    PUSH EBX                            ; 004fb3e4
        ;   Label: LAB_004fb3e4
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb3e5
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb3ea
    TEST EAX,EAX                        ; 004fb3ed
    JL 0x004fb3f6                       ; 004fb3ef
        ;   XREF to: 004fb3f6 (CONDITIONAL_JUMP)  ; LAB_004fb3f6
    CMP EAX,0xa                         ; 004fb3f1
    JNZ 0x004fb3e4                      ; 004fb3f4
        ;   XREF to: 004fb3e4 (CONDITIONAL_JUMP)  ; LAB_004fb3e4
    LEA EAX,[ESI + 0x40]                ; 004fb3f6
        ;   Label: LAB_004fb3f6
    PUSH EAX                            ; 004fb3f9
    LEA EAX,[ESI + 0x3c]                ; 004fb3fa
    PUSH EAX                            ; 004fb3fd
    LEA EAX,[ESP + 0x8]                 ; 004fb3fe
    PUSH EAX                            ; 004fb402
    PUSH 0x5c982f                       ; 004fb403 | = "%d,%f,%d\n"
    PUSH EDI                            ; 004fb408
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb409
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 004fb40e
    MOV EAX,dword ptr [ESP]             ; 004fb411
    MOV EBX,EDI                         ; 004fb414
    MOV dword ptr [ESI + 0x30],EAX      ; 004fb416
    PUSH EBX                            ; 004fb419
        ;   Label: LAB_004fb419
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb41a
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb41f
    TEST EAX,EAX                        ; 004fb422
    JL 0x004fb42b                       ; 004fb424
        ;   XREF to: 004fb42b (CONDITIONAL_JUMP)  ; LAB_004fb42b
    CMP EAX,0xa                         ; 004fb426
    JNZ 0x004fb419                      ; 004fb429
        ;   XREF to: 004fb419 (CONDITIONAL_JUMP)  ; LAB_004fb419
    LEA EAX,[ESI + 0x54]                ; 004fb42b
        ;   Label: LAB_004fb42b
    PUSH EAX                            ; 004fb42e
    LEA EAX,[ESI + 0x50]                ; 004fb42f
    PUSH EAX                            ; 004fb432
    PUSH 0x5c9839                       ; 004fb433 | = "%d,%f\n"
    PUSH EDI                            ; 004fb438
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb439
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004fb43e
    CMP dword ptr [ESP + 0x4],0x3       ; 004fb441
    JL 0x004fb68d                       ; 004fb446
        ;   XREF to: 004fb68d (CONDITIONAL_JUMP)  ; LAB_004fb68d
    MOV EBX,EDI                         ; 004fb44c
    PUSH EBX                            ; 004fb44e
        ;   Label: LAB_004fb44e
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb44f
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb454
    TEST EAX,EAX                        ; 004fb457
    JL 0x004fb460                       ; 004fb459
        ;   XREF to: 004fb460 (CONDITIONAL_JUMP)  ; LAB_004fb460
    CMP EAX,0xa                         ; 004fb45b
    JNZ 0x004fb44e                      ; 004fb45e
        ;   XREF to: 004fb44e (CONDITIONAL_JUMP)  ; LAB_004fb44e
    LEA EAX,[ESI + 0x6c]                ; 004fb460
        ;   Label: LAB_004fb460
    PUSH EAX                            ; 004fb463
    LEA EAX,[ESI + 0x68]                ; 004fb464
    PUSH EAX                            ; 004fb467
    PUSH 0x5c9840                       ; 004fb468 | = "%d,%d\n"
    PUSH EDI                            ; 004fb46d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb46e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004fb473
    MOV EBX,EDI                         ; 004fb476
        ;   Label: LAB_004fb476
    PUSH EBX                            ; 004fb478
        ;   Label: LAB_004fb478
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb479
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb47e
    TEST EAX,EAX                        ; 004fb481
    JL 0x004fb48a                       ; 004fb483
        ;   XREF to: 004fb48a (CONDITIONAL_JUMP)  ; LAB_004fb48a
    CMP EAX,0xa                         ; 004fb485
    JNZ 0x004fb478                      ; 004fb488
        ;   XREF to: 004fb478 (CONDITIONAL_JUMP)  ; LAB_004fb478
    LEA EAX,[ESI + 0x70]                ; 004fb48a
        ;   Label: LAB_004fb48a
    PUSH EAX                            ; 004fb48d
    PUSH 0x5c9847                       ; 004fb48e | DAT_005c9847
    PUSH EDI                            ; 004fb493
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb494
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBX,dword ptr [ESI + 0x70]      ; 004fb499
    ADD ESP,0xc                         ; 004fb49c
    TEST EBX,EBX                        ; 004fb49f
    JLE 0x004fb52e                      ; 004fb4a1
        ;   XREF to: 004fb52e (CONDITIONAL_JUMP)  ; LAB_004fb52e
    IMUL EAX,EBX,0x18                   ; 004fb4a7
    PUSH EAX                            ; 004fb4aa
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004fb4ab
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004fb4b0
    MOV dword ptr [ESI + 0x74],EAX      ; 004fb4b3
    TEST EAX,EAX                        ; 004fb4b6
    JNZ 0x004fb4dd                      ; 004fb4b8
        ;   XREF to: 004fb4dd (CONDITIONAL_JUMP)  ; LAB_004fb4dd
    MOV EDX,0x5c984b                    ; 004fb4ba | = "..\\core\\motion.cpp"
    MOV ECX,0xc0                        ; 004fb4bf
    PUSH 0x5c985e                       ; 004fb4c4 | = "Out of memory"
    MOV dword ptr [0x01d71de0],EDX      ; 004fb4c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004fb4cf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fb4d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fb4da
    XOR EBX,EBX                         ; 004fb4dd
        ;   Label: LAB_004fb4dd
    MOV EBP,dword ptr [ESI + 0x70]      ; 004fb4df
    MOV dword ptr [ESP + 0x14],EBX      ; 004fb4e2
    TEST EBP,EBP                        ; 004fb4e6
    JLE 0x004fb52e                      ; 004fb4e8
        ;   XREF to: 004fb52e (CONDITIONAL_JUMP)  ; LAB_004fb52e
    XOR EBP,EBP                         ; 004fb4ea
    MOV EBX,dword ptr [ESI + 0x74]      ; 004fb4ec
        ;   Label: LAB_004fb4ec
    ADD EBX,EBP                         ; 004fb4ef
    LEA EAX,[EBX + 0x14]                ; 004fb4f1
    PUSH EAX                            ; 004fb4f4
    LEA EAX,[EBX + 0x10]                ; 004fb4f5
    PUSH EAX                            ; 004fb4f8
    LEA EAX,[EBX + 0xc]                 ; 004fb4f9
    PUSH EAX                            ; 004fb4fc
    LEA EAX,[EBX + 0x8]                 ; 004fb4fd
    PUSH EAX                            ; 004fb500
    LEA EAX,[ESP + 0x10]                ; 004fb501
    PUSH EAX                            ; 004fb505
    PUSH EBX                            ; 004fb506
    PUSH 0x5c986c                       ; 004fb507 | = "%d,%d,%d,%f,%f,%d\n"
    PUSH EDI                            ; 004fb50c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb50d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x20                        ; 004fb512
    MOV EAX,dword ptr [ESP]             ; 004fb515
    MOV dword ptr [EBX + 0x4],EAX       ; 004fb518
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fb51b
    ADD EBP,0x18                        ; 004fb51f
    INC EAX                             ; 004fb522
    MOV EDX,dword ptr [ESI + 0x70]      ; 004fb523
    MOV dword ptr [ESP + 0x14],EAX      ; 004fb526
    CMP EAX,EDX                         ; 004fb52a
    JL 0x004fb4ec                       ; 004fb52c
        ;   XREF to: 004fb4ec (CONDITIONAL_JUMP)  ; LAB_004fb4ec
    MOV EBX,EDI                         ; 004fb52e
        ;   Label: LAB_004fb52e
    PUSH EBX                            ; 004fb530
        ;   Label: LAB_004fb530
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb531
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb536
    TEST EAX,EAX                        ; 004fb539
    JL 0x004fb542                       ; 004fb53b
        ;   XREF to: 004fb542 (CONDITIONAL_JUMP)  ; LAB_004fb542
    CMP EAX,0xa                         ; 004fb53d
    JNZ 0x004fb530                      ; 004fb540
        ;   XREF to: 004fb530 (CONDITIONAL_JUMP)  ; LAB_004fb530
    LEA EAX,[ESI + 0x78]                ; 004fb542
        ;   Label: LAB_004fb542
    PUSH EAX                            ; 004fb545
    PUSH 0x5c987f                       ; 004fb546 | DAT_005c987f
    PUSH EDI                            ; 004fb54b
    XOR EBX,EBX                         ; 004fb54c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb54e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [ESI + 0x78]      ; 004fb553
    ADD ESP,0xc                         ; 004fb556
    TEST ECX,ECX                        ; 004fb559
    JLE 0x004fb592                      ; 004fb55b
        ;   XREF to: 004fb592 (CONDITIONAL_JUMP)  ; LAB_004fb592
    LEA EAX,[ESI + 0x7c]                ; 004fb55d
    LEA EBP,[ESI + 0x80]                ; 004fb560
    MOV dword ptr [ESP + 0x10],EAX      ; 004fb566
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fb56a
        ;   Label: LAB_004fb56a
    LEA EAX,[EBX*0x8 + 0x0]             ; 004fb56e
    PUSH EBP                            ; 004fb575
    ADD EAX,EDX                         ; 004fb576
    PUSH EAX                            ; 004fb578
    PUSH 0x5c9883                       ; 004fb579 | = "%d,%d\n"
    PUSH EDI                            ; 004fb57e
    ADD EBP,0x8                         ; 004fb57f
    INC EBX                             ; 004fb582
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb583
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [ESI + 0x78]      ; 004fb588
    ADD ESP,0x10                        ; 004fb58b
    CMP EBX,ECX                         ; 004fb58e
    JL 0x004fb56a                       ; 004fb590
        ;   XREF to: 004fb56a (CONDITIONAL_JUMP)  ; LAB_004fb56a
    CMP dword ptr [ESP + 0x4],0x2       ; 004fb592
        ;   Label: LAB_004fb592
    JL 0x004fb69f                       ; 004fb597
        ;   XREF to: 004fb69f (CONDITIONAL_JUMP)  ; LAB_004fb69f
    MOV EBP,EDI                         ; 004fb59d
    PUSH EBP                            ; 004fb59f
        ;   Label: LAB_004fb59f
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb5a0
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb5a5
    TEST EAX,EAX                        ; 004fb5a8
    JL 0x004fb5b1                       ; 004fb5aa
        ;   XREF to: 004fb5b1 (CONDITIONAL_JUMP)  ; LAB_004fb5b1
    CMP EAX,0xa                         ; 004fb5ac
    JNZ 0x004fb59f                      ; 004fb5af
        ;   XREF to: 004fb59f (CONDITIONAL_JUMP)  ; LAB_004fb59f
    LEA EAX,[ESI + 0xf4]                ; 004fb5b1
        ;   Label: LAB_004fb5b1
    PUSH EAX                            ; 004fb5b7
    PUSH 0x5c988a                       ; 004fb5b8 | DAT_005c988a
    PUSH EDI                            ; 004fb5bd
    XOR EBX,EBX                         ; 004fb5be
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb5c0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBP,dword ptr [ESI + 0xf4]      ; 004fb5c5
    ADD ESP,0xc                         ; 004fb5cb
    TEST EBP,EBP                        ; 004fb5ce
    JLE 0x004fb5f5                      ; 004fb5d0
        ;   XREF to: 004fb5f5 (CONDITIONAL_JUMP)  ; LAB_004fb5f5
    LEA EBP,[ESI + 0xf8]                ; 004fb5d2
    PUSH EBP                            ; 004fb5d8
        ;   Label: LAB_004fb5d8
    PUSH 0x5c988d                       ; 004fb5d9 | DAT_005c988d
    PUSH EDI                            ; 004fb5de
    INC EBX                             ; 004fb5df
    ADD EBP,0x4                         ; 004fb5e0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fb5e3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [ESI + 0xf4]      ; 004fb5e8
    ADD ESP,0xc                         ; 004fb5ee
    CMP EBX,EAX                         ; 004fb5f1
    JL 0x004fb5d8                       ; 004fb5f3
        ;   XREF to: 004fb5d8 (CONDITIONAL_JUMP)  ; LAB_004fb5d8
    MOV EBP,EDI                         ; 004fb5f5
        ;   Label: LAB_004fb5f5
    PUSH EBP                            ; 004fb5f7
        ;   Label: LAB_004fb5f7
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fb5f8
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fb5fd
    TEST EAX,EAX                        ; 004fb600
    JL 0x004fb609                       ; 004fb602
        ;   XREF to: 004fb609 (CONDITIONAL_JUMP)  ; LAB_004fb609
    CMP EAX,0xa                         ; 004fb604
    JNZ 0x004fb5f7                      ; 004fb607
        ;   XREF to: 004fb5f7 (CONDITIONAL_JUMP)  ; LAB_004fb5f7
    MOV ESI,dword ptr [ESP + 0x8]       ; 004fb609
        ;   Label: LAB_004fb609
    MOV EBP,dword ptr [ESP + 0xc]       ; 004fb60d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fb611
    ADD ESI,0x120                       ; 004fb615
    INC EBP                             ; 004fb61b
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 004fb61c
    MOV dword ptr [ESP + 0x8],ESI       ; 004fb622
    MOV dword ptr [ESP + 0xc],EBP       ; 004fb626
    CMP EBP,EDX                         ; 004fb62a
    JL 0x004fb37d                       ; 004fb62c
        ;   XREF to: 004fb37d (CONDITIONAL_JUMP)  ; LAB_004fb37d
    ADD ESP,0x18                        ; 004fb632
        ;   Label: LAB_004fb632
    POP EBP                             ; 004fb635
    POP EDI                             ; 004fb636
    POP ESI                             ; 004fb637
    POP EBX                             ; 004fb638
    RET                                 ; 004fb639
    MOV ESI,0x5c9750                    ; 004fb63a | = "..\\core\\motion.cpp"
        ;   Label: LAB_004fb63a
    MOV EBP,0x81                        ; 004fb63f
    PUSH 0x5c9763                       ; 004fb644 | = "Error reading motion list."
    MOV dword ptr [0x01d71de0],ESI      ; 004fb649 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004fb64f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fb655
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fb65a
    JMP 0x004fb2d3                      ; 004fb65d
        ;   XREF to: 004fb2d3 (UNCONDITIONAL_JUMP)  ; LAB_004fb2d3
    PUSH 0x3                            ; 004fb662
        ;   Label: LAB_004fb662
    PUSH EAX                            ; 004fb664
    MOV EDX,0x5c977e                    ; 004fb665 | = "..\\core\\motion.cpp"
    MOV ECX,0x83                        ; 004fb66a
    PUSH 0x5c9791                       ; 004fb66f | = "Can't read motion list - it's version..."
    MOV dword ptr [0x01d71de0],EDX      ; 004fb674 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004fb67a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fb680
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004fb685
    JMP 0x004fb2e0                      ; 004fb688
        ;   XREF to: 004fb2e0 (UNCONDITIONAL_JUMP)  ; LAB_004fb2e0
    MOV EAX,dword ptr [ESI + 0x64]      ; 004fb68d
        ;   Label: LAB_004fb68d
    MOV dword ptr [ESI + 0x68],0x1      ; 004fb690
    MOV dword ptr [ESI + 0x6c],EAX      ; 004fb697
    JMP 0x004fb476                      ; 004fb69a
        ;   XREF to: 004fb476 (UNCONDITIONAL_JUMP)  ; LAB_004fb476
    MOV dword ptr [ESI + 0xf4],0x0      ; 004fb69f
        ;   Label: LAB_004fb69f
    JMP 0x004fb609                      ; 004fb6a9
        ;   XREF to: 004fb609 (UNCONDITIONAL_JUMP)  ; LAB_004fb609

