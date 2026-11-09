; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00570250(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_svetlanax_dfm_005ec182
;   TerminatedCString s_svetlana_dfm_005ec190
;   TerminatedCString s_Bip01_head_005ec19d
;   TerminatedCString s_Bip01_L_Clavicle_005ec1a8
;   TerminatedCString s_Bip01_R_Clavicle_005ec1b9
;   TerminatedCString s_Bip01_L_UpperArm_005ec1ca
;   TerminatedCString s_Bip01_R_UpperArm_005ec1db
;   TerminatedCString s_Bip01_L_ForeArm_005ec1ec
;   TerminatedCString s_Bip01_R_ForeArm_005ec1fc
;   TerminatedCString s_Bip01_L_Foot_005ec20c
;   TerminatedCString s_Bip01_R_Foot_005ec219
;   TerminatedCString s_Bip01_L_Thigh_005ec226
;   TerminatedCString s_Bip01_R_Thigh_005ec234
;   TerminatedCString s_Bip01_L_Calf_005ec242
;   TerminatedCString s_Bip01_R_Calf_005ec24f
;   ... and 31 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_005adeb0
;   core_cloth.cpp_FUN_005ae680
;   core_hero.cpp_FUN_004ce4a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_FUN_00540e80
;   core_skeleton.cpp_FUN_00543100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570250
        ;   Label: core_svetlana.cpp_FUN_00570250
    PUSH ESI                            ; 00570251
    PUSH EDI                            ; 00570252
    PUSH EBP                            ; 00570253
    SUB ESP,0x4                         ; 00570254
    MOV ESI,dword ptr [ESP + 0x18]      ; 00570257
    MOV EBX,dword ptr [0x00616494]      ; 0057025b | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 00570261 | g_CGameInstance.field24_0x18
    LEA EAX,[ESI + 0x2b4]               ; 00570264
    TEST EDX,EDX                        ; 0057026a
    JZ 0x005704d2                       ; 0057026c
        ;   XREF to: 005704d2 (CONDITIONAL_JUMP)  ; LAB_005704d2
    PUSH 0x5ec190                       ; 00570272 | = "svetlana.dfm"
    PUSH EAX                            ; 00570277
        ;   Label: LAB_00570277
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00570278
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0057027d
    PUSH ESI                            ; 00570280
    CALL core_hero.cpp_FUN_004ce4a0     ; 00570281
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00570286
    LEA EDI,[ESI + 0x2b4]               ; 00570289
    PUSH EDI                            ; 0057028f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00570290
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00570295
    PUSH 0x1                            ; 00570298
    PUSH 0x5ec19d                       ; 0057029a | = "Bip01 head"
    PUSH EAX                            ; 0057029f
    MOV EBX,EAX                         ; 005702a0
    CALL core_skeleton.cpp_FUN_00540e80 ; 005702a2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005702a7
    PUSH 0x1                            ; 005702aa
    PUSH 0x5ec1a8                       ; 005702ac | = "Bip01 L Clavicle"
    PUSH EBX                            ; 005702b1
    MOV [0x0264bf38],EAX                ; 005702b2 | DAT_0264bf38
    CALL core_skeleton.cpp_FUN_00540e80 ; 005702b7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005702bc
    PUSH 0x1                            ; 005702bf
    PUSH 0x5ec1b9                       ; 005702c1 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005702c6
    MOV [0x0264bf3c],EAX                ; 005702c7 | DAT_0264bf3c
    CALL core_skeleton.cpp_FUN_00540e80 ; 005702cc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005702d1
    PUSH 0x1                            ; 005702d4
    PUSH 0x5ec1ca                       ; 005702d6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005702db
    MOV [0x0264bf40],EAX                ; 005702dc | DAT_0264bf40
    CALL core_skeleton.cpp_FUN_00540e80 ; 005702e1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005702e6
    PUSH 0x1                            ; 005702e9
    PUSH 0x5ec1db                       ; 005702eb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005702f0
    MOV [0x0264bf44],EAX                ; 005702f1 | DAT_0264bf44
    CALL core_skeleton.cpp_FUN_00540e80 ; 005702f6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005702fb
    PUSH 0x1                            ; 005702fe
    PUSH 0x5ec1ec                       ; 00570300 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00570305
    MOV [0x0264bf48],EAX                ; 00570306 | DAT_0264bf48
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057030b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00570310
    PUSH 0x1                            ; 00570313
    PUSH 0x5ec1fc                       ; 00570315 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0057031a
    MOV [0x0264bf4c],EAX                ; 0057031b | DAT_0264bf4c
    CALL core_skeleton.cpp_FUN_00540e80 ; 00570320
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00570325
    PUSH 0x1                            ; 00570328
    PUSH 0x5ec20c                       ; 0057032a | = "Bip01 L Foot"
    PUSH EBX                            ; 0057032f
    MOV [0x0264bf50],EAX                ; 00570330 | DAT_0264bf50
    CALL core_skeleton.cpp_FUN_00540e80 ; 00570335
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0057033a
    PUSH 0x1                            ; 0057033d
    PUSH 0x5ec219                       ; 0057033f | = "Bip01 R Foot"
    PUSH EBX                            ; 00570344
    MOV [0x0264bf54],EAX                ; 00570345 | DAT_0264bf54
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057034a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0057034f
    MOV [0x0264bf58],EAX                ; 00570352 | DAT_0264bf58
    PUSH 0x1                            ; 00570357
    PUSH 0x5ec226                       ; 00570359 | = "Bip01 L Thigh"
    PUSH EBX                            ; 0057035e
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057035f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00570364
    PUSH 0x1                            ; 00570367
    PUSH 0x5ec234                       ; 00570369 | = "Bip01 R Thigh"
    PUSH EBX                            ; 0057036e
    MOV [0x0264bf5c],EAX                ; 0057036f | DAT_0264bf5c
    CALL core_skeleton.cpp_FUN_00540e80 ; 00570374
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00570379
    PUSH 0x1                            ; 0057037c
    PUSH 0x5ec242                       ; 0057037e | = "Bip01 L Calf"
    PUSH EBX                            ; 00570383
    MOV [0x0264bf60],EAX                ; 00570384 | DAT_0264bf60
    CALL core_skeleton.cpp_FUN_00540e80 ; 00570389
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0057038e
    PUSH 0x1                            ; 00570391
    PUSH 0x5ec24f                       ; 00570393 | = "Bip01 R Calf"
    PUSH EBX                            ; 00570398
    MOV [0x0264bf64],EAX                ; 00570399 | DAT_0264bf64
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057039e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005703a3
    PUSH 0x1                            ; 005703a6
    PUSH 0x5ec25c                       ; 005703a8 | = "Bip01 L Hand"
    PUSH EBX                            ; 005703ad
    MOV [0x0264bf68],EAX                ; 005703ae | DAT_0264bf68
    CALL core_skeleton.cpp_FUN_00540e80 ; 005703b3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005703b8
    PUSH 0x1                            ; 005703bb
    PUSH 0x5ec269                       ; 005703bd | = "Bip01 R Hand"
    PUSH EBX                            ; 005703c2
    MOV [0x0264bf6c],EAX                ; 005703c3 | DAT_0264bf6c
    CALL core_skeleton.cpp_FUN_00540e80 ; 005703c8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005703cd
    PUSH 0x1                            ; 005703d0
    PUSH 0x5ec276                       ; 005703d2 | = "Bip01 Spine2"
    PUSH EBX                            ; 005703d7
    MOV [0x0264bf70],EAX                ; 005703d8 | DAT_0264bf70
    CALL core_skeleton.cpp_FUN_00540e80 ; 005703dd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005703e2
    PUSH 0x1                            ; 005703e5
    PUSH 0x5ec283                       ; 005703e7 | = "Bip01 Spine"
    PUSH EBX                            ; 005703ec
    MOV [0x0264bf74],EAX                ; 005703ed | DAT_0264bf74
    CALL core_skeleton.cpp_FUN_00540e80 ; 005703f2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005703f7
    PUSH 0x1                            ; 005703fa
    PUSH 0x5ec28f                       ; 005703fc | = "Bipblade01"
    PUSH EBX                            ; 00570401
    MOV [0x0264bf78],EAX                ; 00570402 | DAT_0264bf78
    CALL core_skeleton.cpp_FUN_00540e80 ; 00570407
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0057040c
    PUSH 0x1                            ; 0057040f
    PUSH 0x5ec29a                       ; 00570411 | = "BipR14"
    PUSH EBX                            ; 00570416
    MOV [0x0264bf7c],EAX                ; 00570417 | DAT_0264bf7c
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057041c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00570421
    MOV [0x0264bf80],EAX                ; 00570424 | DAT_0264bf80
    PUSH 0x5ec2a1                       ; 00570429 | = "svetcape.cth"
    LEA EAX,[ESI + 0x25648]             ; 0057042e
    PUSH EAX                            ; 00570434
    MOV dword ptr [ESI + 0x25640],0x0   ; 00570435
    MOV dword ptr [ESP + 0x8],EAX       ; 0057043f
    CALL core_cloth.cpp_CCloth_load_FUN_005adeb0 ; 00570443
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_005adeb0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00570448
    PUSH EDI                            ; 0057044b
    LEA EBP,[ESI + 0x30]                ; 0057044c
    PUSH EBP                            ; 0057044f
    LEA EBX,[ESI + 0x20]                ; 00570450
    PUSH EBX                            ; 00570453
    MOV EAX,dword ptr [ESP + 0xc]       ; 00570454
    PUSH EAX                            ; 00570458
    CALL core_cloth.cpp_FUN_005ae680    ; 00570459
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005ae680(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0057045e
    PUSH 0x5ec2ae                       ; 00570461 | = "svethair.cth"
    LEA EAX,[ESI + 0x60178]             ; 00570466
    PUSH EAX                            ; 0057046c
    MOV dword ptr [ESP + 0x8],EAX       ; 0057046d
    CALL core_cloth.cpp_CCloth_load_FUN_005adeb0 ; 00570471
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_005adeb0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00570476
    PUSH EDI                            ; 00570479
    PUSH EBP                            ; 0057047a
    PUSH EBX                            ; 0057047b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057047c
    PUSH ECX                            ; 00570480
    CALL core_cloth.cpp_FUN_005ae680    ; 00570481
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005ae680(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 00570486
    PUSH EDI                            ; 00570489
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0057048a
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057048f
    PUSH 0x1                            ; 00570492
    PUSH 0x5ec2bb                       ; 00570494 | = "lblade01"
    PUSH EAX                            ; 00570499
    MOV EBX,EAX                         ; 0057049a
    CALL core_skeleton.cpp_FUN_00543100 ; 0057049c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005704a1
    PUSH 0x1                            ; 005704a4
    PUSH 0x5ec2c4                       ; 005704a6 | = "rblade02"
    PUSH EBX                            ; 005704ab
    MOV dword ptr [ESI + 0x9acbc],EAX   ; 005704ac
    CALL core_skeleton.cpp_FUN_00543100 ; 005704b2
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0x9aca8],0x0   ; 005704b7
    ADD ESP,0xc                         ; 005704c1
    MOV dword ptr [ESI + 0x9acc0],EAX   ; 005704c4
    ADD ESP,0x4                         ; 005704ca
    POP EBP                             ; 005704cd
    POP EDI                             ; 005704ce
    POP ESI                             ; 005704cf
    POP EBX                             ; 005704d0
    RET                                 ; 005704d1
    PUSH 0x5ec182                       ; 005704d2 | = "svetlanax.dfm"
        ;   Label: LAB_005704d2
    JMP 0x00570277                      ; 005704d7
        ;   XREF to: 00570277 (UNCONDITIONAL_JUMP)  ; LAB_00570277

