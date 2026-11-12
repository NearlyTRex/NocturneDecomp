; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_00491f40(CEventList *this_ptr,char *expression,int *parse_position)
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
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00494630 at 00494643
;
; Referenced Globals:
;   void* switchdataD_00491f1c = 004923db
;   undefined4 DAT_005bddb8
;   undefined4 DAT_005bddba
;   undefined4 DAT_005bddbd
;   undefined4 DAT_005bddc0
;   undefined4 DAT_005bddc3
;   undefined4 DAT_005bddc5
;   undefined4 DAT_005bddc8
;   TerminatedCString s_Unexpected_end_of_string_005bf51f
;   undefined4 s_nexpected_end_of_string_005bf51f+1
;   undefined4 s_expected_end_of_string_005bf51f+2
;   undefined4 s_xpected_end_of_string_005bf51f+3
;   TerminatedCString s_Matching_is_missing_005bf538
;   undefined4 s_Matching_is_missing_005bf538+1
;   undefined4 s_Matching_is_missing_005bf538+2
;   ... and 248 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00494630
;   core_event.cpp_CEventList_getCounterValue_FUN_00494d00
;   core_event.cpp_CEventList_getSfxHandle_FUN_00495110
;   core_event.cpp_CEventList_resolveVariable_FUN_00491a10
;   core_event.cpp_formatEventError_FUN_0048b7f0
;   core_event.cpp_isValidIdentifierChar_FUN_00495460
;   core_event.cpp_parseVectorLocation_FUN_0048ba80
;   core_event.cpp_resolveActorByName_FUN_0048b950
;   core_game.cpp_CGame_fadeIn_FUN_004bd8d0
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004de610
;   core_inv.cpp_FUN_004db990
;   core_inv.cpp_FUN_004dba80
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491f40
        ;   Label: core_event.cpp_CEventList_evaluateAtom_FUN_00491f40
    PUSH ESI                            ; 00491f41
    PUSH EDI                            ; 00491f42
    PUSH EBP                            ; 00491f43
    MOV EBP,ESP                         ; 00491f44
    SUB ESP,0x10ac                      ; 00491f46
    AND ESP,0xfffffff8                  ; 00491f4c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00491f4f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00491f52
    MOV EAX,EBX                         ; 00491f55
    MOV EDX,dword ptr [EAX]             ; 00491f57
        ;   Label: LAB_00491f57
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 00491f59
    INC DL                              ; 00491f5c
    AND EDX,0xff                        ; 00491f5e
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00491f64 | DAT_006074b8
    JNZ 0x00491fc2                      ; 00491f6b
        ;   XREF to: 00491fc2 (CONDITIONAL_JUMP)  ; LAB_00491fc2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00491f6d
    MOV EDX,dword ptr [EBX]             ; 00491f70
    ADD EAX,EDX                         ; 00491f72
    CMP byte ptr [EAX],0x2e             ; 00491f74
    JNZ 0x00491f7e                      ; 00491f77
        ;   XREF to: 00491f7e (CONDITIONAL_JUMP)  ; LAB_00491f7e
    LEA ECX,[EDX + 0x1]                 ; 00491f79
    MOV dword ptr [EBX],ECX             ; 00491f7c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00491f7e
        ;   Label: LAB_00491f7e
    MOV ESI,dword ptr [EBX]             ; 00491f81
    ADD EAX,ESI                         ; 00491f83
    MOV DL,byte ptr [EAX]               ; 00491f85
    TEST DL,DL                          ; 00491f87
    JZ 0x00491fc6                       ; 00491f89
        ;   XREF to: 00491fc6 (CONDITIONAL_JUMP)  ; LAB_00491fc6
    CMP DL,0x28                         ; 00491f8b
    JZ 0x00491ff1                       ; 00491f8e
        ;   XREF to: 00491ff1 (CONDITIONAL_JUMP)  ; LAB_00491ff1
    CMP DL,0x21                         ; 00491f90
    JNZ 0x00492076                      ; 00491f93
        ;   XREF to: 00492076 (CONDITIONAL_JUMP)  ; LAB_00492076
    PUSH EBX                            ; 00491f99
    MOV EDI,dword ptr [EBP + 0x18]      ; 00491f9a
    PUSH EDI                            ; 00491f9d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00491f9e
    LEA EDX,[ESI + 0x1]                 ; 00491fa1
    PUSH EAX                            ; 00491fa4
    MOV dword ptr [EBX],EDX             ; 00491fa5
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 ; 00491fa7
        ;   XREF to: 00491f40 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_00491f40(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 00491fac
    TEST EAX,EAX                        ; 00491faf
    JL 0x00491fbb                       ; 00491fb1
        ;   XREF to: 00491fbb (CONDITIONAL_JUMP)  ; LAB_00491fbb
    SETZ AL                             ; 00491fb3
    AND EAX,0xff                        ; 00491fb6
    MOV ESP,EBP                         ; 00491fbb
        ;   Label: LAB_00491fbb
    POP EBP                             ; 00491fbd
        ;   Label: LAB_00491fbd
    POP EDI                             ; 00491fbe
    POP ESI                             ; 00491fbf
    POP EBX                             ; 00491fc0
    RET                                 ; 00491fc1
    INC dword ptr [EAX]                 ; 00491fc2
        ;   Label: LAB_00491fc2
    JMP 0x00491f57                      ; 00491fc4
        ;   XREF to: 00491f57 (UNCONDITIONAL_JUMP)  ; LAB_00491f57
    MOV ESI,0x5bf51f                    ; 00491fc6 | = "Unexpected end of string"
        ;   Label: LAB_00491fc6
    MOV EDI,0x1c734b0                   ; 00491fcb
    PUSH EDI                            ; 00491fd0 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00491fd1 | = "Unexpected end of string" | s_expected_end_of_string_005bf51f+2
        ;   Label: LAB_00491fd1
    MOV byte ptr [EDI],AL               ; 00491fd3 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00491fd5
    JZ 0x00491fe9                       ; 00491fd7
        ;   XREF to: 00491fe9 (CONDITIONAL_JUMP)  ; LAB_00491fe9
    MOV AL,byte ptr [ESI + 0x1]         ; 00491fd9 | s_nexpected_end_of_string_005bf51f+1 | s_xpected_end_of_string_005bf51f+3
    ADD ESI,0x2                         ; 00491fdc
    MOV byte ptr [EDI + 0x1],AL         ; 00491fdf | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00491fe2
    CMP AL,0x0                          ; 00491fe5
    JNZ 0x00491fd1                      ; 00491fe7
        ;   XREF to: 00491fd1 (CONDITIONAL_JUMP)  ; LAB_00491fd1
    POP EDI                             ; 00491fe9
        ;   Label: LAB_00491fe9
    MOV EAX,0xffffffff                  ; 00491fea
    JMP 0x00491fbb                      ; 00491fef
        ;   XREF to: 00491fbb (UNCONDITIONAL_JUMP)  ; LAB_00491fbb
    PUSH EBX                            ; 00491ff1
        ;   Label: LAB_00491ff1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00491ff2
    MOV EDI,dword ptr [EBX]             ; 00491ff5
    PUSH ECX                            ; 00491ff7
    MOV ESI,dword ptr [EBP + 0x14]      ; 00491ff8
    INC EDI                             ; 00491ffb
    PUSH ESI                            ; 00491ffc
    MOV dword ptr [EBX],EDI             ; 00491ffd
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00494630 ; 00491fff
        ;   XREF to: 00494630 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00494630(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 00492004
    MOV ESI,EAX                         ; 00492007
    TEST EAX,EAX                        ; 00492009
    JL 0x00491fbb                       ; 0049200b
        ;   XREF to: 00491fbb (CONDITIONAL_JUMP)  ; LAB_00491fbb
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049200d
    MOV EDX,dword ptr [EBX]             ; 00492010
    ADD EAX,EDX                         ; 00492012
    CMP byte ptr [EAX],0x29             ; 00492014
    JNZ 0x0049203d                      ; 00492017
        ;   XREF to: 0049203d (CONDITIONAL_JUMP)  ; LAB_0049203d
    MOV EDI,dword ptr [EBP + 0x18]      ; 00492019
    LEA ECX,[EDX + 0x1]                 ; 0049201c
    MOV EAX,EBX                         ; 0049201f
    MOV dword ptr [EBX],ECX             ; 00492021
    MOV EDX,dword ptr [EAX]             ; 00492023
        ;   Label: LAB_00492023
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 00492025
    INC DL                              ; 00492028
    AND EDX,0xff                        ; 0049202a
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00492030 | DAT_006074b8
    JZ 0x0049206d                       ; 00492037
        ;   XREF to: 0049206d (CONDITIONAL_JUMP)  ; LAB_0049206d
    INC dword ptr [EAX]                 ; 00492039
    JMP 0x00492023                      ; 0049203b
        ;   XREF to: 00492023 (UNCONDITIONAL_JUMP)  ; LAB_00492023
    MOV ESI,0x5bf538                    ; 0049203d | = "Matching ')' is missing"
        ;   Label: LAB_0049203d
    MOV EDI,0x1c734b0                   ; 00492042
    PUSH EDI                            ; 00492047 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492048 | = "Matching ')' is missing" | s_Matching_is_missing_005bf538+2
        ;   Label: LAB_00492048
    MOV byte ptr [EDI],AL               ; 0049204a | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049204c
    JZ 0x00492060                       ; 0049204e
        ;   XREF to: 00492060 (CONDITIONAL_JUMP)  ; LAB_00492060
    MOV AL,byte ptr [ESI + 0x1]         ; 00492050 | s_Matching_is_missing_005bf538+1 | s_Matching_is_missing_005bf538+3
    ADD ESI,0x2                         ; 00492053
    MOV byte ptr [EDI + 0x1],AL         ; 00492056 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492059
    CMP AL,0x0                          ; 0049205c
    JNZ 0x00492048                      ; 0049205e
        ;   XREF to: 00492048 (CONDITIONAL_JUMP)  ; LAB_00492048
    POP EDI                             ; 00492060
        ;   Label: LAB_00492060
    MOV EAX,0xffffffff                  ; 00492061
    MOV ESP,EBP                         ; 00492066
    POP EBP                             ; 00492068
    POP EDI                             ; 00492069
    POP ESI                             ; 0049206a
    POP EBX                             ; 0049206b
    RET                                 ; 0049206c
    MOV EAX,ESI                         ; 0049206d
        ;   Label: LAB_0049206d
    MOV ESP,EBP                         ; 0049206f
    POP EBP                             ; 00492071
    POP EDI                             ; 00492072
    POP ESI                             ; 00492073
    POP EBX                             ; 00492074
    RET                                 ; 00492075
    MOV AL,DL                           ; 00492076
        ;   Label: LAB_00492076
    AND EAX,0xff                        ; 00492078
    PUSH EAX                            ; 0049207d
    CALL core_event.cpp_isValidIdentifierChar_FUN_00495460 ; 0049207e
        ;   XREF to: 00495460 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_00495460(int ch)
    ADD ESP,0x4                         ; 00492083
    TEST EAX,EAX                        ; 00492086
    JZ 0x004920e5                       ; 00492088
        ;   XREF to: 004920e5 (CONDITIONAL_JUMP)  ; LAB_004920e5
    LEA ESI,[ESP + 0xf34]               ; 0049208a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492091
        ;   Label: LAB_00492091
    ADD EAX,dword ptr [EBX]             ; 00492094
    MOV AL,byte ptr [EAX]               ; 00492096
    MOV byte ptr [ESI],AL               ; 00492098
    MOV ECX,dword ptr [EBX]             ; 0049209a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049209c
    INC ECX                             ; 0049209f
    ADD EAX,ECX                         ; 004920a0
    MOV dword ptr [EBX],ECX             ; 004920a2
    INC ESI                             ; 004920a4
    MOV AL,byte ptr [EAX]               ; 004920a5
    AND EAX,0xff                        ; 004920a7
    PUSH EAX                            ; 004920ac
    CALL core_event.cpp_isValidIdentifierChar_FUN_00495460 ; 004920ad
        ;   XREF to: 00495460 (UNCONDITIONAL_CALL)  ; int core_event.cpp_isValidIdentifierChar_FUN_00495460(int ch)
    ADD ESP,0x4                         ; 004920b2
    TEST EAX,EAX                        ; 004920b5
    JNZ 0x00492091                      ; 004920b7
        ;   XREF to: 00492091 (CONDITIONAL_JUMP)  ; LAB_00492091
    MOV byte ptr [ESI],0x0              ; 004920b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004920bc
    ADD EAX,dword ptr [EBX]             ; 004920bf
    CMP byte ptr [EAX],0x28             ; 004920c1
    JZ 0x00492130                       ; 004920c4
        ;   XREF to: 00492130 (CONDITIONAL_JUMP)  ; LAB_00492130
    MOV EDI,dword ptr [EBP + 0x18]      ; 004920c6
    MOV EAX,EBX                         ; 004920c9
    MOV EDX,dword ptr [EAX]             ; 004920cb
        ;   Label: LAB_004920cb
    MOV DL,byte ptr [EDX + EDI*0x1]     ; 004920cd
    INC DL                              ; 004920d0
    AND EDX,0xff                        ; 004920d2
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004920d8 | DAT_006074b8
    JZ 0x00492115                       ; 004920df
        ;   XREF to: 00492115 (CONDITIONAL_JUMP)  ; LAB_00492115
    INC dword ptr [EAX]                 ; 004920e1
    JMP 0x004920cb                      ; 004920e3
        ;   XREF to: 004920cb (UNCONDITIONAL_JUMP)  ; LAB_004920cb
    MOV ESI,0x5bf550                    ; 004920e5 | = "Syntax error"
        ;   Label: LAB_004920e5
    MOV EDI,0x1c734b0                   ; 004920ea
    PUSH EDI                            ; 004920ef | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004920f0 | = "Syntax error" | s_ntax_error_005bf550+2
        ;   Label: LAB_004920f0
    MOV byte ptr [EDI],AL               ; 004920f2 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004920f4
    JZ 0x00492108                       ; 004920f6
        ;   XREF to: 00492108 (CONDITIONAL_JUMP)  ; LAB_00492108
    MOV AL,byte ptr [ESI + 0x1]         ; 004920f8 | s_yntax_error_005bf550+1 | s_tax_error_005bf550+3
    ADD ESI,0x2                         ; 004920fb
    MOV byte ptr [EDI + 0x1],AL         ; 004920fe | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492101
    CMP AL,0x0                          ; 00492104
    JNZ 0x004920f0                      ; 00492106
        ;   XREF to: 004920f0 (CONDITIONAL_JUMP)  ; LAB_004920f0
    POP EDI                             ; 00492108
        ;   Label: LAB_00492108
    MOV EAX,0xffffffff                  ; 00492109
    MOV ESP,EBP                         ; 0049210e
    POP EBP                             ; 00492110
    POP EDI                             ; 00492111
    POP ESI                             ; 00492112
    POP EBX                             ; 00492113
    RET                                 ; 00492114
    LEA EAX,[ESP + 0xf34]               ; 00492115
        ;   Label: LAB_00492115
    PUSH EAX                            ; 0049211c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049211d
    PUSH EBX                            ; 00492120
    CALL core_event.cpp_CEventList_resolveVariable_FUN_00491a10 ; 00492121
        ;   XREF to: 00491a10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_resolveVariable_FUN_00491a10(CEventList * this_ptr, char * identifier)
    ADD ESP,0x8                         ; 00492126
    MOV ESP,EBP                         ; 00492129
    POP EBP                             ; 0049212b
    POP EDI                             ; 0049212c
    POP ESI                             ; 0049212d
    POP EBX                             ; 0049212e
    RET                                 ; 0049212f
    PUSH 0x5bf55d                       ; 00492130 | DAT_005bf55d
        ;   Label: LAB_00492130
    LEA EAX,[ESP + 0xf38]               ; 00492135
    MOV ECX,0xffffffff                  ; 0049213c
    PUSH EAX                            ; 00492141
    MOV dword ptr [ESP + 0xfc4],ECX     ; 00492142
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492149
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049214e
    TEST EAX,EAX                        ; 00492151
    JNZ 0x0049258f                      ; 00492153
        ;   XREF to: 0049258f (CONDITIONAL_JUMP)  ; LAB_0049258f
    LEA EAX,[ESP + 0xfc0]               ; 00492159
    PUSH EAX                            ; 00492160
    LEA EAX,[ESP + 0xaec]               ; 00492161
    PUSH EAX                            ; 00492168
    LEA EAX,[ESP + 0x7d0]               ; 00492169
    MOV ESI,0xffffffff                  ; 00492170
    PUSH EAX                            ; 00492175
    LEA EAX,[ESP + 0xedc]               ; 00492176
    MOV dword ptr [ESP + 0xfcc],ESI     ; 0049217d
    PUSH EAX                            ; 00492184
    MOV EAX,0x5bf561                    ; 00492185 | = " ( %s %s %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 0049218a
    PUSH EAX                            ; 0049218c | = " ( %s %s %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049218d
    ADD EAX,EDI                         ; 00492190
    PUSH EAX                            ; 00492192
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492193
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 00492198
    CMP dword ptr [ESP + 0xfc0],0x3     ; 0049219b
    JL 0x0049220c                       ; 004921a3
        ;   XREF to: 0049220c (CONDITIONAL_JUMP)  ; LAB_0049220c
    LEA ESI,[ESP + 0xed0]               ; 004921a5
    MOV EDI,ESI                         ; 004921ac
    SUB ECX,ECX                         ; 004921ae
    DEC ECX                             ; 004921b0
    XOR EAX,EAX                         ; 004921b1
    SCASB.REPNE ES:EDI                  ; 004921b3
    NOT ECX                             ; 004921b5
    DEC ECX                             ; 004921b7
    MOV EDI,ECX                         ; 004921b8
    TEST ECX,ECX                        ; 004921ba
    JLE 0x004921d5                      ; 004921bc
        ;   XREF to: 004921d5 (CONDITIONAL_JUMP)  ; LAB_004921d5
    LEA EAX,[ECX + ESI*0x1]             ; 004921be
    MOV DL,byte ptr [EAX + -0x1]        ; 004921c1
        ;   Label: LAB_004921c1
    INC DL                              ; 004921c4
    AND EDX,0xff                        ; 004921c6
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004921cc | DAT_006074b8
    JNZ 0x0049223c                      ; 004921d3
        ;   XREF to: 0049223c (CONDITIONAL_JUMP)  ; LAB_0049223c
    LEA EAX,[ESI + EDI*0x1]             ; 004921d5
        ;   Label: LAB_004921d5
    MOV byte ptr [EAX],0x0              ; 004921d8
    LEA EAX,[ESI + 0x1]                 ; 004921db
    MOV dword ptr [ESP + 0xfc8],EAX     ; 004921de
    MOV AL,byte ptr [ESI]               ; 004921e5
        ;   Label: LAB_004921e5
    INC AL                              ; 004921e7
    AND EAX,0xff                        ; 004921e9
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004921ee | DAT_006074b8
    JZ 0x00492248                       ; 004921f5
        ;   XREF to: 00492248 (CONDITIONAL_JUMP)  ; LAB_00492248
    PUSH EDI                            ; 004921f7
    MOV EAX,dword ptr [ESP + 0xfcc]     ; 004921f8
    PUSH EAX                            ; 004921ff
    PUSH ESI                            ; 00492200
    DEC EDI                             ; 00492201
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00492202
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492207
    JMP 0x004921e5                      ; 0049220a
        ;   XREF to: 004921e5 (UNCONDITIONAL_JUMP)  ; LAB_004921e5
    MOV ESI,0x5bf575                    ; 0049220c | = "Error parsing cmp parameters."
        ;   Label: LAB_0049220c
    MOV EDI,0x1c734b0                   ; 00492211
    PUSH EDI                            ; 00492216 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492217 | = "Error parsing cmp parameters." | s_Error_parsing_cmp_parame_005bf575+2
        ;   Label: LAB_00492217
    MOV byte ptr [EDI],AL               ; 00492219 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049221b
    JZ 0x0049222f                       ; 0049221d
        ;   XREF to: 0049222f (CONDITIONAL_JUMP)  ; LAB_0049222f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049221f | s_Error_parsing_cmp_parame_005bf575+1 | s_Error_parsing_cmp_parame_005bf575+3
    ADD ESI,0x2                         ; 00492222
    MOV byte ptr [EDI + 0x1],AL         ; 00492225 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492228
    CMP AL,0x0                          ; 0049222b
    JNZ 0x00492217                      ; 0049222d
        ;   XREF to: 00492217 (CONDITIONAL_JUMP)  ; LAB_00492217
    POP EDI                             ; 0049222f
        ;   Label: LAB_0049222f
    MOV EAX,0xffffffff                  ; 00492230
    MOV ESP,EBP                         ; 00492235
    POP EBP                             ; 00492237
    POP EDI                             ; 00492238
    POP ESI                             ; 00492239
    POP EBX                             ; 0049223a
    RET                                 ; 0049223b
    DEC EDI                             ; 0049223c
        ;   Label: LAB_0049223c
    DEC EAX                             ; 0049223d
    TEST EDI,EDI                        ; 0049223e
    JG 0x004921c1                       ; 00492240
        ;   XREF to: 004921c1 (CONDITIONAL_JUMP)  ; LAB_004921c1
    JMP 0x004921d5                      ; 00492246
        ;   XREF to: 004921d5 (UNCONDITIONAL_JUMP)  ; LAB_004921d5
    LEA EDI,[ESP + 0xae8]               ; 00492248
        ;   Label: LAB_00492248
    LEA ESI,[ESP + 0xae8]               ; 0049224f
    SUB ECX,ECX                         ; 00492256
    DEC ECX                             ; 00492258
    XOR EAX,EAX                         ; 00492259
    SCASB.REPNE ES:EDI                  ; 0049225b
    NOT ECX                             ; 0049225d
    DEC ECX                             ; 0049225f
    MOV EDI,ECX                         ; 00492260
    TEST ECX,ECX                        ; 00492262
    JLE 0x00492283                      ; 00492264
        ;   XREF to: 00492283 (CONDITIONAL_JUMP)  ; LAB_00492283
    LEA EAX,[ESP + 0xae8]               ; 00492266
    ADD EAX,ECX                         ; 0049226d
    MOV DL,byte ptr [EAX + -0x1]        ; 0049226f
        ;   Label: LAB_0049226f
    INC DL                              ; 00492272
    AND EDX,0xff                        ; 00492274
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0049227a | DAT_006074b8
    JNZ 0x004922ba                      ; 00492281
        ;   XREF to: 004922ba (CONDITIONAL_JUMP)  ; LAB_004922ba
    LEA EAX,[ESI + EDI*0x1]             ; 00492283
        ;   Label: LAB_00492283
    MOV byte ptr [EAX],0x0              ; 00492286
    LEA EAX,[ESI + 0x1]                 ; 00492289
    MOV dword ptr [ESP + 0xfcc],EAX     ; 0049228c
    MOV AL,byte ptr [ESI]               ; 00492293
        ;   Label: LAB_00492293
    INC AL                              ; 00492295
    AND EAX,0xff                        ; 00492297
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049229c | DAT_006074b8
    JZ 0x004922c2                       ; 004922a3
        ;   XREF to: 004922c2 (CONDITIONAL_JUMP)  ; LAB_004922c2
    PUSH EDI                            ; 004922a5
    MOV EDX,dword ptr [ESP + 0xfd0]     ; 004922a6
    PUSH EDX                            ; 004922ad
    PUSH ESI                            ; 004922ae
    DEC EDI                             ; 004922af
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004922b0
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004922b5
    JMP 0x00492293                      ; 004922b8
        ;   XREF to: 00492293 (UNCONDITIONAL_JUMP)  ; LAB_00492293
    DEC EDI                             ; 004922ba
        ;   Label: LAB_004922ba
    DEC EAX                             ; 004922bb
    TEST EDI,EDI                        ; 004922bc
    JG 0x0049226f                       ; 004922be
        ;   XREF to: 0049226f (CONDITIONAL_JUMP)  ; LAB_0049226f
    JMP 0x00492283                      ; 004922c0
        ;   XREF to: 00492283 (UNCONDITIONAL_JUMP)  ; LAB_00492283
    LEA EDI,[ESP + 0x7c8]               ; 004922c2
        ;   Label: LAB_004922c2
    LEA ESI,[ESP + 0x7c8]               ; 004922c9
    SUB ECX,ECX                         ; 004922d0
    DEC ECX                             ; 004922d2
    XOR EAX,EAX                         ; 004922d3
    SCASB.REPNE ES:EDI                  ; 004922d5
    NOT ECX                             ; 004922d7
    DEC ECX                             ; 004922d9
    MOV EDI,ECX                         ; 004922da
    TEST ECX,ECX                        ; 004922dc
    JLE 0x004922fd                      ; 004922de
        ;   XREF to: 004922fd (CONDITIONAL_JUMP)  ; LAB_004922fd
    LEA EAX,[ESP + 0x7c8]               ; 004922e0
    ADD EAX,ECX                         ; 004922e7
    MOV DL,byte ptr [EAX + -0x1]        ; 004922e9
        ;   Label: LAB_004922e9
    INC DL                              ; 004922ec
    AND EDX,0xff                        ; 004922ee
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004922f4 | DAT_006074b8
    JNZ 0x00492334                      ; 004922fb
        ;   XREF to: 00492334 (CONDITIONAL_JUMP)  ; LAB_00492334
    LEA EAX,[ESI + EDI*0x1]             ; 004922fd
        ;   Label: LAB_004922fd
    MOV byte ptr [EAX],0x0              ; 00492300
    LEA EAX,[ESI + 0x1]                 ; 00492303
    MOV dword ptr [ESP + 0xfd4],EAX     ; 00492306
    MOV AL,byte ptr [ESI]               ; 0049230d
        ;   Label: LAB_0049230d
    INC AL                              ; 0049230f
    AND EAX,0xff                        ; 00492311
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00492316 | DAT_006074b8
    JZ 0x0049233c                       ; 0049231d
        ;   XREF to: 0049233c (CONDITIONAL_JUMP)  ; LAB_0049233c
    PUSH EDI                            ; 0049231f
    MOV EAX,dword ptr [ESP + 0xfd8]     ; 00492320
    PUSH EAX                            ; 00492327
    PUSH ESI                            ; 00492328
    DEC EDI                             ; 00492329
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049232a
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049232f
    JMP 0x0049230d                      ; 00492332
        ;   XREF to: 0049230d (UNCONDITIONAL_JUMP)  ; LAB_0049230d
    DEC EDI                             ; 00492334
        ;   Label: LAB_00492334
    DEC EAX                             ; 00492335
    TEST EDI,EDI                        ; 00492336
    JG 0x004922e9                       ; 00492338
        ;   XREF to: 004922e9 (CONDITIONAL_JUMP)  ; LAB_004922e9
    JMP 0x004922fd                      ; 0049233a
        ;   XREF to: 004922fd (UNCONDITIONAL_JUMP)  ; LAB_004922fd
    PUSH 0x5bddb8                       ; 0049233c | DAT_005bddb8
        ;   Label: LAB_0049233c
    LEA EAX,[ESP + 0x7cc]               ; 00492341
    PUSH EAX                            ; 00492348
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00492349
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049234e
    TEST EAX,EAX                        ; 00492351
    JNZ 0x0049240c                      ; 00492353
        ;   XREF to: 0049240c (CONDITIONAL_JUMP)  ; LAB_0049240c
    MOV EDI,EAX                         ; 00492359
        ;   Label: LAB_00492359
    CMP EAX,0x6                         ; 0049235b
    JZ 0x004924c5                       ; 0049235e
        ;   XREF to: 004924c5 (CONDITIONAL_JUMP)  ; LAB_004924c5
    MOV EAX,dword ptr [ESP + 0xfc0]     ; 00492364
    MOV ECX,dword ptr [EBX]             ; 0049236b
    ADD ECX,EAX                         ; 0049236d
    LEA EAX,[ESP + 0xfd8]               ; 0049236f
    PUSH EAX                            ; 00492376
    PUSH 0x5bddc8                       ; 00492377 | DAT_005bddc8
    LEA EAX,[ESP + 0xed8]               ; 0049237c
    PUSH EAX                            ; 00492383
    MOV dword ptr [EBX],ECX             ; 00492384
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492386
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0049238b
    CMP EAX,0x1                         ; 0049238e
    JNZ 0x004924f5                      ; 00492391
        ;   XREF to: 004924f5 (CONDITIONAL_JUMP)  ; LAB_004924f5
    MOV ESI,dword ptr [ESP + 0xfd8]     ; 00492397
    LEA EAX,[ESP + 0x102c]              ; 0049239e
        ;   Label: LAB_0049239e
    PUSH EAX                            ; 004923a5
    PUSH 0x5bddc8                       ; 004923a6 | DAT_005bddc8
    LEA EAX,[ESP + 0xaf0]               ; 004923ab
    PUSH EAX                            ; 004923b2
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004923b3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 004923b8
    CMP EAX,0x1                         ; 004923bb
    JNZ 0x00492513                      ; 004923be
        ;   XREF to: 00492513 (CONDITIONAL_JUMP)  ; LAB_00492513
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004923c4
    CMP EDI,0x5                         ; 004923cb
    JA 0x00492567                       ; 004923ce
        ;   XREF to: 00492567 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x491f1c]  ; 004923d4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 004923db
        ;   Label: caseD_0
    SETL AL                             ; 004923dd
    AND EAX,0xff                        ; 004923e0
        ;   Label: LAB_004923e0
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004923e5
        ;   Label: LAB_004923e5
    MOV EDX,dword ptr [EBP + 0x18]      ; 004923ec
        ;   Label: LAB_004923ec
    MOV EAX,dword ptr [EBX]             ; 004923ef
        ;   Label: LAB_004923ef
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004923f1
    INC AL                              ; 004923f4
    AND EAX,0xff                        ; 004923f6
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004923fb | DAT_006074b8
    JZ 0x00494619                       ; 00492402
        ;   XREF to: 00494619 (CONDITIONAL_JUMP)  ; LAB_00494619
    INC dword ptr [EBX]                 ; 00492408
    JMP 0x004923ef                      ; 0049240a
        ;   XREF to: 004923ef (UNCONDITIONAL_JUMP)  ; LAB_004923ef
    PUSH 0x5bddba                       ; 0049240c | DAT_005bddba
        ;   Label: LAB_0049240c
    LEA EAX,[ESP + 0x7cc]               ; 00492411
    PUSH EAX                            ; 00492418
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00492419
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049241e
    TEST EAX,EAX                        ; 00492421
    JNZ 0x0049242f                      ; 00492423
        ;   XREF to: 0049242f (CONDITIONAL_JUMP)  ; LAB_0049242f
    MOV EAX,0x1                         ; 00492425
    JMP 0x00492359                      ; 0049242a
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    PUSH 0x5bddbd                       ; 0049242f | DAT_005bddbd
        ;   Label: LAB_0049242f
    LEA EAX,[ESP + 0x7cc]               ; 00492434
    PUSH EAX                            ; 0049243b
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0049243c
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492441
    TEST EAX,EAX                        ; 00492444
    JNZ 0x00492452                      ; 00492446
        ;   XREF to: 00492452 (CONDITIONAL_JUMP)  ; LAB_00492452
    MOV EAX,0x2                         ; 00492448
    JMP 0x00492359                      ; 0049244d
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    PUSH 0x5bddc0                       ; 00492452 | DAT_005bddc0
        ;   Label: LAB_00492452
    LEA EAX,[ESP + 0x7cc]               ; 00492457
    PUSH EAX                            ; 0049245e
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0049245f
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492464
    TEST EAX,EAX                        ; 00492467
    JNZ 0x00492475                      ; 00492469
        ;   XREF to: 00492475 (CONDITIONAL_JUMP)  ; LAB_00492475
    MOV EAX,0x3                         ; 0049246b
    JMP 0x00492359                      ; 00492470
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    PUSH 0x5bddc3                       ; 00492475 | DAT_005bddc3
        ;   Label: LAB_00492475
    LEA EAX,[ESP + 0x7cc]               ; 0049247a
    PUSH EAX                            ; 00492481
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00492482
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492487
    TEST EAX,EAX                        ; 0049248a
    JNZ 0x00492498                      ; 0049248c
        ;   XREF to: 00492498 (CONDITIONAL_JUMP)  ; LAB_00492498
    MOV EAX,0x5                         ; 0049248e
    JMP 0x00492359                      ; 00492493
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    PUSH 0x5bddc5                       ; 00492498 | DAT_005bddc5
        ;   Label: LAB_00492498
    LEA EAX,[ESP + 0x7cc]               ; 0049249d
    PUSH EAX                            ; 004924a4
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004924a5
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004924aa
    TEST EAX,EAX                        ; 004924ad
    JNZ 0x004924bb                      ; 004924af
        ;   XREF to: 004924bb (CONDITIONAL_JUMP)  ; LAB_004924bb
    MOV EAX,0x4                         ; 004924b1
    JMP 0x00492359                      ; 004924b6
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    MOV EAX,0x6                         ; 004924bb
        ;   Label: LAB_004924bb
    JMP 0x00492359                      ; 004924c0
        ;   XREF to: 00492359 (UNCONDITIONAL_JUMP)  ; LAB_00492359
    MOV ESI,0x5bf593                    ; 004924c5 | = "Invalid relational operator in cmp st..."
        ;   Label: LAB_004924c5
    MOV EDI,0x1c734b0                   ; 004924ca
    PUSH EDI                            ; 004924cf | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004924d0 | = "Invalid relational operator in cmp st..." | s_Invalid_relational_opera_005bf593+2
        ;   Label: LAB_004924d0
    MOV byte ptr [EDI],AL               ; 004924d2 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004924d4
    JZ 0x004924e8                       ; 004924d6
        ;   XREF to: 004924e8 (CONDITIONAL_JUMP)  ; LAB_004924e8
    MOV AL,byte ptr [ESI + 0x1]         ; 004924d8 | s_Invalid_relational_opera_005bf593+1 | s_Invalid_relational_opera_005bf593+3
    ADD ESI,0x2                         ; 004924db
    MOV byte ptr [EDI + 0x1],AL         ; 004924de | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 004924e1
    CMP AL,0x0                          ; 004924e4
    JNZ 0x004924d0                      ; 004924e6
        ;   XREF to: 004924d0 (CONDITIONAL_JUMP)  ; LAB_004924d0
    POP EDI                             ; 004924e8
        ;   Label: LAB_004924e8
    MOV EAX,0xffffffff                  ; 004924e9
    MOV ESP,EBP                         ; 004924ee
    POP EBP                             ; 004924f0
    POP EDI                             ; 004924f1
    POP ESI                             ; 004924f2
    POP EBX                             ; 004924f3
    RET                                 ; 004924f4
    LEA EAX,[ESP + 0xed0]               ; 004924f5
        ;   Label: LAB_004924f5
    PUSH EAX                            ; 004924fc
    MOV ESI,dword ptr [0x005fba60]      ; 004924fd | DAT_005fba60
    PUSH ESI                            ; 00492503
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 00492504
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 00492509
    MOV ESI,EAX                         ; 0049250c
    JMP 0x0049239e                      ; 0049250e
        ;   XREF to: 0049239e (UNCONDITIONAL_JUMP)  ; LAB_0049239e
    LEA EAX,[ESP + 0xae8]               ; 00492513
        ;   Label: LAB_00492513
    PUSH EAX                            ; 0049251a
    MOV EAX,[0x005fba60]                ; 0049251b | DAT_005fba60
    PUSH EAX                            ; 00492520
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 00492521
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 00492526
    CMP EDI,0x5                         ; 00492529
    JA 0x00492567                       ; 0049252c
        ;   XREF to: 00492567 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x491f1c]  ; 0049252e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP ESI,EAX                         ; 00492535
        ;   Label: caseD_1
    SETLE AL                            ; 00492537
    JMP 0x004923e0                      ; 0049253a
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    CMP ESI,EAX                         ; 0049253f
        ;   Label: caseD_2
    SETZ AL                             ; 00492541
    JMP 0x004923e0                      ; 00492544
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    CMP ESI,EAX                         ; 00492549
        ;   Label: caseD_3
    SETNZ AL                            ; 0049254b
    JMP 0x004923e0                      ; 0049254e
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    CMP ESI,EAX                         ; 00492553
        ;   Label: caseD_5
    SETG AL                             ; 00492555
    JMP 0x004923e0                      ; 00492558
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    CMP ESI,EAX                         ; 0049255d
        ;   Label: caseD_4
    SETGE AL                            ; 0049255f
    JMP 0x004923e0                      ; 00492562
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    MOV EDX,0x5bf5c0                    ; 00492567 | = "..\\core\\event.cpp"
        ;   Label: default
    MOV ECX,0xad9                       ; 0049256c
    PUSH 0x5bf5d2                       ; 00492571 | = "Hell froze."
    MOV dword ptr [0x01d71de0],EDX      ; 00492576 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0049257c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00492582
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00492587
    JMP 0x004923ec                      ; 0049258a
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf5de                       ; 0049258f | = "exists"
        ;   Label: LAB_0049258f
    LEA EAX,[ESP + 0xf38]               ; 00492594
    PUSH EAX                            ; 0049259b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0049259c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004925a1
    TEST EAX,EAX                        ; 004925a4
    JNZ 0x004926d5                      ; 004925a6
        ;   XREF to: 004926d5 (CONDITIONAL_JUMP)  ; LAB_004926d5
    LEA EAX,[ESP + 0xfdc]               ; 004925ac
    MOV EDI,0xffffffff                  ; 004925b3
    PUSH EAX                            ; 004925b8
    LEA EAX,[ESP + 0xe70]               ; 004925b9
    MOV dword ptr [ESP + 0xfe0],EDI     ; 004925c0
    PUSH EAX                            ; 004925c7
    MOV EAX,0x5bf5e5                    ; 004925c8 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 004925cd
    PUSH EAX                            ; 004925cf | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004925d0
    ADD EAX,EDX                         ; 004925d3
    PUSH EAX                            ; 004925d5
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004925d6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004925db
    CMP dword ptr [ESP + 0xfdc],0x3     ; 004925de
    JL 0x0049264f                       ; 004925e6
        ;   XREF to: 0049264f (CONDITIONAL_JUMP)  ; LAB_0049264f
    LEA ESI,[ESP + 0xe6c]               ; 004925e8
    MOV EDI,ESI                         ; 004925ef
    SUB ECX,ECX                         ; 004925f1
    DEC ECX                             ; 004925f3
    XOR EAX,EAX                         ; 004925f4
    SCASB.REPNE ES:EDI                  ; 004925f6
    NOT ECX                             ; 004925f8
    DEC ECX                             ; 004925fa
    MOV EDI,ECX                         ; 004925fb
    TEST ECX,ECX                        ; 004925fd
    JLE 0x00492618                      ; 004925ff
        ;   XREF to: 00492618 (CONDITIONAL_JUMP)  ; LAB_00492618
    LEA EAX,[ECX + ESI*0x1]             ; 00492601
    MOV DL,byte ptr [EAX + -0x1]        ; 00492604
        ;   Label: LAB_00492604
    INC DL                              ; 00492607
    AND EDX,0xff                        ; 00492609
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0049260f | DAT_006074b8
    JNZ 0x0049267f                      ; 00492616
        ;   XREF to: 0049267f (CONDITIONAL_JUMP)  ; LAB_0049267f
    LEA EAX,[ESI + EDI*0x1]             ; 00492618
        ;   Label: LAB_00492618
    MOV byte ptr [EAX],0x0              ; 0049261b
    LEA EAX,[ESI + 0x1]                 ; 0049261e
    MOV dword ptr [ESP + 0xfe0],EAX     ; 00492621
    MOV AL,byte ptr [ESI]               ; 00492628
        ;   Label: LAB_00492628
    INC AL                              ; 0049262a
    AND EAX,0xff                        ; 0049262c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00492631 | DAT_006074b8
    JZ 0x0049268b                       ; 00492638
        ;   XREF to: 0049268b (CONDITIONAL_JUMP)  ; LAB_0049268b
    PUSH EDI                            ; 0049263a
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 0049263b
    PUSH ECX                            ; 00492642
    PUSH ESI                            ; 00492643
    DEC EDI                             ; 00492644
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00492645
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049264a
    JMP 0x00492628                      ; 0049264d
        ;   XREF to: 00492628 (UNCONDITIONAL_JUMP)  ; LAB_00492628
    MOV ESI,0x5bf5f3                    ; 0049264f | = "Error parsing exists parameters."
        ;   Label: LAB_0049264f
    MOV EDI,0x1c734b0                   ; 00492654
    PUSH EDI                            ; 00492659 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0049265a | = "Error parsing exists parameters." | s_Error_parsing_exists_par_005bf5f3+2
        ;   Label: LAB_0049265a
    MOV byte ptr [EDI],AL               ; 0049265c | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049265e
    JZ 0x00492672                       ; 00492660
        ;   XREF to: 00492672 (CONDITIONAL_JUMP)  ; LAB_00492672
    MOV AL,byte ptr [ESI + 0x1]         ; 00492662 | s_Error_parsing_exists_par_005bf5f3+1 | s_Error_parsing_exists_par_005bf5f3+3
    ADD ESI,0x2                         ; 00492665
    MOV byte ptr [EDI + 0x1],AL         ; 00492668 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0049266b
    CMP AL,0x0                          ; 0049266e
    JNZ 0x0049265a                      ; 00492670
        ;   XREF to: 0049265a (CONDITIONAL_JUMP)  ; LAB_0049265a
    POP EDI                             ; 00492672
        ;   Label: LAB_00492672
    MOV EAX,0xffffffff                  ; 00492673
    MOV ESP,EBP                         ; 00492678
    POP EBP                             ; 0049267a
    POP EDI                             ; 0049267b
    POP ESI                             ; 0049267c
    POP EBX                             ; 0049267d
    RET                                 ; 0049267e
    DEC EDI                             ; 0049267f
        ;   Label: LAB_0049267f
    DEC EAX                             ; 00492680
    TEST EDI,EDI                        ; 00492681
    JG 0x00492604                       ; 00492683
        ;   XREF to: 00492604 (CONDITIONAL_JUMP)  ; LAB_00492604
    JMP 0x00492618                      ; 00492689
        ;   XREF to: 00492618 (UNCONDITIONAL_JUMP)  ; LAB_00492618
    PUSH 0x7df978                       ; 0049268b | g_CDemonActorClassInfo
        ;   Label: LAB_0049268b
    MOV ESI,dword ptr [0x007df9b0]      ; 00492690 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 00492696
    LEA EAX,[ESP + 0xe74]               ; 00492697
    PUSH EAX                            ; 0049269e
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0049269f
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004926a4
    TEST EAX,EAX                        ; 004926a7
    JZ 0x004926d1                       ; 004926a9
        ;   XREF to: 004926d1 (CONDITIONAL_JUMP)  ; LAB_004926d1
    CMP EAX,dword ptr [0x005df604]      ; 004926ab | DAT_005df604
    JZ 0x004926d1                       ; 004926b1
        ;   XREF to: 004926d1 (CONDITIONAL_JUMP)  ; LAB_004926d1
    MOV EAX,0x1                         ; 004926b3
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004926b8
        ;   Label: LAB_004926b8
    MOV EDX,dword ptr [EBX]             ; 004926bf
    MOV EAX,dword ptr [ESP + 0xfdc]     ; 004926c1
    ADD EDX,EAX                         ; 004926c8
    MOV dword ptr [EBX],EDX             ; 004926ca
    JMP 0x004923ec                      ; 004926cc
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    XOR EAX,EAX                         ; 004926d1
        ;   Label: LAB_004926d1
    JMP 0x004926b8                      ; 004926d3
        ;   XREF to: 004926b8 (UNCONDITIONAL_JUMP)  ; LAB_004926b8
    PUSH 0x5bf614                       ; 004926d5 | = "fieldNotesDisplayed"
        ;   Label: LAB_004926d5
    LEA EAX,[ESP + 0xf38]               ; 004926da
    PUSH EAX                            ; 004926e1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004926e2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004926e7
    TEST EAX,EAX                        ; 004926ea
    JNZ 0x00492771                      ; 004926ec
        ;   XREF to: 00492771 (CONDITIONAL_JUMP)  ; LAB_00492771
    MOV dword ptr [ESP + 0xfe4],0xffffffff ; 004926f2
    LEA EAX,[ESP + 0xfe4]               ; 004926fd
    PUSH EAX                            ; 00492704
    MOV EAX,0x5bf628                    ; 00492705 | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 0049270a
    PUSH EAX                            ; 0049270c | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049270d
    ADD EAX,EDX                         ; 00492710
    PUSH EAX                            ; 00492712
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492713
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00492718
    MOV ECX,dword ptr [ESP + 0xfe4]     ; 0049271b
    CMP ECX,0x2                         ; 00492722
    JL 0x00492741                       ; 00492725
        ;   XREF to: 00492741 (CONDITIONAL_JUMP)  ; LAB_00492741
    MOV EAX,[0x005fe4b0]                ; 00492727 | g_CFieldNotesPtr
    MOV ESI,dword ptr [EBX]             ; 0049272c
    MOV EAX,dword ptr [EAX + 0x40]      ; 0049272e | g_CFieldNotesInstance.is_displayed
    ADD ESI,ECX                         ; 00492731
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00492733
    MOV dword ptr [EBX],ESI             ; 0049273a
    JMP 0x004923ec                      ; 0049273c
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bf62f                    ; 00492741 | = "Error parsing fieldNotesDisplayed con..."
        ;   Label: LAB_00492741
    MOV EDI,0x1c734b0                   ; 00492746
    PUSH EDI                            ; 0049274b | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0049274c | = "Error parsing fieldNotesDisplayed con..." | s_Error_parsing_fieldNotes_005bf62f+2
        ;   Label: LAB_0049274c
    MOV byte ptr [EDI],AL               ; 0049274e | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492750
    JZ 0x00492764                       ; 00492752
        ;   XREF to: 00492764 (CONDITIONAL_JUMP)  ; LAB_00492764
    MOV AL,byte ptr [ESI + 0x1]         ; 00492754 | s_Error_parsing_fieldNotes_005bf62f+1 | s_Error_parsing_fieldNotes_005bf62f+3
    ADD ESI,0x2                         ; 00492757
    MOV byte ptr [EDI + 0x1],AL         ; 0049275a | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0049275d
    CMP AL,0x0                          ; 00492760
    JNZ 0x0049274c                      ; 00492762
        ;   XREF to: 0049274c (CONDITIONAL_JUMP)  ; LAB_0049274c
    POP EDI                             ; 00492764
        ;   Label: LAB_00492764
    MOV EAX,0xffffffff                  ; 00492765
    MOV ESP,EBP                         ; 0049276a
    POP EBP                             ; 0049276c
    POP EDI                             ; 0049276d
    POP ESI                             ; 0049276e
    POP EBX                             ; 0049276f
    RET                                 ; 00492770
    PUSH 0x5bf65c                       ; 00492771 | = "hasItem"
        ;   Label: LAB_00492771
    LEA EAX,[ESP + 0xf38]               ; 00492776
    PUSH EAX                            ; 0049277d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0049277e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492783
    TEST EAX,EAX                        ; 00492786
    JNZ 0x00492909                      ; 00492788
        ;   XREF to: 00492909 (CONDITIONAL_JUMP)  ; LAB_00492909
    MOV EAX,[0x00603450]                ; 0049278e | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 00492793 | g_CNetGameInstance
    JNZ 0x0049284b                      ; 00492796
        ;   XREF to: 0049284b (CONDITIONAL_JUMP)  ; LAB_0049284b
    LEA EAX,[ESP + 0xfe8]               ; 0049279c
    MOV ECX,0xffffffff                  ; 004927a3
    PUSH EAX                            ; 004927a8
    LEA EAX,[ESP + 0xa24]               ; 004927a9
    MOV dword ptr [ESP + 0xfec],ECX     ; 004927b0
    PUSH EAX                            ; 004927b7
    MOV EAX,0x5bf690                    ; 004927b8 | = " (%[^)])%n"
    MOV ESI,dword ptr [EBX]             ; 004927bd
    PUSH EAX                            ; 004927bf | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004927c0
    ADD EAX,ESI                         ; 004927c3
    PUSH EAX                            ; 004927c5
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004927c6
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004927cb
    CMP dword ptr [ESP + 0xfe8],0x3     ; 004927ce
    JL 0x0049287b                       ; 004927d6
        ;   XREF to: 0049287b (CONDITIONAL_JUMP)  ; LAB_0049287b
    LEA ESI,[ESP + 0xa20]               ; 004927dc
    MOV EDI,ESI                         ; 004927e3
    SUB ECX,ECX                         ; 004927e5
    DEC ECX                             ; 004927e7
    XOR EAX,EAX                         ; 004927e8
    SCASB.REPNE ES:EDI                  ; 004927ea
    NOT ECX                             ; 004927ec
    DEC ECX                             ; 004927ee
    MOV EDI,ECX                         ; 004927ef
    TEST ECX,ECX                        ; 004927f1
    JLE 0x00492810                      ; 004927f3
        ;   XREF to: 00492810 (CONDITIONAL_JUMP)  ; LAB_00492810
    LEA EAX,[ECX + ESI*0x1]             ; 004927f5
    MOV DL,byte ptr [EAX + -0x1]        ; 004927f8
        ;   Label: LAB_004927f8
    INC DL                              ; 004927fb
    AND EDX,0xff                        ; 004927fd
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00492803 | DAT_006074b8
    JNZ 0x004928ab                      ; 0049280a
        ;   XREF to: 004928ab (CONDITIONAL_JUMP)  ; LAB_004928ab
    LEA EAX,[ESI + EDI*0x1]             ; 00492810
        ;   Label: LAB_00492810
    MOV byte ptr [EAX],0x0              ; 00492813
    LEA EAX,[ESI + 0x1]                 ; 00492816
    MOV dword ptr [ESP + 0x1044],EAX    ; 00492819
    MOV AL,byte ptr [ESI]               ; 00492820
        ;   Label: LAB_00492820
    INC AL                              ; 00492822
    AND EAX,0xff                        ; 00492824
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00492829 | DAT_006074b8
    JZ 0x004928ba                       ; 00492830
        ;   XREF to: 004928ba (CONDITIONAL_JUMP)  ; LAB_004928ba
    PUSH EDI                            ; 00492836
    MOV ECX,dword ptr [ESP + 0x1048]    ; 00492837
    PUSH ECX                            ; 0049283e
    PUSH ESI                            ; 0049283f
    DEC EDI                             ; 00492840
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00492841
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492846
    JMP 0x00492820                      ; 00492849
        ;   XREF to: 00492820 (UNCONDITIONAL_JUMP)  ; LAB_00492820
    MOV ESI,0x5bf664                    ; 0049284b | = "Can't use hasItem condition in multi-..."
        ;   Label: LAB_0049284b
    MOV EDI,0x1c734b0                   ; 00492850
    PUSH EDI                            ; 00492855 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492856 | = "Can't use hasItem condition in multi-..." | s_Can_t_use_hasItem_condit_005bf664+2
        ;   Label: LAB_00492856
    MOV byte ptr [EDI],AL               ; 00492858 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049285a
    JZ 0x0049286e                       ; 0049285c
        ;   XREF to: 0049286e (CONDITIONAL_JUMP)  ; LAB_0049286e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049285e | s_Can_t_use_hasItem_condit_005bf664+1 | s_Can_t_use_hasItem_condit_005bf664+3
    ADD ESI,0x2                         ; 00492861
    MOV byte ptr [EDI + 0x1],AL         ; 00492864 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492867
    CMP AL,0x0                          ; 0049286a
    JNZ 0x00492856                      ; 0049286c
        ;   XREF to: 00492856 (CONDITIONAL_JUMP)  ; LAB_00492856
    POP EDI                             ; 0049286e
        ;   Label: LAB_0049286e
    MOV EAX,0xffffffff                  ; 0049286f
    MOV ESP,EBP                         ; 00492874
    POP EBP                             ; 00492876
    POP EDI                             ; 00492877
    POP ESI                             ; 00492878
    POP EBX                             ; 00492879
    RET                                 ; 0049287a
    MOV ESI,0x5bf69b                    ; 0049287b | = "Error parsing hasItem parameters."
        ;   Label: LAB_0049287b
    MOV EDI,0x1c734b0                   ; 00492880
    PUSH EDI                            ; 00492885 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492886 | = "Error parsing hasItem parameters." | s_Error_parsing_hasItem_pa_005bf69b+2
        ;   Label: LAB_00492886
    MOV byte ptr [EDI],AL               ; 00492888 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049288a
    JZ 0x0049289e                       ; 0049288c
        ;   XREF to: 0049289e (CONDITIONAL_JUMP)  ; LAB_0049289e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049288e | s_Error_parsing_hasItem_pa_005bf69b+1 | s_Error_parsing_hasItem_pa_005bf69b+3
    ADD ESI,0x2                         ; 00492891
    MOV byte ptr [EDI + 0x1],AL         ; 00492894 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492897
    CMP AL,0x0                          ; 0049289a
    JNZ 0x00492886                      ; 0049289c
        ;   XREF to: 00492886 (CONDITIONAL_JUMP)  ; LAB_00492886
    POP EDI                             ; 0049289e
        ;   Label: LAB_0049289e
    MOV EAX,0xffffffff                  ; 0049289f
    MOV ESP,EBP                         ; 004928a4
    POP EBP                             ; 004928a6
    POP EDI                             ; 004928a7
    POP ESI                             ; 004928a8
    POP EBX                             ; 004928a9
    RET                                 ; 004928aa
    DEC EDI                             ; 004928ab
        ;   Label: LAB_004928ab
    DEC EAX                             ; 004928ac
    TEST EDI,EDI                        ; 004928ad
    JG 0x004927f8                       ; 004928af
        ;   XREF to: 004927f8 (CONDITIONAL_JUMP)  ; LAB_004927f8
    JMP 0x00492810                      ; 004928b5
        ;   XREF to: 00492810 (UNCONDITIONAL_JUMP)  ; LAB_00492810
    MOV EAX,[0x01d5ba14]                ; 004928ba | DAT_01d5ba14
        ;   Label: LAB_004928ba
    SHL EAX,0x2                         ; 004928bf
    XOR ESI,ESI                         ; 004928c2
    MOV EDI,dword ptr [EAX + 0x1d5ba04] ; 004928c4
    MOV dword ptr [ESP + 0xfbc],ESI     ; 004928ca
    TEST EDI,EDI                        ; 004928d1
    JZ 0x004928fb                       ; 004928d3
        ;   XREF to: 004928fb (CONDITIONAL_JUMP)  ; LAB_004928fb
    LEA EDX,[ESP + 0xa20]               ; 004928d5
    PUSH EDX                            ; 004928dc
    LEA EAX,[EDI + 0x206e8]             ; 004928dd
    PUSH EAX                            ; 004928e3
    CALL core_inv.cpp_FUN_004db990      ; 004928e4
        ;   XREF to: 004db990 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004db990(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 004928e9
    TEST EAX,EAX                        ; 004928ec
    JZ 0x004928fb                       ; 004928ee
        ;   XREF to: 004928fb (CONDITIONAL_JUMP)  ; LAB_004928fb
    MOV dword ptr [ESP + 0xfbc],0x1     ; 004928f0
    MOV EAX,dword ptr [ESP + 0xfe8]     ; 004928fb
        ;   Label: LAB_004928fb
    ADD dword ptr [EBX],EAX             ; 00492902
    JMP 0x004923ec                      ; 00492904
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf6bd                       ; 00492909 | = "hasItemType"
        ;   Label: LAB_00492909
    LEA EAX,[ESP + 0xf38]               ; 0049290e
    PUSH EAX                            ; 00492915
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492916
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049291b
    TEST EAX,EAX                        ; 0049291e
    JNZ 0x00492af5                      ; 00492920
        ;   XREF to: 00492af5 (CONDITIONAL_JUMP)  ; LAB_00492af5
    LEA EAX,[ESP + 0x1048]              ; 00492926
    PUSH EAX                            ; 0049292d
    LEA EAX,[ESP + 0x6a0]               ; 0049292e
    MOV ECX,0xffffffff                  ; 00492935
    PUSH EAX                            ; 0049293a
    LEA EAX,[ESP + 0xa8c]               ; 0049293b
    MOV dword ptr [ESP + 0x1050],ECX    ; 00492942
    PUSH EAX                            ; 00492949
    MOV EAX,0x5bf6c9                    ; 0049294a | = " (%[^,], %[^)] )%n"
    MOV ESI,dword ptr [EBX]             ; 0049294f
    PUSH EAX                            ; 00492951 | = " (%[^,], %[^)] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492952
    ADD EAX,ESI                         ; 00492955
    PUSH EAX                            ; 00492957
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492958
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0049295d
    CMP dword ptr [ESP + 0x1048],0x5    ; 00492960
    JL 0x004929d1                       ; 00492968
        ;   XREF to: 004929d1 (CONDITIONAL_JUMP)  ; LAB_004929d1
    LEA ESI,[ESP + 0xa84]               ; 0049296a
    MOV EDI,ESI                         ; 00492971
    SUB ECX,ECX                         ; 00492973
    DEC ECX                             ; 00492975
    XOR EAX,EAX                         ; 00492976
    SCASB.REPNE ES:EDI                  ; 00492978
    NOT ECX                             ; 0049297a
    DEC ECX                             ; 0049297c
    MOV EDI,ECX                         ; 0049297d
    TEST ECX,ECX                        ; 0049297f
    JLE 0x0049299a                      ; 00492981
        ;   XREF to: 0049299a (CONDITIONAL_JUMP)  ; LAB_0049299a
    LEA EAX,[ECX + ESI*0x1]             ; 00492983
    MOV DL,byte ptr [EAX + -0x1]        ; 00492986
        ;   Label: LAB_00492986
    INC DL                              ; 00492989
    AND EDX,0xff                        ; 0049298b
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00492991 | DAT_006074b8
    JNZ 0x00492a01                      ; 00492998
        ;   XREF to: 00492a01 (CONDITIONAL_JUMP)  ; LAB_00492a01
    LEA EAX,[ESI + EDI*0x1]             ; 0049299a
        ;   Label: LAB_0049299a
    MOV byte ptr [EAX],0x0              ; 0049299d
    LEA EAX,[ESI + 0x1]                 ; 004929a0
    MOV dword ptr [ESP + 0xfec],EAX     ; 004929a3
    MOV AL,byte ptr [ESI]               ; 004929aa
        ;   Label: LAB_004929aa
    INC AL                              ; 004929ac
    AND EAX,0xff                        ; 004929ae
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004929b3 | DAT_006074b8
    JZ 0x00492a0d                       ; 004929ba
        ;   XREF to: 00492a0d (CONDITIONAL_JUMP)  ; LAB_00492a0d
    PUSH EDI                            ; 004929bc
    MOV EDX,dword ptr [ESP + 0xff0]     ; 004929bd
    PUSH EDX                            ; 004929c4
    PUSH ESI                            ; 004929c5
    DEC EDI                             ; 004929c6
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004929c7
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004929cc
    JMP 0x004929aa                      ; 004929cf
        ;   XREF to: 004929aa (UNCONDITIONAL_JUMP)  ; LAB_004929aa
    MOV ESI,0x5bf6dc                    ; 004929d1 | = "Error parsing hasItemType parameters."
        ;   Label: LAB_004929d1
    MOV EDI,0x1c734b0                   ; 004929d6
    PUSH EDI                            ; 004929db | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004929dc | = "Error parsing hasItemType parameters." | s_Error_parsing_hasItemTyp_005bf6dc+2
        ;   Label: LAB_004929dc
    MOV byte ptr [EDI],AL               ; 004929de | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004929e0
    JZ 0x004929f4                       ; 004929e2
        ;   XREF to: 004929f4 (CONDITIONAL_JUMP)  ; LAB_004929f4
    MOV AL,byte ptr [ESI + 0x1]         ; 004929e4 | s_Error_parsing_hasItemTyp_005bf6dc+1 | s_Error_parsing_hasItemTyp_005bf6dc+3
    ADD ESI,0x2                         ; 004929e7
    MOV byte ptr [EDI + 0x1],AL         ; 004929ea | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 004929ed
    CMP AL,0x0                          ; 004929f0
    JNZ 0x004929dc                      ; 004929f2
        ;   XREF to: 004929dc (CONDITIONAL_JUMP)  ; LAB_004929dc
    POP EDI                             ; 004929f4
        ;   Label: LAB_004929f4
    MOV EAX,0xffffffff                  ; 004929f5
        ;   Label: LAB_004929f5
    MOV ESP,EBP                         ; 004929fa
    POP EBP                             ; 004929fc
    POP EDI                             ; 004929fd
    POP ESI                             ; 004929fe
    POP EBX                             ; 004929ff
    RET                                 ; 00492a00
    DEC EDI                             ; 00492a01
        ;   Label: LAB_00492a01
    DEC EAX                             ; 00492a02
    TEST EDI,EDI                        ; 00492a03
    JG 0x00492986                       ; 00492a05
        ;   XREF to: 00492986 (CONDITIONAL_JUMP)  ; LAB_00492986
    JMP 0x0049299a                      ; 00492a0b
        ;   XREF to: 0049299a (UNCONDITIONAL_JUMP)  ; LAB_0049299a
    LEA EDI,[ESP + 0x69c]               ; 00492a0d
        ;   Label: LAB_00492a0d
    LEA ESI,[ESP + 0x69c]               ; 00492a14
    SUB ECX,ECX                         ; 00492a1b
    DEC ECX                             ; 00492a1d
    XOR EAX,EAX                         ; 00492a1e
    SCASB.REPNE ES:EDI                  ; 00492a20
    NOT ECX                             ; 00492a22
    DEC ECX                             ; 00492a24
    MOV EDI,ECX                         ; 00492a25
    TEST ECX,ECX                        ; 00492a27
    JLE 0x00492a48                      ; 00492a29
        ;   XREF to: 00492a48 (CONDITIONAL_JUMP)  ; LAB_00492a48
    LEA EAX,[ESP + 0x69c]               ; 00492a2b
    ADD EAX,ECX                         ; 00492a32
    MOV DL,byte ptr [EAX + -0x1]        ; 00492a34
        ;   Label: LAB_00492a34
    INC DL                              ; 00492a37
    AND EDX,0xff                        ; 00492a39
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00492a3f | DAT_006074b8
    JNZ 0x00492a7f                      ; 00492a46
        ;   XREF to: 00492a7f (CONDITIONAL_JUMP)  ; LAB_00492a7f
    LEA EAX,[ESI + EDI*0x1]             ; 00492a48
        ;   Label: LAB_00492a48
    MOV byte ptr [EAX],0x0              ; 00492a4b
    LEA EAX,[ESI + 0x1]                 ; 00492a4e
    MOV dword ptr [ESP + 0xff0],EAX     ; 00492a51
    MOV AL,byte ptr [ESI]               ; 00492a58
        ;   Label: LAB_00492a58
    INC AL                              ; 00492a5a
    AND EAX,0xff                        ; 00492a5c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00492a61 | DAT_006074b8
    JZ 0x00492a87                       ; 00492a68
        ;   XREF to: 00492a87 (CONDITIONAL_JUMP)  ; LAB_00492a87
    PUSH EDI                            ; 00492a6a
    MOV ECX,dword ptr [ESP + 0xff4]     ; 00492a6b
    PUSH ECX                            ; 00492a72
    PUSH ESI                            ; 00492a73
    DEC EDI                             ; 00492a74
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00492a75
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492a7a
    JMP 0x00492a58                      ; 00492a7d
        ;   XREF to: 00492a58 (UNCONDITIONAL_JUMP)  ; LAB_00492a58
    DEC EDI                             ; 00492a7f
        ;   Label: LAB_00492a7f
    DEC EAX                             ; 00492a80
    TEST EDI,EDI                        ; 00492a81
    JG 0x00492a34                       ; 00492a83
        ;   XREF to: 00492a34 (CONDITIONAL_JUMP)  ; LAB_00492a34
    JMP 0x00492a48                      ; 00492a85
        ;   XREF to: 00492a48 (UNCONDITIONAL_JUMP)  ; LAB_00492a48
    PUSH 0x1d5ba38                      ; 00492a87
        ;   Label: LAB_00492a87
    MOV ECX,dword ptr [0x01d5ba70]      ; 00492a8c | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 00492a92
    LEA EAX,[ESP + 0xa8c]               ; 00492a93
    PUSH EAX                            ; 00492a9a
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00492a9b
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00492aa0
    TEST EAX,EAX                        ; 00492aa3
    JZ 0x004929f5                       ; 00492aa5
        ;   XREF to: 004929f5 (CONDITIONAL_JUMP)  ; LAB_004929f5
    CMP EAX,dword ptr [0x005df604]      ; 00492aab | DAT_005df604
    JNZ 0x00492aca                      ; 00492ab1
        ;   XREF to: 00492aca (CONDITIONAL_JUMP)  ; LAB_00492aca
    XOR EDI,EDI                         ; 00492ab3
    MOV dword ptr [ESP + 0xfbc],EDI     ; 00492ab5
    MOV EAX,dword ptr [ESP + 0x1048]    ; 00492abc
    ADD dword ptr [EBX],EAX             ; 00492ac3
    JMP 0x004923ec                      ; 00492ac5
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    LEA EDX,[ESP + 0x69c]               ; 00492aca
        ;   Label: LAB_00492aca
    PUSH EDX                            ; 00492ad1
    ADD EAX,0x206e8                     ; 00492ad2
    PUSH EAX                            ; 00492ad7
    CALL core_inv.cpp_FUN_004dba80      ; 00492ad8
        ;   XREF to: 004dba80 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dba80()
    ADD ESP,0x8                         ; 00492add
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00492ae0
    MOV EAX,dword ptr [ESP + 0x1048]    ; 00492ae7
    ADD dword ptr [EBX],EAX             ; 00492aee
    JMP 0x004923ec                      ; 00492af0
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf702                       ; 00492af5 | = "hasKeyMask"
        ;   Label: LAB_00492af5
    LEA EAX,[ESP + 0xf38]               ; 00492afa
    PUSH EAX                            ; 00492b01
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492b02
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492b07
    TEST EAX,EAX                        ; 00492b0a
    JNZ 0x00492c86                      ; 00492b0c
        ;   XREF to: 00492c86 (CONDITIONAL_JUMP)  ; LAB_00492c86
    MOV EAX,[0x00603450]                ; 00492b12 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 00492b17 | g_CNetGameInstance
    JNZ 0x00492bc6                      ; 00492b1a
        ;   XREF to: 00492bc6 (CONDITIONAL_JUMP)  ; LAB_00492bc6
    LEA EAX,[ESP + 0xff4]               ; 00492b20
    MOV ECX,0xffffffff                  ; 00492b27
    PUSH EAX                            ; 00492b2c
    LEA EAX,[ESP + 0xffc]               ; 00492b2d
    MOV dword ptr [ESP + 0xff8],ECX     ; 00492b34
    PUSH EAX                            ; 00492b3b
    MOV EAX,0x5bf73c                    ; 00492b3c | = " ( %d )%n"
    MOV ESI,dword ptr [EBX]             ; 00492b41
    PUSH EAX                            ; 00492b43 | = " ( %d )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492b44
    ADD EAX,ESI                         ; 00492b47
    PUSH EAX                            ; 00492b49
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492b4a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00492b4f
    CMP dword ptr [ESP + 0xff4],0x3     ; 00492b52
    JL 0x00492bf6                       ; 00492b5a
        ;   XREF to: 00492bf6 (CONDITIONAL_JUMP)  ; LAB_00492bf6
    MOV EAX,dword ptr [ESP + 0xff8]     ; 00492b60
    TEST EAX,EAX                        ; 00492b67
    JZ 0x00492c26                       ; 00492b69
        ;   XREF to: 00492c26 (CONDITIONAL_JUMP)  ; LAB_00492c26
    MOV EDX,dword ptr [ESP + 0xff8]     ; 00492b6f
    DEC EAX                             ; 00492b76
    TEST EAX,EDX                        ; 00492b77
    JNZ 0x00492c56                      ; 00492b79
        ;   XREF to: 00492c56 (CONDITIONAL_JUMP)  ; LAB_00492c56
    MOV EAX,[0x01d5ba14]                ; 00492b7f | DAT_01d5ba14
    XOR ECX,ECX                         ; 00492b84
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00492b86
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00492b8d
    TEST ESI,ESI                        ; 00492b94
    JZ 0x00492bb8                       ; 00492b96
        ;   XREF to: 00492bb8 (CONDITIONAL_JUMP)  ; LAB_00492bb8
    PUSH ECX                            ; 00492b98
    PUSH EDX                            ; 00492b99
    LEA EAX,[ESI + 0x206e8]             ; 00492b9a
    PUSH EAX                            ; 00492ba0
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004de610 ; 00492ba1
        ;   XREF to: 004de610 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004de610(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 00492ba6
    TEST EAX,EAX                        ; 00492ba9
    JZ 0x00492bb8                       ; 00492bab
        ;   XREF to: 00492bb8 (CONDITIONAL_JUMP)  ; LAB_00492bb8
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00492bad
    MOV EAX,dword ptr [ESP + 0xff4]     ; 00492bb8
        ;   Label: LAB_00492bb8
    ADD dword ptr [EBX],EAX             ; 00492bbf
    JMP 0x004923ec                      ; 00492bc1
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bf70d                    ; 00492bc6 | = "Can't use hasKeyMask condition in mul..."
        ;   Label: LAB_00492bc6
    MOV EDI,0x1c734b0                   ; 00492bcb
    PUSH EDI                            ; 00492bd0 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492bd1 | = "Can't use hasKeyMask condition in mul..." | s_Can_t_use_hasKeyMask_con_005bf70d+2
        ;   Label: LAB_00492bd1
    MOV byte ptr [EDI],AL               ; 00492bd3 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492bd5
    JZ 0x00492be9                       ; 00492bd7
        ;   XREF to: 00492be9 (CONDITIONAL_JUMP)  ; LAB_00492be9
    MOV AL,byte ptr [ESI + 0x1]         ; 00492bd9 | s_Can_t_use_hasKeyMask_con_005bf70d+1 | s_Can_t_use_hasKeyMask_con_005bf70d+3
    ADD ESI,0x2                         ; 00492bdc
    MOV byte ptr [EDI + 0x1],AL         ; 00492bdf | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492be2
    CMP AL,0x0                          ; 00492be5
    JNZ 0x00492bd1                      ; 00492be7
        ;   XREF to: 00492bd1 (CONDITIONAL_JUMP)  ; LAB_00492bd1
    POP EDI                             ; 00492be9
        ;   Label: LAB_00492be9
    MOV EAX,0xffffffff                  ; 00492bea
    MOV ESP,EBP                         ; 00492bef
    POP EBP                             ; 00492bf1
    POP EDI                             ; 00492bf2
    POP ESI                             ; 00492bf3
    POP EBX                             ; 00492bf4
    RET                                 ; 00492bf5
    MOV ESI,0x5bf746                    ; 00492bf6 | = "Error parsing hasKeyMask parameters."
        ;   Label: LAB_00492bf6
    MOV EDI,0x1c734b0                   ; 00492bfb
    PUSH EDI                            ; 00492c00 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492c01 | = "Error parsing hasKeyMask parameters." | s_Error_parsing_hasKeyMask_005bf746+2
        ;   Label: LAB_00492c01
    MOV byte ptr [EDI],AL               ; 00492c03 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492c05
    JZ 0x00492c19                       ; 00492c07
        ;   XREF to: 00492c19 (CONDITIONAL_JUMP)  ; LAB_00492c19
    MOV AL,byte ptr [ESI + 0x1]         ; 00492c09 | s_Error_parsing_hasKeyMask_005bf746+1 | s_Error_parsing_hasKeyMask_005bf746+3
    ADD ESI,0x2                         ; 00492c0c
    MOV byte ptr [EDI + 0x1],AL         ; 00492c0f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492c12
    CMP AL,0x0                          ; 00492c15
    JNZ 0x00492c01                      ; 00492c17
        ;   XREF to: 00492c01 (CONDITIONAL_JUMP)  ; LAB_00492c01
    POP EDI                             ; 00492c19
        ;   Label: LAB_00492c19
    MOV EAX,0xffffffff                  ; 00492c1a
    MOV ESP,EBP                         ; 00492c1f
    POP EBP                             ; 00492c21
    POP EDI                             ; 00492c22
    POP ESI                             ; 00492c23
    POP EBX                             ; 00492c24
    RET                                 ; 00492c25
    MOV ESI,0x5bf76b                    ; 00492c26 | = "hasKeyMask(0) always returns false!"
        ;   Label: LAB_00492c26
    MOV EDI,0x1c734b0                   ; 00492c2b
    PUSH EDI                            ; 00492c30 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492c31 | = "hasKeyMask(0) always returns false!" | s_hasKeyMask_0_always_retu_005bf76b+2
        ;   Label: LAB_00492c31
    MOV byte ptr [EDI],AL               ; 00492c33 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492c35
    JZ 0x00492c49                       ; 00492c37
        ;   XREF to: 00492c49 (CONDITIONAL_JUMP)  ; LAB_00492c49
    MOV AL,byte ptr [ESI + 0x1]         ; 00492c39 | s_hasKeyMask_0_always_retu_005bf76b+1 | s_hasKeyMask_0_always_retu_005bf76b+3
    ADD ESI,0x2                         ; 00492c3c
    MOV byte ptr [EDI + 0x1],AL         ; 00492c3f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492c42
    CMP AL,0x0                          ; 00492c45
    JNZ 0x00492c31                      ; 00492c47
        ;   XREF to: 00492c31 (CONDITIONAL_JUMP)  ; LAB_00492c31
    POP EDI                             ; 00492c49
        ;   Label: LAB_00492c49
    MOV EAX,0xffffffff                  ; 00492c4a
    MOV ESP,EBP                         ; 00492c4f
    POP EBP                             ; 00492c51
    POP EDI                             ; 00492c52
    POP ESI                             ; 00492c53
    POP EBX                             ; 00492c54
    RET                                 ; 00492c55
    MOV ESI,0x5bf78f                    ; 00492c56 | = "mask value must be a power of 2.\n(To..."
        ;   Label: LAB_00492c56
    MOV EDI,0x1c734b0                   ; 00492c5b
    PUSH EDI                            ; 00492c60 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492c61 | = "mask value must be a power of 2.\n(To..." | s_mask_value_must_be_a_pow_005bf78f+2
        ;   Label: LAB_00492c61
    MOV byte ptr [EDI],AL               ; 00492c63 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492c65
    JZ 0x00492c79                       ; 00492c67
        ;   XREF to: 00492c79 (CONDITIONAL_JUMP)  ; LAB_00492c79
    MOV AL,byte ptr [ESI + 0x1]         ; 00492c69 | s_mask_value_must_be_a_pow_005bf78f+1 | s_mask_value_must_be_a_pow_005bf78f+3
    ADD ESI,0x2                         ; 00492c6c
    MOV byte ptr [EDI + 0x1],AL         ; 00492c6f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492c72
    CMP AL,0x0                          ; 00492c75
    JNZ 0x00492c61                      ; 00492c77
        ;   XREF to: 00492c61 (CONDITIONAL_JUMP)  ; LAB_00492c61
    POP EDI                             ; 00492c79
        ;   Label: LAB_00492c79
    MOV EAX,0xffffffff                  ; 00492c7a
    MOV ESP,EBP                         ; 00492c7f
    POP EBP                             ; 00492c81
    POP EDI                             ; 00492c82
    POP ESI                             ; 00492c83
    POP EBX                             ; 00492c84
    RET                                 ; 00492c85
    PUSH 0x5bf7ed                       ; 00492c86 | = "isBroken"
        ;   Label: LAB_00492c86
    LEA EAX,[ESP + 0xf38]               ; 00492c8b
    PUSH EAX                            ; 00492c92
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492c93
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492c98
    TEST EAX,EAX                        ; 00492c9b
    JNZ 0x00492de5                      ; 00492c9d
        ;   XREF to: 00492de5 (CONDITIONAL_JUMP)  ; LAB_00492de5
    LEA EAX,[ESP + 0xffc]               ; 00492ca3
    MOV ESI,0xffffffff                  ; 00492caa
    PUSH EAX                            ; 00492caf
    LEA EAX,[ESP + 0x704]               ; 00492cb0
    MOV dword ptr [ESP + 0x1000],ESI    ; 00492cb7
    PUSH EAX                            ; 00492cbe
    MOV EAX,0x5bf7f6                    ; 00492cbf | = " (%[^)])%n"
    MOV EDI,dword ptr [EBX]             ; 00492cc4
    PUSH EAX                            ; 00492cc6 | = " (%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492cc7
    ADD EAX,EDI                         ; 00492cca
    PUSH EAX                            ; 00492ccc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492ccd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00492cd2
    CMP dword ptr [ESP + 0xffc],0x3     ; 00492cd5
    JL 0x00492d46                       ; 00492cdd
        ;   XREF to: 00492d46 (CONDITIONAL_JUMP)  ; LAB_00492d46
    LEA ESI,[ESP + 0x700]               ; 00492cdf
    MOV EDI,ESI                         ; 00492ce6
    SUB ECX,ECX                         ; 00492ce8
    DEC ECX                             ; 00492cea
    XOR EAX,EAX                         ; 00492ceb
    SCASB.REPNE ES:EDI                  ; 00492ced
    NOT ECX                             ; 00492cef
    DEC ECX                             ; 00492cf1
    MOV EDI,ECX                         ; 00492cf2
    TEST ECX,ECX                        ; 00492cf4
    JLE 0x00492d0f                      ; 00492cf6
        ;   XREF to: 00492d0f (CONDITIONAL_JUMP)  ; LAB_00492d0f
    LEA EAX,[ECX + ESI*0x1]             ; 00492cf8
    MOV DL,byte ptr [EAX + -0x1]        ; 00492cfb
        ;   Label: LAB_00492cfb
    INC DL                              ; 00492cfe
    AND EDX,0xff                        ; 00492d00
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00492d06 | DAT_006074b8
    JNZ 0x00492d76                      ; 00492d0d
        ;   XREF to: 00492d76 (CONDITIONAL_JUMP)  ; LAB_00492d76
    LEA EAX,[ESI + EDI*0x1]             ; 00492d0f
        ;   Label: LAB_00492d0f
    MOV byte ptr [EAX],0x0              ; 00492d12
    LEA EAX,[ESI + 0x1]                 ; 00492d15
    MOV dword ptr [ESP + 0x1000],EAX    ; 00492d18
    MOV AL,byte ptr [ESI]               ; 00492d1f
        ;   Label: LAB_00492d1f
    INC AL                              ; 00492d21
    AND EAX,0xff                        ; 00492d23
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00492d28 | DAT_006074b8
    JZ 0x00492d82                       ; 00492d2f
        ;   XREF to: 00492d82 (CONDITIONAL_JUMP)  ; LAB_00492d82
    PUSH EDI                            ; 00492d31
    MOV EAX,dword ptr [ESP + 0x1004]    ; 00492d32
    PUSH EAX                            ; 00492d39
    PUSH ESI                            ; 00492d3a
    DEC EDI                             ; 00492d3b
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00492d3c
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492d41
    JMP 0x00492d1f                      ; 00492d44
        ;   XREF to: 00492d1f (UNCONDITIONAL_JUMP)  ; LAB_00492d1f
    MOV ESI,0x5bf801                    ; 00492d46 | = "Error parsing isBroken parameters."
        ;   Label: LAB_00492d46
    MOV EDI,0x1c734b0                   ; 00492d4b
    PUSH EDI                            ; 00492d50 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492d51 | = "Error parsing isBroken parameters." | s_Error_parsing_isBroken_p_005bf801+2
        ;   Label: LAB_00492d51
    MOV byte ptr [EDI],AL               ; 00492d53 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492d55
    JZ 0x00492d69                       ; 00492d57
        ;   XREF to: 00492d69 (CONDITIONAL_JUMP)  ; LAB_00492d69
    MOV AL,byte ptr [ESI + 0x1]         ; 00492d59 | s_Error_parsing_isBroken_p_005bf801+1 | s_Error_parsing_isBroken_p_005bf801+3
    ADD ESI,0x2                         ; 00492d5c
    MOV byte ptr [EDI + 0x1],AL         ; 00492d5f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492d62
    CMP AL,0x0                          ; 00492d65
    JNZ 0x00492d51                      ; 00492d67
        ;   XREF to: 00492d51 (CONDITIONAL_JUMP)  ; LAB_00492d51
    POP EDI                             ; 00492d69
        ;   Label: LAB_00492d69
    MOV EAX,0xffffffff                  ; 00492d6a
        ;   Label: LAB_00492d6a
    MOV ESP,EBP                         ; 00492d6f
    POP EBP                             ; 00492d71
    POP EDI                             ; 00492d72
    POP ESI                             ; 00492d73
    POP EBX                             ; 00492d74
    RET                                 ; 00492d75
    DEC EDI                             ; 00492d76
        ;   Label: LAB_00492d76
    DEC EAX                             ; 00492d77
    TEST EDI,EDI                        ; 00492d78
    JG 0x00492cfb                       ; 00492d7a
        ;   XREF to: 00492cfb (CONDITIONAL_JUMP)  ; LAB_00492cfb
    JMP 0x00492d0f                      ; 00492d80
        ;   XREF to: 00492d0f (UNCONDITIONAL_JUMP)  ; LAB_00492d0f
    PUSH 0x1d22dcc                      ; 00492d82
        ;   Label: LAB_00492d82
    MOV ESI,dword ptr [0x01d22e04]      ; 00492d87 | g_CGlassClassInfo.name_hash
    PUSH ESI                            ; 00492d8d
    LEA EAX,[ESP + 0x708]               ; 00492d8e
    PUSH EAX                            ; 00492d95
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00492d96
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00492d9b
    TEST EAX,EAX                        ; 00492d9e
    JZ 0x00492d6a                       ; 00492da0
        ;   XREF to: 00492d6a (CONDITIONAL_JUMP)  ; LAB_00492d6a
    CMP EAX,dword ptr [0x005df604]      ; 00492da2 | DAT_005df604
    JNZ 0x00492dc1                      ; 00492da8
        ;   XREF to: 00492dc1 (CONDITIONAL_JUMP)  ; LAB_00492dc1
    XOR ECX,ECX                         ; 00492daa
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00492dac
    MOV EAX,dword ptr [ESP + 0xffc]     ; 00492db3
    ADD dword ptr [EBX],EAX             ; 00492dba
    JMP 0x004923ec                      ; 00492dbc
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    CMP dword ptr [EAX + 0x1b0],0x0     ; 00492dc1
        ;   Label: LAB_00492dc1
    SETNZ AL                            ; 00492dc8
    AND EAX,0xff                        ; 00492dcb
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00492dd0
    MOV EAX,dword ptr [ESP + 0xffc]     ; 00492dd7
    ADD dword ptr [EBX],EAX             ; 00492dde
    JMP 0x004923ec                      ; 00492de0
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf824                       ; 00492de5 | = "isCurrentCamera"
        ;   Label: LAB_00492de5
    LEA EAX,[ESP + 0xf38]               ; 00492dea
    PUSH EAX                            ; 00492df1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492df2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492df7
    TEST EAX,EAX                        ; 00492dfa
    JNZ 0x00492ec5                      ; 00492dfc
        ;   XREF to: 00492ec5 (CONDITIONAL_JUMP)  ; LAB_00492ec5
    LEA EAX,[ESP + 0x1004]              ; 00492e02
    MOV ECX,0xffffffff                  ; 00492e09
    PUSH EAX                            ; 00492e0e
    LEA EAX,[ESP + 0xbb4]               ; 00492e0f
    MOV dword ptr [ESP + 0x1008],ECX    ; 00492e16
    PUSH EAX                            ; 00492e1d
    MOV EAX,0x5bf834                    ; 00492e1e | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 00492e23
    PUSH EAX                            ; 00492e25 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492e26
    ADD EAX,ESI                         ; 00492e29
    PUSH EAX                            ; 00492e2b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492e2c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00492e31
    CMP dword ptr [ESP + 0x1004],0x3    ; 00492e34
    JL 0x00492e95                       ; 00492e3c
        ;   XREF to: 00492e95 (CONDITIONAL_JUMP)  ; LAB_00492e95
    XOR EAX,EAX                         ; 00492e3e
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00492e40
    MOV EAX,[0x00603b28]                ; 00492e47 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 00492e4c | g_CDemonSetInstance.selected_camera_index
    TEST EAX,EAX                        ; 00492e52
    JL 0x00492e87                       ; 00492e54
        ;   XREF to: 00492e87 (CONDITIONAL_JUMP)  ; LAB_00492e87
    IMUL EAX,EAX,0x1a4                  ; 00492e56
    LEA EDX,[ESP + 0xbb0]               ; 00492e5c
    PUSH EDX                            ; 00492e63
    MOV EDX,dword ptr [0x00603b28]      ; 00492e64 | g_CDemonSetPtr
    ADD EDX,0x4                         ; 00492e6a
    ADD EAX,EDX                         ; 00492e6d
    PUSH EAX                            ; 00492e6f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492e70
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492e75
    TEST EAX,EAX                        ; 00492e78
    JNZ 0x00492e87                      ; 00492e7a
        ;   XREF to: 00492e87 (CONDITIONAL_JUMP)  ; LAB_00492e87
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00492e7c
    MOV EAX,dword ptr [ESP + 0x1004]    ; 00492e87
        ;   Label: LAB_00492e87
    ADD dword ptr [EBX],EAX             ; 00492e8e
    JMP 0x004923ec                      ; 00492e90
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bf842                    ; 00492e95 | = "Error parsing isCurrentCamera paramet..."
        ;   Label: LAB_00492e95
    MOV EDI,0x1c734b0                   ; 00492e9a
    PUSH EDI                            ; 00492e9f | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492ea0 | = "Error parsing isCurrentCamera paramet..." | s_Error_parsing_isCurrentC_005bf842+2
        ;   Label: LAB_00492ea0
    MOV byte ptr [EDI],AL               ; 00492ea2 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492ea4
    JZ 0x00492eb8                       ; 00492ea6
        ;   XREF to: 00492eb8 (CONDITIONAL_JUMP)  ; LAB_00492eb8
    MOV AL,byte ptr [ESI + 0x1]         ; 00492ea8 | s_Error_parsing_isCurrentC_005bf842+1 | s_Error_parsing_isCurrentC_005bf842+3
    ADD ESI,0x2                         ; 00492eab
    MOV byte ptr [EDI + 0x1],AL         ; 00492eae | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492eb1
    CMP AL,0x0                          ; 00492eb4
    JNZ 0x00492ea0                      ; 00492eb6
        ;   XREF to: 00492ea0 (CONDITIONAL_JUMP)  ; LAB_00492ea0
    POP EDI                             ; 00492eb8
        ;   Label: LAB_00492eb8
    MOV EAX,0xffffffff                  ; 00492eb9
    MOV ESP,EBP                         ; 00492ebe
    POP EBP                             ; 00492ec0
    POP EDI                             ; 00492ec1
    POP ESI                             ; 00492ec2
    POP EBX                             ; 00492ec3
    RET                                 ; 00492ec4
    PUSH 0x5bf86c                       ; 00492ec5 | = "isCurrentSet"
        ;   Label: LAB_00492ec5
    LEA EAX,[ESP + 0xf38]               ; 00492eca
    PUSH EAX                            ; 00492ed1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492ed2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492ed7
    TEST EAX,EAX                        ; 00492eda
    JNZ 0x00492fd8                      ; 00492edc
        ;   XREF to: 00492fd8 (CONDITIONAL_JUMP)  ; LAB_00492fd8
    MOV dword ptr [ESP + 0x1008],0xffffffff ; 00492ee2
    LEA EAX,[ESP + 0x1008]              ; 00492eed
    PUSH EAX                            ; 00492ef4
    LEA EAX,[ESP + 0x8f8]               ; 00492ef5
    PUSH EAX                            ; 00492efc
    MOV EAX,0x5bf879                    ; 00492efd | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 00492f02
    PUSH EAX                            ; 00492f04 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00492f05
    ADD EAX,EDX                         ; 00492f08
    PUSH EAX                            ; 00492f0a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00492f0b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00492f10
    CMP dword ptr [ESP + 0x1008],0x3    ; 00492f13
    JL 0x00492fa8                       ; 00492f1b
        ;   XREF to: 00492fa8 (CONDITIONAL_JUMP)  ; LAB_00492fa8
    MOV EAX,[0x00600530]                ; 00492f21 | DAT_00600530
    XOR ESI,ESI                         ; 00492f26
    MOV EDI,dword ptr [EAX]             ; 00492f28 | DAT_01d81080
    MOV dword ptr [ESP + 0xfbc],ESI     ; 00492f2a
    TEST EDI,EDI                        ; 00492f31
    JL 0x00492f9a                       ; 00492f33
        ;   XREF to: 00492f9a (CONDITIONAL_JUMP)  ; LAB_00492f9a
    PUSH ESI                            ; 00492f35
    LEA EAX,[ESP + 0x410]               ; 00492f36
    PUSH EAX                            ; 00492f3d
    PUSH ESI                            ; 00492f3e
    PUSH ESI                            ; 00492f3f
    LEA EAX,[ESP + 0x904]               ; 00492f40
    PUSH EAX                            ; 00492f47
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00492f48
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00492f4d
    PUSH ESI                            ; 00492f50
    LEA EAX,[ESP + 0x110]               ; 00492f51
    PUSH EAX                            ; 00492f58
    MOV EAX,[0x00600530]                ; 00492f59 | DAT_00600530
    PUSH ESI                            ; 00492f5e
    MOV EDX,dword ptr [EAX]             ; 00492f5f | DAT_01d81080
    ADD EAX,0x8                         ; 00492f61
    SHL EDX,0x8                         ; 00492f64
    PUSH ESI                            ; 00492f67
    ADD EAX,EDX                         ; 00492f68
    PUSH EAX                            ; 00492f6a
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00492f6b
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00492f70
    LEA EAX,[ESP + 0x10c]               ; 00492f73
    PUSH EAX                            ; 00492f7a
    LEA EAX,[ESP + 0x410]               ; 00492f7b
    PUSH EAX                            ; 00492f82
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492f83
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492f88
    TEST EAX,EAX                        ; 00492f8b
    JNZ 0x00492f9a                      ; 00492f8d
        ;   XREF to: 00492f9a (CONDITIONAL_JUMP)  ; LAB_00492f9a
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00492f8f
    MOV EAX,dword ptr [ESP + 0x1008]    ; 00492f9a
        ;   Label: LAB_00492f9a
    ADD dword ptr [EBX],EAX             ; 00492fa1
    JMP 0x004923ec                      ; 00492fa3
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bf887                    ; 00492fa8 | = "Error parsing isCurrentSet parameters."
        ;   Label: LAB_00492fa8
    MOV EDI,0x1c734b0                   ; 00492fad
    PUSH EDI                            ; 00492fb2 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00492fb3 | = "Error parsing isCurrentSet parameters." | s_Error_parsing_isCurrentS_005bf887+2
        ;   Label: LAB_00492fb3
    MOV byte ptr [EDI],AL               ; 00492fb5 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00492fb7
    JZ 0x00492fcb                       ; 00492fb9
        ;   XREF to: 00492fcb (CONDITIONAL_JUMP)  ; LAB_00492fcb
    MOV AL,byte ptr [ESI + 0x1]         ; 00492fbb | s_Error_parsing_isCurrentS_005bf887+1 | s_Error_parsing_isCurrentS_005bf887+3
    ADD ESI,0x2                         ; 00492fbe
    MOV byte ptr [EDI + 0x1],AL         ; 00492fc1 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00492fc4
    CMP AL,0x0                          ; 00492fc7
    JNZ 0x00492fb3                      ; 00492fc9
        ;   XREF to: 00492fb3 (CONDITIONAL_JUMP)  ; LAB_00492fb3
    POP EDI                             ; 00492fcb
        ;   Label: LAB_00492fcb
    MOV EAX,0xffffffff                  ; 00492fcc
    MOV ESP,EBP                         ; 00492fd1
    POP EBP                             ; 00492fd3
    POP EDI                             ; 00492fd4
    POP ESI                             ; 00492fd5
    POP EBX                             ; 00492fd6
    RET                                 ; 00492fd7
    PUSH 0x5bf8ae                       ; 00492fd8 | = "isDead"
        ;   Label: LAB_00492fd8
    LEA EAX,[ESP + 0xf38]               ; 00492fdd
    PUSH EAX                            ; 00492fe4
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00492fe5
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00492fea
    TEST EAX,EAX                        ; 00492fed
    JNZ 0x004930dd                      ; 00492fef
        ;   XREF to: 004930dd (CONDITIONAL_JUMP)  ; LAB_004930dd
    LEA EAX,[ESP + 0x100c]              ; 00492ff5
    MOV ESI,0xffffffff                  ; 00492ffc
    PUSH EAX                            ; 00493001
    LEA EAX,[ESP + 0x894]               ; 00493002
    MOV dword ptr [ESP + 0x1010],ESI    ; 00493009
    PUSH EAX                            ; 00493010
    MOV EAX,0x5bf8b5                    ; 00493011 | = " ( %[^ )] )%n"
    MOV EDI,dword ptr [EBX]             ; 00493016
    PUSH EAX                            ; 00493018 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493019
    ADD EAX,EDI                         ; 0049301c
    PUSH EAX                            ; 0049301e
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049301f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493024
    CMP dword ptr [ESP + 0x100c],0x3    ; 00493027
    JL 0x00493071                       ; 0049302f
        ;   XREF to: 00493071 (CONDITIONAL_JUMP)  ; LAB_00493071
    MOV EAX,0x7e2cb4                    ; 00493031 | g_CCharacterClassInfo
    PUSH EAX                            ; 00493036 | g_CCharacterClassInfo
    MOV EDX,dword ptr [0x007e2cec]      ; 00493037 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0049303d
    LEA EAX,[ESP + 0x898]               ; 0049303e
    PUSH EAX                            ; 00493045
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493046
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 0049304b
    TEST EAX,EAX                        ; 0049304e
    JZ 0x004930a1                       ; 00493050
        ;   XREF to: 004930a1 (CONDITIONAL_JUMP)  ; LAB_004930a1
    CMP EAX,dword ptr [0x005df604]      ; 00493052 | DAT_005df604
    JNZ 0x004930ad                      ; 00493058
        ;   XREF to: 004930ad (CONDITIONAL_JUMP)  ; LAB_004930ad
    XOR ESI,ESI                         ; 0049305a
    MOV dword ptr [ESP + 0xfbc],ESI     ; 0049305c
    MOV EAX,dword ptr [ESP + 0x100c]    ; 00493063
    ADD dword ptr [EBX],EAX             ; 0049306a
    JMP 0x004923ec                      ; 0049306c
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bf8c3                    ; 00493071 | = "Error parsing isDead parameters."
        ;   Label: LAB_00493071
    MOV EDI,0x1c734b0                   ; 00493076
    PUSH EDI                            ; 0049307b | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0049307c | = "Error parsing isDead parameters." | s_Error_parsing_isDead_par_005bf8c3+2
        ;   Label: LAB_0049307c
    MOV byte ptr [EDI],AL               ; 0049307e | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493080
    JZ 0x00493094                       ; 00493082
        ;   XREF to: 00493094 (CONDITIONAL_JUMP)  ; LAB_00493094
    MOV AL,byte ptr [ESI + 0x1]         ; 00493084 | s_Error_parsing_isDead_par_005bf8c3+1 | s_Error_parsing_isDead_par_005bf8c3+3
    ADD ESI,0x2                         ; 00493087
    MOV byte ptr [EDI + 0x1],AL         ; 0049308a | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0049308d
    CMP AL,0x0                          ; 00493090
    JNZ 0x0049307c                      ; 00493092
        ;   XREF to: 0049307c (CONDITIONAL_JUMP)  ; LAB_0049307c
    POP EDI                             ; 00493094
        ;   Label: LAB_00493094
    MOV EAX,0xffffffff                  ; 00493095
    MOV ESP,EBP                         ; 0049309a
    POP EBP                             ; 0049309c
    POP EDI                             ; 0049309d
    POP ESI                             ; 0049309e
    POP EBX                             ; 0049309f
    RET                                 ; 004930a0
    MOV EAX,0x1                         ; 004930a1
        ;   Label: LAB_004930a1
    MOV ESP,EBP                         ; 004930a6
    POP EBP                             ; 004930a8
    POP EDI                             ; 004930a9
    POP ESI                             ; 004930aa
    POP EBX                             ; 004930ab
    RET                                 ; 004930ac
    PUSH EAX                            ; 004930ad
        ;   Label: LAB_004930ad
    MOV EDX,dword ptr [EAX + 0x154]     ; 004930ae
    CALL dword ptr [EDX + 0x10c]        ; 004930b4
    ADD ESP,0x4                         ; 004930ba
    CMP EAX,0x1                         ; 004930bd
    SETG AL                             ; 004930c0
    AND EAX,0xff                        ; 004930c3
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004930c8
    MOV EAX,dword ptr [ESP + 0x100c]    ; 004930cf
    ADD dword ptr [EBX],EAX             ; 004930d6
    JMP 0x004923ec                      ; 004930d8
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf8e4                       ; 004930dd | = "isFadeFinished"
        ;   Label: LAB_004930dd
    LEA EAX,[ESP + 0xf38]               ; 004930e2
    PUSH EAX                            ; 004930e9
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004930ea
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004930ef
    TEST EAX,EAX                        ; 004930f2
    JNZ 0x0049317a                      ; 004930f4
        ;   XREF to: 0049317a (CONDITIONAL_JUMP)  ; LAB_0049317a
    MOV ESI,0xffffffff                  ; 004930fa
    LEA EAX,[ESP + 0x1010]              ; 004930ff
    MOV dword ptr [ESP + 0x1010],ESI    ; 00493106
    PUSH EAX                            ; 0049310d
    MOV EAX,0x5bf8f3                    ; 0049310e | = " ( )%n"
    MOV EDI,dword ptr [EBX]             ; 00493113
    PUSH EAX                            ; 00493115 | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493116
    ADD EAX,EDI                         ; 00493119
    PUSH EAX                            ; 0049311b
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049311c
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00493121
    MOV EAX,dword ptr [ESP + 0x1010]    ; 00493124
    CMP EAX,0x2                         ; 0049312b
    JL 0x0049314a                       ; 0049312e
        ;   XREF to: 0049314a (CONDITIONAL_JUMP)  ; LAB_0049314a
    MOV EDX,dword ptr [EBX]             ; 00493130
    MOV ECX,dword ptr [0x005fe9dc]      ; 00493132 | g_CGamePtr
    ADD EDX,EAX                         ; 00493138
    PUSH ECX                            ; 0049313a
    MOV dword ptr [EBX],EDX             ; 0049313b
    CALL core_game.cpp_CGame_fadeIn_FUN_004bd8d0 ; 0049313d
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004bd8d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00493142
    JMP 0x004923e5                      ; 00493145
        ;   XREF to: 004923e5 (UNCONDITIONAL_JUMP)  ; LAB_004923e5
    MOV ESI,0x5bf8fa                    ; 0049314a | = "Error parsing isFadeFinished function."
        ;   Label: LAB_0049314a
    MOV EDI,0x1c734b0                   ; 0049314f
    PUSH EDI                            ; 00493154 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493155 | = "Error parsing isFadeFinished function." | s_Error_parsing_isFadeFini_005bf8fa+2
        ;   Label: LAB_00493155
    MOV byte ptr [EDI],AL               ; 00493157 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493159
    JZ 0x0049316d                       ; 0049315b
        ;   XREF to: 0049316d (CONDITIONAL_JUMP)  ; LAB_0049316d
    MOV AL,byte ptr [ESI + 0x1]         ; 0049315d | s_Error_parsing_isFadeFini_005bf8fa+1 | s_Error_parsing_isFadeFini_005bf8fa+3
    ADD ESI,0x2                         ; 00493160
    MOV byte ptr [EDI + 0x1],AL         ; 00493163 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493166
    CMP AL,0x0                          ; 00493169
    JNZ 0x00493155                      ; 0049316b
        ;   XREF to: 00493155 (CONDITIONAL_JUMP)  ; LAB_00493155
    POP EDI                             ; 0049316d
        ;   Label: LAB_0049316d
    MOV EAX,0xffffffff                  ; 0049316e
    MOV ESP,EBP                         ; 00493173
    POP EBP                             ; 00493175
    POP EDI                             ; 00493176
    POP ESI                             ; 00493177
    POP EBX                             ; 00493178
    RET                                 ; 00493179
    PUSH 0x5bf921                       ; 0049317a | = "isInRange"
        ;   Label: LAB_0049317a
    LEA EAX,[ESP + 0xf38]               ; 0049317f
    PUSH EAX                            ; 00493186
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493187
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049318c
    TEST EAX,EAX                        ; 0049318f
    JNZ 0x00493394                      ; 00493191
        ;   XREF to: 00493394 (CONDITIONAL_JUMP)  ; LAB_00493394
    MOV EDI,0xffffffff                  ; 00493197
    LEA EAX,[ESP + 0x1014]              ; 0049319c
    MOV dword ptr [ESP + 0x1014],EDI    ; 004931a3
    PUSH EAX                            ; 004931aa
    MOV EAX,0x5bf92b                    ; 004931ab | = " ( %n"
    MOV EDX,dword ptr [EBX]             ; 004931b0
    PUSH EAX                            ; 004931b2 | = " ( %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004931b3
    ADD EAX,EDX                         ; 004931b6
    PUSH EAX                            ; 004931b8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004931b9
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 004931be
    MOV ECX,dword ptr [ESP + 0x1014]    ; 004931c1
    CMP ECX,0x1                         ; 004931c8
    JL 0x004931fa                       ; 004931cb
        ;   XREF to: 004931fa (CONDITIONAL_JUMP)  ; LAB_004931fa
    LEA EAX,[ESP + 0xf80]               ; 004931cd
    PUSH EAX                            ; 004931d4
    MOV ESI,dword ptr [EBX]             ; 004931d5
    PUSH EBX                            ; 004931d7
    MOV EDI,dword ptr [EBP + 0x18]      ; 004931d8
    ADD ESI,ECX                         ; 004931db
    PUSH EDI                            ; 004931dd
    MOV dword ptr [EBX],ESI             ; 004931de
    CALL core_event.cpp_parseVectorLocation_FUN_0048ba80 ; 004931e0
        ;   XREF to: 0048ba80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseVectorLocation_FUN_0048ba80(char * buffer, int * offset, CVector3f * out_position)
    ADD ESP,0xc                         ; 004931e5
    MOV EDI,EAX                         ; 004931e8
    TEST EAX,EAX                        ; 004931ea
    JGE 0x0049322a                      ; 004931ec
        ;   XREF to: 0049322a (CONDITIONAL_JUMP)  ; LAB_0049322a
    MOV EAX,0xffffffff                  ; 004931ee
    MOV ESP,EBP                         ; 004931f3
    POP EBP                             ; 004931f5
    POP EDI                             ; 004931f6
    POP ESI                             ; 004931f7
    POP EBX                             ; 004931f8
    RET                                 ; 004931f9
    MOV ESI,0x5bf931                    ; 004931fa | = "Error parsing isInRange parameters."
        ;   Label: LAB_004931fa
    MOV EDI,0x1c734b0                   ; 004931ff
    PUSH EDI                            ; 00493204 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493205 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005bf931+2
        ;   Label: LAB_00493205
    MOV byte ptr [EDI],AL               ; 00493207 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493209
    JZ 0x0049321d                       ; 0049320b
        ;   XREF to: 0049321d (CONDITIONAL_JUMP)  ; LAB_0049321d
    MOV AL,byte ptr [ESI + 0x1]         ; 0049320d | s_Error_parsing_isInRange_005bf931+1 | s_Error_parsing_isInRange_005bf931+3
    ADD ESI,0x2                         ; 00493210
    MOV byte ptr [EDI + 0x1],AL         ; 00493213 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493216
    CMP AL,0x0                          ; 00493219
    JNZ 0x00493205                      ; 0049321b
        ;   XREF to: 00493205 (CONDITIONAL_JUMP)  ; LAB_00493205
    POP EDI                             ; 0049321d
        ;   Label: LAB_0049321d
    MOV EAX,0xffffffff                  ; 0049321e
    MOV ESP,EBP                         ; 00493223
    POP EBP                             ; 00493225
    POP EDI                             ; 00493226
    POP ESI                             ; 00493227
    POP EBX                             ; 00493228
    RET                                 ; 00493229
    MOV dword ptr [ESP + 0x1014],0xffffffff ; 0049322a
        ;   Label: LAB_0049322a
    LEA EAX,[ESP + 0x1014]              ; 00493235
    PUSH EAX                            ; 0049323c
    MOV EAX,0x5bf955                    ; 0049323d | = " , %n"
    MOV EDX,dword ptr [EBX]             ; 00493242
    PUSH EAX                            ; 00493244 | = " , %n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493245
    ADD EAX,EDX                         ; 00493248
    PUSH EAX                            ; 0049324a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049324b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00493250
    MOV ECX,dword ptr [ESP + 0x1014]    ; 00493253
    CMP ECX,0x1                         ; 0049325a
    JL 0x00493326                       ; 0049325d
        ;   XREF to: 00493326 (CONDITIONAL_JUMP)  ; LAB_00493326
    LEA EAX,[ESP + 0xf98]               ; 00493263
    PUSH EAX                            ; 0049326a
    MOV ESI,dword ptr [EBX]             ; 0049326b
    PUSH EBX                            ; 0049326d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049326e
    ADD ESI,ECX                         ; 00493271
    PUSH EAX                            ; 00493273
    MOV dword ptr [EBX],ESI             ; 00493274
    CALL core_event.cpp_parseVectorLocation_FUN_0048ba80 ; 00493276
        ;   XREF to: 0048ba80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_parseVectorLocation_FUN_0048ba80(char * buffer, int * offset, CVector3f * out_position)
    ADD ESP,0xc                         ; 0049327b
    MOV ESI,EAX                         ; 0049327e
    TEST EAX,EAX                        ; 00493280
    JL 0x0049334a                       ; 00493282
        ;   XREF to: 0049334a (CONDITIONAL_JUMP)  ; LAB_0049334a
    LEA EAX,[ESP + 0x1014]              ; 00493288
    MOV EDX,0xffffffff                  ; 0049328f
    PUSH EAX                            ; 00493294
    LEA EAX,[ESP + 0x101c]              ; 00493295
    MOV dword ptr [ESP + 0x1018],EDX    ; 0049329c
    PUSH EAX                            ; 004932a3
    MOV EAX,0x5bf97f                    ; 004932a4 | = " , %f )%n"
    MOV ECX,dword ptr [EBX]             ; 004932a9
    PUSH EAX                            ; 004932ab | = " , %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004932ac
    ADD EAX,ECX                         ; 004932af
    PUSH EAX                            ; 004932b1
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004932b2
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004932b7
    MOV EAX,dword ptr [ESP + 0x1014]    ; 004932ba
    CMP EAX,0x3                         ; 004932c1
    JL 0x00493356                       ; 004932c4
        ;   XREF to: 00493356 (CONDITIONAL_JUMP)  ; LAB_00493356
    ADD dword ptr [EBX],EAX             ; 004932ca
    TEST EDI,EDI                        ; 004932cc
    JZ 0x00493386                       ; 004932ce
        ;   XREF to: 00493386 (CONDITIONAL_JUMP)  ; LAB_00493386
    TEST ESI,ESI                        ; 004932d4
    JZ 0x00493386                       ; 004932d6
        ;   XREF to: 00493386 (CONDITIONAL_JUMP)  ; LAB_00493386
    FLD float ptr [ESP + 0xf80]         ; 004932dc
    FSUB float ptr [ESP + 0xf98]        ; 004932e3
    FMUL ST0                            ; 004932ea
    FLD float ptr [ESP + 0xf84]         ; 004932ec
    FSUB float ptr [ESP + 0xf9c]        ; 004932f3
    FMUL ST0                            ; 004932fa
    FLD float ptr [ESP + 0xf88]         ; 004932fc
    FXCH                                ; 00493303
    FADDP ST2,ST0                       ; 00493305
    FSUB float ptr [ESP + 0xfa0]        ; 00493307
    FMUL ST0                            ; 0049330e
    FADDP                               ; 00493310
    FSQRT                               ; 00493312
    FCOMP float ptr [ESP + 0x1018]      ; 00493314
    FNSTSW AX                           ; 0049331b
    SAHF                                ; 0049331d
    SETBE AL                            ; 0049331e
    JMP 0x004923e0                      ; 00493321
        ;   XREF to: 004923e0 (UNCONDITIONAL_JUMP)  ; LAB_004923e0
    MOV ESI,0x5bf95b                    ; 00493326 | = "Error parsing isInRange parameters."
        ;   Label: LAB_00493326
    MOV EDI,0x1c734b0                   ; 0049332b
    PUSH EDI                            ; 00493330 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493331 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005bf95b+2
        ;   Label: LAB_00493331
    MOV byte ptr [EDI],AL               ; 00493333 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493335
    JZ 0x00493349                       ; 00493337
        ;   XREF to: 00493349 (CONDITIONAL_JUMP)  ; LAB_00493349
    MOV AL,byte ptr [ESI + 0x1]         ; 00493339 | s_Error_parsing_isInRange_005bf95b+1 | s_Error_parsing_isInRange_005bf95b+3
    ADD ESI,0x2                         ; 0049333c
    MOV byte ptr [EDI + 0x1],AL         ; 0049333f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493342
    CMP AL,0x0                          ; 00493345
    JNZ 0x00493331                      ; 00493347
        ;   XREF to: 00493331 (CONDITIONAL_JUMP)  ; LAB_00493331
    POP EDI                             ; 00493349
        ;   Label: LAB_00493349
    MOV EAX,0xffffffff                  ; 0049334a
        ;   Label: LAB_0049334a
    MOV ESP,EBP                         ; 0049334f
    POP EBP                             ; 00493351
    POP EDI                             ; 00493352
    POP ESI                             ; 00493353
    POP EBX                             ; 00493354
    RET                                 ; 00493355
    MOV ESI,0x5bf989                    ; 00493356 | = "Error parsing isInRange parameters."
        ;   Label: LAB_00493356
    MOV EDI,0x1c734b0                   ; 0049335b
    PUSH EDI                            ; 00493360 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493361 | = "Error parsing isInRange parameters." | s_Error_parsing_isInRange_005bf989+2
        ;   Label: LAB_00493361
    MOV byte ptr [EDI],AL               ; 00493363 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493365
    JZ 0x00493379                       ; 00493367
        ;   XREF to: 00493379 (CONDITIONAL_JUMP)  ; LAB_00493379
    MOV AL,byte ptr [ESI + 0x1]         ; 00493369 | s_Error_parsing_isInRange_005bf989+1 | s_Error_parsing_isInRange_005bf989+3
    ADD ESI,0x2                         ; 0049336c
    MOV byte ptr [EDI + 0x1],AL         ; 0049336f | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493372
    CMP AL,0x0                          ; 00493375
    JNZ 0x00493361                      ; 00493377
        ;   XREF to: 00493361 (CONDITIONAL_JUMP)  ; LAB_00493361
    POP EDI                             ; 00493379
        ;   Label: LAB_00493379
    MOV EAX,0xffffffff                  ; 0049337a
    MOV ESP,EBP                         ; 0049337f
    POP EBP                             ; 00493381
    POP EDI                             ; 00493382
    POP ESI                             ; 00493383
    POP EBX                             ; 00493384
    RET                                 ; 00493385
    XOR ECX,ECX                         ; 00493386
        ;   Label: LAB_00493386
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00493388
    JMP 0x004923ec                      ; 0049338f
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf9ad                       ; 00493394 | = "isOfType"
        ;   Label: LAB_00493394
    LEA EAX,[ESP + 0xf38]               ; 00493399
    PUSH EAX                            ; 004933a0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004933a1
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004933a6
    TEST EAX,EAX                        ; 004933a9
    JNZ 0x0049357b                      ; 004933ab
        ;   XREF to: 0049357b (CONDITIONAL_JUMP)  ; LAB_0049357b
    LEA EAX,[ESP + 0x1028]              ; 004933b1
    PUSH EAX                            ; 004933b8
    LEA EAX,[ESP + 0x830]               ; 004933b9
    MOV EDX,0xffffffff                  ; 004933c0
    PUSH EAX                            ; 004933c5
    LEA EAX,[ESP + 0xd48]               ; 004933c6
    MOV dword ptr [ESP + 0x1030],EDX    ; 004933cd
    PUSH EAX                            ; 004933d4
    MOV EAX,0x5bf9b6                    ; 004933d5 | = " ( %[^ ,] , %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 004933da
    PUSH EAX                            ; 004933dc | = " ( %[^ ,] , %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004933dd
    ADD EAX,ECX                         ; 004933e0
    PUSH EAX                            ; 004933e2
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004933e3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 004933e8
    CMP dword ptr [ESP + 0x1028],0x3    ; 004933eb
    JL 0x0049345c                       ; 004933f3
        ;   XREF to: 0049345c (CONDITIONAL_JUMP)  ; LAB_0049345c
    LEA ESI,[ESP + 0xd40]               ; 004933f5
    MOV EDI,ESI                         ; 004933fc
    SUB ECX,ECX                         ; 004933fe
    DEC ECX                             ; 00493400
    XOR EAX,EAX                         ; 00493401
    SCASB.REPNE ES:EDI                  ; 00493403
    NOT ECX                             ; 00493405
    DEC ECX                             ; 00493407
    MOV EDI,ECX                         ; 00493408
    TEST ECX,ECX                        ; 0049340a
    JLE 0x00493425                      ; 0049340c
        ;   XREF to: 00493425 (CONDITIONAL_JUMP)  ; LAB_00493425
    LEA EAX,[ECX + ESI*0x1]             ; 0049340e
    MOV DL,byte ptr [EAX + -0x1]        ; 00493411
        ;   Label: LAB_00493411
    INC DL                              ; 00493414
    AND EDX,0xff                        ; 00493416
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0049341c | DAT_006074b8
    JNZ 0x0049348c                      ; 00493423
        ;   XREF to: 0049348c (CONDITIONAL_JUMP)  ; LAB_0049348c
    LEA EAX,[ESI + EDI*0x1]             ; 00493425
        ;   Label: LAB_00493425
    MOV byte ptr [EAX],0x0              ; 00493428
    LEA EAX,[ESI + 0x1]                 ; 0049342b
    MOV dword ptr [ESP + 0x1030],EAX    ; 0049342e
    MOV AL,byte ptr [ESI]               ; 00493435
        ;   Label: LAB_00493435
    INC AL                              ; 00493437
    AND EAX,0xff                        ; 00493439
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0049343e | DAT_006074b8
    JZ 0x00493498                       ; 00493445
        ;   XREF to: 00493498 (CONDITIONAL_JUMP)  ; LAB_00493498
    PUSH EDI                            ; 00493447
    MOV EDX,dword ptr [ESP + 0x1034]    ; 00493448
    PUSH EDX                            ; 0049344f
    PUSH ESI                            ; 00493450
    DEC EDI                             ; 00493451
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00493452
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00493457
    JMP 0x00493435                      ; 0049345a
        ;   XREF to: 00493435 (UNCONDITIONAL_JUMP)  ; LAB_00493435
    MOV ESI,0x5bf9cd                    ; 0049345c | = "Error parsing isOfType parameters."
        ;   Label: LAB_0049345c
    MOV EDI,0x1c734b0                   ; 00493461
    PUSH EDI                            ; 00493466 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493467 | = "Error parsing isOfType parameters." | s_Error_parsing_isOfType_p_005bf9cd+2
        ;   Label: LAB_00493467
    MOV byte ptr [EDI],AL               ; 00493469 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 0049346b
    JZ 0x0049347f                       ; 0049346d
        ;   XREF to: 0049347f (CONDITIONAL_JUMP)  ; LAB_0049347f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049346f | s_Error_parsing_isOfType_p_005bf9cd+1 | s_Error_parsing_isOfType_p_005bf9cd+3
    ADD ESI,0x2                         ; 00493472
    MOV byte ptr [EDI + 0x1],AL         ; 00493475 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493478
    CMP AL,0x0                          ; 0049347b
    JNZ 0x00493467                      ; 0049347d
        ;   XREF to: 00493467 (CONDITIONAL_JUMP)  ; LAB_00493467
    POP EDI                             ; 0049347f
        ;   Label: LAB_0049347f
    MOV EAX,0xffffffff                  ; 00493480
        ;   Label: LAB_00493480
    MOV ESP,EBP                         ; 00493485
    POP EBP                             ; 00493487
    POP EDI                             ; 00493488
    POP ESI                             ; 00493489
    POP EBX                             ; 0049348a
    RET                                 ; 0049348b
    DEC EDI                             ; 0049348c
        ;   Label: LAB_0049348c
    DEC EAX                             ; 0049348d
    TEST EDI,EDI                        ; 0049348e
    JG 0x00493411                       ; 00493490
        ;   XREF to: 00493411 (CONDITIONAL_JUMP)  ; LAB_00493411
    JMP 0x00493425                      ; 00493496
        ;   XREF to: 00493425 (UNCONDITIONAL_JUMP)  ; LAB_00493425
    LEA EDI,[ESP + 0x82c]               ; 00493498
        ;   Label: LAB_00493498
    LEA ESI,[ESP + 0x82c]               ; 0049349f
    SUB ECX,ECX                         ; 004934a6
    DEC ECX                             ; 004934a8
    XOR EAX,EAX                         ; 004934a9
    SCASB.REPNE ES:EDI                  ; 004934ab
    NOT ECX                             ; 004934ad
    DEC ECX                             ; 004934af
    MOV EDI,ECX                         ; 004934b0
    TEST ECX,ECX                        ; 004934b2
    JLE 0x004934d3                      ; 004934b4
        ;   XREF to: 004934d3 (CONDITIONAL_JUMP)  ; LAB_004934d3
    LEA EAX,[ESP + 0x82c]               ; 004934b6
    ADD EAX,ECX                         ; 004934bd
    MOV DL,byte ptr [EAX + -0x1]        ; 004934bf
        ;   Label: LAB_004934bf
    INC DL                              ; 004934c2
    AND EDX,0xff                        ; 004934c4
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004934ca | DAT_006074b8
    JNZ 0x0049350a                      ; 004934d1
        ;   XREF to: 0049350a (CONDITIONAL_JUMP)  ; LAB_0049350a
    LEA EAX,[ESI + EDI*0x1]             ; 004934d3
        ;   Label: LAB_004934d3
    MOV byte ptr [EAX],0x0              ; 004934d6
    LEA EAX,[ESI + 0x1]                 ; 004934d9
    MOV dword ptr [ESP + 0x1034],EAX    ; 004934dc
    MOV AL,byte ptr [ESI]               ; 004934e3
        ;   Label: LAB_004934e3
    INC AL                              ; 004934e5
    AND EAX,0xff                        ; 004934e7
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004934ec | DAT_006074b8
    JZ 0x00493512                       ; 004934f3
        ;   XREF to: 00493512 (CONDITIONAL_JUMP)  ; LAB_00493512
    PUSH EDI                            ; 004934f5
    MOV ECX,dword ptr [ESP + 0x1038]    ; 004934f6
    PUSH ECX                            ; 004934fd
    PUSH ESI                            ; 004934fe
    DEC EDI                             ; 004934ff
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00493500
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00493505
    JMP 0x004934e3                      ; 00493508
        ;   XREF to: 004934e3 (UNCONDITIONAL_JUMP)  ; LAB_004934e3
    DEC EDI                             ; 0049350a
        ;   Label: LAB_0049350a
    DEC EAX                             ; 0049350b
    TEST EDI,EDI                        ; 0049350c
    JG 0x004934bf                       ; 0049350e
        ;   XREF to: 004934bf (CONDITIONAL_JUMP)  ; LAB_004934bf
    JMP 0x004934d3                      ; 00493510
        ;   XREF to: 004934d3 (UNCONDITIONAL_JUMP)  ; LAB_004934d3
    PUSH 0x7df978                       ; 00493512 | g_CDemonActorClassInfo
        ;   Label: LAB_00493512
    MOV ECX,dword ptr [0x007df9b0]      ; 00493517 | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 0049351d
    LEA EAX,[ESP + 0xd48]               ; 0049351e
    PUSH EAX                            ; 00493525
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493526
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 0049352b
    TEST EAX,EAX                        ; 0049352e
    JZ 0x00493480                       ; 00493530
        ;   XREF to: 00493480 (CONDITIONAL_JUMP)  ; LAB_00493480
    CMP EAX,dword ptr [0x005df604]      ; 00493536 | DAT_005df604
    JNZ 0x00493555                      ; 0049353c
        ;   XREF to: 00493555 (CONDITIONAL_JUMP)  ; LAB_00493555
    XOR EDI,EDI                         ; 0049353e
    MOV dword ptr [ESP + 0xfbc],EDI     ; 00493540
    MOV EAX,dword ptr [ESP + 0x1028]    ; 00493547
    ADD dword ptr [EBX],EAX             ; 0049354e
    JMP 0x004923ec                      ; 00493550
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    LEA EDX,[ESP + 0x82c]               ; 00493555
        ;   Label: LAB_00493555
    PUSH EDX                            ; 0049355c
    PUSH EAX                            ; 0049355d
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0049355e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00493563
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00493566
    MOV EAX,dword ptr [ESP + 0x1028]    ; 0049356d
    ADD dword ptr [EBX],EAX             ; 00493574
    JMP 0x004923ec                      ; 00493576
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bf9f0                       ; 0049357b | = "isFacing"
        ;   Label: LAB_0049357b
    LEA EAX,[ESP + 0xf38]               ; 00493580
    PUSH EAX                            ; 00493587
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493588
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049358d
    TEST EAX,EAX                        ; 00493590
    JNZ 0x00493927                      ; 00493592
        ;   XREF to: 00493927 (CONDITIONAL_JUMP)  ; LAB_00493927
    LEA EAX,[ESP + 0x1038]              ; 00493598
    PUSH EAX                            ; 0049359f
    LEA EAX,[ESP + 0xda8]               ; 004935a0
    MOV ESI,0xffffffff                  ; 004935a7
    PUSH EAX                            ; 004935ac
    LEA EAX,[ESP + 0xe10]               ; 004935ad
    MOV dword ptr [ESP + 0x1040],ESI    ; 004935b4
    PUSH EAX                            ; 004935bb
    MOV EAX,0x5bf9f9                    ; 004935bc | = " (%[^,], %[^,)]%n"
    MOV EDI,dword ptr [EBX]             ; 004935c1
    PUSH EAX                            ; 004935c3 | = " (%[^,], %[^,)]%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004935c4
    ADD EAX,EDI                         ; 004935c7
    PUSH EAX                            ; 004935c9
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004935ca
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 004935cf
    CMP dword ptr [ESP + 0x1038],0x5    ; 004935d2
    JL 0x00493643                       ; 004935da
        ;   XREF to: 00493643 (CONDITIONAL_JUMP)  ; LAB_00493643
    LEA ESI,[ESP + 0xe08]               ; 004935dc
    MOV EDI,ESI                         ; 004935e3
    SUB ECX,ECX                         ; 004935e5
    DEC ECX                             ; 004935e7
    XOR EAX,EAX                         ; 004935e8
    SCASB.REPNE ES:EDI                  ; 004935ea
    NOT ECX                             ; 004935ec
    DEC ECX                             ; 004935ee
    MOV EDI,ECX                         ; 004935ef
    TEST ECX,ECX                        ; 004935f1
    JLE 0x0049360c                      ; 004935f3
        ;   XREF to: 0049360c (CONDITIONAL_JUMP)  ; LAB_0049360c
    LEA EAX,[ECX + ESI*0x1]             ; 004935f5
    MOV DL,byte ptr [EAX + -0x1]        ; 004935f8
        ;   Label: LAB_004935f8
    INC DL                              ; 004935fb
    AND EDX,0xff                        ; 004935fd
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00493603 | DAT_006074b8
    JNZ 0x00493673                      ; 0049360a
        ;   XREF to: 00493673 (CONDITIONAL_JUMP)  ; LAB_00493673
    LEA EAX,[ESI + EDI*0x1]             ; 0049360c
        ;   Label: LAB_0049360c
    MOV byte ptr [EAX],0x0              ; 0049360f
    LEA EAX,[ESI + 0x1]                 ; 00493612
    MOV dword ptr [ESP + 0x103c],EAX    ; 00493615
    MOV AL,byte ptr [ESI]               ; 0049361c
        ;   Label: LAB_0049361c
    INC AL                              ; 0049361e
    AND EAX,0xff                        ; 00493620
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00493625 | DAT_006074b8
    JZ 0x0049367f                       ; 0049362c
        ;   XREF to: 0049367f (CONDITIONAL_JUMP)  ; LAB_0049367f
    PUSH EDI                            ; 0049362e
    MOV EDX,dword ptr [ESP + 0x1040]    ; 0049362f
    PUSH EDX                            ; 00493636
    PUSH ESI                            ; 00493637
    DEC EDI                             ; 00493638
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00493639
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049363e
    JMP 0x0049361c                      ; 00493641
        ;   XREF to: 0049361c (UNCONDITIONAL_JUMP)  ; LAB_0049361c
    MOV ESI,0x5bfa0b                    ; 00493643 | = "Error parsing isFacing parameters."
        ;   Label: LAB_00493643
    MOV EDI,0x1c734b0                   ; 00493648
    PUSH EDI                            ; 0049364d | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 0049364e | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005bfa0b+2
        ;   Label: LAB_0049364e
    MOV byte ptr [EDI],AL               ; 00493650 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493652
    JZ 0x00493666                       ; 00493654
        ;   XREF to: 00493666 (CONDITIONAL_JUMP)  ; LAB_00493666
    MOV AL,byte ptr [ESI + 0x1]         ; 00493656 | s_Error_parsing_isFacing_p_005bfa0b+1 | s_Error_parsing_isFacing_p_005bfa0b+3
    ADD ESI,0x2                         ; 00493659
    MOV byte ptr [EDI + 0x1],AL         ; 0049365c | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 0049365f
    CMP AL,0x0                          ; 00493662
    JNZ 0x0049364e                      ; 00493664
        ;   XREF to: 0049364e (CONDITIONAL_JUMP)  ; LAB_0049364e
    POP EDI                             ; 00493666
        ;   Label: LAB_00493666
    MOV EAX,0xffffffff                  ; 00493667
    MOV ESP,EBP                         ; 0049366c
    POP EBP                             ; 0049366e
    POP EDI                             ; 0049366f
    POP ESI                             ; 00493670
    POP EBX                             ; 00493671
    RET                                 ; 00493672
    DEC EDI                             ; 00493673
        ;   Label: LAB_00493673
    DEC EAX                             ; 00493674
    TEST EDI,EDI                        ; 00493675
    JG 0x004935f8                       ; 00493677
        ;   XREF to: 004935f8 (CONDITIONAL_JUMP)  ; LAB_004935f8
    JMP 0x0049360c                      ; 0049367d
        ;   XREF to: 0049360c (UNCONDITIONAL_JUMP)  ; LAB_0049360c
    LEA EAX,[ESP + 0xda4]               ; 0049367f
        ;   Label: LAB_0049367f
    LEA EDI,[ESP + 0xda4]               ; 00493686
    MOV dword ptr [ESP + 0x1040],EAX    ; 0049368d
    SUB ECX,ECX                         ; 00493694
    DEC ECX                             ; 00493696
    XOR EAX,EAX                         ; 00493697
    SCASB.REPNE ES:EDI                  ; 00493699
    NOT ECX                             ; 0049369b
    DEC ECX                             ; 0049369d
    MOV ESI,ECX                         ; 0049369e
    TEST ECX,ECX                        ; 004936a0
    JLE 0x004936c1                      ; 004936a2
        ;   XREF to: 004936c1 (CONDITIONAL_JUMP)  ; LAB_004936c1
    LEA EAX,[ESP + 0xda4]               ; 004936a4
    ADD EAX,ECX                         ; 004936ab
    MOV DL,byte ptr [EAX + -0x1]        ; 004936ad
        ;   Label: LAB_004936ad
    INC DL                              ; 004936b0
    AND EDX,0xff                        ; 004936b2
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004936b8 | DAT_006074b8
    JNZ 0x004936fd                      ; 004936bf
        ;   XREF to: 004936fd (CONDITIONAL_JUMP)  ; LAB_004936fd
    MOV EAX,dword ptr [ESP + 0x1040]    ; 004936c1
        ;   Label: LAB_004936c1
    LEA EDI,[EAX + 0x1]                 ; 004936c8
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 004936cb
    MOV EAX,dword ptr [ESP + 0x1040]    ; 004936cf
        ;   Label: LAB_004936cf
    MOV AL,byte ptr [EAX]               ; 004936d6
    INC AL                              ; 004936d8
    AND EAX,0xff                        ; 004936da
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004936df | DAT_006074b8
    JZ 0x00493705                       ; 004936e6
        ;   XREF to: 00493705 (CONDITIONAL_JUMP)  ; LAB_00493705
    PUSH ESI                            ; 004936e8
    PUSH EDI                            ; 004936e9
    MOV EAX,dword ptr [ESP + 0x1048]    ; 004936ea
    PUSH EAX                            ; 004936f1
    DEC ESI                             ; 004936f2
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004936f3
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004936f8
    JMP 0x004936cf                      ; 004936fb
        ;   XREF to: 004936cf (UNCONDITIONAL_JUMP)  ; LAB_004936cf
    DEC ESI                             ; 004936fd
        ;   Label: LAB_004936fd
    DEC EAX                             ; 004936fe
    TEST ESI,ESI                        ; 004936ff
    JG 0x004936ad                       ; 00493701
        ;   XREF to: 004936ad (CONDITIONAL_JUMP)  ; LAB_004936ad
    JMP 0x004936c1                      ; 00493703
        ;   XREF to: 004936c1 (UNCONDITIONAL_JUMP)  ; LAB_004936c1
    PUSH 0x7df978                       ; 00493705 | g_CDemonActorClassInfo
        ;   Label: LAB_00493705
    MOV ECX,dword ptr [0x007df9b0]      ; 0049370a | g_CDemonActorClassInfo.name_hash
    PUSH ECX                            ; 00493710
    LEA EAX,[ESP + 0xe10]               ; 00493711
    PUSH EAX                            ; 00493718
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493719
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 0049371e
    MOV EDI,EAX                         ; 00493721
    TEST EAX,EAX                        ; 00493723
    JNZ 0x00493733                      ; 00493725
        ;   XREF to: 00493733 (CONDITIONAL_JUMP)  ; LAB_00493733
    MOV EAX,0xffffffff                  ; 00493727
        ;   Label: LAB_00493727
    MOV ESP,EBP                         ; 0049372c
    POP EBP                             ; 0049372e
    POP EDI                             ; 0049372f
    POP ESI                             ; 00493730
    POP EBX                             ; 00493731
    RET                                 ; 00493732
    PUSH 0x7df978                       ; 00493733 | g_CDemonActorClassInfo
        ;   Label: LAB_00493733
    MOV ESI,dword ptr [0x007df9b0]      ; 00493738 | g_CDemonActorClassInfo.name_hash
    PUSH ESI                            ; 0049373e
    LEA EAX,[ESP + 0xdac]               ; 0049373f
    PUSH EAX                            ; 00493746
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493747
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 0049374c
    MOV ESI,EAX                         ; 0049374f
    TEST EAX,EAX                        ; 00493751
    JZ 0x00493727                       ; 00493753
        ;   XREF to: 00493727 (CONDITIONAL_JUMP)  ; LAB_00493727
    MOV EAX,dword ptr [ESP + 0x1038]    ; 00493755
    MOV EDX,dword ptr [EBX]             ; 0049375c
    ADD EDX,EAX                         ; 0049375e
    MOV ECX,0x42340000                  ; 00493760
    MOV dword ptr [EBX],EDX             ; 00493765
    MOV dword ptr [ESP + 0x8],ECX       ; 00493767
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049376b
    ADD EAX,dword ptr [EBX]             ; 0049376e
    CMP byte ptr [EAX],0x2c             ; 00493770
    JZ 0x004937a6                       ; 00493773
        ;   XREF to: 004937a6 (CONDITIONAL_JUMP)  ; LAB_004937a6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493775
        ;   Label: LAB_00493775
    MOV ECX,dword ptr [EBX]             ; 00493778
    ADD EAX,ECX                         ; 0049377a
    CMP byte ptr [EAX],0x29             ; 0049377c
    JNZ 0x00493868                      ; 0049377f
        ;   XREF to: 00493868 (CONDITIONAL_JUMP)  ; LAB_00493868
    LEA EAX,[ECX + 0x1]                 ; 00493785
    MOV EDX,dword ptr [0x005df604]      ; 00493788 | DAT_005df604
    MOV dword ptr [EBX],EAX             ; 0049378e
    CMP EDI,EDX                         ; 00493790
    JNZ 0x00493898                      ; 00493792
        ;   XREF to: 00493898 (CONDITIONAL_JUMP)  ; LAB_00493898
    XOR EDI,EDI                         ; 00493798
        ;   Label: LAB_00493798
    MOV dword ptr [ESP + 0xfbc],EDI     ; 0049379a
    JMP 0x004923ec                      ; 004937a1
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    LEA EAX,[ESP + 0x1038]              ; 004937a6
        ;   Label: LAB_004937a6
    MOV ECX,0xffffffff                  ; 004937ad
    PUSH EAX                            ; 004937b2
    LEA EAX,[ESP + 0xc]                 ; 004937b3
    MOV dword ptr [ESP + 0x103c],ECX    ; 004937b7
    PUSH EAX                            ; 004937be
    MOV EDX,dword ptr [EBX]             ; 004937bf
    MOV EAX,dword ptr [EBP + 0x18]      ; 004937c1
    PUSH 0x5bfa2e                       ; 004937c4 | = ",%f %n"
    ADD EAX,EDX                         ; 004937c9
    PUSH EAX                            ; 004937cb
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004937cc
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004937d1
    MOV ECX,dword ptr [ESP + 0x1038]    ; 004937d4
    CMP ECX,0x2                         ; 004937db
    JL 0x00493808                       ; 004937de
        ;   XREF to: 00493808 (CONDITIONAL_JUMP)  ; LAB_00493808
    FLD float ptr [ESP + 0x8]           ; 004937e0
    FLDZ                                ; 004937e4
    FXCH                                ; 004937e6
    FSTP double ptr [ESP]               ; 004937e8
    FCOMP double ptr [ESP]              ; 004937eb
    FNSTSW AX                           ; 004937ee
    SAHF                                ; 004937f0
    JA 0x00493838                       ; 004937f1
        ;   XREF to: 00493838 (CONDITIONAL_JUMP)  ; LAB_00493838
    FLD double ptr [ESP]                ; 004937f3
    FCOMP double ptr [0x005bfdd0]       ; 004937f6 | DAT_005bfdd0
    FNSTSW AX                           ; 004937fc
    SAHF                                ; 004937fe
    JA 0x00493838                       ; 004937ff
        ;   XREF to: 00493838 (CONDITIONAL_JUMP)  ; LAB_00493838
    ADD dword ptr [EBX],ECX             ; 00493801
    JMP 0x00493775                      ; 00493803
        ;   XREF to: 00493775 (UNCONDITIONAL_JUMP)  ; LAB_00493775
    MOV ESI,0x5bfa35                    ; 00493808 | = "Error parsing isFacing parameters."
        ;   Label: LAB_00493808
    MOV EDI,0x1c734b0                   ; 0049380d
    PUSH EDI                            ; 00493812 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493813 | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005bfa35+2
        ;   Label: LAB_00493813
    MOV byte ptr [EDI],AL               ; 00493815 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493817
    JZ 0x0049382b                       ; 00493819
        ;   XREF to: 0049382b (CONDITIONAL_JUMP)  ; LAB_0049382b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049381b | s_Error_parsing_isFacing_p_005bfa35+1 | s_Error_parsing_isFacing_p_005bfa35+3
    ADD ESI,0x2                         ; 0049381e
    MOV byte ptr [EDI + 0x1],AL         ; 00493821 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493824
    CMP AL,0x0                          ; 00493827
    JNZ 0x00493813                      ; 00493829
        ;   XREF to: 00493813 (CONDITIONAL_JUMP)  ; LAB_00493813
    POP EDI                             ; 0049382b
        ;   Label: LAB_0049382b
    MOV EAX,0xffffffff                  ; 0049382c
    MOV ESP,EBP                         ; 00493831
    POP EBP                             ; 00493833
    POP EDI                             ; 00493834
    POP ESI                             ; 00493835
    POP EBX                             ; 00493836
    RET                                 ; 00493837
    MOV ESI,0x5bfa58                    ; 00493838 | = "isFacing() angle must be in range 0....."
        ;   Label: LAB_00493838
    MOV EDI,0x1c734b0                   ; 0049383d
    PUSH EDI                            ; 00493842 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493843 | = "isFacing() angle must be in range 0....." | s_isFacing_angle_must_be_i_005bfa58+2
        ;   Label: LAB_00493843
    MOV byte ptr [EDI],AL               ; 00493845 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493847
    JZ 0x0049385b                       ; 00493849
        ;   XREF to: 0049385b (CONDITIONAL_JUMP)  ; LAB_0049385b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049384b | s_isFacing_angle_must_be_i_005bfa58+1 | s_isFacing_angle_must_be_i_005bfa58+3
    ADD ESI,0x2                         ; 0049384e
    MOV byte ptr [EDI + 0x1],AL         ; 00493851 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493854
    CMP AL,0x0                          ; 00493857
    JNZ 0x00493843                      ; 00493859
        ;   XREF to: 00493843 (CONDITIONAL_JUMP)  ; LAB_00493843
    POP EDI                             ; 0049385b
        ;   Label: LAB_0049385b
    MOV EAX,0xffffffff                  ; 0049385c
    MOV ESP,EBP                         ; 00493861
    POP EBP                             ; 00493863
    POP EDI                             ; 00493864
    POP ESI                             ; 00493865
    POP EBX                             ; 00493866
    RET                                 ; 00493867
    MOV ESI,0x5bfa82                    ; 00493868 | = "Error parsing isFacing parameters."
        ;   Label: LAB_00493868
    MOV EDI,0x1c734b0                   ; 0049386d
    PUSH EDI                            ; 00493872 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493873 | = "Error parsing isFacing parameters." | s_Error_parsing_isFacing_p_005bfa82+2
        ;   Label: LAB_00493873
    MOV byte ptr [EDI],AL               ; 00493875 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493877
    JZ 0x0049388b                       ; 00493879
        ;   XREF to: 0049388b (CONDITIONAL_JUMP)  ; LAB_0049388b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049387b | s_Error_parsing_isFacing_p_005bfa82+1 | s_Error_parsing_isFacing_p_005bfa82+3
    ADD ESI,0x2                         ; 0049387e
    MOV byte ptr [EDI + 0x1],AL         ; 00493881 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493884
    CMP AL,0x0                          ; 00493887
    JNZ 0x00493873                      ; 00493889
        ;   XREF to: 00493873 (CONDITIONAL_JUMP)  ; LAB_00493873
    POP EDI                             ; 0049388b
        ;   Label: LAB_0049388b
    MOV EAX,0xffffffff                  ; 0049388c
    MOV ESP,EBP                         ; 00493891
    POP EBP                             ; 00493893
    POP EDI                             ; 00493894
    POP ESI                             ; 00493895
    POP EBX                             ; 00493896
    RET                                 ; 00493897
    CMP ESI,EDX                         ; 00493898
        ;   Label: LAB_00493898
    JZ 0x00493798                       ; 0049389a
        ;   XREF to: 00493798 (CONDITIONAL_JUMP)  ; LAB_00493798
    ADD ESI,0x20                        ; 004938a0
    PUSH ESI                            ; 004938a3
    PUSH EDI                            ; 004938a4
    LEA ESI,[ESP + 0xfac]               ; 004938a5
    CALL core_actor.cpp_FUN_00408bf0    ; 004938ac
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA EDI,[ESP + 0xf94]               ; 004938b1
    LEA ESI,[ESP + 0xfac]               ; 004938b8
    ADD ESP,0x8                         ; 004938bf
    MOVSD ES:EDI,ESI                    ; 004938c2
    MOVSD ES:EDI,ESI                    ; 004938c3
    MOVSD ES:EDI,ESI                    ; 004938c4
    LEA EAX,[ESP + 0xf8c]               ; 004938c5
    XOR ESI,ESI                         ; 004938cc
    PUSH EAX                            ; 004938ce
    MOV dword ptr [ESP + 0xf94],ESI     ; 004938cf
    LEA ESI,[ESP + 0xfb4]               ; 004938d6
    LEA EDI,[ESP + 0xf78]               ; 004938dd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004938e4
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0xfb4]               ; 004938e9
    ADD ESP,0x4                         ; 004938f0
    MOVSD ES:EDI,ESI                    ; 004938f3
    MOVSD ES:EDI,ESI                    ; 004938f4
    MOVSD ES:EDI,ESI                    ; 004938f5
    FLD float ptr [ESP + 0xf78]         ; 004938f6
    FABS                                ; 004938fd
    FLD float ptr [ESP + 0x8]           ; 004938ff
    FMUL float ptr [0x005bfdd8]         ; 00493903 | DAT_005bfdd8
    FMUL double ptr [0x005bfde0]        ; 00493909 | DAT_005bfde0
    FCOMPP                              ; 0049390f
    FNSTSW AX                           ; 00493911
    SAHF                                ; 00493913
    JC 0x00493920                       ; 00493914
        ;   XREF to: 00493920 (CONDITIONAL_JUMP)  ; LAB_00493920
    MOV EAX,0x1                         ; 00493916
    JMP 0x004923e5                      ; 0049391b
        ;   XREF to: 004923e5 (UNCONDITIONAL_JUMP)  ; LAB_004923e5
    XOR EAX,EAX                         ; 00493920
        ;   Label: LAB_00493920
    JMP 0x004923e5                      ; 00493922
        ;   XREF to: 004923e5 (UNCONDITIONAL_JUMP)  ; LAB_004923e5
    PUSH 0x5bfaa5                       ; 00493927 | = "isLightOn"
        ;   Label: LAB_00493927
    LEA EAX,[ESP + 0xf38]               ; 0049392c
    PUSH EAX                            ; 00493933
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493934
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493939
    TEST EAX,EAX                        ; 0049393c
    JNZ 0x00493a5f                      ; 0049393e
        ;   XREF to: 00493a5f (CONDITIONAL_JUMP)  ; LAB_00493a5f
    MOV dword ptr [ESP + 0x104c],0xffffffff ; 00493944
    LEA EAX,[ESP + 0x104c]              ; 0049394f
    PUSH EAX                            ; 00493956
    LEA EAX,[ESP + 0xc18]               ; 00493957
    PUSH EAX                            ; 0049395e
    MOV EAX,0x5bfaaf                    ; 0049395f | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 00493964
    PUSH EAX                            ; 00493966 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493967
    ADD EAX,EDX                         ; 0049396a
    PUSH EAX                            ; 0049396c
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049396d
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493972
    CMP dword ptr [ESP + 0x104c],0x3    ; 00493975
    JL 0x004939df                       ; 0049397d
        ;   XREF to: 004939df (CONDITIONAL_JUMP)  ; LAB_004939df
    LEA EAX,[ESP + 0x1054]              ; 0049397f
    PUSH EAX                            ; 00493986
    LEA EAX,[ESP + 0x1054]              ; 00493987
    PUSH EAX                            ; 0049398e
    LEA EAX,[ESP + 0xc1c]               ; 0049398f
    PUSH EAX                            ; 00493996
    MOV ESI,dword ptr [0x00603b28]      ; 00493997 | g_CDemonSetPtr
    PUSH ESI                            ; 0049399d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0 ; 0049399e
        ;   XREF to: 0053b3b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0(CDemonSet * this_ptr, char * light_name, C3DSLight * * out_light, CDemonLight * * out_master_light)
    ADD ESP,0x10                        ; 004939a3
    CMP dword ptr [ESP + 0x1050],0x0    ; 004939a6
    JZ 0x00493a0f                       ; 004939ae
        ;   XREF to: 00493a0f (CONDITIONAL_JUMP)  ; LAB_00493a0f
    MOV EAX,dword ptr [ESP + 0x1054]    ; 004939b0
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 004939b7
    SETNZ AL                            ; 004939be
    AND EAX,0xff                        ; 004939c1
    MOV ECX,dword ptr [EBX]             ; 004939c6
    MOV dword ptr [ESP + 0xfbc],EAX     ; 004939c8
    MOV EAX,dword ptr [ESP + 0x104c]    ; 004939cf
    ADD ECX,EAX                         ; 004939d6
    MOV dword ptr [EBX],ECX             ; 004939d8
    JMP 0x004923ec                      ; 004939da
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfabd                    ; 004939df | = "Error parsing isLightOn parameters."
        ;   Label: LAB_004939df
    MOV EDI,0x1c734b0                   ; 004939e4
    PUSH EDI                            ; 004939e9 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004939ea | = "Error parsing isLightOn parameters." | s_Error_parsing_isLightOn_005bfabd+2
        ;   Label: LAB_004939ea
    MOV byte ptr [EDI],AL               ; 004939ec | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004939ee
    JZ 0x00493a02                       ; 004939f0
        ;   XREF to: 00493a02 (CONDITIONAL_JUMP)  ; LAB_00493a02
    MOV AL,byte ptr [ESI + 0x1]         ; 004939f2 | s_Error_parsing_isLightOn_005bfabd+1 | s_Error_parsing_isLightOn_005bfabd+3
    ADD ESI,0x2                         ; 004939f5
    MOV byte ptr [EDI + 0x1],AL         ; 004939f8 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 004939fb
    CMP AL,0x0                          ; 004939fe
    JNZ 0x004939ea                      ; 00493a00
        ;   XREF to: 004939ea (CONDITIONAL_JUMP)  ; LAB_004939ea
    POP EDI                             ; 00493a02
        ;   Label: LAB_00493a02
    MOV EAX,0xffffffff                  ; 00493a03
    MOV ESP,EBP                         ; 00493a08
    POP EBP                             ; 00493a0a
    POP EDI                             ; 00493a0b
    POP ESI                             ; 00493a0c
    POP EBX                             ; 00493a0d
    RET                                 ; 00493a0e
    LEA EAX,[ESP + 0xc14]               ; 00493a0f
        ;   Label: LAB_00493a0f
    PUSH EAX                            ; 00493a16
    MOV EAX,0x5bfae1                    ; 00493a17 | = "Spotlight %s doesn't exist."
    PUSH EAX                            ; 00493a1c | = "Spotlight %s doesn't exist."
    LEA EAX,[ESP + 0x214]               ; 00493a1d
    PUSH EAX                            ; 00493a24
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00493a25
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00493a2a
    LEA ESI,[ESP + 0x20c]               ; 00493a2d
    MOV EDI,0x1c734b0                   ; 00493a34
    PUSH EDI                            ; 00493a39 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493a3a
        ;   Label: LAB_00493a3a
    MOV byte ptr [EDI],AL               ; 00493a3c | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493a3e
    JZ 0x00493a52                       ; 00493a40
        ;   XREF to: 00493a52 (CONDITIONAL_JUMP)  ; LAB_00493a52
    MOV AL,byte ptr [ESI + 0x1]         ; 00493a42
    ADD ESI,0x2                         ; 00493a45
    MOV byte ptr [EDI + 0x1],AL         ; 00493a48 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493a4b
    CMP AL,0x0                          ; 00493a4e
    JNZ 0x00493a3a                      ; 00493a50
        ;   XREF to: 00493a3a (CONDITIONAL_JUMP)  ; LAB_00493a3a
    POP EDI                             ; 00493a52
        ;   Label: LAB_00493a52
    MOV EAX,0xffffffff                  ; 00493a53
    MOV ESP,EBP                         ; 00493a58
    POP EBP                             ; 00493a5a
    POP EDI                             ; 00493a5b
    POP ESI                             ; 00493a5c
    POP EBX                             ; 00493a5d
    RET                                 ; 00493a5e
    PUSH 0x5bfafd                       ; 00493a5f | = "isNudityEnabled"
        ;   Label: LAB_00493a5f
    LEA EAX,[ESP + 0xf38]               ; 00493a64
    PUSH EAX                            ; 00493a6b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493a6c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493a71
    TEST EAX,EAX                        ; 00493a74
    JNZ 0x00493b04                      ; 00493a76
        ;   XREF to: 00493b04 (CONDITIONAL_JUMP)  ; LAB_00493b04
    MOV dword ptr [ESP + 0x1058],0xffffffff ; 00493a7c
    LEA EAX,[ESP + 0x1058]              ; 00493a87
    PUSH EAX                            ; 00493a8e
    MOV EAX,0x5bfb0d                    ; 00493a8f | = " ( )%n"
    MOV EDX,dword ptr [EBX]             ; 00493a94
    PUSH EAX                            ; 00493a96 | = " ( )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493a97
    ADD EAX,EDX                         ; 00493a9a
    PUSH EAX                            ; 00493a9c
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493a9d
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00493aa2
    MOV ECX,dword ptr [ESP + 0x1058]    ; 00493aa5
    CMP ECX,0x2                         ; 00493aac
    JL 0x00493ad4                       ; 00493aaf
        ;   XREF to: 00493ad4 (CONDITIONAL_JUMP)  ; LAB_00493ad4
    MOV EAX,[0x005fe9dc]                ; 00493ab1 | g_CGamePtr
    CMP dword ptr [EAX + 0x18],0x0      ; 00493ab6 | g_CGameInstance.nudity_flag
    SETNZ AL                            ; 00493aba
    MOV EDI,dword ptr [EBX]             ; 00493abd
    AND EAX,0xff                        ; 00493abf
    ADD EDI,ECX                         ; 00493ac4
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00493ac6
    MOV dword ptr [EBX],EDI             ; 00493acd
    JMP 0x004923ec                      ; 00493acf
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfb14                    ; 00493ad4 | = "Error parsing isNudityEnabled()."
        ;   Label: LAB_00493ad4
    MOV EDI,0x1c734b0                   ; 00493ad9
    PUSH EDI                            ; 00493ade | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493adf | = "Error parsing isNudityEnabled()." | s_Error_parsing_isNudityEn_005bfb14+2
        ;   Label: LAB_00493adf
    MOV byte ptr [EDI],AL               ; 00493ae1 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493ae3
    JZ 0x00493af7                       ; 00493ae5
        ;   XREF to: 00493af7 (CONDITIONAL_JUMP)  ; LAB_00493af7
    MOV AL,byte ptr [ESI + 0x1]         ; 00493ae7 | s_Error_parsing_isNudityEn_005bfb14+1 | s_Error_parsing_isNudityEn_005bfb14+3
    ADD ESI,0x2                         ; 00493aea
    MOV byte ptr [EDI + 0x1],AL         ; 00493aed | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493af0
    CMP AL,0x0                          ; 00493af3
    JNZ 0x00493adf                      ; 00493af5
        ;   XREF to: 00493adf (CONDITIONAL_JUMP)  ; LAB_00493adf
    POP EDI                             ; 00493af7
        ;   Label: LAB_00493af7
    MOV EAX,0xffffffff                  ; 00493af8
    MOV ESP,EBP                         ; 00493afd
    POP EBP                             ; 00493aff
    POP EDI                             ; 00493b00
    POP ESI                             ; 00493b01
    POP EBX                             ; 00493b02
    RET                                 ; 00493b03
    PUSH 0x5bfb35                       ; 00493b04 | = "isSfxActive"
        ;   Label: LAB_00493b04
    LEA EAX,[ESP + 0xf38]               ; 00493b09
    PUSH EAX                            ; 00493b10
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493b11
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493b16
    TEST EAX,EAX                        ; 00493b19
    JNZ 0x00493c3a                      ; 00493b1b
        ;   XREF to: 00493c3a (CONDITIONAL_JUMP)  ; LAB_00493c3a
    LEA EAX,[ESP + 0x105c]              ; 00493b21
    MOV ECX,0xffffffff                  ; 00493b28
    PUSH EAX                            ; 00493b2d
    LEA EAX,[ESP + 0x9c0]               ; 00493b2e
    MOV dword ptr [ESP + 0x1060],ECX    ; 00493b35
    PUSH EAX                            ; 00493b3c
    MOV EAX,0x5bfb41                    ; 00493b3d | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 00493b42
    PUSH EAX                            ; 00493b44 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493b45
    ADD EAX,ESI                         ; 00493b48
    PUSH EAX                            ; 00493b4a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493b4b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493b50
    CMP dword ptr [ESP + 0x105c],0x3    ; 00493b53
    JL 0x00493bc4                       ; 00493b5b
        ;   XREF to: 00493bc4 (CONDITIONAL_JUMP)  ; LAB_00493bc4
    LEA ESI,[ESP + 0x9bc]               ; 00493b5d
    MOV EDI,ESI                         ; 00493b64
    SUB ECX,ECX                         ; 00493b66
    DEC ECX                             ; 00493b68
    XOR EAX,EAX                         ; 00493b69
    SCASB.REPNE ES:EDI                  ; 00493b6b
    NOT ECX                             ; 00493b6d
    DEC ECX                             ; 00493b6f
    MOV EDI,ECX                         ; 00493b70
    TEST ECX,ECX                        ; 00493b72
    JLE 0x00493b8d                      ; 00493b74
        ;   XREF to: 00493b8d (CONDITIONAL_JUMP)  ; LAB_00493b8d
    LEA EAX,[ECX + ESI*0x1]             ; 00493b76
    MOV DL,byte ptr [EAX + -0x1]        ; 00493b79
        ;   Label: LAB_00493b79
    INC DL                              ; 00493b7c
    AND EDX,0xff                        ; 00493b7e
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 00493b84 | DAT_006074b8
    JNZ 0x00493bf4                      ; 00493b8b
        ;   XREF to: 00493bf4 (CONDITIONAL_JUMP)  ; LAB_00493bf4
    LEA EAX,[ESI + EDI*0x1]             ; 00493b8d
        ;   Label: LAB_00493b8d
    MOV byte ptr [EAX],0x0              ; 00493b90
    LEA EAX,[ESI + 0x1]                 ; 00493b93
    MOV dword ptr [ESP + 0x1060],EAX    ; 00493b96
    MOV AL,byte ptr [ESI]               ; 00493b9d
        ;   Label: LAB_00493b9d
    INC AL                              ; 00493b9f
    AND EAX,0xff                        ; 00493ba1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00493ba6 | DAT_006074b8
    JZ 0x00493c00                       ; 00493bad
        ;   XREF to: 00493c00 (CONDITIONAL_JUMP)  ; LAB_00493c00
    PUSH EDI                            ; 00493baf
    MOV EAX,dword ptr [ESP + 0x1064]    ; 00493bb0
    PUSH EAX                            ; 00493bb7
    PUSH ESI                            ; 00493bb8
    DEC EDI                             ; 00493bb9
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00493bba
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00493bbf
    JMP 0x00493b9d                      ; 00493bc2
        ;   XREF to: 00493b9d (UNCONDITIONAL_JUMP)  ; LAB_00493b9d
    MOV ESI,0x5bfb4f                    ; 00493bc4 | = "Error parsing isSfxActive parameters."
        ;   Label: LAB_00493bc4
    MOV EDI,0x1c734b0                   ; 00493bc9
    PUSH EDI                            ; 00493bce | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493bcf | = "Error parsing isSfxActive parameters." | s_Error_parsing_isSfxActiv_005bfb4f+2
        ;   Label: LAB_00493bcf
    MOV byte ptr [EDI],AL               ; 00493bd1 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493bd3
    JZ 0x00493be7                       ; 00493bd5
        ;   XREF to: 00493be7 (CONDITIONAL_JUMP)  ; LAB_00493be7
    MOV AL,byte ptr [ESI + 0x1]         ; 00493bd7 | s_Error_parsing_isSfxActiv_005bfb4f+1 | s_Error_parsing_isSfxActiv_005bfb4f+3
    ADD ESI,0x2                         ; 00493bda
    MOV byte ptr [EDI + 0x1],AL         ; 00493bdd | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493be0
    CMP AL,0x0                          ; 00493be3
    JNZ 0x00493bcf                      ; 00493be5
        ;   XREF to: 00493bcf (CONDITIONAL_JUMP)  ; LAB_00493bcf
    POP EDI                             ; 00493be7
        ;   Label: LAB_00493be7
    MOV EAX,0xffffffff                  ; 00493be8
    MOV ESP,EBP                         ; 00493bed
    POP EBP                             ; 00493bef
    POP EDI                             ; 00493bf0
    POP ESI                             ; 00493bf1
    POP EBX                             ; 00493bf2
    RET                                 ; 00493bf3
    DEC EDI                             ; 00493bf4
        ;   Label: LAB_00493bf4
    DEC EAX                             ; 00493bf5
    TEST EDI,EDI                        ; 00493bf6
    JG 0x00493b79                       ; 00493bf8
        ;   XREF to: 00493b79 (CONDITIONAL_JUMP)  ; LAB_00493b79
    JMP 0x00493b8d                      ; 00493bfe
        ;   XREF to: 00493b8d (UNCONDITIONAL_JUMP)  ; LAB_00493b8d
    XOR EAX,EAX                         ; 00493c00
        ;   Label: LAB_00493c00
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00493c02
    LEA EAX,[ESP + 0x9bc]               ; 00493c09
    PUSH EAX                            ; 00493c10
    MOV EDX,dword ptr [EBP + 0x14]      ; 00493c11
    PUSH EDX                            ; 00493c14
    CALL core_event.cpp_CEventList_getSfxHandle_FUN_00495110 ; 00493c15
        ;   XREF to: 00495110 (UNCONDITIONAL_CALL)  ; uint core_event.cpp_CEventList_getSfxHandle_FUN_00495110(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00493c1a
    TEST EAX,EAX                        ; 00493c1d
    JZ 0x00493c2c                       ; 00493c1f
        ;   XREF to: 00493c2c (CONDITIONAL_JUMP)  ; LAB_00493c2c
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00493c21
    MOV EAX,dword ptr [ESP + 0x105c]    ; 00493c2c
        ;   Label: LAB_00493c2c
    ADD dword ptr [EBX],EAX             ; 00493c33
    JMP 0x004923ec                      ; 00493c35
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bfb75                       ; 00493c3a | = "isTalking"
        ;   Label: LAB_00493c3a
    LEA EAX,[ESP + 0xf38]               ; 00493c3f
    PUSH EAX                            ; 00493c46
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493c47
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493c4c
    TEST EAX,EAX                        ; 00493c4f
    JNZ 0x00493d28                      ; 00493c51
        ;   XREF to: 00493d28 (CONDITIONAL_JUMP)  ; LAB_00493d28
    LEA EAX,[ESP + 0x1064]              ; 00493c57
    MOV EDI,0xffffffff                  ; 00493c5e
    PUSH EAX                            ; 00493c63
    LEA EAX,[ESP + 0xb50]               ; 00493c64
    MOV dword ptr [ESP + 0x1068],EDI    ; 00493c6b
    PUSH EAX                            ; 00493c72
    MOV EAX,0x5bfb7f                    ; 00493c73 | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 00493c78
    PUSH EAX                            ; 00493c7a | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493c7b
    ADD EAX,EDX                         ; 00493c7e
    PUSH EAX                            ; 00493c80
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493c81
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493c86
    CMP dword ptr [ESP + 0x1064],0x3    ; 00493c89
    JL 0x00493cd5                       ; 00493c91
        ;   XREF to: 00493cd5 (CONDITIONAL_JUMP)  ; LAB_00493cd5
    MOV EAX,0x7e2cb4                    ; 00493c93 | g_CCharacterClassInfo
    PUSH EAX                            ; 00493c98 | g_CCharacterClassInfo
    MOV ESI,dword ptr [0x007e2cec]      ; 00493c99 | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 00493c9f
    LEA EAX,[ESP + 0xb54]               ; 00493ca0
    PUSH EAX                            ; 00493ca7
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493ca8
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00493cad
    TEST EAX,EAX                        ; 00493cb0
    JZ 0x00493d05                       ; 00493cb2
        ;   XREF to: 00493d05 (CONDITIONAL_JUMP)  ; LAB_00493d05
    MOV EDI,dword ptr [0x005df604]      ; 00493cb4 | DAT_005df604
    CMP EAX,EDI                         ; 00493cba
    JNZ 0x00493d0e                      ; 00493cbc
        ;   XREF to: 00493d0e (CONDITIONAL_JUMP)  ; LAB_00493d0e
    XOR EAX,EDI                         ; 00493cbe
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00493cc0
        ;   Label: LAB_00493cc0
    MOV EAX,dword ptr [ESP + 0x1064]    ; 00493cc7
    ADD dword ptr [EBX],EAX             ; 00493cce
    JMP 0x004923ec                      ; 00493cd0
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfb8d                    ; 00493cd5 | = "Error parsing isTalking parameters."
        ;   Label: LAB_00493cd5
    MOV EDI,0x1c734b0                   ; 00493cda
    PUSH EDI                            ; 00493cdf | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493ce0 | = "Error parsing isTalking parameters." | s_Error_parsing_isTalking_005bfb8d+2
        ;   Label: LAB_00493ce0
    MOV byte ptr [EDI],AL               ; 00493ce2 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493ce4
    JZ 0x00493cf8                       ; 00493ce6
        ;   XREF to: 00493cf8 (CONDITIONAL_JUMP)  ; LAB_00493cf8
    MOV AL,byte ptr [ESI + 0x1]         ; 00493ce8 | s_Error_parsing_isTalking_005bfb8d+1 | s_Error_parsing_isTalking_005bfb8d+3
    ADD ESI,0x2                         ; 00493ceb
    MOV byte ptr [EDI + 0x1],AL         ; 00493cee | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493cf1
    CMP AL,0x0                          ; 00493cf4
    JNZ 0x00493ce0                      ; 00493cf6
        ;   XREF to: 00493ce0 (CONDITIONAL_JUMP)  ; LAB_00493ce0
    POP EDI                             ; 00493cf8
        ;   Label: LAB_00493cf8
    MOV EAX,0xffffffff                  ; 00493cf9
    MOV ESP,EBP                         ; 00493cfe
    POP EBP                             ; 00493d00
    POP EDI                             ; 00493d01
    POP ESI                             ; 00493d02
    POP EBX                             ; 00493d03
    RET                                 ; 00493d04
    MOV EAX,EDI                         ; 00493d05
        ;   Label: LAB_00493d05
    MOV ESP,EBP                         ; 00493d07
    POP EBP                             ; 00493d09
    POP EDI                             ; 00493d0a
    POP ESI                             ; 00493d0b
    POP EBX                             ; 00493d0c
    RET                                 ; 00493d0d
    FLD float ptr [EAX + 0x27b4]        ; 00493d0e
        ;   Label: LAB_00493d0e
    FLDZ                                ; 00493d14
    FCOMPP                              ; 00493d16
    FNSTSW AX                           ; 00493d18
    SAHF                                ; 00493d1a
    JNC 0x00493d24                      ; 00493d1b
        ;   XREF to: 00493d24 (CONDITIONAL_JUMP)  ; LAB_00493d24
    MOV EAX,0x1                         ; 00493d1d
    JMP 0x00493cc0                      ; 00493d22
        ;   XREF to: 00493cc0 (UNCONDITIONAL_JUMP)  ; LAB_00493cc0
    XOR EAX,EAX                         ; 00493d24
        ;   Label: LAB_00493d24
    JMP 0x00493cc0                      ; 00493d26
        ;   XREF to: 00493cc0 (UNCONDITIONAL_JUMP)  ; LAB_00493cc0
    PUSH 0x5bfbb1                       ; 00493d28 | = "isVictim"
        ;   Label: LAB_00493d28
    LEA EAX,[ESP + 0xf38]               ; 00493d2d
    PUSH EAX                            ; 00493d34
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493d35
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493d3a
    TEST EAX,EAX                        ; 00493d3d
    JNZ 0x00493ec5                      ; 00493d3f
        ;   XREF to: 00493ec5 (CONDITIONAL_JUMP)  ; LAB_00493ec5
    LEA EAX,[ESP + 0x1068]              ; 00493d45
    MOV ECX,0xffffffff                  ; 00493d4c
    PUSH EAX                            ; 00493d51
    LEA EAX,[ESP + 0x768]               ; 00493d52
    MOV dword ptr [ESP + 0x106c],ECX    ; 00493d59
    PUSH EAX                            ; 00493d60
    MOV EAX,0x5bfbba                    ; 00493d61 | = " ( %[^ )] )%n"
    MOV ESI,dword ptr [EBX]             ; 00493d66
    PUSH EAX                            ; 00493d68 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493d69
    ADD EAX,ESI                         ; 00493d6c
    PUSH EAX                            ; 00493d6e
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493d6f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493d74
    CMP dword ptr [ESP + 0x1068],0x3    ; 00493d77
    JL 0x00493e22                       ; 00493d7f
        ;   XREF to: 00493e22 (CONDITIONAL_JUMP)  ; LAB_00493e22
    MOV EAX,0x7e2cb4                    ; 00493d85 | g_CCharacterClassInfo
    PUSH EAX                            ; 00493d8a | g_CCharacterClassInfo
    MOV EAX,[0x007e2cec]                ; 00493d8b | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00493d90
    LEA EAX,[ESP + 0x76c]               ; 00493d91
    PUSH EAX                            ; 00493d98
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493d99
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00493d9e
    MOV dword ptr [ESP + 0x106c],EAX    ; 00493da1
    TEST EAX,EAX                        ; 00493da8
    JZ 0x00493e46                       ; 00493daa
        ;   XREF to: 00493e46 (CONDITIONAL_JUMP)  ; LAB_00493e46
    XOR ECX,ECX                         ; 00493db0
    MOV ESI,dword ptr [0x005df604]      ; 00493db2 | DAT_005df604
    MOV dword ptr [ESP + 0xfbc],ECX     ; 00493db8
    CMP EAX,ESI                         ; 00493dbf
    JZ 0x00493eb7                       ; 00493dc1
        ;   XREF to: 00493eb7 (CONDITIONAL_JUMP)  ; LAB_00493eb7
    ADD EAX,0x20                        ; 00493dc7
    MOV dword ptr [ESP + 0x1070],EAX    ; 00493dca
    LEA EAX,[ECX*0x4 + 0x0]             ; 00493dd1
    XOR EDI,EDI                         ; 00493dd8
    MOV dword ptr [ESP + 0x10a8],EAX    ; 00493dda
    MOV EAX,[0x00603b28]                ; 00493de1 | g_CDemonSetPtr
        ;   Label: LAB_00493de1
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 00493de6 | g_CDemonSetInstance.enemy_count
    JGE 0x00493eb7                      ; 00493dec
        ;   XREF to: 00493eb7 (CONDITIONAL_JUMP)  ; LAB_00493eb7
    ADD EAX,dword ptr [ESP + 0x10a8]    ; 00493df2
    MOV ESI,dword ptr [EAX + 0x150ff0]  ; 00493df9
    MOV EDX,dword ptr [ESP + 0x106c]    ; 00493dff
    CMP EDX,dword ptr [ESI + 0xcde4]    ; 00493e06
    JZ 0x00493e52                       ; 00493e0c
        ;   XREF to: 00493e52 (CONDITIONAL_JUMP)  ; LAB_00493e52
    MOV ESI,dword ptr [ESP + 0x10a8]    ; 00493e0e
        ;   Label: LAB_00493e0e
    ADD ESI,0x4                         ; 00493e15
    INC EDI                             ; 00493e18
    MOV dword ptr [ESP + 0x10a8],ESI    ; 00493e19
    JMP 0x00493de1                      ; 00493e20
        ;   XREF to: 00493de1 (UNCONDITIONAL_JUMP)  ; LAB_00493de1
    MOV ESI,0x5bfbc8                    ; 00493e22 | = "Error parsing isVictim parameters."
        ;   Label: LAB_00493e22
    MOV EDI,0x1c734b0                   ; 00493e27
    PUSH EDI                            ; 00493e2c | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493e2d | = "Error parsing isVictim parameters." | s_Error_parsing_isVictim_p_005bfbc8+2
        ;   Label: LAB_00493e2d
    MOV byte ptr [EDI],AL               ; 00493e2f | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493e31
    JZ 0x00493e45                       ; 00493e33
        ;   XREF to: 00493e45 (CONDITIONAL_JUMP)  ; LAB_00493e45
    MOV AL,byte ptr [ESI + 0x1]         ; 00493e35 | s_Error_parsing_isVictim_p_005bfbc8+1 | s_Error_parsing_isVictim_p_005bfbc8+3
    ADD ESI,0x2                         ; 00493e38
    MOV byte ptr [EDI + 0x1],AL         ; 00493e3b | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493e3e
    CMP AL,0x0                          ; 00493e41
    JNZ 0x00493e2d                      ; 00493e43
        ;   XREF to: 00493e2d (CONDITIONAL_JUMP)  ; LAB_00493e2d
    POP EDI                             ; 00493e45
        ;   Label: LAB_00493e45
    MOV EAX,0xffffffff                  ; 00493e46
        ;   Label: LAB_00493e46
    MOV ESP,EBP                         ; 00493e4b
    POP EBP                             ; 00493e4d
    POP EDI                             ; 00493e4e
    POP ESI                             ; 00493e4f
    POP EBX                             ; 00493e50
    RET                                 ; 00493e51
    PUSH ESI                            ; 00493e52
        ;   Label: LAB_00493e52
    MOV EAX,dword ptr [ESI + 0x154]     ; 00493e53
    CALL dword ptr [EAX + 0x10c]        ; 00493e59
    ADD ESP,0x4                         ; 00493e5f
    TEST EAX,EAX                        ; 00493e62
    JG 0x00493e0e                       ; 00493e64
        ;   XREF to: 00493e0e (CONDITIONAL_JUMP)  ; LAB_00493e0e
    PUSH ESI                            ; 00493e66
    MOV EAX,dword ptr [ESI + 0x154]     ; 00493e67
    CALL dword ptr [EAX + 0x70]         ; 00493e6d
    ADD ESP,0x4                         ; 00493e70
    TEST EAX,EAX                        ; 00493e73
    JNZ 0x00493e0e                      ; 00493e75
        ;   XREF to: 00493e0e (CONDITIONAL_JUMP)  ; LAB_00493e0e
    MOV EAX,dword ptr [ESP + 0x1070]    ; 00493e77
    FLD float ptr [ESI + 0x20]          ; 00493e7e
    FSUB float ptr [EAX]                ; 00493e81
    FMUL ST0                            ; 00493e83
    FLD float ptr [ESI + 0x24]          ; 00493e85
    FSUB float ptr [EAX + 0x4]          ; 00493e88
    FMUL ST0                            ; 00493e8b
    FLD float ptr [ESI + 0x28]          ; 00493e8d
    FXCH                                ; 00493e90
    FADDP ST2,ST0                       ; 00493e92
    FSUB float ptr [EAX + 0x8]          ; 00493e94
    FMUL ST0                            ; 00493e97
    FADDP                               ; 00493e99
    FSQRT                               ; 00493e9b
    FCOMP double ptr [0x005bfde8]       ; 00493e9d | DAT_005bfde8
    FNSTSW AX                           ; 00493ea3
    SAHF                                ; 00493ea5
    JA 0x00493e0e                       ; 00493ea6
        ;   XREF to: 00493e0e (CONDITIONAL_JUMP)  ; LAB_00493e0e
    MOV dword ptr [ESP + 0xfbc],0x1     ; 00493eac
    MOV EAX,dword ptr [ESP + 0x1068]    ; 00493eb7
        ;   Label: LAB_00493eb7
    ADD dword ptr [EBX],EAX             ; 00493ebe
    JMP 0x004923ec                      ; 00493ec0
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bfbeb                       ; 00493ec5 | = "isWeaponDrawn"
        ;   Label: LAB_00493ec5
    LEA EAX,[ESP + 0xf38]               ; 00493eca
    PUSH EAX                            ; 00493ed1
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493ed2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493ed7
    TEST EAX,EAX                        ; 00493eda
    JNZ 0x00493fa1                      ; 00493edc
        ;   XREF to: 00493fa1 (CONDITIONAL_JUMP)  ; LAB_00493fa1
    MOV dword ptr [ESP + 0x1080],0xffffffff ; 00493ee2
    LEA EAX,[ESP + 0x1080]              ; 00493eed
    PUSH EAX                            ; 00493ef4
    LEA EAX,[ESP + 0x95c]               ; 00493ef5
    PUSH EAX                            ; 00493efc
    MOV EAX,0x5bfbf9                    ; 00493efd | = " ( %[^ )] )%n"
    MOV EDX,dword ptr [EBX]             ; 00493f02
    PUSH EAX                            ; 00493f04 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493f05
    ADD EAX,EDX                         ; 00493f08
    PUSH EAX                            ; 00493f0a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493f0b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493f10
    CMP dword ptr [ESP + 0x1080],0x3    ; 00493f13
    JL 0x00493f5f                       ; 00493f1b
        ;   XREF to: 00493f5f (CONDITIONAL_JUMP)  ; LAB_00493f5f
    MOV EAX,0x1d5ba38                   ; 00493f1d
    PUSH EAX                            ; 00493f22
    MOV ESI,dword ptr [0x01d5ba70]      ; 00493f23 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 00493f29
    LEA EAX,[ESP + 0x960]               ; 00493f2a
    PUSH EAX                            ; 00493f31
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 00493f32
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00493f37
    TEST EAX,EAX                        ; 00493f3a
    JZ 0x00493f83                       ; 00493f3c
        ;   XREF to: 00493f83 (CONDITIONAL_JUMP)  ; LAB_00493f83
    MOV EDI,dword ptr [0x005df604]      ; 00493f3e | DAT_005df604
    CMP EAX,EDI                         ; 00493f44
    JNZ 0x00493f8f                      ; 00493f46
        ;   XREF to: 00493f8f (CONDITIONAL_JUMP)  ; LAB_00493f8f
    XOR EAX,EDI                         ; 00493f48
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00493f4a
        ;   Label: LAB_00493f4a
    MOV EAX,dword ptr [ESP + 0x1080]    ; 00493f51
    ADD dword ptr [EBX],EAX             ; 00493f58
    JMP 0x004923ec                      ; 00493f5a
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfc07                    ; 00493f5f | = "Error parsing isWeaponDrawn parameters."
        ;   Label: LAB_00493f5f
    MOV EDI,0x1c734b0                   ; 00493f64
    PUSH EDI                            ; 00493f69 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00493f6a | = "Error parsing isWeaponDrawn parameters." | s_Error_parsing_isWeaponDr_005bfc07+2
        ;   Label: LAB_00493f6a
    MOV byte ptr [EDI],AL               ; 00493f6c | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00493f6e
    JZ 0x00493f82                       ; 00493f70
        ;   XREF to: 00493f82 (CONDITIONAL_JUMP)  ; LAB_00493f82
    MOV AL,byte ptr [ESI + 0x1]         ; 00493f72 | s_Error_parsing_isWeaponDr_005bfc07+1 | s_Error_parsing_isWeaponDr_005bfc07+3
    ADD ESI,0x2                         ; 00493f75
    MOV byte ptr [EDI + 0x1],AL         ; 00493f78 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00493f7b
    CMP AL,0x0                          ; 00493f7e
    JNZ 0x00493f6a                      ; 00493f80
        ;   XREF to: 00493f6a (CONDITIONAL_JUMP)  ; LAB_00493f6a
    POP EDI                             ; 00493f82
        ;   Label: LAB_00493f82
    MOV EAX,0xffffffff                  ; 00493f83
        ;   Label: LAB_00493f83
    MOV ESP,EBP                         ; 00493f88
    POP EBP                             ; 00493f8a
    POP EDI                             ; 00493f8b
    POP ESI                             ; 00493f8c
    POP EBX                             ; 00493f8d
    RET                                 ; 00493f8e
    PUSH EAX                            ; 00493f8f
        ;   Label: LAB_00493f8f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00493f90
    CALL dword ptr [EDX + 0x148]        ; 00493f96
    ADD ESP,0x4                         ; 00493f9c
    JMP 0x00493f4a                      ; 00493f9f
        ;   XREF to: 00493f4a (UNCONDITIONAL_JUMP)  ; LAB_00493f4a
    PUSH 0x5bfc2f                       ; 00493fa1 | = "isWearingGasMask"
        ;   Label: LAB_00493fa1
    LEA EAX,[ESP + 0xf38]               ; 00493fa6
    PUSH EAX                            ; 00493fad
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00493fae
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00493fb3
    TEST EAX,EAX                        ; 00493fb6
    JNZ 0x0049408e                      ; 00493fb8
        ;   XREF to: 0049408e (CONDITIONAL_JUMP)  ; LAB_0049408e
    LEA EAX,[ESP + 0x1084]              ; 00493fbe
    MOV EDX,0xffffffff                  ; 00493fc5
    PUSH EAX                            ; 00493fca
    LEA EAX,[ESP + 0xce0]               ; 00493fcb
    MOV dword ptr [ESP + 0x1088],EDX    ; 00493fd2
    PUSH EAX                            ; 00493fd9
    MOV EAX,0x5bfc40                    ; 00493fda | = " ( %[^ )] )%n"
    MOV ECX,dword ptr [EBX]             ; 00493fdf
    PUSH EAX                            ; 00493fe1 | = " ( %[^ )] )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493fe2
    ADD EAX,ECX                         ; 00493fe5
    PUSH EAX                            ; 00493fe7
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00493fe8
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00493fed
    CMP dword ptr [ESP + 0x1084],0x3    ; 00493ff0
    JL 0x0049403a                       ; 00493ff8
        ;   XREF to: 0049403a (CONDITIONAL_JUMP)  ; LAB_0049403a
    MOV EAX,0x1d5ba38                   ; 00493ffa
    PUSH EAX                            ; 00493fff
    MOV EDI,dword ptr [0x01d5ba70]      ; 00494000 | g_CHeroClassInfo.name_hash
    PUSH EDI                            ; 00494006
    LEA EAX,[ESP + 0xce4]               ; 00494007
    PUSH EAX                            ; 0049400e
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0049400f
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 00494014
    TEST EAX,EAX                        ; 00494017
    JZ 0x0049405e                       ; 00494019
        ;   XREF to: 0049405e (CONDITIONAL_JUMP)  ; LAB_0049405e
    CMP EAX,dword ptr [0x005df604]      ; 0049401b | DAT_005df604
    JNZ 0x0049406a                      ; 00494021
        ;   XREF to: 0049406a (CONDITIONAL_JUMP)  ; LAB_0049406a
    XOR ESI,ESI                         ; 00494023
    MOV dword ptr [ESP + 0xfbc],ESI     ; 00494025
    MOV EAX,dword ptr [ESP + 0x1084]    ; 0049402c
    ADD dword ptr [EBX],EAX             ; 00494033
    JMP 0x004923ec                      ; 00494035
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfc4e                    ; 0049403a | = "Error parsing isWearingGasMask parame..."
        ;   Label: LAB_0049403a
    MOV EDI,0x1c734b0                   ; 0049403f
    PUSH EDI                            ; 00494044 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00494045 | = "Error parsing isWearingGasMask parame..." | s_Error_parsing_isWearingG_005bfc4e+2
        ;   Label: LAB_00494045
    MOV byte ptr [EDI],AL               ; 00494047 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00494049
    JZ 0x0049405d                       ; 0049404b
        ;   XREF to: 0049405d (CONDITIONAL_JUMP)  ; LAB_0049405d
    MOV AL,byte ptr [ESI + 0x1]         ; 0049404d | s_Error_parsing_isWearingG_005bfc4e+1 | s_Error_parsing_isWearingG_005bfc4e+3
    ADD ESI,0x2                         ; 00494050
    MOV byte ptr [EDI + 0x1],AL         ; 00494053 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00494056
    CMP AL,0x0                          ; 00494059
    JNZ 0x00494045                      ; 0049405b
        ;   XREF to: 00494045 (CONDITIONAL_JUMP)  ; LAB_00494045
    POP EDI                             ; 0049405d
        ;   Label: LAB_0049405d
    MOV EAX,0xffffffff                  ; 0049405e
        ;   Label: LAB_0049405e
    MOV ESP,EBP                         ; 00494063
    POP EBP                             ; 00494065
    POP EDI                             ; 00494066
    POP ESI                             ; 00494067
    POP EBX                             ; 00494068
    RET                                 ; 00494069
    CMP dword ptr [EAX + 0x20b58],0x2   ; 0049406a
        ;   Label: LAB_0049406a
    SETZ AL                             ; 00494071
    AND EAX,0xff                        ; 00494074
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00494079
    MOV EAX,dword ptr [ESP + 0x1084]    ; 00494080
    ADD dword ptr [EBX],EAX             ; 00494087
    JMP 0x004923ec                      ; 00494089
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bfc79                       ; 0049408e | = "isPuzzleActive"
        ;   Label: LAB_0049408e
    LEA EAX,[ESP + 0xf38]               ; 00494093
    PUSH EAX                            ; 0049409a
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0049409b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004940a0
    TEST EAX,EAX                        ; 004940a3
    JNZ 0x004941a4                      ; 004940a5
        ;   XREF to: 004941a4 (CONDITIONAL_JUMP)  ; LAB_004941a4
    LEA EAX,[ESP + 0x1088]              ; 004940ab
    MOV EDI,0xffffffff                  ; 004940b2
    PUSH EAX                            ; 004940b7
    LEA EAX,[ESP + 0x10]                ; 004940b8
    MOV dword ptr [ESP + 0x108c],EDI    ; 004940bc
    PUSH EAX                            ; 004940c3
    MOV EAX,0x5bfc88                    ; 004940c4 | = "(%[^)])%n"
    MOV EDX,dword ptr [EBX]             ; 004940c9
    PUSH EAX                            ; 004940cb | = "(%[^)])%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004940cc
    ADD EAX,EDX                         ; 004940cf
    PUSH EAX                            ; 004940d1
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004940d2
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004940d7
    CMP dword ptr [ESP + 0x1088],0x3    ; 004940da
    JL 0x00494163                       ; 004940e2
        ;   XREF to: 00494163 (CONDITIONAL_JUMP)  ; LAB_00494163
    MOV EAX,[0x007dff88]                ; 004940e8 | DAT_007dff88
    XOR ESI,ESI                         ; 004940ed
    XOR EDI,EDI                         ; 004940ef
    MOV dword ptr [ESP + 0x108c],ESI    ; 004940f1
    CMP ESI,EAX                         ; 004940f8
    JGE 0x0049412d                      ; 004940fa
        ;   XREF to: 0049412d (CONDITIONAL_JUMP)  ; LAB_0049412d
    SHL ESI,0x2                         ; 004940fc
    MOV EAX,dword ptr [ESI + 0x7dff8c]  ; 004940ff | DAT_007dff8c | DAT_007dff90
        ;   Label: LAB_004940ff
    PUSH EAX                            ; 00494105
    MOV EDX,dword ptr [EAX]             ; 00494106
    CALL dword ptr [EDX + 0x4]          ; 00494108
    ADD ESP,0x4                         ; 0049410b
    PUSH EAX                            ; 0049410e
    LEA EAX,[ESP + 0x10]                ; 0049410f
    PUSH EAX                            ; 00494113
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00494114
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00494119
    TEST EAX,EAX                        ; 0049411c
    JNZ 0x00494178                      ; 0049411e
        ;   XREF to: 00494178 (CONDITIONAL_JUMP)  ; LAB_00494178
    MOV EAX,dword ptr [ESI + 0x7dff8c]  ; 00494120 | DAT_007dff8c
    MOV dword ptr [ESP + 0x108c],EAX    ; 00494126
    CMP dword ptr [ESP + 0x108c],0x0    ; 0049412d
        ;   Label: LAB_0049412d
    JZ 0x0049418b                       ; 00494135
        ;   XREF to: 0049418b (CONDITIONAL_JUMP)  ; LAB_0049418b
    XOR ECX,ECX                         ; 00494137
    MOV ESI,dword ptr [0x007dffb4]      ; 00494139 | DAT_007dffb4
    MOV dword ptr [ESP + 0xfbc],ECX     ; 0049413f
    TEST ESI,ESI                        ; 00494146
    JZ 0x00494155                       ; 00494148
        ;   XREF to: 00494155 (CONDITIONAL_JUMP)  ; LAB_00494155
    MOV dword ptr [ESP + 0xfbc],0x1     ; 0049414a
    MOV EAX,dword ptr [ESP + 0x1088]    ; 00494155
        ;   Label: LAB_00494155
    ADD dword ptr [EBX],EAX             ; 0049415c
    JMP 0x004923ec                      ; 0049415e
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV EAX,0x5bfc92                    ; 00494163 | = "Error parsing activatePuzzle command"
        ;   Label: LAB_00494163
    PUSH EAX                            ; 00494168 | = "Error parsing activatePuzzle command"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00494169
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x4                         ; 0049416e
    MOV ESP,EBP                         ; 00494171
    POP EBP                             ; 00494173
    POP EDI                             ; 00494174
    POP ESI                             ; 00494175
    POP EBX                             ; 00494176
    RET                                 ; 00494177
    MOV EAX,[0x007dff88]                ; 00494178 | DAT_007dff88
        ;   Label: LAB_00494178
    INC EDI                             ; 0049417d
    ADD ESI,0x4                         ; 0049417e
    CMP EDI,EAX                         ; 00494181
    JL 0x004940ff                       ; 00494183
        ;   XREF to: 004940ff (CONDITIONAL_JUMP)  ; LAB_004940ff
    JMP 0x0049412d                      ; 00494189
        ;   XREF to: 0049412d (UNCONDITIONAL_JUMP)  ; LAB_0049412d
    LEA EAX,[ESP + 0xc]                 ; 0049418b
        ;   Label: LAB_0049418b
    PUSH EAX                            ; 0049418f
    PUSH 0x5bfcb7                       ; 00494190 | = "No such puzzle '%s'"
    CALL core_event.cpp_formatEventError_FUN_0048b7f0 ; 00494195
        ;   XREF to: 0048b7f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_formatEventError_FUN_0048b7f0(char * format)
    ADD ESP,0x8                         ; 0049419a
    MOV ESP,EBP                         ; 0049419d
    POP EBP                             ; 0049419f
    POP EDI                             ; 004941a0
    POP ESI                             ; 004941a1
    POP EBX                             ; 004941a2
    RET                                 ; 004941a3
    PUSH 0x5bfccb                       ; 004941a4 | = "randBool"
        ;   Label: LAB_004941a4
    LEA EAX,[ESP + 0xf38]               ; 004941a9
    PUSH EAX                            ; 004941b0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004941b1
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004941b6
    TEST EAX,EAX                        ; 004941b9
    JNZ 0x00494255                      ; 004941bb
        ;   XREF to: 00494255 (CONDITIONAL_JUMP)  ; LAB_00494255
    LEA EAX,[ESP + 0x1090]              ; 004941c1
    MOV EDI,0xffffffff                  ; 004941c8
    PUSH EAX                            ; 004941cd
    LEA EAX,[ESP + 0x1098]              ; 004941ce
    MOV dword ptr [ESP + 0x1094],EDI    ; 004941d5
    PUSH EAX                            ; 004941dc
    MOV EAX,0x5bfcd4                    ; 004941dd | = " ( %f )%n"
    MOV EDX,dword ptr [EBX]             ; 004941e2
    PUSH EAX                            ; 004941e4 | = " ( %f )%n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 004941e5
    ADD EAX,EDX                         ; 004941e8
    PUSH EAX                            ; 004941ea
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 004941eb
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004941f0
    CMP dword ptr [ESP + 0x1090],0x3    ; 004941f3
    JL 0x00494225                       ; 004941fb
        ;   XREF to: 00494225 (CONDITIONAL_JUMP)  ; LAB_00494225
    PUSH dword ptr [ESP + 0x1094]       ; 004941fd
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00494204
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00494209
    MOV ESI,dword ptr [EBX]             ; 0049420c
    MOV dword ptr [ESP + 0xfbc],EAX     ; 0049420e
    MOV EAX,dword ptr [ESP + 0x1090]    ; 00494215
    ADD ESI,EAX                         ; 0049421c
    MOV dword ptr [EBX],ESI             ; 0049421e
    JMP 0x004923ec                      ; 00494220
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfcde                    ; 00494225 | = "Error parsing randBool parameters."
        ;   Label: LAB_00494225
    MOV EDI,0x1c734b0                   ; 0049422a
    PUSH EDI                            ; 0049422f | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00494230 | = "Error parsing randBool parameters." | s_Error_parsing_randBool_p_005bfcde+2
        ;   Label: LAB_00494230
    MOV byte ptr [EDI],AL               ; 00494232 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00494234
    JZ 0x00494248                       ; 00494236
        ;   XREF to: 00494248 (CONDITIONAL_JUMP)  ; LAB_00494248
    MOV AL,byte ptr [ESI + 0x1]         ; 00494238 | s_Error_parsing_randBool_p_005bfcde+1 | s_Error_parsing_randBool_p_005bfcde+3
    ADD ESI,0x2                         ; 0049423b
    MOV byte ptr [EDI + 0x1],AL         ; 0049423e | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00494241
    CMP AL,0x0                          ; 00494244
    JNZ 0x00494230                      ; 00494246
        ;   XREF to: 00494230 (CONDITIONAL_JUMP)  ; LAB_00494230
    POP EDI                             ; 00494248
        ;   Label: LAB_00494248
    MOV EAX,0xffffffff                  ; 00494249
    MOV ESP,EBP                         ; 0049424e
    POP EBP                             ; 00494250
    POP EDI                             ; 00494251
    POP ESI                             ; 00494252
    POP EBX                             ; 00494253
    RET                                 ; 00494254
    PUSH 0x5bfd01                       ; 00494255 | = "reachedDest"
        ;   Label: LAB_00494255
    LEA EAX,[ESP + 0xf38]               ; 0049425a
    PUSH EAX                            ; 00494261
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00494262
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00494267
    TEST EAX,EAX                        ; 0049426a
    JNZ 0x0049434c                      ; 0049426c
        ;   XREF to: 0049434c (CONDITIONAL_JUMP)  ; LAB_0049434c
    LEA EAX,[ESP + 0x1098]              ; 00494272
    MOV EDX,0xffffffff                  ; 00494279
    PUSH EAX                            ; 0049427e
    LEA EAX,[ESP + 0xc7c]               ; 0049427f
    MOV dword ptr [ESP + 0x109c],EDX    ; 00494286
    PUSH EAX                            ; 0049428d
    MOV ECX,dword ptr [EBX]             ; 0049428e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00494290
    PUSH 0x5bfd0d                       ; 00494293 | = " ( %[^ )] )%n"
    ADD EAX,ECX                         ; 00494298
    PUSH EAX                            ; 0049429a
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049429b
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 004942a0
    CMP dword ptr [ESP + 0x1098],0x3    ; 004942a3
    JL 0x004942ed                       ; 004942ab
        ;   XREF to: 004942ed (CONDITIONAL_JUMP)  ; LAB_004942ed
    MOV EAX,0x7e2cb4                    ; 004942ad | g_CCharacterClassInfo
    PUSH EAX                            ; 004942b2 | g_CCharacterClassInfo
    MOV EDI,dword ptr [0x007e2cec]      ; 004942b3 | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 004942b9
    LEA EAX,[ESP + 0xc80]               ; 004942ba
    PUSH EAX                            ; 004942c1
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 004942c2
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 004942c7
    TEST EAX,EAX                        ; 004942ca
    JZ 0x00494311                       ; 004942cc
        ;   XREF to: 00494311 (CONDITIONAL_JUMP)  ; LAB_00494311
    CMP EAX,dword ptr [0x005df604]      ; 004942ce | DAT_005df604
    JNZ 0x0049431d                      ; 004942d4
        ;   XREF to: 0049431d (CONDITIONAL_JUMP)  ; LAB_0049431d
    XOR ECX,ECX                         ; 004942d6
    MOV dword ptr [ESP + 0xfbc],ECX     ; 004942d8
    MOV EAX,dword ptr [ESP + 0x1098]    ; 004942df
    ADD dword ptr [EBX],EAX             ; 004942e6
    JMP 0x004923ec                      ; 004942e8
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV ESI,0x5bfd1b                    ; 004942ed | = "Error parsing reachedDest parameters."
        ;   Label: LAB_004942ed
    MOV EDI,0x1c734b0                   ; 004942f2
    PUSH EDI                            ; 004942f7 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004942f8 | = "Error parsing reachedDest parameters." | s_Error_parsing_reachedDes_005bfd1b+2
        ;   Label: LAB_004942f8
    MOV byte ptr [EDI],AL               ; 004942fa | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004942fc
    JZ 0x00494310                       ; 004942fe
        ;   XREF to: 00494310 (CONDITIONAL_JUMP)  ; LAB_00494310
    MOV AL,byte ptr [ESI + 0x1]         ; 00494300 | s_Error_parsing_reachedDes_005bfd1b+1 | s_Error_parsing_reachedDes_005bfd1b+3
    ADD ESI,0x2                         ; 00494303
    MOV byte ptr [EDI + 0x1],AL         ; 00494306 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00494309
    CMP AL,0x0                          ; 0049430c
    JNZ 0x004942f8                      ; 0049430e
        ;   XREF to: 004942f8 (CONDITIONAL_JUMP)  ; LAB_004942f8
    POP EDI                             ; 00494310
        ;   Label: LAB_00494310
    MOV EAX,0xffffffff                  ; 00494311
        ;   Label: LAB_00494311
    MOV ESP,EBP                         ; 00494316
    POP EBP                             ; 00494318
    POP EDI                             ; 00494319
    POP ESI                             ; 0049431a
    POP EBX                             ; 0049431b
    RET                                 ; 0049431c
    PUSH EAX                            ; 0049431d
        ;   Label: LAB_0049431d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0049431e
    CALL dword ptr [EDX + 0x13c]        ; 00494324
    ADD ESP,0x4                         ; 0049432a
    TEST EAX,EAX                        ; 0049432d
    SETNZ AL                            ; 0049432f
    AND EAX,0xff                        ; 00494332
    MOV dword ptr [ESP + 0xfbc],EAX     ; 00494337
    MOV EAX,dword ptr [ESP + 0x1098]    ; 0049433e
    ADD dword ptr [EBX],EAX             ; 00494345
    JMP 0x004923ec                      ; 00494347
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    PUSH 0x5bfd41                       ; 0049434c | = "testActorBool"
        ;   Label: LAB_0049434c
    LEA EAX,[ESP + 0xf38]               ; 00494351
    PUSH EAX                            ; 00494358
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00494359
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049435e
    TEST EAX,EAX                        ; 00494361
    JNZ 0x004945e9                      ; 00494363
        ;   XREF to: 004945e9 (CONDITIONAL_JUMP)  ; LAB_004945e9
    LEA EAX,[ESP + 0x109c]              ; 00494369
    PUSH EAX                            ; 00494370
    LEA EAX,[ESP + 0x510]               ; 00494371
    MOV ESI,0xffffffff                  ; 00494378
    PUSH EAX                            ; 0049437d
    LEA EAX,[ESP + 0x5dc]               ; 0049437e
    MOV dword ptr [ESP + 0x10a4],ESI    ; 00494385
    PUSH EAX                            ; 0049438c
    MOV EDI,dword ptr [EBX]             ; 0049438d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049438f
    PUSH 0x5bfd4f                       ; 00494392 | = "(%[^,], %[^)])%n"
    ADD EAX,EDI                         ; 00494397
    PUSH EAX                            ; 00494399
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0049439a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x14                        ; 0049439f
    CMP dword ptr [ESP + 0x109c],0x3    ; 004943a2
    JL 0x00494425                       ; 004943aa
        ;   XREF to: 00494425 (CONDITIONAL_JUMP)  ; LAB_00494425
    LEA EDI,[ESP + 0x5d4]               ; 004943b0
    LEA ESI,[ESP + 0x5d4]               ; 004943b7
    SUB ECX,ECX                         ; 004943be
    DEC ECX                             ; 004943c0
    XOR EAX,EAX                         ; 004943c1
    SCASB.REPNE ES:EDI                  ; 004943c3
    NOT ECX                             ; 004943c5
    DEC ECX                             ; 004943c7
    MOV EAX,ECX                         ; 004943c8
    MOV EDI,ECX                         ; 004943ca
    TEST ECX,ECX                        ; 004943cc
    JLE 0x004943ee                      ; 004943ce
        ;   XREF to: 004943ee (CONDITIONAL_JUMP)  ; LAB_004943ee
    LEA EDX,[ESP + 0x5d4]               ; 004943d0
    LEA EAX,[ECX + EDX*0x1]             ; 004943d7
    MOV DL,byte ptr [EAX + -0x1]        ; 004943da
        ;   Label: LAB_004943da
    INC DL                              ; 004943dd
    AND EDX,0xff                        ; 004943df
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004943e5 | DAT_006074b8
    JNZ 0x00494455                      ; 004943ec
        ;   XREF to: 00494455 (CONDITIONAL_JUMP)  ; LAB_00494455
    LEA EAX,[ESI + EDI*0x1]             ; 004943ee
        ;   Label: LAB_004943ee
    MOV byte ptr [EAX],0x0              ; 004943f1
    LEA EAX,[ESI + 0x1]                 ; 004943f4
    MOV dword ptr [ESP + 0x10a0],EAX    ; 004943f7
    MOV AL,byte ptr [ESI]               ; 004943fe
        ;   Label: LAB_004943fe
    INC AL                              ; 00494400
    AND EAX,0xff                        ; 00494402
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 00494407 | DAT_006074b8
    JZ 0x00494461                       ; 0049440e
        ;   XREF to: 00494461 (CONDITIONAL_JUMP)  ; LAB_00494461
    PUSH EDI                            ; 00494410
    MOV EDX,dword ptr [ESP + 0x10a4]    ; 00494411
    PUSH EDX                            ; 00494418
    PUSH ESI                            ; 00494419
    DEC EDI                             ; 0049441a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049441b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00494420
    JMP 0x004943fe                      ; 00494423
        ;   XREF to: 004943fe (UNCONDITIONAL_JUMP)  ; LAB_004943fe
    MOV ESI,0x5bfd60                    ; 00494425 | = "Error parsing testActorBool parameters."
        ;   Label: LAB_00494425
    MOV EDI,0x1c734b0                   ; 0049442a
    PUSH EDI                            ; 0049442f | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00494430 | = "Error parsing testActorBool parameters." | s_Error_parsing_testActorB_005bfd60+2
        ;   Label: LAB_00494430
    MOV byte ptr [EDI],AL               ; 00494432 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00494434
    JZ 0x00494448                       ; 00494436
        ;   XREF to: 00494448 (CONDITIONAL_JUMP)  ; LAB_00494448
    MOV AL,byte ptr [ESI + 0x1]         ; 00494438 | s_Error_parsing_testActorB_005bfd60+1 | s_Error_parsing_testActorB_005bfd60+3
    ADD ESI,0x2                         ; 0049443b
    MOV byte ptr [EDI + 0x1],AL         ; 0049443e | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00494441
    CMP AL,0x0                          ; 00494444
    JNZ 0x00494430                      ; 00494446
        ;   XREF to: 00494430 (CONDITIONAL_JUMP)  ; LAB_00494430
    POP EDI                             ; 00494448
        ;   Label: LAB_00494448
    MOV EAX,0xffffffff                  ; 00494449
    MOV ESP,EBP                         ; 0049444e
    POP EBP                             ; 00494450
    POP EDI                             ; 00494451
    POP ESI                             ; 00494452
    POP EBX                             ; 00494453
    RET                                 ; 00494454
    DEC EDI                             ; 00494455
        ;   Label: LAB_00494455
    DEC EAX                             ; 00494456
    TEST EDI,EDI                        ; 00494457
    JG 0x004943da                       ; 00494459
        ;   XREF to: 004943da (CONDITIONAL_JUMP)  ; LAB_004943da
    JMP 0x004943ee                      ; 0049445f
        ;   XREF to: 004943ee (UNCONDITIONAL_JUMP)  ; LAB_004943ee
    LEA EAX,[ESP + 0x50c]               ; 00494461
        ;   Label: LAB_00494461
    LEA EDI,[ESP + 0x50c]               ; 00494468
    MOV dword ptr [ESP + 0x10a4],EAX    ; 0049446f
    SUB ECX,ECX                         ; 00494476
    DEC ECX                             ; 00494478
    XOR EAX,EAX                         ; 00494479
    SCASB.REPNE ES:EDI                  ; 0049447b
    NOT ECX                             ; 0049447d
    DEC ECX                             ; 0049447f
    MOV ESI,ECX                         ; 00494480
    TEST ECX,ECX                        ; 00494482
    JLE 0x004944a3                      ; 00494484
        ;   XREF to: 004944a3 (CONDITIONAL_JUMP)  ; LAB_004944a3
    LEA EAX,[ESP + 0x50c]               ; 00494486
    ADD EAX,ECX                         ; 0049448d
    MOV DL,byte ptr [EAX + -0x1]        ; 0049448f
        ;   Label: LAB_0049448f
    INC DL                              ; 00494492
    AND EDX,0xff                        ; 00494494
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0049449a | DAT_006074b8
    JNZ 0x004944df                      ; 004944a1
        ;   XREF to: 004944df (CONDITIONAL_JUMP)  ; LAB_004944df
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 004944a3
        ;   Label: LAB_004944a3
    LEA EDI,[EAX + 0x1]                 ; 004944aa
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 004944ad
    MOV EAX,dword ptr [ESP + 0x10a4]    ; 004944b1
        ;   Label: LAB_004944b1
    MOV AL,byte ptr [EAX]               ; 004944b8
    INC AL                              ; 004944ba
    AND EAX,0xff                        ; 004944bc
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004944c1 | DAT_006074b8
    JZ 0x004944e7                       ; 004944c8
        ;   XREF to: 004944e7 (CONDITIONAL_JUMP)  ; LAB_004944e7
    PUSH ESI                            ; 004944ca
    PUSH EDI                            ; 004944cb
    MOV EAX,dword ptr [ESP + 0x10ac]    ; 004944cc
    PUSH EAX                            ; 004944d3
    DEC ESI                             ; 004944d4
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004944d5
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004944da
    JMP 0x004944b1                      ; 004944dd
        ;   XREF to: 004944b1 (UNCONDITIONAL_JUMP)  ; LAB_004944b1
    DEC ESI                             ; 004944df
        ;   Label: LAB_004944df
    DEC EAX                             ; 004944e0
    TEST ESI,ESI                        ; 004944e1
    JG 0x0049448f                       ; 004944e3
        ;   XREF to: 0049448f (CONDITIONAL_JUMP)  ; LAB_0049448f
    JMP 0x004944a3                      ; 004944e5
        ;   XREF to: 004944a3 (UNCONDITIONAL_JUMP)  ; LAB_004944a3
    MOV ESI,dword ptr [0x005fbaf4]      ; 004944e7 | DAT_005fbaf4
        ;   Label: LAB_004944e7
    XOR ECX,ECX                         ; 004944ed
    XOR EDI,EDI                         ; 004944ef
    MOV dword ptr [ESP + 0xfc4],ECX     ; 004944f1
    TEST ESI,ESI                        ; 004944f8
    JLE 0x0049453f                      ; 004944fa
        ;   XREF to: 0049453f (CONDITIONAL_JUMP)  ; LAB_0049453f
    XOR ESI,ESI                         ; 004944fc
    CMP dword ptr [ESI + 0x5fba64],0x0  ; 004944fe | DAT_005fba64 | DAT_005fbaac
        ;   Label: LAB_004944fe
    JNZ 0x0049457c                      ; 00494505
        ;   XREF to: 0049457c (CONDITIONAL_JUMP)  ; LAB_0049457c
    LEA EAX,[ESP + 0x50c]               ; 0049450b
    PUSH EAX                            ; 00494512
    MOV EAX,0x5fba64                    ; 00494513 | DAT_005fba64
    ADD EAX,ESI                         ; 00494518
    MOV dword ptr [ESP + 0x1024],EAX    ; 0049451a | DAT_005fba64 | DAT_005fbaac
    ADD EAX,0x4                         ; 00494521
    PUSH EAX                            ; 00494524 | = "spectralFlag" | s_invulnerableFlag_005fbab0
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00494525
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049452a
    TEST EAX,EAX                        ; 0049452d
    JNZ 0x0049457c                      ; 0049452f
        ;   XREF to: 0049457c (CONDITIONAL_JUMP)  ; LAB_0049457c
    MOV EAX,dword ptr [ESP + 0x1020]    ; 00494531
    MOV dword ptr [ESP + 0xfc4],EAX     ; 00494538 | DAT_005fba64
    MOV ESI,dword ptr [ESP + 0xfc4]     ; 0049453f
        ;   Label: LAB_0049453f
    TEST ESI,ESI                        ; 00494546
    JZ 0x00494590                       ; 00494548
        ;   XREF to: 00494590 (CONDITIONAL_JUMP)  ; LAB_00494590
    LEA EAX,[ESI + 0x22]                ; 0049454a | = "CCharacter"
    PUSH EAX                            ; 0049454d | = "CCharacter"
    MOV EDI,dword ptr [ESI + 0x44]      ; 0049454e | DAT_005fbaa8
    PUSH EDI                            ; 00494551
    LEA EAX,[ESP + 0x5dc]               ; 00494552
    PUSH EAX                            ; 00494559
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0049455a
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0048b950(char * name, uint class_hash, char * class_name)
    ADD ESP,0xc                         ; 0049455f
    TEST EAX,EAX                        ; 00494562
    JZ 0x004945d3                       ; 00494564
        ;   XREF to: 004945d3 (CONDITIONAL_JUMP)  ; LAB_004945d3
    CMP EAX,dword ptr [0x005df604]      ; 00494566 | DAT_005df604
    JNZ 0x004945df                      ; 0049456c
        ;   XREF to: 004945df (CONDITIONAL_JUMP)  ; LAB_004945df
    XOR ESI,ESI                         ; 0049456e
    MOV dword ptr [ESP + 0xfbc],ESI     ; 00494570
    JMP 0x004923ec                      ; 00494577
        ;   XREF to: 004923ec (UNCONDITIONAL_JUMP)  ; LAB_004923ec
    MOV EDX,dword ptr [0x005fbaf4]      ; 0049457c | DAT_005fbaf4
        ;   Label: LAB_0049457c
    INC EDI                             ; 00494582
    ADD ESI,0x48                        ; 00494583
    CMP EDI,EDX                         ; 00494586
    JL 0x004944fe                       ; 00494588
        ;   XREF to: 004944fe (CONDITIONAL_JUMP)  ; LAB_004944fe
    JMP 0x0049453f                      ; 0049458e
        ;   XREF to: 0049453f (UNCONDITIONAL_JUMP)  ; LAB_0049453f
    LEA EAX,[ESP + 0x50c]               ; 00494590
        ;   Label: LAB_00494590
    PUSH EAX                            ; 00494597
    PUSH 0x5bfd88                       ; 00494598 | = "%s is not a valid boolean actor varia..."
    LEA EAX,[ESP + 0x314]               ; 0049459d
    PUSH EAX                            ; 004945a4
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004945a5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004945aa
    LEA ESI,[ESP + 0x30c]               ; 004945ad
    MOV EDI,0x1c734b0                   ; 004945b4
    PUSH EDI                            ; 004945b9 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004945ba
        ;   Label: LAB_004945ba
    MOV byte ptr [EDI],AL               ; 004945bc | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004945be
    JZ 0x004945d2                       ; 004945c0
        ;   XREF to: 004945d2 (CONDITIONAL_JUMP)  ; LAB_004945d2
    MOV AL,byte ptr [ESI + 0x1]         ; 004945c2
    ADD ESI,0x2                         ; 004945c5
    MOV byte ptr [EDI + 0x1],AL         ; 004945c8 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 004945cb
    CMP AL,0x0                          ; 004945ce
    JNZ 0x004945ba                      ; 004945d0
        ;   XREF to: 004945ba (CONDITIONAL_JUMP)  ; LAB_004945ba
    POP EDI                             ; 004945d2
        ;   Label: LAB_004945d2
    MOV EAX,0xffffffff                  ; 004945d3
        ;   Label: LAB_004945d3
    MOV ESP,EBP                         ; 004945d8
    POP EBP                             ; 004945da
    POP EDI                             ; 004945db
    POP ESI                             ; 004945dc
    POP EBX                             ; 004945dd
    RET                                 ; 004945de
    ADD EAX,dword ptr [ESI + 0x40]      ; 004945df | DAT_005fbaa4
        ;   Label: LAB_004945df
    MOV EAX,dword ptr [EAX]             ; 004945e2
    JMP 0x004923e5                      ; 004945e4
        ;   XREF to: 004923e5 (UNCONDITIONAL_JUMP)  ; LAB_004923e5
    MOV ESI,0x5bfdb6                    ; 004945e9 | = "Invalid meta-function"
        ;   Label: LAB_004945e9
    MOV EDI,0x1c734b0                   ; 004945ee
    PUSH EDI                            ; 004945f3 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 004945f4 | = "Invalid meta-function" | s_Invalid_meta_function_005bfdb6+2
        ;   Label: LAB_004945f4
    MOV byte ptr [EDI],AL               ; 004945f6 | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 004945f8
    JZ 0x0049460c                       ; 004945fa
        ;   XREF to: 0049460c (CONDITIONAL_JUMP)  ; LAB_0049460c
    MOV AL,byte ptr [ESI + 0x1]         ; 004945fc | s_Invalid_meta_function_005bfdb6+1 | s_Invalid_meta_function_005bfdb6+3
    ADD ESI,0x2                         ; 004945ff
    MOV byte ptr [EDI + 0x1],AL         ; 00494602 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00494605
    CMP AL,0x0                          ; 00494608
    JNZ 0x004945f4                      ; 0049460a
        ;   XREF to: 004945f4 (CONDITIONAL_JUMP)  ; LAB_004945f4
    POP EDI                             ; 0049460c
        ;   Label: LAB_0049460c
    MOV EAX,0xffffffff                  ; 0049460d
    MOV ESP,EBP                         ; 00494612
    POP EBP                             ; 00494614
    POP EDI                             ; 00494615
    POP ESI                             ; 00494616
    POP EBX                             ; 00494617
    RET                                 ; 00494618
    MOV EAX,dword ptr [ESP + 0xfbc]     ; 00494619
        ;   Label: LAB_00494619
    MOV ESP,EBP                         ; 00494620
    POP EBP                             ; 00494622
    POP EDI                             ; 00494623
    POP ESI                             ; 00494624
    POP EBX                             ; 00494625
    RET                                 ; 00494626

