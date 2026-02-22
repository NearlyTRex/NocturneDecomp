; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_setup_FUN_00415150(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00615478
;   TerminatedCString s_Bip01_L_ForeArm_00615483
;   TerminatedCString s_Bip01_R_ForeArm_00615493
;   TerminatedCString s_Bip01_L_UpperArm_006154a3
;   TerminatedCString s_Bip01_R_UpperArm_006154b4
;   TerminatedCString s_Bip01_L_Foot_006154c5
;   TerminatedCString s_Bip01_R_Foot_006154d2
;   TerminatedCString s_Bip01_L_Hand_006154df
;   TerminatedCString s_Bip01_R_Hand_006154ec
;   TerminatedCString s_Bip01_Spine_006154f9
;   TerminatedCString s_Bip01_Spine1_00615505
;   TerminatedCString s_Bip01_Spine2_00615512
;   TerminatedCString s_Bip01_Head_0061551f
;   TerminatedCString s_Bip01_L_UpperArm_0061552a
;   TerminatedCString s_Bip01_R_UpperArm_0061553b
;   ... and 28 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415150
        ;   Label: core_batcreat.cpp_CBatCreature_setup_FUN_00415150
    PUSH ESI                            ; 00415151
    MOV EBX,dword ptr [ESP + 0xc]       ; 00415152
    PUSH EDI                            ; 00415156
    PUSH EBX                            ; 00415157
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 00415158
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041515d
    LEA EDI,[EBX + 0x158]               ; 00415160
    PUSH EDI                            ; 00415166
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00415167
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041516c
    PUSH EDI                            ; 0041516f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00415170
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00415175
    PUSH 0x1                            ; 00415178
    PUSH 0x615478                       ; 0041517a | = "Bip01 Head"
    PUSH EAX                            ; 0041517f
    MOV ESI,EAX                         ; 00415180
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415182
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415187
    PUSH 0x1                            ; 0041518a
    PUSH 0x615483                       ; 0041518c | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00415191
    MOV [0x0082274c],EAX                ; 00415192 | INT_0082274c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415197
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041519c
    PUSH 0x1                            ; 0041519f
    PUSH 0x615493                       ; 004151a1 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004151a6
    MOV [0x00822758],EAX                ; 004151a7 | INT_00822758
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004151ac
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004151b1
    PUSH 0x1                            ; 004151b4
    PUSH 0x6154a3                       ; 004151b6 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004151bb
    MOV [0x0082275c],EAX                ; 004151bc | INT_0082275c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004151c1
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004151c6
    PUSH 0x1                            ; 004151c9
    PUSH 0x6154b4                       ; 004151cb | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004151d0
    MOV [0x00822760],EAX                ; 004151d1 | INT_00822760
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004151d6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004151db
    PUSH 0x1                            ; 004151de
    PUSH 0x6154c5                       ; 004151e0 | = "Bip01 L Foot"
    PUSH ESI                            ; 004151e5
    MOV [0x00822764],EAX                ; 004151e6 | INT_00822764
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004151eb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004151f0
    PUSH 0x1                            ; 004151f3
    PUSH 0x6154d2                       ; 004151f5 | = "Bip01 R Foot"
    PUSH ESI                            ; 004151fa
    MOV [0x00822768],EAX                ; 004151fb | INT_00822768
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415200
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415205
    PUSH 0x1                            ; 00415208
    PUSH 0x6154df                       ; 0041520a | = "Bip01 L Hand"
    PUSH ESI                            ; 0041520f
    MOV [0x0082276c],EAX                ; 00415210 | INT_0082276c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415215
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041521a
    MOV [0x00822750],EAX                ; 0041521d | INT_00822750
    PUSH 0x1                            ; 00415222
    PUSH 0x6154ec                       ; 00415224 | = "Bip01 R Hand"
    PUSH ESI                            ; 00415229
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041522a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041522f
    PUSH 0x1                            ; 00415232
    PUSH 0x6154f9                       ; 00415234 | = "Bip01 Spine"
    PUSH ESI                            ; 00415239
    MOV [0x00822754],EAX                ; 0041523a | DAT_00822754
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041523f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415244
    PUSH 0x1                            ; 00415247
    PUSH 0x615505                       ; 00415249 | = "Bip01 Spine1"
    PUSH ESI                            ; 0041524e
    MOV [0x00822770],EAX                ; 0041524f | INT_00822770
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415254
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415259
    PUSH 0x1                            ; 0041525c
    PUSH 0x615512                       ; 0041525e | = "Bip01 Spine2"
    PUSH ESI                            ; 00415263
    MOV [0x00822774],EAX                ; 00415264 | INT_00822774
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415269
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041526e
    PUSH 0x1                            ; 00415271
    PUSH 0x61551f                       ; 00415273 | = "Bip01 Head"
    PUSH ESI                            ; 00415278
    MOV [0x00822778],EAX                ; 00415279 | INT_00822778
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041527e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415283
    PUSH 0x1                            ; 00415286
    PUSH 0x61552a                       ; 00415288 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041528d
    MOV [0x0082274c],EAX                ; 0041528e | INT_0082274c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00415293
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00415298
    PUSH 0x1                            ; 0041529b
    PUSH 0x61553b                       ; 0041529d | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004152a2
    MOV [0x00822760],EAX                ; 004152a3 | INT_00822760
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004152a8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004152ad
    PUSH 0x1                            ; 004152b0
    PUSH 0x61554c                       ; 004152b2 | = "Bip01 Spine"
    PUSH ESI                            ; 004152b7
    MOV [0x00822764],EAX                ; 004152b8 | INT_00822764
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004152bd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004152c2
    PUSH 0x1                            ; 004152c5
    PUSH 0x615558                       ; 004152c7 | = "Bip01 Spine2"
    PUSH ESI                            ; 004152cc
    MOV [0x00822770],EAX                ; 004152cd | INT_00822770
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004152d2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004152d7
    PUSH EDI                            ; 004152da
    MOV [0x00822778],EAX                ; 004152db | INT_00822778
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004152e0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 004152e5
    ADD ESP,0x4                         ; 004152e7
    POP EDI                             ; 004152ea
    PUSH 0x1                            ; 004152eb
    PUSH 0x615565                       ; 004152ed | = "head01"
    PUSH EAX                            ; 004152f2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004152f3
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004152f8
    PUSH 0x1                            ; 004152fb
    PUSH 0x61556c                       ; 004152fd | = "torso01"
    PUSH ESI                            ; 00415302
    MOV dword ptr [EBX + 0xbebc],EAX    ; 00415303
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00415309
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041530e
    PUSH 0x1                            ; 00415311
    PUSH 0x615574                       ; 00415313 | = "ass01"
    PUSH ESI                            ; 00415318
    MOV dword ptr [EBX + 0xbec0],EAX    ; 00415319
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041531f
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00415324
    PUSH 0x1                            ; 00415327
    PUSH 0x61557a                       ; 00415329 | = "tail01"
    PUSH ESI                            ; 0041532e
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0041532f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00415335
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041533a
    PUSH 0x1                            ; 0041533d
    PUSH 0x615581                       ; 0041533f | = "lthigh01"
    PUSH ESI                            ; 00415344
    MOV dword ptr [EBX + 0xbec8],EAX    ; 00415345
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041534b
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00415350
    PUSH 0x1                            ; 00415353
    PUSH 0x61558a                       ; 00415355 | = "lshin01"
    PUSH ESI                            ; 0041535a
    MOV dword ptr [EBX + 0xbecc],EAX    ; 0041535b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00415361
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00415366
    PUSH 0x1                            ; 00415369
    PUSH 0x615592                       ; 0041536b | = "rthigh01"
    PUSH ESI                            ; 00415370
    MOV dword ptr [EBX + 0xbed0],EAX    ; 00415371
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00415377
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041537c
    PUSH 0x1                            ; 0041537f
    PUSH 0x61559b                       ; 00415381 | = "rshin01"
    PUSH ESI                            ; 00415386
    MOV dword ptr [EBX + 0xbed4],EAX    ; 00415387
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041538d
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00415392
    PUSH 0x1                            ; 00415395
    PUSH 0x6155a3                       ; 00415397 | = "larm01"
    PUSH ESI                            ; 0041539c
    MOV dword ptr [EBX + 0xbed8],EAX    ; 0041539d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004153a3
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004153a8
    MOV dword ptr [EBX + 0xbedc],EAX    ; 004153ab
    PUSH 0x1                            ; 004153b1
    PUSH 0x6155aa                       ; 004153b3 | = "l4arm01"
    PUSH ESI                            ; 004153b8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004153b9
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004153be
    PUSH 0x1                            ; 004153c1
    PUSH 0x6155b2                       ; 004153c3 | = "rarm01"
    PUSH ESI                            ; 004153c8
    MOV dword ptr [EBX + 0xbee0],EAX    ; 004153c9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004153cf
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004153d4
    PUSH 0x1                            ; 004153d7
    PUSH 0x6155b9                       ; 004153d9 | = "r4arm01"
    PUSH ESI                            ; 004153de
    MOV dword ptr [EBX + 0xbee4],EAX    ; 004153df
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004153e5
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004153ea
    PUSH 0x1                            ; 004153ed
    PUSH 0x6155c1                       ; 004153ef | = "lwing"
    PUSH ESI                            ; 004153f4
    MOV dword ptr [EBX + 0xbee8],EAX    ; 004153f5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004153fb
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00415400
    PUSH 0x1                            ; 00415403
    PUSH 0x6155c7                       ; 00415405 | = "rwing"
    PUSH ESI                            ; 0041540a
    MOV dword ptr [EBX + 0xbeec],EAX    ; 0041540b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00415411
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbef4],0x0    ; 00415416
    MOV dword ptr [EBX + 0xbef8],0x0    ; 00415420
    MOV dword ptr [EBX + 0xbefc],0x0    ; 0041542a
    MOV dword ptr [EBX + 0xbf00],0x0    ; 00415434
    ADD ESP,0xc                         ; 0041543e
    MOV dword ptr [EBX + 0xbef0],EAX    ; 00415441
    POP ESI                             ; 00415447
    POP EBX                             ; 00415448
    RET                                 ; 00415449

