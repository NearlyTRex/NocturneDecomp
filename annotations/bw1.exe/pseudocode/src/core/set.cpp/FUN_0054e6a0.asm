; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0054e6a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4e38
;   undefined4 DAT_01fe55bc
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 DAT_01fe5c88
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0
;   core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610
;   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30
;   core_dcamera.cpp_FUN_00454cc0
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_clearLights_FUN_00551b90
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
;   core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0
;   core_setutil.cpp_C3DSLight_isVisible_FUN_0055d9c0
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_unknown.c_sprintf_FUN_005bfb40
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e6a0
        ;   Label: core_set.cpp_FUN_0054e6a0
    PUSH ESI                            ; 0054e6a1
    PUSH EDI                            ; 0054e6a2
    PUSH EBP                            ; 0054e6a3
    SUB ESP,0x17c                       ; 0054e6a4
    XOR EDX,EDX                         ; 0054e6aa
    MOV ECX,dword ptr [0x01fe4cb4]      ; 0054e6ac | DAT_01fe4cb4
    MOV dword ptr [ESP + 0x140],EDX     ; 0054e6b2
    TEST ECX,ECX                        ; 0054e6b9
    JZ 0x0054e95f                       ; 0054e6bb
        ;   XREF to: 0054e95f (CONDITIONAL_JUMP)  ; LAB_0054e95f
    XOR EDI,EDI                         ; 0054e6c1
        ;   Label: LAB_0054e6c1
    MOV EAX,dword ptr [ESP + 0x190]     ; 0054e6c3
    MOV dword ptr [0x01fe55bc],EDI      ; 0054e6ca | DAT_01fe55bc
    MOV dword ptr [0x01fe5c88],EDI      ; 0054e6d0 | DAT_01fe5c88
    MOV dword ptr [ESP + 0x16c],EDI     ; 0054e6d6
    MOV ECX,dword ptr [EAX]             ; 0054e6dd
    MOV dword ptr [0x01fe4e38],EDI      ; 0054e6df | DAT_01fe4e38
    TEST ECX,ECX                        ; 0054e6e5
    JLE 0x0054e93e                      ; 0054e6e7
        ;   XREF to: 0054e93e (CONDITIONAL_JUMP)  ; LAB_0054e93e
    ADD EAX,0x19a30                     ; 0054e6ed
    MOV dword ptr [ESP + 0x158],EAX     ; 0054e6f2
    MOV dword ptr [ESP + 0x154],EAX     ; 0054e6f9
    MOV EAX,dword ptr [ESP + 0x194]     ; 0054e700
    INC EAX                             ; 0054e707
    MOV dword ptr [ESP + 0x148],EAX     ; 0054e708
    MOV EAX,dword ptr [ESP + 0x190]     ; 0054e70f
    ADD EAX,0x4                         ; 0054e716
    MOV dword ptr [ESP + 0x144],EAX     ; 0054e719
    MOV EAX,dword ptr [ESP + 0x190]     ; 0054e720
    MOV dword ptr [ESP + 0x14c],EDI     ; 0054e727
    MOV dword ptr [ESP + 0x150],EAX     ; 0054e72e
    IMUL EBX,dword ptr [ESP + 0x16c],0x1a4 ; 0054e735
        ;   Label: LAB_0054e735
    MOV EAX,dword ptr [ESP + 0x150]     ; 0054e740
    MOV EBP,dword ptr [EAX + 0x144]     ; 0054e747
    TEST EBP,EBP                        ; 0054e74d
    JZ 0x0054e980                       ; 0054e74f
        ;   XREF to: 0054e980 (CONDITIONAL_JUMP)  ; LAB_0054e980
    MOV dword ptr [ESP + 0x170],0x21    ; 0054e755
        ;   Label: LAB_0054e755
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054e760
    MOV ESI,dword ptr [ESP + 0x194]     ; 0054e767
    MOV EBX,dword ptr [EBX + 0x19a2c]   ; 0054e76e
    XOR EAX,EAX                         ; 0054e774
    MOV dword ptr [ESP + 0x168],EBX     ; 0054e776
    CMP ESI,-0x1                        ; 0054e77d
    JZ 0x0054e792                       ; 0054e780
        ;   XREF to: 0054e792 (CONDITIONAL_JUMP)  ; LAB_0054e792
    MOV EBX,dword ptr [ESP + 0x148]     ; 0054e782
    MOV EAX,ESI                         ; 0054e789
    MOV dword ptr [ESP + 0x168],EBX     ; 0054e78b
    MOV EDI,dword ptr [ESP + 0x168]     ; 0054e792
        ;   Label: LAB_0054e792
    MOV dword ptr [ESP + 0x178],EAX     ; 0054e799
    CMP EAX,EDI                         ; 0054e7a0
    JGE 0x0054e8ce                      ; 0054e7a2
        ;   XREF to: 0054e8ce (CONDITIONAL_JUMP)  ; LAB_0054e8ce
    IMUL EAX,EAX,0x1898                 ; 0054e7a8
    MOV EBX,dword ptr [ESP + 0x150]     ; 0054e7ae
    MOV dword ptr [ESP + 0x164],EBX     ; 0054e7b5
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0054e7bc
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0054e7c3
    MOV dword ptr [ESP + 0x160],EBX     ; 0054e7ca
    MOV EBX,dword ptr [ESP + 0x150]     ; 0054e7d1
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0054e7d8
    MOV dword ptr [ESP + 0x15c],EBX     ; 0054e7df
    ADD EBP,EAX                         ; 0054e7e6
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054e7e8
    ADD EAX,ESI                         ; 0054e7ef
    ADD EAX,EBX                         ; 0054e7f1
    ADD EBP,EBX                         ; 0054e7f3
    MOV dword ptr [ESP + 0x174],EAX     ; 0054e7f5
    IMUL ESI,dword ptr [ESP + 0x178],0x1898 ; 0054e7fc
        ;   Label: LAB_0054e7fc
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054e807
    ADD EBX,ESI                         ; 0054e80e
    CMP dword ptr [EBX + 0x19a30],0x0   ; 0054e810
    JNZ 0x0054eba2                      ; 0054e817
        ;   XREF to: 0054eba2 (CONDITIONAL_JUMP)  ; LAB_0054eba2
    MOV EDX,dword ptr [0x01fe4cb4]      ; 0054e81d | DAT_01fe4cb4
    XOR EBX,EBX                         ; 0054e823
    TEST EDX,EDX                        ; 0054e825
    JLE 0x0054e850                      ; 0054e827
        ;   XREF to: 0054e850 (CONDITIONAL_JUMP)  ; LAB_0054e850
    ADD ESI,dword ptr [ESP + 0x158]     ; 0054e829
    LEA EDI,[ESI + 0x4]                 ; 0054e830
    XOR ESI,ESI                         ; 0054e833
    MOV EAX,dword ptr [ESI + 0x1fe4cb8] ; 0054e835
        ;   Label: LAB_0054e835
    PUSH EDI                            ; 0054e83b
    ADD EAX,0x40                        ; 0054e83c
    PUSH EAX                            ; 0054e83f
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0054e840
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054e845
    TEST EAX,EAX                        ; 0054e848
    JNZ 0x0054eacb                      ; 0054e84a
        ;   XREF to: 0054eacb (CONDITIONAL_JUMP)  ; LAB_0054eacb
    CMP EBX,dword ptr [0x01fe4cb4]      ; 0054e850 | DAT_01fe4cb4
        ;   Label: LAB_0054e850
    JNZ 0x0054e87b                      ; 0054e856
        ;   XREF to: 0054e87b (CONDITIONAL_JUMP)  ; LAB_0054e87b
    MOV EDX,0x5f068f                    ; 0054e858
    MOV ECX,0x35c                       ; 0054e85d
    PUSH 0x5f069f                       ; 0054e862
    MOV dword ptr [0x01d1d400],EDX      ; 0054e867 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0054e86d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054e873
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054e878
    MOV EAX,dword ptr [ESP + 0x164]     ; 0054e87b
        ;   Label: LAB_0054e87b
    MOV ESI,dword ptr [EAX + 0x144]     ; 0054e882
    MOV EBX,dword ptr [EBX*0x4 + 0x1fe4cb8] ; 0054e888
    TEST ESI,ESI                        ; 0054e88f
    JZ 0x0054eae2                       ; 0054e891
        ;   XREF to: 0054eae2 (CONDITIONAL_JUMP)  ; LAB_0054eae2
    MOV EAX,dword ptr [ESP + 0x174]     ; 0054e897
        ;   Label: LAB_0054e897
    MOV EDX,dword ptr [ESP + 0x178]     ; 0054e89e
    MOV ECX,dword ptr [ESP + 0x168]     ; 0054e8a5
    ADD EBP,0x1898                      ; 0054e8ac
    ADD EAX,0x1898                      ; 0054e8b2
    INC EDX                             ; 0054e8b7
    MOV dword ptr [ESP + 0x174],EAX     ; 0054e8b8
    MOV dword ptr [ESP + 0x178],EDX     ; 0054e8bf
    CMP EDX,ECX                         ; 0054e8c6
    JL 0x0054e7fc                       ; 0054e8c8
        ;   XREF to: 0054e7fc (CONDITIONAL_JUMP)  ; LAB_0054e7fc
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0054e8ce
        ;   Label: LAB_0054e8ce
    PUSH EBX                            ; 0054e8d5
    PUSH 0x5f0707                       ; 0054e8d6
    LEA EAX,[ESP + 0x8]                 ; 0054e8db
    PUSH EAX                            ; 0054e8df
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054e8e0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054e8e5
    PUSH 0x0                            ; 0054e8e8
    PUSH 0x0                            ; 0054e8ea
    LEA EAX,[ESP + 0x8]                 ; 0054e8ec
    PUSH EAX                            ; 0054e8f0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0054e8f1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054e8f6
    LEA EBP,[EBX + 0x1]                 ; 0054e8f9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0054e8fc
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    MOV ESI,dword ptr [ESP + 0x150]     ; 0054e901
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0054e908
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054e90f
    MOV dword ptr [ESP + 0x16c],EBP     ; 0054e916
    ADD ESI,0x1a4                       ; 0054e91d
    ADD EDI,0x10                        ; 0054e923
    MOV EDX,dword ptr [EBX]             ; 0054e926
    MOV dword ptr [ESP + 0x150],ESI     ; 0054e928
    MOV dword ptr [ESP + 0x14c],EDI     ; 0054e92f
    CMP EBP,EDX                         ; 0054e936
    JL 0x0054e735                       ; 0054e938
        ;   XREF to: 0054e735 (CONDITIONAL_JUMP)  ; LAB_0054e735
    CMP dword ptr [ESP + 0x140],0x0     ; 0054e93e
        ;   Label: LAB_0054e93e
    JNZ 0x0054ec34                      ; 0054e946
        ;   XREF to: 0054ec34 (CONDITIONAL_JUMP)  ; LAB_0054ec34
    XOR EBP,EBP                         ; 0054e94c
    MOV dword ptr [0x01fe5c1c],EBP      ; 0054e94e | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 0054e954
    POP EBP                             ; 0054e95a
    POP EDI                             ; 0054e95b
    POP ESI                             ; 0054e95c
    POP EBX                             ; 0054e95d
    RET                                 ; 0054e95e
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054e95f
        ;   Label: LAB_0054e95f
    PUSH EBX                            ; 0054e966
    MOV ESI,0x1                         ; 0054e967
    CALL core_set.cpp_CDemonSet_initScene_FUN_0054ec60 ; 0054e96c
        ;   XREF to: 0054ec60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0054ec60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054e971
    MOV dword ptr [ESP + 0x140],ESI     ; 0054e974
    JMP 0x0054e6c1                      ; 0054e97b
        ;   XREF to: 0054e6c1 (UNCONDITIONAL_JUMP)  ; LAB_0054e6c1
    MOV EAX,dword ptr [ESP + 0x144]     ; 0054e980
        ;   Label: LAB_0054e980
    PUSH 0x1fe37ec                      ; 0054e987
    ADD EBX,EAX                         ; 0054e98c
    PUSH EBX                            ; 0054e98e
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0 ; 0054e98f
        ;   XREF to: 0055c5f0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 0054e994
    PUSH EBP                            ; 0054e997
    PUSH 0x1fe37ec                      ; 0054e998
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 ; 0054e99d
        ;   XREF to: 0044ceb0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0054e9a2
    PUSH EBP                            ; 0054e9a5
    MOV ECX,dword ptr [ESP + 0x194]     ; 0054e9a6
    PUSH 0x461c3f9a                     ; 0054e9ad
    MOV EDX,0x1                         ; 0054e9b2
    PUSH ECX                            ; 0054e9b7
    MOV dword ptr [0x01fe5c1c],EDX      ; 0054e9b8 | g_CDemonRaytraceInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 ; 0054e9be
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0054e9c3
    PUSH EBP                            ; 0054e9c6
    PUSH 0x1fe37ec                      ; 0054e9c7
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 ; 0054e9cc
        ;   XREF to: 0044d610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0054e9d1
    PUSH 0x1fe37ec                      ; 0054e9d4
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30 ; 0054e9d9
        ;   XREF to: 0044ef30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054e9de
    PUSH 0x1fe37ec                      ; 0054e9e1
    LEA ESI,[ESP + 0x104]               ; 0054e9e6
    LEA EDI,[ESP + 0x11c]               ; 0054e9ed
    CALL core_dcamera.cpp_FUN_00454cc0  ; 0054e9f4
        ;   XREF to: 00454cc0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00454cc0()
    MOV ECX,0x6                         ; 0054e9f9
    LEA ESI,[ESP + 0x104]               ; 0054e9fe
    ADD ESP,0x4                         ; 0054ea05
    MOVSD.REP ES:EDI,ESI                ; 0054ea08
    ADD EBX,0x17c                       ; 0054ea0a
    LEA EDI,[ESP + 0x118]               ; 0054ea10
    MOV ESI,EBX                         ; 0054ea17
    CMP EBX,EDI                         ; 0054ea19
    JZ 0x0054ea3a                       ; 0054ea1b
        ;   XREF to: 0054ea3a (CONDITIONAL_JUMP)  ; LAB_0054ea3a
    MOV EAX,dword ptr [ESP + 0x118]     ; 0054ea1d
    MOV dword ptr [EBX],EAX             ; 0054ea24
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0054ea26
    MOV dword ptr [EBX + 0x4],EAX       ; 0054ea2d
    MOV EAX,dword ptr [ESP + 0x120]     ; 0054ea30
    MOV dword ptr [EBX + 0x8],EAX       ; 0054ea37
    LEA EBX,[EDI + 0xc]                 ; 0054ea3a
        ;   Label: LAB_0054ea3a
    LEA EAX,[ESI + 0xc]                 ; 0054ea3d
    CMP EAX,EBX                         ; 0054ea40
    JZ 0x0054ea54                       ; 0054ea42
        ;   XREF to: 0054ea54 (CONDITIONAL_JUMP)  ; LAB_0054ea54
    MOV EDX,dword ptr [EBX]             ; 0054ea44
    MOV dword ptr [EAX],EDX             ; 0054ea46
    MOV EDX,dword ptr [EBX + 0x4]       ; 0054ea48
    MOV dword ptr [EAX + 0x4],EDX       ; 0054ea4b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0054ea4e
    MOV dword ptr [EAX + 0x8],EDX       ; 0054ea51
    MOV EAX,dword ptr [ESP + 0x150]     ; 0054ea54
        ;   Label: LAB_0054ea54
    SUB ESP,0x8                         ; 0054ea5b
    FLD float ptr [EAX + 0x194]         ; 0054ea5e
    FSTP double ptr [ESP]               ; 0054ea64
    SUB ESP,0x8                         ; 0054ea67
    FLD float ptr [EAX + 0x190]         ; 0054ea6a
    FSTP double ptr [ESP]               ; 0054ea70
    SUB ESP,0x8                         ; 0054ea73
    FLD float ptr [EAX + 0x18c]         ; 0054ea76
    FSTP double ptr [ESP]               ; 0054ea7c
    SUB ESP,0x8                         ; 0054ea7f
    FLD float ptr [EAX + 0x188]         ; 0054ea82
    FSTP double ptr [ESP]               ; 0054ea88
    SUB ESP,0x8                         ; 0054ea8b
    FLD float ptr [EAX + 0x184]         ; 0054ea8e
    FSTP double ptr [ESP]               ; 0054ea94
    SUB ESP,0x8                         ; 0054ea97
    FLD float ptr [EAX + 0x180]         ; 0054ea9a
    FSTP double ptr [ESP]               ; 0054eaa0
    PUSH 0x5f0656                       ; 0054eaa3
    LEA EAX,[ESP + 0x34]                ; 0054eaa8
    PUSH EAX                            ; 0054eaac
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054eaad
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x38                        ; 0054eab2
    PUSH 0x16                           ; 0054eab5
    PUSH 0x0                            ; 0054eab7
    LEA EAX,[ESP + 0x8]                 ; 0054eab9
    PUSH EAX                            ; 0054eabd
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0054eabe
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054eac3
    JMP 0x0054e755                      ; 0054eac6
        ;   XREF to: 0054e755 (UNCONDITIONAL_JUMP)  ; LAB_0054e755
    MOV ECX,dword ptr [0x01fe4cb4]      ; 0054eacb | DAT_01fe4cb4
        ;   Label: LAB_0054eacb
    INC EBX                             ; 0054ead1
    ADD ESI,0x4                         ; 0054ead2
    CMP EBX,ECX                         ; 0054ead5
    JL 0x0054e835                       ; 0054ead7
        ;   XREF to: 0054e835 (CONDITIONAL_JUMP)  ; LAB_0054e835
    JMP 0x0054e850                      ; 0054eadd
        ;   XREF to: 0054e850 (UNCONDITIONAL_JUMP)  ; LAB_0054e850
    PUSH ESI                            ; 0054eae2
        ;   Label: LAB_0054eae2
    PUSH EBX                            ; 0054eae3
    PUSH 0x1fe37ec                      ; 0054eae4
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0 ; 0054eae9
        ;   XREF to: 0044e8e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044e8e0(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0054eaee
    PUSH EBX                            ; 0054eaf1
    PUSH 0x1fe37ec                      ; 0054eaf2
    CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20 ; 0054eaf7
        ;   XREF to: 00451c20 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 0054eafc
    PUSH EBX                            ; 0054eaff
    MOV ESI,dword ptr [ESP + 0x178]     ; 0054eb00
    PUSH 0x1fe37ec                      ; 0054eb07
    MOV byte ptr [ESI + 0x19b58],AL     ; 0054eb0c
    LEA ESI,[ESP + 0x138]               ; 0054eb12
    CALL core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0 ; 0054eb19
        ;   XREF to: 00451cf0 (UNCONDITIONAL_CALL)  ; CRect * core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds)
    LEA ESI,[ESP + 0x138]               ; 0054eb1e
    ADD ESP,0x8                         ; 0054eb25
    LEA EDI,[EBP + 0x19c54]             ; 0054eb28
    MOV EAX,dword ptr [ESP + 0x174]     ; 0054eb2e
    MOVSD ES:EDI,ESI                    ; 0054eb35
    MOVSD ES:EDI,ESI                    ; 0054eb36
    MOVSD ES:EDI,ESI                    ; 0054eb37
    MOVSD ES:EDI,ESI                    ; 0054eb38
    CMP byte ptr [EAX + 0x19b58],0x0    ; 0054eb39
    JZ 0x0054e897                       ; 0054eb40
        ;   XREF to: 0054e897 (CONDITIONAL_JUMP)  ; LAB_0054e897
    MOV EDI,dword ptr [EBP + 0x19c60]   ; 0054eb46
    PUSH EDI                            ; 0054eb4c
    MOV EAX,dword ptr [EBP + 0x19c5c]   ; 0054eb4d
    PUSH EAX                            ; 0054eb53
    MOV EDX,dword ptr [EBP + 0x19c58]   ; 0054eb54
    PUSH EDX                            ; 0054eb5a
    MOV ECX,dword ptr [EBP + 0x19c54]   ; 0054eb5b
    PUSH ECX                            ; 0054eb61
    MOV EBX,dword ptr [ESP + 0x188]     ; 0054eb62
    PUSH EBX                            ; 0054eb69
    PUSH 0x5f06eb                       ; 0054eb6a
    LEA EAX,[ESP + 0x18]                ; 0054eb6f
    PUSH EAX                            ; 0054eb73
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0054eb74
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x1c                        ; 0054eb79
    MOV ESI,dword ptr [ESP + 0x170]     ; 0054eb7c
    PUSH ESI                            ; 0054eb83
    PUSH 0x0                            ; 0054eb84
    LEA EAX,[ESP + 0x8]                 ; 0054eb86
    PUSH EAX                            ; 0054eb8a
    LEA EDI,[ESI + 0xb]                 ; 0054eb8b
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0054eb8e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054eb93
    MOV dword ptr [ESP + 0x170],EDI     ; 0054eb96
    JMP 0x0054e897                      ; 0054eb9d
        ;   XREF to: 0054e897 (UNCONDITIONAL_JUMP)  ; LAB_0054e897
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0054eba2
        ;   Label: LAB_0054eba2
    MOV EDI,dword ptr [ESP + 0x16c]     ; 0054eba9
    MOV ECX,dword ptr [EAX + 0x144]     ; 0054ebb0
    ADD EDI,EBX                         ; 0054ebb6
    TEST ECX,ECX                        ; 0054ebb8
    JZ 0x0054ebc8                       ; 0054ebba
        ;   XREF to: 0054ebc8 (CONDITIONAL_JUMP)  ; LAB_0054ebc8
    MOV byte ptr [EDI + 0x19b58],0x0    ; 0054ebbc
    JMP 0x0054e897                      ; 0054ebc3
        ;   XREF to: 0054e897 (UNCONDITIONAL_JUMP)  ; LAB_0054e897
    PUSH 0x1                            ; 0054ebc8
        ;   Label: LAB_0054ebc8
    PUSH 0x1fe37ec                      ; 0054ebca
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 ; 0054ebcf
        ;   XREF to: 0044ceb0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0054ebd4
    ADD ESI,dword ptr [ESP + 0x154]     ; 0054ebd7
    PUSH ESI                            ; 0054ebde
    CALL core_setutil.cpp_C3DSLight_isVisible_FUN_0055d9c0 ; 0054ebdf
        ;   XREF to: 0055d9c0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSLight_isVisible_FUN_0055d9c0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0054ebe4
    PUSH 0x0                            ; 0054ebe7
    PUSH 0x1fe37ec                      ; 0054ebe9
    MOV byte ptr [EDI + 0x19b58],AL     ; 0054ebee
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 ; 0054ebf4
        ;   XREF to: 0044d610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0054ebf9
    MOV EAX,dword ptr [ESP + 0x160]     ; 0054ebfc
    MOV dword ptr [EBX + EAX*0x1 + 0x19c54],0x0 ; 0054ec03
    MOV dword ptr [EBX + EAX*0x1 + 0x19c58],0x0 ; 0054ec0e
    MOV dword ptr [EBX + EAX*0x1 + 0x19c5c],0x0 ; 0054ec19
    MOV dword ptr [EBX + EAX*0x1 + 0x19c60],0x0 ; 0054ec24
    JMP 0x0054e897                      ; 0054ec2f
        ;   XREF to: 0054e897 (UNCONDITIONAL_JUMP)  ; LAB_0054e897
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054ec34
        ;   Label: LAB_0054ec34
    PUSH EBX                            ; 0054ec3b
    CALL core_set.cpp_CDemonSet_clearLights_FUN_00551b90 ; 0054ec3c
        ;   XREF to: 00551b90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_00551b90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054ec41
    XOR EBP,EBP                         ; 0054ec44
    MOV dword ptr [0x01fe5c1c],EBP      ; 0054ec46 | g_CDemonRaytraceInstance
    ADD ESP,0x17c                       ; 0054ec4c
    POP EBP                             ; 0054ec52
    POP EDI                             ; 0054ec53
    POP ESI                             ; 0054ec54
    POP EBX                             ; 0054ec55
    RET                                 ; 0054ec56

