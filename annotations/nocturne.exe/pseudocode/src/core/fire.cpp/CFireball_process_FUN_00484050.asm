; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CFireball_process_FUN_00484050(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_particle.cpp_CParticle_process_FUN_004ef120
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484050
        ;   Label: core_fire.cpp_CFireball_process_FUN_00484050
    PUSH ESI                            ; 00484051
    PUSH EDI                            ; 00484052
    PUSH EBP                            ; 00484053
    SUB ESP,0x44                        ; 00484054
    MOV EBP,dword ptr [ESP + 0x58]      ; 00484057
    MOV EDX,dword ptr [EBP + 0x40]      ; 0048405b
    TEST EDX,EDX                        ; 0048405e
    JNZ 0x00484205                      ; 00484060
        ;   XREF to: 00484205 (CONDITIONAL_JUMP)  ; LAB_00484205
    MOV dword ptr [EBP + 0x40],0x1      ; 00484066
    MOV dword ptr [EBP + 0x48],EDX      ; 0048406d
    PUSH EBP                            ; 00484070
        ;   Label: LAB_00484070
    CALL core_particle.cpp_CParticle_process_FUN_004ef120 ; 00484071
        ;   XREF to: 004ef120 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_process_FUN_004ef120()
    MOV EAX,[0x01bd1d80]                ; 00484076 | DAT_01bd1d80
    MOV EDX,EAX                         ; 0048407b
    SAR EDX,0x1f                        ; 0048407d
    SHL EDX,0x2                         ; 00484080
    SBB EAX,EDX                         ; 00484083
    SAR EAX,0x2                         ; 00484085
    MOV ESI,dword ptr [EBP + 0x4c]      ; 00484088
    ADD ESI,EAX                         ; 0048408b
    MOV EAX,[0x01bd1d80]                ; 0048408d | DAT_01bd1d80
    MOV EDX,EAX                         ; 00484092
    SAR EDX,0x1f                        ; 00484094
    SUB EAX,EDX                         ; 00484097
    SAR EAX,0x1                         ; 00484099
    ADD ESP,0x4                         ; 0048409b
    MOV EDI,dword ptr [EBP + 0x50]      ; 0048409e
    MOV dword ptr [EBP + 0x4c],ESI      ; 004840a1
    ADD EDI,EAX                         ; 004840a4
    MOV EAX,dword ptr [EBP + 0x44]      ; 004840a6
    MOV dword ptr [EBP + 0x50],EDI      ; 004840a9
    TEST EAX,EAX                        ; 004840ac
    JNZ 0x004841d2                      ; 004840ae
        ;   XREF to: 004841d2 (CONDITIONAL_JUMP)  ; LAB_004841d2
    PUSH EBP                            ; 004840b4
    LEA EBX,[EBP + 0x5c]                ; 004840b5
    PUSH EBX                            ; 004840b8
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 004840b9
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90()
    MOV EDX,dword ptr [EBP + 0x38]      ; 004840be
    MOV EAX,EDX                         ; 004840c1
    MOV dword ptr [EBX + 0x3c],EDX      ; 004840c3
    SAR EDX,0x1f                        ; 004840c6
    SHL EDX,0x8                         ; 004840c9
    SBB EAX,EDX                         ; 004840cc
    SAR EAX,0x8                         ; 004840ce
    MOV EDX,EAX                         ; 004840d1
    SAR EDX,0x1f                        ; 004840d3
    SHL EDX,0x2                         ; 004840d6
    SBB EAX,EDX                         ; 004840d9
    SAR EAX,0x2                         ; 004840db
    ADD ESP,0x8                         ; 004840de
    PUSH 0x41000000                     ; 004840e1
    PUSH EBX                            ; 004840e6
    MOV byte ptr [EBX + 0x1c],AL        ; 004840e7
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 004840ea
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0()
    ADD ESP,0x8                         ; 004840ef
    PUSH EBX                            ; 004840f2
    MOV EDX,dword ptr [0x005be368]      ; 004840f3 | DAT_005be368
    PUSH EDX                            ; 004840f9 | DAT_01e57284
    MOV dword ptr [EBX + 0x20],0x0      ; 004840fa
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 00484101
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0()
    MOV EAX,[0x01bd1d80]                ; 00484106 | DAT_01bd1d80
    MOV ECX,dword ptr [EBP + 0x48]      ; 0048410b
    ADD ECX,EAX                         ; 0048410e
    ADD ESP,0x8                         ; 00484110
    MOV dword ptr [EBP + 0x48],ECX      ; 00484113
    CMP ECX,0x1000                      ; 00484116
    JLE 0x004841d2                      ; 0048411c
        ;   XREF to: 004841d2 (CONDITIONAL_JUMP)  ; LAB_004841d2
    PUSH 0xffff                         ; 00484122
    PUSH 0x0                            ; 00484127
    PUSH 0x40000000                     ; 00484129
    PUSH EBP                            ; 0048412e
    MOV ESI,dword ptr [0x005b80f0]      ; 0048412f | DAT_005b80f0
    LEA EDI,[ECX + 0xfffff000]          ; 00484135
    PUSH ESI                            ; 0048413b
    MOV dword ptr [EBP + 0x48],EDI      ; 0048413c
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 0048413f
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0()
    ADD ESP,0x14                        ; 00484144
    PUSH 0xffff                         ; 00484147
    PUSH 0x0                            ; 0048414c
    PUSH 0x10000                        ; 0048414e
    PUSH 0x20000                        ; 00484153
    PUSH 0x0                            ; 00484158
    PUSH EBP                            ; 0048415a
    MOV EAX,[0x005b80f0]                ; 0048415b | DAT_005b80f0
    PUSH EAX                            ; 00484160
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00484161
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00484166
    PUSH 0xffff                         ; 00484169
    PUSH 0x0                            ; 0048416e
    PUSH 0x10000                        ; 00484170
    PUSH 0x20000                        ; 00484175
    PUSH 0x0                            ; 0048417a
    PUSH EBP                            ; 0048417c
    MOV EDX,dword ptr [0x005b80f0]      ; 0048417d | DAT_005b80f0
    PUSH EDX                            ; 00484183
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00484184
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00484189
    PUSH 0xffff                         ; 0048418c
    PUSH 0x0                            ; 00484191
    PUSH 0x10000                        ; 00484193
    PUSH 0x20000                        ; 00484198
    PUSH 0x0                            ; 0048419d
    PUSH EBP                            ; 0048419f
    MOV ECX,dword ptr [0x005b80f0]      ; 004841a0 | DAT_005b80f0
    PUSH ECX                            ; 004841a6
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004841a7
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 004841ac
    PUSH 0xffff                         ; 004841af
    PUSH 0x0                            ; 004841b4
    PUSH 0x10000                        ; 004841b6
    PUSH 0x20000                        ; 004841bb
    PUSH 0x0                            ; 004841c0
    PUSH EBP                            ; 004841c2
    MOV EBX,dword ptr [0x005b80f0]      ; 004841c3 | DAT_005b80f0
    PUSH EBX                            ; 004841c9
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004841ca
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 004841cf
    MOV ESI,dword ptr [EBP + 0x44]      ; 004841d2
        ;   Label: LAB_004841d2
    TEST ESI,ESI                        ; 004841d5
    JNZ 0x00484237                      ; 004841d7
        ;   XREF to: 00484237 (CONDITIONAL_JUMP)  ; LAB_00484237
    MOV EDI,0x41a00000                  ; 004841d9
    MOV ESI,0x40800000                  ; 004841de
    MOV dword ptr [ESP + 0x3c],EDI      ; 004841e3
    MOV dword ptr [ESP + 0x40],ESI      ; 004841e7
    XOR ESI,ESI                         ; 004841eb
        ;   Label: LAB_004841eb
    XOR EBX,EBX                         ; 004841ed
    MOV EDI,dword ptr [0x005be368]      ; 004841ef | DAT_005be368
        ;   Label: LAB_004841ef
    CMP EBX,dword ptr [EDI + 0x14ecb0]  ; 004841f5 | DAT_01fa5f34
    JL 0x00484264                       ; 004841fb
        ;   XREF to: 00484264 (CONDITIONAL_JUMP)  ; LAB_00484264
    ADD ESP,0x44                        ; 004841fd
    POP EBP                             ; 00484200
    POP EDI                             ; 00484201
    POP ESI                             ; 00484202
    POP EBX                             ; 00484203
    RET                                 ; 00484204
    MOV EDX,dword ptr [0x01bd1d80]      ; 00484205 | DAT_01bd1d80
        ;   Label: LAB_00484205
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0048420b
    IMUL EDX                            ; 0048420e
    SHRD EAX,EDX,0x10                   ; 00484210
    MOV ECX,dword ptr [EBP + 0x38]      ; 00484214
    SUB ECX,EAX                         ; 00484217
    MOV dword ptr [EBP + 0x38],ECX      ; 00484219
    TEST ECX,ECX                        ; 0048421c
    JGE 0x00484070                      ; 0048421e
        ;   XREF to: 00484070 (CONDITIONAL_JUMP)  ; LAB_00484070
    MOV dword ptr [EBP + 0x18],0x0      ; 00484224
    MOV dword ptr [EBP + 0x38],0x0      ; 0048422b
    JMP 0x00484070                      ; 00484232
        ;   XREF to: 00484070 (UNCONDITIONAL_JUMP)  ; LAB_00484070
    CMP ESI,0x2                         ; 00484237
        ;   Label: LAB_00484237
    JNZ 0x00484250                      ; 0048423a
        ;   XREF to: 00484250 (CONDITIONAL_JUMP)  ; LAB_00484250
    MOV EBX,0x40a00000                  ; 0048423c
    MOV ECX,0x3f800000                  ; 00484241
    MOV dword ptr [ESP + 0x3c],EBX      ; 00484246
    MOV dword ptr [ESP + 0x40],ECX      ; 0048424a
    JMP 0x004841eb                      ; 0048424e
        ;   XREF to: 004841eb (UNCONDITIONAL_JUMP)  ; LAB_004841eb
    MOV EDX,0x40a00000                  ; 00484250
        ;   Label: LAB_00484250
    MOV EAX,0x3f800000                  ; 00484255
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048425a
    MOV dword ptr [ESP + 0x40],EAX      ; 0048425e
    JMP 0x004841eb                      ; 00484262
        ;   XREF to: 004841eb (UNCONDITIONAL_JUMP)  ; LAB_004841eb
    MOV EAX,ESP                         ; 00484264
        ;   Label: LAB_00484264
    PUSH EAX                            ; 00484266
    MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14ecb4] ; 00484267 | DAT_01fa5f38
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0048426e
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00484273
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00484276
    MOV dword ptr [ESP + 0x4],EAX       ; 0048427a
    MOV EAX,ESP                         ; 0048427e
    PUSH EAX                            ; 00484280
    PUSH dword ptr [ESP + 0x44]         ; 00484281
    PUSH EBP                            ; 00484285
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00484286
    PUSH EDI                            ; 0048428c
    ADD ESI,0x4                         ; 0048428d
    INC EBX                             ; 00484290
    CALL dword ptr [EDX + 0xf8]         ; 00484291
    ADD ESP,0x10                        ; 00484297
    JMP 0x004841ef                      ; 0048429a
        ;   XREF to: 004841ef (UNCONDITIONAL_JUMP)  ; LAB_004841ef

