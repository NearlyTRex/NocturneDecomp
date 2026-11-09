; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00543680(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0054366c = 005437fe
;   TerminatedCString s_SHADOWBEAST_DFM_005d11c7
;   TerminatedCString s_WERE_HEADLESS_DFM_005d11d7
;   TerminatedCString s_Bip01_Pelvis_005d11e9
;   TerminatedCString s_Bip01_Spine2_005d11f6
;   TerminatedCString s_Bip01_Head_005d1203
;   TerminatedCString s_Bip01_Spine2_005d120e
;   TerminatedCString s_Bip01_L_Finger1_005d121b
;   TerminatedCString s_Bip01_R_Finger1_005d122b
;   TerminatedCString s_Bip01_Head_005d123b
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_00548090
;   core_skeleton.cpp_FUN_0054e6b0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543680
        ;   Label: core_shadow.cpp_FUN_00543680
    PUSH ESI                            ; 00543681
    PUSH EBP                            ; 00543682
    MOV EBP,ESP                         ; 00543683
    SUB ESP,0x4                         ; 00543685
    MOV EBX,dword ptr [EBP + 0x10]      ; 00543688
    LEA EAX,[EBX + 0x158]               ; 0054368b
    PUSH EAX                            ; 00543691
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 00543692
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543697
    PUSH 0x5d11c7                       ; 0054369a | = "SHADOWBEAST.DFM"
    LEA ESI,[EBX + 0x24a8]              ; 0054369f
    MOV dword ptr [EBX + 0xd0a4],0x0    ; 005436a5
    PUSH ESI                            ; 005436af
    MOV dword ptr [EBX + 0xd0d0],0x0    ; 005436b0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005436ba
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005436bf
    TEST EAX,EAX                        ; 005436c2
    JNZ 0x00543822                      ; 005436c4
        ;   XREF to: 00543822 (CONDITIONAL_JUMP)  ; LAB_00543822
    MOV dword ptr [EBX + 0xd0a4],0x1    ; 005436ca
        ;   Label: LAB_005436ca
    LEA EAX,[EBX + 0x158]               ; 005436d4
        ;   Label: LAB_005436d4
    PUSH EAX                            ; 005436da
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 005436db
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005436e0
    PUSH 0x1                            ; 005436e3
    PUSH 0x5d11e9                       ; 005436e5 | = "Bip01 Pelvis"
    PUSH EAX                            ; 005436ea
    MOV ESI,EAX                         ; 005436eb
    CALL core_skeleton.cpp_FUN_00548090 ; 005436ed
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005436f2
    PUSH 0x1                            ; 005436f5
    PUSH 0x5d11f6                       ; 005436f7 | = "Bip01 Spine2"
    PUSH ESI                            ; 005436fc
    MOV dword ptr [EBX + 0xd068],EAX    ; 005436fd
    CALL core_skeleton.cpp_FUN_00548090 ; 00543703
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00543708
    PUSH 0x1                            ; 0054370b
    PUSH 0x5d1203                       ; 0054370d | = "Bip01 Head"
    PUSH ESI                            ; 00543712
    MOV dword ptr [EBX + 0xd06c],EAX    ; 00543713
    CALL core_skeleton.cpp_FUN_00548090 ; 00543719
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0054371e
    PUSH 0x1                            ; 00543721
    PUSH 0x5d120e                       ; 00543723 | = "Bip01 Spine2"
    PUSH ESI                            ; 00543728
    MOV dword ptr [EBX + 0xd070],EAX    ; 00543729
    CALL core_skeleton.cpp_FUN_00548090 ; 0054372f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00543734
    PUSH 0x1                            ; 00543737
    PUSH 0x5d121b                       ; 00543739 | = "Bip01 L Finger1"
    PUSH ESI                            ; 0054373e
    MOV dword ptr [EBX + 0xd058],EAX    ; 0054373f
    CALL core_skeleton.cpp_FUN_00548090 ; 00543745
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0054374a
    PUSH 0x1                            ; 0054374d
    PUSH 0x5d122b                       ; 0054374f | = "Bip01 R Finger1"
    PUSH ESI                            ; 00543754
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00543755
    CALL core_skeleton.cpp_FUN_00548090 ; 0054375b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00543760
    PUSH 0x1                            ; 00543763
    PUSH 0x5d123b                       ; 00543765 | = "Bip01 Head"
    PUSH ESI                            ; 0054376a
    MOV dword ptr [EBX + 0xd060],EAX    ; 0054376b
    CALL core_skeleton.cpp_FUN_00548090 ; 00543771
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00543776
    PUSH EBX                            ; 00543779
    MOV dword ptr [EBX + 0xd064],EAX    ; 0054377a
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00543780
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 00543785
    ADD ESP,0x4                         ; 0054378f
    MOV EDX,dword ptr [EBX + 0xd054]    ; 00543792
    MOV dword ptr [EBX + 0xf8],0x0      ; 00543798
    TEST EDX,EDX                        ; 005437a2
    JNZ 0x005437b0                      ; 005437a4
        ;   XREF to: 005437b0 (CONDITIONAL_JUMP)  ; LAB_005437b0
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 005437a6
    PUSH 0x41f00000                     ; 005437b0
        ;   Label: LAB_005437b0
    PUSH 0x41200000                     ; 005437b5
    MOV dword ptr [EBX + 0xd078],0x0    ; 005437ba
    CALL core_actor.cpp_FUN_0040ce40    ; 005437c4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + -0x4],EAX      ; 005437c9
    MOV dword ptr [EBX + 0xd080],0x0    ; 005437cc
    ADD ESP,0x8                         ; 005437d6
    MOV dword ptr [EBX + 0xd084],0x0    ; 005437d9
    FLD float ptr [EBP + -0x4]          ; 005437e3
    MOV EAX,dword ptr [EBX + 0xd0a8]    ; 005437e6
    FSTP float ptr [EBX + 0xd07c]       ; 005437ec
    CMP EAX,0x3                         ; 005437f2
    JA 0x0054381c                       ; 005437f5
        ;   XREF to: 0054381c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x54366c]  ; 005437f7 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 005437fe
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00543808
        ;   Label: LAB_00543808
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00543812
    MOV ESP,EBP                         ; 0054381c
        ;   Label: default
    POP EBP                             ; 0054381e
    POP ESI                             ; 0054381f
    POP EBX                             ; 00543820
    RET                                 ; 00543821
    PUSH 0x5d11d7                       ; 00543822 | = "WERE_HEADLESS.DFM"
        ;   Label: LAB_00543822
    PUSH ESI                            ; 00543827
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00543828
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054382d
    TEST EAX,EAX                        ; 00543830
    JZ 0x005436ca                       ; 00543832
        ;   XREF to: 005436ca (CONDITIONAL_JUMP)  ; LAB_005436ca
    JMP 0x005436d4                      ; 00543838
        ;   XREF to: 005436d4 (UNCONDITIONAL_JUMP)  ; LAB_005436d4
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 0054383d
        ;   Label: caseD_2
    JMP 0x00543808                      ; 00543847
        ;   XREF to: 00543808 (UNCONDITIONAL_JUMP)  ; LAB_00543808
    MOV dword ptr [EBX + 0xce5c],0x41f00000 ; 00543849
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00543853
    MOV dword ptr [EBX + 0x2538],0x42700000 ; 0054385d
    MOV ESP,EBP                         ; 00543867
    POP EBP                             ; 00543869
    POP ESI                             ; 0054386a
    POP EBX                             ; 0054386b
    RET                                 ; 0054386c

