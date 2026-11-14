; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0052d3c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01fc8d00
;   undefined4 DAT_01fc8e84
;   undefined4 DAT_01fc9608
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 DAT_01fc9cd4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
;   core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00440630
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50
;   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00440560
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870
;   core_dcamera.cpp_FUN_00443610
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_clearLights_FUN_005308e0
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
;   core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20
;   core_setutil.cpp_C3DSLight_isVisible_FUN_0053c0f0
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_sprintf_FUN_005b7790
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d3c0
        ;   Label: core_set.cpp_FUN_0052d3c0
    PUSH ESI                            ; 0052d3c1
    PUSH EDI                            ; 0052d3c2
    PUSH EBP                            ; 0052d3c3
    SUB ESP,0x17c                       ; 0052d3c4
    XOR EDX,EDX                         ; 0052d3ca
    MOV ECX,dword ptr [0x01fc8d00]      ; 0052d3cc | DAT_01fc8d00
    MOV dword ptr [ESP + 0x140],EDX     ; 0052d3d2
    TEST ECX,ECX                        ; 0052d3d9
    JZ 0x0052d67f                       ; 0052d3db
        ;   XREF to: 0052d67f (CONDITIONAL_JUMP)  ; LAB_0052d67f
    XOR EDI,EDI                         ; 0052d3e1
        ;   Label: LAB_0052d3e1
    MOV EAX,dword ptr [ESP + 0x190]     ; 0052d3e3
    MOV dword ptr [0x01fc9608],EDI      ; 0052d3ea | DAT_01fc9608
    MOV dword ptr [0x01fc9cd4],EDI      ; 0052d3f0 | DAT_01fc9cd4
    MOV dword ptr [ESP + 0x16c],EDI     ; 0052d3f6
    MOV ECX,dword ptr [EAX]             ; 0052d3fd
    MOV dword ptr [0x01fc8e84],EDI      ; 0052d3ff | DAT_01fc8e84
    TEST ECX,ECX                        ; 0052d405
    JLE 0x0052d65e                      ; 0052d407
        ;   XREF to: 0052d65e (CONDITIONAL_JUMP)  ; LAB_0052d65e
    ADD EAX,0x19a30                     ; 0052d40d
    MOV dword ptr [ESP + 0x158],EAX     ; 0052d412
    MOV dword ptr [ESP + 0x154],EAX     ; 0052d419
    MOV EAX,dword ptr [ESP + 0x194]     ; 0052d420
    INC EAX                             ; 0052d427
    MOV dword ptr [ESP + 0x148],EAX     ; 0052d428
    MOV EAX,dword ptr [ESP + 0x190]     ; 0052d42f
    ADD EAX,0x4                         ; 0052d436
    MOV dword ptr [ESP + 0x144],EAX     ; 0052d439
    MOV EAX,dword ptr [ESP + 0x190]     ; 0052d440
    MOV dword ptr [ESP + 0x14c],EDI     ; 0052d447
    MOV dword ptr [ESP + 0x150],EAX     ; 0052d44e
    IMUL EBX,dword ptr [ESP + 0x16c],0x1a4 ; 0052d455
        ;   Label: LAB_0052d455
    MOV EAX,dword ptr [ESP + 0x150]     ; 0052d460
    MOV EBP,dword ptr [EAX + 0x144]     ; 0052d467
    TEST EBP,EBP                        ; 0052d46d
    JZ 0x0052d6a0                       ; 0052d46f
        ;   XREF to: 0052d6a0 (CONDITIONAL_JUMP)  ; LAB_0052d6a0
    MOV dword ptr [ESP + 0x170],0x21    ; 0052d475
        ;   Label: LAB_0052d475
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d480
    MOV ESI,dword ptr [ESP + 0x194]     ; 0052d487
    MOV EBX,dword ptr [EBX + 0x19a2c]   ; 0052d48e
    XOR EAX,EAX                         ; 0052d494
    MOV dword ptr [ESP + 0x168],EBX     ; 0052d496
    CMP ESI,-0x1                        ; 0052d49d
    JZ 0x0052d4b2                       ; 0052d4a0
        ;   XREF to: 0052d4b2 (CONDITIONAL_JUMP)  ; LAB_0052d4b2
    MOV EBX,dword ptr [ESP + 0x148]     ; 0052d4a2
    MOV EAX,ESI                         ; 0052d4a9
    MOV dword ptr [ESP + 0x168],EBX     ; 0052d4ab
    MOV EDI,dword ptr [ESP + 0x168]     ; 0052d4b2
        ;   Label: LAB_0052d4b2
    MOV dword ptr [ESP + 0x178],EAX     ; 0052d4b9
    CMP EAX,EDI                         ; 0052d4c0
    JGE 0x0052d5ee                      ; 0052d4c2
        ;   XREF to: 0052d5ee (CONDITIONAL_JUMP)  ; LAB_0052d5ee
    IMUL EAX,EAX,0x1898                 ; 0052d4c8
    MOV EBX,dword ptr [ESP + 0x150]     ; 0052d4ce
    MOV dword ptr [ESP + 0x164],EBX     ; 0052d4d5
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0052d4dc
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0052d4e3
    MOV dword ptr [ESP + 0x160],EBX     ; 0052d4ea
    MOV EBX,dword ptr [ESP + 0x150]     ; 0052d4f1
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0052d4f8
    MOV dword ptr [ESP + 0x15c],EBX     ; 0052d4ff
    ADD EBP,EAX                         ; 0052d506
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d508
    ADD EAX,ESI                         ; 0052d50f
    ADD EAX,EBX                         ; 0052d511
    ADD EBP,EBX                         ; 0052d513
    MOV dword ptr [ESP + 0x174],EAX     ; 0052d515
    IMUL ESI,dword ptr [ESP + 0x178],0x1898 ; 0052d51c
        ;   Label: LAB_0052d51c
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d527
    ADD EBX,ESI                         ; 0052d52e
    CMP dword ptr [EBX + 0x19a30],0x0   ; 0052d530
    JNZ 0x0052d8c2                      ; 0052d537
        ;   XREF to: 0052d8c2 (CONDITIONAL_JUMP)  ; LAB_0052d8c2
    MOV EDX,dword ptr [0x01fc8d00]      ; 0052d53d | DAT_01fc8d00
    XOR EBX,EBX                         ; 0052d543
    TEST EDX,EDX                        ; 0052d545
    JLE 0x0052d570                      ; 0052d547
        ;   XREF to: 0052d570 (CONDITIONAL_JUMP)  ; LAB_0052d570
    ADD ESI,dword ptr [ESP + 0x158]     ; 0052d549
    LEA EDI,[ESI + 0x4]                 ; 0052d550
    XOR ESI,ESI                         ; 0052d553
    MOV EAX,dword ptr [ESI + 0x1fc8d04] ; 0052d555
        ;   Label: LAB_0052d555
    PUSH EDI                            ; 0052d55b
    ADD EAX,0x40                        ; 0052d55c
    PUSH EAX                            ; 0052d55f
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0052d560
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d565
    TEST EAX,EAX                        ; 0052d568
    JNZ 0x0052d7eb                      ; 0052d56a
        ;   XREF to: 0052d7eb (CONDITIONAL_JUMP)  ; LAB_0052d7eb
    CMP EBX,dword ptr [0x01fc8d00]      ; 0052d570 | DAT_01fc8d00
        ;   Label: LAB_0052d570
    JNZ 0x0052d59b                      ; 0052d576
        ;   XREF to: 0052d59b (CONDITIONAL_JUMP)  ; LAB_0052d59b
    MOV EDX,0x5e566b                    ; 0052d578
    MOV ECX,0x35c                       ; 0052d57d
    PUSH 0x5e567b                       ; 0052d582
    MOV dword ptr [0x01d046a0],EDX      ; 0052d587 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0052d58d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052d593
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0052d598
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d59b
        ;   Label: LAB_0052d59b
    MOV ESI,dword ptr [EAX + 0x144]     ; 0052d5a2
    MOV EBX,dword ptr [EBX*0x4 + 0x1fc8d04] ; 0052d5a8
    TEST ESI,ESI                        ; 0052d5af
    JZ 0x0052d802                       ; 0052d5b1
        ;   XREF to: 0052d802 (CONDITIONAL_JUMP)  ; LAB_0052d802
    MOV EAX,dword ptr [ESP + 0x174]     ; 0052d5b7
        ;   Label: LAB_0052d5b7
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052d5be
    MOV ECX,dword ptr [ESP + 0x168]     ; 0052d5c5
    ADD EBP,0x1898                      ; 0052d5cc
    ADD EAX,0x1898                      ; 0052d5d2
    INC EDX                             ; 0052d5d7
    MOV dword ptr [ESP + 0x174],EAX     ; 0052d5d8
    MOV dword ptr [ESP + 0x178],EDX     ; 0052d5df
    CMP EDX,ECX                         ; 0052d5e6
    JL 0x0052d51c                       ; 0052d5e8
        ;   XREF to: 0052d51c (CONDITIONAL_JUMP)  ; LAB_0052d51c
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0052d5ee
        ;   Label: LAB_0052d5ee
    PUSH EBX                            ; 0052d5f5
    PUSH 0x5e56e3                       ; 0052d5f6
    LEA EAX,[ESP + 0x8]                 ; 0052d5fb
    PUSH EAX                            ; 0052d5ff
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0052d600
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0052d605
    PUSH 0x0                            ; 0052d608
    PUSH 0x0                            ; 0052d60a
    LEA EAX,[ESP + 0x8]                 ; 0052d60c
    PUSH EAX                            ; 0052d610
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d611
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d616
    LEA EBP,[EBX + 0x1]                 ; 0052d619
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0052d61c
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    MOV ESI,dword ptr [ESP + 0x150]     ; 0052d621
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0052d628
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d62f
    MOV dword ptr [ESP + 0x16c],EBP     ; 0052d636
    ADD ESI,0x1a4                       ; 0052d63d
    ADD EDI,0x10                        ; 0052d643
    MOV EDX,dword ptr [EBX]             ; 0052d646
    MOV dword ptr [ESP + 0x150],ESI     ; 0052d648
    MOV dword ptr [ESP + 0x14c],EDI     ; 0052d64f
    CMP EBP,EDX                         ; 0052d656
    JL 0x0052d455                       ; 0052d658
        ;   XREF to: 0052d455 (CONDITIONAL_JUMP)  ; LAB_0052d455
    CMP dword ptr [ESP + 0x140],0x0     ; 0052d65e
        ;   Label: LAB_0052d65e
    JNZ 0x0052d954                      ; 0052d666
        ;   XREF to: 0052d954 (CONDITIONAL_JUMP)  ; LAB_0052d954
    XOR EBP,EBP                         ; 0052d66c
    MOV dword ptr [0x01fc9c68],EBP      ; 0052d66e | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 0052d674
    POP EBP                             ; 0052d67a
    POP EDI                             ; 0052d67b
    POP ESI                             ; 0052d67c
    POP EBX                             ; 0052d67d
    RET                                 ; 0052d67e
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d67f
        ;   Label: LAB_0052d67f
    PUSH EBX                            ; 0052d686
    MOV ESI,0x1                         ; 0052d687
    CALL core_set.cpp_CDemonSet_initScene_FUN_0052d980 ; 0052d68c
        ;   XREF to: 0052d980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052d691
    MOV dword ptr [ESP + 0x140],ESI     ; 0052d694
    JMP 0x0052d3e1                      ; 0052d69b
        ;   XREF to: 0052d3e1 (UNCONDITIONAL_JUMP)  ; LAB_0052d3e1
    MOV EAX,dword ptr [ESP + 0x144]     ; 0052d6a0
        ;   Label: LAB_0052d6a0
    PUSH 0x1fc7838                      ; 0052d6a7
    ADD EBX,EAX                         ; 0052d6ac
    PUSH EBX                            ; 0052d6ae
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20 ; 0052d6af
        ;   XREF to: 0053ad20 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 0052d6b4
    PUSH EBP                            ; 0052d6b7
    PUSH 0x1fc7838                      ; 0052d6b8
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 ; 0052d6bd
        ;   XREF to: 0043b7f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052d6c2
    PUSH EBP                            ; 0052d6c5
    MOV ECX,dword ptr [ESP + 0x194]     ; 0052d6c6
    PUSH 0x461c3f9a                     ; 0052d6cd
    MOV EDX,0x1                         ; 0052d6d2
    PUSH ECX                            ; 0052d6d7
    MOV dword ptr [0x01fc9c68],EDX      ; 0052d6d8 | g_CDemonRaytraceInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 0052d6de
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0052d6e3
    PUSH EBP                            ; 0052d6e6
    PUSH 0x1fc7838                      ; 0052d6e7
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 ; 0052d6ec
        ;   XREF to: 0043bf50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0052d6f1
    PUSH 0x1fc7838                      ; 0052d6f4
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870 ; 0052d6f9
        ;   XREF to: 0043d870 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052d6fe
    PUSH 0x1fc7838                      ; 0052d701
    LEA ESI,[ESP + 0x104]               ; 0052d706
    LEA EDI,[ESP + 0x11c]               ; 0052d70d
    CALL core_dcamera.cpp_FUN_00443610  ; 0052d714
        ;   XREF to: 00443610 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00443610()
    MOV ECX,0x6                         ; 0052d719
    LEA ESI,[ESP + 0x104]               ; 0052d71e
    ADD ESP,0x4                         ; 0052d725
    MOVSD.REP ES:EDI,ESI                ; 0052d728
    ADD EBX,0x17c                       ; 0052d72a
    LEA EDI,[ESP + 0x118]               ; 0052d730
    MOV ESI,EBX                         ; 0052d737
    CMP EBX,EDI                         ; 0052d739
    JZ 0x0052d75a                       ; 0052d73b
        ;   XREF to: 0052d75a (CONDITIONAL_JUMP)  ; LAB_0052d75a
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052d73d
    MOV dword ptr [EBX],EAX             ; 0052d744
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052d746
    MOV dword ptr [EBX + 0x4],EAX       ; 0052d74d
    MOV EAX,dword ptr [ESP + 0x120]     ; 0052d750
    MOV dword ptr [EBX + 0x8],EAX       ; 0052d757
    LEA EBX,[EDI + 0xc]                 ; 0052d75a
        ;   Label: LAB_0052d75a
    LEA EAX,[ESI + 0xc]                 ; 0052d75d
    CMP EAX,EBX                         ; 0052d760
    JZ 0x0052d774                       ; 0052d762
        ;   XREF to: 0052d774 (CONDITIONAL_JUMP)  ; LAB_0052d774
    MOV EDX,dword ptr [EBX]             ; 0052d764
    MOV dword ptr [EAX],EDX             ; 0052d766
    MOV EDX,dword ptr [EBX + 0x4]       ; 0052d768
    MOV dword ptr [EAX + 0x4],EDX       ; 0052d76b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0052d76e
    MOV dword ptr [EAX + 0x8],EDX       ; 0052d771
    MOV EAX,dword ptr [ESP + 0x150]     ; 0052d774
        ;   Label: LAB_0052d774
    SUB ESP,0x8                         ; 0052d77b
    FLD float ptr [EAX + 0x194]         ; 0052d77e
    FSTP double ptr [ESP]               ; 0052d784
    SUB ESP,0x8                         ; 0052d787
    FLD float ptr [EAX + 0x190]         ; 0052d78a
    FSTP double ptr [ESP]               ; 0052d790
    SUB ESP,0x8                         ; 0052d793
    FLD float ptr [EAX + 0x18c]         ; 0052d796
    FSTP double ptr [ESP]               ; 0052d79c
    SUB ESP,0x8                         ; 0052d79f
    FLD float ptr [EAX + 0x188]         ; 0052d7a2
    FSTP double ptr [ESP]               ; 0052d7a8
    SUB ESP,0x8                         ; 0052d7ab
    FLD float ptr [EAX + 0x184]         ; 0052d7ae
    FSTP double ptr [ESP]               ; 0052d7b4
    SUB ESP,0x8                         ; 0052d7b7
    FLD float ptr [EAX + 0x180]         ; 0052d7ba
    FSTP double ptr [ESP]               ; 0052d7c0
    PUSH 0x5e5632                       ; 0052d7c3
    LEA EAX,[ESP + 0x34]                ; 0052d7c8
    PUSH EAX                            ; 0052d7cc
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0052d7cd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x38                        ; 0052d7d2
    PUSH 0x16                           ; 0052d7d5
    PUSH 0x0                            ; 0052d7d7
    LEA EAX,[ESP + 0x8]                 ; 0052d7d9
    PUSH EAX                            ; 0052d7dd
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d7de
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d7e3
    JMP 0x0052d475                      ; 0052d7e6
        ;   XREF to: 0052d475 (UNCONDITIONAL_JUMP)  ; LAB_0052d475
    MOV ECX,dword ptr [0x01fc8d00]      ; 0052d7eb | DAT_01fc8d00
        ;   Label: LAB_0052d7eb
    INC EBX                             ; 0052d7f1
    ADD ESI,0x4                         ; 0052d7f2
    CMP EBX,ECX                         ; 0052d7f5
    JL 0x0052d555                       ; 0052d7f7
        ;   XREF to: 0052d555 (CONDITIONAL_JUMP)  ; LAB_0052d555
    JMP 0x0052d570                      ; 0052d7fd
        ;   XREF to: 0052d570 (UNCONDITIONAL_JUMP)  ; LAB_0052d570
    PUSH ESI                            ; 0052d802
        ;   Label: LAB_0052d802
    PUSH EBX                            ; 0052d803
    PUSH 0x1fc7838                      ; 0052d804
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220 ; 0052d809
        ;   XREF to: 0043d220 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0052d80e
    PUSH EBX                            ; 0052d811
    PUSH 0x1fc7838                      ; 0052d812
    CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00440560 ; 0052d817
        ;   XREF to: 00440560 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00440560(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 0052d81c
    PUSH EBX                            ; 0052d81f
    MOV ESI,dword ptr [ESP + 0x178]     ; 0052d820
    PUSH 0x1fc7838                      ; 0052d827
    MOV byte ptr [ESI + 0x19b58],AL     ; 0052d82c
    LEA ESI,[ESP + 0x138]               ; 0052d832
    CALL core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00440630 ; 0052d839
        ;   XREF to: 00440630 (UNCONDITIONAL_CALL)  ; CRect * core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00440630(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds)
    LEA ESI,[ESP + 0x138]               ; 0052d83e
    ADD ESP,0x8                         ; 0052d845
    LEA EDI,[EBP + 0x19c54]             ; 0052d848
    MOV EAX,dword ptr [ESP + 0x174]     ; 0052d84e
    MOVSD ES:EDI,ESI                    ; 0052d855
    MOVSD ES:EDI,ESI                    ; 0052d856
    MOVSD ES:EDI,ESI                    ; 0052d857
    MOVSD ES:EDI,ESI                    ; 0052d858
    CMP byte ptr [EAX + 0x19b58],0x0    ; 0052d859
    JZ 0x0052d5b7                       ; 0052d860
        ;   XREF to: 0052d5b7 (CONDITIONAL_JUMP)  ; LAB_0052d5b7
    MOV EDI,dword ptr [EBP + 0x19c60]   ; 0052d866
    PUSH EDI                            ; 0052d86c
    MOV EAX,dword ptr [EBP + 0x19c5c]   ; 0052d86d
    PUSH EAX                            ; 0052d873
    MOV EDX,dword ptr [EBP + 0x19c58]   ; 0052d874
    PUSH EDX                            ; 0052d87a
    MOV ECX,dword ptr [EBP + 0x19c54]   ; 0052d87b
    PUSH ECX                            ; 0052d881
    MOV EBX,dword ptr [ESP + 0x188]     ; 0052d882
    PUSH EBX                            ; 0052d889
    PUSH 0x5e56c7                       ; 0052d88a
    LEA EAX,[ESP + 0x18]                ; 0052d88f
    PUSH EAX                            ; 0052d893
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0052d894
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x1c                        ; 0052d899
    MOV ESI,dword ptr [ESP + 0x170]     ; 0052d89c
    PUSH ESI                            ; 0052d8a3
    PUSH 0x0                            ; 0052d8a4
    LEA EAX,[ESP + 0x8]                 ; 0052d8a6
    PUSH EAX                            ; 0052d8aa
    LEA EDI,[ESI + 0xb]                 ; 0052d8ab
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d8ae
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d8b3
    MOV dword ptr [ESP + 0x170],EDI     ; 0052d8b6
    JMP 0x0052d5b7                      ; 0052d8bd
        ;   XREF to: 0052d5b7 (UNCONDITIONAL_JUMP)  ; LAB_0052d5b7
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0052d8c2
        ;   Label: LAB_0052d8c2
    MOV EDI,dword ptr [ESP + 0x16c]     ; 0052d8c9
    MOV ECX,dword ptr [EAX + 0x144]     ; 0052d8d0
    ADD EDI,EBX                         ; 0052d8d6
    TEST ECX,ECX                        ; 0052d8d8
    JZ 0x0052d8e8                       ; 0052d8da
        ;   XREF to: 0052d8e8 (CONDITIONAL_JUMP)  ; LAB_0052d8e8
    MOV byte ptr [EDI + 0x19b58],0x0    ; 0052d8dc
    JMP 0x0052d5b7                      ; 0052d8e3
        ;   XREF to: 0052d5b7 (UNCONDITIONAL_JUMP)  ; LAB_0052d5b7
    PUSH 0x1                            ; 0052d8e8
        ;   Label: LAB_0052d8e8
    PUSH 0x1fc7838                      ; 0052d8ea
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 ; 0052d8ef
        ;   XREF to: 0043b7f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052d8f4
    ADD ESI,dword ptr [ESP + 0x154]     ; 0052d8f7
    PUSH ESI                            ; 0052d8fe
    CALL core_setutil.cpp_C3DSLight_isVisible_FUN_0053c0f0 ; 0052d8ff
        ;   XREF to: 0053c0f0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSLight_isVisible_FUN_0053c0f0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0052d904
    PUSH 0x0                            ; 0052d907
    PUSH 0x1fc7838                      ; 0052d909
    MOV byte ptr [EDI + 0x19b58],AL     ; 0052d90e
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 ; 0052d914
        ;   XREF to: 0043bf50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0052d919
    MOV EAX,dword ptr [ESP + 0x160]     ; 0052d91c
    MOV dword ptr [EBX + EAX*0x1 + 0x19c54],0x0 ; 0052d923
    MOV dword ptr [EBX + EAX*0x1 + 0x19c58],0x0 ; 0052d92e
    MOV dword ptr [EBX + EAX*0x1 + 0x19c5c],0x0 ; 0052d939
    MOV dword ptr [EBX + EAX*0x1 + 0x19c60],0x0 ; 0052d944
    JMP 0x0052d5b7                      ; 0052d94f
        ;   XREF to: 0052d5b7 (UNCONDITIONAL_JUMP)  ; LAB_0052d5b7
    MOV EBX,dword ptr [ESP + 0x190]     ; 0052d954
        ;   Label: LAB_0052d954
    PUSH EBX                            ; 0052d95b
    CALL core_set.cpp_CDemonSet_clearLights_FUN_005308e0 ; 0052d95c
        ;   XREF to: 005308e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_005308e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052d961
    XOR EBP,EBP                         ; 0052d964
    MOV dword ptr [0x01fc9c68],EBP      ; 0052d966 | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 0052d96c
    POP EBP                             ; 0052d972
    POP EDI                             ; 0052d973
    POP ESI                             ; 0052d974
    POP EBX                             ; 0052d975
    RET                                 ; 0052d976

