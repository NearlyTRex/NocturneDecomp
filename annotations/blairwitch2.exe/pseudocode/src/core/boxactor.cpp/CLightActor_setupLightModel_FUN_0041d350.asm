; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_0041d350(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_setup_FUN_0041cff0 at 0041cff6
;
; Referenced Globals:
;   undefined4 DAT_005cc6f5
;   undefined4 DAT_005cc6f9
;   undefined4 DAT_007bc9ac
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_004478d0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d350
        ;   Label: core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350
    PUSH ESI                            ; 0041d351
    PUSH EDI                            ; 0041d352
    PUSH EBP                            ; 0041d353
    MOV EBP,ESP                         ; 0041d354
    SUB ESP,0x150                       ; 0041d356
    AND ESP,0xfffffff8                  ; 0041d35c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041d35f
    MOV EAX,dword ptr [EBX + 0x7d4]     ; 0041d362
    CMP EAX,0x1                         ; 0041d368
    JC 0x0041d398                       ; 0041d36b
        ;   XREF to: 0041d398 (CONDITIONAL_JUMP)  ; LAB_0041d398
    LEA ESI,[EBX + 0x7d8]               ; 0041d36d
    MOV dword ptr [ESP + 0x148],ESI     ; 0041d373
    LEA ESI,[EBX + 0x3794]              ; 0041d37a
    MOV dword ptr [ESP + 0x14c],ESI     ; 0041d380
    LEA ESI,[EBX + 0x2b4]               ; 0041d387
    JBE 0x0041d39f                      ; 0041d38d
        ;   XREF to: 0041d39f (CONDITIONAL_JUMP)  ; LAB_0041d39f
    CMP EAX,0x2                         ; 0041d38f
    JZ 0x0041d564                       ; 0041d392
        ;   XREF to: 0041d564 (CONDITIONAL_JUMP)  ; LAB_0041d564
    MOV ESP,EBP                         ; 0041d398
        ;   Label: LAB_0041d398
    POP EBP                             ; 0041d39a
    POP EDI                             ; 0041d39b
    POP ESI                             ; 0041d39c
    POP EBX                             ; 0041d39d
    RET                                 ; 0041d39e
    PUSH 0x5cc6cc                       ; 0041d39f
        ;   Label: LAB_0041d39f
    PUSH ESI                            ; 0041d3a4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041d3a5
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041d3aa
    PUSH ESI                            ; 0041d3ad
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0041d3ae
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d3b3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041d3b6
    PUSH EBX                            ; 0041d3bc
    LEA ESI,[ESP + 0x2c]                ; 0041d3bd
    LEA EDI,[ESP + 0x74]                ; 0041d3c1
    CALL dword ptr [EAX + 0x24]         ; 0041d3c5
    MOV ECX,0x6                         ; 0041d3c8
    LEA ESI,[ESP + 0x2c]                ; 0041d3cd
    ADD ESP,0x4                         ; 0041d3d1
    MOVSD.REP ES:EDI,ESI                ; 0041d3d4
    FLD float ptr [ESP + 0x70]          ; 0041d3d6
    FLD float ptr [ESP + 0x74]          ; 0041d3da
    FLD float ptr [ESP + 0x78]          ; 0041d3de
    LEA EDI,[ESP + 0xd0]                ; 0041d3e2
    LEA ESI,[ESP + 0xb8]                ; 0041d3e9
    FXCH ST2                            ; 0041d3f0
    FADD float ptr [ESP + 0x7c]         ; 0041d3f2
    FXCH                                ; 0041d3f6
    FADD float ptr [ESP + 0x80]         ; 0041d3f8
    FXCH ST2                            ; 0041d3ff
    FADD float ptr [ESP + 0x84]         ; 0041d401
    FXCH                                ; 0041d408
    FSTP float ptr [ESP + 0xb8]         ; 0041d40a
    FXCH                                ; 0041d411
    FSTP float ptr [ESP + 0xbc]         ; 0041d413
    FSTP float ptr [ESP + 0xc0]         ; 0041d41a
    MOVSD ES:EDI,ESI                    ; 0041d421
    MOVSD ES:EDI,ESI                    ; 0041d422
    MOVSD ES:EDI,ESI                    ; 0041d423
    FLD float ptr [0x005cc6f5]          ; 0041d424 | DAT_005cc6f5
    FLD float ptr [ESP + 0xd0]          ; 0041d42a
    FMUL ST1                            ; 0041d431
    FLD float ptr [ESP + 0xd4]          ; 0041d433
    FMUL ST2                            ; 0041d43a
    FLD float ptr [ESP + 0xd8]          ; 0041d43c
    FMUL ST3                            ; 0041d443
    LEA EDI,[ESP + 0xdc]                ; 0041d445
    LEA ESI,[ESP + 0x10c]               ; 0041d44c
    FXCH ST2                            ; 0041d453
    FSTP float ptr [ESP + 0x10c]        ; 0041d455
    FSTP float ptr [ESP + 0x110]        ; 0041d45c
    FSTP float ptr [ESP + 0x114]        ; 0041d463
    MOVSD ES:EDI,ESI                    ; 0041d46a
    MOVSD ES:EDI,ESI                    ; 0041d46b
    MOVSD ES:EDI,ESI                    ; 0041d46c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0041d46d
    MOV dword ptr [EBX + 0x3788],EAX    ; 0041d474
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0041d47a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0041d481
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041d488
    LEA EDI,[ESP + 0x94]                ; 0041d48f
    MOV dword ptr [ESP + 0xf8],EAX      ; 0041d496
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0041d49d
    LEA ESI,[ESP + 0xf4]                ; 0041d4a4
    MOV dword ptr [ESP + 0xfc],EAX      ; 0041d4ab
    MOVSD ES:EDI,ESI                    ; 0041d4b2
    MOVSD ES:EDI,ESI                    ; 0041d4b3
    MOVSD ES:EDI,ESI                    ; 0041d4b4
    FLD float ptr [ESP + 0x94]          ; 0041d4b5
    FMUL ST1                            ; 0041d4bc
    FLD float ptr [ESP + 0x98]          ; 0041d4be
    FMUL ST2                            ; 0041d4c5
    FLD float ptr [ESP + 0x9c]          ; 0041d4c7
    FMULP ST3                           ; 0041d4ce
    LEA EDI,[ESP + 0xc4]                ; 0041d4d0
    LEA ESI,[ESP + 0x130]               ; 0041d4d7
    FXCH                                ; 0041d4de
    FSTP float ptr [ESP + 0x130]        ; 0041d4e0
    FSTP float ptr [ESP + 0x134]        ; 0041d4e7
    FSTP float ptr [ESP + 0x138]        ; 0041d4ee
    MOVSD ES:EDI,ESI                    ; 0041d4f5
    MOVSD ES:EDI,ESI                    ; 0041d4f6
    MOVSD ES:EDI,ESI                    ; 0041d4f7
    FLD float ptr [ESP + 0x84]          ; 0041d4f8
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0041d4ff
    FADD double ptr [0x005cc6f9]        ; 0041d506 | DAT_005cc6f9
    MOV dword ptr [EBX + 0x378c],EAX    ; 0041d50c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0041d512
    FSTP float ptr [EBX + 0x3790]       ; 0041d519
    MOV dword ptr [EAX + 0x8],0x0       ; 0041d51f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d526
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d529
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d52c
    MOV dword ptr [EAX],EDX             ; 0041d52f
    MOV EAX,dword ptr [ESP + 0x148]     ; 0041d531
    MOV dword ptr [EBX + 0x248c],0x0    ; 0041d538
    MOV dword ptr [EAX + 0x38],0x42600000 ; 0041d542
    MOV dword ptr [EBX + 0x918],0x42000000 ; 0041d549
    MOV dword ptr [EBX + 0x470],0x3     ; 0041d553
    MOV ESP,EBP                         ; 0041d55d
    POP EBP                             ; 0041d55f
    POP EDI                             ; 0041d560
    POP ESI                             ; 0041d561
    POP EBX                             ; 0041d562
    RET                                 ; 0041d563
    PUSH 0x5cc6d9                       ; 0041d564
        ;   Label: LAB_0041d564
    PUSH ESI                            ; 0041d569
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041d56a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041d56f
    PUSH ESI                            ; 0041d572
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0041d573
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d578
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041d57b
    PUSH EBX                            ; 0041d581
    LEA ESI,[ESP + 0x5c]                ; 0041d582
    LEA EDI,[ESP + 0x44]                ; 0041d586
    CALL dword ptr [EAX + 0x24]         ; 0041d58a
    MOV ECX,0x6                         ; 0041d58d
    LEA ESI,[ESP + 0x5c]                ; 0041d592
    ADD ESP,0x4                         ; 0041d596
    MOVSD.REP ES:EDI,ESI                ; 0041d599
    FLD float ptr [ESP + 0x40]          ; 0041d59b
    FLD float ptr [ESP + 0x44]          ; 0041d59f
    FLD float ptr [ESP + 0x48]          ; 0041d5a3
    LEA EDI,[ESP + 0x100]               ; 0041d5a7
    LEA ESI,[ESP + 0x118]               ; 0041d5ae
    FXCH ST2                            ; 0041d5b5
    FADD float ptr [ESP + 0x4c]         ; 0041d5b7
    FXCH                                ; 0041d5bb
    FADD float ptr [ESP + 0x50]         ; 0041d5bd
    FXCH ST2                            ; 0041d5c1
    FADD float ptr [ESP + 0x54]         ; 0041d5c3
    FXCH                                ; 0041d5c7
    FSTP float ptr [ESP + 0x118]        ; 0041d5c9
    FXCH                                ; 0041d5d0
    FSTP float ptr [ESP + 0x11c]        ; 0041d5d2
    FSTP float ptr [ESP + 0x120]        ; 0041d5d9
    MOVSD ES:EDI,ESI                    ; 0041d5e0
    MOVSD ES:EDI,ESI                    ; 0041d5e1
    MOVSD ES:EDI,ESI                    ; 0041d5e2
    FLD float ptr [0x005cc6f5]          ; 0041d5e3 | DAT_005cc6f5
    FLD float ptr [ESP + 0x100]         ; 0041d5e9
    FMUL ST1                            ; 0041d5f0
    FLD float ptr [ESP + 0x104]         ; 0041d5f2
    FMUL ST2                            ; 0041d5f9
    FLD float ptr [ESP + 0x108]         ; 0041d5fb
    FMUL ST3                            ; 0041d602
    LEA EDI,[ESP + 0x13c]               ; 0041d604
    LEA ESI,[ESP + 0x124]               ; 0041d60b
    FXCH ST2                            ; 0041d612
    FSTP float ptr [ESP + 0x124]        ; 0041d614
    FSTP float ptr [ESP + 0x128]        ; 0041d61b
    FSTP float ptr [ESP + 0x12c]        ; 0041d622
    MOVSD ES:EDI,ESI                    ; 0041d629
    MOVSD ES:EDI,ESI                    ; 0041d62a
    MOVSD ES:EDI,ESI                    ; 0041d62b
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0041d62c
    MOV dword ptr [EBX + 0x3788],EAX    ; 0041d633
    MOV EAX,dword ptr [ESP + 0x118]     ; 0041d639
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041d640
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0041d647
    LEA EDI,[ESP + 0xac]                ; 0041d64e
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041d655
    MOV EAX,dword ptr [ESP + 0x120]     ; 0041d65c
    LEA ESI,[ESP + 0xa0]                ; 0041d663
    MOV dword ptr [ESP + 0xa8],EAX      ; 0041d66a
    MOVSD ES:EDI,ESI                    ; 0041d671
    MOVSD ES:EDI,ESI                    ; 0041d672
    MOVSD ES:EDI,ESI                    ; 0041d673
    FLD float ptr [ESP + 0xac]          ; 0041d674
    FMUL ST1                            ; 0041d67b
    FLD float ptr [ESP + 0xb0]          ; 0041d67d
    FMUL ST2                            ; 0041d684
    FLD float ptr [ESP + 0xb4]          ; 0041d686
    FMULP ST3                           ; 0041d68d
    LEA EDI,[ESP + 0xe8]                ; 0041d68f
    LEA ESI,[ESP + 0x88]                ; 0041d696
    FXCH                                ; 0041d69d
    FSTP float ptr [ESP + 0x88]         ; 0041d69f
    FSTP float ptr [ESP + 0x8c]         ; 0041d6a6
    FSTP float ptr [ESP + 0x90]         ; 0041d6ad
    MOVSD ES:EDI,ESI                    ; 0041d6b4
    MOVSD ES:EDI,ESI                    ; 0041d6b5
    MOVSD ES:EDI,ESI                    ; 0041d6b6
    MOV EAX,dword ptr [ESP + 0xec]      ; 0041d6b7
    MOV dword ptr [EBX + 0x378c],EAX    ; 0041d6be
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041d6c4
    MOV dword ptr [EBX + 0x3790],EAX    ; 0041d6c8
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0041d6ce
    MOV dword ptr [EAX + 0x8],0x0       ; 0041d6d5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d6dc
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d6df
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d6e2
    MOV dword ptr [EAX],EDX             ; 0041d6e5
    MOV dword ptr [EBX + 0x3794],0x3e860a92 ; 0041d6e7
    MOV EAX,dword ptr [ESP + 0x148]     ; 0041d6f1
    MOV dword ptr [EBX + 0x248c],0x0    ; 0041d6f8
    MOV dword ptr [EAX + 0x38],0x42600000 ; 0041d702
    MOV dword ptr [EBX + 0x918],0x42000000 ; 0041d709
    MOV EDX,dword ptr [0x007bc9ac]      ; 0041d713 | DAT_007bc9ac
    MOV dword ptr [EBX + 0x470],0x3     ; 0041d719
    TEST EDX,EDX                        ; 0041d723
    JNZ 0x0041d760                      ; 0041d725
        ;   XREF to: 0041d760 (CONDITIONAL_JUMP)  ; LAB_0041d760
    MOV EDI,0x7bc9ec                    ; 0041d727
    XOR ESI,ESI                         ; 0041d72c
    PUSH ESI                            ; 0041d72e
        ;   Label: LAB_0041d72e
    PUSH 0x5cc6e5                       ; 0041d72f
    LEA EAX,[ESP + 0x8]                 ; 0041d734
    PUSH EAX                            ; 0041d738
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0041d739
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0041d73e
    MOV EAX,ESP                         ; 0041d741
    PUSH EAX                            ; 0041d743
    PUSH EDI                            ; 0041d744
    INC ESI                             ; 0041d745
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_004478d0 ; 0041d746
        ;   XREF to: 004478d0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_004478d0(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041d74b
    ADD EDI,0x4c                        ; 0041d74e
    CMP ESI,0x8                         ; 0041d751
    JL 0x0041d72e                       ; 0041d754
        ;   XREF to: 0041d72e (CONDITIONAL_JUMP)  ; LAB_0041d72e
    MOV dword ptr [0x007bc9ac],0x1      ; 0041d756 | DAT_007bc9ac
    PUSH 0x0                            ; 0041d760
        ;   Label: LAB_0041d760
    PUSH 0x0                            ; 0041d762
    PUSH 0x0                            ; 0041d764
    PUSH 0x7bc9ec                       ; 0041d766
    ADD EBX,0x7d8                       ; 0041d76b
    PUSH EBX                            ; 0041d771
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600 ; 0041d772
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0041d777
    MOV ESP,EBP                         ; 0041d77a
    POP EBP                             ; 0041d77c
    POP EDI                             ; 0041d77d
    POP ESI                             ; 0041d77e
    POP EBX                             ; 0041d77f
    RET                                 ; 0041d780

