; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_svetlana.cpp_CSvetlana_FUN_005d88e0(CSvetlana * this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_svetlanax_dfm_00654906
;   TerminatedCString s_svetlana_dfm_00654914
;   TerminatedCString s_Bip01_head_00654921
;   TerminatedCString s_Bip01_L_Clavicle_0065492c
;   TerminatedCString s_Bip01_R_Clavicle_0065493d
;   TerminatedCString s_Bip01_L_UpperArm_0065494e
;   TerminatedCString s_Bip01_R_UpperArm_0065495f
;   TerminatedCString s_Bip01_L_ForeArm_00654970
;   TerminatedCString s_Bip01_R_ForeArm_00654980
;   TerminatedCString s_Bip01_L_Foot_00654990
;   TerminatedCString s_Bip01_R_Foot_0065499d
;   TerminatedCString s_Bip01_L_Thigh_006549aa
;   TerminatedCString s_Bip01_R_Thigh_006549b8
;   TerminatedCString s_Bip01_L_Calf_006549c6
;   TerminatedCString s_Bip01_R_Calf_006549d3
;   ... and 32 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_FUN_00439710
;   core_hero.cpp_CHero_FUN_004f2540
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d88e0
        ;   Label: core_svetlana.cpp_CSvetlana_FUN_005d88e0
    PUSH ESI                            ; 005d88e1
    PUSH EDI                            ; 005d88e2
    PUSH EBP                            ; 005d88e3
    SUB ESP,0x4                         ; 005d88e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d88e7
    MOV EBX,dword ptr [0x0067b654]      ; 005d88eb | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 005d88f1 | g_CGameInstance.nudity_flag
    LEA EAX,[ESI + 0x158]               ; 005d88f4
    TEST EDX,EDX                        ; 005d88fa
    JZ 0x005d8b62                       ; 005d88fc
        ;   XREF to: 005d8b62 (CONDITIONAL_JUMP)  ; LAB_005d8b62
    PUSH 0x654914                       ; 005d8902 | = "svetlana.dfm"
    PUSH EAX                            ; 005d8907
        ;   Label: LAB_005d8907
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005d8908
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005d890d
    PUSH ESI                            ; 005d8910
    CALL core_hero.cpp_CHero_FUN_004f2540 ; 005d8911
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d8916
    LEA EDI,[ESI + 0x158]               ; 005d8919
    PUSH EDI                            ; 005d891f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005d8920
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005d8925
    PUSH 0x1                            ; 005d8928
    PUSH 0x654921                       ; 005d892a | = "Bip01 head"
    PUSH EAX                            ; 005d892f
    MOV EBX,EAX                         ; 005d8930
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8932
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8937
    PUSH 0x1                            ; 005d893a
    PUSH 0x65492c                       ; 005d893c | = "Bip01 L Clavicle"
    PUSH EBX                            ; 005d8941
    MOV [0x03f6cb90],EAX                ; 005d8942 | DAT_03f6cb90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8947
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d894c
    PUSH 0x1                            ; 005d894f
    PUSH 0x65493d                       ; 005d8951 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005d8956
    MOV [0x03f6cb94],EAX                ; 005d8957 | DAT_03f6cb94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d895c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8961
    PUSH 0x1                            ; 005d8964
    PUSH 0x65494e                       ; 005d8966 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005d896b
    MOV [0x03f6cb98],EAX                ; 005d896c | DAT_03f6cb98
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8971
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8976
    PUSH 0x1                            ; 005d8979
    PUSH 0x65495f                       ; 005d897b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005d8980
    MOV [0x03f6cb9c],EAX                ; 005d8981 | DAT_03f6cb9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8986
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d898b
    PUSH 0x1                            ; 005d898e
    PUSH 0x654970                       ; 005d8990 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 005d8995
    MOV [0x03f6cba0],EAX                ; 005d8996 | DAT_03f6cba0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d899b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d89a0
    PUSH 0x1                            ; 005d89a3
    PUSH 0x654980                       ; 005d89a5 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 005d89aa
    MOV [0x03f6cba4],EAX                ; 005d89ab | DAT_03f6cba4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d89b0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d89b5
    PUSH 0x1                            ; 005d89b8
    PUSH 0x654990                       ; 005d89ba | = "Bip01 L Foot"
    PUSH EBX                            ; 005d89bf
    MOV [0x03f6cba8],EAX                ; 005d89c0 | DAT_03f6cba8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d89c5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d89ca
    PUSH 0x1                            ; 005d89cd
    PUSH 0x65499d                       ; 005d89cf | = "Bip01 R Foot"
    PUSH EBX                            ; 005d89d4
    MOV [0x03f6cbac],EAX                ; 005d89d5 | DAT_03f6cbac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d89da
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d89df
    MOV [0x03f6cbb0],EAX                ; 005d89e2 | DAT_03f6cbb0
    PUSH 0x1                            ; 005d89e7
    PUSH 0x6549aa                       ; 005d89e9 | = "Bip01 L Thigh"
    PUSH EBX                            ; 005d89ee
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d89ef
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d89f4
    PUSH 0x1                            ; 005d89f7
    PUSH 0x6549b8                       ; 005d89f9 | = "Bip01 R Thigh"
    PUSH EBX                            ; 005d89fe
    MOV [0x03f6cbb4],EAX                ; 005d89ff | DAT_03f6cbb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a04
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a09
    PUSH 0x1                            ; 005d8a0c
    PUSH 0x6549c6                       ; 005d8a0e | = "Bip01 L Calf"
    PUSH EBX                            ; 005d8a13
    MOV [0x03f6cbb8],EAX                ; 005d8a14 | DAT_03f6cbb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a19
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a1e
    PUSH 0x1                            ; 005d8a21
    PUSH 0x6549d3                       ; 005d8a23 | = "Bip01 R Calf"
    PUSH EBX                            ; 005d8a28
    MOV [0x03f6cbbc],EAX                ; 005d8a29 | DAT_03f6cbbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a2e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a33
    PUSH 0x1                            ; 005d8a36
    PUSH 0x6549e0                       ; 005d8a38 | = "Bip01 L Hand"
    PUSH EBX                            ; 005d8a3d
    MOV [0x03f6cbc0],EAX                ; 005d8a3e | DAT_03f6cbc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a43
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a48
    PUSH 0x1                            ; 005d8a4b
    PUSH 0x6549ed                       ; 005d8a4d | = "Bip01 R Hand"
    PUSH EBX                            ; 005d8a52
    MOV [0x03f6cbc4],EAX                ; 005d8a53 | DAT_03f6cbc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a58
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a5d
    PUSH 0x1                            ; 005d8a60
    PUSH 0x6549fa                       ; 005d8a62 | = "Bip01 Spine2"
    PUSH EBX                            ; 005d8a67
    MOV [0x03f6cbc8],EAX                ; 005d8a68 | DAT_03f6cbc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a6d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a72
    PUSH 0x1                            ; 005d8a75
    PUSH 0x654a07                       ; 005d8a77 | = "Bip01 Spine"
    PUSH EBX                            ; 005d8a7c
    MOV [0x03f6cbcc],EAX                ; 005d8a7d | DAT_03f6cbcc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a82
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a87
    PUSH 0x1                            ; 005d8a8a
    PUSH 0x654a13                       ; 005d8a8c | = "Bipblade01"
    PUSH EBX                            ; 005d8a91
    MOV [0x03f6cbd0],EAX                ; 005d8a92 | DAT_03f6cbd0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8a97
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8a9c
    PUSH 0x1                            ; 005d8a9f
    PUSH 0x654a1e                       ; 005d8aa1 | = "BipR14"
    PUSH EBX                            ; 005d8aa6
    MOV [0x03f6cbd4],EAX                ; 005d8aa7 | DAT_03f6cbd4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005d8aac
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 005d8ab1
    MOV [0x03f6cbd8],EAX                ; 005d8ab4 | DAT_03f6cbd8
    PUSH 0x654a25                       ; 005d8ab9 | = "svetcape.cth"
    LEA EAX,[ESI + 0x1fbdc]             ; 005d8abe
    PUSH EAX                            ; 005d8ac4
    MOV dword ptr [ESI + 0x1fbd4],0x0   ; 005d8ac5
    MOV dword ptr [ESP + 0x8],EAX       ; 005d8acf
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 005d8ad3
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005d8ad8
    PUSH EDI                            ; 005d8adb
    LEA EBP,[ESI + 0x30]                ; 005d8adc
    PUSH EBP                            ; 005d8adf
    LEA EBX,[ESI + 0x20]                ; 005d8ae0
    PUSH EBX                            ; 005d8ae3
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d8ae4
    PUSH EAX                            ; 005d8ae8
    CALL core_cloth.cpp_FUN_00439710    ; 005d8ae9
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 005d8aee
    PUSH 0x654a32                       ; 005d8af1 | = "svethair.cth"
    LEA EAX,[ESI + 0x5fa4c]             ; 005d8af6
    PUSH EAX                            ; 005d8afc
    MOV dword ptr [ESP + 0x8],EAX       ; 005d8afd
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 005d8b01
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005d8b06
    PUSH EDI                            ; 005d8b09
    PUSH EBP                            ; 005d8b0a
    PUSH EBX                            ; 005d8b0b
    MOV ECX,dword ptr [ESP + 0xc]       ; 005d8b0c
    PUSH ECX                            ; 005d8b10
    CALL core_cloth.cpp_FUN_00439710    ; 005d8b11
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 005d8b16
    PUSH EDI                            ; 005d8b19
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005d8b1a
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005d8b1f
    PUSH 0x1                            ; 005d8b22
    PUSH 0x654a3f                       ; 005d8b24 | = "lblade01"
    PUSH EAX                            ; 005d8b29
    MOV EBX,EAX                         ; 005d8b2a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005d8b2c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005d8b31
    PUSH 0x1                            ; 005d8b34
    PUSH 0x654a48                       ; 005d8b36 | = "rblade02"
    PUSH EBX                            ; 005d8b3b
    MOV dword ptr [ESI + 0x9f8d0],EAX   ; 005d8b3c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005d8b42
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0x9f8bc],0x0   ; 005d8b47
    ADD ESP,0xc                         ; 005d8b51
    MOV dword ptr [ESI + 0x9f8d4],EAX   ; 005d8b54
    ADD ESP,0x4                         ; 005d8b5a
    POP EBP                             ; 005d8b5d
    POP EDI                             ; 005d8b5e
    POP ESI                             ; 005d8b5f
    POP EBX                             ; 005d8b60
    RET                                 ; 005d8b61
    PUSH 0x654906                       ; 005d8b62 | = "svetlanax.dfm"
        ;   Label: LAB_005d8b62
    JMP 0x005d8907                      ; 005d8b67
        ;   XREF to: 005d8907 (UNCONDITIONAL_JUMP)  ; LAB_005d8907

