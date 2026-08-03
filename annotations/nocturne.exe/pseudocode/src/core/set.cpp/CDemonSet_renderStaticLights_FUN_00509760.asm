; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
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
; XREF[3]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049ceb1
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508cf0
;   core_set.cpp_FUN_00509a80 at 00509ad1
;
; Referenced Globals:
;   TerminatedCString s_renderStaticLights_3_2f_005904fa
;   double DOUBLE_0059051a = 0.0555555555555556
;   double DOUBLE_00590522 = 0.0000152587890625
;   double DOUBLE_0059052a = 1000
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005ae704
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_014b9920
;   undefined4 DAT_01b4d738
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.shadow_flag
;   undefined4 g_CGame_01c775ec.profile_mode
;   ... and 5 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
;   core_fire.cpp_CFireEffect_render_FUN_0048a650
;   core_gore.cpp_CGore_renderParticles_FUN_004afe00
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
;   core_set.cpp_FUN_0050e080
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509760
        ;   Label: core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760
    PUSH ESI                            ; 00509761
    PUSH EDI                            ; 00509762
    PUSH EBP                            ; 00509763
    SUB ESP,0x30                        ; 00509764
    MOV ESI,dword ptr [ESP + 0x44]      ; 00509767
    MOV EAX,[0x005b9354]                ; 0050976b | g_CGame_PTR_005b9354 | g_CGame_01c775ec
    CMP dword ptr [EAX + 0x24],0x0      ; 00509770 | g_CGame_01c775ec.shadow_flag
    JZ 0x0050983b                       ; 00509774
        ;   XREF to: 0050983b (CONDITIONAL_JUMP)  ; LAB_0050983b
    CMP dword ptr [EAX + 0x20c],0x0     ; 0050977a | g_CGame_01c775ec.profile_mode
    JNZ 0x00509843                      ; 00509781
        ;   XREF to: 00509843 (CONDITIONAL_JUMP)  ; LAB_00509843
    XOR EBX,EBX                         ; 00509787
        ;   Label: LAB_00509787
    MOV EBP,dword ptr [0x01fba2d8]      ; 00509789 | DAT_01fba2d8
    MOV dword ptr [ESP + 0x18],EBX      ; 0050978f
    MOV dword ptr [0x01fba938],EBX      ; 00509793 | g_CDemonRaytrace_01fba938
    TEST EBP,EBP                        ; 00509799
    JLE 0x005097db                      ; 0050979b
        ;   XREF to: 005097db (CONDITIONAL_JUMP)  ; LAB_005097db
    MOV dword ptr [ESP + 0x10],EBX      ; 0050979d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005097a1
        ;   Label: LAB_005097a1
    MOV EAX,dword ptr [EAX + 0x1fba2dc] ; 005097a5
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 005097ab
    MOV dword ptr [ESP + 0x24],EAX      ; 005097b1
    TEST EDX,EDX                        ; 005097b5
    JNZ 0x00509851                      ; 005097b7
        ;   XREF to: 00509851 (CONDITIONAL_JUMP)  ; LAB_00509851
    MOV EAX,dword ptr [ESP + 0x10]      ; 005097bd
        ;   Label: LAB_005097bd
    MOV EDX,dword ptr [ESP + 0x18]      ; 005097c1
    MOV ECX,dword ptr [0x01fba2d8]      ; 005097c5 | DAT_01fba2d8
    ADD EAX,0x4                         ; 005097cb
    INC EDX                             ; 005097ce
    MOV dword ptr [ESP + 0x10],EAX      ; 005097cf
    MOV dword ptr [ESP + 0x18],EDX      ; 005097d3
    CMP EDX,ECX                         ; 005097d7
    JL 0x005097a1                       ; 005097d9
        ;   XREF to: 005097a1 (CONDITIONAL_JUMP)  ; LAB_005097a1
    XOR EBX,EBX                         ; 005097db
        ;   Label: LAB_005097db
    MOV EDI,dword ptr [0x01fb9b54]      ; 005097dd | DAT_01fb9b54
    MOV dword ptr [ESP + 0x1c],EBX      ; 005097e3
    TEST EDI,EDI                        ; 005097e7
    JLE 0x00509829                      ; 005097e9
        ;   XREF to: 00509829 (CONDITIONAL_JUMP)  ; LAB_00509829
    MOV dword ptr [ESP + 0x14],EBX      ; 005097eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 005097ef
        ;   Label: LAB_005097ef
    MOV EAX,dword ptr [EAX + 0x1fb9b58] ; 005097f3 | DAT_01fb9b58
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 005097f9
    MOV dword ptr [ESP + 0x20],EAX      ; 005097ff
    TEST EDX,EDX                        ; 00509803
    JNZ 0x0050997c                      ; 00509805
        ;   XREF to: 0050997c (CONDITIONAL_JUMP)  ; LAB_0050997c
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050980b
        ;   Label: LAB_0050980b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050980f
    MOV EBX,dword ptr [0x01fb9b54]      ; 00509813 | DAT_01fb9b54
    ADD EDX,0x4                         ; 00509819
    INC ECX                             ; 0050981c
    MOV dword ptr [ESP + 0x14],EDX      ; 0050981d
    MOV dword ptr [ESP + 0x1c],ECX      ; 00509821
    CMP ECX,EBX                         ; 00509825
    JL 0x005097ef                       ; 00509827
        ;   XREF to: 005097ef (CONDITIONAL_JUMP)  ; LAB_005097ef
    MOV EAX,[0x005b9354]                ; 00509829 | g_CGame_PTR_005b9354 | g_CGame_01c775ec
        ;   Label: LAB_00509829
    CMP dword ptr [EAX + 0x20c],0x0     ; 0050982e | g_CGame_01c775ec.profile_mode
    JNZ 0x00509a27                      ; 00509835
        ;   XREF to: 00509a27 (CONDITIONAL_JUMP)  ; LAB_00509a27
    ADD ESP,0x30                        ; 0050983b
        ;   Label: LAB_0050983b
    POP EBP                             ; 0050983e
    POP EDI                             ; 0050983f
    POP ESI                             ; 00509840
    POP EBX                             ; 00509841
    RET                                 ; 00509842
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00509843
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00509843
    MOV dword ptr [ESP + 0x8],EAX       ; 00509848
    JMP 0x00509787                      ; 0050984c
        ;   XREF to: 00509787 (UNCONDITIONAL_JUMP)  ; LAB_00509787
    PUSH 0x0                            ; 00509851
        ;   Label: LAB_00509851
    MOV ECX,dword ptr [ESP + 0x28]      ; 00509853
    MOV EAX,dword ptr [EAX + 0x100]     ; 00509857
    PUSH ECX                            ; 0050985d
    MOV dword ptr [ESP + 0x14],EAX      ; 0050985e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 ; 00509862
        ;   XREF to: 0044e470 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00509867
    MOV EBX,dword ptr [ESP + 0x24]      ; 0050986a
    PUSH EBX                            ; 0050986e
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0 ; 0050986f
        ;   XREF to: 0044efb0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(CDemonLight * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1cd0]    ; 00509874
    ADD ESP,0x4                         ; 0050987a
    TEST EDI,EDI                        ; 0050987d
    JZ 0x0050995a                       ; 0050987f
        ;   XREF to: 0050995a (CONDITIONAL_JUMP)  ; LAB_0050995a
    PUSH 0x0                            ; 00509885
    PUSH dword ptr [EBX + 0x100]        ; 00509887
    PUSH ESI                            ; 0050988d
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 0050988e
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00509893
    PUSH 0x1                            ; 00509896
    PUSH ESI                            ; 00509898
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 00509899
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0050989e
    PUSH 0x0                            ; 005098a1
    PUSH ESI                            ; 005098a3
    XOR EBP,EBP                         ; 005098a4
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 005098a6
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 005098ab
    MOV EAX,dword ptr [ESI + 0x15f2fc]  ; 005098ae
    MOV dword ptr [ESP + 0x28],EBP      ; 005098b4
    TEST EAX,EAX                        ; 005098b8
    JLE 0x0050993c                      ; 005098ba
        ;   XREF to: 0050993c (CONDITIONAL_JUMP)  ; LAB_0050993c
    MOV EBP,ESI                         ; 005098c0
    MOV EAX,dword ptr [EBP + 0x15f300]  ; 005098c2
        ;   Label: LAB_005098c2
    PUSH EAX                            ; 005098c8
    MOV EDX,dword ptr [EAX + 0x14c]     ; 005098c9
    XOR EBX,EBX                         ; 005098cf
    CALL dword ptr [EDX + 0x8]          ; 005098d1
    MOV EAX,dword ptr [ESI + 0x15a8cc]  ; 005098d4
    ADD ESP,0x4                         ; 005098da
    TEST EAX,EAX                        ; 005098dd
    JLE 0x00509916                      ; 005098df
        ;   XREF to: 00509916 (CONDITIONAL_JUMP)  ; LAB_00509916
    MOV EDI,EBP                         ; 005098e1
    PUSH 0x0                            ; 005098e3
        ;   Label: LAB_005098e3
    PUSH EBX                            ; 005098e5
    PUSH ESI                            ; 005098e6
    CALL core_set.cpp_FUN_0050e080      ; 005098e7
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 005098ec
    MOV EAX,dword ptr [EDI + 0x15f300]  ; 005098ef
    PUSH EAX                            ; 005098f5
    MOV EDX,dword ptr [EAX + 0x14c]     ; 005098f6
    CALL dword ptr [EDX + 0x8]          ; 005098fc
    ADD ESP,0x4                         ; 005098ff
    PUSH ESI                            ; 00509902
    INC EBX                             ; 00509903
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00509904
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV EDX,dword ptr [ESI + 0x15a8cc]  ; 00509909
    ADD ESP,0x4                         ; 0050990f
    CMP EBX,EDX                         ; 00509912
    JL 0x005098e3                       ; 00509914
        ;   XREF to: 005098e3 (CONDITIONAL_JUMP)  ; LAB_005098e3
    PUSH 0x1                            ; 00509916
        ;   Label: LAB_00509916
    MOV EAX,[0x005ae704]                ; 00509918 | DAT_005ae704
    PUSH EAX                            ; 0050991d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050991e
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00509923
    MOV EDX,dword ptr [ESP + 0x28]      ; 00509926
    ADD EBP,0x4                         ; 0050992a
    INC EDX                             ; 0050992d
    MOV ECX,dword ptr [ESI + 0x15f2fc]  ; 0050992e
    MOV dword ptr [ESP + 0x28],EDX      ; 00509934
    CMP EDX,ECX                         ; 00509938
    JL 0x005098c2                       ; 0050993a
        ;   XREF to: 005098c2 (CONDITIONAL_JUMP)  ; LAB_005098c2
    MOV EBX,dword ptr [0x005b96c4]      ; 0050993c | g_CGore_PTR_005b96c4
        ;   Label: LAB_0050993c
    PUSH EBX                            ; 00509942
    CALL core_gore.cpp_CGore_renderParticles_FUN_004afe00 ; 00509943
        ;   XREF to: 004afe00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004afe00(CGore * this_ptr)
    ADD ESP,0x4                         ; 00509948
    MOV EDI,dword ptr [0x005b80f0]      ; 0050994b | g_CFireEffect_PTR_005b80f0
    PUSH EDI                            ; 00509951
    CALL core_fire.cpp_CFireEffect_render_FUN_0048a650 ; 00509952
        ;   XREF to: 0048a650 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0048a650(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00509957
    PUSH 0x1                            ; 0050995a
        ;   Label: LAB_0050995a
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050995c
    PUSH ECX                            ; 00509960
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 ; 00509961
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00509966
    MOV EDX,dword ptr [ESP + 0x24]      ; 00509969
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050996d
    MOV dword ptr [EDX + 0x100],EAX     ; 00509971
    JMP 0x005097bd                      ; 00509977
        ;   XREF to: 005097bd (UNCONDITIONAL_JUMP)  ; LAB_005097bd
    PUSH 0x1                            ; 0050997c
        ;   Label: LAB_0050997c
    PUSH EAX                            ; 0050997e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 ; 0050997f
        ;   XREF to: 0044e470 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00509984
    PUSH 0x22                           ; 00509987
    PUSH ESI                            ; 00509989
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 0050998a
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0050998f
    XOR EBP,EBP                         ; 00509992
    MOV EAX,dword ptr [ESP + 0x20]      ; 00509994
    MOV EBX,dword ptr [ESI + 0x15f2fc]  ; 00509998
    MOV [0x014b9920],EAX                ; 0050999e | DAT_014b9920
    TEST EBX,EBX                        ; 005099a3
    JLE 0x005099e5                      ; 005099a5
        ;   XREF to: 005099e5 (CONDITIONAL_JUMP)  ; LAB_005099e5
    MOV EDI,ESI                         ; 005099a7
    MOV EBX,dword ptr [EDI + 0x15f300]  ; 005099a9
        ;   Label: LAB_005099a9
    PUSH EBX                            ; 005099af
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005099b0
    CALL dword ptr [EAX + 0x8]          ; 005099b6
    ADD ESP,0x4                         ; 005099b9
    TEST EAX,EAX                        ; 005099bc
    JZ 0x00509a1e                       ; 005099be
        ;   XREF to: 00509a1e (CONDITIONAL_JUMP)  ; LAB_00509a1e
    OR byte ptr [EBX + 0x140],0x22      ; 005099c0
    PUSH 0x1                            ; 005099c7
        ;   Label: LAB_005099c7
    MOV EAX,[0x005ae704]                ; 005099c9 | DAT_005ae704
    PUSH EAX                            ; 005099ce | DAT_01b4d738
    ADD EDI,0x4                         ; 005099cf
    INC EBP                             ; 005099d2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 005099d3
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [ESI + 0x15f2fc]  ; 005099d8
    ADD ESP,0x8                         ; 005099de
    CMP EBP,EDX                         ; 005099e1
    JL 0x005099a9                       ; 005099e3
        ;   XREF to: 005099a9 (CONDITIONAL_JUMP)  ; LAB_005099a9
    MOV ECX,dword ptr [0x005b96c4]      ; 005099e5 | g_CGore_PTR_005b96c4
        ;   Label: LAB_005099e5
    PUSH ECX                            ; 005099eb
    CALL core_gore.cpp_CGore_renderParticles_FUN_004afe00 ; 005099ec
        ;   XREF to: 004afe00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004afe00(CGore * this_ptr)
    ADD ESP,0x4                         ; 005099f1
    MOV EBX,dword ptr [0x005b80f0]      ; 005099f4 | g_CFireEffect_PTR_005b80f0
    PUSH EBX                            ; 005099fa
    CALL core_fire.cpp_CFireEffect_render_FUN_0048a650 ; 005099fb
        ;   XREF to: 0048a650 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0048a650(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00509a00
    XOR EDI,EDI                         ; 00509a03
    PUSH EDI                            ; 00509a05
    MOV EBP,dword ptr [ESP + 0x24]      ; 00509a06
    PUSH EBP                            ; 00509a0a
    MOV dword ptr [0x014b9920],EDI      ; 00509a0b | DAT_014b9920
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 ; 00509a11
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00509a16
    JMP 0x0050980b                      ; 00509a19
        ;   XREF to: 0050980b (UNCONDITIONAL_JUMP)  ; LAB_0050980b
    AND byte ptr [EBX + 0x140],0xfd     ; 00509a1e
        ;   Label: LAB_00509a1e
    JMP 0x005099c7                      ; 00509a25
        ;   XREF to: 005099c7 (UNCONDITIONAL_JUMP)  ; LAB_005099c7
    MOV EDI,dword ptr [ESP + 0x8]       ; 00509a27
        ;   Label: LAB_00509a27
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00509a2b
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    SUB EAX,EDI                         ; 00509a30
    MOV dword ptr [ESP + 0x2c],EAX      ; 00509a32
    FILD dword ptr [ESP + 0x2c]         ; 00509a36
    FMUL double ptr [0x0059051a]        ; 00509a3a | DOUBLE_0059051a
    MOV EAX,[0x005b9354]                ; 00509a40 | g_CGame_PTR_005b9354
    FMUL double ptr [0x00590522]        ; 00509a45 | DOUBLE_00590522
    FLD float ptr [EAX + 0x264]         ; 00509a4b | g_CGame_01c775ec.delta_time_float
    FXCH                                ; 00509a51
    FMUL double ptr [0x0059052a]        ; 00509a53 | DOUBLE_0059052a
    FDIVRP                              ; 00509a59
    SUB ESP,0x8                         ; 00509a5b
    FSTP double ptr [ESP]               ; 00509a5e
    PUSH 0x5904fa                       ; 00509a61 | = "renderStaticLights : %3.2f ms\n"
    MOV EBP,dword ptr [0x005ad350]      ; 00509a66 | g_CConsole_PTR_005ad350
    PUSH EBP                            ; 00509a6c | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00509a6d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00509a72
    ADD ESP,0x30                        ; 00509a75
    POP EBP                             ; 00509a78
    POP EDI                             ; 00509a79
    POP ESI                             ; 00509a7a
    POP EBX                             ; 00509a7b
    RET                                 ; 00509a7c

