; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mobster.cpp_FUN_00525340()
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_006396dc
;   TerminatedCString s_Bip01_L_ForeArm_006396e7
;   TerminatedCString s_Bip01_R_ForeArm_006396f7
;   TerminatedCString s_Bip01_L_UpperArm_00639707
;   TerminatedCString s_Bip01_R_UpperArm_00639718
;   TerminatedCString s_Bip01_L_Foot_00639729
;   TerminatedCString s_Bip01_R_Foot_00639736
;   TerminatedCString s_Bip01_L_Hand_00639743
;   TerminatedCString s_Bip01_R_Hand_00639750
;   TerminatedCString s_Bip01_Spine_0063975d
;   TerminatedCString s_Bip01_Spine1_00639769
;   TerminatedCString s_Bip01_Spine2_00639776
;   TerminatedCString s_Bip01_Head_00639783
;   TerminatedCString s_Bip01_L_UpperArm_0063978e
;   TerminatedCString s_Bip01_R_UpperArm_0063979f
;   ... and 25 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525340
        ;   Label: core_mobster.cpp_FUN_00525340
    PUSH ESI                            ; 00525341
    MOV EBX,dword ptr [ESP + 0xc]       ; 00525342
    PUSH EDI                            ; 00525346
    LEA EDI,[EBX + 0x158]               ; 00525347
    PUSH EDI                            ; 0052534d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0052534e
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00525353
    PUSH EDI                            ; 00525356
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00525357
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052535c
    PUSH 0x1                            ; 0052535f
    PUSH 0x6396dc                       ; 00525361 | = "Bip01 Head"
    PUSH EAX                            ; 00525366
    MOV ESI,EAX                         ; 00525367
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525369
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0052536e
    PUSH 0x1                            ; 00525371
    PUSH 0x6396e7                       ; 00525373 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00525378
    MOV [0x02f37ec8],EAX                ; 00525379 | DAT_02f37ec8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0052537e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525383
    PUSH 0x1                            ; 00525386
    PUSH 0x6396f7                       ; 00525388 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0052538d
    MOV [0x02f37ed4],EAX                ; 0052538e | DAT_02f37ed4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525393
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525398
    PUSH 0x1                            ; 0052539b
    PUSH 0x639707                       ; 0052539d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005253a2
    MOV [0x02f37ed8],EAX                ; 005253a3 | DAT_02f37ed8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005253a8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005253ad
    PUSH 0x1                            ; 005253b0
    PUSH 0x639718                       ; 005253b2 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005253b7
    MOV [0x02f37edc],EAX                ; 005253b8 | DAT_02f37edc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005253bd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005253c2
    PUSH 0x1                            ; 005253c5
    PUSH 0x639729                       ; 005253c7 | = "Bip01 L Foot"
    PUSH ESI                            ; 005253cc
    MOV [0x02f37ee0],EAX                ; 005253cd | DAT_02f37ee0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005253d2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005253d7
    PUSH 0x1                            ; 005253da
    PUSH 0x639736                       ; 005253dc | = "Bip01 R Foot"
    PUSH ESI                            ; 005253e1
    MOV [0x02f37ee4],EAX                ; 005253e2 | DAT_02f37ee4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005253e7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005253ec
    PUSH 0x1                            ; 005253ef
    PUSH 0x639743                       ; 005253f1 | = "Bip01 L Hand"
    PUSH ESI                            ; 005253f6
    MOV [0x02f37ee8],EAX                ; 005253f7 | DAT_02f37ee8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005253fc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525401
    PUSH 0x1                            ; 00525404
    PUSH 0x639750                       ; 00525406 | = "Bip01 R Hand"
    PUSH ESI                            ; 0052540b
    MOV [0x02f37ecc],EAX                ; 0052540c | DAT_02f37ecc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525411
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525416
    MOV [0x02f37ed0],EAX                ; 00525419 | DAT_02f37ed0
    PUSH 0x1                            ; 0052541e
    PUSH 0x63975d                       ; 00525420 | = "Bip01 Spine"
    PUSH ESI                            ; 00525425
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525426
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0052542b
    PUSH 0x1                            ; 0052542e
    PUSH 0x639769                       ; 00525430 | = "Bip01 Spine1"
    PUSH ESI                            ; 00525435
    MOV [0x02f37eec],EAX                ; 00525436 | DAT_02f37eec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0052543b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525440
    PUSH 0x1                            ; 00525443
    PUSH 0x639776                       ; 00525445 | = "Bip01 Spine2"
    PUSH ESI                            ; 0052544a
    MOV [0x02f37ef0],EAX                ; 0052544b | DAT_02f37ef0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525450
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525455
    PUSH 0x1                            ; 00525458
    PUSH 0x639783                       ; 0052545a | = "Bip01 Head"
    PUSH ESI                            ; 0052545f
    MOV [0x02f37ef4],EAX                ; 00525460 | DAT_02f37ef4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00525465
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0052546a
    PUSH 0x1                            ; 0052546d
    PUSH 0x63978e                       ; 0052546f | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00525474
    MOV [0x02f37ec8],EAX                ; 00525475 | DAT_02f37ec8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0052547a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0052547f
    PUSH 0x1                            ; 00525482
    PUSH 0x63979f                       ; 00525484 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00525489
    MOV [0x02f37edc],EAX                ; 0052548a | DAT_02f37edc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0052548f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00525494
    PUSH 0x1                            ; 00525497
    PUSH 0x6397b0                       ; 00525499 | = "Bip01 Spine"
    PUSH ESI                            ; 0052549e
    MOV [0x02f37ee0],EAX                ; 0052549f | DAT_02f37ee0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005254a4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005254a9
    PUSH 0x1                            ; 005254ac
    PUSH 0x6397bc                       ; 005254ae | = "Bip01 Spine2"
    PUSH ESI                            ; 005254b3
    MOV [0x02f37eec],EAX                ; 005254b4 | DAT_02f37eec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005254b9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005254be
    PUSH EDI                            ; 005254c1
    MOV [0x02f37ef4],EAX                ; 005254c2 | DAT_02f37ef4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005254c7
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005254cc
    PUSH 0x1                            ; 005254cf
    PUSH 0x6397c9                       ; 005254d1 | = "larm01"
    PUSH EAX                            ; 005254d6
    MOV ESI,EAX                         ; 005254d7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005254d9
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005254de
    MOV dword ptr [EBX + 0xbf60],EAX    ; 005254e1
    POP EDI                             ; 005254e7
    PUSH 0x1                            ; 005254e8
    PUSH 0x6397d0                       ; 005254ea | = "l4arm01"
    PUSH ESI                            ; 005254ef
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005254f0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005254f5
    PUSH 0x1                            ; 005254f8
    PUSH 0x6397d8                       ; 005254fa | = "rarm01"
    PUSH ESI                            ; 005254ff
    MOV dword ptr [EBX + 0xbf64],EAX    ; 00525500
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00525506
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0052550b
    PUSH 0x1                            ; 0052550e
    PUSH 0x6397df                       ; 00525510 | = "r4arm01"
    PUSH ESI                            ; 00525515
    MOV dword ptr [EBX + 0xbf68],EAX    ; 00525516
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0052551c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00525521
    PUSH 0x1                            ; 00525524
    PUSH 0x6397e7                       ; 00525526 | = "rthigh01"
    PUSH ESI                            ; 0052552b
    MOV dword ptr [EBX + 0xbf6c],EAX    ; 0052552c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00525532
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00525537
    PUSH 0x1                            ; 0052553a
    PUSH 0x6397f0                       ; 0052553c | = "rshin01"
    PUSH ESI                            ; 00525541
    MOV dword ptr [EBX + 0xbf70],EAX    ; 00525542
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00525548
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0052554d
    PUSH 0x1                            ; 00525550
    PUSH 0x6397f8                       ; 00525552 | = "lthigh01"
    PUSH ESI                            ; 00525557
    MOV dword ptr [EBX + 0xbf74],EAX    ; 00525558
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0052555e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00525563
    PUSH 0x1                            ; 00525566
    PUSH 0x639801                       ; 00525568 | = "lshin01"
    PUSH ESI                            ; 0052556d
    MOV dword ptr [EBX + 0xbf78],EAX    ; 0052556e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00525574
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00525579
    PUSH 0x1                            ; 0052557c
    PUSH 0x639809                       ; 0052557e | = "waist01"
    PUSH ESI                            ; 00525583
    MOV dword ptr [EBX + 0xbf7c],EAX    ; 00525584
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0052558a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0052558f
    PUSH 0x1                            ; 00525592
    PUSH 0x639811                       ; 00525594 | = "torso01"
    PUSH ESI                            ; 00525599
    MOV dword ptr [EBX + 0xbf80],EAX    ; 0052559a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005255a0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005255a5
    MOV dword ptr [EBX + 0xbf84],EAX    ; 005255a8
    PUSH 0x1                            ; 005255ae
    PUSH 0x639819                       ; 005255b0 | = "head01"
    PUSH ESI                            ; 005255b5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005255b6
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbf88],EAX    ; 005255bb
    MOV EAX,[0x02f37ecc]                ; 005255c1 | DAT_02f37ecc
    MOV dword ptr [EBX + 0x24ac],EAX    ; 005255c6
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 005255cc
    MOV dword ptr [EBX + 0x24b0],EAX    ; 005255d2
    MOV EAX,[0x02f37ed0]                ; 005255d8 | DAT_02f37ed0
    MOV dword ptr [EBX + 0x24f0],EAX    ; 005255dd
    ADD ESP,0xc                         ; 005255e3
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 005255e6
    PUSH EBX                            ; 005255ec
    MOV dword ptr [EBX + 0x24f4],EAX    ; 005255ed
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 005255f3
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xbf8c],0x0    ; 005255f8
    ADD ESP,0x4                         ; 00525602
    MOV EDX,dword ptr [EBX + 0xbedc]    ; 00525605
    MOV dword ptr [EBX + 0xbf90],0x0    ; 0052560b
    TEST EDX,EDX                        ; 00525615
    JNZ 0x00525644                      ; 00525617
        ;   XREF to: 00525644 (CONDITIONAL_JUMP)  ; LAB_00525644
    MOV dword ptr [EBX + 0xbf54],0x0    ; 00525619
        ;   Label: LAB_00525619
    MOV dword ptr [EBX + 0xbf58],0x0    ; 00525623
    MOV dword ptr [EBX + 0xbf5c],0x0    ; 0052562d
    MOV dword ptr [EBX + 0xbf50],0x0    ; 00525637
    POP ESI                             ; 00525641
    POP EBX                             ; 00525642
    RET                                 ; 00525643
    MOV dword ptr [EBX + 0xbeb8],0x1    ; 00525644
        ;   Label: LAB_00525644
    JMP 0x00525619                      ; 0052564e
        ;   XREF to: 00525619 (UNCONDITIONAL_JUMP)  ; LAB_00525619

