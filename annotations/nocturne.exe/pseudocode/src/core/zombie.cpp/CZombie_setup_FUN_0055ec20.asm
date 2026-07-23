; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_CZombie_setup_FUN_0055ec20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00598400
;   TerminatedCString s_Bip01_L_ForeArm_0059840b
;   TerminatedCString s_Bip01_R_ForeArm_0059841b
;   TerminatedCString s_Bip01_L_UpperArm_0059842b
;   TerminatedCString s_Bip01_R_UpperArm_0059843c
;   TerminatedCString s_Bip01_L_Foot_0059844d
;   TerminatedCString s_Bip01_R_Foot_0059845a
;   TerminatedCString s_Bip01_L_Hand_00598467
;   TerminatedCString s_Bip01_R_Hand_00598474
;   TerminatedCString s_Bip01_Spine_00598481
;   TerminatedCString s_Bip01_Spine2_0059848d
;   TerminatedCString s_larm01_0059849a
;   TerminatedCString s_l4arm01_005984a1
;   TerminatedCString s_rarm01_005984a9
;   TerminatedCString s_r4arm01_005984b0
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ec20
        ;   Label: core_zombie.cpp_CZombie_setup_FUN_0055ec20
    PUSH ESI                            ; 0055ec21
    PUSH EDI                            ; 0055ec22
    PUSH EBP                            ; 0055ec23
    MOV EBP,ESP                         ; 0055ec24
    SUB ESP,0x4                         ; 0055ec26
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055ec29
    LEA EDI,[EBX + 0x150]               ; 0055ec2c
    PUSH EDI                            ; 0055ec32
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 0055ec33
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 0055ec38
    PUSH EDI                            ; 0055ec3b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0055ec3c
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0055ec41
    PUSH 0x1                            ; 0055ec44
    PUSH 0x598400                       ; 0055ec46 | = "Bip01 Head"
    PUSH EAX                            ; 0055ec4b
    MOV ESI,EAX                         ; 0055ec4c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ec4e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ec53
    PUSH 0x1                            ; 0055ec56
    PUSH 0x59840b                       ; 0055ec58 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0055ec5d
    MOV dword ptr [EBX + 0xbdb4],EAX    ; 0055ec5e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ec64
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ec69
    PUSH 0x1                            ; 0055ec6c
    PUSH 0x59841b                       ; 0055ec6e | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0055ec73
    MOV dword ptr [EBX + 0xbdc0],EAX    ; 0055ec74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ec7a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ec7f
    PUSH 0x1                            ; 0055ec82
    PUSH 0x59842b                       ; 0055ec84 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0055ec89
    MOV dword ptr [EBX + 0xbdc4],EAX    ; 0055ec8a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ec90
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ec95
    PUSH 0x1                            ; 0055ec98
    PUSH 0x59843c                       ; 0055ec9a | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0055ec9f
    MOV dword ptr [EBX + 0xbdc8],EAX    ; 0055eca0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055eca6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ecab
    PUSH 0x1                            ; 0055ecae
    PUSH 0x59844d                       ; 0055ecb0 | = "Bip01 L Foot"
    PUSH ESI                            ; 0055ecb5
    MOV dword ptr [EBX + 0xbdcc],EAX    ; 0055ecb6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ecbc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ecc1
    PUSH 0x1                            ; 0055ecc4
    PUSH 0x59845a                       ; 0055ecc6 | = "Bip01 R Foot"
    PUSH ESI                            ; 0055eccb
    MOV dword ptr [EBX + 0xbdd0],EAX    ; 0055eccc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ecd2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ecd7
    PUSH 0x1                            ; 0055ecda
    PUSH 0x598467                       ; 0055ecdc | = "Bip01 L Hand"
    PUSH ESI                            ; 0055ece1
    MOV dword ptr [EBX + 0xbdd4],EAX    ; 0055ece2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ece8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055eced
    MOV dword ptr [EBX + 0xbdb8],EAX    ; 0055ecf0
    PUSH 0x1                            ; 0055ecf6
    PUSH 0x598474                       ; 0055ecf8 | = "Bip01 R Hand"
    PUSH ESI                            ; 0055ecfd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ecfe
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ed03
    PUSH 0x1                            ; 0055ed06
    PUSH 0x598481                       ; 0055ed08 | = "Bip01 Spine"
    PUSH ESI                            ; 0055ed0d
    MOV dword ptr [EBX + 0xbdbc],EAX    ; 0055ed0e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ed14
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ed19
    PUSH 0x1                            ; 0055ed1c
    PUSH 0x59848d                       ; 0055ed1e | = "Bip01 Spine2"
    PUSH ESI                            ; 0055ed23
    MOV dword ptr [EBX + 0xbdd8],EAX    ; 0055ed24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0055ed2a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0055ed2f
    PUSH EDI                            ; 0055ed32
    MOV dword ptr [EBX + 0xbddc],EAX    ; 0055ed33
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0055ed39
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0055ed3e
    PUSH 0x1                            ; 0055ed41
    PUSH 0x59849a                       ; 0055ed43 | = "larm01"
    PUSH EAX                            ; 0055ed48
    MOV ESI,EAX                         ; 0055ed49
    MOV EDI,EAX                         ; 0055ed4b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055ed4d
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055ed52
    PUSH 0x1                            ; 0055ed55
    PUSH 0x5984a1                       ; 0055ed57 | = "l4arm01"
    PUSH ESI                            ; 0055ed5c
    MOV dword ptr [EBX + 0xbde0],EAX    ; 0055ed5d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055ed63
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055ed68
    PUSH 0x1                            ; 0055ed6b
    PUSH 0x5984a9                       ; 0055ed6d | = "rarm01"
    PUSH ESI                            ; 0055ed72
    MOV dword ptr [EBX + 0xbde4],EAX    ; 0055ed73
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055ed79
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055ed7e
    PUSH 0x0                            ; 0055ed81
    PUSH 0x5984b0                       ; 0055ed83 | = "r4arm01"
    PUSH ESI                            ; 0055ed88
    MOV dword ptr [EBX + 0xbde8],EAX    ; 0055ed89
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055ed8f
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055ed94
    MOV dword ptr [EBX + 0xbdec],EAX    ; 0055ed97
    TEST EAX,EAX                        ; 0055ed9d
    JGE 0x0055edab                      ; 0055ed9f
        ;   XREF to: 0055edab (CONDITIONAL_JUMP)  ; LAB_0055edab
    MOV dword ptr [EBX + 0xbdec],0x1d   ; 0055eda1
    PUSH 0x0                            ; 0055edab
        ;   Label: LAB_0055edab
    PUSH 0x5984b8                       ; 0055edad | = "waist01"
    PUSH EDI                            ; 0055edb2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055edb3
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055edb8
    PUSH 0x1                            ; 0055edbb
    PUSH 0x5984c0                       ; 0055edbd | = "torso01"
    PUSH EDI                            ; 0055edc2
    MOV dword ptr [EBX + 0xbdf0],EAX    ; 0055edc3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055edc9
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055edce
    PUSH 0x1                            ; 0055edd1
    PUSH 0x5984c8                       ; 0055edd3 | = "head01"
    PUSH EDI                            ; 0055edd8
    MOV dword ptr [EBX + 0xbdf4],EAX    ; 0055edd9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0055eddf
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0055ede4
    PUSH 0x5984cf                       ; 0055ede7 | = "newzomb1.dfm"
    MOV dword ptr [EBX + 0xbdf8],EAX    ; 0055edec
    LEA EAX,[EBX + 0x23b0]              ; 0055edf2
    PUSH EAX                            ; 0055edf8
    MOV dword ptr [EBX + 0x2304],0x0    ; 0055edf9
    CALL crt_string.c__stricmp_FUN_00564520 ; 0055ee03
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055ee08
    TEST EAX,EAX                        ; 0055ee0b
    JNZ 0x0055ee37                      ; 0055ee0d
        ;   XREF to: 0055ee37 (CONDITIONAL_JUMP)  ; LAB_0055ee37
    LEA EAX,[EBX + 0xbde0]              ; 0055ee0f
    LEA ESI,[EBX + 0xbde8]              ; 0055ee15
    MOV EDX,dword ptr [ESI]             ; 0055ee1b
    MOV EDI,dword ptr [EAX]             ; 0055ee1d
    MOV dword ptr [EAX],EDX             ; 0055ee1f
    LEA EAX,[EBX + 0xbde4]              ; 0055ee21
    MOV dword ptr [ESI],EDI             ; 0055ee27
    LEA ESI,[EBX + 0xbdec]              ; 0055ee29
    MOV EDI,dword ptr [ESI]             ; 0055ee2f
    MOV EDX,dword ptr [EAX]             ; 0055ee31
    MOV dword ptr [EAX],EDI             ; 0055ee33
    MOV dword ptr [ESI],EDX             ; 0055ee35
    MOV EAX,dword ptr [EBX + 0xbdb8]    ; 0055ee37
        ;   Label: LAB_0055ee37
    MOV dword ptr [EBX + 0x24a4],EAX    ; 0055ee3d
    MOV EAX,dword ptr [EBX + 0xbde4]    ; 0055ee43
    MOV dword ptr [EBX + 0x24a8],EAX    ; 0055ee49
    MOV EAX,dword ptr [EBX + 0xbdbc]    ; 0055ee4f
    MOV dword ptr [EBX + 0x24e8],EAX    ; 0055ee55
    MOV EAX,dword ptr [EBX + 0xbdec]    ; 0055ee5b
    PUSH EBX                            ; 0055ee61
    MOV dword ptr [EBX + 0x24ec],EAX    ; 0055ee62
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 0055ee68
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    MOV ECX,dword ptr [EBX + 0xbda8]    ; 0055ee6d
    ADD ESP,0x4                         ; 0055ee73
    TEST ECX,ECX                        ; 0055ee76
    SETNZ AL                            ; 0055ee78
    PUSH 0x3f800000                     ; 0055ee7b
    AND EAX,0xff                        ; 0055ee80
    PUSH 0x0                            ; 0055ee85
    MOV dword ptr [EBX + 0xfc],EAX      ; 0055ee87
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0055ee8d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + -0x4],EAX      ; 0055ee92
    ADD ESP,0x8                         ; 0055ee95
    MOV ESI,dword ptr [EBX + 0xbdf0]    ; 0055ee98
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055ee9e
    MOV dword ptr [EBX + 0xbe0c],EAX    ; 0055eea1
    TEST ESI,ESI                        ; 0055eea7
    JL 0x0055eecc                       ; 0055eea9
        ;   XREF to: 0055eecc (CONDITIONAL_JUMP)  ; LAB_0055eecc
    FLD float ptr [EBX + 0x2de8]        ; 0055eeab
    FLDZ                                ; 0055eeb1
    FCOMPP                              ; 0055eeb3
    FNSTSW AX                           ; 0055eeb5
    SAHF                                ; 0055eeb7
    JBE 0x0055eecc                      ; 0055eeb8
        ;   XREF to: 0055eecc (CONDITIONAL_JUMP)  ; LAB_0055eecc
    FLD float ptr [EBX + 0x2398]        ; 0055eeba
    FADD double ptr [0x00598506]        ; 0055eec0 | DOUBLE_00598506
    FSTP float ptr [EBX + 0x2de8]       ; 0055eec6
    PUSH 0x5984dc                       ; 0055eecc | = "newzchik.dfm"
        ;   Label: LAB_0055eecc
    LEA ESI,[EBX + 0x23b0]              ; 0055eed1
    MOV dword ptr [EBX + 0xbe00],0x0    ; 0055eed7
    PUSH ESI                            ; 0055eee1
    MOV dword ptr [EBX + 0xbdb0],0x0    ; 0055eee2
    CALL crt_string.c__stricmp_FUN_00564520 ; 0055eeec
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055eef1
    TEST EAX,EAX                        ; 0055eef4
    JZ 0x0055ef0a                       ; 0055eef6
        ;   XREF to: 0055ef0a (CONDITIONAL_JUMP)  ; LAB_0055ef0a
    PUSH 0x5984e9                       ; 0055eef8 | = "zombho1.dfm"
    PUSH ESI                            ; 0055eefd
    CALL crt_string.c__stricmp_FUN_00564520 ; 0055eefe
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055ef03
    TEST EAX,EAX                        ; 0055ef06
    JNZ 0x0055ef2f                      ; 0055ef08
        ;   XREF to: 0055ef2f (CONDITIONAL_JUMP)  ; LAB_0055ef2f
    MOV dword ptr [EBX + 0xbdb0],0x1    ; 0055ef0a
        ;   Label: LAB_0055ef0a
    MOV dword ptr [EBX + 0xbe08],0x0    ; 0055ef14
        ;   Label: LAB_0055ef14
    MOV dword ptr [EBX + 0xbe04],0x0    ; 0055ef1e
    MOV ESP,EBP                         ; 0055ef28
    POP EBP                             ; 0055ef2a
    POP EDI                             ; 0055ef2b
    POP ESI                             ; 0055ef2c
    POP EBX                             ; 0055ef2d
    RET                                 ; 0055ef2e
    PUSH 0x5984f5                       ; 0055ef2f | = "zombho2.dfm"
        ;   Label: LAB_0055ef2f
    PUSH ESI                            ; 0055ef34
    CALL crt_string.c__stricmp_FUN_00564520 ; 0055ef35
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055ef3a
    TEST EAX,EAX                        ; 0055ef3d
    JZ 0x0055ef0a                       ; 0055ef3f
        ;   XREF to: 0055ef0a (CONDITIONAL_JUMP)  ; LAB_0055ef0a
    JMP 0x0055ef14                      ; 0055ef41
        ;   XREF to: 0055ef14 (UNCONDITIONAL_JUMP)  ; LAB_0055ef14

