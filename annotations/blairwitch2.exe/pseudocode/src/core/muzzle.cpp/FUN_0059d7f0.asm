; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059d7f0(char *param_1,char *param_2,char *param_3)
;
;
; XREF[24]:
;   core_basicene.cpp_CBasicEnemy_startBurn_FUN_005a0270 at 005a0353
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a093b
;   core_confedrt.cpp_FUN_005a1030 at 005a10c7
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1c31
;   core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130 at 005a21e7
;   core_confzomb.cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40 at 005a1ff0
;   core_confzomb.cpp_FUN_005a2240 at 005a2492
;   core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0 at 005a27a3
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a931c
;   core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580 at 005a9752
;   ... and 14 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d7f0
        ;   Label: core_muzzle.cpp_FUN_0059d7f0
    PUSH ESI                            ; 0059d7f1
    PUSH EDI                            ; 0059d7f2
    PUSH EBP                            ; 0059d7f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0059d7f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059d7f8
    MOV EDX,dword ptr [EBP + 0x838]     ; 0059d7fc
    TEST EDX,EDX                        ; 0059d802
    JZ 0x0059d864                       ; 0059d804
        ;   XREF to: 0059d864 (CONDITIONAL_JUMP)  ; LAB_0059d864
    XOR EBX,EBX                         ; 0059d806
    TEST EDX,EDX                        ; 0059d808
    JLE 0x0059d82e                      ; 0059d80a
        ;   XREF to: 0059d82e (CONDITIONAL_JUMP)  ; LAB_0059d82e
    LEA ESI,[EBP + 0x1f4]               ; 0059d80c
    PUSH ESI                            ; 0059d812
        ;   Label: LAB_0059d812
    PUSH EDI                            ; 0059d813
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d814
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059d819
    TEST EAX,EAX                        ; 0059d81c
    JZ 0x0059d82e                       ; 0059d81e
        ;   XREF to: 0059d82e (CONDITIONAL_JUMP)  ; LAB_0059d82e
    INC EBX                             ; 0059d820
    MOV EAX,dword ptr [EBP + 0x838]     ; 0059d821
    ADD ESI,0x20                        ; 0059d827
    CMP EBX,EAX                         ; 0059d82a
    JL 0x0059d812                       ; 0059d82c
        ;   XREF to: 0059d812 (CONDITIONAL_JUMP)  ; LAB_0059d812
    CMP EBX,dword ptr [EBP + 0x838]     ; 0059d82e
        ;   Label: LAB_0059d82e
    JZ 0x0059d864                       ; 0059d834
        ;   XREF to: 0059d864 (CONDITIONAL_JUMP)  ; LAB_0059d864
    MOV ECX,dword ptr [EBP + 0x834]     ; 0059d836
    XOR EDI,EDI                         ; 0059d83c
    TEST ECX,ECX                        ; 0059d83e
    JLE 0x0059d864                      ; 0059d840
        ;   XREF to: 0059d864 (CONDITIONAL_JUMP)  ; LAB_0059d864
    MOV ESI,EBP                         ; 0059d842
    PUSH ESI                            ; 0059d844
        ;   Label: LAB_0059d844
    MOV EDX,dword ptr [ESP + 0x20]      ; 0059d845
    PUSH EDX                            ; 0059d849
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d84a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059d84f
    TEST EAX,EAX                        ; 0059d852
    JZ 0x0059d86b                       ; 0059d854
        ;   XREF to: 0059d86b (CONDITIONAL_JUMP)  ; LAB_0059d86b
    INC EDI                             ; 0059d856
    MOV EAX,dword ptr [EBP + 0x834]     ; 0059d857
    ADD ESI,0x19                        ; 0059d85d
    CMP EDI,EAX                         ; 0059d860
    JL 0x0059d844                       ; 0059d862
        ;   XREF to: 0059d844 (CONDITIONAL_JUMP)  ; LAB_0059d844
    XOR EAX,EAX                         ; 0059d864
        ;   Label: LAB_0059d864
    POP EBP                             ; 0059d866
    POP EDI                             ; 0059d867
    POP ESI                             ; 0059d868
    POP EBX                             ; 0059d869
    RET                                 ; 0059d86a
    SHL EBX,0x5                         ; 0059d86b
        ;   Label: LAB_0059d86b
    MOV EAX,0x2                         ; 0059d86e
    MOV dword ptr [EBX + EBP*0x1 + 0x210],ESI ; 0059d873
    POP EBP                             ; 0059d87a
    POP EDI                             ; 0059d87b
    POP ESI                             ; 0059d87c
    POP EBX                             ; 0059d87d
    RET                                 ; 0059d87e

