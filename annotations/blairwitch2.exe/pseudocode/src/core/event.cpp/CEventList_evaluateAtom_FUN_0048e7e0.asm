; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0048e7e0(CEventList *this_ptr,char *expression,int *parse_position)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; int *            Stack[0xc]:4   parse_position
; Local Variables:
; undefined8       Stack[-0x10c0]:8  local_10c0
; undefined4       Stack[-0x10b8]:4  local_10b8
; undefined        Stack[-0x10b4]:1  local_10b4
; undefined        Stack[-0xfb4]:1  local_fb4
; undefined        Stack[-0xeb4]:1  local_eb4
; undefined1       Stack[-0xeb3]:1  local_eb3
; undefined        Stack[-0xdb4]:1  local_db4
; undefined1       Stack[-0xdb3]:1  local_db3
; undefined        Stack[-0xcb4]:1  local_cb4
; undefined1       Stack[-0xbb5]:1  local_bb5
; undefined        Stack[-0xbb4]:1  local_bb4
; undefined        Stack[-0xbb3]:1  local_bb3
; undefined        Stack[-0xaec]:1  local_aec
; undefined        Stack[-0xaeb]:1  local_aeb
; undefined1       Stack[-0xa25]:1  local_a25
; undefined        Stack[-0xa24]:1  local_a24
; undefined        Stack[-0xa23]:1  local_a23
; undefined        Stack[-0x9c0]:1  local_9c0
; undefined        Stack[-0x9bf]:1  local_9bf
; undefined        Stack[-0x95c]:1  local_95c
; undefined1       Stack[-0x8f9]:1  local_8f9
; undefined        Stack[-0x8f8]:1  local_8f8
; undefined        Stack[-0x8f7]:1  local_8f7
; undefined1       Stack[-0x895]:1  local_895
; undefined        Stack[-0x894]:1  local_894
; undefined        Stack[-0x893]:1  local_893
; undefined        Stack[-0x830]:1  local_830
; undefined        Stack[-0x7cc]:1  local_7cc
; undefined        Stack[-0x768]:1  local_768
; undefined        Stack[-0x704]:1  local_704
; undefined        Stack[-0x703]:1  local_703
; undefined        Stack[-0x6a0]:1  local_6a0
; undefined        Stack[-0x69f]:1  local_69f
; undefined        Stack[-0x63c]:1  local_63c
; undefined        Stack[-0x63b]:1  local_63b
; undefined1       Stack[-0x5d9]:1  local_5d9
; undefined        Stack[-0x5d8]:1  local_5d8
; undefined        Stack[-0x5d7]:1  local_5d7
; undefined        Stack[-0x574]:1  local_574
; undefined        Stack[-0x510]:1  local_510
; undefined        Stack[-0x4ac]:1  local_4ac
; undefined        Stack[-0x448]:1  local_448
; undefined        Stack[-0x3e4]:1  local_3e4
; undefined        Stack[-0x380]:1  local_380
; undefined        Stack[-0x37f]:1  local_37f
; undefined1       Stack[-0x31d]:1  local_31d
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x31b]:1  local_31b
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x2b7]:1  local_2b7
; undefined        Stack[-0x254]:1  local_254
; undefined        Stack[-0x253]:1  local_253
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined        Stack[-0x1ef]:1  local_1ef
; undefined        Stack[-0x18c]:1  local_18c
; undefined1       Stack[-0x18b]:1  local_18b
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0 at 00490ed3
;
; Referenced Globals:
;   void* switchdataD_0048e7bc = 0048ec7b
;   undefined4 DAT_005d2e2b
;   undefined4 DAT_005d2e2d
;   undefined4 DAT_005d2e30
;   undefined4 DAT_005d2e33
;   undefined4 DAT_005d2e36
;   undefined4 DAT_005d2e38
;   undefined4 DAT_005d2e3b
;   TerminatedCString s_Unexpected_end_of_string_005d43ea
;   undefined4 s_nexpected_end_of_string_005d43ea+1
;   undefined4 s_expected_end_of_string_005d43ea+2
;   undefined4 s_xpected_end_of_string_005d43ea+3
;   TerminatedCString s_Matching_is_missing_005d4403
;   undefined4 s_Matching_is_missing_005d4403+1
;   undefined4 s_Matching_is_missing_005d4403+2
;   ... and 247 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0
;   core_event.cpp_CEventList_getCounterValue_FUN_00491510
;   core_event.cpp_CEventList_getSfxHandle_FUN_00491920
;   core_event.cpp_CEventList_resolveVariable_FUN_0048e2b0
;   core_event.cpp_formatEventError_FUN_00488ba0
;   core_event.cpp_isValidIdentifierChar_FUN_00491c70
;   core_event.cpp_parseVectorLocation_FUN_00488e30
;   core_event.cpp_resolveActorByName_FUN_00488d00
;   core_game.cpp_FUN_004bb4e0
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70
;   core_inv.cpp_CInventory_findItemByName_FUN_004db830
;   core_inv.cpp_CInventory_hasItemOfClass_FUN_004db880
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e7e0
        ;   Label: core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0
    PUSH ESI                            ; 0048e7e1
    PUSH EDI                            ; 0048e7e2
    PUSH EBP                            ; 0048e7e3
    MOV EBP,ESP                         ; 0048e7e4
    SUB ESP,0x10ac                      ; 0048e7e6
    AND ESP,0xfffffff8                  ; 0048e7ec
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0048e7ef
    MOV ESI,dword ptr [EBP + 0x18]      ; 0048e7f2
    MOV EAX,EBX                         ; 0048e7f5
    MOV EDX,dword ptr [EAX]             ; 0048e7f7
        ;   Label: LAB_0048e7f7
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 0048e7f9
    INC DL                              ; 0048e7fc
    AND EDX,0xff                        ; 0048e7fe
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048e804 | DAT_0061ed94
    JNZ 0x0048e862                      ; 0048e80b
        ;   XREF to: 0048e862 (CONDITIONAL_JUMP)  ; LAB_0048e862
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e80d
    MOV EDX,dword ptr [EBX]             ; 0048e810
    ADD EAX,EDX                         ; 0048e812
    CMP byte ptr [EAX],0x2e             ; 0048e814
    JNZ 0x0048e81e                      ; 0048e817
        ;   XREF to: 0048e81e (CONDITIONAL_JUMP)  ; LAB_0048e81e
    LEA ECX,[EDX + 0x1]                 ; 0048e819
    MOV dword ptr [EBX],ECX             ; 0048e81c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e81e
        ;   Label: LAB_0048e81e
    MOV ESI,dword ptr [EBX]             ; 0048e821
    ADD EAX,ESI                         ; 0048e823
    MOV DL,byte ptr [EAX]               ; 0048e825
    TEST DL,DL                          ; 0048e827
    JZ 0x0048e866                       ; 0048e829
        ;   XREF to: 0048e866 (CONDITIONAL_JUMP)  ; LAB_0048e866
    CMP DL,0x28                         ; 0048e82b
    JZ 0x0048e891                       ; 0048e82e
        ;   XREF to: 0048e891 (CONDITIONAL_JUMP)  ; LAB_0048e891
    CMP DL,0x21                         ; 0048e830
    JNZ 0x0048e916                      ; 0048e833
        ;   XREF to: 0048e916 (CONDITIONAL_JUMP)  ; LAB_0048e916
    PUSH EBX                            ; 0048e839
    MOV EDI,dword ptr [EBP + 0x18]      ; 0048e83a
    PUSH EDI                            ; 0048e83d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048e83e
    LEA EDX,[ESI + 0x1]                 ; 0048e841
    PUSH EAX                            ; 0048e844
    MOV dword ptr [EBX],EDX             ; 0048e845
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 ; 0048e847
        ;   XREF to: 0048e7e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 0048e84c
    TEST EAX,EAX                        ; 0048e84f
    JL 0x0048e85b                       ; 0048e851
        ;   XREF to: 0048e85b (CONDITIONAL_JUMP)  ; LAB_0048e85b
    SETZ AL                             ; 0048e853
    AND EAX,0xff                        ; 0048e856
    MOV ESP,EBP                         ; 0048e85b
        ;   Label: LAB_0048e85b
    POP EBP                             ; 0048e85d
        ;   Label: LAB_0048e85d
    POP EDI                             ; 0048e85e
    POP ESI                             ; 0048e85f
    POP EBX                             ; 0048e860
    RET                                 ; 0048e861
    INC dword ptr [EAX]                 ; 0048e862
        ;   Label: LAB_0048e862
    JMP 0x0048e7f7                      ; 0048e864
        ;   XREF to: 0048e7f7 (UNCONDITIONAL_JUMP)  ; LAB_0048e7f7
    MOV ESI,0x5d43ea                    ; 0048e866 | = "Unexpected end of string"
        ;   Label: LAB_0048e866
    MOV EDI,0x1c3dd10                   ; 0048e86b
    PUSH EDI                            ; 0048e870 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048e871 | = "Unexpected end of string" | s_expected_end_of_string_005d43ea+2
        ;   Label: LAB_0048e871
    MOV byte ptr [EDI],AL               ; 0048e873 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048e875
    JZ 0x0048e889                       ; 0048e877
        ;   XREF to: 0048e889 (CONDITIONAL_JUMP)  ; LAB_0048e889
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e879 | s_nexpected_end_of_string_005d43ea+1 | s_xpected_end_of_string_005d43ea+3
    ADD ESI,0x2                         ; 0048e87c
    MOV byte ptr [EDI + 0x1],AL         ; 0048e87f | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048e882
    CMP AL,0x0                          ; 0048e885
    JNZ 0x0048e871                      ; 0048e887
        ;   XREF to: 0048e871 (CONDITIONAL_JUMP)  ; LAB_0048e871
    POP EDI                             ; 0048e889
        ;   Label: LAB_0048e889
    MOV EAX,0xffffffff                  ; 0048e88a
    JMP 0x0048e85b                      ; 0048e88f
        ;   XREF to: 0048e85b (UNCONDITIONAL_JUMP)  ; LAB_0048e85b
    PUSH EBX                            ; 0048e891
        ;   Label: LAB_0048e891
    MOV ECX,dword ptr [EBP + 0x18]      ; 0048e892
    MOV EDI,dword ptr [EBX]             ; 0048e895
    PUSH ECX                            ; 0048e897
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048e898
    INC EDI                             ; 0048e89b
    PUSH ESI                            ; 0048e89c
    MOV dword ptr [EBX],EDI             ; 0048e89d
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0 ; 0048e89f
        ;   XREF to: 00490ec0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 0048e8a4
    MOV ESI,EAX                         ; 0048e8a7
    TEST EAX,EAX                        ; 0048e8a9
    JL 0x0048e85b                       ; 0048e8ab
        ;   XREF to: 0048e85b (CONDITIONAL_JUMP)  ; LAB_0048e85b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e8ad
    MOV EDX,dword ptr [EBX]             ; 0048e8b0
    ADD EAX,EDX                         ; 0048e8b2
    CMP byte ptr [EAX],0x29             ; 0048e8b4
    JNZ 0x0048e8dd                      ; 0048e8b7
        ;   XREF to: 0048e8dd (CONDITIONAL_JUMP)  ; LAB_0048e8dd
    MOV EDI,dword ptr [EBP + 0x18]      ; 0048e8b9
    LEA ECX,[EDX + 0x1]                 ; 0048e8bc
    MOV EAX,EBX                         ; 0048e8bf
    MOV dword ptr [EBX],ECX             ; 0048e8c1
    MOV EDX,dword ptr [EAX]             ; 0048e8c3
        ;   Label: LAB_0048e8c3
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 0048e8c5
    INC DL                              ; 0048e8c8
    AND EDX,0xff                        ; 0048e8ca
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048e8d0 | DAT_0061ed94
    JZ 0x0048e90d                       ; 0048e8d7
        ;   XREF to: 0048e90d (CONDITIONAL_JUMP)  ; LAB_0048e90d
    INC dword ptr [EAX]                 ; 0048e8d9
    JMP 0x0048e8c3                      ; 0048e8db
        ;   XREF to: 0048e8c3 (UNCONDITIONAL_JUMP)  ; LAB_0048e8c3
    MOV ESI,0x5d4403                    ; 0048e8dd | = "Matching ')' is missing"
        ;   Label: LAB_0048e8dd
    MOV EDI,0x1c3dd10                   ; 0048e8e2
    PUSH EDI                            ; 0048e8e7 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048e8e8 | = "Matching ')' is missing" | s_Matching_is_missing_005d4403+2
        ;   Label: LAB_0048e8e8
    MOV byte ptr [EDI],AL               ; 0048e8ea | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048e8ec
    JZ 0x0048e900                       ; 0048e8ee
        ;   XREF to: 0048e900 (CONDITIONAL_JUMP)  ; LAB_0048e900
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e8f0 | s_Matching_is_missing_005d4403+1 | s_Matching_is_missing_005d4403+3
    ADD ESI,0x2                         ; 0048e8f3
    MOV byte ptr [EDI + 0x1],AL         ; 0048e8f6 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048e8f9
    CMP AL,0x0                          ; 0048e8fc
    JNZ 0x0048e8e8                      ; 0048e8fe
        ;   XREF to: 0048e8e8 (CONDITIONAL_JUMP)  ; LAB_0048e8e8
    POP EDI                             ; 0048e900
        ;   Label: LAB_0048e900
    MOV EAX,0xffffffff                  ; 0048e901
    MOV ESP,EBP                         ; 0048e906
    POP EBP                             ; 0048e908
    POP EDI                             ; 0048e909
    POP ESI                             ; 0048e90a
    POP EBX                             ; 0048e90b
    RET                                 ; 0048e90c
    MOV EAX,ESI                         ; 0048e90d
        ;   Label: LAB_0048e90d
    MOV ESP,EBP                         ; 0048e90f
    POP EBP                             ; 0048e911
    POP EDI                             ; 0048e912
    POP ESI                             ; 0048e913
    POP EBX                             ; 0048e914
    RET                                 ; 0048e915
    MOV AL,DL                           ; 0048e916
        ;   Label: LAB_0048e916
    AND EAX,0xff                        ; 0048e918
    PUSH EAX                            ; 0048e91d
    CALL core_event.cpp_isValidIdentifierChar_FUN_00491c70 ; 0048e91e
        ;   XREF to: 00491c70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_00491c70(int ch)
    ADD ESP,0x4                         ; 0048e923
    TEST EAX,EAX                        ; 0048e926
    JZ 0x0048e985                       ; 0048e928
        ;   XREF to: 0048e985 (CONDITIONAL_JUMP)  ; LAB_0048e985
    LEA ESI,[ESP + 0xf34]               ; 0048e92a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e931
        ;   Label: LAB_0048e931
    ADD EAX,dword ptr [EBX]             ; 0048e934
    MOV AL,byte ptr [EAX]               ; 0048e936
    MOV byte ptr [ESI],AL               ; 0048e938
    MOV ECX,dword ptr [EBX]             ; 0048e93a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e93c
    INC ECX                             ; 0048e93f
    ADD EAX,ECX                         ; 0048e940
    MOV dword ptr [EBX],ECX             ; 0048e942
    INC ESI                             ; 0048e944
    MOV AL,byte ptr [EAX]               ; 0048e945
    AND EAX,0xff                        ; 0048e947
    PUSH EAX                            ; 0048e94c
    CALL core_event.cpp_isValidIdentifierChar_FUN_00491c70 ; 0048e94d
        ;   XREF to: 00491c70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_00491c70(int ch)
    ADD ESP,0x4                         ; 0048e952
    TEST EAX,EAX                        ; 0048e955
    JNZ 0x0048e931                      ; 0048e957
        ;   XREF to: 0048e931 (CONDITIONAL_JUMP)  ; LAB_0048e931
    MOV byte ptr [ESI],0x0              ; 0048e959
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048e95c
    ADD EAX,dword ptr [EBX]             ; 0048e95f
    CMP byte ptr [EAX],0x28             ; 0048e961
    JZ 0x0048e9d0                       ; 0048e964
        ;   XREF to: 0048e9d0 (CONDITIONAL_JUMP)  ; LAB_0048e9d0
    MOV EDI,dword ptr [EBP + 0x18]      ; 0048e966
    MOV EAX,EBX                         ; 0048e969
    MOV EDX,dword ptr [EAX]             ; 0048e96b
        ;   Label: LAB_0048e96b
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 0048e96d
    INC DL                              ; 0048e970
    AND EDX,0xff                        ; 0048e972
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048e978 | DAT_0061ed94
    JZ 0x0048e9b5                       ; 0048e97f
        ;   XREF to: 0048e9b5 (CONDITIONAL_JUMP)  ; LAB_0048e9b5
    INC dword ptr [EAX]                 ; 0048e981
    JMP 0x0048e96b                      ; 0048e983
        ;   XREF to: 0048e96b (UNCONDITIONAL_JUMP)  ; LAB_0048e96b
    MOV ESI,0x5d441b                    ; 0048e985 | = "Syntax error"
        ;   Label: LAB_0048e985
    MOV EDI,0x1c3dd10                   ; 0048e98a
    PUSH EDI                            ; 0048e98f | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048e990 | = "Syntax error" | s_ntax_error_005d441b+2
        ;   Label: LAB_0048e990
    MOV byte ptr [EDI],AL               ; 0048e992 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048e994
    JZ 0x0048e9a8                       ; 0048e996
        ;   XREF to: 0048e9a8 (CONDITIONAL_JUMP)  ; LAB_0048e9a8
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e998 | s_yntax_error_005d441b+1 | s_tax_error_005d441b+3
    ADD ESI,0x2                         ; 0048e99b
    MOV byte ptr [EDI + 0x1],AL         ; 0048e99e | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048e9a1
    CMP AL,0x0                          ; 0048e9a4
    JNZ 0x0048e990                      ; 0048e9a6
        ;   XREF to: 0048e990 (CONDITIONAL_JUMP)  ; LAB_0048e990
    POP EDI                             ; 0048e9a8
        ;   Label: LAB_0048e9a8
    MOV EAX,0xffffffff                  ; 0048e9a9
    MOV ESP,EBP                         ; 0048e9ae
    POP EBP                             ; 0048e9b0
    POP EDI                             ; 0048e9b1
    POP ESI                             ; 0048e9b2
    POP EBX                             ; 0048e9b3
    RET                                 ; 0048e9b4
    LEA EAX,[ESP + 0xf34]               ; 0048e9b5
        ;   Label: LAB_0048e9b5
    PUSH EAX                            ; 0048e9bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048e9bd
    PUSH EBX                            ; 0048e9c0
    CALL core_event.cpp_CEventList_resolveVariable_FUN_0048e2b0 ; 0048e9c1
        ;   XREF to: 0048e2b0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_resolveVariable_FUN_0048e2b0(CEventList * this_ptr, char * identifier)
    ADD ESP,0x8                         ; 0048e9c6
    MOV ESP,EBP                         ; 0048e9c9
    POP EBP                             ; 0048e9cb
    POP EDI                             ; 0048e9cc
    POP ESI                             ; 0048e9cd
    POP EBX                             ; 0048e9ce
    RET                                 ; 0048e9cf
    PUSH 0x5d4428                       ; 0048e9d0 | DAT_005d4428
        ;   Label: LAB_0048e9d0
    LEA EAX,[ESP + 0xf38]               ; 0048e9d5
    MOV ECX,0xffffffff                  ; 0048e9dc
    PUSH EAX                            ; 0048e9e1
    MOV dword ptr [ESP + 0xfc4],ECX     ; 0048e9e2
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048e9e9
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048e9ee
    TEST EAX,EAX                        ; 0048e9f1
    JNZ 0x0048ee2f                      ; 0048e9f3
        ;   XREF to: 0048ee2f (CONDITIONAL_JUMP)  ; LAB_0048ee2f
    LEA EAX,[ESP + 0xfc0]               ; 0048e9f9
    PUSH EAX                            ; 0048ea00
    LEA EAX,[ESP + 0xaec]               ; 0048ea01
    PUSH EAX                            ; 0048ea08
    LEA EAX,[ESP + 0x7d0]               ; 0048ea09
    MOV ESI,0xffffffff                  ; 0048ea10
    PUSH EAX                            ; 0048ea15
    LEA EAX,[ESP + 0xedc]               ; 0048ea16
    MOV dword ptr [ESP + 0xfcc],ESI     ; 0048ea1d
    PUSH EAX                            ; 0048ea24
    MOV EAX,0x5d442c                    ; 0048ea25 | = " ( %s %s %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 0048ea2a
    PUSH EAX                            ; 0048ea2c | = " ( %s %s %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048ea2d
    ADD EAX,EDI                         ; 0048ea30
    PUSH EAX                            ; 0048ea32
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048ea33
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x18                        ; 0048ea38
    CMP dword ptr [ESP + 0xfc0],0x3     ; 0048ea3b
    JL 0x0048eaac                       ; 0048ea43
        ;   XREF to: 0048eaac (CONDITIONAL_JUMP)  ; LAB_0048eaac
    LEA ESI,[ESP + 0xed0]               ; 0048ea45
    MOV EDI,ESI                         ; 0048ea4c
    SUB ECX,ECX                         ; 0048ea4e
    DEC ECX                             ; 0048ea50
    XOR EAX,EAX                         ; 0048ea51
    SCASB.REPNE ES:EDI                  ; 0048ea53
    NOT ECX                             ; 0048ea55
    DEC ECX                             ; 0048ea57
    MOV EDI,ECX                         ; 0048ea58
    TEST ECX,ECX                        ; 0048ea5a
    JLE 0x0048ea75                      ; 0048ea5c
        ;   XREF to: 0048ea75 (CONDITIONAL_JUMP)  ; LAB_0048ea75
    LEA EAX,[ECX + ESI*0x1]             ; 0048ea5e
    MOV DL,byte ptr [EAX + -0x1]        ; 0048ea61
        ;   Label: LAB_0048ea61
    INC DL                              ; 0048ea64
    AND EDX,0xff                        ; 0048ea66
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048ea6c | DAT_0061ed94
    JNZ 0x0048eadc                      ; 0048ea73
        ;   XREF to: 0048eadc (CONDITIONAL_JUMP)  ; LAB_0048eadc
    LEA EAX,[ESI + EDI*0x1]             ; 0048ea75
        ;   Label: LAB_0048ea75
    MOV byte ptr [EAX],0x0              ; 0048ea78
    LEA EAX,[ESI + 0x1]                 ; 0048ea7b
    MOV dword ptr [ESP + 0xfc8],EAX     ; 0048ea7e
    MOV AL,byte ptr [ESI]               ; 0048ea85
        ;   Label: LAB_0048ea85
    INC AL                              ; 0048ea87
    AND EAX,0xff                        ; 0048ea89
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048ea8e | DAT_0061ed94
    JZ 0x0048eae8                       ; 0048ea95
        ;   XREF to: 0048eae8 (CONDITIONAL_JUMP)  ; LAB_0048eae8
    PUSH EDI                            ; 0048ea97
    MOV EAX,dword ptr [ESP + 0xfcc]     ; 0048ea98
    PUSH EAX                            ; 0048ea9f
    PUSH ESI                            ; 0048eaa0
    DEC EDI                             ; 0048eaa1
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048eaa2
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048eaa7
    JMP 0x0048ea85                      ; 0048eaaa
        ;   XREF to: 0048ea85 (UNCONDITIONAL_JUMP)  ; LAB_0048ea85
    MOV ESI,0x5d4440                    ; 0048eaac | = "Error parsing cmp parameters."
        ;   Label: LAB_0048eaac
    MOV EDI,0x1c3dd10                   ; 0048eab1
    PUSH EDI                            ; 0048eab6 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048eab7 | = "Error parsing cmp parameters." | s_Error_parsing_cmp_parame_005d4440+2
        ;   Label: LAB_0048eab7
    MOV byte ptr [EDI],AL               ; 0048eab9 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048eabb
    JZ 0x0048eacf                       ; 0048eabd
        ;   XREF to: 0048eacf (CONDITIONAL_JUMP)  ; LAB_0048eacf
    MOV AL,byte ptr [ESI + 0x1]         ; 0048eabf | s_Error_parsing_cmp_parame_005d4440+1 | s_Error_parsing_cmp_parame_005d4440+3
    ADD ESI,0x2                         ; 0048eac2
    MOV byte ptr [EDI + 0x1],AL         ; 0048eac5 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048eac8
    CMP AL,0x0                          ; 0048eacb
    JNZ 0x0048eab7                      ; 0048eacd
        ;   XREF to: 0048eab7 (CONDITIONAL_JUMP)  ; LAB_0048eab7
    POP EDI                             ; 0048eacf
        ;   Label: LAB_0048eacf
    MOV EAX,0xffffffff                  ; 0048ead0
    MOV ESP,EBP                         ; 0048ead5
    POP EBP                             ; 0048ead7
    POP EDI                             ; 0048ead8
    POP ESI                             ; 0048ead9
    POP EBX                             ; 0048eada
    RET                                 ; 0048eadb
    DEC EDI                             ; 0048eadc
        ;   Label: LAB_0048eadc
    DEC EAX                             ; 0048eadd
    TEST EDI,EDI                        ; 0048eade
    JG 0x0048ea61                       ; 0048eae0
        ;   XREF to: 0048ea61 (CONDITIONAL_JUMP)  ; LAB_0048ea61
    JMP 0x0048ea75                      ; 0048eae6
        ;   XREF to: 0048ea75 (UNCONDITIONAL_JUMP)  ; LAB_0048ea75
    LEA EDI,[ESP + 0xae8]               ; 0048eae8
        ;   Label: LAB_0048eae8
    LEA ESI,[ESP + 0xae8]               ; 0048eaef
    SUB ECX,ECX                         ; 0048eaf6
    DEC ECX                             ; 0048eaf8
    XOR EAX,EAX                         ; 0048eaf9
    SCASB.REPNE ES:EDI                  ; 0048eafb
    NOT ECX                             ; 0048eafd
    DEC ECX                             ; 0048eaff
    MOV EDI,ECX                         ; 0048eb00
    TEST ECX,ECX                        ; 0048eb02
    JLE 0x0048eb23                      ; 0048eb04
        ;   XREF to: 0048eb23 (CONDITIONAL_JUMP)  ; LAB_0048eb23
    LEA EAX,[ESP + 0xae8]               ; 0048eb06
    ADD EAX,ECX                         ; 0048eb0d
    MOV DL,byte ptr [EAX + -0x1]        ; 0048eb0f
        ;   Label: LAB_0048eb0f
    INC DL                              ; 0048eb12
    AND EDX,0xff                        ; 0048eb14
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048eb1a | DAT_0061ed94
    JNZ 0x0048eb5a                      ; 0048eb21
        ;   XREF to: 0048eb5a (CONDITIONAL_JUMP)  ; LAB_0048eb5a
    LEA EAX,[ESI + EDI*0x1]             ; 0048eb23
        ;   Label: LAB_0048eb23
    MOV byte ptr [EAX],0x0              ; 0048eb26
    LEA EAX,[ESI + 0x1]                 ; 0048eb29
    MOV dword ptr [ESP + 0xfcc],EAX     ; 0048eb2c
    MOV AL,byte ptr [ESI]               ; 0048eb33
        ;   Label: LAB_0048eb33
    INC AL                              ; 0048eb35
    AND EAX,0xff                        ; 0048eb37
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048eb3c | DAT_0061ed94
    JZ 0x0048eb62                       ; 0048eb43
        ;   XREF to: 0048eb62 (CONDITIONAL_JUMP)  ; LAB_0048eb62
    PUSH EDI                            ; 0048eb45
    MOV EDX,dword ptr [ESP + 0xfd0]     ; 0048eb46
    PUSH EDX                            ; 0048eb4d
    PUSH ESI                            ; 0048eb4e
    DEC EDI                             ; 0048eb4f
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048eb50
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048eb55
    JMP 0x0048eb33                      ; 0048eb58
        ;   XREF to: 0048eb33 (UNCONDITIONAL_JUMP)  ; LAB_0048eb33
    DEC EDI                             ; 0048eb5a
        ;   Label: LAB_0048eb5a
    DEC EAX                             ; 0048eb5b
    TEST EDI,EDI                        ; 0048eb5c
    JG 0x0048eb0f                       ; 0048eb5e
        ;   XREF to: 0048eb0f (CONDITIONAL_JUMP)  ; LAB_0048eb0f
    JMP 0x0048eb23                      ; 0048eb60
        ;   XREF to: 0048eb23 (UNCONDITIONAL_JUMP)  ; LAB_0048eb23
    LEA EDI,[ESP + 0x7c8]               ; 0048eb62
        ;   Label: LAB_0048eb62
    LEA ESI,[ESP + 0x7c8]               ; 0048eb69
    SUB ECX,ECX                         ; 0048eb70
    DEC ECX                             ; 0048eb72
    XOR EAX,EAX                         ; 0048eb73
    SCASB.REPNE ES:EDI                  ; 0048eb75
    NOT ECX                             ; 0048eb77
    DEC ECX                             ; 0048eb79
    MOV EDI,ECX                         ; 0048eb7a
    TEST ECX,ECX                        ; 0048eb7c
    JLE 0x0048eb9d                      ; 0048eb7e
        ;   XREF to: 0048eb9d (CONDITIONAL_JUMP)  ; LAB_0048eb9d
    LEA EAX,[ESP + 0x7c8]               ; 0048eb80
    ADD EAX,ECX                         ; 0048eb87
    MOV DL,byte ptr [EAX + -0x1]        ; 0048eb89
        ;   Label: LAB_0048eb89
    INC DL                              ; 0048eb8c
    AND EDX,0xff                        ; 0048eb8e
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048eb94 | DAT_0061ed94
    JNZ 0x0048ebd4                      ; 0048eb9b
        ;   XREF to: 0048ebd4 (CONDITIONAL_JUMP)  ; LAB_0048ebd4
    LEA EAX,[ESI + EDI*0x1]             ; 0048eb9d
        ;   Label: LAB_0048eb9d
    MOV byte ptr [EAX],0x0              ; 0048eba0
    LEA EAX,[ESI + 0x1]                 ; 0048eba3
    MOV dword ptr [ESP + 0xfd4],EAX     ; 0048eba6
    MOV AL,byte ptr [ESI]               ; 0048ebad
        ;   Label: LAB_0048ebad
    INC AL                              ; 0048ebaf
    AND EAX,0xff                        ; 0048ebb1
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048ebb6 | DAT_0061ed94
    JZ 0x0048ebdc                       ; 0048ebbd
        ;   XREF to: 0048ebdc (CONDITIONAL_JUMP)  ; LAB_0048ebdc
    PUSH EDI                            ; 0048ebbf
    MOV EAX,dword ptr [ESP + 0xfd8]     ; 0048ebc0
    PUSH EAX                            ; 0048ebc7
    PUSH ESI                            ; 0048ebc8
    DEC EDI                             ; 0048ebc9
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048ebca
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048ebcf
    JMP 0x0048ebad                      ; 0048ebd2
        ;   XREF to: 0048ebad (UNCONDITIONAL_JUMP)  ; LAB_0048ebad
    DEC EDI                             ; 0048ebd4
        ;   Label: LAB_0048ebd4
    DEC EAX                             ; 0048ebd5
    TEST EDI,EDI                        ; 0048ebd6
    JG 0x0048eb89                       ; 0048ebd8
        ;   XREF to: 0048eb89 (CONDITIONAL_JUMP)  ; LAB_0048eb89
    JMP 0x0048eb9d                      ; 0048ebda
        ;   XREF to: 0048eb9d (UNCONDITIONAL_JUMP)  ; LAB_0048eb9d
    PUSH 0x5d2e2b                       ; 0048ebdc | DAT_005d2e2b
        ;   Label: LAB_0048ebdc
    LEA EAX,[ESP + 0x7cc]               ; 0048ebe1
    PUSH EAX                            ; 0048ebe8
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ebe9
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ebee
    TEST EAX,EAX                        ; 0048ebf1
    JNZ 0x0048ecac                      ; 0048ebf3
        ;   XREF to: 0048ecac (CONDITIONAL_JUMP)  ; LAB_0048ecac
    MOV EDI,EAX                         ; 0048ebf9
        ;   Label: LAB_0048ebf9
    CMP EAX,0x6                         ; 0048ebfb
    JZ 0x0048ed65                       ; 0048ebfe
        ;   XREF to: 0048ed65 (CONDITIONAL_JUMP)  ; LAB_0048ed65
    MOV EAX,dword ptr [ESP + 0xfc0]     ; 0048ec04
    MOV ECX,dword ptr [EBX]             ; 0048ec0b
    ADD ECX,EAX                         ; 0048ec0d
    LEA EAX,[ESP + 0xfd8]               ; 0048ec0f
    PUSH EAX                            ; 0048ec16
    PUSH 0x5d2e3b                       ; 0048ec17 | DAT_005d2e3b
    LEA EAX,[ESP + 0xed8]               ; 0048ec1c
    PUSH EAX                            ; 0048ec23
    MOV dword ptr [EBX],ECX             ; 0048ec24
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048ec26
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048ec2b
    CMP EAX,0x1                         ; 0048ec2e
    JNZ 0x0048ed95                      ; 0048ec31
        ;   XREF to: 0048ed95 (CONDITIONAL_JUMP)  ; LAB_0048ed95
    MOV ESI,dword ptr [ESP + 0xfd8]     ; 0048ec37
    LEA EAX,[ESP + 0x102c]              ; 0048ec3e
        ;   Label: LAB_0048ec3e
    PUSH EAX                            ; 0048ec45
    PUSH 0x5d2e3b                       ; 0048ec46 | DAT_005d2e3b
    LEA EAX,[ESP + 0xaf0]               ; 0048ec4b
    PUSH EAX                            ; 0048ec52
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048ec53
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048ec58
    CMP EAX,0x1                         ; 0048ec5b
    JNZ 0x0048edb3                      ; 0048ec5e
        ;   XREF to: 0048edb3 (CONDITIONAL_JUMP)  ; LAB_0048edb3
    MOV EAX,dword ptr [ESP + 0x102c]    ; 0048ec64
    CMP EDI,0x5                         ; 0048ec6b
    JA 0x0048ee07                       ; 0048ec6e
        ;   XREF to: 0048ee07 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x48e7bc]  ; 0048ec74 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 0048ec7b
        ;   Label: caseD_0
    SETL AL                             ; 0048ec7d
    AND EAX,0xff                        ; 0048ec80
        ;   Label: LAB_0048ec80
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048ec85
        ;   Label: LAB_0048ec85
    MOV EDX,dword ptr [EBP + 0x18]      ; 0048ec8c
        ;   Label: LAB_0048ec8c
    MOV EAX,dword ptr [EBX]             ; 0048ec8f
        ;   Label: LAB_0048ec8f
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0048ec91
    INC AL                              ; 0048ec94
    AND EAX,0xff                        ; 0048ec96
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048ec9b | DAT_0061ed94
    JZ 0x00490eb1                       ; 0048eca2
        ;   XREF to: 00490eb1 (CONDITIONAL_JUMP)  ; LAB_00490eb1
    INC dword ptr [EBX]                 ; 0048eca8
    JMP 0x0048ec8f                      ; 0048ecaa
        ;   XREF to: 0048ec8f (UNCONDITIONAL_JUMP)  ; LAB_0048ec8f
    PUSH 0x5d2e2d                       ; 0048ecac | DAT_005d2e2d
        ;   Label: LAB_0048ecac
    LEA EAX,[ESP + 0x7cc]               ; 0048ecb1
    PUSH EAX                            ; 0048ecb8
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ecb9
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ecbe
    TEST EAX,EAX                        ; 0048ecc1
    JNZ 0x0048eccf                      ; 0048ecc3
        ;   XREF to: 0048eccf (CONDITIONAL_JUMP)  ; LAB_0048eccf
    MOV EAX,0x1                         ; 0048ecc5
    JMP 0x0048ebf9                      ; 0048ecca
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    PUSH 0x5d2e30                       ; 0048eccf | DAT_005d2e30
        ;   Label: LAB_0048eccf
    LEA EAX,[ESP + 0x7cc]               ; 0048ecd4
    PUSH EAX                            ; 0048ecdb
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ecdc
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ece1
    TEST EAX,EAX                        ; 0048ece4
    JNZ 0x0048ecf2                      ; 0048ece6
        ;   XREF to: 0048ecf2 (CONDITIONAL_JUMP)  ; LAB_0048ecf2
    MOV EAX,0x2                         ; 0048ece8
    JMP 0x0048ebf9                      ; 0048eced
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    PUSH 0x5d2e33                       ; 0048ecf2 | DAT_005d2e33
        ;   Label: LAB_0048ecf2
    LEA EAX,[ESP + 0x7cc]               ; 0048ecf7
    PUSH EAX                            ; 0048ecfe
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ecff
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ed04
    TEST EAX,EAX                        ; 0048ed07
    JNZ 0x0048ed15                      ; 0048ed09
        ;   XREF to: 0048ed15 (CONDITIONAL_JUMP)  ; LAB_0048ed15
    MOV EAX,0x3                         ; 0048ed0b
    JMP 0x0048ebf9                      ; 0048ed10
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    PUSH 0x5d2e36                       ; 0048ed15 | DAT_005d2e36
        ;   Label: LAB_0048ed15
    LEA EAX,[ESP + 0x7cc]               ; 0048ed1a
    PUSH EAX                            ; 0048ed21
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ed22
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ed27
    TEST EAX,EAX                        ; 0048ed2a
    JNZ 0x0048ed38                      ; 0048ed2c
        ;   XREF to: 0048ed38 (CONDITIONAL_JUMP)  ; LAB_0048ed38
    MOV EAX,0x5                         ; 0048ed2e
    JMP 0x0048ebf9                      ; 0048ed33
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    PUSH 0x5d2e38                       ; 0048ed38 | DAT_005d2e38
        ;   Label: LAB_0048ed38
    LEA EAX,[ESP + 0x7cc]               ; 0048ed3d
    PUSH EAX                            ; 0048ed44
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0048ed45
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ed4a
    TEST EAX,EAX                        ; 0048ed4d
    JNZ 0x0048ed5b                      ; 0048ed4f
        ;   XREF to: 0048ed5b (CONDITIONAL_JUMP)  ; LAB_0048ed5b
    MOV EAX,0x4                         ; 0048ed51
    JMP 0x0048ebf9                      ; 0048ed56
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    MOV EAX,0x6                         ; 0048ed5b
        ;   Label: LAB_0048ed5b
    JMP 0x0048ebf9                      ; 0048ed60
        ;   XREF to: 0048ebf9 (UNCONDITIONAL_JUMP)  ; LAB_0048ebf9
    MOV ESI,0x5d445e                    ; 0048ed65 | = "Invalid relational operator in cmp st..."
        ;   Label: LAB_0048ed65
    MOV EDI,0x1c3dd10                   ; 0048ed6a
    PUSH EDI                            ; 0048ed6f | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048ed70 | = "Invalid relational operator in cmp st..." | s_Invalid_relational_opera_005d445e+2
        ;   Label: LAB_0048ed70
    MOV byte ptr [EDI],AL               ; 0048ed72 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048ed74
    JZ 0x0048ed88                       ; 0048ed76
        ;   XREF to: 0048ed88 (CONDITIONAL_JUMP)  ; LAB_0048ed88
    MOV AL,byte ptr [ESI + 0x1]         ; 0048ed78 | s_Invalid_relational_opera_005d445e+1 | s_Invalid_relational_opera_005d445e+3
    ADD ESI,0x2                         ; 0048ed7b
    MOV byte ptr [EDI + 0x1],AL         ; 0048ed7e | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048ed81
    CMP AL,0x0                          ; 0048ed84
    JNZ 0x0048ed70                      ; 0048ed86
        ;   XREF to: 0048ed70 (CONDITIONAL_JUMP)  ; LAB_0048ed70
    POP EDI                             ; 0048ed88
        ;   Label: LAB_0048ed88
    MOV EAX,0xffffffff                  ; 0048ed89
    MOV ESP,EBP                         ; 0048ed8e
    POP EBP                             ; 0048ed90
    POP EDI                             ; 0048ed91
    POP ESI                             ; 0048ed92
    POP EBX                             ; 0048ed93
    RET                                 ; 0048ed94
    LEA EAX,[ESP + 0xed0]               ; 0048ed95
        ;   Label: LAB_0048ed95
    PUSH EAX                            ; 0048ed9c
    MOV ESI,dword ptr [0x006141f0]      ; 0048ed9d | DAT_006141f0
    PUSH ESI                            ; 0048eda3
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00491510 ; 0048eda4
        ;   XREF to: 00491510 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00491510(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0048eda9
    MOV ESI,EAX                         ; 0048edac
    JMP 0x0048ec3e                      ; 0048edae
        ;   XREF to: 0048ec3e (UNCONDITIONAL_JUMP)  ; LAB_0048ec3e
    LEA EAX,[ESP + 0xae8]               ; 0048edb3
        ;   Label: LAB_0048edb3
    PUSH EAX                            ; 0048edba
    MOV EAX,[0x006141f0]                ; 0048edbb | DAT_006141f0
    PUSH EAX                            ; 0048edc0
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00491510 ; 0048edc1
        ;   XREF to: 00491510 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00491510(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0048edc6
    CMP EDI,0x5                         ; 0048edc9
    JA 0x0048ee07                       ; 0048edcc
        ;   XREF to: 0048ee07 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x48e7bc]  ; 0048edce | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 0048edd5
        ;   Label: caseD_1
    SETLE AL                            ; 0048edd7
    JMP 0x0048ec80                      ; 0048edda
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    CMP ESI,EAX                         ; 0048eddf
        ;   Label: caseD_2
    SETZ AL                             ; 0048ede1
    JMP 0x0048ec80                      ; 0048ede4
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    CMP ESI,EAX                         ; 0048ede9
        ;   Label: caseD_3
    SETNZ AL                            ; 0048edeb
    JMP 0x0048ec80                      ; 0048edee
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    CMP ESI,EAX                         ; 0048edf3
        ;   Label: caseD_5
    SETG AL                             ; 0048edf5
    JMP 0x0048ec80                      ; 0048edf8
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    CMP ESI,EAX                         ; 0048edfd
        ;   Label: caseD_4
    SETGE AL                            ; 0048edff
    JMP 0x0048ec80                      ; 0048ee02
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    MOV EDX,0x5d448b                    ; 0048ee07 | = "..\\core\\event.cpp"
        ;   Label: default
    MOV ECX,0x9e3                       ; 0048ee0c
    PUSH 0x5d449d                       ; 0048ee11 | = "Hell froze."
    MOV dword ptr [0x01d046a0],EDX      ; 0048ee16 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0048ee1c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0048ee22
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0048ee27
    JMP 0x0048ec8c                      ; 0048ee2a
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d44a9                       ; 0048ee2f | = "exists"
        ;   Label: LAB_0048ee2f
    LEA EAX,[ESP + 0xf38]               ; 0048ee34
    PUSH EAX                            ; 0048ee3b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048ee3c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ee41
    TEST EAX,EAX                        ; 0048ee44
    JNZ 0x0048ef75                      ; 0048ee46
        ;   XREF to: 0048ef75 (CONDITIONAL_JUMP)  ; LAB_0048ef75
    LEA EAX,[ESP + 0xfdc]               ; 0048ee4c
    MOV EDI,0xffffffff                  ; 0048ee53
    PUSH EAX                            ; 0048ee58
    LEA EAX,[ESP + 0xe70]               ; 0048ee59
    MOV dword ptr [ESP + 0xfe0],EDI     ; 0048ee60
    PUSH EAX                            ; 0048ee67
    MOV EAX,0x5d44b0                    ; 0048ee68 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 0048ee6d
    PUSH EAX                            ; 0048ee6f | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048ee70
    ADD EAX,EDX                         ; 0048ee73
    PUSH EAX                            ; 0048ee75
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048ee76
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048ee7b
    CMP dword ptr [ESP + 0xfdc],0x3     ; 0048ee7e
    JL 0x0048eeef                       ; 0048ee86
        ;   XREF to: 0048eeef (CONDITIONAL_JUMP)  ; LAB_0048eeef
    LEA ESI,[ESP + 0xe6c]               ; 0048ee88
    MOV EDI,ESI                         ; 0048ee8f
    SUB ECX,ECX                         ; 0048ee91
    DEC ECX                             ; 0048ee93
    XOR EAX,EAX                         ; 0048ee94
    SCASB.REPNE ES:EDI                  ; 0048ee96
    NOT ECX                             ; 0048ee98
    DEC ECX                             ; 0048ee9a
    MOV EDI,ECX                         ; 0048ee9b
    TEST ECX,ECX                        ; 0048ee9d
    JLE 0x0048eeb8                      ; 0048ee9f
        ;   XREF to: 0048eeb8 (CONDITIONAL_JUMP)  ; LAB_0048eeb8
    LEA EAX,[ECX + ESI*0x1]             ; 0048eea1
    MOV DL,byte ptr [EAX + -0x1]        ; 0048eea4
        ;   Label: LAB_0048eea4
    INC DL                              ; 0048eea7
    AND EDX,0xff                        ; 0048eea9
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048eeaf | DAT_0061ed94
    JNZ 0x0048ef1f                      ; 0048eeb6
        ;   XREF to: 0048ef1f (CONDITIONAL_JUMP)  ; LAB_0048ef1f
    LEA EAX,[ESI + EDI*0x1]             ; 0048eeb8
        ;   Label: LAB_0048eeb8
    MOV byte ptr [EAX],0x0              ; 0048eebb
    LEA EAX,[ESI + 0x1]                 ; 0048eebe
    MOV dword ptr [ESP + 0xfe0],EAX     ; 0048eec1
    MOV AL,byte ptr [ESI]               ; 0048eec8
        ;   Label: LAB_0048eec8
    INC AL                              ; 0048eeca
    AND EAX,0xff                        ; 0048eecc
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048eed1 | DAT_0061ed94
    JZ 0x0048ef2b                       ; 0048eed8
        ;   XREF to: 0048ef2b (CONDITIONAL_JUMP)  ; LAB_0048ef2b
    PUSH EDI                            ; 0048eeda
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 0048eedb
    PUSH ECX                            ; 0048eee2
    PUSH ESI                            ; 0048eee3
    DEC EDI                             ; 0048eee4
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048eee5
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048eeea
    JMP 0x0048eec8                      ; 0048eeed
        ;   XREF to: 0048eec8 (UNCONDITIONAL_JUMP)  ; LAB_0048eec8
    MOV ESI,0x5d44be                    ; 0048eeef | = "Error parsing exists parameters."
        ;   Label: LAB_0048eeef
    MOV EDI,0x1c3dd10                   ; 0048eef4
    PUSH EDI                            ; 0048eef9 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048eefa | = "Error parsing exists parameters." | s_Error_parsing_exists_par_005d44be+2
        ;   Label: LAB_0048eefa
    MOV byte ptr [EDI],AL               ; 0048eefc | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048eefe
    JZ 0x0048ef12                       ; 0048ef00
        ;   XREF to: 0048ef12 (CONDITIONAL_JUMP)  ; LAB_0048ef12
    MOV AL,byte ptr [ESI + 0x1]         ; 0048ef02 | s_Error_parsing_exists_par_005d44be+1 | s_Error_parsing_exists_par_005d44be+3
    ADD ESI,0x2                         ; 0048ef05
    MOV byte ptr [EDI + 0x1],AL         ; 0048ef08 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048ef0b
    CMP AL,0x0                          ; 0048ef0e
    JNZ 0x0048eefa                      ; 0048ef10
        ;   XREF to: 0048eefa (CONDITIONAL_JUMP)  ; LAB_0048eefa
    POP EDI                             ; 0048ef12
        ;   Label: LAB_0048ef12
    MOV EAX,0xffffffff                  ; 0048ef13
    MOV ESP,EBP                         ; 0048ef18
    POP EBP                             ; 0048ef1a
    POP EDI                             ; 0048ef1b
    POP ESI                             ; 0048ef1c
    POP EBX                             ; 0048ef1d
    RET                                 ; 0048ef1e
    DEC EDI                             ; 0048ef1f
        ;   Label: LAB_0048ef1f
    DEC EAX                             ; 0048ef20
    TEST EDI,EDI                        ; 0048ef21
    JG 0x0048eea4                       ; 0048ef23
        ;   XREF to: 0048eea4 (CONDITIONAL_JUMP)  ; LAB_0048eea4
    JMP 0x0048eeb8                      ; 0048ef29
        ;   XREF to: 0048eeb8 (UNCONDITIONAL_JUMP)  ; LAB_0048eeb8
    PUSH 0x7bbff8                       ; 0048ef2b | g_CDemonActorClassInfo
        ;   Label: LAB_0048ef2b
    MOV ESI,dword ptr [0x007bc030]      ; 0048ef30 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 0048ef36
    LEA EAX,[ESP + 0xe74]               ; 0048ef37
    PUSH EAX                            ; 0048ef3e
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048ef3f
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048ef44
    TEST EAX,EAX                        ; 0048ef47
    JZ 0x0048ef71                       ; 0048ef49
        ;   XREF to: 0048ef71 (CONDITIONAL_JUMP)  ; LAB_0048ef71
    CMP EAX,dword ptr [0x005f61e4]      ; 0048ef4b | DAT_005f61e4
    JZ 0x0048ef71                       ; 0048ef51
        ;   XREF to: 0048ef71 (CONDITIONAL_JUMP)  ; LAB_0048ef71
    MOV EAX,0x1                         ; 0048ef53
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048ef58
        ;   Label: LAB_0048ef58
    MOV EDX,dword ptr [EBX]             ; 0048ef5f
    MOV EAX,dword ptr [ESP + 0xfdc]     ; 0048ef61
    ADD EDX,EAX                         ; 0048ef68
    MOV dword ptr [EBX],EDX             ; 0048ef6a
    JMP 0x0048ec8c                      ; 0048ef6c
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    XOR EAX,EAX                         ; 0048ef71
        ;   Label: LAB_0048ef71
    JMP 0x0048ef58                      ; 0048ef73
        ;   XREF to: 0048ef58 (UNCONDITIONAL_JUMP)  ; LAB_0048ef58
    PUSH 0x5d44df                       ; 0048ef75 | = "fieldNotesDisplayed"
        ;   Label: LAB_0048ef75
    LEA EAX,[ESP + 0xf38]               ; 0048ef7a
    PUSH EAX                            ; 0048ef81
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048ef82
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048ef87
    TEST EAX,EAX                        ; 0048ef8a
    JNZ 0x0048f011                      ; 0048ef8c
        ;   XREF to: 0048f011 (CONDITIONAL_JUMP)  ; LAB_0048f011
    MOV dword ptr [ESP + 0xfe4],0xffffffff ; 0048ef92
    LEA EAX,[ESP + 0xfe4]               ; 0048ef9d
    PUSH EAX                            ; 0048efa4
    MOV EAX,0x5d44f3                    ; 0048efa5 | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 0048efaa
    PUSH EAX                            ; 0048efac | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048efad
    ADD EAX,EDX                         ; 0048efb0
    PUSH EAX                            ; 0048efb2
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048efb3
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048efb8
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 0048efbb
    CMP ECX,0x2                         ; 0048efc2
    JL 0x0048efe1                       ; 0048efc5
        ;   XREF to: 0048efe1 (CONDITIONAL_JUMP)  ; LAB_0048efe1
    MOV EAX,[0x00616044]                ; 0048efc7 | g_CFieldNotesPtr
    MOV ESI,dword ptr [EBX]             ; 0048efcc
    MOV EAX,dword ptr [EAX + 0x40]      ; 0048efce | g_CFieldNotesInstance.field64_0x40
    ADD ESI,ECX                         ; 0048efd1
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048efd3
    MOV dword ptr [EBX],ESI             ; 0048efda
    JMP 0x0048ec8c                      ; 0048efdc
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d44fa                    ; 0048efe1 | = "Error parsing fieldNotesDisplayed con..."
        ;   Label: LAB_0048efe1
    MOV EDI,0x1c3dd10                   ; 0048efe6
    PUSH EDI                            ; 0048efeb | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048efec | = "Error parsing fieldNotesDisplayed con..." | s_Error_parsing_fieldNotes_005d44fa+2
        ;   Label: LAB_0048efec
    MOV byte ptr [EDI],AL               ; 0048efee | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048eff0
    JZ 0x0048f004                       ; 0048eff2
        ;   XREF to: 0048f004 (CONDITIONAL_JUMP)  ; LAB_0048f004
    MOV AL,byte ptr [ESI + 0x1]         ; 0048eff4 | s_Error_parsing_fieldNotes_005d44fa+1 | s_Error_parsing_fieldNotes_005d44fa+3
    ADD ESI,0x2                         ; 0048eff7
    MOV byte ptr [EDI + 0x1],AL         ; 0048effa | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048effd
    CMP AL,0x0                          ; 0048f000
    JNZ 0x0048efec                      ; 0048f002
        ;   XREF to: 0048efec (CONDITIONAL_JUMP)  ; LAB_0048efec
    POP EDI                             ; 0048f004
        ;   Label: LAB_0048f004
    MOV EAX,0xffffffff                  ; 0048f005
    MOV ESP,EBP                         ; 0048f00a
    POP EBP                             ; 0048f00c
    POP EDI                             ; 0048f00d
    POP ESI                             ; 0048f00e
    POP EBX                             ; 0048f00f
    RET                                 ; 0048f010
    PUSH 0x5d4527                       ; 0048f011 | = "hasItem"
        ;   Label: LAB_0048f011
    LEA EAX,[ESP + 0xf38]               ; 0048f016
    PUSH EAX                            ; 0048f01d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f01e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f023
    TEST EAX,EAX                        ; 0048f026
    JNZ 0x0048f1a9                      ; 0048f028
        ;   XREF to: 0048f1a9 (CONDITIONAL_JUMP)  ; LAB_0048f1a9
    MOV EAX,[0x0061b120]                ; 0048f02e | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0048f033 | g_CNetGameInstance
    JNZ 0x0048f0eb                      ; 0048f036
        ;   XREF to: 0048f0eb (CONDITIONAL_JUMP)  ; LAB_0048f0eb
    LEA EAX,[ESP + 0xfe8]               ; 0048f03c
    MOV ECX,0xffffffff                  ; 0048f043
    PUSH EAX                            ; 0048f048
    LEA EAX,[ESP + 0xa24]               ; 0048f049
    MOV dword ptr [ESP + 0xfec],ECX     ; 0048f050
    PUSH EAX                            ; 0048f057
    MOV EAX,0x5d455b                    ; 0048f058 | = " (%[^)])%n"
    MOV ESI,dword ptr [EBX]             ; 0048f05d
    PUSH EAX                            ; 0048f05f | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f060
    ADD EAX,ESI                         ; 0048f063
    PUSH EAX                            ; 0048f065
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f066
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f06b
    CMP dword ptr [ESP + 0xfe8],0x3     ; 0048f06e
    JL 0x0048f11b                       ; 0048f076
        ;   XREF to: 0048f11b (CONDITIONAL_JUMP)  ; LAB_0048f11b
    LEA ESI,[ESP + 0xa20]               ; 0048f07c
    MOV EDI,ESI                         ; 0048f083
    SUB ECX,ECX                         ; 0048f085
    DEC ECX                             ; 0048f087
    XOR EAX,EAX                         ; 0048f088
    SCASB.REPNE ES:EDI                  ; 0048f08a
    NOT ECX                             ; 0048f08c
    DEC ECX                             ; 0048f08e
    MOV EDI,ECX                         ; 0048f08f
    TEST ECX,ECX                        ; 0048f091
    JLE 0x0048f0b0                      ; 0048f093
        ;   XREF to: 0048f0b0 (CONDITIONAL_JUMP)  ; LAB_0048f0b0
    LEA EAX,[ECX + ESI*0x1]             ; 0048f095
    MOV DL,byte ptr [EAX + -0x1]        ; 0048f098
        ;   Label: LAB_0048f098
    INC DL                              ; 0048f09b
    AND EDX,0xff                        ; 0048f09d
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048f0a3 | DAT_0061ed94
    JNZ 0x0048f14b                      ; 0048f0aa
        ;   XREF to: 0048f14b (CONDITIONAL_JUMP)  ; LAB_0048f14b
    LEA EAX,[ESI + EDI*0x1]             ; 0048f0b0
        ;   Label: LAB_0048f0b0
    MOV byte ptr [EAX],0x0              ; 0048f0b3
    LEA EAX,[ESI + 0x1]                 ; 0048f0b6
    MOV dword ptr [ESP + 0x1044],EAX    ; 0048f0b9
    MOV AL,byte ptr [ESI]               ; 0048f0c0
        ;   Label: LAB_0048f0c0
    INC AL                              ; 0048f0c2
    AND EAX,0xff                        ; 0048f0c4
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048f0c9 | DAT_0061ed94
    JZ 0x0048f15a                       ; 0048f0d0
        ;   XREF to: 0048f15a (CONDITIONAL_JUMP)  ; LAB_0048f15a
    PUSH EDI                            ; 0048f0d6
    MOV ECX,dword ptr [ESP + 0x1048]    ; 0048f0d7
    PUSH ECX                            ; 0048f0de
    PUSH ESI                            ; 0048f0df
    DEC EDI                             ; 0048f0e0
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048f0e1
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f0e6
    JMP 0x0048f0c0                      ; 0048f0e9
        ;   XREF to: 0048f0c0 (UNCONDITIONAL_JUMP)  ; LAB_0048f0c0
    MOV ESI,0x5d452f                    ; 0048f0eb | = "Can't use hasItem condition in multi-..."
        ;   Label: LAB_0048f0eb
    MOV EDI,0x1c3dd10                   ; 0048f0f0
    PUSH EDI                            ; 0048f0f5 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f0f6 | = "Can't use hasItem condition in multi-..." | s_Can_t_use_hasItem_condit_005d452f+2
        ;   Label: LAB_0048f0f6
    MOV byte ptr [EDI],AL               ; 0048f0f8 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f0fa
    JZ 0x0048f10e                       ; 0048f0fc
        ;   XREF to: 0048f10e (CONDITIONAL_JUMP)  ; LAB_0048f10e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f0fe | s_Can_t_use_hasItem_condit_005d452f+1 | s_Can_t_use_hasItem_condit_005d452f+3
    ADD ESI,0x2                         ; 0048f101
    MOV byte ptr [EDI + 0x1],AL         ; 0048f104 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f107
    CMP AL,0x0                          ; 0048f10a
    JNZ 0x0048f0f6                      ; 0048f10c
        ;   XREF to: 0048f0f6 (CONDITIONAL_JUMP)  ; LAB_0048f0f6
    POP EDI                             ; 0048f10e
        ;   Label: LAB_0048f10e
    MOV EAX,0xffffffff                  ; 0048f10f
    MOV ESP,EBP                         ; 0048f114
    POP EBP                             ; 0048f116
    POP EDI                             ; 0048f117
    POP ESI                             ; 0048f118
    POP EBX                             ; 0048f119
    RET                                 ; 0048f11a
    MOV ESI,0x5d4566                    ; 0048f11b | = "Error parsing hasItem parameters."
        ;   Label: LAB_0048f11b
    MOV EDI,0x1c3dd10                   ; 0048f120
    PUSH EDI                            ; 0048f125 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f126 | = "Error parsing hasItem parameters." | s_Error_parsing_hasItem_pa_005d4566+2
        ;   Label: LAB_0048f126
    MOV byte ptr [EDI],AL               ; 0048f128 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f12a
    JZ 0x0048f13e                       ; 0048f12c
        ;   XREF to: 0048f13e (CONDITIONAL_JUMP)  ; LAB_0048f13e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f12e | s_Error_parsing_hasItem_pa_005d4566+1 | s_Error_parsing_hasItem_pa_005d4566+3
    ADD ESI,0x2                         ; 0048f131
    MOV byte ptr [EDI + 0x1],AL         ; 0048f134 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f137
    CMP AL,0x0                          ; 0048f13a
    JNZ 0x0048f126                      ; 0048f13c
        ;   XREF to: 0048f126 (CONDITIONAL_JUMP)  ; LAB_0048f126
    POP EDI                             ; 0048f13e
        ;   Label: LAB_0048f13e
    MOV EAX,0xffffffff                  ; 0048f13f
    MOV ESP,EBP                         ; 0048f144
    POP EBP                             ; 0048f146
    POP EDI                             ; 0048f147
    POP ESI                             ; 0048f148
    POP EBX                             ; 0048f149
    RET                                 ; 0048f14a
    DEC EDI                             ; 0048f14b
        ;   Label: LAB_0048f14b
    DEC EAX                             ; 0048f14c
    TEST EDI,EDI                        ; 0048f14d
    JG 0x0048f098                       ; 0048f14f
        ;   XREF to: 0048f098 (CONDITIONAL_JUMP)  ; LAB_0048f098
    JMP 0x0048f0b0                      ; 0048f155
        ;   XREF to: 0048f0b0 (UNCONDITIONAL_JUMP)  ; LAB_0048f0b0
    MOV EAX,[0x01cedef4]                ; 0048f15a | DAT_01cedef4
        ;   Label: LAB_0048f15a
    SHL EAX,0x2                         ; 0048f15f
    XOR ESI,ESI                         ; 0048f162
    MOV EDI,dword ptr [EAX + 0x1cedee4] ; 0048f164
    MOV dword ptr [ESP + 0xfbc],ESI     ; 0048f16a
    TEST EDI,EDI                        ; 0048f171
    JZ 0x0048f19b                       ; 0048f173
        ;   XREF to: 0048f19b (CONDITIONAL_JUMP)  ; LAB_0048f19b
    LEA EDX,[ESP + 0xa20]               ; 0048f175
    PUSH EDX                            ; 0048f17c
    LEA EAX,[EDI + 0x2437c]             ; 0048f17d
    PUSH EAX                            ; 0048f183
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004db830 ; 0048f184
        ;   XREF to: 004db830 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004db830(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 0048f189
    TEST EAX,EAX                        ; 0048f18c
    JZ 0x0048f19b                       ; 0048f18e
        ;   XREF to: 0048f19b (CONDITIONAL_JUMP)  ; LAB_0048f19b
    MOV dword ptr [ESP + 0xfbc],0x1     ; 0048f190
    MOV EAX,dword ptr [ESP + 0xfe8]     ; 0048f19b
        ;   Label: LAB_0048f19b
    ADD dword ptr [EBX],EAX             ; 0048f1a2
    JMP 0x0048ec8c                      ; 0048f1a4
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4588                       ; 0048f1a9 | = "hasItemType"
        ;   Label: LAB_0048f1a9
    LEA EAX,[ESP + 0xf38]               ; 0048f1ae
    PUSH EAX                            ; 0048f1b5
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f1b6
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f1bb
    TEST EAX,EAX                        ; 0048f1be
    JNZ 0x0048f395                      ; 0048f1c0
        ;   XREF to: 0048f395 (CONDITIONAL_JUMP)  ; LAB_0048f395
    LEA EAX,[ESP + 0x1048]              ; 0048f1c6
    PUSH EAX                            ; 0048f1cd
    LEA EAX,[ESP + 0x6a0]               ; 0048f1ce
    MOV ECX,0xffffffff                  ; 0048f1d5
    PUSH EAX                            ; 0048f1da
    LEA EAX,[ESP + 0xa8c]               ; 0048f1db
    MOV dword ptr [ESP + 0x1050],ECX    ; 0048f1e2
    PUSH EAX                            ; 0048f1e9
    MOV EAX,0x5d4594                    ; 0048f1ea | = " (%[^,], %[^)] )%n"
    MOV ESI,dword ptr [EBX]             ; 0048f1ef
    PUSH EAX                            ; 0048f1f1 | = " (%[^,], %[^)] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f1f2
    ADD EAX,ESI                         ; 0048f1f5
    PUSH EAX                            ; 0048f1f7
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f1f8
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 0048f1fd
    CMP dword ptr [ESP + 0x1048],0x5    ; 0048f200
    JL 0x0048f271                       ; 0048f208
        ;   XREF to: 0048f271 (CONDITIONAL_JUMP)  ; LAB_0048f271
    LEA ESI,[ESP + 0xa84]               ; 0048f20a
    MOV EDI,ESI                         ; 0048f211
    SUB ECX,ECX                         ; 0048f213
    DEC ECX                             ; 0048f215
    XOR EAX,EAX                         ; 0048f216
    SCASB.REPNE ES:EDI                  ; 0048f218
    NOT ECX                             ; 0048f21a
    DEC ECX                             ; 0048f21c
    MOV EDI,ECX                         ; 0048f21d
    TEST ECX,ECX                        ; 0048f21f
    JLE 0x0048f23a                      ; 0048f221
        ;   XREF to: 0048f23a (CONDITIONAL_JUMP)  ; LAB_0048f23a
    LEA EAX,[ECX + ESI*0x1]             ; 0048f223
    MOV DL,byte ptr [EAX + -0x1]        ; 0048f226
        ;   Label: LAB_0048f226
    INC DL                              ; 0048f229
    AND EDX,0xff                        ; 0048f22b
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048f231 | DAT_0061ed94
    JNZ 0x0048f2a1                      ; 0048f238
        ;   XREF to: 0048f2a1 (CONDITIONAL_JUMP)  ; LAB_0048f2a1
    LEA EAX,[ESI + EDI*0x1]             ; 0048f23a
        ;   Label: LAB_0048f23a
    MOV byte ptr [EAX],0x0              ; 0048f23d
    LEA EAX,[ESI + 0x1]                 ; 0048f240
    MOV dword ptr [ESP + 0xfec],EAX     ; 0048f243
    MOV AL,byte ptr [ESI]               ; 0048f24a
        ;   Label: LAB_0048f24a
    INC AL                              ; 0048f24c
    AND EAX,0xff                        ; 0048f24e
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048f253 | DAT_0061ed94
    JZ 0x0048f2ad                       ; 0048f25a
        ;   XREF to: 0048f2ad (CONDITIONAL_JUMP)  ; LAB_0048f2ad
    PUSH EDI                            ; 0048f25c
    MOV EDX,dword ptr [ESP + 0xff0]     ; 0048f25d
    PUSH EDX                            ; 0048f264
    PUSH ESI                            ; 0048f265
    DEC EDI                             ; 0048f266
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048f267
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f26c
    JMP 0x0048f24a                      ; 0048f26f
        ;   XREF to: 0048f24a (UNCONDITIONAL_JUMP)  ; LAB_0048f24a
    MOV ESI,0x5d45a7                    ; 0048f271 | = "Error parsing hasItemType parameters."
        ;   Label: LAB_0048f271
    MOV EDI,0x1c3dd10                   ; 0048f276
    PUSH EDI                            ; 0048f27b | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f27c | = "Error parsing hasItemType parameters." | s_Error_parsing_hasItemTyp_005d45a7+2
        ;   Label: LAB_0048f27c
    MOV byte ptr [EDI],AL               ; 0048f27e | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f280
    JZ 0x0048f294                       ; 0048f282
        ;   XREF to: 0048f294 (CONDITIONAL_JUMP)  ; LAB_0048f294
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f284 | s_Error_parsing_hasItemTyp_005d45a7+1 | s_Error_parsing_hasItemTyp_005d45a7+3
    ADD ESI,0x2                         ; 0048f287
    MOV byte ptr [EDI + 0x1],AL         ; 0048f28a | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f28d
    CMP AL,0x0                          ; 0048f290
    JNZ 0x0048f27c                      ; 0048f292
        ;   XREF to: 0048f27c (CONDITIONAL_JUMP)  ; LAB_0048f27c
    POP EDI                             ; 0048f294
        ;   Label: LAB_0048f294
    MOV EAX,0xffffffff                  ; 0048f295
        ;   Label: LAB_0048f295
    MOV ESP,EBP                         ; 0048f29a
    POP EBP                             ; 0048f29c
    POP EDI                             ; 0048f29d
    POP ESI                             ; 0048f29e
    POP EBX                             ; 0048f29f
    RET                                 ; 0048f2a0
    DEC EDI                             ; 0048f2a1
        ;   Label: LAB_0048f2a1
    DEC EAX                             ; 0048f2a2
    TEST EDI,EDI                        ; 0048f2a3
    JG 0x0048f226                       ; 0048f2a5
        ;   XREF to: 0048f226 (CONDITIONAL_JUMP)  ; LAB_0048f226
    JMP 0x0048f23a                      ; 0048f2ab
        ;   XREF to: 0048f23a (UNCONDITIONAL_JUMP)  ; LAB_0048f23a
    LEA EDI,[ESP + 0x69c]               ; 0048f2ad
        ;   Label: LAB_0048f2ad
    LEA ESI,[ESP + 0x69c]               ; 0048f2b4
    SUB ECX,ECX                         ; 0048f2bb
    DEC ECX                             ; 0048f2bd
    XOR EAX,EAX                         ; 0048f2be
    SCASB.REPNE ES:EDI                  ; 0048f2c0
    NOT ECX                             ; 0048f2c2
    DEC ECX                             ; 0048f2c4
    MOV EDI,ECX                         ; 0048f2c5
    TEST ECX,ECX                        ; 0048f2c7
    JLE 0x0048f2e8                      ; 0048f2c9
        ;   XREF to: 0048f2e8 (CONDITIONAL_JUMP)  ; LAB_0048f2e8
    LEA EAX,[ESP + 0x69c]               ; 0048f2cb
    ADD EAX,ECX                         ; 0048f2d2
    MOV DL,byte ptr [EAX + -0x1]        ; 0048f2d4
        ;   Label: LAB_0048f2d4
    INC DL                              ; 0048f2d7
    AND EDX,0xff                        ; 0048f2d9
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048f2df | DAT_0061ed94
    JNZ 0x0048f31f                      ; 0048f2e6
        ;   XREF to: 0048f31f (CONDITIONAL_JUMP)  ; LAB_0048f31f
    LEA EAX,[ESI + EDI*0x1]             ; 0048f2e8
        ;   Label: LAB_0048f2e8
    MOV byte ptr [EAX],0x0              ; 0048f2eb
    LEA EAX,[ESI + 0x1]                 ; 0048f2ee
    MOV dword ptr [ESP + 0xff0],EAX     ; 0048f2f1
    MOV AL,byte ptr [ESI]               ; 0048f2f8
        ;   Label: LAB_0048f2f8
    INC AL                              ; 0048f2fa
    AND EAX,0xff                        ; 0048f2fc
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048f301 | DAT_0061ed94
    JZ 0x0048f327                       ; 0048f308
        ;   XREF to: 0048f327 (CONDITIONAL_JUMP)  ; LAB_0048f327
    PUSH EDI                            ; 0048f30a
    MOV ECX,dword ptr [ESP + 0xff4]     ; 0048f30b
    PUSH ECX                            ; 0048f312
    PUSH ESI                            ; 0048f313
    DEC EDI                             ; 0048f314
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048f315
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f31a
    JMP 0x0048f2f8                      ; 0048f31d
        ;   XREF to: 0048f2f8 (UNCONDITIONAL_JUMP)  ; LAB_0048f2f8
    DEC EDI                             ; 0048f31f
        ;   Label: LAB_0048f31f
    DEC EAX                             ; 0048f320
    TEST EDI,EDI                        ; 0048f321
    JG 0x0048f2d4                       ; 0048f323
        ;   XREF to: 0048f2d4 (CONDITIONAL_JUMP)  ; LAB_0048f2d4
    JMP 0x0048f2e8                      ; 0048f325
        ;   XREF to: 0048f2e8 (UNCONDITIONAL_JUMP)  ; LAB_0048f2e8
    PUSH 0x1cedf18                      ; 0048f327
        ;   Label: LAB_0048f327
    MOV ECX,dword ptr [0x01cedf50]      ; 0048f32c | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 0048f332
    LEA EAX,[ESP + 0xa8c]               ; 0048f333
    PUSH EAX                            ; 0048f33a
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048f33b
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048f340
    TEST EAX,EAX                        ; 0048f343
    JZ 0x0048f295                       ; 0048f345
        ;   XREF to: 0048f295 (CONDITIONAL_JUMP)  ; LAB_0048f295
    CMP EAX,dword ptr [0x005f61e4]      ; 0048f34b | DAT_005f61e4
    JNZ 0x0048f36a                      ; 0048f351
        ;   XREF to: 0048f36a (CONDITIONAL_JUMP)  ; LAB_0048f36a
    XOR EDI,EDI                         ; 0048f353
    MOV dword ptr [ESP + 0xfbc],EDI     ; 0048f355
    MOV EAX,dword ptr [ESP + 0x1048]    ; 0048f35c
    ADD dword ptr [EBX],EAX             ; 0048f363
    JMP 0x0048ec8c                      ; 0048f365
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    LEA EDX,[ESP + 0x69c]               ; 0048f36a
        ;   Label: LAB_0048f36a
    PUSH EDX                            ; 0048f371
    ADD EAX,0x2437c                     ; 0048f372
    PUSH EAX                            ; 0048f377
    CALL core_inv.cpp_CInventory_hasItemOfClass_FUN_004db880 ; 0048f378
        ;   XREF to: 004db880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_hasItemOfClass_FUN_004db880(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0048f37d
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048f380
    MOV EAX,dword ptr [ESP + 0x1048]    ; 0048f387
    ADD dword ptr [EBX],EAX             ; 0048f38e
    JMP 0x0048ec8c                      ; 0048f390
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d45cd                       ; 0048f395 | = "hasKeyMask"
        ;   Label: LAB_0048f395
    LEA EAX,[ESP + 0xf38]               ; 0048f39a
    PUSH EAX                            ; 0048f3a1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f3a2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f3a7
    TEST EAX,EAX                        ; 0048f3aa
    JNZ 0x0048f526                      ; 0048f3ac
        ;   XREF to: 0048f526 (CONDITIONAL_JUMP)  ; LAB_0048f526
    MOV EAX,[0x0061b120]                ; 0048f3b2 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0048f3b7 | g_CNetGameInstance
    JNZ 0x0048f466                      ; 0048f3ba
        ;   XREF to: 0048f466 (CONDITIONAL_JUMP)  ; LAB_0048f466
    LEA EAX,[ESP + 0xff4]               ; 0048f3c0
    MOV ECX,0xffffffff                  ; 0048f3c7
    PUSH EAX                            ; 0048f3cc
    LEA EAX,[ESP + 0xffc]               ; 0048f3cd
    MOV dword ptr [ESP + 0xff8],ECX     ; 0048f3d4
    PUSH EAX                            ; 0048f3db
    MOV EAX,0x5d4607                    ; 0048f3dc | = " ( %d )%n"
    MOV ESI,dword ptr [EBX]             ; 0048f3e1
    PUSH EAX                            ; 0048f3e3 | = " ( %d )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f3e4
    ADD EAX,ESI                         ; 0048f3e7
    PUSH EAX                            ; 0048f3e9
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f3ea
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f3ef
    CMP dword ptr [ESP + 0xff4],0x3     ; 0048f3f2
    JL 0x0048f496                       ; 0048f3fa
        ;   XREF to: 0048f496 (CONDITIONAL_JUMP)  ; LAB_0048f496
    MOV EAX,dword ptr [ESP + 0xff8]     ; 0048f400
    TEST EAX,EAX                        ; 0048f407
    JZ 0x0048f4c6                       ; 0048f409
        ;   XREF to: 0048f4c6 (CONDITIONAL_JUMP)  ; LAB_0048f4c6
    MOV EDX,dword ptr [ESP + 0xff8]     ; 0048f40f
    DEC EAX                             ; 0048f416
    TEST EAX,EDX                        ; 0048f417
    JNZ 0x0048f4f6                      ; 0048f419
        ;   XREF to: 0048f4f6 (CONDITIONAL_JUMP)  ; LAB_0048f4f6
    MOV EAX,[0x01cedef4]                ; 0048f41f | DAT_01cedef4
    XOR ECX,ECX                         ; 0048f424
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 0048f426
    MOV dword ptr [ESP + 0xfbc],ECX     ; 0048f42d
    TEST ESI,ESI                        ; 0048f434
    JZ 0x0048f458                       ; 0048f436
        ;   XREF to: 0048f458 (CONDITIONAL_JUMP)  ; LAB_0048f458
    PUSH ECX                            ; 0048f438
    PUSH EDX                            ; 0048f439
    LEA EAX,[ESI + 0x2437c]             ; 0048f43a
    PUSH EAX                            ; 0048f440
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70 ; 0048f441
        ;   XREF to: 004dee70 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 0048f446
    TEST EAX,EAX                        ; 0048f449
    JZ 0x0048f458                       ; 0048f44b
        ;   XREF to: 0048f458 (CONDITIONAL_JUMP)  ; LAB_0048f458
    MOV dword ptr [ESP + 0xfbc],0x1     ; 0048f44d
    MOV EAX,dword ptr [ESP + 0xff4]     ; 0048f458
        ;   Label: LAB_0048f458
    ADD dword ptr [EBX],EAX             ; 0048f45f
    JMP 0x0048ec8c                      ; 0048f461
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d45d8                    ; 0048f466 | = "Can't use hasKeyMask condition in mul..."
        ;   Label: LAB_0048f466
    MOV EDI,0x1c3dd10                   ; 0048f46b
    PUSH EDI                            ; 0048f470 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f471 | = "Can't use hasKeyMask condition in mul..." | s_Can_t_use_hasKeyMask_con_005d45d8+2
        ;   Label: LAB_0048f471
    MOV byte ptr [EDI],AL               ; 0048f473 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f475
    JZ 0x0048f489                       ; 0048f477
        ;   XREF to: 0048f489 (CONDITIONAL_JUMP)  ; LAB_0048f489
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f479 | s_Can_t_use_hasKeyMask_con_005d45d8+1 | s_Can_t_use_hasKeyMask_con_005d45d8+3
    ADD ESI,0x2                         ; 0048f47c
    MOV byte ptr [EDI + 0x1],AL         ; 0048f47f | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f482
    CMP AL,0x0                          ; 0048f485
    JNZ 0x0048f471                      ; 0048f487
        ;   XREF to: 0048f471 (CONDITIONAL_JUMP)  ; LAB_0048f471
    POP EDI                             ; 0048f489
        ;   Label: LAB_0048f489
    MOV EAX,0xffffffff                  ; 0048f48a
    MOV ESP,EBP                         ; 0048f48f
    POP EBP                             ; 0048f491
    POP EDI                             ; 0048f492
    POP ESI                             ; 0048f493
    POP EBX                             ; 0048f494
    RET                                 ; 0048f495
    MOV ESI,0x5d4611                    ; 0048f496 | = "Error parsing hasKeyMask parameters."
        ;   Label: LAB_0048f496
    MOV EDI,0x1c3dd10                   ; 0048f49b
    PUSH EDI                            ; 0048f4a0 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f4a1 | = "Error parsing hasKeyMask parameters." | s_Error_parsing_hasKeyMask_005d4611+2
        ;   Label: LAB_0048f4a1
    MOV byte ptr [EDI],AL               ; 0048f4a3 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f4a5
    JZ 0x0048f4b9                       ; 0048f4a7
        ;   XREF to: 0048f4b9 (CONDITIONAL_JUMP)  ; LAB_0048f4b9
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f4a9 | s_Error_parsing_hasKeyMask_005d4611+1 | s_Error_parsing_hasKeyMask_005d4611+3
    ADD ESI,0x2                         ; 0048f4ac
    MOV byte ptr [EDI + 0x1],AL         ; 0048f4af | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f4b2
    CMP AL,0x0                          ; 0048f4b5
    JNZ 0x0048f4a1                      ; 0048f4b7
        ;   XREF to: 0048f4a1 (CONDITIONAL_JUMP)  ; LAB_0048f4a1
    POP EDI                             ; 0048f4b9
        ;   Label: LAB_0048f4b9
    MOV EAX,0xffffffff                  ; 0048f4ba
    MOV ESP,EBP                         ; 0048f4bf
    POP EBP                             ; 0048f4c1
    POP EDI                             ; 0048f4c2
    POP ESI                             ; 0048f4c3
    POP EBX                             ; 0048f4c4
    RET                                 ; 0048f4c5
    MOV ESI,0x5d4636                    ; 0048f4c6 | = "hasKeyMask(0) always returns false!"
        ;   Label: LAB_0048f4c6
    MOV EDI,0x1c3dd10                   ; 0048f4cb
    PUSH EDI                            ; 0048f4d0 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f4d1 | = "hasKeyMask(0) always returns false!" | s_hasKeyMask_0_always_retu_005d4636+2
        ;   Label: LAB_0048f4d1
    MOV byte ptr [EDI],AL               ; 0048f4d3 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f4d5
    JZ 0x0048f4e9                       ; 0048f4d7
        ;   XREF to: 0048f4e9 (CONDITIONAL_JUMP)  ; LAB_0048f4e9
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f4d9 | s_hasKeyMask_0_always_retu_005d4636+1 | s_hasKeyMask_0_always_retu_005d4636+3
    ADD ESI,0x2                         ; 0048f4dc
    MOV byte ptr [EDI + 0x1],AL         ; 0048f4df | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f4e2
    CMP AL,0x0                          ; 0048f4e5
    JNZ 0x0048f4d1                      ; 0048f4e7
        ;   XREF to: 0048f4d1 (CONDITIONAL_JUMP)  ; LAB_0048f4d1
    POP EDI                             ; 0048f4e9
        ;   Label: LAB_0048f4e9
    MOV EAX,0xffffffff                  ; 0048f4ea
    MOV ESP,EBP                         ; 0048f4ef
    POP EBP                             ; 0048f4f1
    POP EDI                             ; 0048f4f2
    POP ESI                             ; 0048f4f3
    POP EBX                             ; 0048f4f4
    RET                                 ; 0048f4f5
    MOV ESI,0x5d465a                    ; 0048f4f6 | = "mask value must be a power of 2.\n(To..."
        ;   Label: LAB_0048f4f6
    MOV EDI,0x1c3dd10                   ; 0048f4fb
    PUSH EDI                            ; 0048f500 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f501 | = "mask value must be a power of 2.\n(To..." | s_mask_value_must_be_a_pow_005d465a+2
        ;   Label: LAB_0048f501
    MOV byte ptr [EDI],AL               ; 0048f503 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f505
    JZ 0x0048f519                       ; 0048f507
        ;   XREF to: 0048f519 (CONDITIONAL_JUMP)  ; LAB_0048f519
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f509 | s_mask_value_must_be_a_pow_005d465a+1 | s_mask_value_must_be_a_pow_005d465a+3
    ADD ESI,0x2                         ; 0048f50c
    MOV byte ptr [EDI + 0x1],AL         ; 0048f50f | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f512
    CMP AL,0x0                          ; 0048f515
    JNZ 0x0048f501                      ; 0048f517
        ;   XREF to: 0048f501 (CONDITIONAL_JUMP)  ; LAB_0048f501
    POP EDI                             ; 0048f519
        ;   Label: LAB_0048f519
    MOV EAX,0xffffffff                  ; 0048f51a
    MOV ESP,EBP                         ; 0048f51f
    POP EBP                             ; 0048f521
    POP EDI                             ; 0048f522
    POP ESI                             ; 0048f523
    POP EBX                             ; 0048f524
    RET                                 ; 0048f525
    PUSH 0x5d46b8                       ; 0048f526 | = "isBroken"
        ;   Label: LAB_0048f526
    LEA EAX,[ESP + 0xf38]               ; 0048f52b
    PUSH EAX                            ; 0048f532
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f533
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f538
    TEST EAX,EAX                        ; 0048f53b
    JNZ 0x0048f685                      ; 0048f53d
        ;   XREF to: 0048f685 (CONDITIONAL_JUMP)  ; LAB_0048f685
    LEA EAX,[ESP + 0xffc]               ; 0048f543
    MOV ESI,0xffffffff                  ; 0048f54a
    PUSH EAX                            ; 0048f54f
    LEA EAX,[ESP + 0x704]               ; 0048f550
    MOV dword ptr [ESP + 0x1000],ESI    ; 0048f557
    PUSH EAX                            ; 0048f55e
    MOV EAX,0x5d46c1                    ; 0048f55f | = " (%[^)])%n"
    MOV EDI,dword ptr [EBX]             ; 0048f564
    PUSH EAX                            ; 0048f566 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f567
    ADD EAX,EDI                         ; 0048f56a
    PUSH EAX                            ; 0048f56c
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f56d
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f572
    CMP dword ptr [ESP + 0xffc],0x3     ; 0048f575
    JL 0x0048f5e6                       ; 0048f57d
        ;   XREF to: 0048f5e6 (CONDITIONAL_JUMP)  ; LAB_0048f5e6
    LEA ESI,[ESP + 0x700]               ; 0048f57f
    MOV EDI,ESI                         ; 0048f586
    SUB ECX,ECX                         ; 0048f588
    DEC ECX                             ; 0048f58a
    XOR EAX,EAX                         ; 0048f58b
    SCASB.REPNE ES:EDI                  ; 0048f58d
    NOT ECX                             ; 0048f58f
    DEC ECX                             ; 0048f591
    MOV EDI,ECX                         ; 0048f592
    TEST ECX,ECX                        ; 0048f594
    JLE 0x0048f5af                      ; 0048f596
        ;   XREF to: 0048f5af (CONDITIONAL_JUMP)  ; LAB_0048f5af
    LEA EAX,[ECX + ESI*0x1]             ; 0048f598
    MOV DL,byte ptr [EAX + -0x1]        ; 0048f59b
        ;   Label: LAB_0048f59b
    INC DL                              ; 0048f59e
    AND EDX,0xff                        ; 0048f5a0
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048f5a6 | DAT_0061ed94
    JNZ 0x0048f616                      ; 0048f5ad
        ;   XREF to: 0048f616 (CONDITIONAL_JUMP)  ; LAB_0048f616
    LEA EAX,[ESI + EDI*0x1]             ; 0048f5af
        ;   Label: LAB_0048f5af
    MOV byte ptr [EAX],0x0              ; 0048f5b2
    LEA EAX,[ESI + 0x1]                 ; 0048f5b5
    MOV dword ptr [ESP + 0x1000],EAX    ; 0048f5b8
    MOV AL,byte ptr [ESI]               ; 0048f5bf
        ;   Label: LAB_0048f5bf
    INC AL                              ; 0048f5c1
    AND EAX,0xff                        ; 0048f5c3
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048f5c8 | DAT_0061ed94
    JZ 0x0048f622                       ; 0048f5cf
        ;   XREF to: 0048f622 (CONDITIONAL_JUMP)  ; LAB_0048f622
    PUSH EDI                            ; 0048f5d1
    MOV EAX,dword ptr [ESP + 0x1004]    ; 0048f5d2
    PUSH EAX                            ; 0048f5d9
    PUSH ESI                            ; 0048f5da
    DEC EDI                             ; 0048f5db
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048f5dc
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048f5e1
    JMP 0x0048f5bf                      ; 0048f5e4
        ;   XREF to: 0048f5bf (UNCONDITIONAL_JUMP)  ; LAB_0048f5bf
    MOV ESI,0x5d46cc                    ; 0048f5e6 | = "Error parsing isBroken parameters."
        ;   Label: LAB_0048f5e6
    MOV EDI,0x1c3dd10                   ; 0048f5eb
    PUSH EDI                            ; 0048f5f0 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f5f1 | = "Error parsing isBroken parameters." | s_Error_parsing_isBroken_p_005d46cc+2
        ;   Label: LAB_0048f5f1
    MOV byte ptr [EDI],AL               ; 0048f5f3 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f5f5
    JZ 0x0048f609                       ; 0048f5f7
        ;   XREF to: 0048f609 (CONDITIONAL_JUMP)  ; LAB_0048f609
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f5f9 | s_Error_parsing_isBroken_p_005d46cc+1 | s_Error_parsing_isBroken_p_005d46cc+3
    ADD ESI,0x2                         ; 0048f5fc
    MOV byte ptr [EDI + 0x1],AL         ; 0048f5ff | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f602
    CMP AL,0x0                          ; 0048f605
    JNZ 0x0048f5f1                      ; 0048f607
        ;   XREF to: 0048f5f1 (CONDITIONAL_JUMP)  ; LAB_0048f5f1
    POP EDI                             ; 0048f609
        ;   Label: LAB_0048f609
    MOV EAX,0xffffffff                  ; 0048f60a
        ;   Label: LAB_0048f60a
    MOV ESP,EBP                         ; 0048f60f
    POP EBP                             ; 0048f611
    POP EDI                             ; 0048f612
    POP ESI                             ; 0048f613
    POP EBX                             ; 0048f614
    RET                                 ; 0048f615
    DEC EDI                             ; 0048f616
        ;   Label: LAB_0048f616
    DEC EAX                             ; 0048f617
    TEST EDI,EDI                        ; 0048f618
    JG 0x0048f59b                       ; 0048f61a
        ;   XREF to: 0048f59b (CONDITIONAL_JUMP)  ; LAB_0048f59b
    JMP 0x0048f5af                      ; 0048f620
        ;   XREF to: 0048f5af (UNCONDITIONAL_JUMP)  ; LAB_0048f5af
    PUSH 0x1cb8248                      ; 0048f622
        ;   Label: LAB_0048f622
    MOV ESI,dword ptr [0x01cb8280]      ; 0048f627 | g_CGlassClassInfo.name_hash
    PUSH ESI                            ; 0048f62d
    LEA EAX,[ESP + 0x708]               ; 0048f62e
    PUSH EAX                            ; 0048f635
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048f636
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048f63b
    TEST EAX,EAX                        ; 0048f63e
    JZ 0x0048f60a                       ; 0048f640
        ;   XREF to: 0048f60a (CONDITIONAL_JUMP)  ; LAB_0048f60a
    CMP EAX,dword ptr [0x005f61e4]      ; 0048f642 | DAT_005f61e4
    JNZ 0x0048f661                      ; 0048f648
        ;   XREF to: 0048f661 (CONDITIONAL_JUMP)  ; LAB_0048f661
    XOR ECX,ECX                         ; 0048f64a
    MOV dword ptr [ESP + 0xfbc],ECX     ; 0048f64c
    MOV EAX,dword ptr [ESP + 0xffc]     ; 0048f653
    ADD dword ptr [EBX],EAX             ; 0048f65a
    JMP 0x0048ec8c                      ; 0048f65c
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    CMP dword ptr [EAX + 0x2dc],0x0     ; 0048f661
        ;   Label: LAB_0048f661
    SETNZ AL                            ; 0048f668
    AND EAX,0xff                        ; 0048f66b
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048f670
    MOV EAX,dword ptr [ESP + 0xffc]     ; 0048f677
    ADD dword ptr [EBX],EAX             ; 0048f67e
    JMP 0x0048ec8c                      ; 0048f680
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d46ef                       ; 0048f685 | = "isCurrentCamera"
        ;   Label: LAB_0048f685
    LEA EAX,[ESP + 0xf38]               ; 0048f68a
    PUSH EAX                            ; 0048f691
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f692
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f697
    TEST EAX,EAX                        ; 0048f69a
    JNZ 0x0048f765                      ; 0048f69c
        ;   XREF to: 0048f765 (CONDITIONAL_JUMP)  ; LAB_0048f765
    LEA EAX,[ESP + 0x1004]              ; 0048f6a2
    MOV ECX,0xffffffff                  ; 0048f6a9
    PUSH EAX                            ; 0048f6ae
    LEA EAX,[ESP + 0xbb4]               ; 0048f6af
    MOV dword ptr [ESP + 0x1008],ECX    ; 0048f6b6
    PUSH EAX                            ; 0048f6bd
    MOV EAX,0x5d46ff                    ; 0048f6be | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 0048f6c3
    PUSH EAX                            ; 0048f6c5 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f6c6
    ADD EAX,ESI                         ; 0048f6c9
    PUSH EAX                            ; 0048f6cb
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f6cc
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f6d1
    CMP dword ptr [ESP + 0x1004],0x3    ; 0048f6d4
    JL 0x0048f735                       ; 0048f6dc
        ;   XREF to: 0048f735 (CONDITIONAL_JUMP)  ; LAB_0048f735
    XOR EAX,EAX                         ; 0048f6de
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048f6e0
    MOV EAX,[0x0061b5a8]                ; 0048f6e7 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0048f6ec | g_CDemonSetInstance.selected_camera_index
    TEST EAX,EAX                        ; 0048f6f2
    JL 0x0048f727                       ; 0048f6f4
        ;   XREF to: 0048f727 (CONDITIONAL_JUMP)  ; LAB_0048f727
    IMUL EAX,EAX,0x1a4                  ; 0048f6f6
    LEA EDX,[ESP + 0xbb0]               ; 0048f6fc
    PUSH EDX                            ; 0048f703
    MOV EDX,dword ptr [0x0061b5a8]      ; 0048f704 | g_CDemonSetPtr
    ADD EDX,0x4                         ; 0048f70a
    ADD EAX,EDX                         ; 0048f70d
    PUSH EAX                            ; 0048f70f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f710
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f715
    TEST EAX,EAX                        ; 0048f718
    JNZ 0x0048f727                      ; 0048f71a
        ;   XREF to: 0048f727 (CONDITIONAL_JUMP)  ; LAB_0048f727
    MOV dword ptr [ESP + 0xfbc],0x1     ; 0048f71c
    MOV EAX,dword ptr [ESP + 0x1004]    ; 0048f727
        ;   Label: LAB_0048f727
    ADD dword ptr [EBX],EAX             ; 0048f72e
    JMP 0x0048ec8c                      ; 0048f730
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d470d                    ; 0048f735 | = "Error parsing isCurrentCamera paramet..."
        ;   Label: LAB_0048f735
    MOV EDI,0x1c3dd10                   ; 0048f73a
    PUSH EDI                            ; 0048f73f | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f740 | = "Error parsing isCurrentCamera paramet..." | s_Error_parsing_isCurrentC_005d470d+2
        ;   Label: LAB_0048f740
    MOV byte ptr [EDI],AL               ; 0048f742 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f744
    JZ 0x0048f758                       ; 0048f746
        ;   XREF to: 0048f758 (CONDITIONAL_JUMP)  ; LAB_0048f758
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f748 | s_Error_parsing_isCurrentC_005d470d+1 | s_Error_parsing_isCurrentC_005d470d+3
    ADD ESI,0x2                         ; 0048f74b
    MOV byte ptr [EDI + 0x1],AL         ; 0048f74e | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f751
    CMP AL,0x0                          ; 0048f754
    JNZ 0x0048f740                      ; 0048f756
        ;   XREF to: 0048f740 (CONDITIONAL_JUMP)  ; LAB_0048f740
    POP EDI                             ; 0048f758
        ;   Label: LAB_0048f758
    MOV EAX,0xffffffff                  ; 0048f759
    MOV ESP,EBP                         ; 0048f75e
    POP EBP                             ; 0048f760
    POP EDI                             ; 0048f761
    POP ESI                             ; 0048f762
    POP EBX                             ; 0048f763
    RET                                 ; 0048f764
    PUSH 0x5d4737                       ; 0048f765 | = "isCurrentSet"
        ;   Label: LAB_0048f765
    LEA EAX,[ESP + 0xf38]               ; 0048f76a
    PUSH EAX                            ; 0048f771
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f772
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f777
    TEST EAX,EAX                        ; 0048f77a
    JNZ 0x0048f878                      ; 0048f77c
        ;   XREF to: 0048f878 (CONDITIONAL_JUMP)  ; LAB_0048f878
    MOV dword ptr [ESP + 0x1008],0xffffffff ; 0048f782
    LEA EAX,[ESP + 0x1008]              ; 0048f78d
    PUSH EAX                            ; 0048f794
    LEA EAX,[ESP + 0x8f8]               ; 0048f795
    PUSH EAX                            ; 0048f79c
    MOV EAX,0x5d4744                    ; 0048f79d | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 0048f7a2
    PUSH EAX                            ; 0048f7a4 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f7a5
    ADD EAX,EDX                         ; 0048f7a8
    PUSH EAX                            ; 0048f7aa
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f7ab
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f7b0
    CMP dword ptr [ESP + 0x1008],0x3    ; 0048f7b3
    JL 0x0048f848                       ; 0048f7bb
        ;   XREF to: 0048f848 (CONDITIONAL_JUMP)  ; LAB_0048f848
    MOV EAX,[0x00618170]                ; 0048f7c1 | DAT_00618170
    XOR ESI,ESI                         ; 0048f7c6
    MOV EDI,dword ptr [EAX]             ; 0048f7c8 | DAT_01d182f0
    MOV dword ptr [ESP + 0xfbc],ESI     ; 0048f7ca
    TEST EDI,EDI                        ; 0048f7d1
    JL 0x0048f83a                       ; 0048f7d3
        ;   XREF to: 0048f83a (CONDITIONAL_JUMP)  ; LAB_0048f83a
    PUSH ESI                            ; 0048f7d5
    LEA EAX,[ESP + 0x410]               ; 0048f7d6
    PUSH EAX                            ; 0048f7dd
    PUSH ESI                            ; 0048f7de
    PUSH ESI                            ; 0048f7df
    LEA EAX,[ESP + 0x904]               ; 0048f7e0
    PUSH EAX                            ; 0048f7e7
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0048f7e8
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048f7ed
    PUSH ESI                            ; 0048f7f0
    LEA EAX,[ESP + 0x110]               ; 0048f7f1
    PUSH EAX                            ; 0048f7f8
    MOV EAX,[0x00618170]                ; 0048f7f9 | DAT_00618170
    PUSH ESI                            ; 0048f7fe
    MOV EDX,dword ptr [EAX]             ; 0048f7ff | DAT_01d182f0
    ADD EAX,0x8                         ; 0048f801
    SHL EDX,0x8                         ; 0048f804
    PUSH ESI                            ; 0048f807
    ADD EAX,EDX                         ; 0048f808
    PUSH EAX                            ; 0048f80a
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0048f80b
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048f810
    LEA EAX,[ESP + 0x10c]               ; 0048f813
    PUSH EAX                            ; 0048f81a
    LEA EAX,[ESP + 0x410]               ; 0048f81b
    PUSH EAX                            ; 0048f822
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f823
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f828
    TEST EAX,EAX                        ; 0048f82b
    JNZ 0x0048f83a                      ; 0048f82d
        ;   XREF to: 0048f83a (CONDITIONAL_JUMP)  ; LAB_0048f83a
    MOV dword ptr [ESP + 0xfbc],0x1     ; 0048f82f
    MOV EAX,dword ptr [ESP + 0x1008]    ; 0048f83a
        ;   Label: LAB_0048f83a
    ADD dword ptr [EBX],EAX             ; 0048f841
    JMP 0x0048ec8c                      ; 0048f843
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4752                    ; 0048f848 | = "Error parsing isCurrentSet parameters."
        ;   Label: LAB_0048f848
    MOV EDI,0x1c3dd10                   ; 0048f84d
    PUSH EDI                            ; 0048f852 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f853 | = "Error parsing isCurrentSet parameters." | s_Error_parsing_isCurrentS_005d4752+2
        ;   Label: LAB_0048f853
    MOV byte ptr [EDI],AL               ; 0048f855 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f857
    JZ 0x0048f86b                       ; 0048f859
        ;   XREF to: 0048f86b (CONDITIONAL_JUMP)  ; LAB_0048f86b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f85b | s_Error_parsing_isCurrentS_005d4752+1 | s_Error_parsing_isCurrentS_005d4752+3
    ADD ESI,0x2                         ; 0048f85e
    MOV byte ptr [EDI + 0x1],AL         ; 0048f861 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f864
    CMP AL,0x0                          ; 0048f867
    JNZ 0x0048f853                      ; 0048f869
        ;   XREF to: 0048f853 (CONDITIONAL_JUMP)  ; LAB_0048f853
    POP EDI                             ; 0048f86b
        ;   Label: LAB_0048f86b
    MOV EAX,0xffffffff                  ; 0048f86c
    MOV ESP,EBP                         ; 0048f871
    POP EBP                             ; 0048f873
    POP EDI                             ; 0048f874
    POP ESI                             ; 0048f875
    POP EBX                             ; 0048f876
    RET                                 ; 0048f877
    PUSH 0x5d4779                       ; 0048f878 | = "isDead"
        ;   Label: LAB_0048f878
    LEA EAX,[ESP + 0xf38]               ; 0048f87d
    PUSH EAX                            ; 0048f884
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f885
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f88a
    TEST EAX,EAX                        ; 0048f88d
    JNZ 0x0048f975                      ; 0048f88f
        ;   XREF to: 0048f975 (CONDITIONAL_JUMP)  ; LAB_0048f975
    LEA EAX,[ESP + 0x100c]              ; 0048f895
    MOV ESI,0xffffffff                  ; 0048f89c
    PUSH EAX                            ; 0048f8a1
    LEA EAX,[ESP + 0x894]               ; 0048f8a2
    MOV dword ptr [ESP + 0x1010],ESI    ; 0048f8a9
    PUSH EAX                            ; 0048f8b0
    MOV EAX,0x5d4780                    ; 0048f8b1 | = " ( %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 0048f8b6
    PUSH EAX                            ; 0048f8b8 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f8b9
    ADD EAX,EDI                         ; 0048f8bc
    PUSH EAX                            ; 0048f8be
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f8bf
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048f8c4
    CMP dword ptr [ESP + 0x100c],0x3    ; 0048f8c7
    JL 0x0048f915                       ; 0048f8cf
        ;   XREF to: 0048f915 (CONDITIONAL_JUMP)  ; LAB_0048f915
    MOV EAX,0x7bdc5c                    ; 0048f8d1 | g_CCharacterClassInfo
    PUSH EAX                            ; 0048f8d6 | g_CCharacterClassInfo
    MOV EDX,dword ptr [0x007bdc94]      ; 0048f8d7 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0048f8dd
    LEA EAX,[ESP + 0x898]               ; 0048f8de
    PUSH EAX                            ; 0048f8e5
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048f8e6
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048f8eb
    TEST EAX,EAX                        ; 0048f8ee
    JZ 0x0048e90d                       ; 0048f8f0
        ;   XREF to: 0048e90d (CONDITIONAL_JUMP)  ; LAB_0048e90d
    CMP EAX,dword ptr [0x005f61e4]      ; 0048f8f6 | DAT_005f61e4
    JNZ 0x0048f945                      ; 0048f8fc
        ;   XREF to: 0048f945 (CONDITIONAL_JUMP)  ; LAB_0048f945
    XOR ESI,ESI                         ; 0048f8fe
    MOV dword ptr [ESP + 0xfbc],ESI     ; 0048f900
    MOV EAX,dword ptr [ESP + 0x100c]    ; 0048f907
    ADD dword ptr [EBX],EAX             ; 0048f90e
    JMP 0x0048ec8c                      ; 0048f910
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d478e                    ; 0048f915 | = "Error parsing isDead parameters."
        ;   Label: LAB_0048f915
    MOV EDI,0x1c3dd10                   ; 0048f91a
    PUSH EDI                            ; 0048f91f | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f920 | = "Error parsing isDead parameters." | s_Error_parsing_isDead_par_005d478e+2
        ;   Label: LAB_0048f920
    MOV byte ptr [EDI],AL               ; 0048f922 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f924
    JZ 0x0048f938                       ; 0048f926
        ;   XREF to: 0048f938 (CONDITIONAL_JUMP)  ; LAB_0048f938
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f928 | s_Error_parsing_isDead_par_005d478e+1 | s_Error_parsing_isDead_par_005d478e+3
    ADD ESI,0x2                         ; 0048f92b
    MOV byte ptr [EDI + 0x1],AL         ; 0048f92e | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f931
    CMP AL,0x0                          ; 0048f934
    JNZ 0x0048f920                      ; 0048f936
        ;   XREF to: 0048f920 (CONDITIONAL_JUMP)  ; LAB_0048f920
    POP EDI                             ; 0048f938
        ;   Label: LAB_0048f938
    MOV EAX,0xffffffff                  ; 0048f939
    MOV ESP,EBP                         ; 0048f93e
    POP EBP                             ; 0048f940
    POP EDI                             ; 0048f941
    POP ESI                             ; 0048f942
    POP EBX                             ; 0048f943
    RET                                 ; 0048f944
    PUSH EAX                            ; 0048f945
        ;   Label: LAB_0048f945
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0048f946
    CALL dword ptr [EDX + 0x114]        ; 0048f94c
    ADD ESP,0x4                         ; 0048f952
    CMP EAX,0x1                         ; 0048f955
    SETG AL                             ; 0048f958
    AND EAX,0xff                        ; 0048f95b
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048f960
    MOV EAX,dword ptr [ESP + 0x100c]    ; 0048f967
    ADD dword ptr [EBX],EAX             ; 0048f96e
    JMP 0x0048ec8c                      ; 0048f970
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d47af                       ; 0048f975 | = "isFadeFinished"
        ;   Label: LAB_0048f975
    LEA EAX,[ESP + 0xf38]               ; 0048f97a
    PUSH EAX                            ; 0048f981
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048f982
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048f987
    TEST EAX,EAX                        ; 0048f98a
    JNZ 0x0048fa12                      ; 0048f98c
        ;   XREF to: 0048fa12 (CONDITIONAL_JUMP)  ; LAB_0048fa12
    MOV ESI,0xffffffff                  ; 0048f992
    LEA EAX,[ESP + 0x1010]              ; 0048f997
    MOV dword ptr [ESP + 0x1010],ESI    ; 0048f99e
    PUSH EAX                            ; 0048f9a5
    MOV EAX,0x5d47be                    ; 0048f9a6 | = " ( )%n"
    MOV EDI,dword ptr [EBX]             ; 0048f9ab
    PUSH EAX                            ; 0048f9ad | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f9ae
    ADD EAX,EDI                         ; 0048f9b1
    PUSH EAX                            ; 0048f9b3
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048f9b4
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048f9b9
    MOV EAX,dword ptr [ESP + 0x1010]    ; 0048f9bc
    CMP EAX,0x2                         ; 0048f9c3
    JL 0x0048f9e2                       ; 0048f9c6
        ;   XREF to: 0048f9e2 (CONDITIONAL_JUMP)  ; LAB_0048f9e2
    MOV EDX,dword ptr [EBX]             ; 0048f9c8
    MOV ECX,dword ptr [0x00616494]      ; 0048f9ca | g_CGamePtr
    ADD EDX,EAX                         ; 0048f9d0
    PUSH ECX                            ; 0048f9d2 | g_CGameInstance
    MOV dword ptr [EBX],EDX             ; 0048f9d3
    CALL core_game.cpp_FUN_004bb4e0     ; 0048f9d5
        ;   XREF to: 004bb4e0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bb4e0()
    ADD ESP,0x4                         ; 0048f9da
    JMP 0x0048ec85                      ; 0048f9dd
        ;   XREF to: 0048ec85 (UNCONDITIONAL_JUMP)  ; LAB_0048ec85
    MOV ESI,0x5d47c5                    ; 0048f9e2 | = "Error parsing isFadeFinished function."
        ;   Label: LAB_0048f9e2
    MOV EDI,0x1c3dd10                   ; 0048f9e7
    PUSH EDI                            ; 0048f9ec | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048f9ed | = "Error parsing isFadeFinished function." | s_Error_parsing_isFadeFini_005d47c5+2
        ;   Label: LAB_0048f9ed
    MOV byte ptr [EDI],AL               ; 0048f9ef | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048f9f1
    JZ 0x0048fa05                       ; 0048f9f3
        ;   XREF to: 0048fa05 (CONDITIONAL_JUMP)  ; LAB_0048fa05
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f9f5 | s_Error_parsing_isFadeFini_005d47c5+1 | s_Error_parsing_isFadeFini_005d47c5+3
    ADD ESI,0x2                         ; 0048f9f8
    MOV byte ptr [EDI + 0x1],AL         ; 0048f9fb | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048f9fe
    CMP AL,0x0                          ; 0048fa01
    JNZ 0x0048f9ed                      ; 0048fa03
        ;   XREF to: 0048f9ed (CONDITIONAL_JUMP)  ; LAB_0048f9ed
    POP EDI                             ; 0048fa05
        ;   Label: LAB_0048fa05
    MOV EAX,0xffffffff                  ; 0048fa06
    MOV ESP,EBP                         ; 0048fa0b
    POP EBP                             ; 0048fa0d
    POP EDI                             ; 0048fa0e
    POP ESI                             ; 0048fa0f
    POP EBX                             ; 0048fa10
    RET                                 ; 0048fa11
    PUSH 0x5d47ec                       ; 0048fa12 | = "isInRange"
        ;   Label: LAB_0048fa12
    LEA EAX,[ESP + 0xf38]               ; 0048fa17
    PUSH EAX                            ; 0048fa1e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048fa1f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fa24
    TEST EAX,EAX                        ; 0048fa27
    JNZ 0x0048fc2c                      ; 0048fa29
        ;   XREF to: 0048fc2c (CONDITIONAL_JUMP)  ; LAB_0048fc2c
    MOV EDI,0xffffffff                  ; 0048fa2f
    LEA EAX,[ESP + 0x1014]              ; 0048fa34
    MOV dword ptr [ESP + 0x1014],EDI    ; 0048fa3b
    PUSH EAX                            ; 0048fa42
    MOV EAX,0x5d47f6                    ; 0048fa43 | = " ( %n"
    MOV EDX,dword ptr [EBX]             ; 0048fa48
    PUSH EAX                            ; 0048fa4a | = " ( %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fa4b
    ADD EAX,EDX                         ; 0048fa4e
    PUSH EAX                            ; 0048fa50
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048fa51
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048fa56
    MOV ECX,dword ptr [ESP + 0x1014]    ; 0048fa59
    CMP ECX,0x1                         ; 0048fa60
    JL 0x0048fa92                       ; 0048fa63
        ;   XREF to: 0048fa92 (CONDITIONAL_JUMP)  ; LAB_0048fa92
    LEA EAX,[ESP + 0xf80]               ; 0048fa65
    PUSH EAX                            ; 0048fa6c
    MOV ESI,dword ptr [EBX]             ; 0048fa6d
    PUSH EBX                            ; 0048fa6f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0048fa70
    ADD ESI,ECX                         ; 0048fa73
    PUSH EDI                            ; 0048fa75
    MOV dword ptr [EBX],ESI             ; 0048fa76
    CALL core_event.cpp_parseVectorLocation_FUN_00488e30 ; 0048fa78
        ;   XREF to: 00488e30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_00488e30()
    ADD ESP,0xc                         ; 0048fa7d
    MOV EDI,EAX                         ; 0048fa80
    TEST EAX,EAX                        ; 0048fa82
    JGE 0x0048fac2                      ; 0048fa84
        ;   XREF to: 0048fac2 (CONDITIONAL_JUMP)  ; LAB_0048fac2
    MOV EAX,0xffffffff                  ; 0048fa86
    MOV ESP,EBP                         ; 0048fa8b
    POP EBP                             ; 0048fa8d
    POP EDI                             ; 0048fa8e
    POP ESI                             ; 0048fa8f
    POP EBX                             ; 0048fa90
    RET                                 ; 0048fa91
    MOV ESI,0x5d47fc                    ; 0048fa92 | = "Error parsing isInRange parameters."
        ;   Label: LAB_0048fa92
    MOV EDI,0x1c3dd10                   ; 0048fa97
    PUSH EDI                            ; 0048fa9c | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048fa9d | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005d47fc+2
        ;   Label: LAB_0048fa9d
    MOV byte ptr [EDI],AL               ; 0048fa9f | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048faa1
    JZ 0x0048fab5                       ; 0048faa3
        ;   XREF to: 0048fab5 (CONDITIONAL_JUMP)  ; LAB_0048fab5
    MOV AL,byte ptr [ESI + 0x1]         ; 0048faa5 | s_Error_parsing_isInRange_005d47fc+1 | s_Error_parsing_isInRange_005d47fc+3
    ADD ESI,0x2                         ; 0048faa8
    MOV byte ptr [EDI + 0x1],AL         ; 0048faab | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048faae
    CMP AL,0x0                          ; 0048fab1
    JNZ 0x0048fa9d                      ; 0048fab3
        ;   XREF to: 0048fa9d (CONDITIONAL_JUMP)  ; LAB_0048fa9d
    POP EDI                             ; 0048fab5
        ;   Label: LAB_0048fab5
    MOV EAX,0xffffffff                  ; 0048fab6
    MOV ESP,EBP                         ; 0048fabb
    POP EBP                             ; 0048fabd
    POP EDI                             ; 0048fabe
    POP ESI                             ; 0048fabf
    POP EBX                             ; 0048fac0
    RET                                 ; 0048fac1
    MOV dword ptr [ESP + 0x1014],0xffffffff ; 0048fac2
        ;   Label: LAB_0048fac2
    LEA EAX,[ESP + 0x1014]              ; 0048facd
    PUSH EAX                            ; 0048fad4
    MOV EAX,0x5d4820                    ; 0048fad5 | = " , %n"
    MOV EDX,dword ptr [EBX]             ; 0048fada
    PUSH EAX                            ; 0048fadc | = " , %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fadd
    ADD EAX,EDX                         ; 0048fae0
    PUSH EAX                            ; 0048fae2
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048fae3
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0048fae8
    MOV ECX,dword ptr [ESP + 0x1014]    ; 0048faeb
    CMP ECX,0x1                         ; 0048faf2
    JL 0x0048fbbe                       ; 0048faf5
        ;   XREF to: 0048fbbe (CONDITIONAL_JUMP)  ; LAB_0048fbbe
    LEA EAX,[ESP + 0xf98]               ; 0048fafb
    PUSH EAX                            ; 0048fb02
    MOV ESI,dword ptr [EBX]             ; 0048fb03
    PUSH EBX                            ; 0048fb05
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fb06
    ADD ESI,ECX                         ; 0048fb09
    PUSH EAX                            ; 0048fb0b
    MOV dword ptr [EBX],ESI             ; 0048fb0c
    CALL core_event.cpp_parseVectorLocation_FUN_00488e30 ; 0048fb0e
        ;   XREF to: 00488e30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_parseVectorLocation_FUN_00488e30()
    ADD ESP,0xc                         ; 0048fb13
    MOV ESI,EAX                         ; 0048fb16
    TEST EAX,EAX                        ; 0048fb18
    JL 0x0048fbe2                       ; 0048fb1a
        ;   XREF to: 0048fbe2 (CONDITIONAL_JUMP)  ; LAB_0048fbe2
    LEA EAX,[ESP + 0x1014]              ; 0048fb20
    MOV EDX,0xffffffff                  ; 0048fb27
    PUSH EAX                            ; 0048fb2c
    LEA EAX,[ESP + 0x101c]              ; 0048fb2d
    MOV dword ptr [ESP + 0x1018],EDX    ; 0048fb34
    PUSH EAX                            ; 0048fb3b
    MOV EAX,0x5d484a                    ; 0048fb3c | = " , %f )%n"
    MOV ECX,dword ptr [EBX]             ; 0048fb41
    PUSH EAX                            ; 0048fb43 | = " , %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fb44
    ADD EAX,ECX                         ; 0048fb47
    PUSH EAX                            ; 0048fb49
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048fb4a
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0048fb4f
    MOV EAX,dword ptr [ESP + 0x1014]    ; 0048fb52
    CMP EAX,0x3                         ; 0048fb59
    JL 0x0048fbee                       ; 0048fb5c
        ;   XREF to: 0048fbee (CONDITIONAL_JUMP)  ; LAB_0048fbee
    ADD dword ptr [EBX],EAX             ; 0048fb62
    TEST EDI,EDI                        ; 0048fb64
    JZ 0x0048fc1e                       ; 0048fb66
        ;   XREF to: 0048fc1e (CONDITIONAL_JUMP)  ; LAB_0048fc1e
    TEST ESI,ESI                        ; 0048fb6c
    JZ 0x0048fc1e                       ; 0048fb6e
        ;   XREF to: 0048fc1e (CONDITIONAL_JUMP)  ; LAB_0048fc1e
    FLD float ptr [ESP + 0xf80]         ; 0048fb74
    FSUB float ptr [ESP + 0xf98]        ; 0048fb7b
    FMUL ST0                            ; 0048fb82
    FLD float ptr [ESP + 0xf84]         ; 0048fb84
    FSUB float ptr [ESP + 0xf9c]        ; 0048fb8b
    FMUL ST0                            ; 0048fb92
    FLD float ptr [ESP + 0xf88]         ; 0048fb94
    FXCH                                ; 0048fb9b
    FADDP ST2,ST0                       ; 0048fb9d
    FSUB float ptr [ESP + 0xfa0]        ; 0048fb9f
    FMUL ST0                            ; 0048fba6
    FADDP                               ; 0048fba8
    FSQRT                               ; 0048fbaa
    FCOMP float ptr [ESP + 0x1018]      ; 0048fbac
    FNSTSW AX                           ; 0048fbb3
    SAHF                                ; 0048fbb5
    SETBE AL                            ; 0048fbb6
    JMP 0x0048ec80                      ; 0048fbb9
        ;   XREF to: 0048ec80 (UNCONDITIONAL_JUMP)  ; LAB_0048ec80
    MOV ESI,0x5d4826                    ; 0048fbbe | = "Error parsing isInRange parameters."
        ;   Label: LAB_0048fbbe
    MOV EDI,0x1c3dd10                   ; 0048fbc3
    PUSH EDI                            ; 0048fbc8 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048fbc9 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005d4826+2
        ;   Label: LAB_0048fbc9
    MOV byte ptr [EDI],AL               ; 0048fbcb | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048fbcd
    JZ 0x0048fbe1                       ; 0048fbcf
        ;   XREF to: 0048fbe1 (CONDITIONAL_JUMP)  ; LAB_0048fbe1
    MOV AL,byte ptr [ESI + 0x1]         ; 0048fbd1 | s_Error_parsing_isInRange_005d4826+1 | s_Error_parsing_isInRange_005d4826+3
    ADD ESI,0x2                         ; 0048fbd4
    MOV byte ptr [EDI + 0x1],AL         ; 0048fbd7 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048fbda
    CMP AL,0x0                          ; 0048fbdd
    JNZ 0x0048fbc9                      ; 0048fbdf
        ;   XREF to: 0048fbc9 (CONDITIONAL_JUMP)  ; LAB_0048fbc9
    POP EDI                             ; 0048fbe1
        ;   Label: LAB_0048fbe1
    MOV EAX,0xffffffff                  ; 0048fbe2
        ;   Label: LAB_0048fbe2
    MOV ESP,EBP                         ; 0048fbe7
    POP EBP                             ; 0048fbe9
    POP EDI                             ; 0048fbea
    POP ESI                             ; 0048fbeb
    POP EBX                             ; 0048fbec
    RET                                 ; 0048fbed
    MOV ESI,0x5d4854                    ; 0048fbee | = "Error parsing isInRange parameters."
        ;   Label: LAB_0048fbee
    MOV EDI,0x1c3dd10                   ; 0048fbf3
    PUSH EDI                            ; 0048fbf8 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048fbf9 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005d4854+2
        ;   Label: LAB_0048fbf9
    MOV byte ptr [EDI],AL               ; 0048fbfb | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048fbfd
    JZ 0x0048fc11                       ; 0048fbff
        ;   XREF to: 0048fc11 (CONDITIONAL_JUMP)  ; LAB_0048fc11
    MOV AL,byte ptr [ESI + 0x1]         ; 0048fc01 | s_Error_parsing_isInRange_005d4854+1 | s_Error_parsing_isInRange_005d4854+3
    ADD ESI,0x2                         ; 0048fc04
    MOV byte ptr [EDI + 0x1],AL         ; 0048fc07 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048fc0a
    CMP AL,0x0                          ; 0048fc0d
    JNZ 0x0048fbf9                      ; 0048fc0f
        ;   XREF to: 0048fbf9 (CONDITIONAL_JUMP)  ; LAB_0048fbf9
    POP EDI                             ; 0048fc11
        ;   Label: LAB_0048fc11
    MOV EAX,0xffffffff                  ; 0048fc12
    MOV ESP,EBP                         ; 0048fc17
    POP EBP                             ; 0048fc19
    POP EDI                             ; 0048fc1a
    POP ESI                             ; 0048fc1b
    POP EBX                             ; 0048fc1c
    RET                                 ; 0048fc1d
    XOR ECX,ECX                         ; 0048fc1e
        ;   Label: LAB_0048fc1e
    MOV dword ptr [ESP + 0xfbc],ECX     ; 0048fc20
    JMP 0x0048ec8c                      ; 0048fc27
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4878                       ; 0048fc2c | = "isOfType"
        ;   Label: LAB_0048fc2c
    LEA EAX,[ESP + 0xf38]               ; 0048fc31
    PUSH EAX                            ; 0048fc38
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048fc39
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fc3e
    TEST EAX,EAX                        ; 0048fc41
    JNZ 0x0048fe13                      ; 0048fc43
        ;   XREF to: 0048fe13 (CONDITIONAL_JUMP)  ; LAB_0048fe13
    LEA EAX,[ESP + 0x1028]              ; 0048fc49
    PUSH EAX                            ; 0048fc50
    LEA EAX,[ESP + 0x830]               ; 0048fc51
    MOV EDX,0xffffffff                  ; 0048fc58
    PUSH EAX                            ; 0048fc5d
    LEA EAX,[ESP + 0xd48]               ; 0048fc5e
    MOV dword ptr [ESP + 0x1030],EDX    ; 0048fc65
    PUSH EAX                            ; 0048fc6c
    MOV EAX,0x5d4881                    ; 0048fc6d | = " ( %[^ ,] , %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 0048fc72
    PUSH EAX                            ; 0048fc74 | = " ( %[^ ,] , %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fc75
    ADD EAX,ECX                         ; 0048fc78
    PUSH EAX                            ; 0048fc7a
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048fc7b
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 0048fc80
    CMP dword ptr [ESP + 0x1028],0x3    ; 0048fc83
    JL 0x0048fcf4                       ; 0048fc8b
        ;   XREF to: 0048fcf4 (CONDITIONAL_JUMP)  ; LAB_0048fcf4
    LEA ESI,[ESP + 0xd40]               ; 0048fc8d
    MOV EDI,ESI                         ; 0048fc94
    SUB ECX,ECX                         ; 0048fc96
    DEC ECX                             ; 0048fc98
    XOR EAX,EAX                         ; 0048fc99
    SCASB.REPNE ES:EDI                  ; 0048fc9b
    NOT ECX                             ; 0048fc9d
    DEC ECX                             ; 0048fc9f
    MOV EDI,ECX                         ; 0048fca0
    TEST ECX,ECX                        ; 0048fca2
    JLE 0x0048fcbd                      ; 0048fca4
        ;   XREF to: 0048fcbd (CONDITIONAL_JUMP)  ; LAB_0048fcbd
    LEA EAX,[ECX + ESI*0x1]             ; 0048fca6
    MOV DL,byte ptr [EAX + -0x1]        ; 0048fca9
        ;   Label: LAB_0048fca9
    INC DL                              ; 0048fcac
    AND EDX,0xff                        ; 0048fcae
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048fcb4 | DAT_0061ed94
    JNZ 0x0048fd24                      ; 0048fcbb
        ;   XREF to: 0048fd24 (CONDITIONAL_JUMP)  ; LAB_0048fd24
    LEA EAX,[ESI + EDI*0x1]             ; 0048fcbd
        ;   Label: LAB_0048fcbd
    MOV byte ptr [EAX],0x0              ; 0048fcc0
    LEA EAX,[ESI + 0x1]                 ; 0048fcc3
    MOV dword ptr [ESP + 0x1030],EAX    ; 0048fcc6
    MOV AL,byte ptr [ESI]               ; 0048fccd
        ;   Label: LAB_0048fccd
    INC AL                              ; 0048fccf
    AND EAX,0xff                        ; 0048fcd1
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048fcd6 | DAT_0061ed94
    JZ 0x0048fd30                       ; 0048fcdd
        ;   XREF to: 0048fd30 (CONDITIONAL_JUMP)  ; LAB_0048fd30
    PUSH EDI                            ; 0048fcdf
    MOV EDX,dword ptr [ESP + 0x1034]    ; 0048fce0
    PUSH EDX                            ; 0048fce7
    PUSH ESI                            ; 0048fce8
    DEC EDI                             ; 0048fce9
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048fcea
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fcef
    JMP 0x0048fccd                      ; 0048fcf2
        ;   XREF to: 0048fccd (UNCONDITIONAL_JUMP)  ; LAB_0048fccd
    MOV ESI,0x5d4898                    ; 0048fcf4 | = "Error parsing isOfType parameters."
        ;   Label: LAB_0048fcf4
    MOV EDI,0x1c3dd10                   ; 0048fcf9
    PUSH EDI                            ; 0048fcfe | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048fcff | = "Error parsing isOfType parameters." | s_Error_parsing_isOfType_p_005d4898+2
        ;   Label: LAB_0048fcff
    MOV byte ptr [EDI],AL               ; 0048fd01 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048fd03
    JZ 0x0048fd17                       ; 0048fd05
        ;   XREF to: 0048fd17 (CONDITIONAL_JUMP)  ; LAB_0048fd17
    MOV AL,byte ptr [ESI + 0x1]         ; 0048fd07 | s_Error_parsing_isOfType_p_005d4898+1 | s_Error_parsing_isOfType_p_005d4898+3
    ADD ESI,0x2                         ; 0048fd0a
    MOV byte ptr [EDI + 0x1],AL         ; 0048fd0d | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048fd10
    CMP AL,0x0                          ; 0048fd13
    JNZ 0x0048fcff                      ; 0048fd15
        ;   XREF to: 0048fcff (CONDITIONAL_JUMP)  ; LAB_0048fcff
    POP EDI                             ; 0048fd17
        ;   Label: LAB_0048fd17
    MOV EAX,0xffffffff                  ; 0048fd18
        ;   Label: LAB_0048fd18
    MOV ESP,EBP                         ; 0048fd1d
    POP EBP                             ; 0048fd1f
    POP EDI                             ; 0048fd20
    POP ESI                             ; 0048fd21
    POP EBX                             ; 0048fd22
    RET                                 ; 0048fd23
    DEC EDI                             ; 0048fd24
        ;   Label: LAB_0048fd24
    DEC EAX                             ; 0048fd25
    TEST EDI,EDI                        ; 0048fd26
    JG 0x0048fca9                       ; 0048fd28
        ;   XREF to: 0048fca9 (CONDITIONAL_JUMP)  ; LAB_0048fca9
    JMP 0x0048fcbd                      ; 0048fd2e
        ;   XREF to: 0048fcbd (UNCONDITIONAL_JUMP)  ; LAB_0048fcbd
    LEA EDI,[ESP + 0x82c]               ; 0048fd30
        ;   Label: LAB_0048fd30
    LEA ESI,[ESP + 0x82c]               ; 0048fd37
    SUB ECX,ECX                         ; 0048fd3e
    DEC ECX                             ; 0048fd40
    XOR EAX,EAX                         ; 0048fd41
    SCASB.REPNE ES:EDI                  ; 0048fd43
    NOT ECX                             ; 0048fd45
    DEC ECX                             ; 0048fd47
    MOV EDI,ECX                         ; 0048fd48
    TEST ECX,ECX                        ; 0048fd4a
    JLE 0x0048fd6b                      ; 0048fd4c
        ;   XREF to: 0048fd6b (CONDITIONAL_JUMP)  ; LAB_0048fd6b
    LEA EAX,[ESP + 0x82c]               ; 0048fd4e
    ADD EAX,ECX                         ; 0048fd55
    MOV DL,byte ptr [EAX + -0x1]        ; 0048fd57
        ;   Label: LAB_0048fd57
    INC DL                              ; 0048fd5a
    AND EDX,0xff                        ; 0048fd5c
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048fd62 | DAT_0061ed94
    JNZ 0x0048fda2                      ; 0048fd69
        ;   XREF to: 0048fda2 (CONDITIONAL_JUMP)  ; LAB_0048fda2
    LEA EAX,[ESI + EDI*0x1]             ; 0048fd6b
        ;   Label: LAB_0048fd6b
    MOV byte ptr [EAX],0x0              ; 0048fd6e
    LEA EAX,[ESI + 0x1]                 ; 0048fd71
    MOV dword ptr [ESP + 0x1034],EAX    ; 0048fd74
    MOV AL,byte ptr [ESI]               ; 0048fd7b
        ;   Label: LAB_0048fd7b
    INC AL                              ; 0048fd7d
    AND EAX,0xff                        ; 0048fd7f
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048fd84 | DAT_0061ed94
    JZ 0x0048fdaa                       ; 0048fd8b
        ;   XREF to: 0048fdaa (CONDITIONAL_JUMP)  ; LAB_0048fdaa
    PUSH EDI                            ; 0048fd8d
    MOV ECX,dword ptr [ESP + 0x1038]    ; 0048fd8e
    PUSH ECX                            ; 0048fd95
    PUSH ESI                            ; 0048fd96
    DEC EDI                             ; 0048fd97
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048fd98
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fd9d
    JMP 0x0048fd7b                      ; 0048fda0
        ;   XREF to: 0048fd7b (UNCONDITIONAL_JUMP)  ; LAB_0048fd7b
    DEC EDI                             ; 0048fda2
        ;   Label: LAB_0048fda2
    DEC EAX                             ; 0048fda3
    TEST EDI,EDI                        ; 0048fda4
    JG 0x0048fd57                       ; 0048fda6
        ;   XREF to: 0048fd57 (CONDITIONAL_JUMP)  ; LAB_0048fd57
    JMP 0x0048fd6b                      ; 0048fda8
        ;   XREF to: 0048fd6b (UNCONDITIONAL_JUMP)  ; LAB_0048fd6b
    PUSH 0x7bbff8                       ; 0048fdaa | g_CDemonActorClassInfo
        ;   Label: LAB_0048fdaa
    MOV ECX,dword ptr [0x007bc030]      ; 0048fdaf | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0048fdb5
    LEA EAX,[ESP + 0xd48]               ; 0048fdb6
    PUSH EAX                            ; 0048fdbd
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048fdbe
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048fdc3
    TEST EAX,EAX                        ; 0048fdc6
    JZ 0x0048fd18                       ; 0048fdc8
        ;   XREF to: 0048fd18 (CONDITIONAL_JUMP)  ; LAB_0048fd18
    CMP EAX,dword ptr [0x005f61e4]      ; 0048fdce | DAT_005f61e4
    JNZ 0x0048fded                      ; 0048fdd4
        ;   XREF to: 0048fded (CONDITIONAL_JUMP)  ; LAB_0048fded
    XOR EDI,EDI                         ; 0048fdd6
    MOV dword ptr [ESP + 0xfbc],EDI     ; 0048fdd8
    MOV EAX,dword ptr [ESP + 0x1028]    ; 0048fddf
    ADD dword ptr [EBX],EAX             ; 0048fde6
    JMP 0x0048ec8c                      ; 0048fde8
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    LEA EDX,[ESP + 0x82c]               ; 0048fded
        ;   Label: LAB_0048fded
    PUSH EDX                            ; 0048fdf4
    PUSH EAX                            ; 0048fdf5
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0048fdf6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0048fdfb
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0048fdfe
    MOV EAX,dword ptr [ESP + 0x1028]    ; 0048fe05
    ADD dword ptr [EBX],EAX             ; 0048fe0c
    JMP 0x0048ec8c                      ; 0048fe0e
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d48bb                       ; 0048fe13 | = "isFacing"
        ;   Label: LAB_0048fe13
    LEA EAX,[ESP + 0xf38]               ; 0048fe18
    PUSH EAX                            ; 0048fe1f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048fe20
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048fe25
    TEST EAX,EAX                        ; 0048fe28
    JNZ 0x004901bf                      ; 0048fe2a
        ;   XREF to: 004901bf (CONDITIONAL_JUMP)  ; LAB_004901bf
    LEA EAX,[ESP + 0x1038]              ; 0048fe30
    PUSH EAX                            ; 0048fe37
    LEA EAX,[ESP + 0xda8]               ; 0048fe38
    MOV ESI,0xffffffff                  ; 0048fe3f
    PUSH EAX                            ; 0048fe44
    LEA EAX,[ESP + 0xe10]               ; 0048fe45
    MOV dword ptr [ESP + 0x1040],ESI    ; 0048fe4c
    PUSH EAX                            ; 0048fe53
    MOV EAX,0x5d48c4                    ; 0048fe54 | = " (%[^,], %[^,)]%n"
    MOV EDI,dword ptr [EBX]             ; 0048fe59
    PUSH EAX                            ; 0048fe5b | = " (%[^,], %[^,)]%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fe5c
    ADD EAX,EDI                         ; 0048fe5f
    PUSH EAX                            ; 0048fe61
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0048fe62
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 0048fe67
    CMP dword ptr [ESP + 0x1038],0x5    ; 0048fe6a
    JL 0x0048fedb                       ; 0048fe72
        ;   XREF to: 0048fedb (CONDITIONAL_JUMP)  ; LAB_0048fedb
    LEA ESI,[ESP + 0xe08]               ; 0048fe74
    MOV EDI,ESI                         ; 0048fe7b
    SUB ECX,ECX                         ; 0048fe7d
    DEC ECX                             ; 0048fe7f
    XOR EAX,EAX                         ; 0048fe80
    SCASB.REPNE ES:EDI                  ; 0048fe82
    NOT ECX                             ; 0048fe84
    DEC ECX                             ; 0048fe86
    MOV EDI,ECX                         ; 0048fe87
    TEST ECX,ECX                        ; 0048fe89
    JLE 0x0048fea4                      ; 0048fe8b
        ;   XREF to: 0048fea4 (CONDITIONAL_JUMP)  ; LAB_0048fea4
    LEA EAX,[ECX + ESI*0x1]             ; 0048fe8d
    MOV DL,byte ptr [EAX + -0x1]        ; 0048fe90
        ;   Label: LAB_0048fe90
    INC DL                              ; 0048fe93
    AND EDX,0xff                        ; 0048fe95
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048fe9b | DAT_0061ed94
    JNZ 0x0048ff0b                      ; 0048fea2
        ;   XREF to: 0048ff0b (CONDITIONAL_JUMP)  ; LAB_0048ff0b
    LEA EAX,[ESI + EDI*0x1]             ; 0048fea4
        ;   Label: LAB_0048fea4
    MOV byte ptr [EAX],0x0              ; 0048fea7
    LEA EAX,[ESI + 0x1]                 ; 0048feaa
    MOV dword ptr [ESP + 0x103c],EAX    ; 0048fead
    MOV AL,byte ptr [ESI]               ; 0048feb4
        ;   Label: LAB_0048feb4
    INC AL                              ; 0048feb6
    AND EAX,0xff                        ; 0048feb8
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048febd | DAT_0061ed94
    JZ 0x0048ff17                       ; 0048fec4
        ;   XREF to: 0048ff17 (CONDITIONAL_JUMP)  ; LAB_0048ff17
    PUSH EDI                            ; 0048fec6
    MOV EDX,dword ptr [ESP + 0x1040]    ; 0048fec7
    PUSH EDX                            ; 0048fece
    PUSH ESI                            ; 0048fecf
    DEC EDI                             ; 0048fed0
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048fed1
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048fed6
    JMP 0x0048feb4                      ; 0048fed9
        ;   XREF to: 0048feb4 (UNCONDITIONAL_JUMP)  ; LAB_0048feb4
    MOV ESI,0x5d48d6                    ; 0048fedb | = "Error parsing isFacing parameters."
        ;   Label: LAB_0048fedb
    MOV EDI,0x1c3dd10                   ; 0048fee0
    PUSH EDI                            ; 0048fee5 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048fee6 | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005d48d6+2
        ;   Label: LAB_0048fee6
    MOV byte ptr [EDI],AL               ; 0048fee8 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048feea
    JZ 0x0048fefe                       ; 0048feec
        ;   XREF to: 0048fefe (CONDITIONAL_JUMP)  ; LAB_0048fefe
    MOV AL,byte ptr [ESI + 0x1]         ; 0048feee | s_Error_parsing_isFacing_p_005d48d6+1 | s_Error_parsing_isFacing_p_005d48d6+3
    ADD ESI,0x2                         ; 0048fef1
    MOV byte ptr [EDI + 0x1],AL         ; 0048fef4 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048fef7
    CMP AL,0x0                          ; 0048fefa
    JNZ 0x0048fee6                      ; 0048fefc
        ;   XREF to: 0048fee6 (CONDITIONAL_JUMP)  ; LAB_0048fee6
    POP EDI                             ; 0048fefe
        ;   Label: LAB_0048fefe
    MOV EAX,0xffffffff                  ; 0048feff
    MOV ESP,EBP                         ; 0048ff04
    POP EBP                             ; 0048ff06
    POP EDI                             ; 0048ff07
    POP ESI                             ; 0048ff08
    POP EBX                             ; 0048ff09
    RET                                 ; 0048ff0a
    DEC EDI                             ; 0048ff0b
        ;   Label: LAB_0048ff0b
    DEC EAX                             ; 0048ff0c
    TEST EDI,EDI                        ; 0048ff0d
    JG 0x0048fe90                       ; 0048ff0f
        ;   XREF to: 0048fe90 (CONDITIONAL_JUMP)  ; LAB_0048fe90
    JMP 0x0048fea4                      ; 0048ff15
        ;   XREF to: 0048fea4 (UNCONDITIONAL_JUMP)  ; LAB_0048fea4
    LEA EAX,[ESP + 0xda4]               ; 0048ff17
        ;   Label: LAB_0048ff17
    LEA EDI,[ESP + 0xda4]               ; 0048ff1e
    MOV dword ptr [ESP + 0x1040],EAX    ; 0048ff25
    SUB ECX,ECX                         ; 0048ff2c
    DEC ECX                             ; 0048ff2e
    XOR EAX,EAX                         ; 0048ff2f
    SCASB.REPNE ES:EDI                  ; 0048ff31
    NOT ECX                             ; 0048ff33
    DEC ECX                             ; 0048ff35
    MOV ESI,ECX                         ; 0048ff36
    TEST ECX,ECX                        ; 0048ff38
    JLE 0x0048ff59                      ; 0048ff3a
        ;   XREF to: 0048ff59 (CONDITIONAL_JUMP)  ; LAB_0048ff59
    LEA EAX,[ESP + 0xda4]               ; 0048ff3c
    ADD EAX,ECX                         ; 0048ff43
    MOV DL,byte ptr [EAX + -0x1]        ; 0048ff45
        ;   Label: LAB_0048ff45
    INC DL                              ; 0048ff48
    AND EDX,0xff                        ; 0048ff4a
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0048ff50 | DAT_0061ed94
    JNZ 0x0048ff95                      ; 0048ff57
        ;   XREF to: 0048ff95 (CONDITIONAL_JUMP)  ; LAB_0048ff95
    MOV EAX,dword ptr [ESP + 0x1040]    ; 0048ff59
        ;   Label: LAB_0048ff59
    LEA EDI,[EAX + 0x1]                 ; 0048ff60
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 0048ff63
    MOV EAX,dword ptr [ESP + 0x1040]    ; 0048ff67
        ;   Label: LAB_0048ff67
    MOV AL,byte ptr [EAX]               ; 0048ff6e
    INC AL                              ; 0048ff70
    AND EAX,0xff                        ; 0048ff72
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0048ff77 | DAT_0061ed94
    JZ 0x0048ff9d                       ; 0048ff7e
        ;   XREF to: 0048ff9d (CONDITIONAL_JUMP)  ; LAB_0048ff9d
    PUSH ESI                            ; 0048ff80
    PUSH EDI                            ; 0048ff81
    MOV EAX,dword ptr [ESP + 0x1048]    ; 0048ff82
    PUSH EAX                            ; 0048ff89
    DEC ESI                             ; 0048ff8a
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0048ff8b
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0048ff90
    JMP 0x0048ff67                      ; 0048ff93
        ;   XREF to: 0048ff67 (UNCONDITIONAL_JUMP)  ; LAB_0048ff67
    DEC ESI                             ; 0048ff95
        ;   Label: LAB_0048ff95
    DEC EAX                             ; 0048ff96
    TEST ESI,ESI                        ; 0048ff97
    JG 0x0048ff45                       ; 0048ff99
        ;   XREF to: 0048ff45 (CONDITIONAL_JUMP)  ; LAB_0048ff45
    JMP 0x0048ff59                      ; 0048ff9b
        ;   XREF to: 0048ff59 (UNCONDITIONAL_JUMP)  ; LAB_0048ff59
    PUSH 0x7bbff8                       ; 0048ff9d | g_CDemonActorClassInfo
        ;   Label: LAB_0048ff9d
    MOV ECX,dword ptr [0x007bc030]      ; 0048ffa2 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0048ffa8
    LEA EAX,[ESP + 0xe10]               ; 0048ffa9
    PUSH EAX                            ; 0048ffb0
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048ffb1
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048ffb6
    MOV EDI,EAX                         ; 0048ffb9
    TEST EAX,EAX                        ; 0048ffbb
    JNZ 0x0048ffcb                      ; 0048ffbd
        ;   XREF to: 0048ffcb (CONDITIONAL_JUMP)  ; LAB_0048ffcb
    MOV EAX,0xffffffff                  ; 0048ffbf
        ;   Label: LAB_0048ffbf
    MOV ESP,EBP                         ; 0048ffc4
    POP EBP                             ; 0048ffc6
    POP EDI                             ; 0048ffc7
    POP ESI                             ; 0048ffc8
    POP EBX                             ; 0048ffc9
    RET                                 ; 0048ffca
    PUSH 0x7bbff8                       ; 0048ffcb | g_CDemonActorClassInfo
        ;   Label: LAB_0048ffcb
    MOV ESI,dword ptr [0x007bc030]      ; 0048ffd0 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 0048ffd6
    LEA EAX,[ESP + 0xdac]               ; 0048ffd7
    PUSH EAX                            ; 0048ffde
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 0048ffdf
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 0048ffe4
    MOV ESI,EAX                         ; 0048ffe7
    TEST EAX,EAX                        ; 0048ffe9
    JZ 0x0048ffbf                       ; 0048ffeb
        ;   XREF to: 0048ffbf (CONDITIONAL_JUMP)  ; LAB_0048ffbf
    MOV EAX,dword ptr [ESP + 0x1038]    ; 0048ffed
    MOV EDX,dword ptr [EBX]             ; 0048fff4
    ADD EDX,EAX                         ; 0048fff6
    MOV ECX,0x42340000                  ; 0048fff8
    MOV dword ptr [EBX],EDX             ; 0048fffd
    MOV dword ptr [ESP + 0x8],ECX       ; 0048ffff
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490003
    ADD EAX,dword ptr [EBX]             ; 00490006
    CMP byte ptr [EAX],0x2c             ; 00490008
    JZ 0x0049003e                       ; 0049000b
        ;   XREF to: 0049003e (CONDITIONAL_JUMP)  ; LAB_0049003e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049000d
        ;   Label: LAB_0049000d
    MOV ECX,dword ptr [EBX]             ; 00490010
    ADD EAX,ECX                         ; 00490012
    CMP byte ptr [EAX],0x29             ; 00490014
    JNZ 0x00490100                      ; 00490017
        ;   XREF to: 00490100 (CONDITIONAL_JUMP)  ; LAB_00490100
    LEA EAX,[ECX + 0x1]                 ; 0049001d
    MOV EDX,dword ptr [0x005f61e4]      ; 00490020 | DAT_005f61e4
    MOV dword ptr [EBX],EAX             ; 00490026
    CMP EDI,EDX                         ; 00490028
    JNZ 0x00490130                      ; 0049002a
        ;   XREF to: 00490130 (CONDITIONAL_JUMP)  ; LAB_00490130
    XOR EDI,EDI                         ; 00490030
        ;   Label: LAB_00490030
    MOV dword ptr [ESP + 0xfbc],EDI     ; 00490032
    JMP 0x0048ec8c                      ; 00490039
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    LEA EAX,[ESP + 0x1038]              ; 0049003e
        ;   Label: LAB_0049003e
    MOV ECX,0xffffffff                  ; 00490045
    PUSH EAX                            ; 0049004a
    LEA EAX,[ESP + 0xc]                 ; 0049004b
    MOV dword ptr [ESP + 0x103c],ECX    ; 0049004f
    PUSH EAX                            ; 00490056
    MOV EDX,dword ptr [EBX]             ; 00490057
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490059
    PUSH 0x5d48f9                       ; 0049005c | = ",%f %n"
    ADD EAX,EDX                         ; 00490061
    PUSH EAX                            ; 00490063
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490064
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00490069
    MOV ECX,dword ptr [ESP + 0x1038]    ; 0049006c
    CMP ECX,0x2                         ; 00490073
    JL 0x004900a0                       ; 00490076
        ;   XREF to: 004900a0 (CONDITIONAL_JUMP)  ; LAB_004900a0
    FLD float ptr [ESP + 0x8]           ; 00490078
    FLDZ                                ; 0049007c
    FXCH                                ; 0049007e
    FSTP double ptr [ESP]               ; 00490080
    FCOMP double ptr [ESP]              ; 00490083
    FNSTSW AX                           ; 00490086
    SAHF                                ; 00490088
    JA 0x004900d0                       ; 00490089
        ;   XREF to: 004900d0 (CONDITIONAL_JUMP)  ; LAB_004900d0
    FLD double ptr [ESP]                ; 0049008b
    FCOMP double ptr [0x005d4c9b]       ; 0049008e | DAT_005d4c9b
    FNSTSW AX                           ; 00490094
    SAHF                                ; 00490096
    JA 0x004900d0                       ; 00490097
        ;   XREF to: 004900d0 (CONDITIONAL_JUMP)  ; LAB_004900d0
    ADD dword ptr [EBX],ECX             ; 00490099
    JMP 0x0049000d                      ; 0049009b
        ;   XREF to: 0049000d (UNCONDITIONAL_JUMP)  ; LAB_0049000d
    MOV ESI,0x5d4900                    ; 004900a0 | = "Error parsing isFacing parameters."
        ;   Label: LAB_004900a0
    MOV EDI,0x1c3dd10                   ; 004900a5
    PUSH EDI                            ; 004900aa | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 004900ab | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005d4900+2
        ;   Label: LAB_004900ab
    MOV byte ptr [EDI],AL               ; 004900ad | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 004900af
    JZ 0x004900c3                       ; 004900b1
        ;   XREF to: 004900c3 (CONDITIONAL_JUMP)  ; LAB_004900c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004900b3 | s_Error_parsing_isFacing_p_005d4900+1 | s_Error_parsing_isFacing_p_005d4900+3
    ADD ESI,0x2                         ; 004900b6
    MOV byte ptr [EDI + 0x1],AL         ; 004900b9 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 004900bc
    CMP AL,0x0                          ; 004900bf
    JNZ 0x004900ab                      ; 004900c1
        ;   XREF to: 004900ab (CONDITIONAL_JUMP)  ; LAB_004900ab
    POP EDI                             ; 004900c3
        ;   Label: LAB_004900c3
    MOV EAX,0xffffffff                  ; 004900c4
    MOV ESP,EBP                         ; 004900c9
    POP EBP                             ; 004900cb
    POP EDI                             ; 004900cc
    POP ESI                             ; 004900cd
    POP EBX                             ; 004900ce
    RET                                 ; 004900cf
    MOV ESI,0x5d4923                    ; 004900d0 | = "isFacing() angle must be in range 0....."
        ;   Label: LAB_004900d0
    MOV EDI,0x1c3dd10                   ; 004900d5
    PUSH EDI                            ; 004900da | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 004900db | = "isFacing() angle must be in range 0....." | s_isFacing_angle_must_be_i_005d4923+2
        ;   Label: LAB_004900db
    MOV byte ptr [EDI],AL               ; 004900dd | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 004900df
    JZ 0x004900f3                       ; 004900e1
        ;   XREF to: 004900f3 (CONDITIONAL_JUMP)  ; LAB_004900f3
    MOV AL,byte ptr [ESI + 0x1]         ; 004900e3 | s_isFacing_angle_must_be_i_005d4923+1 | s_isFacing_angle_must_be_i_005d4923+3
    ADD ESI,0x2                         ; 004900e6
    MOV byte ptr [EDI + 0x1],AL         ; 004900e9 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 004900ec
    CMP AL,0x0                          ; 004900ef
    JNZ 0x004900db                      ; 004900f1
        ;   XREF to: 004900db (CONDITIONAL_JUMP)  ; LAB_004900db
    POP EDI                             ; 004900f3
        ;   Label: LAB_004900f3
    MOV EAX,0xffffffff                  ; 004900f4
    MOV ESP,EBP                         ; 004900f9
    POP EBP                             ; 004900fb
    POP EDI                             ; 004900fc
    POP ESI                             ; 004900fd
    POP EBX                             ; 004900fe
    RET                                 ; 004900ff
    MOV ESI,0x5d494d                    ; 00490100 | = "Error parsing isFacing parameters."
        ;   Label: LAB_00490100
    MOV EDI,0x1c3dd10                   ; 00490105
    PUSH EDI                            ; 0049010a | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0049010b | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005d494d+2
        ;   Label: LAB_0049010b
    MOV byte ptr [EDI],AL               ; 0049010d | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0049010f
    JZ 0x00490123                       ; 00490111
        ;   XREF to: 00490123 (CONDITIONAL_JUMP)  ; LAB_00490123
    MOV AL,byte ptr [ESI + 0x1]         ; 00490113 | s_Error_parsing_isFacing_p_005d494d+1 | s_Error_parsing_isFacing_p_005d494d+3
    ADD ESI,0x2                         ; 00490116
    MOV byte ptr [EDI + 0x1],AL         ; 00490119 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0049011c
    CMP AL,0x0                          ; 0049011f
    JNZ 0x0049010b                      ; 00490121
        ;   XREF to: 0049010b (CONDITIONAL_JUMP)  ; LAB_0049010b
    POP EDI                             ; 00490123
        ;   Label: LAB_00490123
    MOV EAX,0xffffffff                  ; 00490124
    MOV ESP,EBP                         ; 00490129
    POP EBP                             ; 0049012b
    POP EDI                             ; 0049012c
    POP ESI                             ; 0049012d
    POP EBX                             ; 0049012e
    RET                                 ; 0049012f
    CMP ESI,EDX                         ; 00490130
        ;   Label: LAB_00490130
    JZ 0x00490030                       ; 00490132
        ;   XREF to: 00490030 (CONDITIONAL_JUMP)  ; LAB_00490030
    ADD ESI,0x20                        ; 00490138
    PUSH ESI                            ; 0049013b
    PUSH EDI                            ; 0049013c
    LEA ESI,[ESP + 0xfac]               ; 0049013d
    CALL core_actor.cpp_FUN_00408de0    ; 00490144
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA EDI,[ESP + 0xf94]               ; 00490149
    LEA ESI,[ESP + 0xfac]               ; 00490150
    ADD ESP,0x8                         ; 00490157
    MOVSD ES:EDI,ESI                    ; 0049015a
    MOVSD ES:EDI,ESI                    ; 0049015b
    MOVSD ES:EDI,ESI                    ; 0049015c
    LEA EAX,[ESP + 0xf8c]               ; 0049015d
    XOR ESI,ESI                         ; 00490164
    PUSH EAX                            ; 00490166
    MOV dword ptr [ESP + 0xf94],ESI     ; 00490167
    LEA ESI,[ESP + 0xfb4]               ; 0049016e
    LEA EDI,[ESP + 0xf78]               ; 00490175
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0049017c
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0xfb4]               ; 00490181
    ADD ESP,0x4                         ; 00490188
    MOVSD ES:EDI,ESI                    ; 0049018b
    MOVSD ES:EDI,ESI                    ; 0049018c
    MOVSD ES:EDI,ESI                    ; 0049018d
    FLD float ptr [ESP + 0xf78]         ; 0049018e
    FABS                                ; 00490195
    FLD float ptr [ESP + 0x8]           ; 00490197
    FMUL float ptr [0x005d4ca3]         ; 0049019b | DAT_005d4ca3
    FMUL double ptr [0x005d4cab]        ; 004901a1 | DAT_005d4cab
    FCOMPP                              ; 004901a7
    FNSTSW AX                           ; 004901a9
    SAHF                                ; 004901ab
    JC 0x004901b8                       ; 004901ac
        ;   XREF to: 004901b8 (CONDITIONAL_JUMP)  ; LAB_004901b8
    MOV EAX,0x1                         ; 004901ae
    JMP 0x0048ec85                      ; 004901b3
        ;   XREF to: 0048ec85 (UNCONDITIONAL_JUMP)  ; LAB_0048ec85
    XOR EAX,EAX                         ; 004901b8
        ;   Label: LAB_004901b8
    JMP 0x0048ec85                      ; 004901ba
        ;   XREF to: 0048ec85 (UNCONDITIONAL_JUMP)  ; LAB_0048ec85
    PUSH 0x5d4970                       ; 004901bf | = "isLightOn"
        ;   Label: LAB_004901bf
    LEA EAX,[ESP + 0xf38]               ; 004901c4
    PUSH EAX                            ; 004901cb
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004901cc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004901d1
    TEST EAX,EAX                        ; 004901d4
    JNZ 0x004902f7                      ; 004901d6
        ;   XREF to: 004902f7 (CONDITIONAL_JUMP)  ; LAB_004902f7
    MOV dword ptr [ESP + 0x104c],0xffffffff ; 004901dc
    LEA EAX,[ESP + 0x104c]              ; 004901e7
    PUSH EAX                            ; 004901ee
    LEA EAX,[ESP + 0xc18]               ; 004901ef
    PUSH EAX                            ; 004901f6
    MOV EAX,0x5d497a                    ; 004901f7 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004901fc
    PUSH EAX                            ; 004901fe | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004901ff
    ADD EAX,EDX                         ; 00490202
    PUSH EAX                            ; 00490204
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490205
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0049020a
    CMP dword ptr [ESP + 0x104c],0x3    ; 0049020d
    JL 0x00490277                       ; 00490215
        ;   XREF to: 00490277 (CONDITIONAL_JUMP)  ; LAB_00490277
    LEA EAX,[ESP + 0x1054]              ; 00490217
    PUSH EAX                            ; 0049021e
    LEA EAX,[ESP + 0x1054]              ; 0049021f
    PUSH EAX                            ; 00490226
    LEA EAX,[ESP + 0xc1c]               ; 00490227
    PUSH EAX                            ; 0049022e
    MOV ESI,dword ptr [0x0061b5a8]      ; 0049022f | g_CDemonSetPtr
    PUSH ESI                            ; 00490235 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_00534770 ; 00490236
        ;   XREF to: 00534770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_00534770(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 0049023b
    CMP dword ptr [ESP + 0x1050],0x0    ; 0049023e
    JZ 0x004902a7                       ; 00490246
        ;   XREF to: 004902a7 (CONDITIONAL_JUMP)  ; LAB_004902a7
    MOV EAX,dword ptr [ESP + 0x1054]    ; 00490248
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0049024f
    SETNZ AL                            ; 00490256
    AND EAX,0xff                        ; 00490259
    MOV ECX,dword ptr [EBX]             ; 0049025e
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00490260
    MOV EAX,dword ptr [ESP + 0x104c]    ; 00490267
    ADD ECX,EAX                         ; 0049026e
    MOV dword ptr [EBX],ECX             ; 00490270
    JMP 0x0048ec8c                      ; 00490272
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4988                    ; 00490277 | = "Error parsing isLightOn parameters."
        ;   Label: LAB_00490277
    MOV EDI,0x1c3dd10                   ; 0049027c
    PUSH EDI                            ; 00490281 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490282 | = "Error parsing isLightOn parameters." | s_Error_parsing_isLightOn_005d4988+2
        ;   Label: LAB_00490282
    MOV byte ptr [EDI],AL               ; 00490284 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490286
    JZ 0x0049029a                       ; 00490288
        ;   XREF to: 0049029a (CONDITIONAL_JUMP)  ; LAB_0049029a
    MOV AL,byte ptr [ESI + 0x1]         ; 0049028a | s_Error_parsing_isLightOn_005d4988+1 | s_Error_parsing_isLightOn_005d4988+3
    ADD ESI,0x2                         ; 0049028d
    MOV byte ptr [EDI + 0x1],AL         ; 00490290 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490293
    CMP AL,0x0                          ; 00490296
    JNZ 0x00490282                      ; 00490298
        ;   XREF to: 00490282 (CONDITIONAL_JUMP)  ; LAB_00490282
    POP EDI                             ; 0049029a
        ;   Label: LAB_0049029a
    MOV EAX,0xffffffff                  ; 0049029b
    MOV ESP,EBP                         ; 004902a0
    POP EBP                             ; 004902a2
    POP EDI                             ; 004902a3
    POP ESI                             ; 004902a4
    POP EBX                             ; 004902a5
    RET                                 ; 004902a6
    LEA EAX,[ESP + 0xc14]               ; 004902a7
        ;   Label: LAB_004902a7
    PUSH EAX                            ; 004902ae
    MOV EAX,0x5d49ac                    ; 004902af | = "Spotlight %s doesn't exist."
    PUSH EAX                            ; 004902b4 | = "Spotlight %s doesn't exist."
    LEA EAX,[ESP + 0x214]               ; 004902b5
    PUSH EAX                            ; 004902bc
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004902bd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004902c2
    LEA ESI,[ESP + 0x20c]               ; 004902c5
    MOV EDI,0x1c3dd10                   ; 004902cc
    PUSH EDI                            ; 004902d1 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 004902d2
        ;   Label: LAB_004902d2
    MOV byte ptr [EDI],AL               ; 004902d4 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 004902d6
    JZ 0x004902ea                       ; 004902d8
        ;   XREF to: 004902ea (CONDITIONAL_JUMP)  ; LAB_004902ea
    MOV AL,byte ptr [ESI + 0x1]         ; 004902da
    ADD ESI,0x2                         ; 004902dd
    MOV byte ptr [EDI + 0x1],AL         ; 004902e0 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 004902e3
    CMP AL,0x0                          ; 004902e6
    JNZ 0x004902d2                      ; 004902e8
        ;   XREF to: 004902d2 (CONDITIONAL_JUMP)  ; LAB_004902d2
    POP EDI                             ; 004902ea
        ;   Label: LAB_004902ea
    MOV EAX,0xffffffff                  ; 004902eb
    MOV ESP,EBP                         ; 004902f0
    POP EBP                             ; 004902f2
    POP EDI                             ; 004902f3
    POP ESI                             ; 004902f4
    POP EBX                             ; 004902f5
    RET                                 ; 004902f6
    PUSH 0x5d49c8                       ; 004902f7 | = "isNudityEnabled"
        ;   Label: LAB_004902f7
    LEA EAX,[ESP + 0xf38]               ; 004902fc
    PUSH EAX                            ; 00490303
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490304
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490309
    TEST EAX,EAX                        ; 0049030c
    JNZ 0x0049039c                      ; 0049030e
        ;   XREF to: 0049039c (CONDITIONAL_JUMP)  ; LAB_0049039c
    MOV dword ptr [ESP + 0x1058],0xffffffff ; 00490314
    LEA EAX,[ESP + 0x1058]              ; 0049031f
    PUSH EAX                            ; 00490326
    MOV EAX,0x5d49d8                    ; 00490327 | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 0049032c
    PUSH EAX                            ; 0049032e | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049032f
    ADD EAX,EDX                         ; 00490332
    PUSH EAX                            ; 00490334
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490335
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0049033a
    MOV ECX,dword ptr [ESP + 0x1058]    ; 0049033d
    CMP ECX,0x2                         ; 00490344
    JL 0x0049036c                       ; 00490347
        ;   XREF to: 0049036c (CONDITIONAL_JUMP)  ; LAB_0049036c
    MOV EAX,[0x00616494]                ; 00490349 | g_CGamePtr
    CMP dword ptr [EAX + 0x18],0x0      ; 0049034e | g_CGameInstance.field15_0x18
    SETNZ AL                            ; 00490352
    MOV EDI,dword ptr [EBX]             ; 00490355
    AND EAX,0xff                        ; 00490357
    ADD EDI,ECX                         ; 0049035c
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0049035e
    MOV dword ptr [EBX],EDI             ; 00490365
    JMP 0x0048ec8c                      ; 00490367
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d49df                    ; 0049036c | = "Error parsing isNudityEnabled()."
        ;   Label: LAB_0049036c
    MOV EDI,0x1c3dd10                   ; 00490371
    PUSH EDI                            ; 00490376 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490377 | = "Error parsing isNudityEnabled()." | s_Error_parsing_isNudityEn_005d49df+2
        ;   Label: LAB_00490377
    MOV byte ptr [EDI],AL               ; 00490379 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0049037b
    JZ 0x0049038f                       ; 0049037d
        ;   XREF to: 0049038f (CONDITIONAL_JUMP)  ; LAB_0049038f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049037f | s_Error_parsing_isNudityEn_005d49df+1 | s_Error_parsing_isNudityEn_005d49df+3
    ADD ESI,0x2                         ; 00490382
    MOV byte ptr [EDI + 0x1],AL         ; 00490385 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490388
    CMP AL,0x0                          ; 0049038b
    JNZ 0x00490377                      ; 0049038d
        ;   XREF to: 00490377 (CONDITIONAL_JUMP)  ; LAB_00490377
    POP EDI                             ; 0049038f
        ;   Label: LAB_0049038f
    MOV EAX,0xffffffff                  ; 00490390
    MOV ESP,EBP                         ; 00490395
    POP EBP                             ; 00490397
    POP EDI                             ; 00490398
    POP ESI                             ; 00490399
    POP EBX                             ; 0049039a
    RET                                 ; 0049039b
    PUSH 0x5d4a00                       ; 0049039c | = "isSfxActive"
        ;   Label: LAB_0049039c
    LEA EAX,[ESP + 0xf38]               ; 004903a1
    PUSH EAX                            ; 004903a8
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004903a9
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004903ae
    TEST EAX,EAX                        ; 004903b1
    JNZ 0x004904d2                      ; 004903b3
        ;   XREF to: 004904d2 (CONDITIONAL_JUMP)  ; LAB_004904d2
    LEA EAX,[ESP + 0x105c]              ; 004903b9
    MOV ECX,0xffffffff                  ; 004903c0
    PUSH EAX                            ; 004903c5
    LEA EAX,[ESP + 0x9c0]               ; 004903c6
    MOV dword ptr [ESP + 0x1060],ECX    ; 004903cd
    PUSH EAX                            ; 004903d4
    MOV EAX,0x5d4a0c                    ; 004903d5 | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 004903da
    PUSH EAX                            ; 004903dc | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004903dd
    ADD EAX,ESI                         ; 004903e0
    PUSH EAX                            ; 004903e2
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004903e3
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 004903e8
    CMP dword ptr [ESP + 0x105c],0x3    ; 004903eb
    JL 0x0049045c                       ; 004903f3
        ;   XREF to: 0049045c (CONDITIONAL_JUMP)  ; LAB_0049045c
    LEA ESI,[ESP + 0x9bc]               ; 004903f5
    MOV EDI,ESI                         ; 004903fc
    SUB ECX,ECX                         ; 004903fe
    DEC ECX                             ; 00490400
    XOR EAX,EAX                         ; 00490401
    SCASB.REPNE ES:EDI                  ; 00490403
    NOT ECX                             ; 00490405
    DEC ECX                             ; 00490407
    MOV EDI,ECX                         ; 00490408
    TEST ECX,ECX                        ; 0049040a
    JLE 0x00490425                      ; 0049040c
        ;   XREF to: 00490425 (CONDITIONAL_JUMP)  ; LAB_00490425
    LEA EAX,[ECX + ESI*0x1]             ; 0049040e
    MOV DL,byte ptr [EAX + -0x1]        ; 00490411
        ;   Label: LAB_00490411
    INC DL                              ; 00490414
    AND EDX,0xff                        ; 00490416
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0049041c | DAT_0061ed94
    JNZ 0x0049048c                      ; 00490423
        ;   XREF to: 0049048c (CONDITIONAL_JUMP)  ; LAB_0049048c
    LEA EAX,[ESI + EDI*0x1]             ; 00490425
        ;   Label: LAB_00490425
    MOV byte ptr [EAX],0x0              ; 00490428
    LEA EAX,[ESI + 0x1]                 ; 0049042b
    MOV dword ptr [ESP + 0x1060],EAX    ; 0049042e
    MOV AL,byte ptr [ESI]               ; 00490435
        ;   Label: LAB_00490435
    INC AL                              ; 00490437
    AND EAX,0xff                        ; 00490439
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0049043e | DAT_0061ed94
    JZ 0x00490498                       ; 00490445
        ;   XREF to: 00490498 (CONDITIONAL_JUMP)  ; LAB_00490498
    PUSH EDI                            ; 00490447
    MOV EAX,dword ptr [ESP + 0x1064]    ; 00490448
    PUSH EAX                            ; 0049044f
    PUSH ESI                            ; 00490450
    DEC EDI                             ; 00490451
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00490452
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490457
    JMP 0x00490435                      ; 0049045a
        ;   XREF to: 00490435 (UNCONDITIONAL_JUMP)  ; LAB_00490435
    MOV ESI,0x5d4a1a                    ; 0049045c | = "Error parsing isSfxActive parameters."
        ;   Label: LAB_0049045c
    MOV EDI,0x1c3dd10                   ; 00490461
    PUSH EDI                            ; 00490466 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490467 | = "Error parsing isSfxActive parameters." | s_Error_parsing_isSfxActiv_005d4a1a+2
        ;   Label: LAB_00490467
    MOV byte ptr [EDI],AL               ; 00490469 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0049046b
    JZ 0x0049047f                       ; 0049046d
        ;   XREF to: 0049047f (CONDITIONAL_JUMP)  ; LAB_0049047f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049046f | s_Error_parsing_isSfxActiv_005d4a1a+1 | s_Error_parsing_isSfxActiv_005d4a1a+3
    ADD ESI,0x2                         ; 00490472
    MOV byte ptr [EDI + 0x1],AL         ; 00490475 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490478
    CMP AL,0x0                          ; 0049047b
    JNZ 0x00490467                      ; 0049047d
        ;   XREF to: 00490467 (CONDITIONAL_JUMP)  ; LAB_00490467
    POP EDI                             ; 0049047f
        ;   Label: LAB_0049047f
    MOV EAX,0xffffffff                  ; 00490480
    MOV ESP,EBP                         ; 00490485
    POP EBP                             ; 00490487
    POP EDI                             ; 00490488
    POP ESI                             ; 00490489
    POP EBX                             ; 0049048a
    RET                                 ; 0049048b
    DEC EDI                             ; 0049048c
        ;   Label: LAB_0049048c
    DEC EAX                             ; 0049048d
    TEST EDI,EDI                        ; 0049048e
    JG 0x00490411                       ; 00490490
        ;   XREF to: 00490411 (CONDITIONAL_JUMP)  ; LAB_00490411
    JMP 0x00490425                      ; 00490496
        ;   XREF to: 00490425 (UNCONDITIONAL_JUMP)  ; LAB_00490425
    XOR EAX,EAX                         ; 00490498
        ;   Label: LAB_00490498
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0049049a
    LEA EAX,[ESP + 0x9bc]               ; 004904a1
    PUSH EAX                            ; 004904a8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004904a9
    PUSH EDX                            ; 004904ac
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_00491920 ; 004904ad
        ;   XREF to: 00491920 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_00491920(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004904b2
    TEST EAX,EAX                        ; 004904b5
    JZ 0x004904c4                       ; 004904b7
        ;   XREF to: 004904c4 (CONDITIONAL_JUMP)  ; LAB_004904c4
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004904b9
    MOV EAX,dword ptr [ESP + 0x105c]    ; 004904c4
        ;   Label: LAB_004904c4
    ADD dword ptr [EBX],EAX             ; 004904cb
    JMP 0x0048ec8c                      ; 004904cd
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4a40                       ; 004904d2 | = "isTalking"
        ;   Label: LAB_004904d2
    LEA EAX,[ESP + 0xf38]               ; 004904d7
    PUSH EAX                            ; 004904de
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004904df
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004904e4
    TEST EAX,EAX                        ; 004904e7
    JNZ 0x004905c0                      ; 004904e9
        ;   XREF to: 004905c0 (CONDITIONAL_JUMP)  ; LAB_004905c0
    LEA EAX,[ESP + 0x1064]              ; 004904ef
    MOV EDI,0xffffffff                  ; 004904f6
    PUSH EAX                            ; 004904fb
    LEA EAX,[ESP + 0xb50]               ; 004904fc
    MOV dword ptr [ESP + 0x1068],EDI    ; 00490503
    PUSH EAX                            ; 0049050a
    MOV EAX,0x5d4a4a                    ; 0049050b | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 00490510
    PUSH EAX                            ; 00490512 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490513
    ADD EAX,EDX                         ; 00490516
    PUSH EAX                            ; 00490518
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490519
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0049051e
    CMP dword ptr [ESP + 0x1064],0x3    ; 00490521
    JL 0x0049056d                       ; 00490529
        ;   XREF to: 0049056d (CONDITIONAL_JUMP)  ; LAB_0049056d
    MOV EAX,0x7bdc5c                    ; 0049052b | g_CCharacterClassInfo
    PUSH EAX                            ; 00490530 | g_CCharacterClassInfo
    MOV ESI,dword ptr [0x007bdc94]      ; 00490531 | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 00490537
    LEA EAX,[ESP + 0xb54]               ; 00490538
    PUSH EAX                            ; 0049053f
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 00490540
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 00490545
    TEST EAX,EAX                        ; 00490548
    JZ 0x0049059d                       ; 0049054a
        ;   XREF to: 0049059d (CONDITIONAL_JUMP)  ; LAB_0049059d
    MOV EDI,dword ptr [0x005f61e4]      ; 0049054c | DAT_005f61e4
    CMP EAX,EDI                         ; 00490552
    JNZ 0x004905a6                      ; 00490554
        ;   XREF to: 004905a6 (CONDITIONAL_JUMP)  ; LAB_004905a6
    XOR EAX,EDI                         ; 00490556
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00490558
        ;   Label: LAB_00490558
    MOV EAX,dword ptr [ESP + 0x1064]    ; 0049055f
    ADD dword ptr [EBX],EAX             ; 00490566
    JMP 0x0048ec8c                      ; 00490568
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4a58                    ; 0049056d | = "Error parsing isTalking parameters."
        ;   Label: LAB_0049056d
    MOV EDI,0x1c3dd10                   ; 00490572
    PUSH EDI                            ; 00490577 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490578 | = "Error parsing isTalking parameters." | s_Error_parsing_isTalking_005d4a58+2
        ;   Label: LAB_00490578
    MOV byte ptr [EDI],AL               ; 0049057a | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0049057c
    JZ 0x00490590                       ; 0049057e
        ;   XREF to: 00490590 (CONDITIONAL_JUMP)  ; LAB_00490590
    MOV AL,byte ptr [ESI + 0x1]         ; 00490580 | s_Error_parsing_isTalking_005d4a58+1 | s_Error_parsing_isTalking_005d4a58+3
    ADD ESI,0x2                         ; 00490583
    MOV byte ptr [EDI + 0x1],AL         ; 00490586 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490589
    CMP AL,0x0                          ; 0049058c
    JNZ 0x00490578                      ; 0049058e
        ;   XREF to: 00490578 (CONDITIONAL_JUMP)  ; LAB_00490578
    POP EDI                             ; 00490590
        ;   Label: LAB_00490590
    MOV EAX,0xffffffff                  ; 00490591
    MOV ESP,EBP                         ; 00490596
    POP EBP                             ; 00490598
    POP EDI                             ; 00490599
    POP ESI                             ; 0049059a
    POP EBX                             ; 0049059b
    RET                                 ; 0049059c
    MOV EAX,EDI                         ; 0049059d
        ;   Label: LAB_0049059d
    MOV ESP,EBP                         ; 0049059f
    POP EBP                             ; 004905a1
    POP EDI                             ; 004905a2
    POP ESI                             ; 004905a3
    POP EBX                             ; 004905a4
    RET                                 ; 004905a5
    FLD float ptr [EAX + 0x2820]        ; 004905a6
        ;   Label: LAB_004905a6
    FLDZ                                ; 004905ac
    FCOMPP                              ; 004905ae
    FNSTSW AX                           ; 004905b0
    SAHF                                ; 004905b2
    JNC 0x004905bc                      ; 004905b3
        ;   XREF to: 004905bc (CONDITIONAL_JUMP)  ; LAB_004905bc
    MOV EAX,0x1                         ; 004905b5
    JMP 0x00490558                      ; 004905ba
        ;   XREF to: 00490558 (UNCONDITIONAL_JUMP)  ; LAB_00490558
    XOR EAX,EAX                         ; 004905bc
        ;   Label: LAB_004905bc
    JMP 0x00490558                      ; 004905be
        ;   XREF to: 00490558 (UNCONDITIONAL_JUMP)  ; LAB_00490558
    PUSH 0x5d4a7c                       ; 004905c0 | = "isVictim"
        ;   Label: LAB_004905c0
    LEA EAX,[ESP + 0xf38]               ; 004905c5
    PUSH EAX                            ; 004905cc
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004905cd
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004905d2
    TEST EAX,EAX                        ; 004905d5
    JNZ 0x0049075d                      ; 004905d7
        ;   XREF to: 0049075d (CONDITIONAL_JUMP)  ; LAB_0049075d
    LEA EAX,[ESP + 0x1068]              ; 004905dd
    MOV ECX,0xffffffff                  ; 004905e4
    PUSH EAX                            ; 004905e9
    LEA EAX,[ESP + 0x768]               ; 004905ea
    MOV dword ptr [ESP + 0x106c],ECX    ; 004905f1
    PUSH EAX                            ; 004905f8
    MOV EAX,0x5d4a85                    ; 004905f9 | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 004905fe
    PUSH EAX                            ; 00490600 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490601
    ADD EAX,ESI                         ; 00490604
    PUSH EAX                            ; 00490606
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490607
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0049060c
    CMP dword ptr [ESP + 0x1068],0x3    ; 0049060f
    JL 0x004906ba                       ; 00490617
        ;   XREF to: 004906ba (CONDITIONAL_JUMP)  ; LAB_004906ba
    MOV EAX,0x7bdc5c                    ; 0049061d | g_CCharacterClassInfo
    PUSH EAX                            ; 00490622 | g_CCharacterClassInfo
    MOV EAX,[0x007bdc94]                ; 00490623 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00490628
    LEA EAX,[ESP + 0x76c]               ; 00490629
    PUSH EAX                            ; 00490630
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 00490631
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 00490636
    MOV dword ptr [ESP + 0x106c],EAX    ; 00490639
    TEST EAX,EAX                        ; 00490640
    JZ 0x004906de                       ; 00490642
        ;   XREF to: 004906de (CONDITIONAL_JUMP)  ; LAB_004906de
    XOR ECX,ECX                         ; 00490648
    MOV ESI,dword ptr [0x005f61e4]      ; 0049064a | DAT_005f61e4
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00490650
    CMP EAX,ESI                         ; 00490657
    JZ 0x0049074f                       ; 00490659
        ;   XREF to: 0049074f (CONDITIONAL_JUMP)  ; LAB_0049074f
    ADD EAX,0x20                        ; 0049065f
    MOV dword ptr [ESP + 0x1070],EAX    ; 00490662
    LEA EAX,[ECX*0x4 + 0x0]             ; 00490669
    XOR EDI,EDI                         ; 00490670
    MOV dword ptr [ESP + 0x10a8],EAX    ; 00490672
    MOV EAX,[0x0061b5a8]                ; 00490679 | g_CDemonSetPtr
        ;   Label: LAB_00490679
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0049067e | g_CDemonSetInstance.enemy_count
    JGE 0x0049074f                      ; 00490684
        ;   XREF to: 0049074f (CONDITIONAL_JUMP)  ; LAB_0049074f
    ADD EAX,dword ptr [ESP + 0x10a8]    ; 0049068a
    MOV ESI,dword ptr [EAX + 0x150ff0]  ; 00490691
    MOV EDX,dword ptr [ESP + 0x106c]    ; 00490697
    CMP EDX,dword ptr [ESI + 0x10a78]   ; 0049069e
    JZ 0x004906ea                       ; 004906a4
        ;   XREF to: 004906ea (CONDITIONAL_JUMP)  ; LAB_004906ea
    MOV ESI,dword ptr [ESP + 0x10a8]    ; 004906a6
        ;   Label: LAB_004906a6
    ADD ESI,0x4                         ; 004906ad
    INC EDI                             ; 004906b0
    MOV dword ptr [ESP + 0x10a8],ESI    ; 004906b1
    JMP 0x00490679                      ; 004906b8
        ;   XREF to: 00490679 (UNCONDITIONAL_JUMP)  ; LAB_00490679
    MOV ESI,0x5d4a93                    ; 004906ba | = "Error parsing isVictim parameters."
        ;   Label: LAB_004906ba
    MOV EDI,0x1c3dd10                   ; 004906bf
    PUSH EDI                            ; 004906c4 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 004906c5 | = "Error parsing isVictim parameters." | s_Error_parsing_isVictim_p_005d4a93+2
        ;   Label: LAB_004906c5
    MOV byte ptr [EDI],AL               ; 004906c7 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 004906c9
    JZ 0x004906dd                       ; 004906cb
        ;   XREF to: 004906dd (CONDITIONAL_JUMP)  ; LAB_004906dd
    MOV AL,byte ptr [ESI + 0x1]         ; 004906cd | s_Error_parsing_isVictim_p_005d4a93+1 | s_Error_parsing_isVictim_p_005d4a93+3
    ADD ESI,0x2                         ; 004906d0
    MOV byte ptr [EDI + 0x1],AL         ; 004906d3 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 004906d6
    CMP AL,0x0                          ; 004906d9
    JNZ 0x004906c5                      ; 004906db
        ;   XREF to: 004906c5 (CONDITIONAL_JUMP)  ; LAB_004906c5
    POP EDI                             ; 004906dd
        ;   Label: LAB_004906dd
    MOV EAX,0xffffffff                  ; 004906de
        ;   Label: LAB_004906de
    MOV ESP,EBP                         ; 004906e3
    POP EBP                             ; 004906e5
    POP EDI                             ; 004906e6
    POP ESI                             ; 004906e7
    POP EBX                             ; 004906e8
    RET                                 ; 004906e9
    PUSH ESI                            ; 004906ea
        ;   Label: LAB_004906ea
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004906eb
    CALL dword ptr [EAX + 0x114]        ; 004906f1
    ADD ESP,0x4                         ; 004906f7
    TEST EAX,EAX                        ; 004906fa
    JG 0x004906a6                       ; 004906fc
        ;   XREF to: 004906a6 (CONDITIONAL_JUMP)  ; LAB_004906a6
    PUSH ESI                            ; 004906fe
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004906ff
    CALL dword ptr [EAX + 0x78]         ; 00490705
    ADD ESP,0x4                         ; 00490708
    TEST EAX,EAX                        ; 0049070b
    JNZ 0x004906a6                      ; 0049070d
        ;   XREF to: 004906a6 (CONDITIONAL_JUMP)  ; LAB_004906a6
    MOV EAX,dword ptr [ESP + 0x1070]    ; 0049070f
    FLD float ptr [ESI + 0x20]          ; 00490716
    FSUB float ptr [EAX]                ; 00490719
    FMUL ST0                            ; 0049071b
    FLD float ptr [ESI + 0x24]          ; 0049071d
    FSUB float ptr [EAX + 0x4]          ; 00490720
    FMUL ST0                            ; 00490723
    FLD float ptr [ESI + 0x28]          ; 00490725
    FXCH                                ; 00490728
    FADDP ST2,ST0                       ; 0049072a
    FSUB float ptr [EAX + 0x8]          ; 0049072c
    FMUL ST0                            ; 0049072f
    FADDP                               ; 00490731
    FSQRT                               ; 00490733
    FCOMP double ptr [0x005d4cb3]       ; 00490735 | DAT_005d4cb3
    FNSTSW AX                           ; 0049073b
    SAHF                                ; 0049073d
    JA 0x004906a6                       ; 0049073e
        ;   XREF to: 004906a6 (CONDITIONAL_JUMP)  ; LAB_004906a6
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00490744
    MOV EAX,dword ptr [ESP + 0x1068]    ; 0049074f
        ;   Label: LAB_0049074f
    ADD dword ptr [EBX],EAX             ; 00490756
    JMP 0x0048ec8c                      ; 00490758
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4ab6                       ; 0049075d | = "isWeaponDrawn"
        ;   Label: LAB_0049075d
    LEA EAX,[ESP + 0xf38]               ; 00490762
    PUSH EAX                            ; 00490769
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0049076a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049076f
    TEST EAX,EAX                        ; 00490772
    JNZ 0x00490839                      ; 00490774
        ;   XREF to: 00490839 (CONDITIONAL_JUMP)  ; LAB_00490839
    MOV dword ptr [ESP + 0x1080],0xffffffff ; 0049077a
    LEA EAX,[ESP + 0x1080]              ; 00490785
    PUSH EAX                            ; 0049078c
    LEA EAX,[ESP + 0x95c]               ; 0049078d
    PUSH EAX                            ; 00490794
    MOV EAX,0x5d4ac4                    ; 00490795 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 0049079a
    PUSH EAX                            ; 0049079c | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049079d
    ADD EAX,EDX                         ; 004907a0
    PUSH EAX                            ; 004907a2
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 004907a3
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 004907a8
    CMP dword ptr [ESP + 0x1080],0x3    ; 004907ab
    JL 0x004907f7                       ; 004907b3
        ;   XREF to: 004907f7 (CONDITIONAL_JUMP)  ; LAB_004907f7
    MOV EAX,0x1cedf18                   ; 004907b5
    PUSH EAX                            ; 004907ba
    MOV ESI,dword ptr [0x01cedf50]      ; 004907bb | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004907c1
    LEA EAX,[ESP + 0x960]               ; 004907c2
    PUSH EAX                            ; 004907c9
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 004907ca
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 004907cf
    TEST EAX,EAX                        ; 004907d2
    JZ 0x0049081b                       ; 004907d4
        ;   XREF to: 0049081b (CONDITIONAL_JUMP)  ; LAB_0049081b
    MOV EDI,dword ptr [0x005f61e4]      ; 004907d6 | DAT_005f61e4
    CMP EAX,EDI                         ; 004907dc
    JNZ 0x00490827                      ; 004907de
        ;   XREF to: 00490827 (CONDITIONAL_JUMP)  ; LAB_00490827
    XOR EAX,EDI                         ; 004907e0
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004907e2
        ;   Label: LAB_004907e2
    MOV EAX,dword ptr [ESP + 0x1080]    ; 004907e9
    ADD dword ptr [EBX],EAX             ; 004907f0
    JMP 0x0048ec8c                      ; 004907f2
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4ad2                    ; 004907f7 | = "Error parsing isWeaponDrawn parameters."
        ;   Label: LAB_004907f7
    MOV EDI,0x1c3dd10                   ; 004907fc
    PUSH EDI                            ; 00490801 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490802 | = "Error parsing isWeaponDrawn parameters." | s_Error_parsing_isWeaponDr_005d4ad2+2
        ;   Label: LAB_00490802
    MOV byte ptr [EDI],AL               ; 00490804 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490806
    JZ 0x0049081a                       ; 00490808
        ;   XREF to: 0049081a (CONDITIONAL_JUMP)  ; LAB_0049081a
    MOV AL,byte ptr [ESI + 0x1]         ; 0049080a | s_Error_parsing_isWeaponDr_005d4ad2+1 | s_Error_parsing_isWeaponDr_005d4ad2+3
    ADD ESI,0x2                         ; 0049080d
    MOV byte ptr [EDI + 0x1],AL         ; 00490810 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490813
    CMP AL,0x0                          ; 00490816
    JNZ 0x00490802                      ; 00490818
        ;   XREF to: 00490802 (CONDITIONAL_JUMP)  ; LAB_00490802
    POP EDI                             ; 0049081a
        ;   Label: LAB_0049081a
    MOV EAX,0xffffffff                  ; 0049081b
        ;   Label: LAB_0049081b
    MOV ESP,EBP                         ; 00490820
    POP EBP                             ; 00490822
    POP EDI                             ; 00490823
    POP ESI                             ; 00490824
    POP EBX                             ; 00490825
    RET                                 ; 00490826
    PUSH EAX                            ; 00490827
        ;   Label: LAB_00490827
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00490828
    CALL dword ptr [EDX + 0x154]        ; 0049082e
    ADD ESP,0x4                         ; 00490834
    JMP 0x004907e2                      ; 00490837
        ;   XREF to: 004907e2 (UNCONDITIONAL_JUMP)  ; LAB_004907e2
    PUSH 0x5d4afa                       ; 00490839 | = "isWearingGasMask"
        ;   Label: LAB_00490839
    LEA EAX,[ESP + 0xf38]               ; 0049083e
    PUSH EAX                            ; 00490845
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490846
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049084b
    TEST EAX,EAX                        ; 0049084e
    JNZ 0x00490926                      ; 00490850
        ;   XREF to: 00490926 (CONDITIONAL_JUMP)  ; LAB_00490926
    LEA EAX,[ESP + 0x1084]              ; 00490856
    MOV EDX,0xffffffff                  ; 0049085d
    PUSH EAX                            ; 00490862
    LEA EAX,[ESP + 0xce0]               ; 00490863
    MOV dword ptr [ESP + 0x1088],EDX    ; 0049086a
    PUSH EAX                            ; 00490871
    MOV EAX,0x5d4b0b                    ; 00490872 | = " ( %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 00490877
    PUSH EAX                            ; 00490879 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049087a
    ADD EAX,ECX                         ; 0049087d
    PUSH EAX                            ; 0049087f
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490880
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00490885
    CMP dword ptr [ESP + 0x1084],0x3    ; 00490888
    JL 0x004908d2                       ; 00490890
        ;   XREF to: 004908d2 (CONDITIONAL_JUMP)  ; LAB_004908d2
    MOV EAX,0x1cedf18                   ; 00490892
    PUSH EAX                            ; 00490897
    MOV EDI,dword ptr [0x01cedf50]      ; 00490898 | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 0049089e
    LEA EAX,[ESP + 0xce4]               ; 0049089f
    PUSH EAX                            ; 004908a6
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 004908a7
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 004908ac
    TEST EAX,EAX                        ; 004908af
    JZ 0x004908f6                       ; 004908b1
        ;   XREF to: 004908f6 (CONDITIONAL_JUMP)  ; LAB_004908f6
    CMP EAX,dword ptr [0x005f61e4]      ; 004908b3 | DAT_005f61e4
    JNZ 0x00490902                      ; 004908b9
        ;   XREF to: 00490902 (CONDITIONAL_JUMP)  ; LAB_00490902
    XOR ESI,ESI                         ; 004908bb
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004908bd
    MOV EAX,dword ptr [ESP + 0x1084]    ; 004908c4
    ADD dword ptr [EBX],EAX             ; 004908cb
    JMP 0x0048ec8c                      ; 004908cd
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4b19                    ; 004908d2 | = "Error parsing isWearingGasMask parame..."
        ;   Label: LAB_004908d2
    MOV EDI,0x1c3dd10                   ; 004908d7
    PUSH EDI                            ; 004908dc | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 004908dd | = "Error parsing isWearingGasMask parame..." | s_Error_parsing_isWearingG_005d4b19+2
        ;   Label: LAB_004908dd
    MOV byte ptr [EDI],AL               ; 004908df | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 004908e1
    JZ 0x004908f5                       ; 004908e3
        ;   XREF to: 004908f5 (CONDITIONAL_JUMP)  ; LAB_004908f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004908e5 | s_Error_parsing_isWearingG_005d4b19+1 | s_Error_parsing_isWearingG_005d4b19+3
    ADD ESI,0x2                         ; 004908e8
    MOV byte ptr [EDI + 0x1],AL         ; 004908eb | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 004908ee
    CMP AL,0x0                          ; 004908f1
    JNZ 0x004908dd                      ; 004908f3
        ;   XREF to: 004908dd (CONDITIONAL_JUMP)  ; LAB_004908dd
    POP EDI                             ; 004908f5
        ;   Label: LAB_004908f5
    MOV EAX,0xffffffff                  ; 004908f6
        ;   Label: LAB_004908f6
    MOV ESP,EBP                         ; 004908fb
    POP EBP                             ; 004908fd
    POP EDI                             ; 004908fe
    POP ESI                             ; 004908ff
    POP EBX                             ; 00490900
    RET                                 ; 00490901
    CMP dword ptr [EAX + 0x255e8],0x2   ; 00490902
        ;   Label: LAB_00490902
    SETZ AL                             ; 00490909
    AND EAX,0xff                        ; 0049090c
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00490911
    MOV EAX,dword ptr [ESP + 0x1084]    ; 00490918
    ADD dword ptr [EBX],EAX             ; 0049091f
    JMP 0x0048ec8c                      ; 00490921
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4b44                       ; 00490926 | = "isPuzzleActive"
        ;   Label: LAB_00490926
    LEA EAX,[ESP + 0xf38]               ; 0049092b
    PUSH EAX                            ; 00490932
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490933
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490938
    TEST EAX,EAX                        ; 0049093b
    JNZ 0x00490a3c                      ; 0049093d
        ;   XREF to: 00490a3c (CONDITIONAL_JUMP)  ; LAB_00490a3c
    LEA EAX,[ESP + 0x1088]              ; 00490943
    MOV EDI,0xffffffff                  ; 0049094a
    PUSH EAX                            ; 0049094f
    LEA EAX,[ESP + 0x10]                ; 00490950
    MOV dword ptr [ESP + 0x108c],EDI    ; 00490954
    PUSH EAX                            ; 0049095b
    MOV EAX,0x5d4b53                    ; 0049095c | = "(%[^)])%n"
    MOV EDX,dword ptr [EBX]             ; 00490961
    PUSH EAX                            ; 00490963 | = "(%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490964
    ADD EAX,EDX                         ; 00490967
    PUSH EAX                            ; 00490969
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0049096a
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 0049096f
    CMP dword ptr [ESP + 0x1088],0x3    ; 00490972
    JL 0x004909fb                       ; 0049097a
        ;   XREF to: 004909fb (CONDITIONAL_JUMP)  ; LAB_004909fb
    MOV EAX,[0x026677b4]                ; 00490980 | DAT_026677b4
    XOR ESI,ESI                         ; 00490985
    XOR EDI,EDI                         ; 00490987
    MOV dword ptr [ESP + 0x108c],ESI    ; 00490989
    CMP ESI,EAX                         ; 00490990
    JGE 0x004909c5                      ; 00490992
        ;   XREF to: 004909c5 (CONDITIONAL_JUMP)  ; LAB_004909c5
    SHL ESI,0x2                         ; 00490994
    MOV EAX,dword ptr [ESI + 0x26677b8] ; 00490997
        ;   Label: LAB_00490997
    PUSH EAX                            ; 0049099d
    MOV EDX,dword ptr [EAX]             ; 0049099e
    CALL dword ptr [EDX + 0x4]          ; 004909a0
    ADD ESP,0x4                         ; 004909a3
    PUSH EAX                            ; 004909a6
    LEA EAX,[ESP + 0x10]                ; 004909a7
    PUSH EAX                            ; 004909ab
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004909ac
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004909b1
    TEST EAX,EAX                        ; 004909b4
    JNZ 0x00490a10                      ; 004909b6
        ;   XREF to: 00490a10 (CONDITIONAL_JUMP)  ; LAB_00490a10
    MOV EAX,dword ptr [ESI + 0x26677b8] ; 004909b8
    MOV dword ptr [ESP + 0x108c],EAX    ; 004909be
    CMP dword ptr [ESP + 0x108c],0x0    ; 004909c5
        ;   Label: LAB_004909c5
    JZ 0x00490a23                       ; 004909cd
        ;   XREF to: 00490a23 (CONDITIONAL_JUMP)  ; LAB_00490a23
    XOR ECX,ECX                         ; 004909cf
    MOV ESI,dword ptr [0x026677e0]      ; 004909d1 | DAT_026677e0
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004909d7
    TEST ESI,ESI                        ; 004909de
    JZ 0x004909ed                       ; 004909e0
        ;   XREF to: 004909ed (CONDITIONAL_JUMP)  ; LAB_004909ed
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004909e2
    MOV EAX,dword ptr [ESP + 0x1088]    ; 004909ed
        ;   Label: LAB_004909ed
    ADD dword ptr [EBX],EAX             ; 004909f4
    JMP 0x0048ec8c                      ; 004909f6
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV EAX,0x5d4b5d                    ; 004909fb | = "Error parsing activatePuzzle command"
        ;   Label: LAB_004909fb
    PUSH EAX                            ; 00490a00 | = "Error parsing activatePuzzle command"
    CALL core_event.cpp_formatEventError_FUN_00488ba0 ; 00490a01
        ;   XREF to: 00488ba0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_00488ba0(char * format)
    ADD ESP,0x4                         ; 00490a06
    MOV ESP,EBP                         ; 00490a09
    POP EBP                             ; 00490a0b
    POP EDI                             ; 00490a0c
    POP ESI                             ; 00490a0d
    POP EBX                             ; 00490a0e
    RET                                 ; 00490a0f
    MOV EAX,[0x026677b4]                ; 00490a10 | DAT_026677b4
        ;   Label: LAB_00490a10
    INC EDI                             ; 00490a15
    ADD ESI,0x4                         ; 00490a16
    CMP EDI,EAX                         ; 00490a19
    JL 0x00490997                       ; 00490a1b
        ;   XREF to: 00490997 (CONDITIONAL_JUMP)  ; LAB_00490997
    JMP 0x004909c5                      ; 00490a21
        ;   XREF to: 004909c5 (UNCONDITIONAL_JUMP)  ; LAB_004909c5
    LEA EAX,[ESP + 0xc]                 ; 00490a23
        ;   Label: LAB_00490a23
    PUSH EAX                            ; 00490a27
    PUSH 0x5d4b82                       ; 00490a28 | = "No such puzzle '%s'"
    CALL core_event.cpp_formatEventError_FUN_00488ba0 ; 00490a2d
        ;   XREF to: 00488ba0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_00488ba0(char * format)
    ADD ESP,0x8                         ; 00490a32
    MOV ESP,EBP                         ; 00490a35
    POP EBP                             ; 00490a37
    POP EDI                             ; 00490a38
    POP ESI                             ; 00490a39
    POP EBX                             ; 00490a3a
    RET                                 ; 00490a3b
    PUSH 0x5d4b96                       ; 00490a3c | = "randBool"
        ;   Label: LAB_00490a3c
    LEA EAX,[ESP + 0xf38]               ; 00490a41
    PUSH EAX                            ; 00490a48
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490a49
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490a4e
    TEST EAX,EAX                        ; 00490a51
    JNZ 0x00490aed                      ; 00490a53
        ;   XREF to: 00490aed (CONDITIONAL_JUMP)  ; LAB_00490aed
    LEA EAX,[ESP + 0x1090]              ; 00490a59
    MOV EDI,0xffffffff                  ; 00490a60
    PUSH EAX                            ; 00490a65
    LEA EAX,[ESP + 0x1098]              ; 00490a66
    MOV dword ptr [ESP + 0x1094],EDI    ; 00490a6d
    PUSH EAX                            ; 00490a74
    MOV EAX,0x5d4b9f                    ; 00490a75 | = " ( %f )%n"
    MOV EDX,dword ptr [EBX]             ; 00490a7a
    PUSH EAX                            ; 00490a7c | = " ( %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490a7d
    ADD EAX,EDX                         ; 00490a80
    PUSH EAX                            ; 00490a82
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490a83
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00490a88
    CMP dword ptr [ESP + 0x1090],0x3    ; 00490a8b
    JL 0x00490abd                       ; 00490a93
        ;   XREF to: 00490abd (CONDITIONAL_JUMP)  ; LAB_00490abd
    PUSH dword ptr [ESP + 0x1094]       ; 00490a95
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00490a9c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00490aa1
    MOV ESI,dword ptr [EBX]             ; 00490aa4
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00490aa6
    MOV EAX,dword ptr [ESP + 0x1090]    ; 00490aad
    ADD ESI,EAX                         ; 00490ab4
    MOV dword ptr [EBX],ESI             ; 00490ab6
    JMP 0x0048ec8c                      ; 00490ab8
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4ba9                    ; 00490abd | = "Error parsing randBool parameters."
        ;   Label: LAB_00490abd
    MOV EDI,0x1c3dd10                   ; 00490ac2
    PUSH EDI                            ; 00490ac7 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490ac8 | = "Error parsing randBool parameters." | s_Error_parsing_randBool_p_005d4ba9+2
        ;   Label: LAB_00490ac8
    MOV byte ptr [EDI],AL               ; 00490aca | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490acc
    JZ 0x00490ae0                       ; 00490ace
        ;   XREF to: 00490ae0 (CONDITIONAL_JUMP)  ; LAB_00490ae0
    MOV AL,byte ptr [ESI + 0x1]         ; 00490ad0 | s_Error_parsing_randBool_p_005d4ba9+1 | s_Error_parsing_randBool_p_005d4ba9+3
    ADD ESI,0x2                         ; 00490ad3
    MOV byte ptr [EDI + 0x1],AL         ; 00490ad6 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490ad9
    CMP AL,0x0                          ; 00490adc
    JNZ 0x00490ac8                      ; 00490ade
        ;   XREF to: 00490ac8 (CONDITIONAL_JUMP)  ; LAB_00490ac8
    POP EDI                             ; 00490ae0
        ;   Label: LAB_00490ae0
    MOV EAX,0xffffffff                  ; 00490ae1
    MOV ESP,EBP                         ; 00490ae6
    POP EBP                             ; 00490ae8
    POP EDI                             ; 00490ae9
    POP ESI                             ; 00490aea
    POP EBX                             ; 00490aeb
    RET                                 ; 00490aec
    PUSH 0x5d4bcc                       ; 00490aed | = "reachedDest"
        ;   Label: LAB_00490aed
    LEA EAX,[ESP + 0xf38]               ; 00490af2
    PUSH EAX                            ; 00490af9
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490afa
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490aff
    TEST EAX,EAX                        ; 00490b02
    JNZ 0x00490be4                      ; 00490b04
        ;   XREF to: 00490be4 (CONDITIONAL_JUMP)  ; LAB_00490be4
    LEA EAX,[ESP + 0x1098]              ; 00490b0a
    MOV EDX,0xffffffff                  ; 00490b11
    PUSH EAX                            ; 00490b16
    LEA EAX,[ESP + 0xc7c]               ; 00490b17
    MOV dword ptr [ESP + 0x109c],EDX    ; 00490b1e
    PUSH EAX                            ; 00490b25
    MOV ECX,dword ptr [EBX]             ; 00490b26
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490b28
    PUSH 0x5d4bd8                       ; 00490b2b | = " ( %[^ )] )%n"
    ADD EAX,ECX                         ; 00490b30
    PUSH EAX                            ; 00490b32
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490b33
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x10                        ; 00490b38
    CMP dword ptr [ESP + 0x1098],0x3    ; 00490b3b
    JL 0x00490b85                       ; 00490b43
        ;   XREF to: 00490b85 (CONDITIONAL_JUMP)  ; LAB_00490b85
    MOV EAX,0x7bdc5c                    ; 00490b45 | g_CCharacterClassInfo
    PUSH EAX                            ; 00490b4a | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007bdc94]      ; 00490b4b | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00490b51
    LEA EAX,[ESP + 0xc80]               ; 00490b52
    PUSH EAX                            ; 00490b59
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 00490b5a
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 00490b5f
    TEST EAX,EAX                        ; 00490b62
    JZ 0x00490ba9                       ; 00490b64
        ;   XREF to: 00490ba9 (CONDITIONAL_JUMP)  ; LAB_00490ba9
    CMP EAX,dword ptr [0x005f61e4]      ; 00490b66 | DAT_005f61e4
    JNZ 0x00490bb5                      ; 00490b6c
        ;   XREF to: 00490bb5 (CONDITIONAL_JUMP)  ; LAB_00490bb5
    XOR ECX,ECX                         ; 00490b6e
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00490b70
    MOV EAX,dword ptr [ESP + 0x1098]    ; 00490b77
    ADD dword ptr [EBX],EAX             ; 00490b7e
    JMP 0x0048ec8c                      ; 00490b80
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV ESI,0x5d4be6                    ; 00490b85 | = "Error parsing reachedDest parameters."
        ;   Label: LAB_00490b85
    MOV EDI,0x1c3dd10                   ; 00490b8a
    PUSH EDI                            ; 00490b8f | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490b90 | = "Error parsing reachedDest parameters." | s_Error_parsing_reachedDes_005d4be6+2
        ;   Label: LAB_00490b90
    MOV byte ptr [EDI],AL               ; 00490b92 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490b94
    JZ 0x00490ba8                       ; 00490b96
        ;   XREF to: 00490ba8 (CONDITIONAL_JUMP)  ; LAB_00490ba8
    MOV AL,byte ptr [ESI + 0x1]         ; 00490b98 | s_Error_parsing_reachedDes_005d4be6+1 | s_Error_parsing_reachedDes_005d4be6+3
    ADD ESI,0x2                         ; 00490b9b
    MOV byte ptr [EDI + 0x1],AL         ; 00490b9e | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490ba1
    CMP AL,0x0                          ; 00490ba4
    JNZ 0x00490b90                      ; 00490ba6
        ;   XREF to: 00490b90 (CONDITIONAL_JUMP)  ; LAB_00490b90
    POP EDI                             ; 00490ba8
        ;   Label: LAB_00490ba8
    MOV EAX,0xffffffff                  ; 00490ba9
        ;   Label: LAB_00490ba9
    MOV ESP,EBP                         ; 00490bae
    POP EBP                             ; 00490bb0
    POP EDI                             ; 00490bb1
    POP ESI                             ; 00490bb2
    POP EBX                             ; 00490bb3
    RET                                 ; 00490bb4
    PUSH EAX                            ; 00490bb5
        ;   Label: LAB_00490bb5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00490bb6
    CALL dword ptr [EDX + 0x144]        ; 00490bbc
    ADD ESP,0x4                         ; 00490bc2
    TEST EAX,EAX                        ; 00490bc5
    SETNZ AL                            ; 00490bc7
    AND EAX,0xff                        ; 00490bca
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00490bcf
    MOV EAX,dword ptr [ESP + 0x1098]    ; 00490bd6
    ADD dword ptr [EBX],EAX             ; 00490bdd
    JMP 0x0048ec8c                      ; 00490bdf
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    PUSH 0x5d4c0c                       ; 00490be4 | = "testActorBool"
        ;   Label: LAB_00490be4
    LEA EAX,[ESP + 0xf38]               ; 00490be9
    PUSH EAX                            ; 00490bf0
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490bf1
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490bf6
    TEST EAX,EAX                        ; 00490bf9
    JNZ 0x00490e81                      ; 00490bfb
        ;   XREF to: 00490e81 (CONDITIONAL_JUMP)  ; LAB_00490e81
    LEA EAX,[ESP + 0x109c]              ; 00490c01
    PUSH EAX                            ; 00490c08
    LEA EAX,[ESP + 0x510]               ; 00490c09
    MOV ESI,0xffffffff                  ; 00490c10
    PUSH EAX                            ; 00490c15
    LEA EAX,[ESP + 0x5dc]               ; 00490c16
    MOV dword ptr [ESP + 0x10a4],ESI    ; 00490c1d
    PUSH EAX                            ; 00490c24
    MOV EDI,dword ptr [EBX]             ; 00490c25
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490c27
    PUSH 0x5d4c1a                       ; 00490c2a | = "(%[^,], %[^)])%n"
    ADD EAX,EDI                         ; 00490c2f
    PUSH EAX                            ; 00490c31
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00490c32
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x14                        ; 00490c37
    CMP dword ptr [ESP + 0x109c],0x3    ; 00490c3a
    JL 0x00490cbd                       ; 00490c42
        ;   XREF to: 00490cbd (CONDITIONAL_JUMP)  ; LAB_00490cbd
    LEA EDI,[ESP + 0x5d4]               ; 00490c48
    LEA ESI,[ESP + 0x5d4]               ; 00490c4f
    SUB ECX,ECX                         ; 00490c56
    DEC ECX                             ; 00490c58
    XOR EAX,EAX                         ; 00490c59
    SCASB.REPNE ES:EDI                  ; 00490c5b
    NOT ECX                             ; 00490c5d
    DEC ECX                             ; 00490c5f
    MOV EAX,ECX                         ; 00490c60
    MOV EDI,ECX                         ; 00490c62
    TEST ECX,ECX                        ; 00490c64
    JLE 0x00490c86                      ; 00490c66
        ;   XREF to: 00490c86 (CONDITIONAL_JUMP)  ; LAB_00490c86
    LEA EDX,[ESP + 0x5d4]               ; 00490c68
    LEA EAX,[ECX + EDX*0x1]             ; 00490c6f
    MOV DL,byte ptr [EAX + -0x1]        ; 00490c72
        ;   Label: LAB_00490c72
    INC DL                              ; 00490c75
    AND EDX,0xff                        ; 00490c77
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00490c7d | DAT_0061ed94
    JNZ 0x00490ced                      ; 00490c84
        ;   XREF to: 00490ced (CONDITIONAL_JUMP)  ; LAB_00490ced
    LEA EAX,[ESI + EDI*0x1]             ; 00490c86
        ;   Label: LAB_00490c86
    MOV byte ptr [EAX],0x0              ; 00490c89
    LEA EAX,[ESI + 0x1]                 ; 00490c8c
    MOV dword ptr [ESP + 0x10a0],EAX    ; 00490c8f
    MOV AL,byte ptr [ESI]               ; 00490c96
        ;   Label: LAB_00490c96
    INC AL                              ; 00490c98
    AND EAX,0xff                        ; 00490c9a
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00490c9f | DAT_0061ed94
    JZ 0x00490cf9                       ; 00490ca6
        ;   XREF to: 00490cf9 (CONDITIONAL_JUMP)  ; LAB_00490cf9
    PUSH EDI                            ; 00490ca8
    MOV EDX,dword ptr [ESP + 0x10a4]    ; 00490ca9
    PUSH EDX                            ; 00490cb0
    PUSH ESI                            ; 00490cb1
    DEC EDI                             ; 00490cb2
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00490cb3
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490cb8
    JMP 0x00490c96                      ; 00490cbb
        ;   XREF to: 00490c96 (UNCONDITIONAL_JUMP)  ; LAB_00490c96
    MOV ESI,0x5d4c2b                    ; 00490cbd | = "Error parsing testActorBool parameters."
        ;   Label: LAB_00490cbd
    MOV EDI,0x1c3dd10                   ; 00490cc2
    PUSH EDI                            ; 00490cc7 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490cc8 | = "Error parsing testActorBool parameters." | s_Error_parsing_testActorB_005d4c2b+2
        ;   Label: LAB_00490cc8
    MOV byte ptr [EDI],AL               ; 00490cca | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490ccc
    JZ 0x00490ce0                       ; 00490cce
        ;   XREF to: 00490ce0 (CONDITIONAL_JUMP)  ; LAB_00490ce0
    MOV AL,byte ptr [ESI + 0x1]         ; 00490cd0 | s_Error_parsing_testActorB_005d4c2b+1 | s_Error_parsing_testActorB_005d4c2b+3
    ADD ESI,0x2                         ; 00490cd3
    MOV byte ptr [EDI + 0x1],AL         ; 00490cd6 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490cd9
    CMP AL,0x0                          ; 00490cdc
    JNZ 0x00490cc8                      ; 00490cde
        ;   XREF to: 00490cc8 (CONDITIONAL_JUMP)  ; LAB_00490cc8
    POP EDI                             ; 00490ce0
        ;   Label: LAB_00490ce0
    MOV EAX,0xffffffff                  ; 00490ce1
    MOV ESP,EBP                         ; 00490ce6
    POP EBP                             ; 00490ce8
    POP EDI                             ; 00490ce9
    POP ESI                             ; 00490cea
    POP EBX                             ; 00490ceb
    RET                                 ; 00490cec
    DEC EDI                             ; 00490ced
        ;   Label: LAB_00490ced
    DEC EAX                             ; 00490cee
    TEST EDI,EDI                        ; 00490cef
    JG 0x00490c72                       ; 00490cf1
        ;   XREF to: 00490c72 (CONDITIONAL_JUMP)  ; LAB_00490c72
    JMP 0x00490c86                      ; 00490cf7
        ;   XREF to: 00490c86 (UNCONDITIONAL_JUMP)  ; LAB_00490c86
    LEA EAX,[ESP + 0x50c]               ; 00490cf9
        ;   Label: LAB_00490cf9
    LEA EDI,[ESP + 0x50c]               ; 00490d00
    MOV dword ptr [ESP + 0x10a4],EAX    ; 00490d07
    SUB ECX,ECX                         ; 00490d0e
    DEC ECX                             ; 00490d10
    XOR EAX,EAX                         ; 00490d11
    SCASB.REPNE ES:EDI                  ; 00490d13
    NOT ECX                             ; 00490d15
    DEC ECX                             ; 00490d17
    MOV ESI,ECX                         ; 00490d18
    TEST ECX,ECX                        ; 00490d1a
    JLE 0x00490d3b                      ; 00490d1c
        ;   XREF to: 00490d3b (CONDITIONAL_JUMP)  ; LAB_00490d3b
    LEA EAX,[ESP + 0x50c]               ; 00490d1e
    ADD EAX,ECX                         ; 00490d25
    MOV DL,byte ptr [EAX + -0x1]        ; 00490d27
        ;   Label: LAB_00490d27
    INC DL                              ; 00490d2a
    AND EDX,0xff                        ; 00490d2c
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00490d32 | DAT_0061ed94
    JNZ 0x00490d77                      ; 00490d39
        ;   XREF to: 00490d77 (CONDITIONAL_JUMP)  ; LAB_00490d77
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 00490d3b
        ;   Label: LAB_00490d3b
    LEA EDI,[EAX + 0x1]                 ; 00490d42
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 00490d45
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 00490d49
        ;   Label: LAB_00490d49
    MOV AL,byte ptr [EAX]               ; 00490d50
    INC AL                              ; 00490d52
    AND EAX,0xff                        ; 00490d54
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00490d59 | DAT_0061ed94
    JZ 0x00490d7f                       ; 00490d60
        ;   XREF to: 00490d7f (CONDITIONAL_JUMP)  ; LAB_00490d7f
    PUSH ESI                            ; 00490d62
    PUSH EDI                            ; 00490d63
    MOV EAX,dword ptr [ESP + 0x10ac]    ; 00490d64
    PUSH EAX                            ; 00490d6b
    DEC ESI                             ; 00490d6c
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00490d6d
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00490d72
    JMP 0x00490d49                      ; 00490d75
        ;   XREF to: 00490d49 (UNCONDITIONAL_JUMP)  ; LAB_00490d49
    DEC ESI                             ; 00490d77
        ;   Label: LAB_00490d77
    DEC EAX                             ; 00490d78
    TEST ESI,ESI                        ; 00490d79
    JG 0x00490d27                       ; 00490d7b
        ;   XREF to: 00490d27 (CONDITIONAL_JUMP)  ; LAB_00490d27
    JMP 0x00490d3b                      ; 00490d7d
        ;   XREF to: 00490d3b (UNCONDITIONAL_JUMP)  ; LAB_00490d3b
    MOV ESI,dword ptr [0x00614284]      ; 00490d7f | DAT_00614284
        ;   Label: LAB_00490d7f
    XOR ECX,ECX                         ; 00490d85
    XOR EDI,EDI                         ; 00490d87
    MOV dword ptr [ESP + 0xfc4],ECX     ; 00490d89
    TEST ESI,ESI                        ; 00490d90
    JLE 0x00490dd7                      ; 00490d92
        ;   XREF to: 00490dd7 (CONDITIONAL_JUMP)  ; LAB_00490dd7
    XOR ESI,ESI                         ; 00490d94
    CMP dword ptr [ESI + 0x6141f4],0x0  ; 00490d96 | DAT_006141f4 | DAT_0061423c
        ;   Label: LAB_00490d96
    JNZ 0x00490e14                      ; 00490d9d
        ;   XREF to: 00490e14 (CONDITIONAL_JUMP)  ; LAB_00490e14
    LEA EAX,[ESP + 0x50c]               ; 00490da3
    PUSH EAX                            ; 00490daa
    MOV EAX,0x6141f4                    ; 00490dab | DAT_006141f4
    ADD EAX,ESI                         ; 00490db0
    MOV dword ptr [ESP + 0x1024],EAX    ; 00490db2 | DAT_006141f4 | DAT_0061423c
    ADD EAX,0x4                         ; 00490db9
    PUSH EAX                            ; 00490dbc | = "spectralFlag" | s_invulnerableFlag_00614240
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00490dbd
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00490dc2
    TEST EAX,EAX                        ; 00490dc5
    JNZ 0x00490e14                      ; 00490dc7
        ;   XREF to: 00490e14 (CONDITIONAL_JUMP)  ; LAB_00490e14
    MOV EAX,dword ptr [ESP + 0x1020]    ; 00490dc9
    MOV dword ptr [ESP + 0xfc4],EAX     ; 00490dd0 | DAT_006141f4
    MOV ESI,dword ptr [ESP + 0xfc4]     ; 00490dd7
        ;   Label: LAB_00490dd7
    TEST ESI,ESI                        ; 00490dde
    JZ 0x00490e28                       ; 00490de0
        ;   XREF to: 00490e28 (CONDITIONAL_JUMP)  ; LAB_00490e28
    LEA EAX,[ESI + 0x22]                ; 00490de2 | = "CCharacter"
    PUSH EAX                            ; 00490de5 | = "CCharacter"
    MOV EDI,dword ptr [ESI + 0x44]      ; 00490de6 | DAT_00614238
    PUSH EDI                            ; 00490de9
    LEA EAX,[ESP + 0x5dc]               ; 00490dea
    PUSH EAX                            ; 00490df1
    CALL core_event.cpp_resolveActorByName_FUN_00488d00 ; 00490df2
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_00488d00()
    ADD ESP,0xc                         ; 00490df7
    TEST EAX,EAX                        ; 00490dfa
    JZ 0x00490e6b                       ; 00490dfc
        ;   XREF to: 00490e6b (CONDITIONAL_JUMP)  ; LAB_00490e6b
    CMP EAX,dword ptr [0x005f61e4]      ; 00490dfe | DAT_005f61e4
    JNZ 0x00490e77                      ; 00490e04
        ;   XREF to: 00490e77 (CONDITIONAL_JUMP)  ; LAB_00490e77
    XOR ESI,ESI                         ; 00490e06
    MOV dword ptr [ESP + 0xfbc],ESI     ; 00490e08
    JMP 0x0048ec8c                      ; 00490e0f
        ;   XREF to: 0048ec8c (UNCONDITIONAL_JUMP)  ; LAB_0048ec8c
    MOV EDX,dword ptr [0x00614284]      ; 00490e14 | DAT_00614284
        ;   Label: LAB_00490e14
    INC EDI                             ; 00490e1a
    ADD ESI,0x48                        ; 00490e1b
    CMP EDI,EDX                         ; 00490e1e
    JL 0x00490d96                       ; 00490e20
        ;   XREF to: 00490d96 (CONDITIONAL_JUMP)  ; LAB_00490d96
    JMP 0x00490dd7                      ; 00490e26
        ;   XREF to: 00490dd7 (UNCONDITIONAL_JUMP)  ; LAB_00490dd7
    LEA EAX,[ESP + 0x50c]               ; 00490e28
        ;   Label: LAB_00490e28
    PUSH EAX                            ; 00490e2f
    PUSH 0x5d4c53                       ; 00490e30 | = "%s is not a valid boolean actor varia..."
    LEA EAX,[ESP + 0x314]               ; 00490e35
    PUSH EAX                            ; 00490e3c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00490e3d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00490e42
    LEA ESI,[ESP + 0x30c]               ; 00490e45
    MOV EDI,0x1c3dd10                   ; 00490e4c
    PUSH EDI                            ; 00490e51 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490e52
        ;   Label: LAB_00490e52
    MOV byte ptr [EDI],AL               ; 00490e54 | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490e56
    JZ 0x00490e6a                       ; 00490e58
        ;   XREF to: 00490e6a (CONDITIONAL_JUMP)  ; LAB_00490e6a
    MOV AL,byte ptr [ESI + 0x1]         ; 00490e5a
    ADD ESI,0x2                         ; 00490e5d
    MOV byte ptr [EDI + 0x1],AL         ; 00490e60 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490e63
    CMP AL,0x0                          ; 00490e66
    JNZ 0x00490e52                      ; 00490e68
        ;   XREF to: 00490e52 (CONDITIONAL_JUMP)  ; LAB_00490e52
    POP EDI                             ; 00490e6a
        ;   Label: LAB_00490e6a
    MOV EAX,0xffffffff                  ; 00490e6b
        ;   Label: LAB_00490e6b
    MOV ESP,EBP                         ; 00490e70
    POP EBP                             ; 00490e72
    POP EDI                             ; 00490e73
    POP ESI                             ; 00490e74
    POP EBX                             ; 00490e75
    RET                                 ; 00490e76
    ADD EAX,dword ptr [ESI + 0x40]      ; 00490e77 | DAT_00614234
        ;   Label: LAB_00490e77
    MOV EAX,dword ptr [EAX]             ; 00490e7a
    JMP 0x0048ec85                      ; 00490e7c
        ;   XREF to: 0048ec85 (UNCONDITIONAL_JUMP)  ; LAB_0048ec85
    MOV ESI,0x5d4c81                    ; 00490e81 | = "Invalid meta-function"
        ;   Label: LAB_00490e81
    MOV EDI,0x1c3dd10                   ; 00490e86
    PUSH EDI                            ; 00490e8b | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 00490e8c | = "Invalid meta-function" | s_Invalid_meta_function_005d4c81+2
        ;   Label: LAB_00490e8c
    MOV byte ptr [EDI],AL               ; 00490e8e | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 00490e90
    JZ 0x00490ea4                       ; 00490e92
        ;   XREF to: 00490ea4 (CONDITIONAL_JUMP)  ; LAB_00490ea4
    MOV AL,byte ptr [ESI + 0x1]         ; 00490e94 | s_Invalid_meta_function_005d4c81+1 | s_Invalid_meta_function_005d4c81+3
    ADD ESI,0x2                         ; 00490e97
    MOV byte ptr [EDI + 0x1],AL         ; 00490e9a | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 00490e9d
    CMP AL,0x0                          ; 00490ea0
    JNZ 0x00490e8c                      ; 00490ea2
        ;   XREF to: 00490e8c (CONDITIONAL_JUMP)  ; LAB_00490e8c
    POP EDI                             ; 00490ea4
        ;   Label: LAB_00490ea4
    MOV EAX,0xffffffff                  ; 00490ea5
    MOV ESP,EBP                         ; 00490eaa
    POP EBP                             ; 00490eac
    POP EDI                             ; 00490ead
    POP ESI                             ; 00490eae
    POP EBX                             ; 00490eaf
    RET                                 ; 00490eb0
    MOV EAX,dword ptr [ESP + 0xfbc]     ; 00490eb1
        ;   Label: LAB_00490eb1
    MOV ESP,EBP                         ; 00490eb8
    POP EBP                             ; 00490eba
    POP EDI                             ; 00490ebb
    POP ESI                             ; 00490ebc
    POP EBX                             ; 00490ebd
    RET                                 ; 00490ebe

