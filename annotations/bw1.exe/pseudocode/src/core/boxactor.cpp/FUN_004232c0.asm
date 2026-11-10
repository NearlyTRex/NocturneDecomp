; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_FUN_004232c0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_setup_FUN_00422f60 at 00422f66
;
; Referenced Globals:
;   undefined4 DAT_005d4de4
;   undefined4 DAT_005d4de8
;   undefined4 DAT_007c5058
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004232c0
        ;   Label: core_boxactor.cpp_FUN_004232c0
    PUSH ESI                            ; 004232c1
    PUSH EDI                            ; 004232c2
    PUSH EBP                            ; 004232c3
    MOV EBP,ESP                         ; 004232c4
    SUB ESP,0x150                       ; 004232c6
    AND ESP,0xfffffff8                  ; 004232cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004232cf
    MOV EAX,dword ptr [EBX + 0x678]     ; 004232d2
    CMP EAX,0x1                         ; 004232d8
    JC 0x00423308                       ; 004232db
        ;   XREF to: 00423308 (CONDITIONAL_JUMP)  ; LAB_00423308
    LEA ESI,[EBX + 0x67c]               ; 004232dd
    MOV dword ptr [ESP + 0x148],ESI     ; 004232e3
    LEA ESI,[EBX + 0x3634]              ; 004232ea
    MOV dword ptr [ESP + 0x14c],ESI     ; 004232f0
    LEA ESI,[EBX + 0x158]               ; 004232f7
    JBE 0x0042330f                      ; 004232fd
        ;   XREF to: 0042330f (CONDITIONAL_JUMP)  ; LAB_0042330f
    CMP EAX,0x2                         ; 004232ff
    JZ 0x004234d4                       ; 00423302
        ;   XREF to: 004234d4 (CONDITIONAL_JUMP)  ; LAB_004234d4
    MOV ESP,EBP                         ; 00423308
        ;   Label: LAB_00423308
    POP EBP                             ; 0042330a
    POP EDI                             ; 0042330b
    POP ESI                             ; 0042330c
    POP EBX                             ; 0042330d
    RET                                 ; 0042330e
    PUSH 0x5d4dbb                       ; 0042330f
        ;   Label: LAB_0042330f
    PUSH ESI                            ; 00423314
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00423315
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0042331a
    PUSH ESI                            ; 0042331d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0042331e
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423323
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423326
    PUSH EBX                            ; 0042332c
    LEA ESI,[ESP + 0x2c]                ; 0042332d
    LEA EDI,[ESP + 0x74]                ; 00423331
    CALL dword ptr [EAX + 0x1c]         ; 00423335
    MOV ECX,0x6                         ; 00423338
    LEA ESI,[ESP + 0x2c]                ; 0042333d
    ADD ESP,0x4                         ; 00423341
    MOVSD.REP ES:EDI,ESI                ; 00423344
    FLD float ptr [ESP + 0x70]          ; 00423346
    FLD float ptr [ESP + 0x74]          ; 0042334a
    FLD float ptr [ESP + 0x78]          ; 0042334e
    LEA EDI,[ESP + 0xd0]                ; 00423352
    LEA ESI,[ESP + 0xb8]                ; 00423359
    FXCH ST2                            ; 00423360
    FADD float ptr [ESP + 0x7c]         ; 00423362
    FXCH                                ; 00423366
    FADD float ptr [ESP + 0x80]         ; 00423368
    FXCH ST2                            ; 0042336f
    FADD float ptr [ESP + 0x84]         ; 00423371
    FXCH                                ; 00423378
    FSTP float ptr [ESP + 0xb8]         ; 0042337a
    FXCH                                ; 00423381
    FSTP float ptr [ESP + 0xbc]         ; 00423383
    FSTP float ptr [ESP + 0xc0]         ; 0042338a
    MOVSD ES:EDI,ESI                    ; 00423391
    MOVSD ES:EDI,ESI                    ; 00423392
    MOVSD ES:EDI,ESI                    ; 00423393
    FLD float ptr [0x005d4de4]          ; 00423394 | DAT_005d4de4
    FLD float ptr [ESP + 0xd0]          ; 0042339a
    FMUL ST1                            ; 004233a1
    FLD float ptr [ESP + 0xd4]          ; 004233a3
    FMUL ST2                            ; 004233aa
    FLD float ptr [ESP + 0xd8]          ; 004233ac
    FMUL ST3                            ; 004233b3
    LEA EDI,[ESP + 0xdc]                ; 004233b5
    LEA ESI,[ESP + 0x10c]               ; 004233bc
    FXCH ST2                            ; 004233c3
    FSTP float ptr [ESP + 0x10c]        ; 004233c5
    FSTP float ptr [ESP + 0x110]        ; 004233cc
    FSTP float ptr [ESP + 0x114]        ; 004233d3
    MOVSD ES:EDI,ESI                    ; 004233da
    MOVSD ES:EDI,ESI                    ; 004233db
    MOVSD ES:EDI,ESI                    ; 004233dc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004233dd
    MOV dword ptr [EBX + 0x3628],EAX    ; 004233e4
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004233ea
    MOV dword ptr [ESP + 0xf4],EAX      ; 004233f1
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004233f8
    LEA EDI,[ESP + 0x94]                ; 004233ff
    MOV dword ptr [ESP + 0xf8],EAX      ; 00423406
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042340d
    LEA ESI,[ESP + 0xf4]                ; 00423414
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042341b
    MOVSD ES:EDI,ESI                    ; 00423422
    MOVSD ES:EDI,ESI                    ; 00423423
    MOVSD ES:EDI,ESI                    ; 00423424
    FLD float ptr [ESP + 0x94]          ; 00423425
    FMUL ST1                            ; 0042342c
    FLD float ptr [ESP + 0x98]          ; 0042342e
    FMUL ST2                            ; 00423435
    FLD float ptr [ESP + 0x9c]          ; 00423437
    FMULP ST3                           ; 0042343e
    LEA EDI,[ESP + 0xc4]                ; 00423440
    LEA ESI,[ESP + 0x130]               ; 00423447
    FXCH                                ; 0042344e
    FSTP float ptr [ESP + 0x130]        ; 00423450
    FSTP float ptr [ESP + 0x134]        ; 00423457
    FSTP float ptr [ESP + 0x138]        ; 0042345e
    MOVSD ES:EDI,ESI                    ; 00423465
    MOVSD ES:EDI,ESI                    ; 00423466
    MOVSD ES:EDI,ESI                    ; 00423467
    FLD float ptr [ESP + 0x84]          ; 00423468
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0042346f
    FADD double ptr [0x005d4de8]        ; 00423476 | DAT_005d4de8
    MOV dword ptr [EBX + 0x362c],EAX    ; 0042347c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00423482
    FSTP float ptr [EBX + 0x3630]       ; 00423489
    MOV dword ptr [EAX + 0x8],0x0       ; 0042348f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423496
    MOV dword ptr [EAX + 0x4],EDX       ; 00423499
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042349c
    MOV dword ptr [EAX],EDX             ; 0042349f
    MOV EAX,dword ptr [ESP + 0x148]     ; 004234a1
    MOV dword ptr [EBX + 0x2330],0x0    ; 004234a8
    MOV dword ptr [EAX + 0x38],0x42600000 ; 004234b2
    MOV dword ptr [EBX + 0x7bc],0x42000000 ; 004234b9
    MOV dword ptr [EBX + 0x314],0x3     ; 004234c3
    MOV ESP,EBP                         ; 004234cd
    POP EBP                             ; 004234cf
    POP EDI                             ; 004234d0
    POP ESI                             ; 004234d1
    POP EBX                             ; 004234d2
    RET                                 ; 004234d3
    PUSH 0x5d4dc8                       ; 004234d4
        ;   Label: LAB_004234d4
    PUSH ESI                            ; 004234d9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004234da
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004234df
    PUSH ESI                            ; 004234e2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004234e3
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004234e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004234eb
    PUSH EBX                            ; 004234f1
    LEA ESI,[ESP + 0x5c]                ; 004234f2
    LEA EDI,[ESP + 0x44]                ; 004234f6
    CALL dword ptr [EAX + 0x1c]         ; 004234fa
    MOV ECX,0x6                         ; 004234fd
    LEA ESI,[ESP + 0x5c]                ; 00423502
    ADD ESP,0x4                         ; 00423506
    MOVSD.REP ES:EDI,ESI                ; 00423509
    FLD float ptr [ESP + 0x40]          ; 0042350b
    FLD float ptr [ESP + 0x44]          ; 0042350f
    FLD float ptr [ESP + 0x48]          ; 00423513
    LEA EDI,[ESP + 0x100]               ; 00423517
    LEA ESI,[ESP + 0x118]               ; 0042351e
    FXCH ST2                            ; 00423525
    FADD float ptr [ESP + 0x4c]         ; 00423527
    FXCH                                ; 0042352b
    FADD float ptr [ESP + 0x50]         ; 0042352d
    FXCH ST2                            ; 00423531
    FADD float ptr [ESP + 0x54]         ; 00423533
    FXCH                                ; 00423537
    FSTP float ptr [ESP + 0x118]        ; 00423539
    FXCH                                ; 00423540
    FSTP float ptr [ESP + 0x11c]        ; 00423542
    FSTP float ptr [ESP + 0x120]        ; 00423549
    MOVSD ES:EDI,ESI                    ; 00423550
    MOVSD ES:EDI,ESI                    ; 00423551
    MOVSD ES:EDI,ESI                    ; 00423552
    FLD float ptr [0x005d4de4]          ; 00423553 | DAT_005d4de4
    FLD float ptr [ESP + 0x100]         ; 00423559
    FMUL ST1                            ; 00423560
    FLD float ptr [ESP + 0x104]         ; 00423562
    FMUL ST2                            ; 00423569
    FLD float ptr [ESP + 0x108]         ; 0042356b
    FMUL ST3                            ; 00423572
    LEA EDI,[ESP + 0x13c]               ; 00423574
    LEA ESI,[ESP + 0x124]               ; 0042357b
    FXCH ST2                            ; 00423582
    FSTP float ptr [ESP + 0x124]        ; 00423584
    FSTP float ptr [ESP + 0x128]        ; 0042358b
    FSTP float ptr [ESP + 0x12c]        ; 00423592
    MOVSD ES:EDI,ESI                    ; 00423599
    MOVSD ES:EDI,ESI                    ; 0042359a
    MOVSD ES:EDI,ESI                    ; 0042359b
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0042359c
    MOV dword ptr [EBX + 0x3628],EAX    ; 004235a3
    MOV EAX,dword ptr [ESP + 0x118]     ; 004235a9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004235b0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004235b7
    LEA EDI,[ESP + 0xac]                ; 004235be
    MOV dword ptr [ESP + 0xa4],EAX      ; 004235c5
    MOV EAX,dword ptr [ESP + 0x120]     ; 004235cc
    LEA ESI,[ESP + 0xa0]                ; 004235d3
    MOV dword ptr [ESP + 0xa8],EAX      ; 004235da
    MOVSD ES:EDI,ESI                    ; 004235e1
    MOVSD ES:EDI,ESI                    ; 004235e2
    MOVSD ES:EDI,ESI                    ; 004235e3
    FLD float ptr [ESP + 0xac]          ; 004235e4
    FMUL ST1                            ; 004235eb
    FLD float ptr [ESP + 0xb0]          ; 004235ed
    FMUL ST2                            ; 004235f4
    FLD float ptr [ESP + 0xb4]          ; 004235f6
    FMULP ST3                           ; 004235fd
    LEA EDI,[ESP + 0xe8]                ; 004235ff
    LEA ESI,[ESP + 0x88]                ; 00423606
    FXCH                                ; 0042360d
    FSTP float ptr [ESP + 0x88]         ; 0042360f
    FSTP float ptr [ESP + 0x8c]         ; 00423616
    FSTP float ptr [ESP + 0x90]         ; 0042361d
    MOVSD ES:EDI,ESI                    ; 00423624
    MOVSD ES:EDI,ESI                    ; 00423625
    MOVSD ES:EDI,ESI                    ; 00423626
    MOV EAX,dword ptr [ESP + 0xec]      ; 00423627
    MOV dword ptr [EBX + 0x362c],EAX    ; 0042362e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00423634
    MOV dword ptr [EBX + 0x3630],EAX    ; 00423638
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0042363e
    MOV dword ptr [EAX + 0x8],0x0       ; 00423645
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042364c
    MOV dword ptr [EAX + 0x4],EDX       ; 0042364f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423652
    MOV dword ptr [EAX],EDX             ; 00423655
    MOV dword ptr [EBX + 0x3634],0x3e860a92 ; 00423657
    MOV EAX,dword ptr [ESP + 0x148]     ; 00423661
    MOV dword ptr [EBX + 0x2330],0x0    ; 00423668
    MOV dword ptr [EAX + 0x38],0x42600000 ; 00423672
    MOV dword ptr [EBX + 0x7bc],0x42000000 ; 00423679
    MOV EDX,dword ptr [0x007c5058]      ; 00423683 | DAT_007c5058
    MOV dword ptr [EBX + 0x314],0x3     ; 00423689
    TEST EDX,EDX                        ; 00423693
    JNZ 0x004236d0                      ; 00423695
        ;   XREF to: 004236d0 (CONDITIONAL_JUMP)  ; LAB_004236d0
    MOV EDI,0x7c5098                    ; 00423697
    XOR ESI,ESI                         ; 0042369c
    PUSH ESI                            ; 0042369e
        ;   Label: LAB_0042369e
    PUSH 0x5d4dd4                       ; 0042369f
    LEA EAX,[ESP + 0x8]                 ; 004236a4
    PUSH EAX                            ; 004236a8
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004236a9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004236ae
    MOV EAX,ESP                         ; 004236b1
    PUSH EAX                            ; 004236b3
    PUSH EDI                            ; 004236b4
    INC ESI                             ; 004236b5
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 ; 004236b6
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_0045da30(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004236bb
    ADD EDI,0x4c                        ; 004236be
    CMP ESI,0x8                         ; 004236c1
    JL 0x0042369e                       ; 004236c4
        ;   XREF to: 0042369e (CONDITIONAL_JUMP)  ; LAB_0042369e
    MOV dword ptr [0x007c5058],0x1      ; 004236c6 | DAT_007c5058
    PUSH 0x0                            ; 004236d0
        ;   Label: LAB_004236d0
    PUSH 0x0                            ; 004236d2
    PUSH 0x0                            ; 004236d4
    PUSH 0x7c5098                       ; 004236d6
    ADD EBX,0x67c                       ; 004236db
    PUSH EBX                            ; 004236e1
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 004236e2
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 004236e7
    MOV ESP,EBP                         ; 004236ea
    POP EBP                             ; 004236ec
    POP EDI                             ; 004236ed
    POP ESI                             ; 004236ee
    POP EBX                             ; 004236ef
    RET                                 ; 004236f0

