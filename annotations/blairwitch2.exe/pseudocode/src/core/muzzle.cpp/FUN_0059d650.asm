; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059d650(char *param_1,char *param_2)
;
;
; XREF[12]:
;   core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0 at 0059e9a2
;   core_confedrt.cpp_CConfederate_processStates_FUN_005a0b20 at 005a0b65
;   core_confzomb.cpp_CConfederateZombie_processStates_FUN_005a1e10 at 005a1e55
;   core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0 at 005a28d6
;   core_ghostchi.cpp_CGhostChild_processStates_FUN_005a94c0 at 005a9505
;   core_hand.cpp_CHand_processStates_FUN_005a9e10 at 005a9e55
;   core_helldog.cpp_CDog_processStates_FUN_005abe90 at 005abef0
;   core_hellhag.cpp_CHag_processStates_FUN_005aa970 at 005aa9d0
;   core_schngeis.cpp_CSchnellGeist_processStates_FUN_005a31c0 at 005a3205
;   core_union.cpp_CUnion_processStates_FUN_005a4c50 at 005a4cac
;   ... and 2 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d650
        ;   Label: core_muzzle.cpp_FUN_0059d650
    PUSH ESI                            ; 0059d651
    PUSH EDI                            ; 0059d652
    PUSH EBP                            ; 0059d653
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059d654
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059d658
    MOV EDX,dword ptr [EBX + 0x834]     ; 0059d65c
    CMP EDX,0x14                        ; 0059d662
    JZ 0x0059d6d5                       ; 0059d665
        ;   XREF to: 0059d6d5 (CONDITIONAL_JUMP)  ; LAB_0059d6d5
    XOR ESI,ESI                         ; 0059d667
    TEST EDX,EDX                        ; 0059d669
    JLE 0x0059d68b                      ; 0059d66b
        ;   XREF to: 0059d68b (CONDITIONAL_JUMP)  ; LAB_0059d68b
    MOV EDI,EBX                         ; 0059d66d
    PUSH EDI                            ; 0059d66f
        ;   Label: LAB_0059d66f
    PUSH EBP                            ; 0059d670
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0059d671
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059d676
    TEST EAX,EAX                        ; 0059d679
    JZ 0x0059d6dc                       ; 0059d67b
        ;   XREF to: 0059d6dc (CONDITIONAL_JUMP)  ; LAB_0059d6dc
    INC ESI                             ; 0059d67d
    MOV EAX,dword ptr [EBX + 0x834]     ; 0059d67e
    ADD EDI,0x19                        ; 0059d684
    CMP ESI,EAX                         ; 0059d687
    JL 0x0059d66f                       ; 0059d689
        ;   XREF to: 0059d66f (CONDITIONAL_JUMP)  ; LAB_0059d66f
    MOV ESI,dword ptr [EBX + 0x834]     ; 0059d68b
        ;   Label: LAB_0059d68b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059d691
    SUB EAX,ESI                         ; 0059d698
    SHL EAX,0x3                         ; 0059d69a
    ADD EAX,ESI                         ; 0059d69d
    MOV ESI,EBP                         ; 0059d69f
    LEA EDI,[EBX + EAX*0x1]             ; 0059d6a1
    PUSH EDI                            ; 0059d6a4
    MOV AL,byte ptr [ESI]               ; 0059d6a5
        ;   Label: LAB_0059d6a5
    MOV byte ptr [EDI],AL               ; 0059d6a7
    CMP AL,0x0                          ; 0059d6a9
    JZ 0x0059d6bd                       ; 0059d6ab
        ;   XREF to: 0059d6bd (CONDITIONAL_JUMP)  ; LAB_0059d6bd
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d6ad
    ADD ESI,0x2                         ; 0059d6b0
    MOV byte ptr [EDI + 0x1],AL         ; 0059d6b3
    ADD EDI,0x2                         ; 0059d6b6
    CMP AL,0x0                          ; 0059d6b9
    JNZ 0x0059d6a5                      ; 0059d6bb
        ;   XREF to: 0059d6a5 (CONDITIONAL_JUMP)  ; LAB_0059d6a5
    POP EDI                             ; 0059d6bd
        ;   Label: LAB_0059d6bd
    MOV EDX,dword ptr [EBX + 0x834]     ; 0059d6be
    INC EDX                             ; 0059d6c4
    MOV EAX,0x2                         ; 0059d6c5
    MOV dword ptr [EBX + 0x834],EDX     ; 0059d6ca
    POP EBP                             ; 0059d6d0
    POP EDI                             ; 0059d6d1
    POP ESI                             ; 0059d6d2
    POP EBX                             ; 0059d6d3
    RET                                 ; 0059d6d4
    XOR EAX,EAX                         ; 0059d6d5
        ;   Label: LAB_0059d6d5
    POP EBP                             ; 0059d6d7
    POP EDI                             ; 0059d6d8
    POP ESI                             ; 0059d6d9
    POP EBX                             ; 0059d6da
    RET                                 ; 0059d6db
    MOV EAX,0x1                         ; 0059d6dc
        ;   Label: LAB_0059d6dc
    POP EBP                             ; 0059d6e1
    POP EDI                             ; 0059d6e2
    POP ESI                             ; 0059d6e3
    POP EBX                             ; 0059d6e4
    RET                                 ; 0059d6e5

