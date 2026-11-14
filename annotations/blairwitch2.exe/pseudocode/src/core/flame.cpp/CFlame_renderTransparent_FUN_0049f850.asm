; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0x108]:1  local_108
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00415e10 at 00415ead
;   core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043a710 at 0043a726
;   core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a0a90 at 004a0aad
;   core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00585990 at 00585af1
;
; Referenced Globals:
;   undefined4 DAT_005d5885
;   undefined4 DAT_005d588d
;   undefined4 DAT_005d5895
;   undefined4 DAT_005f68f0
;   undefined4 DAT_0060b280
;   undefined4 DAT_00615ae8
;   undefined4 DAT_00615b00
;   undefined4 DAT_00618170
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_box.cpp_FUN_0041a840
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_FUN_0046b670
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f850
        ;   Label: core_flame.cpp_CFlame_renderTransparent_FUN_0049f850
    PUSH ESI                            ; 0049f851
    PUSH EDI                            ; 0049f852
    PUSH EBP                            ; 0049f853
    MOV EBP,ESP                         ; 0049f854
    SUB ESP,0x15c                       ; 0049f856
    AND ESP,0xfffffff8                  ; 0049f85c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f85f
    CMP dword ptr [EAX + 0x310],0x0     ; 0049f862
    JNZ 0x0049f882                      ; 0049f869
        ;   XREF to: 0049f882 (CONDITIONAL_JUMP)  ; LAB_0049f882
    MOV EAX,[0x00618170]                ; 0049f86b | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 0049f870 | DAT_01d192f8
    JNZ 0x0049f882                      ; 0049f877
        ;   XREF to: 0049f882 (CONDITIONAL_JUMP)  ; LAB_0049f882
    XOR EAX,EAX                         ; 0049f879
        ;   Label: LAB_0049f879
    MOV ESP,EBP                         ; 0049f87b
    POP EBP                             ; 0049f87d
    POP EDI                             ; 0049f87e
    POP ESI                             ; 0049f87f
    POP EBX                             ; 0049f880
    RET                                 ; 0049f881
    MOV EBX,dword ptr [0x0060b280]      ; 0049f882 | DAT_0060b280
        ;   Label: LAB_0049f882
    PUSH EBX                            ; 0049f888 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0049f889
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0049f88e
    TEST EAX,EAX                        ; 0049f891
    JNZ 0x0049f879                      ; 0049f893
        ;   XREF to: 0049f879 (CONDITIONAL_JUMP)  ; LAB_0049f879
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049f895
    PUSH ESI                            ; 0049f898
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0049f899
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x3f4]     ; 0049f89e
    ADD ESP,0x4                         ; 0049f8a4
    TEST EDI,EDI                        ; 0049f8a7
    JZ 0x0049f8e3                       ; 0049f8a9
        ;   XREF to: 0049f8e3 (CONDITIONAL_JUMP)  ; LAB_0049f8e3
    PUSH 0x0                            ; 0049f8ab
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0049f8ad
    PUSH ESI                            ; 0049f8b3
    LEA ESI,[ESP + 0x58]                ; 0049f8b4
    LEA EDI,[ESP + 0x70]                ; 0049f8b8
    CALL dword ptr [EAX + 0x24]         ; 0049f8bc
    MOV ECX,0x6                         ; 0049f8bf
    ADD ESP,0x4                         ; 0049f8c4
    LEA EAX,[ESP + 0x6c]                ; 0049f8c7
    LEA ESI,[ESP + 0x54]                ; 0049f8cb
    PUSH EAX                            ; 0049f8cf
    MOVSD.REP ES:EDI,ESI                ; 0049f8d0
    CALL core_box.cpp_FUN_0041a840      ; 0049f8d2
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0049f8d7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049f8da
    MOV dword ptr [EDX + 0x3ec],EAX     ; 0049f8dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f8e3
        ;   Label: LAB_0049f8e3
    CMP dword ptr [EAX + 0x3ec],0x0     ; 0049f8e6
    JZ 0x0049f937                       ; 0049f8ed
        ;   XREF to: 0049f937 (CONDITIONAL_JUMP)  ; LAB_0049f937
    FLD float ptr [EAX + 0x2b8]         ; 0049f8ef
    FMUL ST0                            ; 0049f8f5
    FLD float ptr [EAX + 0x2b4]         ; 0049f8f7
    FMUL ST0                            ; 0049f8fd
    FADDP                               ; 0049f8ff
    FLD float ptr [EAX + 0x2bc]         ; 0049f901
    FMUL ST0                            ; 0049f907
    FADDP                               ; 0049f909
    FSQRT                               ; 0049f90b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f90d
    FMUL float ptr [EAX + 0x308]        ; 0049f910
    FLD1                                ; 0049f916
    FCOMPP                              ; 0049f918
    FNSTSW AX                           ; 0049f91a
    SAHF                                ; 0049f91c
    JNC 0x0049f937                      ; 0049f91d
        ;   XREF to: 0049f937 (CONDITIONAL_JUMP)  ; LAB_0049f937
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f91f
    ADD EAX,0x2c4                       ; 0049f922
    PUSH EAX                            ; 0049f927
    MOV EBX,dword ptr [0x0061b5a8]      ; 0049f928 | g_CDemonSetPtr
    PUSH EBX                            ; 0049f92e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750 ; 0049f92f
        ;   XREF to: 00530750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0049f934
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f937
        ;   Label: LAB_0049f937
    CMP dword ptr [EAX + 0x3ec],0x0     ; 0049f93a
    JZ 0x0049fdc8                       ; 0049f941
        ;   XREF to: 0049fdc8 (CONDITIONAL_JUMP)  ; LAB_0049fdc8
    CMP dword ptr [EAX + 0x304],0x3     ; 0049f947
    JZ 0x0049fdc8                       ; 0049f94e
        ;   XREF to: 0049fdc8 (CONDITIONAL_JUMP)  ; LAB_0049fdc8
    MOV EAX,[0x0060b280]                ; 0049f954 | DAT_0060b280
    PUSH EAX                            ; 0049f959 | DAT_01ba5c50
    LEA ESI,[ESP + 0xe4]                ; 0049f95a
    LEA EDI,[ESP + 0x114]               ; 0049f961
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 0049f968
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0xe4]                ; 0049f96d
    LEA EAX,[ESP + 0x114]               ; 0049f974
    ADD ESP,0x4                         ; 0049f97b
    XOR EDX,EDX                         ; 0049f97e
    MOV EBX,dword ptr [0x0060b280]      ; 0049f980 | DAT_0060b280
    PUSH EDX                            ; 0049f986
    MOVSD ES:EDI,ESI                    ; 0049f987
    MOVSD ES:EDI,ESI                    ; 0049f988
    MOVSD ES:EDI,ESI                    ; 0049f989
    PUSH EAX                            ; 0049f98a
    MOV ESI,0x1                         ; 0049f98b
    MOV dword ptr [ESP + 0x118],EDX     ; 0049f990
    PUSH EBX                            ; 0049f997 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x120],EDX     ; 0049f998
    XOR EDI,EDI                         ; 0049f99f
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 0049f9a1
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049f9a6
    MOV ECX,dword ptr [0x0060b280]      ; 0049f9a9 | DAT_0060b280
    MOV dword ptr [ESP + 0x150],ESI     ; 0049f9af
    MOV dword ptr [ESP + 0xd4],EDI      ; 0049f9b6
    MOV dword ptr [ESP + 0xd8],EDI      ; 0049f9bd
    MOV dword ptr [ESP + 0xdc],EDI      ; 0049f9c4
    PUSH ECX                            ; 0049f9cb | DAT_01ba5c50
    LEA ESI,[ESP + 0xa8]                ; 0049f9cc
    LEA EDI,[ESP + 0x114]               ; 0049f9d3
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 0049f9da
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0xa8]                ; 0049f9df
    ADD ESP,0x4                         ; 0049f9e6
    MOVSD ES:EDI,ESI                    ; 0049f9e9
    MOVSD ES:EDI,ESI                    ; 0049f9ea
    MOVSD ES:EDI,ESI                    ; 0049f9eb
    MOV EBX,dword ptr [ESP + 0x110]     ; 0049f9ec
    CMP EBX,0x2000                      ; 0049f9f3
    JLE 0x004a01ad                      ; 0049f9f9
        ;   XREF to: 004a01ad (CONDITIONAL_JUMP)  ; LAB_004a01ad
    MOV dword ptr [ESP + 0x150],0x3     ; 0049f9ff
        ;   Label: LAB_0049f9ff
    MOV EAX,dword ptr [ESP + 0x150]     ; 0049fa0a
        ;   Label: LAB_0049fa0a
    XOR ESI,ESI                         ; 0049fa11
    TEST EAX,EAX                        ; 0049fa13
    JLE 0x0049fdb9                      ; 0049fa15
        ;   XREF to: 0049fdb9 (CONDITIONAL_JUMP)  ; LAB_0049fdb9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049fa1b
    ADD EDI,0x20                        ; 0049fa1e
    PUSH 0x0                            ; 0049fa21
        ;   Label: LAB_0049fa21
    LEA EAX,[ESP + 0xd8]                ; 0049fa23
    PUSH EAX                            ; 0049fa2a
    MOV EAX,[0x0060b280]                ; 0049fa2b | DAT_0060b280
    PUSH EAX                            ; 0049fa30 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 0049fa31
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049fa36
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fa39
    FLD float ptr [EAX + 0x2b4]         ; 0049fa3c
    FMUL float ptr [0x005d5885]         ; 0049fa42 | DAT_005d5885
    LEA EBX,[ESP + 0x8c]                ; 0049fa48
    XOR EDX,EDX                         ; 0049fa4f
    LEA EAX,[ESP + 0x128]               ; 0049fa51
    MOV dword ptr [ESP + 0x12c],EDX     ; 0049fa58
    MOV dword ptr [ESP + 0x130],EDX     ; 0049fa5f
    MOV EDX,dword ptr [0x0060b280]      ; 0049fa66 | DAT_0060b280
    FSTP float ptr [ESP + 0x128]        ; 0049fa6c
    FLD float ptr [EAX]                 ; 0049fa73
    FMUL float ptr [0x005f68f0]         ; 0049fa75 | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fa7b
    FLD float ptr [EAX + 0x4]           ; 0049fa7d
    FMUL float ptr [0x005f68f0]         ; 0049fa80 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fa86
    FLD float ptr [EAX + 0x8]           ; 0049fa89
    FMUL float ptr [0x005f68f0]         ; 0049fa8c | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049fa92
    LEA EAX,[ESP + 0x8c]                ; 0049fa95
    PUSH EAX                            ; 0049fa9c
    MOV EAX,dword ptr [EDX]             ; 0049fa9d | DAT_01ba5c50
    PUSH EAX                            ; 0049fa9f
    CALL engine_special.cpp_FUN_0055d723 ; 0049faa0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049faa5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049faa8
    MOV EAX,dword ptr [EAX + 0x2b8]     ; 0049faab
    LEA EBX,[ESP + 0xb0]                ; 0049fab1
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049fab8
    LEA EAX,[ESP + 0x128]               ; 0049fabf
    MOV EDX,dword ptr [0x0060b280]      ; 0049fac6 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049facc
    FMUL float ptr [0x005f68f0]         ; 0049face | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fad4
    FLD float ptr [EAX + 0x4]           ; 0049fad6
    FMUL float ptr [0x005f68f0]         ; 0049fad9 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fadf
    FLD float ptr [EAX + 0x8]           ; 0049fae2
    FMUL float ptr [0x005f68f0]         ; 0049fae5 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049faeb
    LEA EAX,[ESP + 0xb0]                ; 0049faee
    PUSH EAX                            ; 0049faf5
    MOV EAX,dword ptr [EDX]             ; 0049faf6 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049faf8
    PUSH EAX                            ; 0049fafb
    CALL engine_special.cpp_FUN_0055d723 ; 0049fafc
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049fb01
    MOV AH,byte ptr [ESP + 0x12b]       ; 0049fb04
    XOR AH,0x80                         ; 0049fb0b
    LEA EBX,[ESP + 0xc8]                ; 0049fb0e
    MOV byte ptr [ESP + 0x12b],AH       ; 0049fb15
    LEA EAX,[ESP + 0x128]               ; 0049fb1c
    MOV EDX,dword ptr [0x0060b280]      ; 0049fb23 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049fb29
    FMUL float ptr [0x005f68f0]         ; 0049fb2b | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fb31
    FLD float ptr [EAX + 0x4]           ; 0049fb33
    FMUL float ptr [0x005f68f0]         ; 0049fb36 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fb3c
    FLD float ptr [EAX + 0x8]           ; 0049fb3f
    FMUL float ptr [0x005f68f0]         ; 0049fb42 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049fb48
    LEA EAX,[ESP + 0xc8]                ; 0049fb4b
    PUSH EAX                            ; 0049fb52
    MOV EAX,dword ptr [EDX]             ; 0049fb53 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049fb55
    PUSH EAX                            ; 0049fb58
    CALL engine_special.cpp_FUN_0055d723 ; 0049fb59
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049fb5e
    XOR EBX,EBX                         ; 0049fb61
    LEA EAX,[ESP + 0x128]               ; 0049fb63
    MOV dword ptr [ESP + 0x12c],EBX     ; 0049fb6a
    LEA EBX,[ESP + 0xf8]                ; 0049fb71
    MOV EDX,dword ptr [0x0060b280]      ; 0049fb78 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049fb7e
    FMUL float ptr [0x005f68f0]         ; 0049fb80 | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fb86
    FLD float ptr [EAX + 0x4]           ; 0049fb88
    FMUL float ptr [0x005f68f0]         ; 0049fb8b | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fb91
    FLD float ptr [EAX + 0x8]           ; 0049fb94
    FMUL float ptr [0x005f68f0]         ; 0049fb97 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049fb9d
    LEA EAX,[ESP + 0xf8]                ; 0049fba0
    PUSH EAX                            ; 0049fba7
    MOV EAX,dword ptr [EDX]             ; 0049fba8 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049fbaa
    PUSH EAX                            ; 0049fbaf
    CALL engine_special.cpp_FUN_0055d723 ; 0049fbb0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049fbb5
    PUSH 0x0                            ; 0049fbb8
    MOV EAX,[0x007bda74]                ; 0049fbba | DAT_007bda74
    PUSH EDI                            ; 0049fbbf
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0049fbc0
    PUSH EAX                            ; 0049fbc3
    CALL dword ptr [EDX + 0x4]          ; 0049fbc4
    MOV EDX,0xffff                      ; 0049fbc7
    ADD ESP,0xc                         ; 0049fbcc
    MOV EAX,[0x01c38aec]                ; 0049fbcf | DAT_01c38aec
    MOV ECX,dword ptr [ESP + 0x150]     ; 0049fbd4
    SUB EDX,EAX                         ; 0049fbdb
    CMP ECX,0x3                         ; 0049fbdd
    JNZ 0x0049fbed                      ; 0049fbe0
        ;   XREF to: 0049fbed (CONDITIONAL_JUMP)  ; LAB_0049fbed
    MOV EAX,EDX                         ; 0049fbe2
    SAR EDX,0x1f                        ; 0049fbe4
    SUB EAX,EDX                         ; 0049fbe7
    SAR EAX,0x1                         ; 0049fbe9
    MOV EDX,EAX                         ; 0049fbeb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fbed
        ;   Label: LAB_0049fbed
    MOV EBX,dword ptr [EAX + 0x304]     ; 0049fbf0
    CMP EBX,0x4                         ; 0049fbf6
    JNZ 0x0049fc04                      ; 0049fbf9
        ;   XREF to: 0049fc04 (CONDITIONAL_JUMP)  ; LAB_0049fc04
    MOV EAX,EDX                         ; 0049fbfb
    SAR EDX,0x1f                        ; 0049fbfd
    IDIV EBX                            ; 0049fc00
    MOV EDX,EAX                         ; 0049fc02
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fc04
        ;   Label: LAB_0049fc04
    CMP dword ptr [EAX + 0x304],0x1     ; 0049fc07
    JNZ 0x0049fc1b                      ; 0049fc0e
        ;   XREF to: 0049fc1b (CONDITIONAL_JUMP)  ; LAB_0049fc1b
    MOV EAX,EDX                         ; 0049fc10
    SAR EDX,0x1f                        ; 0049fc12
    SUB EAX,EDX                         ; 0049fc15
    SAR EAX,0x1                         ; 0049fc17
    MOV EDX,EAX                         ; 0049fc19
    MOV EBX,0xffff                      ; 0049fc1b
        ;   Label: LAB_0049fc1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fc20
    MOV dword ptr [0x00622070],EDX      ; 0049fc23 | DAT_00622070
    MOV dword ptr [0x006220a0],EDX      ; 0049fc29 | DAT_006220a0
    MOV dword ptr [0x006220d0],EDX      ; 0049fc2f | DAT_006220d0
    MOV dword ptr [0x00622034],EBX      ; 0049fc35 | DAT_00622034
    MOV dword ptr [0x00622038],EBX      ; 0049fc3b | DAT_00622038
    MOV dword ptr [0x0062203c],EBX      ; 0049fc41 | DAT_0062203c
    MOV dword ptr [0x00622064],EBX      ; 0049fc47 | DAT_00622064
    MOV dword ptr [0x00622068],EBX      ; 0049fc4d | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 0049fc53 | DAT_0062206c
    MOV dword ptr [0x00622094],EBX      ; 0049fc59 | DAT_00622094
    MOV dword ptr [0x00622098],EBX      ; 0049fc5f | DAT_00622098
    MOV dword ptr [0x0062209c],EBX      ; 0049fc65 | DAT_0062209c
    MOV dword ptr [0x006220c4],EBX      ; 0049fc6b | DAT_006220c4
    MOV dword ptr [0x006220c8],EBX      ; 0049fc71 | DAT_006220c8
    MOV dword ptr [0x006220cc],EBX      ; 0049fc77 | DAT_006220cc
    MOV EBX,dword ptr [EAX + 0x3f0]     ; 0049fc7d
    MOV dword ptr [0x00622040],EDX      ; 0049fc83 | DAT_00622040
    TEST EBX,EBX                        ; 0049fc89
    JNZ 0x004a01be                      ; 0049fc8b
        ;   XREF to: 004a01be (CONDITIONAL_JUMP)  ; LAB_004a01be
    MOV EDX,0xf80000                    ; 0049fc91
    MOV EAX,0x80000                     ; 0049fc96
    MOV dword ptr [0x00622030],EDX      ; 0049fc9b | DAT_00622030
    MOV [0x0062205c],EAX                ; 0049fca1 | DAT_0062205c
    MOV [0x00622060],EAX                ; 0049fca6 | DAT_00622060
    MOV dword ptr [0x0062208c],EDX      ; 0049fcab | DAT_0062208c
    MOV [0x00622090],EAX                ; 0049fcb1 | DAT_00622090
    MOV dword ptr [0x006220bc],EDX      ; 0049fcb6 | DAT_006220bc
    MOV dword ptr [0x006220c0],EDX      ; 0049fcbc | DAT_006220c0
    MOV [0x0062202c],EAX                ; 0049fcc2 | DAT_0062202c
        ;   Label: LAB_0049fcc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fcc7
    FLD float ptr [EAX + 0x2c0]         ; 0049fcca
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049fcd0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x158]       ; 0049fcd5
    MOV EAX,dword ptr [ESP + 0x158]     ; 0049fcdc
    MOV EDX,EAX                         ; 0049fce3
    MOV ECX,0x8                         ; 0049fce5
    SAR EDX,0x1f                        ; 0049fcea
    IDIV ECX                            ; 0049fced
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fcef
    IMUL EAX,dword ptr [EAX + 0x304],0xc0 ; 0049fcf2
    MOV ECX,0x615b00                    ; 0049fcfc | DAT_00615b00
    ADD ECX,EAX                         ; 0049fd01
    IMUL EAX,EDX,0x18                   ; 0049fd03
    ADD EAX,ECX                         ; 0049fd06
    PUSH EAX                            ; 0049fd08
    MOV EBX,dword ptr [0x0060b280]      ; 0049fd09 | DAT_0060b280
    PUSH EBX                            ; 0049fd0f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049fd10
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049fd15
    PUSH 0x1                            ; 0049fd18
    MOV EAX,[0x0060b280]                ; 0049fd1a | DAT_0060b280
    PUSH EAX                            ; 0049fd1f | DAT_01ba5c50
    MOV EBX,0x1                         ; 0049fd20
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049fd25
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x4                         ; 0049fd2a
    MOV EAX,0x2                         ; 0049fd2f
    ADD ESP,0x8                         ; 0049fd34
    XOR ECX,ECX                         ; 0049fd37
    MOV dword ptr [ESP + 0x2c],EDX      ; 0049fd39
    MOV dword ptr [ESP + 0x3c],ECX      ; 0049fd3d
    MOV dword ptr [ESP + 0x38],ECX      ; 0049fd41
    MOV dword ptr [ESP + 0x34],ECX      ; 0049fd45
    MOV dword ptr [ESP + 0x30],ECX      ; 0049fd49
    MOV dword ptr [ESP + 0x48],EAX      ; 0049fd4d
    LEA EAX,[ESP + 0x28]                ; 0049fd51
    MOV dword ptr [ESP + 0x40],ECX      ; 0049fd55
    PUSH EAX                            ; 0049fd59
    MOV ECX,dword ptr [0x0060b280]      ; 0049fd5a | DAT_0060b280
    MOV EDX,0x3                         ; 0049fd60
    PUSH ECX                            ; 0049fd65 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x4c],EBX      ; 0049fd66
    MOV dword ptr [ESP + 0x54],EDX      ; 0049fd6a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049fd6e
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049fd73
    PUSH 0x0                            ; 0049fd76
    MOV EBX,dword ptr [0x0060b280]      ; 0049fd78 | DAT_0060b280
    PUSH EBX                            ; 0049fd7e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049fd7f
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049fd84
    MOV EAX,[0x0060b280]                ; 0049fd87 | DAT_0060b280
    PUSH EAX                            ; 0049fd8c | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0049fd8d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049fd92
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0049fd95
    INC ESI                             ; 0049fd9c
    ADD EDX,0x2aaa                      ; 0049fd9d
    MOV ECX,dword ptr [ESP + 0x150]     ; 0049fda3
    MOV dword ptr [ESP + 0xdc],EDX      ; 0049fdaa
    CMP ESI,ECX                         ; 0049fdb1
    JL 0x0049fa21                       ; 0049fdb3
        ;   XREF to: 0049fa21 (CONDITIONAL_JUMP)  ; LAB_0049fa21
    MOV EBX,dword ptr [0x0060b280]      ; 0049fdb9 | DAT_0060b280
        ;   Label: LAB_0049fdb9
    PUSH EBX                            ; 0049fdbf | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0049fdc0
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049fdc5
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049fdc8
        ;   Label: LAB_0049fdc8
    PUSH ESI                            ; 0049fdcb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0049fdcc
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x304]     ; 0049fdd1
    ADD ESP,0x4                         ; 0049fdd7
    CMP EDI,0x1                         ; 0049fdda
    JNZ 0x004a019d                      ; 0049fddd
        ;   XREF to: 004a019d (CONDITIONAL_JUMP)  ; LAB_004a019d
    FLD float ptr [ESI + 0x2b8]         ; 0049fde3
    FMUL double ptr [0x005d588d]        ; 0049fde9 | DAT_005d588d
    MOV EDX,dword ptr [ESI + 0x3ec]     ; 0049fdef
    FSTP float ptr [ESP + 0x14c]        ; 0049fdf5
    TEST EDX,EDX                        ; 0049fdfc
    JZ 0x004a019d                       ; 0049fdfe
        ;   XREF to: 004a019d (CONDITIONAL_JUMP)  ; LAB_004a019d
    MOV ECX,dword ptr [0x0060b280]      ; 0049fe04 | DAT_0060b280
    PUSH ECX                            ; 0049fe0a | DAT_01ba5c50
    LEA ESI,[ESP + 0x108]               ; 0049fe0b
    LEA EDI,[ESP + 0x144]               ; 0049fe12
    CALL engine_drender.cpp_FUN_0046b670 ; 0049fe19
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b670()
    ADD ESP,0x4                         ; 0049fe1e
    LEA ESI,[ESP + 0x104]               ; 0049fe21
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049fe28
    MOVSD ES:EDI,ESI                    ; 0049fe2b
    MOVSD ES:EDI,ESI                    ; 0049fe2c
    MOVSD ES:EDI,ESI                    ; 0049fe2d
    FLD float ptr [EAX + 0x2b8]         ; 0049fe2e
    FMUL double ptr [0x005d5895]        ; 0049fe34 | DAT_005d5895
    FSTP float ptr [ESP + 0x158]        ; 0049fe3a
    MOV EAX,dword ptr [ESP + 0x158]     ; 0049fe41
    MOV dword ptr [ESP + 0x9c],EAX      ; 0049fe48
    LEA EAX,[ESP + 0x98]                ; 0049fe4f
    PUSH EAX                            ; 0049fe56
    LEA EAX,[ESP + 0x144]               ; 0049fe57
    PUSH EAX                            ; 0049fe5e
    MOV EDI,dword ptr [0x0060b280]      ; 0049fe5f | DAT_0060b280
    XOR EBX,EBX                         ; 0049fe65
    PUSH EDI                            ; 0049fe67 | DAT_01ba5c50
    MOV dword ptr [ESP + 0xa4],EBX      ; 0049fe68
    MOV dword ptr [ESP + 0xac],EBX      ; 0049fe6f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0049fe76
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049fe7b
    PUSH 0x3f828f5c                     ; 0049fe7e
    PUSH 0x3f7ae148                     ; 0049fe83
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049fe88
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x160],EAX     ; 0049fe8d
    FLD float ptr [ESP + 0x160]         ; 0049fe94
    ADD ESP,0x8                         ; 0049fe9b
    FMUL float ptr [ESP + 0x14c]        ; 0049fe9e
    MOV dword ptr [ESP + 0x88],EBX      ; 0049fea5
    FSTP float ptr [ESP + 0x80]         ; 0049feac
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049feb3
    LEA EBX,[ESP + 0x11c]               ; 0049feba
    MOV dword ptr [ESP + 0x84],EAX      ; 0049fec1
    LEA EAX,[ESP + 0x80]                ; 0049fec8
    MOV EDX,dword ptr [0x0060b280]      ; 0049fecf | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049fed5
    FMUL float ptr [0x005f68f0]         ; 0049fed7 | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fedd
    FLD float ptr [EAX + 0x4]           ; 0049fedf
    FMUL float ptr [0x005f68f0]         ; 0049fee2 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fee8
    FLD float ptr [EAX + 0x8]           ; 0049feeb
    FMUL float ptr [0x005f68f0]         ; 0049feee | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049fef4
    LEA EAX,[ESP + 0x11c]               ; 0049fef7
    PUSH EAX                            ; 0049fefe
    MOV EAX,dword ptr [EDX]             ; 0049feff | DAT_01ba5c50
    PUSH EAX                            ; 0049ff01
    CALL engine_special.cpp_FUN_0055d723 ; 0049ff02
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ff07
    MOV DL,byte ptr [ESP + 0x83]        ; 0049ff0a
    LEA EBX,[ESP + 0x134]               ; 0049ff11
    XOR DL,0x80                         ; 0049ff18
    LEA EAX,[ESP + 0x80]                ; 0049ff1b
    MOV byte ptr [ESP + 0x83],DL        ; 0049ff22
    MOV EDX,dword ptr [0x0060b280]      ; 0049ff29 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049ff2f
    FMUL float ptr [0x005f68f0]         ; 0049ff31 | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049ff37
    FLD float ptr [EAX + 0x4]           ; 0049ff39
    FMUL float ptr [0x005f68f0]         ; 0049ff3c | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049ff42
    FLD float ptr [EAX + 0x8]           ; 0049ff45
    FMUL float ptr [0x005f68f0]         ; 0049ff48 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049ff4e
    LEA EAX,[ESP + 0x134]               ; 0049ff51
    PUSH EAX                            ; 0049ff58
    MOV EAX,dword ptr [EDX]             ; 0049ff59 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049ff5b
    PUSH EAX                            ; 0049ff5e
    CALL engine_special.cpp_FUN_0055d723 ; 0049ff5f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ff64
    MOV DH,byte ptr [ESP + 0x87]        ; 0049ff67
    LEA EBX,[ESP + 0xbc]                ; 0049ff6e
    XOR DH,0x80                         ; 0049ff75
    LEA EAX,[ESP + 0x80]                ; 0049ff78
    MOV byte ptr [ESP + 0x87],DH        ; 0049ff7f
    MOV EDX,dword ptr [0x0060b280]      ; 0049ff86 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049ff8c
    FMUL float ptr [0x005f68f0]         ; 0049ff8e | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049ff94
    FLD float ptr [EAX + 0x4]           ; 0049ff96
    FMUL float ptr [0x005f68f0]         ; 0049ff99 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049ff9f
    FLD float ptr [EAX + 0x8]           ; 0049ffa2
    FMUL float ptr [0x005f68f0]         ; 0049ffa5 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 0049ffab
    LEA EAX,[ESP + 0xbc]                ; 0049ffae
    PUSH EAX                            ; 0049ffb5
    MOV EAX,dword ptr [EDX]             ; 0049ffb6 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049ffb8
    PUSH EAX                            ; 0049ffbb
    CALL engine_special.cpp_FUN_0055d723 ; 0049ffbc
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ffc1
    MOV BL,byte ptr [ESP + 0x83]        ; 0049ffc4
    XOR BL,0x80                         ; 0049ffcb
    LEA EAX,[ESP + 0x80]                ; 0049ffce
    MOV byte ptr [ESP + 0x83],BL        ; 0049ffd5
    LEA EBX,[ESP + 0xec]                ; 0049ffdc
    MOV EDX,dword ptr [0x0060b280]      ; 0049ffe3 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049ffe9
    FMUL float ptr [0x005f68f0]         ; 0049ffeb | DAT_005f68f0
    FISTP dword ptr [EBX]               ; 0049fff1
    FLD float ptr [EAX + 0x4]           ; 0049fff3
    FMUL float ptr [0x005f68f0]         ; 0049fff6 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x4]         ; 0049fffc
    FLD float ptr [EAX + 0x8]           ; 0049ffff
    FMUL float ptr [0x005f68f0]         ; 004a0002 | DAT_005f68f0
    FISTP dword ptr [EBX + 0x8]         ; 004a0008
    LEA EAX,[ESP + 0xec]                ; 004a000b
    PUSH EAX                            ; 004a0012
    MOV EAX,dword ptr [EDX]             ; 004a0013 | DAT_01ba5c50
    ADD EAX,0x90                        ; 004a0015
    PUSH EAX                            ; 004a001a
    CALL engine_special.cpp_FUN_0055d723 ; 004a001b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a0020
    XOR EDX,EDX                         ; 004a0023
    MOV dword ptr [ESP + 0x154],EDX     ; 004a0025
    MOV ECX,dword ptr [0x0060b280]      ; 004a002c | DAT_0060b280
        ;   Label: LAB_004a002c
    MOV EBX,dword ptr [ESP + 0x154]     ; 004a0032
    MOV ECX,dword ptr [ECX]             ; 004a0039 | DAT_01ba5c50
    ADD ECX,EBX                         ; 004a003b
    MOV ESI,dword ptr [ECX + 0x8]       ; 004a003d
    CMP ESI,0x200                       ; 004a0040
    JLE 0x004a0076                      ; 004a0046
        ;   XREF to: 004a0076 (CONDITIONAL_JUMP)  ; LAB_004a0076
    MOV EDI,ESI                         ; 004a0048
    MOV EAX,dword ptr [ECX]             ; 004a004a
    SUB ESI,0x100                       ; 004a004c
    MOV EBX,EDI                         ; 004a0052
    MOV EDX,ESI                         ; 004a0054
    IMUL EDX                            ; 004a0056
    IDIV EBX                            ; 004a0058
    MOV EBX,EDI                         ; 004a005a
    MOV dword ptr [ECX],EAX             ; 004a005c
    MOV EDX,ESI                         ; 004a005e
    MOV EAX,dword ptr [ECX + 0x4]       ; 004a0060
    IMUL EDX                            ; 004a0063
    IDIV EBX                            ; 004a0065
    MOV dword ptr [ECX + 0x4],EAX       ; 004a0067
    PUSH ECX                            ; 004a006a
    MOV dword ptr [ECX + 0x8],ESI       ; 004a006b
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e8eb0 ; 004a006e
        ;   XREF to: 004e8eb0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004e8eb0(SProjectedVertex * point)
    ADD ESP,0x4                         ; 004a0073
    MOV EDI,dword ptr [ESP + 0x154]     ; 004a0076
        ;   Label: LAB_004a0076
    ADD EDI,0x30                        ; 004a007d
    MOV dword ptr [ESP + 0x154],EDI     ; 004a0080
    CMP EDI,0xc0                        ; 004a0087
    JNZ 0x004a002c                      ; 004a008d
        ;   XREF to: 004a002c (CONDITIONAL_JUMP)  ; LAB_004a002c
    MOV EAX,[0x0060b280]                ; 004a008f | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 004a0094 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x2c],0x4000   ; 004a0096
    MOV EDX,dword ptr [EAX]             ; 004a009d | DAT_01ba5c50
    MOV dword ptr [EDX + 0x5c],0x4000   ; 004a009f
    MOV EDX,dword ptr [EAX]             ; 004a00a6 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x8c],0x4000   ; 004a00a8
    MOV EDX,dword ptr [EAX]             ; 004a00b2 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xbc],0x4000   ; 004a00b4
    MOV EDX,dword ptr [EAX]             ; 004a00be | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x80000  ; 004a00c0
    MOV EDX,dword ptr [EAX]             ; 004a00c7 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004a00c9
    MOV EDX,dword ptr [EAX]             ; 004a00d0 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004a00d2
    MOV EDX,dword ptr [EAX]             ; 004a00d9 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004a00db
    MOV EDX,dword ptr [EAX]             ; 004a00e2 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004a00e4
    MOV EDX,dword ptr [EAX]             ; 004a00eb | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004a00ed
    MOV EDX,dword ptr [EAX]             ; 004a00f4 | DAT_01ba5c50
    MOV EBX,0x2                         ; 004a00f6
    MOV ESI,0x3                         ; 004a00fb
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004a0100
    PUSH 0x615ae8                       ; 004a010a | DAT_00615ae8
    MOV EDX,dword ptr [EAX]             ; 004a010f | DAT_01ba5c50
    XOR ECX,ECX                         ; 004a0111
    PUSH EAX                            ; 004a0113 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xac],0x80000  ; 004a0114
    MOV EDX,0x4                         ; 004a011e
    MOV dword ptr [ESP + 0x1c],ECX      ; 004a0123
    MOV dword ptr [ESP + 0x18],ECX      ; 004a0127
    MOV dword ptr [ESP + 0x14],ECX      ; 004a012b
    MOV dword ptr [ESP + 0x10],ECX      ; 004a012f
    MOV dword ptr [ESP + 0x20],ECX      ; 004a0133
    MOV dword ptr [ESP + 0x28],EBX      ; 004a0137
    MOV dword ptr [ESP + 0x2c],ESI      ; 004a013b
    MOV ECX,0x1                         ; 004a013f
    MOV dword ptr [ESP + 0xc],EDX       ; 004a0144
    MOV dword ptr [ESP + 0x24],ECX      ; 004a0148
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004a014c
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a0151
    PUSH 0x1                            ; 004a0154
    MOV EDI,dword ptr [0x0060b280]      ; 004a0156 | DAT_0060b280
    PUSH EDI                            ; 004a015c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004a015d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a0162
    PUSH 0x163                          ; 004a0165
    LEA EAX,[ESP + 0x4]                 ; 004a016a
    PUSH EAX                            ; 004a016e
    MOV EAX,[0x0060b280]                ; 004a016f | DAT_0060b280
    PUSH EAX                            ; 004a0174 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 004a0175
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004a017a
    PUSH 0x0                            ; 004a017d
    MOV EDX,dword ptr [0x0060b280]      ; 004a017f | DAT_0060b280
    PUSH EDX                            ; 004a0185 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004a0186
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a018b
    MOV ECX,dword ptr [0x0060b280]      ; 004a018e | DAT_0060b280
    PUSH ECX                            ; 004a0194 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004a0195
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004a019a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a019d
        ;   Label: LAB_004a019d
    MOV EAX,dword ptr [EAX + 0x3ec]     ; 004a01a0
    MOV ESP,EBP                         ; 004a01a6
    POP EBP                             ; 004a01a8
    POP EDI                             ; 004a01a9
    POP ESI                             ; 004a01aa
    POP EBX                             ; 004a01ab
    RET                                 ; 004a01ac
    CMP EBX,0xffffe000                  ; 004a01ad
        ;   Label: LAB_004a01ad
    JL 0x0049f9ff                       ; 004a01b3
        ;   XREF to: 0049f9ff (CONDITIONAL_JUMP)  ; LAB_0049f9ff
    JMP 0x0049fa0a                      ; 004a01b9
        ;   XREF to: 0049fa0a (UNCONDITIONAL_JUMP)  ; LAB_0049fa0a
    MOV EAX,0xf80000                    ; 004a01be
        ;   Label: LAB_004a01be
    MOV EBX,0x80000                     ; 004a01c3
    MOV [0x00622030],EAX                ; 004a01c8 | DAT_00622030
    MOV [0x0062205c],EAX                ; 004a01cd | DAT_0062205c
    MOV dword ptr [0x00622060],EBX      ; 004a01d2 | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 004a01d8 | DAT_0062208c
    MOV dword ptr [0x00622090],EBX      ; 004a01de | DAT_00622090
    MOV dword ptr [0x006220bc],EBX      ; 004a01e4 | DAT_006220bc
    MOV [0x006220c0],EAX                ; 004a01ea | DAT_006220c0
    JMP 0x0049fcc2                      ; 004a01ef
        ;   XREF to: 0049fcc2 (UNCONDITIONAL_JUMP)  ; LAB_0049fcc2

