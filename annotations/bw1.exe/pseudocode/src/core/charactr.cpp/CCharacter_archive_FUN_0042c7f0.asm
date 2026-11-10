; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_bird.cpp_CBird_archive_FUN_00415780 at 0041578f
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520 at 004a0591
;   core_hero.cpp_CHero_archive_FUN_004eab00 at 004eab93
;   core_moocow.cpp_CMooCow_archive_FUN_005217d0 at 005217d6
;   core_npc.cpp_CNPC_archive_FUN_00531bf0 at 00531c04
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005d5731
;   TerminatedCString s_numCarryHands_005d573b
;   TerminatedCString s_carry_hand_005d5749
;   TerminatedCString s_carry_actor_005d5754
;   TerminatedCString s_carry_pos_005d5760
;   TerminatedCString s_carry_orient_005d576a
;   TerminatedCString s_numCarryHands_005d5777
;   TerminatedCString s_carry_hand_005d5785
;   TerminatedCString s_carry_actor_005d5790
;   TerminatedCString s_carry_pos_005d579c
;   TerminatedCString s_carry_orient_005d57a6
;   TerminatedCString s_talkToMeEvent_005d57b3
;   TerminatedCString s_grabbedBy_005d57c1
;   TerminatedCString s_grabbedType_005d57cb
;   TerminatedCString s_clothList_005d57d7
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveClothList_FUN_0040bce0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveLocalizedString_FUN_0040b560
;   core_actor.cpp_archiveOrientation_FUN_0040b260
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c7f0
        ;   Label: core_charactr.cpp_CCharacter_archive_FUN_0042c7f0
    PUSH ESI                            ; 0042c7f1
    PUSH EDI                            ; 0042c7f2
    PUSH EBP                            ; 0042c7f3
    SUB ESP,0x58                        ; 0042c7f4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0042c7f7
    PUSH EBX                            ; 0042c7fb
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0042c7fc
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042c801
    PUSH 0x5d5731                       ; 0042c804 | = "hitPoints"
    LEA EAX,[EBX + 0x2538]              ; 0042c809
    PUSH EAX                            ; 0042c80f
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042c810
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV EDX,dword ptr [0x00610cc8]      ; 0042c815 | g_CCharacterClassVersion
    ADD ESP,0x8                         ; 0042c81b
    CMP EDX,0x2                         ; 0042c81e
    JL 0x0042c8a2                       ; 0042c821
        ;   XREF to: 0042c8a2 (CONDITIONAL_JUMP)  ; LAB_0042c8a2
    CMP dword ptr [0x007c3038],0x1      ; 0042c827 | DAT_007c3038
    JZ 0x0042c9d6                       ; 0042c82e
        ;   XREF to: 0042c9d6 (CONDITIONAL_JUMP)  ; LAB_0042c9d6
    XOR ESI,ESI                         ; 0042c834
    MOV EAX,EBX                         ; 0042c836
    MOV dword ptr [ESP + 0x54],ESI      ; 0042c838
    MOV dword ptr [ESP + 0x50],ESI      ; 0042c83c
    LEA ESI,[EBX + 0xf0]                ; 0042c840
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0042c846
        ;   Label: LAB_0042c846
    JZ 0x0042c853                       ; 0042c84d
        ;   XREF to: 0042c853 (CONDITIONAL_JUMP)  ; LAB_0042c853
    INC dword ptr [ESP + 0x50]          ; 0042c84f
    ADD EAX,0x78                        ; 0042c853
        ;   Label: LAB_0042c853
    CMP EAX,ESI                         ; 0042c856
    JNZ 0x0042c846                      ; 0042c858
        ;   XREF to: 0042c846 (CONDITIONAL_JUMP)  ; LAB_0042c846
    PUSH 0x5d5777                       ; 0042c85a | = "numCarryHands"
    LEA EAX,[ESP + 0x54]                ; 0042c85f
    MOV ESI,0x2                         ; 0042c863
    PUSH EAX                            ; 0042c868
    XOR EDI,EDI                         ; 0042c869
    MOV dword ptr [ESP + 0x5c],ESI      ; 0042c86b
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c86f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c874
    LEA EBP,[EBX + 0x25a8]              ; 0042c877
    MOV dword ptr [ESP + 0x54],EDI      ; 0042c87d
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042c881
        ;   Label: LAB_0042c881
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0042c886
    JNZ 0x0042cab5                      ; 0042c88e
        ;   XREF to: 0042cab5 (CONDITIONAL_JUMP)  ; LAB_0042cab5
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042c894
        ;   Label: LAB_0042c894
    INC ECX                             ; 0042c898
    MOV dword ptr [ESP + 0x54],ECX      ; 0042c899
    CMP ECX,0x2                         ; 0042c89d
    JL 0x0042c881                       ; 0042c8a0
        ;   XREF to: 0042c881 (CONDITIONAL_JUMP)  ; LAB_0042c881
    CMP dword ptr [0x00610cc8],0x3      ; 0042c8a2 | g_CCharacterClassVersion
        ;   Label: LAB_0042c8a2
    JL 0x0042c8bf                       ; 0042c8a9
        ;   XREF to: 0042c8bf (CONDITIONAL_JUMP)  ; LAB_0042c8bf
    PUSH 0x5d57b3                       ; 0042c8ab | = "talkToMeEvent"
    LEA EAX,[EBX + 0x2698]              ; 0042c8b0
    PUSH EAX                            ; 0042c8b6
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0042c8b7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042c8bc
    CMP dword ptr [0x00610cc8],0x4      ; 0042c8bf | g_CCharacterClassVersion
        ;   Label: LAB_0042c8bf
    JL 0x0042c904                       ; 0042c8c6
        ;   XREF to: 0042c904 (CONDITIONAL_JUMP)  ; LAB_0042c904
    PUSH 0x5d57c1                       ; 0042c8c8 | = "grabbedBy"
    LEA EAX,[EBX + 0x26fc]              ; 0042c8cd
    PUSH EAX                            ; 0042c8d3
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042c8d4
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0042c8d9
    PUSH 0x5d57cb                       ; 0042c8dc | = "grabbedType"
    LEA EAX,[EBX + 0x2700]              ; 0042c8e1
    PUSH EAX                            ; 0042c8e7
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c8e8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c8ed
    PUSH 0x5d57d7                       ; 0042c8f0 | = "clothList"
    LEA EAX,[EBX + 0x2ca0]              ; 0042c8f5
    PUSH EAX                            ; 0042c8fb
    CALL core_actor.cpp_archiveClothList_FUN_0040bce0 ; 0042c8fc
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bce0()
    ADD ESP,0x8                         ; 0042c901
    CMP dword ptr [0x00610cc8],0x5      ; 0042c904 | g_CCharacterClassVersion
        ;   Label: LAB_0042c904
    JL 0x0042c921                       ; 0042c90b
        ;   XREF to: 0042c921 (CONDITIONAL_JUMP)  ; LAB_0042c921
    PUSH 0x5d57e1                       ; 0042c90d | = "sizeScale"
    LEA EAX,[EBX + 0x27b8]              ; 0042c912
    PUSH EAX                            ; 0042c918
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042c919
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042c91e
    CMP dword ptr [0x00610cc8],0x6      ; 0042c921 | g_CCharacterClassVersion
        ;   Label: LAB_0042c921
    JL 0x0042cb4a                       ; 0042c928
        ;   XREF to: 0042cb4a (CONDITIONAL_JUMP)  ; LAB_0042cb4a
    PUSH 0x5d57eb                       ; 0042c92e | = "healthBarMode"
    LEA EAX,[EBX + 0x2540]              ; 0042c933
    PUSH EAX                            ; 0042c939
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c93a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c93f
    PUSH 0x5d57f9                       ; 0042c942 | = "descriptiveName"
    LEA EAX,[EBX + 0x2544]              ; 0042c947
    PUSH EAX                            ; 0042c94d
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b560 ; 0042c94e
        ;   XREF to: 0040b560 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b560(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 0042c953
    PUSH 0x5d5809                       ; 0042c956 | = "maxHitPoints"
    LEA EAX,[EBX + 0x253c]              ; 0042c95b
    PUSH EAX                            ; 0042c961
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042c962
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042c967
    CMP dword ptr [0x00610cc8],0x7      ; 0042c96a | g_CCharacterClassVersion
        ;   Label: LAB_0042c96a
    JL 0x0042c987                       ; 0042c971
        ;   XREF to: 0042c987 (CONDITIONAL_JUMP)  ; LAB_0042c987
    PUSH 0x5d5816                       ; 0042c973 | = "spectralFlag"
    LEA EAX,[EBX + 0x27a8]              ; 0042c978
    PUSH EAX                            ; 0042c97e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c97f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c984
    CMP dword ptr [0x00610cc8],0x8      ; 0042c987 | g_CCharacterClassVersion
        ;   Label: LAB_0042c987
    JL 0x0042c9a4                       ; 0042c98e
        ;   XREF to: 0042c9a4 (CONDITIONAL_JUMP)  ; LAB_0042c9a4
    PUSH 0x5d5823                       ; 0042c990 | = "invulnerableFlag"
    LEA EAX,[EBX + 0x27b0]              ; 0042c995
    PUSH EAX                            ; 0042c99b
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c99c
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c9a1
    CMP dword ptr [0x00610cc8],0x9      ; 0042c9a4 | g_CCharacterClassVersion
        ;   Label: LAB_0042c9a4
    JL 0x0042c9c1                       ; 0042c9ab
        ;   XREF to: 0042c9c1 (CONDITIONAL_JUMP)  ; LAB_0042c9c1
    PUSH 0x5d5834                       ; 0042c9ad | = "etheralFlag"
    LEA EAX,[EBX + 0x27a4]              ; 0042c9b2
    PUSH EAX                            ; 0042c9b8
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c9b9
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c9be
    CMP dword ptr [0x00610cc8],0xa      ; 0042c9c1 | g_CCharacterClassVersion
        ;   Label: LAB_0042c9c1
    JGE 0x0042cb5b                      ; 0042c9c8
        ;   XREF to: 0042cb5b (CONDITIONAL_JUMP)  ; LAB_0042cb5b
    ADD ESP,0x58                        ; 0042c9ce
    POP EBP                             ; 0042c9d1
    POP EDI                             ; 0042c9d2
    POP ESI                             ; 0042c9d3
    POP EBX                             ; 0042c9d4
    RET                                 ; 0042c9d5
    PUSH 0x5d573b                       ; 0042c9d6 | = "numCarryHands"
        ;   Label: LAB_0042c9d6
    LEA EAX,[ESP + 0x4c]                ; 0042c9db
    PUSH EAX                            ; 0042c9df
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042c9e0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042c9e5
    XOR EBP,EBP                         ; 0042c9e8
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042c9ea
    MOV dword ptr [ESP + 0x54],EBP      ; 0042c9ee
    TEST EAX,EAX                        ; 0042c9f2
    JLE 0x0042c8a2                      ; 0042c9f4
        ;   XREF to: 0042c8a2 (CONDITIONAL_JUMP)  ; LAB_0042c8a2
    LEA ESI,[EBX + 0x25a8]              ; 0042c9fa
    PUSH 0x5d5749                       ; 0042ca00 | = "carry hand"
        ;   Label: LAB_0042ca00
    LEA EAX,[ESP + 0x50]                ; 0042ca05
    PUSH EAX                            ; 0042ca09
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042ca0a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042ca0f
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042ca12
    ADD EAX,ESI                         ; 0042ca17
    PUSH 0x5d5754                       ; 0042ca19 | = "carry actor"
    ADD EAX,0x8                         ; 0042ca1e
    PUSH EAX                            ; 0042ca21
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042ca22
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0042ca27
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042ca2a
    ADD EAX,ESI                         ; 0042ca2f
    ADD EAX,0xc                         ; 0042ca31
    PUSH EAX                            ; 0042ca34
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0 ; 0042ca35
        ;   XREF to: 005b53f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005b53f0()
    ADD ESP,0x4                         ; 0042ca3a
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042ca3d
    MOV EBP,dword ptr [0x00610cc8]      ; 0042ca42 | g_CCharacterClassVersion
    MOV dword ptr [EBX + EAX*0x1 + 0x25e8],0x3f800000 ; 0042ca48
    CMP EBP,0xb                         ; 0042ca53
    JL 0x0042ca9b                       ; 0042ca56
        ;   XREF to: 0042ca9b (CONDITIONAL_JUMP)  ; LAB_0042ca9b
    PUSH 0x5d5760                       ; 0042ca58 | = "carry pos"
    LEA EAX,[ESP + 0x1c]                ; 0042ca5d
    PUSH EAX                            ; 0042ca61
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0042ca62
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 0042ca67
    PUSH 0x5d576a                       ; 0042ca6a | = "carry orient"
    LEA EAX,[ESP + 0x28]                ; 0042ca6f
    PUSH EAX                            ; 0042ca73
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 0042ca74
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b260()
    ADD ESP,0x8                         ; 0042ca79
    LEA EAX,[ESP + 0x24]                ; 0042ca7c
    PUSH EAX                            ; 0042ca80
    LEA EAX,[ESP + 0x1c]                ; 0042ca81
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042ca85
    PUSH EAX                            ; 0042ca89
    IMUL EAX,EDX,0x78                   ; 0042ca8a
    ADD EAX,ESI                         ; 0042ca8d
    ADD EAX,0xc                         ; 0042ca8f
    PUSH EAX                            ; 0042ca92
    CALL core_xform.cpp_FUN_005b5760    ; 0042ca93
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042ca98
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042ca9b
        ;   Label: LAB_0042ca9b
    INC EDI                             ; 0042ca9f
    MOV EBP,dword ptr [ESP + 0x48]      ; 0042caa0
    MOV dword ptr [ESP + 0x54],EDI      ; 0042caa4
    CMP EDI,EBP                         ; 0042caa8
    JL 0x0042ca00                       ; 0042caaa
        ;   XREF to: 0042ca00 (CONDITIONAL_JUMP)  ; LAB_0042ca00
    JMP 0x0042c8a2                      ; 0042cab0
        ;   XREF to: 0042c8a2 (UNCONDITIONAL_JUMP)  ; LAB_0042c8a2
    PUSH 0x5d5785                       ; 0042cab5 | = "carry hand"
        ;   Label: LAB_0042cab5
    LEA EAX,[ESP + 0x58]                ; 0042caba
    PUSH EAX                            ; 0042cabe
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042cabf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042cac4
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042cac7
    ADD EAX,EBP                         ; 0042cacc
    PUSH 0x5d5790                       ; 0042cace | = "carry actor"
    ADD EAX,0x8                         ; 0042cad3
    PUSH EAX                            ; 0042cad6
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042cad7
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0042cadc
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042cadf
    ADD EAX,EBP                         ; 0042cae4
    ADD EAX,0xc                         ; 0042cae6
    PUSH EAX                            ; 0042cae9
    LEA ESI,[ESP + 0x4]                 ; 0042caea
    CALL core_xform.cpp_FUN_005b6270    ; 0042caee
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 0042caf3
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042caf6
    LEA EDI,[ESP + 0x3c]                ; 0042cafb
    ADD EAX,EBP                         ; 0042caff
    MOV ESI,ESP                         ; 0042cb01
    ADD EAX,0xc                         ; 0042cb03
    MOVSD ES:EDI,ESI                    ; 0042cb06
    MOVSD ES:EDI,ESI                    ; 0042cb07
    MOVSD ES:EDI,ESI                    ; 0042cb08
    PUSH EAX                            ; 0042cb09
    LEA ESI,[ESP + 0x10]                ; 0042cb0a
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 0042cb0e
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    ADD ESP,0x4                         ; 0042cb13
    LEA EDI,[ESP + 0x30]                ; 0042cb16
    PUSH 0x5d579c                       ; 0042cb1a | = "carry pos"
    LEA EAX,[ESP + 0x40]                ; 0042cb1f
    LEA ESI,[ESP + 0x10]                ; 0042cb23
    PUSH EAX                            ; 0042cb27
    MOVSD ES:EDI,ESI                    ; 0042cb28
    MOVSD ES:EDI,ESI                    ; 0042cb29
    MOVSD ES:EDI,ESI                    ; 0042cb2a
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0042cb2b
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 0042cb30
    PUSH 0x5d57a6                       ; 0042cb33 | = "carry orient"
    LEA EAX,[ESP + 0x34]                ; 0042cb38
    PUSH EAX                            ; 0042cb3c
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 0042cb3d
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b260()
    ADD ESP,0x8                         ; 0042cb42
    JMP 0x0042c894                      ; 0042cb45
        ;   XREF to: 0042c894 (UNCONDITIONAL_JUMP)  ; LAB_0042c894
    MOV EAX,dword ptr [EBX + 0x2538]    ; 0042cb4a
        ;   Label: LAB_0042cb4a
    MOV dword ptr [EBX + 0x253c],EAX    ; 0042cb50
    JMP 0x0042c96a                      ; 0042cb56
        ;   XREF to: 0042c96a (UNCONDITIONAL_JUMP)  ; LAB_0042c96a
    PUSH 0x5d5840                       ; 0042cb5b | = "scriptWalkDest"
        ;   Label: LAB_0042cb5b
    LEA EAX,[EBX + 0x2704]              ; 0042cb60
    PUSH EAX                            ; 0042cb66
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042cb67
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0042cb6c
    PUSH 0x5d584f                       ; 0042cb6f | = "scriptWalkDist"
    LEA EAX,[EBX + 0x2708]              ; 0042cb74
    PUSH EAX                            ; 0042cb7a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042cb7b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042cb80
    PUSH 0x5d585e                       ; 0042cb83 | = "scriptRunDist"
    LEA EAX,[EBX + 0x270c]              ; 0042cb88
    PUSH EAX                            ; 0042cb8e
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042cb8f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042cb94
    PUSH 0x5d586c                       ; 0042cb97 | = "scriptWalkTimer"
    LEA EAX,[EBX + 0x2710]              ; 0042cb9c
    PUSH EAX                            ; 0042cba2
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042cba3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042cba8
    PUSH 0x5d587c                       ; 0042cbab | = "scriptWalkState"
    LEA EAX,[EBX + 0x273c]              ; 0042cbb0
    PUSH EAX                            ; 0042cbb6
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042cbb7
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042cbbc
    PUSH 0x5d588c                       ; 0042cbbf | = "scriptDoorToOpen"
    ADD EBX,0x2740                      ; 0042cbc4
    PUSH EBX                            ; 0042cbca
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042cbcb
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0042cbd0
    ADD ESP,0x58                        ; 0042cbd3
    POP EBP                             ; 0042cbd6
    POP EDI                             ; 0042cbd7
    POP ESI                             ; 0042cbd8
    POP EBX                             ; 0042cbd9
    RET                                 ; 0042cbda

