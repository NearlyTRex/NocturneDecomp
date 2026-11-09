; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_djien_cpp_FUN_0045ff00(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005d8ad1
;   TerminatedCString s_Bip01_Spine1_005d8ae0
;   TerminatedCString s_Bip01_Head_005d8aed
;   TerminatedCString s_Bip01_Ponytail12_005d8af8
;   TerminatedCString s_Bip01_Ponytail22_005d8b09
;   TerminatedCString s_Dummy22_005d8b1a
;   TerminatedCString s_Dummy23_005d8b22
;   TerminatedCString s_Bip01_Sack01_005d8b2a
;   TerminatedCString s_Bip01_Sack02_005d8b37
;   TerminatedCString s_Bip01_Sack03_005d8b44
;   TerminatedCString s_Bip01_Sack04_005d8b51
;   TerminatedCString s_Bip01_Sack05_005d8b5e
;   TerminatedCString s_Bip01_Sack06_005d8b6b
;   TerminatedCString s_Dummy4_005d8b78
;   TerminatedCString s_Dummy24_005d8b7f
;   ... and 15 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569b20
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ff00
        ;   Label: unkafter_djien.cpp_FUN_0045ff00
    PUSH ESI                            ; 0045ff01
    PUSH EDI                            ; 0045ff02
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045ff03
    LEA EAX,[EBX + 0x158]               ; 0045ff07
    PUSH EAX                            ; 0045ff0d
    CALL core_skeleton.cpp_FUN_00569b20 ; 0045ff0e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045ff13
    PUSH 0x5d8ad1                       ; 0045ff16 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 0045ff1b | DAT_0061b4d0
    PUSH EDX                            ; 0045ff21
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0045ff22
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0045ff27
    TEST EAX,EAX                        ; 0045ff2a
    JNZ 0x004601d7                      ; 0045ff2c
        ;   XREF to: 004601d7 (CONDITIONAL_JUMP)  ; LAB_004601d7
    MOV dword ptr [EBX + 0xc2cc],0x3f400000 ; 0045ff32
    MOV EAX,EBX                         ; 0045ff3c
        ;   Label: LAB_0045ff3c
    LEA EDX,[EBX + 0x18]                ; 0045ff3e
    ADD EAX,0x4                         ; 0045ff41
        ;   Label: LAB_0045ff41
    MOV dword ptr [EAX + 0xc2d4],0x0    ; 0045ff44
    CMP EAX,EDX                         ; 0045ff4e
    JNZ 0x0045ff41                      ; 0045ff50
        ;   XREF to: 0045ff41 (CONDITIONAL_JUMP)  ; LAB_0045ff41
    LEA EDI,[EBX + 0x158]               ; 0045ff52
    PUSH EDI                            ; 0045ff58
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0045ff59
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045ff5e
    PUSH 0x1                            ; 0045ff61
    PUSH 0x5d8ae0                       ; 0045ff63 | = "Bip01 Spine1"
    PUSH EAX                            ; 0045ff68
    MOV ESI,EAX                         ; 0045ff69
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ff6b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ff70
    PUSH 0x1                            ; 0045ff73
    PUSH 0x5d8aed                       ; 0045ff75 | = "Bip01 Head"
    PUSH ESI                            ; 0045ff7a
    MOV dword ptr [EBX + 0xc268],EAX    ; 0045ff7b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ff81
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ff86
    PUSH 0x1                            ; 0045ff89
    PUSH 0x5d8af8                       ; 0045ff8b | = "Bip01 Ponytail12"
    PUSH ESI                            ; 0045ff90
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0045ff91
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ff97
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ff9c
    PUSH 0x1                            ; 0045ff9f
    PUSH 0x5d8b09                       ; 0045ffa1 | = "Bip01 Ponytail22"
    PUSH ESI                            ; 0045ffa6
    MOV dword ptr [EBX + 0xc270],EAX    ; 0045ffa7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ffad
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ffb2
    PUSH 0x1                            ; 0045ffb5
    PUSH 0x5d8b1a                       ; 0045ffb7 | = "Dummy22"
    PUSH ESI                            ; 0045ffbc
    MOV dword ptr [EBX + 0xc274],EAX    ; 0045ffbd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ffc3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ffc8
    PUSH 0x1                            ; 0045ffcb
    PUSH 0x5d8b22                       ; 0045ffcd | = "Dummy23"
    PUSH ESI                            ; 0045ffd2
    MOV dword ptr [EBX + 0xc278],EAX    ; 0045ffd3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ffd9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045ffde
    PUSH 0x1                            ; 0045ffe1
    PUSH 0x5d8b2a                       ; 0045ffe3 | = "Bip01 Sack01"
    PUSH ESI                            ; 0045ffe8
    MOV dword ptr [EBX + 0xc27c],EAX    ; 0045ffe9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0045ffef
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045fff4
    PUSH 0x1                            ; 0045fff7
    PUSH 0x5d8b37                       ; 0045fff9 | = "Bip01 Sack02"
    PUSH ESI                            ; 0045fffe
    MOV dword ptr [EBX + 0xc280],EAX    ; 0045ffff
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00460005
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046000a
    MOV dword ptr [EBX + 0xc284],EAX    ; 0046000d
    PUSH 0x1                            ; 00460013
    PUSH 0x5d8b44                       ; 00460015 | = "Bip01 Sack03"
    PUSH ESI                            ; 0046001a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046001b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00460020
    PUSH 0x1                            ; 00460023
    PUSH 0x5d8b51                       ; 00460025 | = "Bip01 Sack04"
    PUSH ESI                            ; 0046002a
    MOV dword ptr [EBX + 0xc288],EAX    ; 0046002b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00460031
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00460036
    PUSH 0x1                            ; 00460039
    PUSH 0x5d8b5e                       ; 0046003b | = "Bip01 Sack05"
    PUSH ESI                            ; 00460040
    MOV dword ptr [EBX + 0xc28c],EAX    ; 00460041
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00460047
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046004c
    PUSH 0x1                            ; 0046004f
    PUSH 0x5d8b6b                       ; 00460051 | = "Bip01 Sack06"
    PUSH ESI                            ; 00460056
    MOV dword ptr [EBX + 0xc290],EAX    ; 00460057
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046005d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00460062
    PUSH 0x1                            ; 00460065
    PUSH 0x5d8b78                       ; 00460067 | = "Dummy4"
    PUSH ESI                            ; 0046006c
    MOV dword ptr [EBX + 0xc294],EAX    ; 0046006d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00460073
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00460078
    PUSH 0x1                            ; 0046007b
    PUSH 0x5d8b7f                       ; 0046007d | = "Dummy24"
    PUSH ESI                            ; 00460082
    MOV dword ptr [EBX + 0xc298],EAX    ; 00460083
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00460089
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046008e
    PUSH 0x1                            ; 00460091
    PUSH 0x5d8b87                       ; 00460093 | = "Dummy25"
    PUSH ESI                            ; 00460098
    MOV dword ptr [EBX + 0xc29c],EAX    ; 00460099
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046009f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004600a4
    PUSH 0x1                            ; 004600a7
    PUSH 0x5d8b8f                       ; 004600a9 | = "Dummy26"
    PUSH ESI                            ; 004600ae
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 004600af
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004600b5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004600ba
    PUSH 0x1                            ; 004600bd
    PUSH 0x5d8b97                       ; 004600bf | = "Dummy27"
    PUSH ESI                            ; 004600c4
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 004600c5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004600cb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004600d0
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 004600d3
    PUSH 0x1                            ; 004600d9
    PUSH 0x5d8b9f                       ; 004600db | = "Dummy28"
    PUSH ESI                            ; 004600e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004600e1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004600e6
    PUSH EDI                            ; 004600e9
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004600ea
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004600f0
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004600f5
    PUSH 0x1                            ; 004600f8
    PUSH 0x5d8ba7                       ; 004600fa | = "sack01"
    PUSH EAX                            ; 004600ff
    MOV ESI,EAX                         ; 00460100
    CALL core_skeleton.cpp_FUN_00565780 ; 00460102
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00460107
    PUSH 0x1                            ; 0046010a
    PUSH 0x5d8bae                       ; 0046010c | = "sack02"
    PUSH ESI                            ; 00460111
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 00460112
    CALL core_skeleton.cpp_FUN_00565780 ; 00460118
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0046011d
    PUSH 0x1                            ; 00460120
    PUSH 0x5d8bb5                       ; 00460122 | = "sack03"
    PUSH ESI                            ; 00460127
    MOV dword ptr [EBX + 0xc2b4],EAX    ; 00460128
    CALL core_skeleton.cpp_FUN_00565780 ; 0046012e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00460133
    PUSH 0x1                            ; 00460136
    PUSH 0x5d8bbc                       ; 00460138 | = "sack04"
    PUSH ESI                            ; 0046013d
    MOV dword ptr [EBX + 0xc2b8],EAX    ; 0046013e
    CALL core_skeleton.cpp_FUN_00565780 ; 00460144
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00460149
    PUSH 0x1                            ; 0046014c
    PUSH 0x5d8bc3                       ; 0046014e | = "sack05"
    PUSH ESI                            ; 00460153
    MOV dword ptr [EBX + 0xc2bc],EAX    ; 00460154
    CALL core_skeleton.cpp_FUN_00565780 ; 0046015a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0046015f
    PUSH 0x1                            ; 00460162
    PUSH 0x5d8bca                       ; 00460164 | = "sack06"
    PUSH ESI                            ; 00460169
    MOV dword ptr [EBX + 0xc2c0],EAX    ; 0046016a
    CALL core_skeleton.cpp_FUN_00565780 ; 00460170
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xc2c4],EAX    ; 00460175
    MOV EAX,[0x0061f650]                ; 0046017b | DAT_0061f650
    MOV ECX,dword ptr [EAX + 0x1008]    ; 00460180 | DAT_01d2d908
    ADD ESP,0xc                         ; 00460186
    TEST ECX,ECX                        ; 00460189
    JNZ 0x004601af                      ; 0046018b
        ;   XREF to: 004601af (CONDITIONAL_JUMP)  ; LAB_004601af
    PUSH 0x5d8bd1                       ; 0046018d | = "PuzzleModeHard"
    MOV ESI,dword ptr [0x0061b4d0]      ; 00460192 | DAT_0061b4d0
    PUSH ESI                            ; 00460198
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00460199
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0046019e
    TEST EAX,EAX                        ; 004601a1
    JZ 0x004601e6                       ; 004601a3
        ;   XREF to: 004601e6 (CONDITIONAL_JUMP)  ; LAB_004601e6
    MOV dword ptr [EBX + 0xc2d4],0x6    ; 004601a5
    FLD float ptr [EBX + 0x2538]        ; 004601af
        ;   Label: LAB_004601af
    CALL crt_math.c_round_FUN_005c03a0  ; 004601b5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EBX                            ; 004601ba
    MOV dword ptr [EBX + 0xc9c4],0x0    ; 004601bb
    FISTP dword ptr [0x00612270]        ; 004601c5 | DAT_00612270
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 004601cb
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004601d0
    POP EDI                             ; 004601d3
    POP ESI                             ; 004601d4
    POP EBX                             ; 004601d5
    RET                                 ; 004601d6
    MOV dword ptr [EBX + 0xc2cc],0x3f800000 ; 004601d7
        ;   Label: LAB_004601d7
    JMP 0x0045ff3c                      ; 004601e1
        ;   XREF to: 0045ff3c (UNCONDITIONAL_JUMP)  ; LAB_0045ff3c
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 004601e6
        ;   Label: LAB_004601e6
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004601ec
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 004601f7
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004601fd
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00460208
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0046020e
    MOV dword ptr [EBX + 0xc2d4],0x3    ; 00460219
    JMP 0x004601af                      ; 00460223
        ;   XREF to: 004601af (UNCONDITIONAL_JUMP)  ; LAB_004601af

