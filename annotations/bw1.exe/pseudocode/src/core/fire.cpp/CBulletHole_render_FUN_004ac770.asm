; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_render_FUN_004ac770(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 at 004b54df
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5257
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_005fff98
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_0062908c
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408ac0
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac770
        ;   Label: core_fire.cpp_CBulletHole_render_FUN_004ac770
    PUSH ESI                            ; 004ac771
    PUSH EDI                            ; 004ac772
    PUSH EBP                            ; 004ac773
    SUB ESP,0x6c                        ; 004ac774
    MOV EBP,dword ptr [ESP + 0x80]      ; 004ac777
    MOV EDX,dword ptr [EBP + 0x10]      ; 004ac77e
    LEA EBX,[EBP + 0x14]                ; 004ac781
    TEST EDX,EDX                        ; 004ac784
    JZ 0x004ac9ef                       ; 004ac786
        ;   XREF to: 004ac9ef (CONDITIONAL_JUMP)  ; LAB_004ac9ef
    PUSH EDX                            ; 004ac78c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004ac78d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac792
    LEA EAX,[EBP + 0x24]                ; 004ac795
    PUSH EAX                            ; 004ac798
    PUSH EBX                            ; 004ac799
    MOV EBX,dword ptr [0x00612560]      ; 004ac79a | DAT_00612560
    PUSH EBX                            ; 004ac7a0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004ac7a1
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
        ;   Label: LAB_004ac7a1
    ADD ESP,0xc                         ; 004ac7a6
    MOV EBX,dword ptr [EBP + 0x20]      ; 004ac7a9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004ac7ac
    XOR ECX,ECX                         ; 004ac7af
    AND EBX,0x1                         ; 004ac7b1
    AND EAX,0x2                         ; 004ac7b4
    SHL EBX,0x17                        ; 004ac7b7
    MOV dword ptr [ESP + 0x20],ECX      ; 004ac7ba
    LEA ESI,[EBX + 0x80000]             ; 004ac7be
    SHL EAX,0x16                        ; 004ac7c4
    MOV dword ptr [0x0062902c],ESI      ; 004ac7c7 | DAT_0062902c
    ADD EBX,0x780000                    ; 004ac7cd | DAT_00780000
    LEA ESI,[EAX + 0x780000]            ; 004ac7d3 | DAT_00780000
    MOV dword ptr [0x0062905c],EBX      ; 004ac7d9 | DAT_0062905c
    ADD EAX,0x80000                     ; 004ac7df
    MOV dword ptr [0x0062908c],EBX      ; 004ac7e4 | DAT_0062908c
    MOV [0x00629090],EAX                ; 004ac7ea | DAT_00629090
    MOV EAX,[0x0062902c]                ; 004ac7ef | DAT_0062902c
    LEA EBX,[ESP + 0x30]                ; 004ac7f4
    MOV [0x006290bc],EAX                ; 004ac7f8 | DAT_006290bc
    MOV EAX,[0x00629090]                ; 004ac7fd | DAT_00629090
    MOV dword ptr [0x00629030],ESI      ; 004ac802 | DAT_00629030
    MOV [0x006290c0],EAX                ; 004ac808 | DAT_006290c0
    MOV EAX,0xbe2e147b                  ; 004ac80d
    MOV dword ptr [0x00629060],ESI      ; 004ac812 | DAT_00629060
    MOV dword ptr [ESP + 0x18],EAX      ; 004ac818
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac81c
    LEA EAX,[ESP + 0x18]                ; 004ac820
    MOV ESI,dword ptr [0x00612560]      ; 004ac824 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ac82a
    FMUL float ptr [0x005fff94]         ; 004ac82c | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac832
    FLD float ptr [EAX + 0x4]           ; 004ac834
    FMUL float ptr [0x005fff94]         ; 004ac837 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac83d
    FLD float ptr [EAX + 0x8]           ; 004ac840
    FMUL float ptr [0x005fff94]         ; 004ac843 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac849
    LEA EAX,[ESP + 0x30]                ; 004ac84c
    PUSH EAX                            ; 004ac850
    MOV EAX,dword ptr [ESI]             ; 004ac851 | DAT_01bc120c
    PUSH EAX                            ; 004ac853
    XOR EDI,EDI                         ; 004ac854
    MOV ESI,0xbe2e147b                  ; 004ac856
    CALL engine_special.cpp_FUN_00580173 ; 004ac85b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3e2e147b                  ; 004ac860
    ADD ESP,0x8                         ; 004ac865
    LEA EAX,[ESP + 0x18]                ; 004ac868
    MOV dword ptr [ESP + 0x18],EBX      ; 004ac86c
    MOV dword ptr [ESP + 0x1c],ESI      ; 004ac870
    MOV dword ptr [ESP + 0x20],EDI      ; 004ac874
    MOV EBX,ESP                         ; 004ac878
    MOV ESI,dword ptr [0x00612560]      ; 004ac87a | DAT_00612560
    FLD float ptr [EAX]                 ; 004ac880
    FMUL float ptr [0x005fff94]         ; 004ac882 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac888
    FLD float ptr [EAX + 0x4]           ; 004ac88a
    FMUL float ptr [0x005fff94]         ; 004ac88d | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac893
    FLD float ptr [EAX + 0x8]           ; 004ac896
    FMUL float ptr [0x005fff94]         ; 004ac899 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac89f
    MOV EAX,ESP                         ; 004ac8a2
    PUSH EAX                            ; 004ac8a4
    MOV EAX,dword ptr [ESI]             ; 004ac8a5 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ac8a7
    PUSH EAX                            ; 004ac8aa
    CALL engine_special.cpp_FUN_00580173 ; 004ac8ab
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3e2e147b                  ; 004ac8b0
    LEA EBX,[ESP + 0x68]                ; 004ac8b5
    ADD ESP,0x8                         ; 004ac8b9
    MOV ESI,dword ptr [0x00612560]      ; 004ac8bc | DAT_00612560
    MOV dword ptr [ESP + 0x18],EAX      ; 004ac8c2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac8c6
    LEA EAX,[ESP + 0x18]                ; 004ac8ca
    MOV dword ptr [ESP + 0x20],EDI      ; 004ac8ce
    FLD float ptr [EAX]                 ; 004ac8d2
    FMUL float ptr [0x005fff94]         ; 004ac8d4 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac8da
    FLD float ptr [EAX + 0x4]           ; 004ac8dc
    FMUL float ptr [0x005fff94]         ; 004ac8df | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac8e5
    FLD float ptr [EAX + 0x8]           ; 004ac8e8
    FMUL float ptr [0x005fff94]         ; 004ac8eb | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac8f1
    LEA EAX,[ESP + 0x60]                ; 004ac8f4
    PUSH EAX                            ; 004ac8f8
    MOV EAX,dword ptr [ESI]             ; 004ac8f9 | DAT_01bc120c
    ADD EAX,0x60                        ; 004ac8fb
    PUSH EAX                            ; 004ac8fe
    MOV ESI,0x3e2e147b                  ; 004ac8ff
    CALL engine_special.cpp_FUN_00580173 ; 004ac904
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0xbe2e147b                  ; 004ac909
    ADD ESP,0x8                         ; 004ac90e
    LEA EAX,[ESP + 0x18]                ; 004ac911
    MOV dword ptr [ESP + 0x18],EBX      ; 004ac915
    MOV dword ptr [ESP + 0x1c],ESI      ; 004ac919
    MOV dword ptr [ESP + 0x20],EDI      ; 004ac91d
    LEA EBX,[ESP + 0x48]                ; 004ac921
    MOV ESI,dword ptr [0x00612560]      ; 004ac925 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ac92b
    FMUL float ptr [0x005fff94]         ; 004ac92d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ac933
    FLD float ptr [EAX + 0x4]           ; 004ac935
    FMUL float ptr [0x005fff94]         ; 004ac938 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ac93e
    FLD float ptr [EAX + 0x8]           ; 004ac941
    FMUL float ptr [0x005fff94]         ; 004ac944 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ac94a
    LEA EAX,[ESP + 0x48]                ; 004ac94d
    PUSH EAX                            ; 004ac951
    MOV EAX,dword ptr [ESI]             ; 004ac952 | DAT_01bc120c
    ADD EAX,0x90                        ; 004ac954
    PUSH EAX                            ; 004ac959
    CALL engine_special.cpp_FUN_00580173 ; 004ac95a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EBP + 0x10]      ; 004ac95f
    ADD ESP,0x8                         ; 004ac962
    TEST EAX,EAX                        ; 004ac965
    JNZ 0x004aca0e                      ; 004ac967
        ;   XREF to: 004aca0e (CONDITIONAL_JUMP)  ; LAB_004aca0e
    MOV EBX,0xffff                      ; 004ac96d
    MOV dword ptr [0x00629038],EBX      ; 004ac972 | DAT_00629038
    MOV dword ptr [0x0062903c],EBX      ; 004ac978 | DAT_0062903c
    MOV dword ptr [0x00629064],EBX      ; 004ac97e | DAT_00629064
    MOV dword ptr [0x00629068],EBX      ; 004ac984 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004ac98a | DAT_0062906c
    MOV dword ptr [0x00629094],EBX      ; 004ac990 | DAT_00629094
    MOV dword ptr [0x00629098],EBX      ; 004ac996 | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004ac99c | DAT_0062909c
    MOV dword ptr [0x006290c4],EBX      ; 004ac9a2 | DAT_006290c4
    MOV dword ptr [0x006290c8],EBX      ; 004ac9a8 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBX      ; 004ac9ae | DAT_006290cc
    MOV dword ptr [0x00629034],EBX      ; 004ac9b4 | DAT_00629034
    PUSH 0x1c57090                      ; 004ac9ba
        ;   Label: LAB_004ac9ba
    MOV EBX,dword ptr [0x00612560]      ; 004ac9bf | DAT_00612560
    PUSH EBX                            ; 004ac9c5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004ac9c6
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [EBP + 0x10]      ; 004ac9cb
    ADD ESP,0x8                         ; 004ac9ce
    TEST ESI,ESI                        ; 004ac9d1
    JNZ 0x004acaa1                      ; 004ac9d3
        ;   XREF to: 004acaa1 (CONDITIONAL_JUMP)  ; LAB_004acaa1
    MOV EAX,[0x00612560]                ; 004ac9d9 | DAT_00612560
    PUSH EAX                            ; 004ac9de | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004ac9df
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ac9e4
    ADD ESP,0x6c                        ; 004ac9e7
    POP EBP                             ; 004ac9ea
    POP EDI                             ; 004ac9eb
    POP ESI                             ; 004ac9ec
    POP EBX                             ; 004ac9ed
    RET                                 ; 004ac9ee
    PUSH EBP                            ; 004ac9ef
        ;   Label: LAB_004ac9ef
    MOV ESI,dword ptr [0x00612560]      ; 004ac9f0 | DAT_00612560
    PUSH ESI                            ; 004ac9f6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ac9f7
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ac9fc
    PUSH 0x0                            ; 004ac9ff
    PUSH EBX                            ; 004aca01
    MOV EDI,dword ptr [0x00612560]      ; 004aca02 | DAT_00612560
    PUSH EDI                            ; 004aca08 | DAT_01bc120c
    JMP 0x004ac7a1                      ; 004aca09
        ;   XREF to: 004ac7a1 (UNCONDITIONAL_JUMP)  ; LAB_004ac7a1
    LEA EAX,[EBP + 0x30]                ; 004aca0e
        ;   Label: LAB_004aca0e
    PUSH EAX                            ; 004aca11
    MOV EDX,dword ptr [EBP + 0x10]      ; 004aca12
    LEA ESI,[ESP + 0x58]                ; 004aca15
    PUSH EDX                            ; 004aca19
    LEA EDI,[ESP + 0x44]                ; 004aca1a
    LEA EBX,[ESP + 0x14]                ; 004aca1e
    CALL core_actor.cpp_FUN_00408ac0    ; 004aca22
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x5c]                ; 004aca27
    ADD ESP,0x8                         ; 004aca2b
    MOV EAX,EBP                         ; 004aca2e
    MOVSD ES:EDI,ESI                    ; 004aca30
    MOVSD ES:EDI,ESI                    ; 004aca31
    MOVSD ES:EDI,ESI                    ; 004aca32
    FLD float ptr [EAX]                 ; 004aca33
    FMUL float ptr [0x005fff94]         ; 004aca35 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004aca3b
    FLD float ptr [EAX + 0x4]           ; 004aca3d
    FMUL float ptr [0x005fff94]         ; 004aca40 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004aca46
    FLD float ptr [EAX + 0x8]           ; 004aca49
    FMUL float ptr [0x005fff94]         ; 004aca4c | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004aca52
    LEA EBX,[ESP + 0x24]                ; 004aca55
    LEA EAX,[ESP + 0x3c]                ; 004aca59
    FLD float ptr [EAX]                 ; 004aca5d
    FMUL float ptr [0x005fff98]         ; 004aca5f | DAT_005fff98
    FISTP dword ptr [EBX]               ; 004aca65
    FLD float ptr [EAX + 0x4]           ; 004aca67
    FMUL float ptr [0x005fff98]         ; 004aca6a | DAT_005fff98
    FISTP dword ptr [EBX + 0x4]         ; 004aca70
    FLD float ptr [EAX + 0x8]           ; 004aca73
    FMUL float ptr [0x005fff98]         ; 004aca76 | DAT_005fff98
    FISTP dword ptr [EBX + 0x8]         ; 004aca7c
    PUSH 0x4                            ; 004aca7f
    PUSH 0x0                            ; 004aca81
    LEA EAX,[ESP + 0x2c]                ; 004aca83
    PUSH EAX                            ; 004aca87
    LEA EAX,[ESP + 0x18]                ; 004aca88
    PUSH EAX                            ; 004aca8c
    MOV ECX,dword ptr [0x00622c18]      ; 004aca8d | g_CDemonSetPtr
    PUSH ECX                            ; 004aca93 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004aca94
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004aca99
    JMP 0x004ac9ba                      ; 004aca9c
        ;   XREF to: 004ac9ba (UNCONDITIONAL_JUMP)  ; LAB_004ac9ba
    PUSH ESI                            ; 004acaa1
        ;   Label: LAB_004acaa1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004acaa2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004acaa7
    MOV EBP,dword ptr [0x00612560]      ; 004acaaa | DAT_00612560
    PUSH EBP                            ; 004acab0 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004acab1
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004acab6
    ADD ESP,0x6c                        ; 004acab9
    POP EBP                             ; 004acabc
    POP EDI                             ; 004acabd
    POP ESI                             ; 004acabe
    POP EBX                             ; 004acabf
    RET                                 ; 004acac0

