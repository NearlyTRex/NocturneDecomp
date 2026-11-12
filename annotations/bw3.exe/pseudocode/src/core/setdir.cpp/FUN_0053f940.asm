; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_0053f940(CDemonSet *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x200]:1  local_200
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0x6c]:4  local_6c
;
; XREF[4]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004baae4
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf9b2
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b82d1
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052d544
;
; Referenced Globals:
;   undefined4 DAT_005d0c86
;   undefined4 DAT_005d0c8e
;   undefined4 DAT_005d0c96
;   undefined4 DAT_005d0c9e
;   undefined4 DAT_005d0ca6
;   undefined4 DAT_005d0cae
;   undefined4 DAT_005d0cb6
;   undefined4 DAT_005e3ce0
;   undefined4 DAT_005e3cf8
;   undefined4 DAT_005e3cfc
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_00603eec
;   undefined4 DAT_00603ef4
;   ... and 26 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_actor.cpp_FUN_00408b80
;   core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960
;   core_box.cpp_FUN_0041d8b0
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890
;   core_setdir.cpp_FUN_00541a20
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f940
        ;   Label: core_setdir.cpp_FUN_0053f940
    PUSH ESI                            ; 0053f941
    PUSH EDI                            ; 0053f942
    PUSH EBP                            ; 0053f943
    MOV EBP,ESP                         ; 0053f944
    SUB ESP,0x398                       ; 0053f946
    AND ESP,0xfffffff8                  ; 0053f94c
    XOR EDX,EDX                         ; 0053f94f
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053f951
    MOV dword ptr [ESP + 0x2dc],EDX     ; 0053f954
    TEST ECX,ECX                        ; 0053f95b
    JNZ 0x0053f983                      ; 0053f95d
        ;   XREF to: 0053f983 (CONDITIONAL_JUMP)  ; LAB_0053f983
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f95f
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 0053f962
    JL 0x0053f977                       ; 0053f969
        ;   XREF to: 0053f977 (CONDITIONAL_JUMP)  ; LAB_0053f977
    MOV EAX,0x1                         ; 0053f96b
        ;   Label: LAB_0053f96b
    MOV ESP,EBP                         ; 0053f970
    POP EBP                             ; 0053f972
    POP EDI                             ; 0053f973
    POP ESI                             ; 0053f974
    POP EBX                             ; 0053f975
    RET                                 ; 0053f976
    PUSH EDX                            ; 0053f977
        ;   Label: LAB_0053f977
    PUSH EAX                            ; 0053f978
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 0053f979
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0053f97e
    JMP 0x0053f96b                      ; 0053f981
        ;   XREF to: 0053f96b (UNCONDITIONAL_JUMP)  ; LAB_0053f96b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f983
        ;   Label: LAB_0053f983
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 0053f986
    JL 0x0053ffb9                       ; 0053f98d
        ;   XREF to: 0053ffb9 (CONDITIONAL_JUMP)  ; LAB_0053ffb9
    CMP dword ptr [EBP + 0x1c],0x2      ; 0053f993
    JGE 0x0053f9af                      ; 0053f997
        ;   XREF to: 0053f9af (CONDITIONAL_JUMP)  ; LAB_0053f9af
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f999
        ;   Label: LAB_0053f999
    FLD float ptr [EAX + 0x15aecc]      ; 0053f99c
    FLDZ                                ; 0053f9a2
    FCOMPP                              ; 0053f9a4
    FNSTSW AX                           ; 0053f9a6
    SAHF                                ; 0053f9a8
    JC 0x0053ffd6                       ; 0053f9a9
        ;   XREF to: 0053ffd6 (CONDITIONAL_JUMP)  ; LAB_0053ffd6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f9af
        ;   Label: LAB_0053f9af
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f9b2 | DAT_005f2afc
    XOR EDX,EDX                         ; 0053f9b8
    MOV dword ptr [EAX + 0x15aecc],0x0  ; 0053f9ba
    MOV EAX,[0x01c6cee8]                ; 0053f9c4 | DAT_01c6cee8
    PUSH ECX                            ; 0053f9c9 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053f9ca
    MOV dword ptr [0x01c6cee8],EDX      ; 0053f9d1 | DAT_01c6cee8
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0053f9d7
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053f9dc
    PUSH 0x0                            ; 0053f9df
    MOV EBX,dword ptr [0x005f2afc]      ; 0053f9e1 | DAT_005f2afc
    PUSH EBX                            ; 0053f9e7 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x344],EAX     ; 0053f9e8
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0053f9ef
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0053f9f4
    PUSH 0x30                           ; 0053f9f7
    PUSH 0x40                           ; 0053f9f9
    PUSH 0x0                            ; 0053f9fb
    PUSH 0x0                            ; 0053f9fd
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f9ff | DAT_005f2afc
    PUSH ESI                            ; 0053fa05 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0 ; 0053fa06
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0053fa0b
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053fa0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053fa11
    PUSH EDI                            ; 0053fa14
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053fa15
    LEA ESI,[ESP + 0x1ac]               ; 0053fa1b
    CALL dword ptr [EAX + 0x1c]         ; 0053fa22
    MOV ECX,0x6                         ; 0053fa25
    LEA EDI,[ESP + 0x194]               ; 0053fa2a
    ADD ESP,0x4                         ; 0053fa31
    XOR EAX,EAX                         ; 0053fa34
    LEA ESI,[ESP + 0x1a8]               ; 0053fa36
    MOV dword ptr [ESP + 0x390],EAX     ; 0053fa3d
    LEA EAX,[ESP + 0xcc]                ; 0053fa44
    MOVSD.REP ES:EDI,ESI                ; 0053fa4b
    MOV dword ptr [ESP + 0x374],EAX     ; 0053fa4d
    MOV EDX,dword ptr [ESP + 0x390]     ; 0053fa54
        ;   Label: LAB_0053fa54
    PUSH EDX                            ; 0053fa5b
    LEA EAX,[ESP + 0x194]               ; 0053fa5c
    PUSH EAX                            ; 0053fa63
    LEA ESI,[ESP + 0x2b8]               ; 0053fa64
    LEA EDI,[ESP + 0x2d0]               ; 0053fa6b
    CALL core_box.cpp_FUN_0041d8b0      ; 0053fa72
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x2b8]               ; 0053fa77
    ADD ESP,0x8                         ; 0053fa7e
    LEA EAX,[ESP + 0x2c8]               ; 0053fa81
    MOV EBX,dword ptr [ESP + 0x374]     ; 0053fa88
    MOVSD ES:EDI,ESI                    ; 0053fa8f
    MOVSD ES:EDI,ESI                    ; 0053fa90
    MOVSD ES:EDI,ESI                    ; 0053fa91
    FLD float ptr [EAX]                 ; 0053fa92
    FMUL float ptr [0x005e3ce0]         ; 0053fa94 | DAT_005e3ce0
    FISTP dword ptr [EBX]               ; 0053fa9a
    FLD float ptr [EAX + 0x4]           ; 0053fa9c
    FMUL float ptr [0x005e3ce0]         ; 0053fa9f | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x4]         ; 0053faa5
    FLD float ptr [EAX + 0x8]           ; 0053faa8
    FMUL float ptr [0x005e3ce0]         ; 0053faab | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x8]         ; 0053fab1
    LEA ECX,[EBX + 0xc]                 ; 0053fab4
    MOV EBX,dword ptr [ESP + 0x390]     ; 0053fab7
    INC EBX                             ; 0053fabe
    MOV dword ptr [ESP + 0x374],ECX     ; 0053fabf
    MOV dword ptr [ESP + 0x390],EBX     ; 0053fac6
    CMP EBX,0x8                         ; 0053facd
    JL 0x0053fa54                       ; 0053fad0
        ;   XREF to: 0053fa54 (CONDITIONAL_JUMP)  ; LAB_0053fa54
    FLD float ptr [ESP + 0x190]         ; 0053fad2
    FLD float ptr [ESP + 0x194]         ; 0053fad9
    FLD float ptr [ESP + 0x198]         ; 0053fae0
    LEA EDI,[ESP + 0x244]               ; 0053fae7
    LEA ESI,[ESP + 0x268]               ; 0053faee
    FXCH ST2                            ; 0053faf5
    FADD float ptr [ESP + 0x19c]        ; 0053faf7
    FXCH                                ; 0053fafe
    FADD float ptr [ESP + 0x1a0]        ; 0053fb00
    FXCH ST2                            ; 0053fb07
    FADD float ptr [ESP + 0x1a4]        ; 0053fb09
    FXCH                                ; 0053fb10
    FSTP float ptr [ESP + 0x268]        ; 0053fb12
    FXCH                                ; 0053fb19
    FSTP float ptr [ESP + 0x26c]        ; 0053fb1b
    FSTP float ptr [ESP + 0x270]        ; 0053fb22
    MOVSD ES:EDI,ESI                    ; 0053fb29
    MOVSD ES:EDI,ESI                    ; 0053fb2a
    MOVSD ES:EDI,ESI                    ; 0053fb2b
    FLD float ptr [0x005d0c86]          ; 0053fb2c | DAT_005d0c86
    FLD float ptr [ESP + 0x244]         ; 0053fb32
    FMUL ST1                            ; 0053fb39
    FLD float ptr [ESP + 0x248]         ; 0053fb3b
    FMUL ST2                            ; 0053fb42
    FLD float ptr [ESP + 0x24c]         ; 0053fb44
    FMULP ST3                           ; 0053fb4b
    LEA EBX,[ESP + 0x12c]               ; 0053fb4d
    LEA EAX,[ESP + 0x2a4]               ; 0053fb54
    LEA EDI,[ESP + 0x2a4]               ; 0053fb5b
    LEA ESI,[ESP + 0x238]               ; 0053fb62
    FXCH                                ; 0053fb69
    FSTP float ptr [ESP + 0x238]        ; 0053fb6b
    FSTP float ptr [ESP + 0x23c]        ; 0053fb72
    FSTP float ptr [ESP + 0x240]        ; 0053fb79
    MOVSD ES:EDI,ESI                    ; 0053fb80
    MOVSD ES:EDI,ESI                    ; 0053fb81
    MOVSD ES:EDI,ESI                    ; 0053fb82
    FLD float ptr [EAX]                 ; 0053fb83
    FMUL float ptr [0x005e3ce0]         ; 0053fb85 | DAT_005e3ce0
    FISTP dword ptr [EBX]               ; 0053fb8b
    FLD float ptr [EAX + 0x4]           ; 0053fb8d
    FMUL float ptr [0x005e3ce0]         ; 0053fb90 | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x4]         ; 0053fb96
    FLD float ptr [EAX + 0x8]           ; 0053fb99
    FMUL float ptr [0x005e3ce0]         ; 0053fb9c | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x8]         ; 0053fba2
    MOV EAX,0x603eec                    ; 0053fba5 | DAT_00603eec
    LEA ESI,[EAX + 0x1b0]               ; 0053fbaa | DAT_0060409c
    IMUL ECX,dword ptr [EAX + 0x18],0xc ; 0053fbb0 | DAT_00603f04 | DAT_00603f4c
        ;   Label: LAB_0053fbb0
    LEA EDX,[ESP + 0xcc]                ; 0053fbb4
    ADD EDX,ECX                         ; 0053fbbb
    MOV ECX,dword ptr [EAX + 0xc]       ; 0053fbbd | DAT_00603ef8 | DAT_00603f40
    MOV EBX,dword ptr [EDX + 0x4]       ; 0053fbc0
    IMUL EBX,ECX                        ; 0053fbc3
    MOV EDI,dword ptr [EDX]             ; 0053fbc6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053fbc8 | DAT_00603ef4 | DAT_00603f3c
    IMUL ECX,EDI                        ; 0053fbcb
    MOV EDI,dword ptr [EDX + 0x8]       ; 0053fbce
    ADD EBX,ECX                         ; 0053fbd1
    MOV ECX,dword ptr [EAX + 0x10]      ; 0053fbd3 | DAT_00603efc | DAT_00603f44
    IMUL ECX,EDI                        ; 0053fbd6
    ADD EAX,0x48                        ; 0053fbd9
    ADD EBX,ECX                         ; 0053fbdc
    MOV dword ptr [EAX + -0x34],EBX     ; 0053fbde | DAT_00603f00 | DAT_00603f48
    CMP EAX,ESI                         ; 0053fbe1
    JNZ 0x0053fbb0                      ; 0053fbe3
        ;   XREF to: 0053fbb0 (CONDITIONAL_JUMP)  ; LAB_0053fbb0
    CMP dword ptr [EBP + 0x1c],0x0      ; 0053fbe5
    JZ 0x00540045                       ; 0053fbe9
        ;   XREF to: 00540045 (CONDITIONAL_JUMP)  ; LAB_00540045
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fbef
    MOV EAX,dword ptr [EAX]             ; 0053fbf2
    MOV dword ptr [ESP + 0x2e0],EAX     ; 0053fbf4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fbfb
    XOR ESI,ESI                         ; 0053fbfe
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 0053fc00
    MOV dword ptr [0x02125514],ESI      ; 0053fc0a | DAT_02125514
    MOV dword ptr [EAX + 0x15aec0],ESI  ; 0053fc10
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053fc16
        ;   Label: LAB_0053fc16
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053fc19
    PUSH EDI                            ; 0053fc1c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053fc1d
    LEA ESI,[ESP + 0x1dc]               ; 0053fc23
    CALL dword ptr [EAX + 0x1c]         ; 0053fc2a
    MOV ECX,0x6                         ; 0053fc2d
    LEA EDI,[ESP + 0x1f4]               ; 0053fc32
    ADD ESP,0x4                         ; 0053fc39
    LEA EAX,[ESP + 0x1f0]               ; 0053fc3c
    LEA ESI,[ESP + 0x1d8]               ; 0053fc43
    PUSH EAX                            ; 0053fc4a
    MOVSD.REP ES:EDI,ESI                ; 0053fc4b
    CALL core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960 ; 0053fc4d
        ;   XREF to: 0041e960 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960(CBoundingBox3D * this_ptr)
    MOV dword ptr [ESP + 0x398],EAX     ; 0053fc52
    FLD float ptr [ESP + 0x398]         ; 0053fc59
    FMUL double ptr [0x005d0c8e]        ; 0053fc60 | DAT_005d0c8e
    LEA EDI,[ESP + 0x20c]               ; 0053fc66
    LEA EAX,[ESP + 0x20c]               ; 0053fc6d
    ADD ESP,0x4                         ; 0053fc74
    FLD1                                ; 0053fc77
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053fc79
    PUSH EAX                            ; 0053fc7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fc7d
    FADDP                               ; 0053fc80
    LEA ESI,[ESI + 0x20]                ; 0053fc82
    FSTP float ptr [ESP + 0x344]        ; 0053fc85
    MOVSD ES:EDI,ESI                    ; 0053fc8c
    MOVSD ES:EDI,ESI                    ; 0053fc8d
    MOVSD ES:EDI,ESI                    ; 0053fc8e
    PUSH EAX                            ; 0053fc8f
    FLD float ptr [ESP + 0x214]         ; 0053fc90
    FADD float ptr [0x005d0c96]         ; 0053fc97 | DAT_005d0c96
    LEA EDI,[ESP + 0x294]               ; 0053fc9d
    FSTP float ptr [ESP + 0x214]        ; 0053fca4
    CALL core_setdir.cpp_FUN_00541a20   ; 0053fcab
        ;   XREF to: 00541a20 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00541a20()
    ADD ESP,0x8                         ; 0053fcb0
    LEA ESI,[ESP + 0x250]               ; 0053fcb3
    FLD float ptr [ESP + 0x1f0]         ; 0053fcba
    FLD float ptr [ESP + 0x1f4]         ; 0053fcc1
    FLD float ptr [ESP + 0x1f8]         ; 0053fcc8
    FXCH ST2                            ; 0053fccf
    FADD float ptr [ESP + 0x1fc]        ; 0053fcd1
    FXCH                                ; 0053fcd8
    FADD float ptr [ESP + 0x200]        ; 0053fcda
    FXCH ST2                            ; 0053fce1
    FADD float ptr [ESP + 0x204]        ; 0053fce3
    FXCH                                ; 0053fcea
    FSTP float ptr [ESP + 0x250]        ; 0053fcec
    FXCH                                ; 0053fcf3
    FSTP float ptr [ESP + 0x254]        ; 0053fcf5
    FSTP float ptr [ESP + 0x258]        ; 0053fcfc
    MOVSD ES:EDI,ESI                    ; 0053fd03
    MOVSD ES:EDI,ESI                    ; 0053fd04
    MOVSD ES:EDI,ESI                    ; 0053fd05
    FLD float ptr [0x005d0c86]          ; 0053fd06 | DAT_005d0c86
    FLD float ptr [ESP + 0x28c]         ; 0053fd0c
    FMUL ST1                            ; 0053fd13
    FLD float ptr [ESP + 0x290]         ; 0053fd15
    FMUL ST2                            ; 0053fd1c
    FLD float ptr [ESP + 0x294]         ; 0053fd1e
    FMULP ST3                           ; 0053fd25
    MOV dword ptr [ESP + 0x2e4],EAX     ; 0053fd27
    LEA EAX,[ESP + 0x2bc]               ; 0053fd2e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053fd35
    PUSH EAX                            ; 0053fd38
    LEA EDI,[ESP + 0x2c0]               ; 0053fd39
    LEA ESI,[ESP + 0x29c]               ; 0053fd40
    FXCH                                ; 0053fd47
    FSTP float ptr [ESP + 0x29c]        ; 0053fd49
    FSTP float ptr [ESP + 0x2a0]        ; 0053fd50
    FSTP float ptr [ESP + 0x2a4]        ; 0053fd57
    MOVSD ES:EDI,ESI                    ; 0053fd5e
    MOVSD ES:EDI,ESI                    ; 0053fd5f
    MOVSD ES:EDI,ESI                    ; 0053fd60
    PUSH EDX                            ; 0053fd61
    LEA ESI,[ESP + 0x21c]               ; 0053fd62
    LEA EDI,[ESP + 0x264]               ; 0053fd69
    CALL core_actor.cpp_FUN_00408b80    ; 0053fd70
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x21c]               ; 0053fd75
    LEA EDX,[ESP + 0x264]               ; 0053fd7c
    ADD ESP,0x8                         ; 0053fd83
    LEA EAX,[ESP + 0x208]               ; 0053fd86
    MOVSD ES:EDI,ESI                    ; 0053fd8d
    MOVSD ES:EDI,ESI                    ; 0053fd8e
    MOVSD ES:EDI,ESI                    ; 0053fd8f
    CMP EAX,EDX                         ; 0053fd90
    JZ 0x0053fdbe                       ; 0053fd92
        ;   XREF to: 0053fdbe (CONDITIONAL_JUMP)  ; LAB_0053fdbe
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0053fd94
    MOV dword ptr [ESP + 0x208],EAX     ; 0053fd9b
    MOV EAX,dword ptr [ESP + 0x260]     ; 0053fda2
    MOV dword ptr [ESP + 0x20c],EAX     ; 0053fda9
    MOV EAX,dword ptr [ESP + 0x264]     ; 0053fdb0
    MOV dword ptr [ESP + 0x210],EAX     ; 0053fdb7
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0053fdbe
        ;   Label: LAB_0053fdbe
    CMP EAX,dword ptr [0x02125518]      ; 0053fdc5 | DAT_02125518
    JNZ 0x005400ea                      ; 0053fdcb
        ;   XREF to: 005400ea (CONDITIONAL_JUMP)  ; LAB_005400ea
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0053fdd1
        ;   Label: LAB_0053fdd1
    MOV [0x02125518],EAX                ; 0053fdd8 | DAT_02125518
    CMP EAX,-0x1                        ; 0053fddd
    SETZ AL                             ; 0053fde0
    AND EAX,0xff                        ; 0053fde3
    MOV [0x0270f3d4],EAX                ; 0053fde8 | DAT_0270f3d4
    XOR EAX,EAX                         ; 0053fded
    ADD EAX,0x4                         ; 0053fdef
        ;   Label: LAB_0053fdef
    MOV EDX,dword ptr [EAX + 0x1c60da8] ; 0053fdf2 | DAT_01c60dac
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EDX ; 0053fdf8
    CMP EAX,0xc0                        ; 0053fdfc
    JNZ 0x0053fdef                      ; 0053fe01
        ;   XREF to: 0053fdef (CONDITIONAL_JUMP)  ; LAB_0053fdef
    FLD float ptr [0x005e3cfc]          ; 0053fe03 | DAT_005e3cfc
    FMUL ST0                            ; 0053fe09
    XOR EAX,EAX                         ; 0053fe0b
    XOR ECX,ECX                         ; 0053fe0d
    MOV [0x02701910],EAX                ; 0053fe0f | DAT_02701910
    MOV dword ptr [ESP + 0x388],EAX     ; 0053fe14
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053fe1b
    MOV dword ptr [ESP + 0x378],ECX     ; 0053fe1e
    ADD EAX,0x20                        ; 0053fe25
    FSTP float ptr [ESP + 0x2f0]        ; 0053fe28
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053fe2f
    MOV EAX,[0x00603b28]                ; 0053fe36 | g_CDemonSetPtr
        ;   Label: LAB_0053fe36
    MOV EDX,dword ptr [ESP + 0x388]     ; 0053fe3b
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0053fe42 | g_CDemonSetInstance.actor_count
    JL 0x0054011e                       ; 0053fe48
        ;   XREF to: 0054011e (CONDITIONAL_JUMP)  ; LAB_0054011e
    FLD float ptr [0x005e3cfc]          ; 0053fe4e | DAT_005e3cfc
    FMUL ST0                            ; 0053fe54
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053fe56
    FLD float ptr [0x005e3cf8]          ; 0053fe59 | DAT_005e3cf8
    FLD ST0                             ; 0053fe5f
    ADD EAX,0x20                        ; 0053fe61
    FMULP                               ; 0053fe64
    MOV dword ptr [ESP + 0x370],EAX     ; 0053fe66
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fe6d
    FXCH                                ; 0053fe70
    FSTP float ptr [ESP + 0x358]        ; 0053fe72
    ADD EAX,0x4                         ; 0053fe79
    FSTP float ptr [ESP + 0x32c]        ; 0053fe7c
    MOV dword ptr [ESP + 0x300],EAX     ; 0053fe83
    CMP dword ptr [ESP + 0x2e0],0x0     ; 0053fe8a
        ;   Label: LAB_0053fe8a
    JLE 0x0053fea4                      ; 0053fe92
        ;   XREF to: 0053fea4 (CONDITIONAL_JUMP)  ; LAB_0053fea4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053fe94
    MOV EAX,[0x02125514]                ; 0053fe97 | DAT_02125514
    CMP EAX,dword ptr [EDX]             ; 0053fe9c
    JL 0x00540230                       ; 0053fe9e
        ;   XREF to: 00540230 (CONDITIONAL_JUMP)  ; LAB_00540230
    XOR EAX,EAX                         ; 0053fea4
        ;   Label: LAB_0053fea4
    ADD EAX,0x4                         ; 0053fea6
        ;   Label: LAB_0053fea6
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x8] ; 0053fea9
    MOV dword ptr [EAX + 0x1c60da8],EDX ; 0053fead | DAT_01c60dac
    CMP EAX,0xc0                        ; 0053feb3
    JNZ 0x0053fea6                      ; 0053feb8
        ;   XREF to: 0053fea6 (CONDITIONAL_JUMP)  ; LAB_0053fea6
    MOV EAX,[0x005f2afc]                ; 0053feba | DAT_005f2afc
    PUSH EAX                            ; 0053febf | DAT_01bdd7e4
    CALL engine_drender.cpp_popViewport_FUN_0046d320 ; 0053fec0
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046d320()
    ADD ESP,0x4                         ; 0053fec5
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0053fec8
    PUSH EDX                            ; 0053fecf
    MOV ECX,dword ptr [0x005f2afc]      ; 0053fed0 | DAT_005f2afc
    PUSH ECX                            ; 0053fed6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0053fed7
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0053fedc
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0053fedf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053fee6
    MOV [0x01c6cee8],EAX                ; 0053fee9 | DAT_01c6cee8
    MOV EBX,dword ptr [EDX]             ; 0053feee
    CMP EBX,dword ptr [0x02125514]      ; 0053fef0 | DAT_02125514
    JG 0x0053ffab                       ; 0053fef6
        ;   XREF to: 0053ffab (CONDITIONAL_JUMP)  ; LAB_0053ffab
    MOV ESI,0xbf800000                  ; 0053fefc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ff01
    MOV EBX,0xffffffff                  ; 0053ff04
    XOR EDX,EDX                         ; 0053ff09
    MOV EDI,dword ptr [EAX]             ; 0053ff0b
    MOV dword ptr [ESP + 0x4],ESI       ; 0053ff0d
    TEST EDI,EDI                        ; 0053ff11
    JLE 0x0053ff3f                      ; 0053ff13
        ;   XREF to: 0053ff3f (CONDITIONAL_JUMP)  ; LAB_0053ff3f
    XOR ECX,ECX                         ; 0053ff15
    FLD float ptr [ECX + 0x2701528]     ; 0053ff17
        ;   Label: LAB_0053ff17
    FCOMP float ptr [ESP + 0x4]         ; 0053ff1d
    FNSTSW AX                           ; 0053ff21
    SAHF                                ; 0053ff23
    JBE 0x0053ff32                      ; 0053ff24
        ;   XREF to: 0053ff32 (CONDITIONAL_JUMP)  ; LAB_0053ff32
    MOV EAX,dword ptr [ECX + 0x2701528] ; 0053ff26
    MOV EBX,EDX                         ; 0053ff2c
    MOV dword ptr [ESP + 0x4],EAX       ; 0053ff2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ff32
        ;   Label: LAB_0053ff32
    INC EDX                             ; 0053ff35
    MOV ESI,dword ptr [EAX]             ; 0053ff36
    ADD ECX,0x4                         ; 0053ff38
    CMP EDX,ESI                         ; 0053ff3b
    JL 0x0053ff17                       ; 0053ff3d
        ;   XREF to: 0053ff17 (CONDITIONAL_JUMP)  ; LAB_0053ff17
    TEST EBX,EBX                        ; 0053ff3f
        ;   Label: LAB_0053ff3f
    JL 0x0053ffa3                       ; 0053ff41
        ;   XREF to: 0053ffa3 (CONDITIONAL_JUMP)  ; LAB_0053ffa3
    FLD float ptr [ESP + 0x4]           ; 0053ff43
    MOV EDX,0x1                         ; 0053ff47
    FLDZ                                ; 0053ff4c
    FCOMPP                              ; 0053ff4e
    FNSTSW AX                           ; 0053ff50
    SAHF                                ; 0053ff52
    JC 0x0053ff57                       ; 0053ff53
        ;   XREF to: 0053ff57 (CONDITIONAL_JUMP)  ; LAB_0053ff57
    XOR EDX,EDX                         ; 0053ff55
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ff57
        ;   Label: LAB_0053ff57
    CMP EBX,dword ptr [EAX + 0x15aeb8]  ; 0053ff5a
    JNZ 0x0053ff64                      ; 0053ff60
        ;   XREF to: 0053ff64 (CONDITIONAL_JUMP)  ; LAB_0053ff64
    XOR EDX,EDX                         ; 0053ff62
    CMP dword ptr [EBP + 0x1c],0x1      ; 0053ff64
        ;   Label: LAB_0053ff64
    JLE 0x0053ff6f                      ; 0053ff68
        ;   XREF to: 0053ff6f (CONDITIONAL_JUMP)  ; LAB_0053ff6f
    MOV EDX,0x1                         ; 0053ff6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ff6f
        ;   Label: LAB_0053ff6f
    CMP dword ptr [EAX + 0x15aeb8],0x0  ; 0053ff72
    JL 0x0053ff7f                       ; 0053ff79
        ;   XREF to: 0053ff7f (CONDITIONAL_JUMP)  ; LAB_0053ff7f
    TEST EDX,EDX                        ; 0053ff7b
    JZ 0x0053ffa3                       ; 0053ff7d
        ;   XREF to: 0053ffa3 (CONDITIONAL_JUMP)  ; LAB_0053ffa3
    PUSH EBX                            ; 0053ff7f
        ;   Label: LAB_0053ff7f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053ff80
    MOV EAX,[0x0270f3d4]                ; 0053ff83 | DAT_0270f3d4
    PUSH EDX                            ; 0053ff88
    MOV ESI,0x1                         ; 0053ff89
    MOV dword ptr [EDX + 0x15ae5c],EAX  ; 0053ff8e
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 0053ff94
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0053ff99
    MOV dword ptr [ESP + 0x2dc],ESI     ; 0053ff9c
    XOR EDI,EDI                         ; 0053ffa3
        ;   Label: LAB_0053ffa3
    MOV dword ptr [0x02125514],EDI      ; 0053ffa5 | DAT_02125514
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 0053ffab
        ;   Label: LAB_0053ffab
    MOV ESP,EBP                         ; 0053ffb2
    POP EBP                             ; 0053ffb4
    POP EDI                             ; 0053ffb5
    POP ESI                             ; 0053ffb6
    POP EBX                             ; 0053ffb7
    RET                                 ; 0053ffb8
    MOV dword ptr [EAX + 0x15aec8],0xffffffff ; 0053ffb9
        ;   Label: LAB_0053ffb9
    MOV EDI,0x1                         ; 0053ffc3
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 0053ffc8
    MOV dword ptr [EBP + 0x1c],EDI      ; 0053ffce
    JMP 0x0053f999                      ; 0053ffd1
        ;   XREF to: 0053f999 (UNCONDITIONAL_JUMP)  ; LAB_0053f999
    MOV EDX,dword ptr [0x005fe9dc]      ; 0053ffd6 | g_CGamePtr
        ;   Label: LAB_0053ffd6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ffdc
    FLD float ptr [EDX + 0x314]         ; 0053ffdf | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x15aecc]    ; 0053ffe5
    FST float ptr [EAX + 0x15aecc]      ; 0053ffeb
    FLDZ                                ; 0053fff1
    FCOMPP                              ; 0053fff3
    FNSTSW AX                           ; 0053fff5
    SAHF                                ; 0053fff7
    JNC 0x00540039                      ; 0053fff8
        ;   XREF to: 00540039 (CONDITIONAL_JUMP)  ; LAB_00540039
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fffa
    MOV EDX,dword ptr [EAX + 0x15aec8]  ; 0053fffd
    TEST EDX,EDX                        ; 00540003
    JL 0x00540014                       ; 00540005
        ;   XREF to: 00540014 (CONDITIONAL_JUMP)  ; LAB_00540014
    MOV EAX,EDX                         ; 00540007
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540009
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 0054000c
    JNZ 0x0054001d                      ; 00540012
        ;   XREF to: 0054001d (CONDITIONAL_JUMP)  ; LAB_0054001d
    XOR EAX,EAX                         ; 00540014
        ;   Label: LAB_00540014
    MOV ESP,EBP                         ; 00540016
    POP EBP                             ; 00540018
    POP EDI                             ; 00540019
    POP ESI                             ; 0054001a
    POP EBX                             ; 0054001b
    RET                                 ; 0054001c
    MOV EBX,dword ptr [EDX + 0x15aec8]  ; 0054001d
        ;   Label: LAB_0054001d
    PUSH EBX                            ; 00540023
    PUSH EDX                            ; 00540024
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 00540025
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    MOV EAX,0x1                         ; 0054002a
    ADD ESP,0x8                         ; 0054002f
    MOV ESP,EBP                         ; 00540032
    POP EBP                             ; 00540034
    POP EDI                             ; 00540035
    POP ESI                             ; 00540036
    POP EBX                             ; 00540037
    RET                                 ; 00540038
    MOV dword ptr [EBP + 0x1c],0x1      ; 00540039
        ;   Label: LAB_00540039
    JMP 0x0053f9af                      ; 00540040
        ;   XREF to: 0053f9af (UNCONDITIONAL_JUMP)  ; LAB_0053f9af
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540045
        ;   Label: LAB_00540045
    MOV EDX,dword ptr [EDX]             ; 00540048
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054004a
    ADD EAX,EDX                         ; 00540051
    ADD EAX,EAX                         ; 00540053
    MOV dword ptr [ESP + 0x394],EAX     ; 00540055
    MOV EAX,[0x005fe9dc]                ; 0054005c | g_CGamePtr
    FILD dword ptr [ESP + 0x394]        ; 00540061
    FMUL float ptr [EAX + 0x314]        ; 00540068 | g_CGameInstance.delta_time_float
    CALL crt_math.c_round_FUN_005a3120  ; 0054006e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x2e0]       ; 00540073
    CMP dword ptr [ESP + 0x2e0],0x3     ; 0054007a
    JGE 0x0054008f                      ; 00540082
        ;   XREF to: 0054008f (CONDITIONAL_JUMP)  ; LAB_0054008f
    MOV dword ptr [ESP + 0x2e0],0x3     ; 00540084
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054008f
        ;   Label: LAB_0054008f
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 00540092
    MOV EBX,dword ptr [EDX]             ; 00540099
    CMP EAX,EBX                         ; 0054009b
    JLE 0x005400a6                      ; 0054009d
        ;   XREF to: 005400a6 (CONDITIONAL_JUMP)  ; LAB_005400a6
    MOV dword ptr [ESP + 0x2e0],EBX     ; 0054009f
    MOV EDX,dword ptr [0x005fe9dc]      ; 005400a6 | g_CGamePtr
        ;   Label: LAB_005400a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005400ac
    FLD float ptr [EDX + 0x314]         ; 005400af | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x15aec0]    ; 005400b5
    FST float ptr [EAX + 0x15aec0]      ; 005400bb
    FLDZ                                ; 005400c1
    FCOMPP                              ; 005400c3
    FNSTSW AX                           ; 005400c5
    SAHF                                ; 005400c7
    JC 0x0053fc16                       ; 005400c8
        ;   XREF to: 0053fc16 (CONDITIONAL_JUMP)  ; LAB_0053fc16
    MOV EAX,dword ptr [EBP + 0x14]      ; 005400ce
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 005400d1
    MOV dword ptr [EAX + 0x15aec0],0x0  ; 005400db
    JMP 0x0053fc16                      ; 005400e5
        ;   XREF to: 0053fc16 (UNCONDITIONAL_JUMP)  ; LAB_0053fc16
    MOV EAX,dword ptr [EBP + 0x14]      ; 005400ea
        ;   Label: LAB_005400ea
    MOV EAX,dword ptr [EAX]             ; 005400ed
    MOV ESI,0x1                         ; 005400ef
    MOV dword ptr [ESP + 0x2e0],EAX     ; 005400f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005400fb
    XOR EBX,EBX                         ; 005400fe
    MOV dword ptr [EBP + 0x1c],ESI      ; 00540100
    MOV dword ptr [EAX + 0x15aebc],0xffffffff ; 00540103
    MOV dword ptr [0x02125514],EBX      ; 0054010d | DAT_02125514
    MOV dword ptr [EAX + 0x15aec0],EBX  ; 00540113
    JMP 0x0053fdd1                      ; 00540119
        ;   XREF to: 0053fdd1 (UNCONDITIONAL_JUMP)  ; LAB_0053fdd1
    ADD EAX,dword ptr [ESP + 0x378]     ; 0054011e
        ;   Label: LAB_0054011e
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00540125
    PUSH EBX                            ; 0054012b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054012c
    CALL dword ptr [EAX + 0x48]         ; 00540132
    ADD ESP,0x4                         ; 00540135
    TEST EAX,EAX                        ; 00540138
    JZ 0x0054020b                       ; 0054013a
        ;   XREF to: 0054020b (CONDITIONAL_JUMP)  ; LAB_0054020b
    CMP EBX,dword ptr [EBP + 0x18]      ; 00540140
    JZ 0x0054020b                       ; 00540143
        ;   XREF to: 0054020b (CONDITIONAL_JUMP)  ; LAB_0054020b
    LEA EAX,[EBX + 0x20]                ; 00540149
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 0054014c
    FLD float ptr [EAX]                 ; 00540153
    FSUB float ptr [EDX]                ; 00540155
    FMUL ST0                            ; 00540157
    FLD float ptr [EAX + 0x4]           ; 00540159
    FSUB float ptr [EDX + 0x4]          ; 0054015c
    FMUL ST0                            ; 0054015f
    FLD float ptr [EAX + 0x8]           ; 00540161
    FXCH                                ; 00540164
    FADDP ST2,ST0                       ; 00540166
    FSUB float ptr [EDX + 0x8]          ; 00540168
    FMUL ST0                            ; 0054016b
    FADDP                               ; 0054016d
    FCOMP float ptr [ESP + 0x2f0]       ; 0054016f
    FNSTSW AX                           ; 00540176
    SAHF                                ; 00540178
    JA 0x0054020b                       ; 00540179
        ;   XREF to: 0054020b (CONDITIONAL_JUMP)  ; LAB_0054020b
    MOV EAX,[0x02701910]                ; 0054017f | DAT_02701910
    MOV dword ptr [EAX*0x4 + 0x2701914],EBX ; 00540184 | DAT_02701914
    PUSH EBX                            ; 0054018b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054018c
    LEA ESI,[ESP + 0x164]               ; 00540192
    CALL dword ptr [EAX + 0x1c]         ; 00540199
    IMUL EDX,dword ptr [0x02701910],0x18 ; 0054019c | DAT_02701910
    LEA EDI,[ESP + 0x17c]               ; 005401a3
    MOV ECX,0x6                         ; 005401aa
    LEA ESI,[ESP + 0x164]               ; 005401af
    ADD ESP,0x4                         ; 005401b6
    MOVSD.REP ES:EDI,ESI                ; 005401b9
    ADD EDX,0x2703854                   ; 005401bb
    LEA EBX,[ESP + 0x178]               ; 005401c1
    MOV ECX,EDX                         ; 005401c8
    CMP EDX,EBX                         ; 005401ca
    JZ 0x005401eb                       ; 005401cc
        ;   XREF to: 005401eb (CONDITIONAL_JUMP)  ; LAB_005401eb
    MOV EAX,dword ptr [ESP + 0x178]     ; 005401ce
    MOV dword ptr [EDX],EAX             ; 005401d5
    MOV EAX,dword ptr [ESP + 0x17c]     ; 005401d7
    MOV dword ptr [EDX + 0x4],EAX       ; 005401de
    MOV EAX,dword ptr [ESP + 0x180]     ; 005401e1
    MOV dword ptr [EDX + 0x8],EAX       ; 005401e8
    LEA EDX,[EBX + 0xc]                 ; 005401eb
        ;   Label: LAB_005401eb
    LEA EAX,[ECX + 0xc]                 ; 005401ee
    CMP EAX,EDX                         ; 005401f1
    JZ 0x00540205                       ; 005401f3
        ;   XREF to: 00540205 (CONDITIONAL_JUMP)  ; LAB_00540205
    MOV ECX,dword ptr [EDX]             ; 005401f5
    MOV dword ptr [EAX],ECX             ; 005401f7
    MOV ECX,dword ptr [EDX + 0x4]       ; 005401f9
    MOV dword ptr [EAX + 0x4],ECX       ; 005401fc
    MOV ECX,dword ptr [EDX + 0x8]       ; 005401ff
    MOV dword ptr [EAX + 0x8],ECX       ; 00540202
    INC dword ptr [0x02701910]          ; 00540205 | DAT_02701910
        ;   Label: LAB_00540205
    MOV EBX,dword ptr [ESP + 0x388]     ; 0054020b
        ;   Label: LAB_0054020b
    MOV ECX,dword ptr [ESP + 0x378]     ; 00540212
    INC EBX                             ; 00540219
    ADD ECX,0x4                         ; 0054021a
    MOV dword ptr [ESP + 0x388],EBX     ; 0054021d
    MOV dword ptr [ESP + 0x378],ECX     ; 00540224
    JMP 0x0053fe36                      ; 0054022b
        ;   XREF to: 0053fe36 (UNCONDITIONAL_JUMP)  ; LAB_0053fe36
    IMUL EBX,EAX,0x1a4                  ; 00540230
        ;   Label: LAB_00540230
    MOV EAX,EDX                         ; 00540236
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 00540238
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x1a0] ; 0054023f
    CMP EDX,ECX                         ; 00540246
    JNZ 0x00540b33                      ; 00540248
        ;   XREF to: 00540b33 (CONDITIONAL_JUMP)  ; LAB_00540b33
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054024e
    MOV ESI,dword ptr [ESP + 0x300]     ; 00540251
    MOV EDI,0x603eec                    ; 00540258 | DAT_00603eec
    MOV dword ptr [ESP + 0x304],EAX     ; 0054025d
    ADD EBX,ESI                         ; 00540264
    MOV EAX,[0x02125514]                ; 00540266 | DAT_02125514
    MOV dword ptr [ESP + 0x308],EDI     ; 0054026b | DAT_00603eec
    MOV dword ptr [ESP + 0x30c],EAX     ; 00540272
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00540279
    MOV dword ptr [ESP + 0x310],EBX     ; 0054027f
    TEST EAX,EAX                        ; 00540286
    JZ 0x005402bf                       ; 00540288
        ;   XREF to: 005402bf (CONDITIONAL_JUMP)  ; LAB_005402bf
    LEA ESI,[EBX + 0x100]               ; 0054028a
    MOV EAX,dword ptr [ESP + 0x370]     ; 00540290
    FLD float ptr [ESI]                 ; 00540297
    FSUB float ptr [EAX]                ; 00540299
    FMUL ST0                            ; 0054029b
    FLD float ptr [ESI + 0x4]           ; 0054029d
    FSUB float ptr [EAX + 0x4]          ; 005402a0
    FMUL ST0                            ; 005402a3
    FLD float ptr [ESI + 0x8]           ; 005402a5
    FXCH                                ; 005402a8
    FADDP ST2,ST0                       ; 005402aa
    FSUB float ptr [EAX + 0x8]          ; 005402ac
    FMUL ST0                            ; 005402af
    FADDP                               ; 005402b1
    FCOMP float ptr [ESP + 0x32c]       ; 005402b3
    FNSTSW AX                           ; 005402ba
    SAHF                                ; 005402bc
    JBE 0x00540308                      ; 005402bd
        ;   XREF to: 00540308 (CONDITIONAL_JUMP)  ; LAB_00540308
    XOR EDX,ECX                         ; 005402bf
        ;   Label: LAB_005402bf
    MOV dword ptr [ESP + 0x314],EDX     ; 005402c1
    MOV EAX,dword ptr [ESP + 0x314]     ; 005402c8
        ;   Label: LAB_005402c8
    MOV dword ptr [ESP],EAX             ; 005402cf
    CMP dword ptr [EBP + 0x1c],0x0      ; 005402d2
        ;   Label: LAB_005402d2
    JZ 0x00540b3f                       ; 005402d6
        ;   XREF to: 00540b3f (CONDITIONAL_JUMP)  ; LAB_00540b3f
    MOV EDX,dword ptr [ESP]             ; 005402dc
        ;   Label: LAB_005402dc
    MOV EAX,[0x02125514]                ; 005402df | DAT_02125514
    MOV EDI,dword ptr [ESP + 0x2e0]     ; 005402e4
    LEA ESI,[EAX + 0x1]                 ; 005402eb
    DEC EDI                             ; 005402ee
    MOV dword ptr [EAX*0x4 + 0x2701528],EDX ; 005402ef | DAT_02701528
    MOV dword ptr [0x02125514],ESI      ; 005402f6 | DAT_02125514
    MOV dword ptr [ESP + 0x2e0],EDI     ; 005402fc
    JMP 0x0053fe8a                      ; 00540303
        ;   XREF to: 0053fe8a (UNCONDITIONAL_JUMP)  ; LAB_0053fe8a
    MOV ECX,dword ptr [ESP + 0x370]     ; 00540308
        ;   Label: LAB_00540308
    PUSH dword ptr [ESP + 0x340]        ; 0054030f
    PUSH ECX                            ; 00540316
    PUSH EBX                            ; 00540317
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0 ; 00540318
        ;   XREF to: 005420b0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
    ADD ESP,0xc                         ; 0054031d
    TEST EAX,EAX                        ; 00540320
    JZ 0x005408b9                       ; 00540322
        ;   XREF to: 005408b9 (CONDITIONAL_JUMP)  ; LAB_005408b9
    PUSH ESI                            ; 00540328
    MOV ESI,dword ptr [0x005f2afc]      ; 00540329 | DAT_005f2afc
    PUSH ESI                            ; 0054032f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 00540330
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00540335
    MOV EDI,dword ptr [0x005f2afc]      ; 00540338 | DAT_005f2afc
    PUSH dword ptr [EBX + 0x144]        ; 0054033e
    PUSH EDI                            ; 00540344 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 00540345
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0054034a
    LEA EAX,[EBX + 0x10c]               ; 0054034d
    PUSH EAX                            ; 00540353
    MOV EAX,[0x005f2afc]                ; 00540354 | DAT_005f2afc
    PUSH EAX                            ; 00540359 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 0054035a
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0054035f
    MOV ESI,dword ptr [ESP + 0x370]     ; 00540362
    MOV EDX,0x800000ff                  ; 00540369
    PUSH ESI                            ; 0054036e
    MOV EDI,dword ptr [0x005f2afc]      ; 0054036f | DAT_005f2afc
    XOR ECX,ECX                         ; 00540375
    PUSH EDI                            ; 00540377 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x320],EDX     ; 00540378
    MOV dword ptr [ESP + 0x324],ECX     ; 0054037f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00540386
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0054038b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054038e
    MOV EAX,dword ptr [EAX + 0x30]      ; 00540391
    MOV dword ptr [ESP + 0x274],EAX     ; 00540394
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054039b
    MOV EAX,dword ptr [EAX + 0x38]      ; 0054039e
    MOV dword ptr [ESP + 0x27c],EAX     ; 005403a1
    MOV EAX,dword ptr [EBX + 0x110]     ; 005403a8
    PUSH 0x0                            ; 005403ae
    MOV dword ptr [ESP + 0x27c],EAX     ; 005403b0
    LEA EAX,[ESP + 0x278]               ; 005403b7
    PUSH EAX                            ; 005403be
    MOV EAX,[0x005f2afc]                ; 005403bf | DAT_005f2afc
    PUSH EAX                            ; 005403c4 | DAT_01bdd7e4
    XOR ESI,ESI                         ; 005403c5
    LEA EDI,[ESP + 0xd8]                ; 005403c7
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 005403ce
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005403d3
    MOV EAX,[0x005f2afc]                ; 005403d6 | DAT_005f2afc
        ;   Label: LAB_005403d6
    MOV EAX,dword ptr [EAX]             ; 005403db | DAT_01bdd7e4
    PUSH EDI                            ; 005403dd
    ADD EAX,ESI                         ; 005403de
    PUSH EAX                            ; 005403e0
    CALL engine_special.cpp_FUN_005632a3 ; 005403e1
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 005403e6 | DAT_005f2afc
    ADD ESI,0x30                        ; 005403eb
    ADD ESP,0x8                         ; 005403ee
    MOV EAX,dword ptr [EAX]             ; 005403f1 | DAT_01bdd7e4
    ADD EDI,0xc                         ; 005403f3
    MOV ECX,dword ptr [ESP + 0x318]     ; 005403f6
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 005403fd
    MOV EBX,dword ptr [ESP + 0x31c]     ; 00540401
    AND ECX,EDX                         ; 00540408
    OR EBX,EDX                          ; 0054040a
    MOV dword ptr [ESP + 0x318],ECX     ; 0054040c
    MOV dword ptr [ESP + 0x31c],EBX     ; 00540413
    CMP ESI,0x180                       ; 0054041a
    JNZ 0x005403d6                      ; 00540420
        ;   XREF to: 005403d6 (CONDITIONAL_JUMP)  ; LAB_005403d6
    TEST byte ptr [ESP + 0x31b],0x80    ; 00540422
    JNZ 0x005408c5                      ; 0054042a
        ;   XREF to: 005408c5 (CONDITIONAL_JUMP)  ; LAB_005408c5
    MOV EAX,dword ptr [ESP + 0x308]     ; 00540430
        ;   Label: LAB_00540430
    XOR ESI,ESI                         ; 00540437
    XOR EDX,EDX                         ; 00540439
    LEA ECX,[EAX + 0x1b0]               ; 0054043b | DAT_0060409c
    MOV dword ptr [ESP + 0x320],ESI     ; 00540441
    MOV EBX,dword ptr [ESP + 0x320]     ; 00540448
        ;   Label: LAB_00540448
    MOV dword ptr [ESP + EDX*0x1 + 0x1c0],EAX ; 0054044f | DAT_00603eec | DAT_00603f34
    ADD EDX,0x4                         ; 00540456
    INC EBX                             ; 00540459
    ADD EAX,0x48                        ; 0054045a
    MOV dword ptr [ESP + 0x320],EBX     ; 0054045d
    CMP EAX,ECX                         ; 00540464
    JNZ 0x00540448                      ; 00540466
        ;   XREF to: 00540448 (CONDITIONAL_JUMP)  ; LAB_00540448
    MOV ESI,dword ptr [ESP + 0x304]     ; 00540468
    PUSH ESI                            ; 0054046f
    XOR EDI,EDI                         ; 00540470
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00540472
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00540477
    MOV EAX,[0x005f2afc]                ; 0054047a | DAT_005f2afc
        ;   Label: LAB_0054047a
    MOV ESI,dword ptr [EAX]             ; 0054047f | DAT_01bdd7e4
    ADD ESI,EDI                         ; 00540481
    MOV EAX,dword ptr [ESI + 0x8]       ; 00540483
    TEST EAX,EAX                        ; 00540486
    JLE 0x005404b7                      ; 00540488
        ;   XREF to: 005404b7 (CONDITIONAL_JUMP)  ; LAB_005404b7
    LEA ECX,[EAX + 0x80]                ; 0054048a
    MOV EBX,EAX                         ; 00540490
    MOV EDX,ECX                         ; 00540492
    MOV EAX,dword ptr [ESI]             ; 00540494
    IMUL EDX                            ; 00540496
    IDIV EBX                            ; 00540498
    MOV dword ptr [ESI],EAX             ; 0054049a
    MOV EDX,ECX                         ; 0054049c
    MOV EBX,dword ptr [ESI + 0x8]       ; 0054049e
    MOV EAX,dword ptr [ESI + 0x4]       ; 005404a1
    IMUL EDX                            ; 005404a4
    IDIV EBX                            ; 005404a6
    MOV dword ptr [ESI + 0x4],EAX       ; 005404a8
    PUSH ESI                            ; 005404ab
    MOV dword ptr [ESI + 0x8],ECX       ; 005404ac
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e5590 ; 005404af
        ;   XREF to: 004e5590 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004e5590(SProjectedVertex * point)
    ADD ESP,0x4                         ; 005404b4
    ADD EDI,0x30                        ; 005404b7
        ;   Label: LAB_005404b7
    CMP EDI,0x180                       ; 005404ba
    JNZ 0x0054047a                      ; 005404c0
        ;   XREF to: 0054047a (CONDITIONAL_JUMP)  ; LAB_0054047a
    MOV EDX,0x3f800000                  ; 005404c2
    XOR EAX,EAX                         ; 005404c7
    MOV dword ptr [ESP + 0x8],EDX       ; 005404c9
    MOV EDX,dword ptr [0x005f2afc]      ; 005404cd | DAT_005f2afc
        ;   Label: LAB_005404cd
    MOV EDX,dword ptr [EDX]             ; 005404d3 | DAT_01bdd7e4
    ADD EDX,EAX                         ; 005404d5
    TEST byte ptr [EDX + 0x13],0x80     ; 005404d7
    JZ 0x005404f5                       ; 005404db
        ;   XREF to: 005404f5 (CONDITIONAL_JUMP)  ; LAB_005404f5
    CMP dword ptr [EDX + 0x8],0x0       ; 005404dd
    JLE 0x005408f1                      ; 005404e1
        ;   XREF to: 005408f1 (CONDITIONAL_JUMP)  ; LAB_005408f1
    FLD float ptr [ESP + 0x8]           ; 005404e7
    FMUL double ptr [0x005d0c9e]        ; 005404eb | DAT_005d0c9e
    FSTP float ptr [ESP + 0x8]          ; 005404f1
        ;   Label: LAB_005404f1
    ADD EAX,0x30                        ; 005404f5
        ;   Label: LAB_005404f5
    CMP EAX,0x180                       ; 005404f8
    JNZ 0x005404cd                      ; 005404fd
        ;   XREF to: 005404cd (CONDITIONAL_JUMP)  ; LAB_005404cd
    XOR EBX,EBX                         ; 005404ff
    MOV EDI,dword ptr [0x02701910]      ; 00540501 | DAT_02701910
    MOV dword ptr [ESP + 0x38c],EBX     ; 00540507
    MOV dword ptr [ESP + 0x324],EBX     ; 0054050e
    TEST EDI,EDI                        ; 00540515
    JLE 0x00540725                      ; 00540517
        ;   XREF to: 00540725 (CONDITIONAL_JUMP)  ; LAB_00540725
    IMUL EAX,dword ptr [ESP + 0x30c],0x3000 ; 0054051d
    MOV EDX,0x212551c                   ; 00540528
    MOV ESI,0x2703854                   ; 0054052d
    MOV dword ptr [ESP + 0x380],EBX     ; 00540532
    ADD EDX,EAX                         ; 00540539
    MOV EAX,dword ptr [ESP + 0x310]     ; 0054053b
    MOV dword ptr [ESP + 0x384],ESI     ; 00540542
    ADD EAX,0x100                       ; 00540549
    MOV dword ptr [ESP + 0x36c],EDX     ; 0054054e
    MOV dword ptr [ESP + 0x354],EAX     ; 00540555
    MOV EAX,dword ptr [ESP + 0x380]     ; 0054055c
        ;   Label: LAB_0054055c
    MOV EAX,dword ptr [EAX + 0x2701914] ; 00540563
    MOV EDX,dword ptr [ESP + 0x354]     ; 00540569
    FLD float ptr [EAX + 0x20]          ; 00540570
    FSUB float ptr [EDX]                ; 00540573
    FMUL ST0                            ; 00540575
    FLD float ptr [EAX + 0x24]          ; 00540577
    FSUB float ptr [EDX + 0x4]          ; 0054057a
    FMUL ST0                            ; 0054057d
    FLD float ptr [EAX + 0x28]          ; 0054057f
    FXCH                                ; 00540582
    FADDP ST2,ST0                       ; 00540584
    FSUB float ptr [EDX + 0x8]          ; 00540586
    FMUL ST0                            ; 00540589
    FADDP                               ; 0054058b
    MOV dword ptr [ESP + 0x344],EAX     ; 0054058d
    FCOMP float ptr [ESP + 0x358]       ; 00540594
    FNSTSW AX                           ; 0054059b
    SAHF                                ; 0054059d
    JA 0x005406e6                       ; 0054059e
        ;   XREF to: 005406e6 (CONDITIONAL_JUMP)  ; LAB_005406e6
    MOV EDI,dword ptr [ESP + 0x344]     ; 005405a4
    PUSH EDI                            ; 005405ab
    MOV EBX,0x180                       ; 005405ac
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005405b1
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EAX,0x800000ff                  ; 005405b6
    ADD ESP,0x4                         ; 005405bb
    XOR EDX,EDX                         ; 005405be
    MOV dword ptr [ESP + 0x348],EAX     ; 005405c0
    MOV dword ptr [ESP + 0x34c],EDX     ; 005405c7
    MOV dword ptr [ESP + 0x350],EDX     ; 005405ce
    MOV EAX,dword ptr [ESP + 0x384]     ; 005405d5
    MOV dword ptr [ESP + 0x37c],EBX     ; 005405dc
    MOV dword ptr [ESP + 0x368],EAX     ; 005405e3
    MOV EBX,dword ptr [ESP + 0x350]     ; 005405ea
        ;   Label: LAB_005405ea
    PUSH EBX                            ; 005405f1
    MOV ESI,dword ptr [ESP + 0x36c]     ; 005405f2
    LEA EDI,[ESP + 0x224]               ; 005405f9
    PUSH ESI                            ; 00540600
    LEA ESI,[ESP + 0x234]               ; 00540601
    LEA EBX,[ESP + 0x288]               ; 00540608
    CALL core_box.cpp_FUN_0041d8b0      ; 0054060f
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x234]               ; 00540614
    LEA EAX,[ESP + 0x228]               ; 0054061b
    ADD ESP,0x8                         ; 00540622
    MOV EDX,dword ptr [0x005f2afc]      ; 00540625 | DAT_005f2afc
    MOVSD ES:EDI,ESI                    ; 0054062b
    MOVSD ES:EDI,ESI                    ; 0054062c
    MOVSD ES:EDI,ESI                    ; 0054062d
    FLD float ptr [EAX]                 ; 0054062e
    FMUL float ptr [0x005e3ce0]         ; 00540630 | DAT_005e3ce0
    FISTP dword ptr [EBX]               ; 00540636
    FLD float ptr [EAX + 0x4]           ; 00540638
    FMUL float ptr [0x005e3ce0]         ; 0054063b | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x4]         ; 00540641
    FLD float ptr [EAX + 0x8]           ; 00540644
    FMUL float ptr [0x005e3ce0]         ; 00540647 | DAT_005e3ce0
    FISTP dword ptr [EBX + 0x8]         ; 0054064d
    LEA EAX,[ESP + 0x280]               ; 00540650
    MOV EDI,dword ptr [ESP + 0x37c]     ; 00540657
    PUSH EAX                            ; 0054065e
    MOV EAX,dword ptr [EDX]             ; 0054065f | DAT_01bdd7e4
    ADD EAX,EDI                         ; 00540661
    PUSH EAX                            ; 00540663
    CALL engine_special.cpp_FUN_005632a3 ; 00540664
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 00540669 | DAT_005f2afc
    ADD ESP,0x8                         ; 0054066e
    MOV EAX,dword ptr [EAX]             ; 00540671 | DAT_01bdd7e4
    MOV ECX,dword ptr [ESP + 0x348]     ; 00540673
    ADD EAX,EDI                         ; 0054067a
    MOV EBX,dword ptr [ESP + 0x34c]     ; 0054067c
    LEA ESI,[EDI + 0x30]                ; 00540683
    MOV EDX,dword ptr [EAX + 0x10]      ; 00540686
    MOV EDI,dword ptr [ESP + 0x350]     ; 00540689
    MOV dword ptr [ESP + 0x37c],ESI     ; 00540690
    AND ECX,EDX                         ; 00540697
    OR EBX,EDX                          ; 00540699
    MOV dword ptr [ESP + 0x348],ECX     ; 0054069b
    INC EDI                             ; 005406a2
    MOV dword ptr [ESP + 0x34c],EBX     ; 005406a3
    MOV dword ptr [ESP + 0x350],EDI     ; 005406aa
    CMP EDI,0x8                         ; 005406b1
    JL 0x005405ea                       ; 005406b4
        ;   XREF to: 005405ea (CONDITIONAL_JUMP)  ; LAB_005405ea
    MOV EDX,dword ptr [ESP + 0x344]     ; 005406ba
    PUSH EDX                            ; 005406c1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005406c2
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005406c7
    TEST byte ptr [ESP + 0x34b],0x80    ; 005406ca
    JZ 0x00540900                       ; 005406d2
        ;   XREF to: 00540900 (CONDITIONAL_JUMP)  ; LAB_00540900
    TEST byte ptr [ESP + 0x348],0xff    ; 005406d8
    JZ 0x00540900                       ; 005406e0
        ;   XREF to: 00540900 (CONDITIONAL_JUMP)  ; LAB_00540900
    MOV EAX,dword ptr [ESP + 0x380]     ; 005406e6
        ;   Label: LAB_005406e6
    MOV EDX,dword ptr [ESP + 0x384]     ; 005406ed
    MOV ECX,dword ptr [ESP + 0x38c]     ; 005406f4
    MOV EBX,dword ptr [0x02701910]      ; 005406fb | DAT_02701910
    ADD EAX,0x4                         ; 00540701
    ADD EDX,0x18                        ; 00540704
    INC ECX                             ; 00540707
    MOV dword ptr [ESP + 0x380],EAX     ; 00540708
    MOV dword ptr [ESP + 0x384],EDX     ; 0054070f
    MOV dword ptr [ESP + 0x38c],ECX     ; 00540716
    CMP ECX,EBX                         ; 0054071d
    JL 0x0054055c                       ; 0054071f
        ;   XREF to: 0054055c (CONDITIONAL_JUMP)  ; LAB_0054055c
    PUSH 0x0                            ; 00540725
        ;   Label: LAB_00540725
    MOV ESI,dword ptr [0x005f2afc]      ; 00540727 | DAT_005f2afc
    PUSH ESI                            ; 0054072d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0054072e
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00540733
    CMP dword ptr [ESP + 0x324],0x0     ; 00540736
    JNZ 0x0054076a                      ; 0054073e
        ;   XREF to: 0054076a (CONDITIONAL_JUMP)  ; LAB_0054076a
    IMUL EAX,dword ptr [ESP + 0x30c],0x3000 ; 00540740
    MOV EDX,0x212551c                   ; 0054074b
    ADD EDX,EAX                         ; 00540750
    XOR EAX,EAX                         ; 00540752
    MOV dword ptr [EAX + 0x1c60dac],EDX ; 00540754 | DAT_01c60dac
        ;   Label: LAB_00540754
    ADD EAX,0x4                         ; 0054075a
    ADD EDX,0x100                       ; 0054075d
    CMP EAX,0xc0                        ; 00540763
    JNZ 0x00540754                      ; 00540768
        ;   XREF to: 00540754 (CONDITIONAL_JUMP)  ; LAB_00540754
    PUSH 0x1                            ; 0054076a
        ;   Label: LAB_0054076a
    MOV ESI,dword ptr [0x005f2afc]      ; 0054076c | DAT_005f2afc
    PUSH ESI                            ; 00540772 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 00540773
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00540778
    TEST byte ptr [ESP + 0x31f],0x80    ; 0054077b
    SETNZ AL                            ; 00540783
    AND EAX,0xff                        ; 00540786
    PUSH EAX                            ; 0054078b
    MOV EDI,dword ptr [0x005f2afc]      ; 0054078c | DAT_005f2afc
    PUSH EDI                            ; 00540792 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00540793
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00540798
    XOR EAX,EAX                         ; 0054079b
    MOV EDX,dword ptr [ESP + 0x320]     ; 0054079d
    MOV dword ptr [ESP + 0x328],EAX     ; 005407a4
    TEST EDX,EDX                        ; 005407ab
    JLE 0x005407e6                      ; 005407ad
        ;   XREF to: 005407e6 (CONDITIONAL_JUMP)  ; LAB_005407e6
    LEA ESI,[EDX*0x4 + 0x0]             ; 005407af
    XOR EBX,EBX                         ; 005407b6
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x1c0] ; 005407b8
        ;   Label: LAB_005407b8
    PUSH ECX                            ; 005407bf | DAT_00603eec | DAT_00603f34
    MOV EDI,dword ptr [0x005f2afc]      ; 005407c0 | DAT_005f2afc
    PUSH EDI                            ; 005407c6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470 ; 005407c7
        ;   XREF to: 0046b470 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005407cc
    MOV EDX,dword ptr [ESP + 0x328]     ; 005407cf
    ADD EDX,EAX                         ; 005407d6
    ADD EBX,0x4                         ; 005407d8
    MOV dword ptr [ESP + 0x328],EDX     ; 005407db
    CMP EBX,ESI                         ; 005407e2
    JL 0x005407b8                       ; 005407e4
        ;   XREF to: 005407b8 (CONDITIONAL_JUMP)  ; LAB_005407b8
    MOV EAX,[0x005fe9dc]                ; 005407e6 | g_CGamePtr
        ;   Label: LAB_005407e6
    CMP dword ptr [EAX + 0x20c],0x0     ; 005407eb | g_CGameInstance.debug_toggle_flag
    JZ 0x00540872                       ; 005407f2
        ;   XREF to: 00540872 (CONDITIONAL_JUMP)  ; LAB_00540872
    IMUL EDX,dword ptr [ESP + 0x30c],0x3000 ; 005407f8
    ADD EDX,0x241351c                   ; 00540803
    XOR EBX,EBX                         ; 00540809
    MOV ECX,0x100                       ; 0054080b
        ;   Label: LAB_0054080b
    MOV EDI,EDX                         ; 00540810
    MOV ESI,dword ptr [EBX + 0x1c60dac] ; 00540812 | DAT_01c60dac
    ADD EBX,0x4                         ; 00540818
    PUSH EDI                            ; 0054081b
    MOV EAX,ECX                         ; 0054081c
    SHR ECX,0x2                         ; 0054081e
    MOVSD.REP ES:EDI,ESI                ; 00540821
    MOV CL,AL                           ; 00540823
    AND CL,0x3                          ; 00540825
    MOVSB.REP ES:EDI,ESI                ; 00540828
    POP EDI                             ; 0054082a
    MOV dword ptr [EBX + 0x1c60da8],EDX ; 0054082b | DAT_01c60dac
    ADD EDX,0x100                       ; 00540831
    CMP EBX,0xc0                        ; 00540837
    JNZ 0x0054080b                      ; 0054083d
        ;   XREF to: 0054080b (CONDITIONAL_JUMP)  ; LAB_0054080b
    MOV ESI,dword ptr [ESP + 0x320]     ; 0054083f
    XOR EBX,EBX                         ; 00540846
    TEST ESI,ESI                        ; 00540848
    JLE 0x00540872                      ; 0054084a
        ;   XREF to: 00540872 (CONDITIONAL_JUMP)  ; LAB_00540872
    MOV ESI,dword ptr [ESP + 0x308]     ; 0054084c
    PUSH ESI                            ; 00540853 | DAT_00603eec | DAT_00603f34
        ;   Label: LAB_00540853
    MOV EDI,dword ptr [0x005f2afc]      ; 00540854 | DAT_005f2afc
    PUSH EDI                            ; 0054085a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0054085b
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00540860
    INC EBX                             ; 00540863
    MOV EAX,dword ptr [ESP + 0x320]     ; 00540864
    ADD ESI,0x48                        ; 0054086b
    CMP EBX,EAX                         ; 0054086e
    JL 0x00540853                       ; 00540870
        ;   XREF to: 00540853 (CONDITIONAL_JUMP)  ; LAB_00540853
    PUSH 0x1                            ; 00540872
        ;   Label: LAB_00540872
    MOV EDX,dword ptr [0x005f2afc]      ; 00540874 | DAT_005f2afc
    PUSH EDX                            ; 0054087a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0054087b
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00540880
    PUSH 0x0                            ; 00540883
    MOV ECX,dword ptr [0x005f2afc]      ; 00540885 | DAT_005f2afc
    PUSH ECX                            ; 0054088b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0054088c
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00540891
    MOV EAX,dword ptr [ESP + 0x328]     ; 00540894
    MOV dword ptr [ESP + 0x394],EAX     ; 0054089b
    FILD dword ptr [ESP + 0x394]        ; 005408a2
    FMUL float ptr [ESP + 0x8]          ; 005408a9
    FSTP float ptr [ESP + 0x314]        ; 005408ad
    JMP 0x005402c8                      ; 005408b4
        ;   XREF to: 005402c8 (UNCONDITIONAL_JUMP)  ; LAB_005402c8
    MOV dword ptr [ESP + 0x314],EAX     ; 005408b9
        ;   Label: LAB_005408b9
    JMP 0x005402c8                      ; 005408c0
        ;   XREF to: 005402c8 (UNCONDITIONAL_JUMP)  ; LAB_005402c8
    TEST byte ptr [ESP + 0x318],0xff    ; 005408c5
        ;   Label: LAB_005408c5
    JZ 0x00540430                       ; 005408cd
        ;   XREF to: 00540430 (CONDITIONAL_JUMP)  ; LAB_00540430
    MOV EDI,dword ptr [ESP + 0x304]     ; 005408d3
    PUSH EDI                            ; 005408da
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005408db
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005408e0
    XOR EAX,EAX                         ; 005408e3
    MOV dword ptr [ESP + 0x314],EAX     ; 005408e5
    JMP 0x005402c8                      ; 005408ec
        ;   XREF to: 005402c8 (UNCONDITIONAL_JUMP)  ; LAB_005402c8
    FLD float ptr [ESP + 0x8]           ; 005408f1
        ;   Label: LAB_005408f1
    FMUL double ptr [0x005d0ca6]        ; 005408f5 | DAT_005d0ca6
    JMP 0x005404f1                      ; 005408fb
        ;   XREF to: 005404f1 (UNCONDITIONAL_JUMP)  ; LAB_005404f1
    CMP dword ptr [ESP + 0x324],0x0     ; 00540900
        ;   Label: LAB_00540900
    JNZ 0x00540962                      ; 00540908
        ;   XREF to: 00540962 (CONDITIONAL_JUMP)  ; LAB_00540962
    MOV ECX,0x3000                      ; 0054090a
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0054090f
    MOV EDI,0x2122514                   ; 00540916
    MOV EBX,0x1                         ; 0054091b
    PUSH EDI                            ; 00540920 | DAT_02122514
    MOV EAX,ECX                         ; 00540921
    SHR ECX,0x2                         ; 00540923
    MOVSD.REP ES:EDI,ESI                ; 00540926 | DAT_02122514 | DAT_02122518
    MOV CL,AL                           ; 00540928
    AND CL,0x3                          ; 0054092a
    MOVSB.REP ES:EDI,ESI                ; 0054092d | DAT_02122518 | DAT_02122519
    POP EDI                             ; 0054092f
    MOV EDX,EDI                         ; 00540930
    MOV dword ptr [ESP + 0x324],EBX     ; 00540932
    XOR EAX,EAX                         ; 00540939
    MOV dword ptr [EAX + 0x1c60dac],EDX ; 0054093b | DAT_01c60dac | DAT_02122514
        ;   Label: LAB_0054093b
    ADD EAX,0x4                         ; 00540941
    ADD EDX,0x100                       ; 00540944
    CMP EAX,0xc0                        ; 0054094a
    JNZ 0x0054093b                      ; 0054094f
        ;   XREF to: 0054093b (CONDITIONAL_JUMP)  ; LAB_0054093b
    PUSH 0x1                            ; 00540951
    MOV ESI,dword ptr [0x005f2afc]      ; 00540953 | DAT_005f2afc
    PUSH ESI                            ; 00540959 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0054095a
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0054095f
    MOV EDI,0x4                         ; 00540962
        ;   Label: LAB_00540962
    MOV AH,byte ptr [ESP + 0x34f]       ; 00540967
    MOV dword ptr [ESP + 0x13c],EDI     ; 0054096e
    TEST AH,0x80                        ; 00540975
    SETNZ AL                            ; 00540978
    AND EAX,0xff                        ; 0054097b
    PUSH EAX                            ; 00540980
    MOV EAX,[0x005f2afc]                ; 00540981 | DAT_005f2afc
    PUSH EAX                            ; 00540986 | DAT_01bdd7e4
    MOV EBX,0xe                         ; 00540987
    MOV ESI,0xa                         ; 0054098c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00540991
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,0x8                         ; 00540996
    MOV ECX,0xc                         ; 0054099b
    LEA EAX,[ESP + 0x140]               ; 005409a0
    ADD ESP,0x8                         ; 005409a7
    MOV EDI,dword ptr [0x005f2afc]      ; 005409aa | DAT_005f2afc
    MOV dword ptr [ESP + 0x150],EDX     ; 005409b0
    PUSH EAX                            ; 005409b7
    MOV dword ptr [ESP + 0x158],ECX     ; 005409b8
    MOV dword ptr [ESP + 0x15c],EBX     ; 005409bf
    PUSH EDI                            ; 005409c6 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x164],ESI     ; 005409c7
    MOV EBX,0xd                         ; 005409ce
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 005409d3
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 005409d8
    MOV EDX,0xb                         ; 005409dd
    ADD ESP,0x8                         ; 005409e2
    MOV ECX,0xf                         ; 005409e5
    MOV dword ptr [ESP + 0x150],EAX     ; 005409ea
    LEA EAX,[ESP + 0x138]               ; 005409f1
    MOV EDI,0x8                         ; 005409f8
    PUSH EAX                            ; 005409fd
    MOV ESI,dword ptr [0x005f2afc]      ; 005409fe | DAT_005f2afc
    MOV dword ptr [ESP + 0x158],EDX     ; 00540a04
    PUSH ESI                            ; 00540a0b | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x160],ECX     ; 00540a0c
    MOV dword ptr [ESP + 0x164],EBX     ; 00540a13
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 00540a1a
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 00540a1f
    MOV ECX,0xc                         ; 00540a24
    ADD ESP,0x8                         ; 00540a29
    MOV ESI,0xa                         ; 00540a2c
    MOV dword ptr [ESP + 0x154],EAX     ; 00540a31
    LEA EAX,[ESP + 0x138]               ; 00540a38
    MOV dword ptr [ESP + 0x158],EBX     ; 00540a3f
    PUSH EAX                            ; 00540a46
    MOV EBX,dword ptr [0x005f2afc]      ; 00540a47 | DAT_005f2afc
    MOV dword ptr [ESP + 0x154],EDI     ; 00540a4d
    PUSH EBX                            ; 00540a54 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x164],ECX     ; 00540a55
    MOV EDI,0xe                         ; 00540a5c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 00540a61
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xf                         ; 00540a66
    MOV EDX,0xb                         ; 00540a6b
    ADD ESP,0x8                         ; 00540a70
    MOV EBX,0x8                         ; 00540a73
    MOV dword ptr [ESP + 0x158],EAX     ; 00540a78
    LEA EAX,[ESP + 0x138]               ; 00540a7f
    MOV ECX,dword ptr [0x005f2afc]      ; 00540a86 | DAT_005f2afc
    PUSH EAX                            ; 00540a8c
    MOV dword ptr [ESP + 0x154],ESI     ; 00540a8d
    MOV dword ptr [ESP + 0x158],EDI     ; 00540a94
    PUSH ECX                            ; 00540a9b | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x164],EDX     ; 00540a9c
    MOV EDI,0xb                         ; 00540aa3
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 00540aa8
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 00540aad
    ADD ESP,0x8                         ; 00540ab2
    MOV EDX,dword ptr [0x005f2afc]      ; 00540ab5 | DAT_005f2afc
    MOV dword ptr [ESP + 0x150],EBX     ; 00540abb
    MOV dword ptr [ESP + 0x15c],EAX     ; 00540ac2
    LEA EAX,[ESP + 0x138]               ; 00540ac9
    MOV dword ptr [ESP + 0x154],ESI     ; 00540ad0
    PUSH EAX                            ; 00540ad7
    MOV dword ptr [ESP + 0x15c],EDI     ; 00540ad8
    MOV EBX,0xd                         ; 00540adf
    PUSH EDX                            ; 00540ae4 | DAT_01bdd7e4
    MOV ESI,0xf                         ; 00540ae5
    MOV EDI,0xe                         ; 00540aea
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 00540aef
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,0xc                         ; 00540af4
    ADD ESP,0x8                         ; 00540af9
    LEA EAX,[ESP + 0x138]               ; 00540afc
    MOV dword ptr [ESP + 0x150],ECX     ; 00540b03
    PUSH EAX                            ; 00540b0a
    MOV EAX,[0x005f2afc]                ; 00540b0b | DAT_005f2afc
    MOV dword ptr [ESP + 0x158],EBX     ; 00540b10
    PUSH EAX                            ; 00540b17 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x160],ESI     ; 00540b18
    MOV dword ptr [ESP + 0x164],EDI     ; 00540b1f
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 00540b26
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00540b2b
    JMP 0x005406e6                      ; 00540b2e
        ;   XREF to: 005406e6 (UNCONDITIONAL_JUMP)  ; LAB_005406e6
    MOV dword ptr [ESP],0xc7c34ff3      ; 00540b33
        ;   Label: LAB_00540b33
    JMP 0x005402d2                      ; 00540b3a
        ;   XREF to: 005402d2 (UNCONDITIONAL_JUMP)  ; LAB_005402d2
    FLDZ                                ; 00540b3f
        ;   Label: LAB_00540b3f
    FCOMP float ptr [ESP]               ; 00540b41
    FNSTSW AX                           ; 00540b44
    SAHF                                ; 00540b46
    JNC 0x005402dc                      ; 00540b47
        ;   XREF to: 005402dc (CONDITIONAL_JUMP)  ; LAB_005402dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540b4d
    MOV EAX,[0x02125514]                ; 00540b50 | DAT_02125514
    CMP EAX,dword ptr [EDX + 0x15aeb8]  ; 00540b55
    JNZ 0x00540b6d                      ; 00540b5b
        ;   XREF to: 00540b6d (CONDITIONAL_JUMP)  ; LAB_00540b6d
    FLD float ptr [ESP]                 ; 00540b5d
    FLD ST0                             ; 00540b60
    FMUL double ptr [0x005d0cae]        ; 00540b62 | DAT_005d0cae
    FSTP ST1                            ; 00540b68
    FSTP float ptr [ESP]                ; 00540b6a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00540b6d
        ;   Label: LAB_00540b6d
    MOV EAX,[0x02125514]                ; 00540b70 | DAT_02125514
    CMP EAX,dword ptr [EDX + 0x15aebc]  ; 00540b75
    JNZ 0x005402dc                      ; 00540b7b
        ;   XREF to: 005402dc (CONDITIONAL_JUMP)  ; LAB_005402dc
    FLD float ptr [ESP]                 ; 00540b81
    FLD ST0                             ; 00540b84
    FMUL double ptr [0x005d0cb6]        ; 00540b86 | DAT_005d0cb6
    FSTP ST1                            ; 00540b8c
    FSTP float ptr [ESP]                ; 00540b8e
    JMP 0x005402dc                      ; 00540b91
        ;   XREF to: 005402dc (UNCONDITIONAL_JUMP)  ; LAB_005402dc

