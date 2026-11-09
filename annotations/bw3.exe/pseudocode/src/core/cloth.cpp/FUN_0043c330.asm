; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_cloth_cpp_FUN_0043c330(CKeyFramedModel *param_1,char *param_2)
;
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cloth.cpp_CClothList_load_FUN_0043f920 at 0043f996
;
; Referenced Globals:
;   undefined4 DAT_005b8fae
;   TerminatedCString s_models_005b8fb1
;   TerminatedCString s_core_cloth_cpp_005b8fb8
;   TerminatedCString s_CCloth_load_Unable_to_op_005b8fca
;   undefined4 DAT_005b8ff0
;   TerminatedCString s_core_cloth_cpp_005b8ff4
;   TerminatedCString s_s_is_version_d_this_EXE_005b9006
;   undefined4 DAT_005b904e
;   TerminatedCString s_f_f_f_f_f_f_005b9052
;   TerminatedCString s_f_f_f_f_f_f_f_f_005b9065
;   undefined4 DAT_005b907e
;   undefined4 DAT_005b9082
;   undefined4 DAT_005b9086
;   undefined4 DAT_005b908a
;   undefined4 DAT_005b908e
;   ... and 12 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0
;   core_cloth.cpp_FUN_0043c8a0
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c330
        ;   Label: core_cloth.cpp_FUN_0043c330
    PUSH ESI                            ; 0043c331
    PUSH EDI                            ; 0043c332
    PUSH EBP                            ; 0043c333
    SUB ESP,0x228                       ; 0043c334
    MOV ESI,dword ptr [ESP + 0x23c]     ; 0043c33a
    MOV EBX,dword ptr [ESP + 0x240]     ; 0043c341
    PUSH 0x5b8fae                       ; 0043c348 | DAT_005b8fae
    PUSH EBX                            ; 0043c34d
    PUSH 0x5b8fb1                       ; 0043c34e | = "models"
    CALL engine_dosio.cpp_FUN_004659c0  ; 0043c353
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043c358
    MOV dword ptr [ESP + 0x208],EAX     ; 0043c35b
    TEST EAX,EAX                        ; 0043c362
    JZ 0x0043c82b                       ; 0043c364
        ;   XREF to: 0043c82b (CONDITIONAL_JUMP)  ; LAB_0043c82b
    MOV EDI,dword ptr [ESP + 0x208]     ; 0043c36a
        ;   Label: LAB_0043c36a
    PUSH EDI                            ; 0043c371
    PUSH 0xff                           ; 0043c372
    LEA EAX,[ESP + 0x108]               ; 0043c377
    PUSH EAX                            ; 0043c37e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c37f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c384
    LEA EAX,[ESI + 0x3ab20]             ; 0043c387
    PUSH EAX                            ; 0043c38d
    PUSH 0x5b8ff0                       ; 0043c38e | DAT_005b8ff0
    PUSH EDI                            ; 0043c393
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c394
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 0043c399
    ADD ESP,0xc                         ; 0043c39f
    CMP EAX,0x3                         ; 0043c3a2
    JLE 0x0043c3ce                      ; 0043c3a5
        ;   XREF to: 0043c3ce (CONDITIONAL_JUMP)  ; LAB_0043c3ce
    PUSH 0x3                            ; 0043c3a7
    PUSH EAX                            ; 0043c3a9
    PUSH EBX                            ; 0043c3aa
    MOV EDX,0x5b8ff4                    ; 0043c3ab | = "..\\core\\cloth.cpp"
    MOV ECX,0xa2                        ; 0043c3b0
    PUSH 0x5b9006                       ; 0043c3b5 | = "%s is version %d, this .EXE is old an..."
    MOV dword ptr [0x01d71de0],EDX      ; 0043c3ba | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043c3c0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043c3c6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 0043c3cb
    MOV EBP,dword ptr [ESP + 0x208]     ; 0043c3ce
        ;   Label: LAB_0043c3ce
    PUSH EBP                            ; 0043c3d5
    PUSH 0xff                           ; 0043c3d6
    LEA EAX,[ESP + 0x108]               ; 0043c3db
    PUSH EAX                            ; 0043c3e2
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c3e3
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c3e8
    MOV EAX,ESP                         ; 0043c3eb
    PUSH EAX                            ; 0043c3ed
    PUSH 0x5b904e                       ; 0043c3ee | DAT_005b904e
    PUSH EBP                            ; 0043c3f3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c3f4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0043c3f9
    MOV EAX,ESP                         ; 0043c3fc
    PUSH EAX                            ; 0043c3fe
    PUSH ESI                            ; 0043c3ff
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 ; 0043c400
        ;   XREF to: 00460550 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0043c405
    PUSH ESI                            ; 0043c408
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860 ; 0043c409
        ;   XREF to: 00461860 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00461860(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0043c40e
    PUSH EBP                            ; 0043c411
    PUSH 0xff                           ; 0043c412
    LEA EAX,[ESP + 0x108]               ; 0043c417
    PUSH EAX                            ; 0043c41e
    LEA EBP,[ESI + 0x37b1c]             ; 0043c41f
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c425
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    LEA EAX,[ESI + 0x37b20]             ; 0043c42a
    LEA EBX,[ESI + 0x37b24]             ; 0043c430
    LEA EDX,[ESI + 0x37b28]             ; 0043c436
    LEA EDI,[ESI + 0x37b2c]             ; 0043c43c
    ADD ESP,0xc                         ; 0043c442
    LEA ECX,[ESI + 0x37b30]             ; 0043c445
    MOV dword ptr [ESP + 0x200],ECX     ; 0043c44b
    CMP dword ptr [ESI + 0x3ab20],0x3   ; 0043c452
    JGE 0x0043c854                      ; 0043c459
        ;   XREF to: 0043c854 (CONDITIONAL_JUMP)  ; LAB_0043c854
    MOV ECX,dword ptr [ESP + 0x200]     ; 0043c45f
    PUSH ECX                            ; 0043c466
    PUSH EDI                            ; 0043c467
    PUSH EDX                            ; 0043c468
    PUSH EBX                            ; 0043c469
    PUSH EAX                            ; 0043c46a
    PUSH EBP                            ; 0043c46b
    PUSH 0x5b9052                       ; 0043c46c | = "%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x224]     ; 0043c471
    PUSH EBX                            ; 0043c478
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c479
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    FLD float ptr [0x005dd3c8]          ; 0043c47e | DAT_005dd3c8
    FLD float ptr [0x005dd3cc]          ; 0043c484 | DAT_005dd3cc
    FLD float ptr [0x005dd3d0]          ; 0043c48a | DAT_005dd3d0
    FLD float ptr [0x005dd3d4]          ; 0043c490 | DAT_005dd3d4
    FLD float ptr [0x005dd3d8]          ; 0043c496 | DAT_005dd3d8
    FLD float ptr [0x005dd3dc]          ; 0043c49c | DAT_005dd3dc
    FLD float ptr [0x005dd3e0]          ; 0043c4a2 | DAT_005dd3e0
    ADD ESP,0x20                        ; 0043c4a8
    FXCH ST6                            ; 0043c4ab
    FSTP float ptr [ESI + 0x37b1c]      ; 0043c4ad
    FLD float ptr [0x005dd3e4]          ; 0043c4b3 | DAT_005dd3e4
    FXCH ST5                            ; 0043c4b9
    FSTP float ptr [ESI + 0x37b20]      ; 0043c4bb
    FXCH ST3                            ; 0043c4c1
    FSTP float ptr [ESI + 0x37b24]      ; 0043c4c3
    FXCH                                ; 0043c4c9
    FSTP float ptr [ESI + 0x37b28]      ; 0043c4cb
    FSTP float ptr [ESI + 0x37b2c]      ; 0043c4d1
    FSTP float ptr [ESI + 0x37b30]      ; 0043c4d7
    FXCH                                ; 0043c4dd
    FSTP float ptr [ESI + 0x37b34]      ; 0043c4df
    FSTP float ptr [ESI + 0x37b38]      ; 0043c4e5
    MOV EDI,dword ptr [ESP + 0x208]     ; 0043c4eb
        ;   Label: LAB_0043c4eb
    PUSH EDI                            ; 0043c4f2
    PUSH 0xff                           ; 0043c4f3
    LEA EAX,[ESP + 0x108]               ; 0043c4f8
    PUSH EAX                            ; 0043c4ff
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c500
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c505
    LEA EAX,[ESI + 0x37b18]             ; 0043c508
    PUSH EAX                            ; 0043c50e
    PUSH 0x5b907e                       ; 0043c50f | DAT_005b907e
    PUSH EDI                            ; 0043c514
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c515
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 0043c51a
    ADD ESP,0xc                         ; 0043c520
    CMP EAX,0x2                         ; 0043c523
    JL 0x0043c889                       ; 0043c526
        ;   XREF to: 0043c889 (CONDITIONAL_JUMP)  ; LAB_0043c889
    PUSH EDI                            ; 0043c52c
    PUSH 0xff                           ; 0043c52d
    LEA EAX,[ESP + 0x108]               ; 0043c532
    PUSH EAX                            ; 0043c539
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c53a
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c53f
    LEA EAX,[ESI + 0x37b48]             ; 0043c542
    PUSH EAX                            ; 0043c548
    PUSH 0x5b9082                       ; 0043c549 | DAT_005b9082
    PUSH EDI                            ; 0043c54e
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c54f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0043c554
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043c557
        ;   Label: LAB_0043c557
    PUSH EBX                            ; 0043c55e
    PUSH 0xff                           ; 0043c55f
    LEA EAX,[ESP + 0x108]               ; 0043c564
    PUSH EAX                            ; 0043c56b
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c56c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c571
    LEA EAX,[ESI + 0x39ce8]             ; 0043c574
    PUSH EAX                            ; 0043c57a
    PUSH 0x5b9086                       ; 0043c57b | DAT_005b9086
    PUSH EBX                            ; 0043c580
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c581
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0043c586
    PUSH ESI                            ; 0043c589
    CALL core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0 ; 0043c58a
        ;   XREF to: 0043c2a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043c58f
    PUSH EBX                            ; 0043c592
    PUSH 0xff                           ; 0043c593
    LEA EAX,[ESP + 0x108]               ; 0043c598
    PUSH EAX                            ; 0043c59f
    XOR EBX,EBX                         ; 0043c5a0
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c5a2
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    MOV EAX,dword ptr [ESI + 0x39ce8]   ; 0043c5a7
    ADD ESP,0xc                         ; 0043c5ad
    TEST EAX,EAX                        ; 0043c5b0
    JLE 0x0043c5e0                      ; 0043c5b2
        ;   XREF to: 0043c5e0 (CONDITIONAL_JUMP)  ; LAB_0043c5e0
    LEA EDI,[ESI + 0x39cec]             ; 0043c5b4
    PUSH EDI                            ; 0043c5ba
        ;   Label: LAB_0043c5ba
    PUSH 0x5b908a                       ; 0043c5bb | DAT_005b908a
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043c5c0
    PUSH EDX                            ; 0043c5c7
    INC EBX                             ; 0043c5c8
    ADD EDI,0x4                         ; 0043c5c9
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c5cc
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [ESI + 0x39ce8]   ; 0043c5d1
    ADD ESP,0xc                         ; 0043c5d7
    CMP EBX,ECX                         ; 0043c5da
    JL 0x0043c5ba                       ; 0043c5dc
        ;   XREF to: 0043c5ba (CONDITIONAL_JUMP)  ; LAB_0043c5ba
    MOV EAX,EAX                         ; 0043c5de
    PUSH ESI                            ; 0043c5e0
        ;   Label: LAB_0043c5e0
    CALL core_cloth.cpp_FUN_0043c8a0    ; 0043c5e1
        ;   XREF to: 0043c8a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043c8a0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043c5e6
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043c5e9
    PUSH EBX                            ; 0043c5f0
    PUSH 0xff                           ; 0043c5f1
    LEA EAX,[ESP + 0x108]               ; 0043c5f6
    PUSH EAX                            ; 0043c5fd
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0043c5fe
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0043c603
    LEA EAX,[ESI + 0x37b4c]             ; 0043c606
    PUSH EAX                            ; 0043c60c
    PUSH 0x5b908e                       ; 0043c60d | DAT_005b908e
    PUSH EBX                            ; 0043c612
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c613
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0043c618
    MOV EBP,dword ptr [ESI + 0x37b4c]   ; 0043c61b
    XOR EBX,EBX                         ; 0043c621
    TEST EBP,EBP                        ; 0043c623
    JLE 0x0043c7b0                      ; 0043c625
        ;   XREF to: 0043c7b0 (CONDITIONAL_JUMP)  ; LAB_0043c7b0
    LEA EAX,[ESI + 0x37b50]             ; 0043c62b
    LEA EBP,[ESI + 0x37b64]             ; 0043c631
    MOV dword ptr [ESP + 0x204],EAX     ; 0043c637
    LEA EAX,[ESI + 0x37b68]             ; 0043c63e
    MOV dword ptr [ESP + 0x224],EAX     ; 0043c644
    LEA EAX,[ESI + 0x37b6c]             ; 0043c64b
    MOV dword ptr [ESP + 0x220],EAX     ; 0043c651
    LEA EAX,[ESI + 0x37b70]             ; 0043c658
    MOV dword ptr [ESP + 0x218],EAX     ; 0043c65e
    LEA EAX,[ESI + 0x37b74]             ; 0043c665
    MOV dword ptr [ESP + 0x21c],EAX     ; 0043c66b
    LEA EAX,[ESI + 0x37b78]             ; 0043c672
    MOV dword ptr [ESP + 0x214],EAX     ; 0043c678
    LEA EAX,[ESI + 0x37b80]             ; 0043c67f
    LEA EDI,[ESI + 0x37b7c]             ; 0043c685
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043c68b
    LEA EAX,[ESI + 0x37b84]             ; 0043c692
    MOV dword ptr [ESP + 0x210],EAX     ; 0043c698
    IMUL EAX,EBX,0xac                   ; 0043c69f
        ;   Label: LAB_0043c69f
    MOV ECX,dword ptr [ESP + 0x210]     ; 0043c6a5
    PUSH ECX                            ; 0043c6ac
    MOV EDX,dword ptr [ESP + 0x208]     ; 0043c6ad
    PUSH EDI                            ; 0043c6b4
    ADD EAX,EDX                         ; 0043c6b5
    MOV EDX,dword ptr [ESP + 0x214]     ; 0043c6b7
    PUSH EDX                            ; 0043c6be
    MOV ECX,dword ptr [ESP + 0x220]     ; 0043c6bf
    PUSH ECX                            ; 0043c6c6
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0043c6c7
    PUSH EDX                            ; 0043c6ce
    MOV ECX,dword ptr [ESP + 0x22c]     ; 0043c6cf
    PUSH ECX                            ; 0043c6d6
    MOV EDX,dword ptr [ESP + 0x238]     ; 0043c6d7
    PUSH EDX                            ; 0043c6de
    MOV ECX,dword ptr [ESP + 0x240]     ; 0043c6df
    PUSH ECX                            ; 0043c6e6
    PUSH EBP                            ; 0043c6e7
    PUSH EAX                            ; 0043c6e8
    PUSH 0x5b9092                       ; 0043c6e9 | = "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f,..."
    MOV EAX,dword ptr [ESP + 0x234]     ; 0043c6ee
    PUSH EAX                            ; 0043c6f5
    ADD EDI,0xac                        ; 0043c6f6
    INC EBX                             ; 0043c6fc
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c6fd
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x30                        ; 0043c702
    ADD EBP,0xac                        ; 0043c705
    MOV EDX,dword ptr [ESP + 0x224]     ; 0043c70b
    MOV ECX,dword ptr [ESP + 0x220]     ; 0043c712
    MOV EAX,dword ptr [ESP + 0x218]     ; 0043c719
    ADD EDX,0xac                        ; 0043c720
    ADD ECX,0xac                        ; 0043c726
    ADD EAX,0xac                        ; 0043c72c
    MOV dword ptr [ESP + 0x224],EDX     ; 0043c731
    MOV dword ptr [ESP + 0x220],ECX     ; 0043c738
    MOV dword ptr [ESP + 0x218],EAX     ; 0043c73f
    MOV EDX,dword ptr [ESP + 0x21c]     ; 0043c746
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043c74d
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0043c754
    ADD EDX,0xac                        ; 0043c75b
    ADD ECX,0xac                        ; 0043c761
    ADD EAX,0xac                        ; 0043c767
    MOV dword ptr [ESP + 0x21c],EDX     ; 0043c76c
    MOV dword ptr [ESP + 0x214],ECX     ; 0043c773
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043c77a
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043c781
    ADD EDX,0xac                        ; 0043c788
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 0043c78e
    MOV dword ptr [ESP + 0x210],EDX     ; 0043c794
    CMP EBX,ECX                         ; 0043c79b
    JL 0x0043c69f                       ; 0043c79d
        ;   XREF to: 0043c69f (CONDITIONAL_JUMP)  ; LAB_0043c69f
    LEA EAX,[EAX]                       ; 0043c7a3
    LEA EDX,[EDX]                       ; 0043c7a9
    NOP                                 ; 0043c7af
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043c7b0
        ;   Label: LAB_0043c7b0
    PUSH EBX                            ; 0043c7b7
    XOR EDI,EDI                         ; 0043c7b8
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0043c7ba
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EBP,dword ptr [ESI + 0x104]     ; 0043c7bf
    ADD ESP,0x4                         ; 0043c7c5
    TEST EBP,EBP                        ; 0043c7c8
    JLE 0x0043c820                      ; 0043c7ca
        ;   XREF to: 0043c820 (CONDITIONAL_JUMP)  ; LAB_0043c820
    LEA EDX,[ESI + 0x458]               ; 0043c7cc
    XOR EBP,EBP                         ; 0043c7d2
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0043c7d4
        ;   Label: LAB_0043c7d4
    MOV EBX,EDX                         ; 0043c7da
    ADD EAX,EBP                         ; 0043c7dc
    INC EDI                             ; 0043c7de
    FILD dword ptr [EAX]                ; 0043c7df
    FMUL float ptr [0x005dd3b8]         ; 0043c7e1 | DAT_005dd3b8
    FSTP float ptr [EBX]                ; 0043c7e7
    FILD dword ptr [EAX + 0x4]          ; 0043c7e9
    FMUL float ptr [0x005dd3b8]         ; 0043c7ec | DAT_005dd3b8
    FSTP float ptr [EBX + 0x4]          ; 0043c7f2
    FILD dword ptr [EAX + 0x8]          ; 0043c7f5
    FMUL float ptr [0x005dd3b8]         ; 0043c7f8 | DAT_005dd3b8
    FSTP float ptr [EBX + 0x8]          ; 0043c7fe
    ADD EDX,0x11c                       ; 0043c801
    MOV EAX,dword ptr [ESI + 0x104]     ; 0043c807
    ADD EBP,0xc                         ; 0043c80d
    CMP EDI,EAX                         ; 0043c810
    JL 0x0043c7d4                       ; 0043c812
        ;   XREF to: 0043c7d4 (CONDITIONAL_JUMP)  ; LAB_0043c7d4
    LEA EAX,[EAX]                       ; 0043c814
    LEA EDX,[EDX]                       ; 0043c81a
    ADD ESP,0x228                       ; 0043c820
        ;   Label: LAB_0043c820
    POP EBP                             ; 0043c826
    POP EDI                             ; 0043c827
    POP ESI                             ; 0043c828
    POP EBX                             ; 0043c829
    RET                                 ; 0043c82a
    PUSH EBX                            ; 0043c82b
        ;   Label: LAB_0043c82b
    MOV EDX,0x5b8fb8                    ; 0043c82c | = "..\\core\\cloth.cpp"
    MOV ECX,0x9b                        ; 0043c831
    PUSH 0x5b8fca                       ; 0043c836 | = "CCloth::load - Unable to open file %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0043c83b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043c841 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043c847
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0043c84c
    JMP 0x0043c36a                      ; 0043c84f
        ;   XREF to: 0043c36a (UNCONDITIONAL_JUMP)  ; LAB_0043c36a
    LEA ECX,[ESI + 0x37b38]             ; 0043c854
        ;   Label: LAB_0043c854
    PUSH ECX                            ; 0043c85a
    LEA ECX,[ESI + 0x37b34]             ; 0043c85b
    PUSH ECX                            ; 0043c861
    MOV ECX,dword ptr [ESP + 0x208]     ; 0043c862
    PUSH ECX                            ; 0043c869
    PUSH EDI                            ; 0043c86a
    PUSH EDX                            ; 0043c86b
    PUSH EBX                            ; 0043c86c
    PUSH EAX                            ; 0043c86d
    PUSH EBP                            ; 0043c86e
    PUSH 0x5b9065                       ; 0043c86f | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 0043c874
    PUSH EBX                            ; 0043c87b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0043c87c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x28                        ; 0043c881
    JMP 0x0043c4eb                      ; 0043c884
        ;   XREF to: 0043c4eb (UNCONDITIONAL_JUMP)  ; LAB_0043c4eb
    MOV dword ptr [ESI + 0x37b48],0x0   ; 0043c889
        ;   Label: LAB_0043c889
    JMP 0x0043c557                      ; 0043c893
        ;   XREF to: 0043c557 (UNCONDITIONAL_JUMP)  ; LAB_0043c557

