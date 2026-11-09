; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005bac80(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005fa42e
;   TerminatedCString s_Bip01_L_ForeArm_005fa439
;   TerminatedCString s_Bip01_R_ForeArm_005fa449
;   TerminatedCString s_Bip01_L_UpperArm_005fa459
;   TerminatedCString s_Bip01_R_UpperArm_005fa46a
;   TerminatedCString s_Bip01_L_Foot_005fa47b
;   TerminatedCString s_Bip01_R_Foot_005fa488
;   TerminatedCString s_Bip01_L_Hand_005fa495
;   TerminatedCString s_Bip01_R_Hand_005fa4a2
;   TerminatedCString s_Bip01_Spine_005fa4af
;   TerminatedCString s_Bip01_Spine2_005fa4bb
;   TerminatedCString s_larm01_005fa4c8
;   TerminatedCString s_l4arm01_005fa4cf
;   TerminatedCString s_rarm01_005fa4d7
;   TerminatedCString s_r4arm01_005fa4de
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569b20
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bac80
        ;   Label: core_zombie.cpp_FUN_005bac80
    PUSH ESI                            ; 005bac81
    PUSH EDI                            ; 005bac82
    PUSH EBP                            ; 005bac83
    MOV EBP,ESP                         ; 005bac84
    SUB ESP,0x4                         ; 005bac86
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bac89
    LEA EDI,[EBX + 0x158]               ; 005bac8c
    PUSH EDI                            ; 005bac92
    CALL core_skeleton.cpp_FUN_00569b20 ; 005bac93
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bac98
    PUSH EDI                            ; 005bac9b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005bac9c
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005baca1
    PUSH 0x1                            ; 005baca4
    PUSH 0x5fa42e                       ; 005baca6 | = "Bip01 Head"
    PUSH EAX                            ; 005bacab
    MOV ESI,EAX                         ; 005bacac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bacae
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bacb3
    PUSH 0x1                            ; 005bacb6
    PUSH 0x5fa439                       ; 005bacb8 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005bacbd
    MOV dword ptr [EBX + 0xc2f8],EAX    ; 005bacbe
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bacc4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bacc9
    PUSH 0x1                            ; 005baccc
    PUSH 0x5fa449                       ; 005bacce | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005bacd3
    MOV dword ptr [EBX + 0xc304],EAX    ; 005bacd4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bacda
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bacdf
    PUSH 0x1                            ; 005bace2
    PUSH 0x5fa459                       ; 005bace4 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005bace9
    MOV dword ptr [EBX + 0xc308],EAX    ; 005bacea
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bacf0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bacf5
    PUSH 0x1                            ; 005bacf8
    PUSH 0x5fa46a                       ; 005bacfa | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005bacff
    MOV dword ptr [EBX + 0xc30c],EAX    ; 005bad00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad06
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad0b
    PUSH 0x1                            ; 005bad0e
    PUSH 0x5fa47b                       ; 005bad10 | = "Bip01 L Foot"
    PUSH ESI                            ; 005bad15
    MOV dword ptr [EBX + 0xc310],EAX    ; 005bad16
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad1c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad21
    PUSH 0x1                            ; 005bad24
    PUSH 0x5fa488                       ; 005bad26 | = "Bip01 R Foot"
    PUSH ESI                            ; 005bad2b
    MOV dword ptr [EBX + 0xc314],EAX    ; 005bad2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad32
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad37
    PUSH 0x1                            ; 005bad3a
    PUSH 0x5fa495                       ; 005bad3c | = "Bip01 L Hand"
    PUSH ESI                            ; 005bad41
    MOV dword ptr [EBX + 0xc318],EAX    ; 005bad42
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad48
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad4d
    MOV dword ptr [EBX + 0xc2fc],EAX    ; 005bad50
    PUSH 0x1                            ; 005bad56
    PUSH 0x5fa4a2                       ; 005bad58 | = "Bip01 R Hand"
    PUSH ESI                            ; 005bad5d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad5e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad63
    PUSH 0x1                            ; 005bad66
    PUSH 0x5fa4af                       ; 005bad68 | = "Bip01 Spine"
    PUSH ESI                            ; 005bad6d
    MOV dword ptr [EBX + 0xc300],EAX    ; 005bad6e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad74
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad79
    PUSH 0x1                            ; 005bad7c
    PUSH 0x5fa4bb                       ; 005bad7e | = "Bip01 Spine2"
    PUSH ESI                            ; 005bad83
    MOV dword ptr [EBX + 0xc31c],EAX    ; 005bad84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005bad8a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bad8f
    PUSH EDI                            ; 005bad92
    MOV dword ptr [EBX + 0xc320],EAX    ; 005bad93
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005bad99
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bad9e
    PUSH 0x1                            ; 005bada1
    PUSH 0x5fa4c8                       ; 005bada3 | = "larm01"
    PUSH EAX                            ; 005bada8
    MOV ESI,EAX                         ; 005bada9
    MOV EDI,EAX                         ; 005badab
    CALL core_skeleton.cpp_FUN_00565780 ; 005badad
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005badb2
    PUSH 0x1                            ; 005badb5
    PUSH 0x5fa4cf                       ; 005badb7 | = "l4arm01"
    PUSH ESI                            ; 005badbc
    MOV dword ptr [EBX + 0xc324],EAX    ; 005badbd
    CALL core_skeleton.cpp_FUN_00565780 ; 005badc3
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005badc8
    PUSH 0x1                            ; 005badcb
    PUSH 0x5fa4d7                       ; 005badcd | = "rarm01"
    PUSH ESI                            ; 005badd2
    MOV dword ptr [EBX + 0xc328],EAX    ; 005badd3
    CALL core_skeleton.cpp_FUN_00565780 ; 005badd9
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005badde
    PUSH 0x0                            ; 005bade1
    PUSH 0x5fa4de                       ; 005bade3 | = "r4arm01"
    PUSH ESI                            ; 005bade8
    MOV dword ptr [EBX + 0xc32c],EAX    ; 005bade9
    CALL core_skeleton.cpp_FUN_00565780 ; 005badef
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005badf4
    MOV dword ptr [EBX + 0xc330],EAX    ; 005badf7
    TEST EAX,EAX                        ; 005badfd
    JGE 0x005bae0b                      ; 005badff
        ;   XREF to: 005bae0b (CONDITIONAL_JUMP)  ; LAB_005bae0b
    MOV dword ptr [EBX + 0xc330],0x3b   ; 005bae01
    PUSH 0x0                            ; 005bae0b
        ;   Label: LAB_005bae0b
    PUSH 0x5fa4e6                       ; 005bae0d | = "waist01"
    PUSH EDI                            ; 005bae12
    CALL core_skeleton.cpp_FUN_00565780 ; 005bae13
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005bae18
    PUSH 0x1                            ; 005bae1b
    PUSH 0x5fa4ee                       ; 005bae1d | = "torso01"
    PUSH EDI                            ; 005bae22
    MOV dword ptr [EBX + 0xc334],EAX    ; 005bae23
    CALL core_skeleton.cpp_FUN_00565780 ; 005bae29
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005bae2e
    PUSH 0x1                            ; 005bae31
    PUSH 0x5fa4f6                       ; 005bae33 | = "head01"
    PUSH EDI                            ; 005bae38
    MOV dword ptr [EBX + 0xc338],EAX    ; 005bae39
    CALL core_skeleton.cpp_FUN_00565780 ; 005bae3f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005bae44
    PUSH 0x5fa4fd                       ; 005bae47 | = "newzomb1.dfm"
    MOV dword ptr [EBX + 0xc33c],EAX    ; 005bae4c
    LEA EAX,[EBX + 0x24a8]              ; 005bae52
    PUSH EAX                            ; 005bae58
    MOV dword ptr [EBX + 0x2384],0x0    ; 005bae59
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005bae63
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005bae68
    TEST EAX,EAX                        ; 005bae6b
    JNZ 0x005bae97                      ; 005bae6d
        ;   XREF to: 005bae97 (CONDITIONAL_JUMP)  ; LAB_005bae97
    LEA EAX,[EBX + 0xc324]              ; 005bae6f
    LEA ESI,[EBX + 0xc32c]              ; 005bae75
    MOV EDX,dword ptr [ESI]             ; 005bae7b
    MOV EDI,dword ptr [EAX]             ; 005bae7d
    MOV dword ptr [EAX],EDX             ; 005bae7f
    LEA EAX,[EBX + 0xc328]              ; 005bae81
    MOV dword ptr [ESI],EDI             ; 005bae87
    LEA ESI,[EBX + 0xc330]              ; 005bae89
    MOV EDI,dword ptr [ESI]             ; 005bae8f
    MOV EDX,dword ptr [EAX]             ; 005bae91
    MOV dword ptr [EAX],EDI             ; 005bae93
    MOV dword ptr [ESI],EDX             ; 005bae95
    MOV EAX,dword ptr [EBX + 0xc2fc]    ; 005bae97
        ;   Label: LAB_005bae97
    MOV dword ptr [EBX + 0x25a8],EAX    ; 005bae9d
    MOV EAX,dword ptr [EBX + 0xc328]    ; 005baea3
    MOV dword ptr [EBX + 0x25ac],EAX    ; 005baea9
    MOV EAX,dword ptr [EBX + 0xc300]    ; 005baeaf
    MOV dword ptr [EBX + 0x2620],EAX    ; 005baeb5
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005baebb
    PUSH EBX                            ; 005baec1
    MOV dword ptr [EBX + 0x2624],EAX    ; 005baec2
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005baec8
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV ECX,dword ptr [EBX + 0xc2ec]    ; 005baecd
    ADD ESP,0x4                         ; 005baed3
    TEST ECX,ECX                        ; 005baed6
    SETNZ AL                            ; 005baed8
    PUSH 0x3f800000                     ; 005baedb
    AND EAX,0xff                        ; 005baee0
    PUSH 0x0                            ; 005baee5
    MOV dword ptr [EBX + 0xfc],EAX      ; 005baee7
    CALL core_actor.cpp_FUN_0040cc00    ; 005baeed
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + -0x4],EAX      ; 005baef2
    ADD ESP,0x8                         ; 005baef5
    MOV ESI,dword ptr [EBX + 0xc334]    ; 005baef8
    MOV EAX,dword ptr [EBP + -0x4]      ; 005baefe
    MOV dword ptr [EBX + 0xc350],EAX    ; 005baf01
    TEST ESI,ESI                        ; 005baf07
    JL 0x005baf2c                       ; 005baf09
        ;   XREF to: 005baf2c (CONDITIONAL_JUMP)  ; LAB_005baf2c
    FLD float ptr [EBX + 0x3000]        ; 005baf0b
    FLDZ                                ; 005baf11
    FCOMPP                              ; 005baf13
    FNSTSW AX                           ; 005baf15
    SAHF                                ; 005baf17
    JBE 0x005baf2c                      ; 005baf18
        ;   XREF to: 005baf2c (CONDITIONAL_JUMP)  ; LAB_005baf2c
    FLD float ptr [EBX + 0x2490]        ; 005baf1a
    FADD double ptr [0x005fa534]        ; 005baf20 | DAT_005fa534
    FSTP float ptr [EBX + 0x3000]       ; 005baf26
    PUSH 0x5fa50a                       ; 005baf2c | = "newzchik.dfm"
        ;   Label: LAB_005baf2c
    LEA ESI,[EBX + 0x24a8]              ; 005baf31
    MOV dword ptr [EBX + 0xc344],0x0    ; 005baf37
    PUSH ESI                            ; 005baf41
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 005baf42
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005baf4c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005baf51
    TEST EAX,EAX                        ; 005baf54
    JZ 0x005baf6a                       ; 005baf56
        ;   XREF to: 005baf6a (CONDITIONAL_JUMP)  ; LAB_005baf6a
    PUSH 0x5fa517                       ; 005baf58 | = "zombho1.dfm"
    PUSH ESI                            ; 005baf5d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005baf5e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005baf63
    TEST EAX,EAX                        ; 005baf66
    JNZ 0x005baf8f                      ; 005baf68
        ;   XREF to: 005baf8f (CONDITIONAL_JUMP)  ; LAB_005baf8f
    MOV dword ptr [EBX + 0xc2f4],0x1    ; 005baf6a
        ;   Label: LAB_005baf6a
    MOV dword ptr [EBX + 0xc34c],0x0    ; 005baf74
        ;   Label: LAB_005baf74
    MOV dword ptr [EBX + 0xc348],0x0    ; 005baf7e
    MOV ESP,EBP                         ; 005baf88
    POP EBP                             ; 005baf8a
    POP EDI                             ; 005baf8b
    POP ESI                             ; 005baf8c
    POP EBX                             ; 005baf8d
    RET                                 ; 005baf8e
    PUSH 0x5fa523                       ; 005baf8f | = "zombho2.dfm"
        ;   Label: LAB_005baf8f
    PUSH ESI                            ; 005baf94
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005baf95
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005baf9a
    TEST EAX,EAX                        ; 005baf9d
    JZ 0x005baf6a                       ; 005baf9f
        ;   XREF to: 005baf6a (CONDITIONAL_JUMP)  ; LAB_005baf6a
    JMP 0x005baf74                      ; 005bafa1
        ;   XREF to: 005baf74 (UNCONDITIONAL_JUMP)  ; LAB_005baf74

