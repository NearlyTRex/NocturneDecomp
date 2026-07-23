; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(int param_1,undefined4 param_2)
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
; XREF[5]:
;   FUN_004d4650 at 004d4829
;   FUN_0054c3e0 at 0054c422
;   core_cloth.cpp_CClothList_load_FUN_00438270 at 004382e6
;   core_gabriela.cpp_CGabriella_setup_FUN_004957c0 at 004957f9
;   core_svetlana.cpp_CSvetlana_setup_FUN_00541a40 at 00541c33
;
; Referenced Globals:
;   TerminatedCString s_rt_0057acab
;   TerminatedCString s_models_0057acae
;   TerminatedCString s_core_cloth_cpp_0057acb5
;   TerminatedCString s_CCloth_load_Unable_to_op_0057acc7
;   TerminatedCString s_d_0057aced
;   TerminatedCString s_core_cloth_cpp_0057acf1
;   TerminatedCString s_s_is_version_d_this_EXE_0057ad03
;   TerminatedCString s_s_0057ad4b
;   TerminatedCString s_f_f_f_f_f_f_0057ad4f
;   TerminatedCString s_f_f_f_f_f_f_f_f_0057ad62
;   TerminatedCString s_f_0057ad7b
;   TerminatedCString s_d_0057ad7f
;   TerminatedCString s_d_0057ad83
;   TerminatedCString s_d_0057ad87
;   TerminatedCString s_d_0057ad8b
;   ... and 12 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
;   core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435240
        ;   Label: core_cloth.cpp_CCloth_load_FUN_00435240
    PUSH ESI                            ; 00435241
    PUSH EDI                            ; 00435242
    PUSH EBP                            ; 00435243
    SUB ESP,0x228                       ; 00435244
    MOV ESI,dword ptr [ESP + 0x23c]     ; 0043524a
    MOV EBX,dword ptr [ESP + 0x240]     ; 00435251
    PUSH 0x57acab                       ; 00435258 | = "rt"
    PUSH EBX                            ; 0043525d
    PUSH 0x57acae                       ; 0043525e | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00435263
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00435268
    MOV dword ptr [ESP + 0x208],EAX     ; 0043526b
    TEST EAX,EAX                        ; 00435272
    JZ 0x0043573b                       ; 00435274
        ;   XREF to: 0043573b (CONDITIONAL_JUMP)  ; LAB_0043573b
    MOV EDI,dword ptr [ESP + 0x208]     ; 0043527a
        ;   Label: LAB_0043527a
    PUSH EDI                            ; 00435281
    PUSH 0xff                           ; 00435282
    LEA EAX,[ESP + 0x108]               ; 00435287
    PUSH EAX                            ; 0043528e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0043528f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00435294
    LEA EAX,[ESI + 0x3ab20]             ; 00435297
    PUSH EAX                            ; 0043529d
    PUSH 0x57aced                       ; 0043529e | = "%d\n"
    PUSH EDI                            ; 004352a3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004352a4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 004352a9
    ADD ESP,0xc                         ; 004352af
    CMP EAX,0x3                         ; 004352b2
    JLE 0x004352de                      ; 004352b5
        ;   XREF to: 004352de (CONDITIONAL_JUMP)  ; LAB_004352de
    PUSH 0x3                            ; 004352b7
    PUSH EAX                            ; 004352b9
    PUSH EBX                            ; 004352ba
    MOV EDX,0x57acf1                    ; 004352bb | = "..\\core\\cloth.cpp"
    MOV ECX,0xa2                        ; 004352c0
    PUSH 0x57ad03                       ; 004352c5 | = "%s is version %d, this .EXE is old an..."
    MOV dword ptr [0x01cc4800],EDX      ; 004352ca | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004352d0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004352d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x10                        ; 004352db
    MOV EBP,dword ptr [ESP + 0x208]     ; 004352de
        ;   Label: LAB_004352de
    PUSH EBP                            ; 004352e5
    PUSH 0xff                           ; 004352e6
    LEA EAX,[ESP + 0x108]               ; 004352eb
    PUSH EAX                            ; 004352f2
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004352f3
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 004352f8
    MOV EAX,ESP                         ; 004352fb
    PUSH EAX                            ; 004352fd
    PUSH 0x57ad4b                       ; 004352fe | = "%s\n"
    PUSH EBP                            ; 00435303
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00435304
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00435309
    MOV EAX,ESP                         ; 0043530c
    PUSH EAX                            ; 0043530e
    PUSH ESI                            ; 0043530f
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 ; 00435310
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650()
    ADD ESP,0x8                         ; 00435315
    PUSH ESI                            ; 00435318
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950 ; 00435319
        ;   XREF to: 00453950 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950()
    ADD ESP,0x4                         ; 0043531e
    PUSH EBP                            ; 00435321
    PUSH 0xff                           ; 00435322
    LEA EAX,[ESP + 0x108]               ; 00435327
    PUSH EAX                            ; 0043532e
    LEA EBP,[ESI + 0x37b18]             ; 0043532f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00435335
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    LEA EAX,[ESI + 0x37b1c]             ; 0043533a
    LEA EBX,[ESI + 0x37b20]             ; 00435340
    LEA EDX,[ESI + 0x37b24]             ; 00435346
    LEA EDI,[ESI + 0x37b28]             ; 0043534c
    ADD ESP,0xc                         ; 00435352
    LEA ECX,[ESI + 0x37b2c]             ; 00435355
    MOV dword ptr [ESP + 0x200],ECX     ; 0043535b
    CMP dword ptr [ESI + 0x3ab20],0x3   ; 00435362
    JGE 0x00435764                      ; 00435369
        ;   XREF to: 00435764 (CONDITIONAL_JUMP)  ; LAB_00435764
    MOV ECX,dword ptr [ESP + 0x200]     ; 0043536f
    PUSH ECX                            ; 00435376
    PUSH EDI                            ; 00435377
    PUSH EDX                            ; 00435378
    PUSH EBX                            ; 00435379
    PUSH EAX                            ; 0043537a
    PUSH EBP                            ; 0043537b
    PUSH 0x57ad4f                       ; 0043537c | = "%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x224]     ; 00435381
    PUSH EBX                            ; 00435388
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00435389
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    FLD float ptr [0x0059b378]          ; 0043538e | FLOAT_0059b378
    FLD float ptr [0x0059b37c]          ; 00435394 | FLOAT_0059b37c
    FLD float ptr [0x0059b380]          ; 0043539a | FLOAT_0059b380
    FLD float ptr [0x0059b384]          ; 004353a0 | FLOAT_0059b384
    FLD float ptr [0x0059b388]          ; 004353a6 | FLOAT_0059b388
    FLD float ptr [0x0059b38c]          ; 004353ac | FLOAT_0059b38c
    FLD float ptr [0x0059b390]          ; 004353b2 | FLOAT_0059b390
    ADD ESP,0x20                        ; 004353b8
    FXCH ST6                            ; 004353bb
    FSTP float ptr [ESI + 0x37b18]      ; 004353bd
    FLD float ptr [0x0059b394]          ; 004353c3 | FLOAT_0059b394
    FXCH ST5                            ; 004353c9
    FSTP float ptr [ESI + 0x37b1c]      ; 004353cb
    FXCH ST3                            ; 004353d1
    FSTP float ptr [ESI + 0x37b20]      ; 004353d3
    FXCH                                ; 004353d9
    FSTP float ptr [ESI + 0x37b24]      ; 004353db
    FSTP float ptr [ESI + 0x37b28]      ; 004353e1
    FSTP float ptr [ESI + 0x37b2c]      ; 004353e7
    FXCH                                ; 004353ed
    FSTP float ptr [ESI + 0x37b30]      ; 004353ef
    FSTP float ptr [ESI + 0x37b34]      ; 004353f5
    MOV EDI,dword ptr [ESP + 0x208]     ; 004353fb
        ;   Label: LAB_004353fb
    PUSH EDI                            ; 00435402
    PUSH 0xff                           ; 00435403
    LEA EAX,[ESP + 0x108]               ; 00435408
    PUSH EAX                            ; 0043540f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00435410
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00435415
    LEA EAX,[ESI + 0x37b48]             ; 00435418
    PUSH EAX                            ; 0043541e
    PUSH 0x57ad7b                       ; 0043541f | = "%f\n"
    PUSH EDI                            ; 00435424
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00435425
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 0043542a
    ADD ESP,0xc                         ; 00435430
    CMP EAX,0x2                         ; 00435433
    JL 0x00435799                       ; 00435436
        ;   XREF to: 00435799 (CONDITIONAL_JUMP)  ; LAB_00435799
    PUSH EDI                            ; 0043543c
    PUSH 0xff                           ; 0043543d
    LEA EAX,[ESP + 0x108]               ; 00435442
    PUSH EAX                            ; 00435449
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0043544a
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 0043544f
    LEA EAX,[ESI + 0x37b44]             ; 00435452
    PUSH EAX                            ; 00435458
    PUSH 0x57ad7f                       ; 00435459 | = "%d\n"
    PUSH EDI                            ; 0043545e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043545f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00435464
    MOV EBX,dword ptr [ESP + 0x208]     ; 00435467
        ;   Label: LAB_00435467
    PUSH EBX                            ; 0043546e
    PUSH 0xff                           ; 0043546f
    LEA EAX,[ESP + 0x108]               ; 00435474
    PUSH EAX                            ; 0043547b
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0043547c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00435481
    LEA EAX,[ESI + 0x39ce8]             ; 00435484
    PUSH EAX                            ; 0043548a
    PUSH 0x57ad83                       ; 0043548b | = "%d\n"
    PUSH EBX                            ; 00435490
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00435491
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00435496
    PUSH ESI                            ; 00435499
    CALL core_cloth.cpp_CCloth_allocMemory_FUN_004351b0 ; 0043549a
        ;   XREF to: 004351b0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_allocMemory_FUN_004351b0()
    ADD ESP,0x4                         ; 0043549f
    PUSH EBX                            ; 004354a2
    PUSH 0xff                           ; 004354a3
    LEA EAX,[ESP + 0x108]               ; 004354a8
    PUSH EAX                            ; 004354af
    XOR EBX,EBX                         ; 004354b0
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004354b2
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    MOV EAX,dword ptr [ESI + 0x39ce8]   ; 004354b7
    ADD ESP,0xc                         ; 004354bd
    TEST EAX,EAX                        ; 004354c0
    JLE 0x004354f0                      ; 004354c2
        ;   XREF to: 004354f0 (CONDITIONAL_JUMP)  ; LAB_004354f0
    LEA EDI,[ESI + 0x39cec]             ; 004354c4
    PUSH EDI                            ; 004354ca
        ;   Label: LAB_004354ca
    PUSH 0x57ad87                       ; 004354cb | = "%d\n"
    MOV EDX,dword ptr [ESP + 0x210]     ; 004354d0
    PUSH EDX                            ; 004354d7
    INC EBX                             ; 004354d8
    ADD EDI,0x4                         ; 004354d9
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004354dc
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV ECX,dword ptr [ESI + 0x39ce8]   ; 004354e1
    ADD ESP,0xc                         ; 004354e7
    CMP EBX,ECX                         ; 004354ea
    JL 0x004354ca                       ; 004354ec
        ;   XREF to: 004354ca (CONDITIONAL_JUMP)  ; LAB_004354ca
    MOV EAX,EAX                         ; 004354ee
    PUSH ESI                            ; 004354f0
        ;   Label: LAB_004354f0
    CALL core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0 ; 004354f1
        ;   XREF to: 004357b0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0()
    ADD ESP,0x4                         ; 004354f6
    MOV EBX,dword ptr [ESP + 0x208]     ; 004354f9
    PUSH EBX                            ; 00435500
    PUSH 0xff                           ; 00435501
    LEA EAX,[ESP + 0x108]               ; 00435506
    PUSH EAX                            ; 0043550d
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0043550e
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00435513
    LEA EAX,[ESI + 0x37b4c]             ; 00435516
    PUSH EAX                            ; 0043551c
    PUSH 0x57ad8b                       ; 0043551d | = "%d\n"
    PUSH EBX                            ; 00435522
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00435523
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00435528
    MOV EBP,dword ptr [ESI + 0x37b4c]   ; 0043552b
    XOR EBX,EBX                         ; 00435531
    TEST EBP,EBP                        ; 00435533
    JLE 0x004356c0                      ; 00435535
        ;   XREF to: 004356c0 (CONDITIONAL_JUMP)  ; LAB_004356c0
    LEA EAX,[ESI + 0x37b50]             ; 0043553b
    LEA EBP,[ESI + 0x37b64]             ; 00435541
    MOV dword ptr [ESP + 0x204],EAX     ; 00435547
    LEA EAX,[ESI + 0x37b68]             ; 0043554e
    MOV dword ptr [ESP + 0x224],EAX     ; 00435554
    LEA EAX,[ESI + 0x37b6c]             ; 0043555b
    MOV dword ptr [ESP + 0x220],EAX     ; 00435561
    LEA EAX,[ESI + 0x37b70]             ; 00435568
    MOV dword ptr [ESP + 0x218],EAX     ; 0043556e
    LEA EAX,[ESI + 0x37b74]             ; 00435575
    MOV dword ptr [ESP + 0x21c],EAX     ; 0043557b
    LEA EAX,[ESI + 0x37b78]             ; 00435582
    MOV dword ptr [ESP + 0x214],EAX     ; 00435588
    LEA EAX,[ESI + 0x37b80]             ; 0043558f
    LEA EDI,[ESI + 0x37b7c]             ; 00435595
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043559b
    LEA EAX,[ESI + 0x37b84]             ; 004355a2
    MOV dword ptr [ESP + 0x210],EAX     ; 004355a8
    IMUL EAX,EBX,0xac                   ; 004355af
        ;   Label: LAB_004355af
    MOV ECX,dword ptr [ESP + 0x210]     ; 004355b5
    PUSH ECX                            ; 004355bc
    MOV EDX,dword ptr [ESP + 0x208]     ; 004355bd
    PUSH EDI                            ; 004355c4
    ADD EAX,EDX                         ; 004355c5
    MOV EDX,dword ptr [ESP + 0x214]     ; 004355c7
    PUSH EDX                            ; 004355ce
    MOV ECX,dword ptr [ESP + 0x220]     ; 004355cf
    PUSH ECX                            ; 004355d6
    MOV EDX,dword ptr [ESP + 0x22c]     ; 004355d7
    PUSH EDX                            ; 004355de
    MOV ECX,dword ptr [ESP + 0x22c]     ; 004355df
    PUSH ECX                            ; 004355e6
    MOV EDX,dword ptr [ESP + 0x238]     ; 004355e7
    PUSH EDX                            ; 004355ee
    MOV ECX,dword ptr [ESP + 0x240]     ; 004355ef
    PUSH ECX                            ; 004355f6
    PUSH EBP                            ; 004355f7
    PUSH EAX                            ; 004355f8
    PUSH 0x57ad8f                       ; 004355f9 | = "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f,..."
    MOV EAX,dword ptr [ESP + 0x234]     ; 004355fe
    PUSH EAX                            ; 00435605
    ADD EDI,0xac                        ; 00435606
    INC EBX                             ; 0043560c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043560d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x30                        ; 00435612
    ADD EBP,0xac                        ; 00435615
    MOV EDX,dword ptr [ESP + 0x224]     ; 0043561b
    MOV ECX,dword ptr [ESP + 0x220]     ; 00435622
    MOV EAX,dword ptr [ESP + 0x218]     ; 00435629
    ADD EDX,0xac                        ; 00435630
    ADD ECX,0xac                        ; 00435636
    ADD EAX,0xac                        ; 0043563c
    MOV dword ptr [ESP + 0x224],EDX     ; 00435641
    MOV dword ptr [ESP + 0x220],ECX     ; 00435648
    MOV dword ptr [ESP + 0x218],EAX     ; 0043564f
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00435656
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043565d
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00435664
    ADD EDX,0xac                        ; 0043566b
    ADD ECX,0xac                        ; 00435671
    ADD EAX,0xac                        ; 00435677
    MOV dword ptr [ESP + 0x21c],EDX     ; 0043567c
    MOV dword ptr [ESP + 0x214],ECX     ; 00435683
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043568a
    MOV dword ptr [ESP + 0x20c],EAX     ; 00435691
    ADD EDX,0xac                        ; 00435698
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 0043569e
    MOV dword ptr [ESP + 0x210],EDX     ; 004356a4
    CMP EBX,ECX                         ; 004356ab
    JL 0x004355af                       ; 004356ad
        ;   XREF to: 004355af (CONDITIONAL_JUMP)  ; LAB_004355af
    LEA EAX,[EAX]                       ; 004356b3
    LEA EDX,[EDX]                       ; 004356b9
    NOP                                 ; 004356bf
    MOV EBX,dword ptr [ESP + 0x208]     ; 004356c0
        ;   Label: LAB_004356c0
    PUSH EBX                            ; 004356c7
    XOR EDI,EDI                         ; 004356c8
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004356ca
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV EBP,dword ptr [ESI + 0x104]     ; 004356cf
    ADD ESP,0x4                         ; 004356d5
    TEST EBP,EBP                        ; 004356d8
    JLE 0x00435730                      ; 004356da
        ;   XREF to: 00435730 (CONDITIONAL_JUMP)  ; LAB_00435730
    LEA EDX,[ESI + 0x458]               ; 004356dc
    XOR EBP,EBP                         ; 004356e2
    MOV EAX,dword ptr [ESI + 0x10c]     ; 004356e4
        ;   Label: LAB_004356e4
    MOV EBX,EDX                         ; 004356ea
    ADD EAX,EBP                         ; 004356ec
    INC EDI                             ; 004356ee
    FILD dword ptr [EAX]                ; 004356ef
    FMUL float ptr [0x0059b368]         ; 004356f1 | DAT_0059b368
    FSTP float ptr [EBX]                ; 004356f7
    FILD dword ptr [EAX + 0x4]          ; 004356f9
    FMUL float ptr [0x0059b368]         ; 004356fc | DAT_0059b368
    FSTP float ptr [EBX + 0x4]          ; 00435702
    FILD dword ptr [EAX + 0x8]          ; 00435705
    FMUL float ptr [0x0059b368]         ; 00435708 | DAT_0059b368
    FSTP float ptr [EBX + 0x8]          ; 0043570e
    ADD EDX,0x11c                       ; 00435711
    MOV EAX,dword ptr [ESI + 0x104]     ; 00435717
    ADD EBP,0xc                         ; 0043571d
    CMP EDI,EAX                         ; 00435720
    JL 0x004356e4                       ; 00435722
        ;   XREF to: 004356e4 (CONDITIONAL_JUMP)  ; LAB_004356e4
    LEA EAX,[EAX]                       ; 00435724
    LEA EDX,[EDX]                       ; 0043572a
    ADD ESP,0x228                       ; 00435730
        ;   Label: LAB_00435730
    POP EBP                             ; 00435736
    POP EDI                             ; 00435737
    POP ESI                             ; 00435738
    POP EBX                             ; 00435739
    RET                                 ; 0043573a
    PUSH EBX                            ; 0043573b
        ;   Label: LAB_0043573b
    MOV EDX,0x57acb5                    ; 0043573c | = "..\\core\\cloth.cpp"
    MOV ECX,0x9b                        ; 00435741
    PUSH 0x57acc7                       ; 00435746 | = "CCloth::load - Unable to open file %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0043574b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00435751 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00435757
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0043575c
    JMP 0x0043527a                      ; 0043575f
        ;   XREF to: 0043527a (UNCONDITIONAL_JUMP)  ; LAB_0043527a
    LEA ECX,[ESI + 0x37b34]             ; 00435764
        ;   Label: LAB_00435764
    PUSH ECX                            ; 0043576a
    LEA ECX,[ESI + 0x37b30]             ; 0043576b
    PUSH ECX                            ; 00435771
    MOV ECX,dword ptr [ESP + 0x208]     ; 00435772
    PUSH ECX                            ; 00435779
    PUSH EDI                            ; 0043577a
    PUSH EDX                            ; 0043577b
    PUSH EBX                            ; 0043577c
    PUSH EAX                            ; 0043577d
    PUSH EBP                            ; 0043577e
    PUSH 0x57ad62                       ; 0043577f | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 00435784
    PUSH EBX                            ; 0043578b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0043578c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x28                        ; 00435791
    JMP 0x004353fb                      ; 00435794
        ;   XREF to: 004353fb (UNCONDITIONAL_JUMP)  ; LAB_004353fb
    MOV dword ptr [ESI + 0x37b44],0x0   ; 00435799
        ;   Label: LAB_00435799
    JMP 0x00435467                      ; 004357a3
        ;   XREF to: 00435467 (UNCONDITIONAL_JUMP)  ; LAB_00435467

