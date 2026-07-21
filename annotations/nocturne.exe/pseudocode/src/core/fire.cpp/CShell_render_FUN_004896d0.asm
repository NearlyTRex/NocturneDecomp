; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CShell_render_FUN_004896d0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0059d1f8
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   wincore_windll.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004896d0
        ;   Label: core_fire.cpp_CShell_render_FUN_004896d0
    PUSH ESI                            ; 004896d1
    PUSH EDI                            ; 004896d2
    PUSH EBP                            ; 004896d3
    SUB ESP,0xc                         ; 004896d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004896d7
    FLD float ptr [ESI + 0x18]          ; 004896db
    FLDZ                                ; 004896de
    FCOMPP                              ; 004896e0
    FNSTSW AX                           ; 004896e2
    SAHF                                ; 004896e4
    JC 0x004896ef                       ; 004896e5
        ;   XREF to: 004896ef (CONDITIONAL_JUMP)  ; LAB_004896ef
    ADD ESP,0xc                         ; 004896e7
        ;   Label: LAB_004896e7
    POP EBP                             ; 004896ea
    POP EDI                             ; 004896eb
    POP ESI                             ; 004896ec
    POP EBX                             ; 004896ed
    RET                                 ; 004896ee
    MOV EDI,dword ptr [0x005ae704]      ; 004896ef | DAT_005ae704
        ;   Label: LAB_004896ef
    MOV EBX,ESP                         ; 004896f5
    MOV EAX,ESI                         ; 004896f7
    MOV EDI,dword ptr [EDI]             ; 004896f9 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004896fb
    FMUL float ptr [0x0059d1f8]         ; 004896fd | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489703
    FLD float ptr [EAX + 0x4]           ; 00489705
    FMUL float ptr [0x0059d1f8]         ; 00489708 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048970e
    FLD float ptr [EAX + 0x8]           ; 00489711
    FMUL float ptr [0x0059d1f8]         ; 00489714 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048971a
    MOV EAX,ESP                         ; 0048971d
    PUSH EAX                            ; 0048971f
    PUSH EDI                            ; 00489720
    CALL wincore_windll.cpp_transformPoint_FUN_00530a25 ; 00489721
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformPoint_FUN_00530a25()
    ADD ESP,0x8                         ; 00489726
    PUSH EDI                            ; 00489729
    MOV EDX,dword ptr [0x005ae704]      ; 0048972a | DAT_005ae704
    PUSH EDX                            ; 00489730 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 00489731
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80()
    ADD ESP,0x8                         ; 00489736
    TEST EAX,EAX                        ; 00489739
    JZ 0x004896e7                       ; 0048973b
        ;   XREF to: 004896e7 (CONDITIONAL_JUMP)  ; LAB_004896e7
    MOV ECX,dword ptr [0x005ae704]      ; 0048973d | DAT_005ae704
    PUSH ECX                            ; 00489743 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00489744
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00489749
    TEST EAX,EAX                        ; 0048974c
    JNZ 0x00489761                      ; 0048974e
        ;   XREF to: 00489761 (CONDITIONAL_JUMP)  ; LAB_00489761
    PUSH EAX                            ; 00489750
    PUSH ESI                            ; 00489751
    MOV EBX,dword ptr [0x007f7370]      ; 00489752 | DAT_007f7370
    PUSH EBX                            ; 00489758
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00489759
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670()
    ADD ESP,0xc                         ; 0048975e
    PUSH 0x0                            ; 00489761
        ;   Label: LAB_00489761
    PUSH 0x2dd1184                      ; 00489763 | DAT_02dd1184
    PUSH 0x2dd1184                      ; 00489768 | DAT_02dd1184
    LEA EBX,[ESI + 0x38]                ; 0048976d
    PUSH EBX                            ; 00489770
    PUSH ESI                            ; 00489771
    MOV EDI,dword ptr [0x005be368]      ; 00489772 | DAT_005be368
    PUSH EDI                            ; 00489778 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 00489779
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0()
    ADD ESP,0x18                        ; 0048977e
    PUSH ESI                            ; 00489781
    MOV EBP,dword ptr [0x005ae704]      ; 00489782 | DAT_005ae704
    PUSH EBP                            ; 00489788 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00489789
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 0048978e
    PUSH 0x0                            ; 00489791
    PUSH EBX                            ; 00489793
    MOV EAX,[0x005ae704]                ; 00489794 | DAT_005ae704
    PUSH EAX                            ; 00489799 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048979a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 0048979f
    PUSH -0x1                           ; 004897a2
    PUSH 0x0                            ; 004897a4
    PUSH 0x0                            ; 004897a6
    MOV EDX,dword ptr [ESI + 0x54]      ; 004897a8
    PUSH EDX                            ; 004897ab
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004897ac
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    ADD ESP,0x10                        ; 004897b1
    MOV ECX,dword ptr [0x005ae704]      ; 004897b4 | DAT_005ae704
    PUSH ECX                            ; 004897ba | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004897bb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 004897c0
    ADD ESP,0xc                         ; 004897c3
    POP EBP                             ; 004897c6
    POP EDI                             ; 004897c7
    POP ESI                             ; 004897c8
    POP EBX                             ; 004897c9
    RET                                 ; 004897ca

