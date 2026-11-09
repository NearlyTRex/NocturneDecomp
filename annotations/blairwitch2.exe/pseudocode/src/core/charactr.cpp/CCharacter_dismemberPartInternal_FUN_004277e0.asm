; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[15]:
;   core_batcreat.cpp_FUN_00412500 at 00412668
;   core_batman.cpp_FUN_00413f40 at 00414025
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0 at 0041a1eb
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 at 0041e977
;   core_charactr.cpp_FUN_00427770 at 004277c4
;   core_construc.cpp_FUN_00438060 at 00438183
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0 at 0043996a
;   core_dracbrid.cpp_FUN_00464a00 at 00464a53
;   core_gargoyle.cpp_FUN_004c0c00 at 004c0cd5
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30 at 004c3f10
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_007bdb54
;
; Called Functions:
;   core_bodypart.cpp_FUN_00417610
;   core_bodypart.cpp_FUN_00417690
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004277e0
        ;   Label: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
    PUSH ESI                            ; 004277e1
    PUSH EDI                            ; 004277e2
    PUSH EBP                            ; 004277e3
    MOV EBP,ESP                         ; 004277e4
    SUB ESP,0xb8                        ; 004277e6
    SUB EBP,0x72                        ; 004277ec
    MOV EAX,dword ptr [EBP + 0x86]      ; 004277ef
    MOV EBX,dword ptr [EBP + 0x86]      ; 004277f5
    MOV DL,byte ptr [EAX + 0x2514]      ; 004277fb
    ADD EBX,0x2b4                       ; 00427801
    TEST DL,DL                          ; 00427807
    JZ 0x00427825                       ; 00427809
        ;   XREF to: 00427825 (CONDITIONAL_JUMP)  ; LAB_00427825
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0042780b
    MOV EDX,dword ptr [EBP + 0x86]      ; 00427811
    SHL EAX,0x2                         ; 00427817
    ADD EAX,EDX                         ; 0042781a
    CMP dword ptr [EAX + 0x23f4],0x0    ; 0042781c
    JNZ 0x0042782d                      ; 00427823
        ;   XREF to: 0042782d (CONDITIONAL_JUMP)  ; LAB_0042782d
    LEA ESP,[EBP + 0x72]                ; 00427825
        ;   Label: LAB_00427825
    POP EBP                             ; 00427828
    POP EDI                             ; 00427829
    POP ESI                             ; 0042782a
    POP EBX                             ; 0042782b
    RET                                 ; 0042782c
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0042782d
        ;   Label: LAB_0042782d
    PUSH ESI                            ; 00427833
    MOV EDI,dword ptr [EBP + 0x8a]      ; 00427834
    PUSH EDI                            ; 0042783a
    PUSH EBX                            ; 0042783b
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130 ; 0042783c
        ;   XREF to: 00548130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    XOR EAX,EAX                         ; 00427841
    MOV dword ptr [EBP + 0x6a],EAX      ; 00427843
    MOV EAX,dword ptr [EBP + 0x86]      ; 00427846
    MOV EDX,dword ptr [EAX + 0x3448]    ; 0042784c
    ADD ESP,0xc                         ; 00427852
    TEST EDX,EDX                        ; 00427855
    JLE 0x00427895                      ; 00427857
        ;   XREF to: 00427895 (CONDITIONAL_JUMP)  ; LAB_00427895
    MOV EBX,dword ptr [EBP + 0x86]      ; 00427859
    ADD EAX,0x1134                      ; 0042785f
    ADD EBX,0x344c                      ; 00427864
    MOV dword ptr [EBP + 0x62],EAX      ; 0042786a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0042786d
        ;   Label: LAB_0042786d
    CMP ECX,dword ptr [EBX]             ; 00427873
    JZ 0x0042793d                       ; 00427875
        ;   XREF to: 0042793d (CONDITIONAL_JUMP)  ; LAB_0042793d
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0042787b
        ;   Label: LAB_0042787b
    MOV ESI,dword ptr [EBP + 0x86]      ; 0042787e
    ADD EBX,0x38                        ; 00427884
    INC ECX                             ; 00427887
    MOV EDI,dword ptr [ESI + 0x3448]    ; 00427888
    MOV dword ptr [EBP + 0x6a],ECX      ; 0042788e
    CMP ECX,EDI                         ; 00427891
    JL 0x0042786d                       ; 00427893
        ;   XREF to: 0042786d (CONDITIONAL_JUMP)  ; LAB_0042786d
    XOR EAX,EAX                         ; 00427895
        ;   Label: LAB_00427895
    MOV dword ptr [EBP + 0x6e],EAX      ; 00427897
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042789a
    CMP dword ptr [EAX + 0x3564],0x0    ; 004278a0
    JLE 0x004278e5                      ; 004278a7
        ;   XREF to: 004278e5 (CONDITIONAL_JUMP)  ; LAB_004278e5
    MOV EBX,dword ptr [EBP + 0x86]      ; 004278a9
    ADD EAX,0x1134                      ; 004278af
    ADD EBX,0x3570                      ; 004278b4
    MOV dword ptr [EBP + 0x66],EAX      ; 004278ba
    MOV ESI,dword ptr [EBP + 0x8e]      ; 004278bd
        ;   Label: LAB_004278bd
    CMP ESI,dword ptr [EBX]             ; 004278c3
    JZ 0x004279b5                       ; 004278c5
        ;   XREF to: 004279b5 (CONDITIONAL_JUMP)  ; LAB_004279b5
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004278cb
        ;   Label: LAB_004278cb
    MOV ESI,dword ptr [EBP + 0x86]      ; 004278ce
    ADD EBX,0x18                        ; 004278d4
    INC EDX                             ; 004278d7
    MOV ECX,dword ptr [ESI + 0x3564]    ; 004278d8
    MOV dword ptr [EBP + 0x6e],EDX      ; 004278de
    CMP EDX,ECX                         ; 004278e1
    JL 0x004278bd                       ; 004278e3
        ;   XREF to: 004278bd (CONDITIONAL_JUMP)  ; LAB_004278bd
    MOV EBX,dword ptr [EBP + 0x86]      ; 004278e5
        ;   Label: LAB_004278e5
    MOV EDI,dword ptr [EBP + 0x8e]      ; 004278eb
    XOR ESI,ESI                         ; 004278f1
    CMP EDI,dword ptr [EBX + 0x261c]    ; 004278f3
        ;   Label: LAB_004278f3
    JNZ 0x0042791a                      ; 004278f9
        ;   XREF to: 0042791a (CONDITIONAL_JUMP)  ; LAB_0042791a
    PUSH 0x0                            ; 004278fb
    MOV EAX,dword ptr [EBP + 0x86]      ; 004278fd
    PUSH ESI                            ; 00427903
    MOV EDX,dword ptr [EBP + 0x86]      ; 00427904
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0042790a
    PUSH EDX                            ; 00427910
    CALL dword ptr [EAX + 0x130]        ; 00427911
    ADD ESP,0xc                         ; 00427917
    INC ESI                             ; 0042791a
        ;   Label: LAB_0042791a
    ADD EBX,0x78                        ; 0042791b
    CMP ESI,0x2                         ; 0042791e
    JL 0x004278f3                       ; 00427921
        ;   XREF to: 004278f3 (CONDITIONAL_JUMP)  ; LAB_004278f3
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00427923
    MOV EBX,dword ptr [EBP + 0x92]      ; 00427929
    MOV dword ptr [EAX + 0x2b4],EBX     ; 0042792f
    LEA ESP,[EBP + 0x72]                ; 00427935
    POP EBP                             ; 00427938
    POP EDI                             ; 00427939
    POP ESI                             ; 0042793a
    POP EBX                             ; 0042793b
    RET                                 ; 0042793c
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 0042793d
        ;   Label: LAB_0042793d
    ADD EAX,dword ptr [EBP + 0x62]      ; 00427941
    PUSH EAX                            ; 00427944
    LEA EAX,[EBX + 0x8]                 ; 00427945
    PUSH EAX                            ; 00427948
    LEA ESI,[EBP + -0x46]               ; 00427949
    LEA EDI,[EBP + -0x16]               ; 0042794c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 0042794f
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00427954
    LEA ESI,[EBP + -0x46]               ; 00427959
    LEA EAX,[EBP + -0x16]               ; 0042795c
    ADD ESP,0x8                         ; 0042795f
    MOVSD.REP ES:EDI,ESI                ; 00427962
    PUSH EAX                            ; 00427964
    LEA ESI,[EBP + 0x1a]                ; 00427965
    CALL core_xform.cpp_FUN_00591de0    ; 00427968
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    ADD ESP,0x4                         ; 0042796d
    LEA EAX,[EBP + 0x26]                ; 00427970
    PUSH EAX                            ; 00427973
    MOV EAX,dword ptr [EBP + -0xa]      ; 00427974
    MOV dword ptr [EBP + 0x32],EAX      ; 00427977
    MOV EAX,dword ptr [EBP + 0x6]       ; 0042797a
    LEA EDI,[EBP + 0x26]                ; 0042797d
    MOV dword ptr [EBP + 0x36],EAX      ; 00427980
    MOV EAX,dword ptr [EBP + 0x16]      ; 00427983
    LEA ESI,[EBP + 0x1a]                ; 00427986
    MOV dword ptr [EBP + 0x3a],EAX      ; 00427989
    LEA EAX,[EBP + 0x3e]                ; 0042798c
    MOVSD ES:EDI,ESI                    ; 0042798f
    MOVSD ES:EDI,ESI                    ; 00427990
    MOVSD ES:EDI,ESI                    ; 00427991
    PUSH EAX                            ; 00427992
    LEA EDI,[EBP + 0x3e]                ; 00427993
    PUSH 0x7bdb54                       ; 00427996 | DAT_007bdb54
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0042799b
    LEA ESI,[EBP + 0x32]                ; 004279a1
    PUSH EAX                            ; 004279a4
    MOVSD ES:EDI,ESI                    ; 004279a5
    MOVSD ES:EDI,ESI                    ; 004279a6
    MOVSD ES:EDI,ESI                    ; 004279a7
    CALL core_bodypart.cpp_FUN_00417610 ; 004279a8
        ;   XREF to: 00417610 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00417610(CBodyPart * this_ptr, char * model_name, CVector3f * position_offset, CVector3f * euler_angles)
    ADD ESP,0x10                        ; 004279ad
    JMP 0x0042787b                      ; 004279b0
        ;   XREF to: 0042787b (UNCONDITIONAL_JUMP)  ; LAB_0042787b
    MOV EDI,dword ptr [EBX + 0x4]       ; 004279b5
        ;   Label: LAB_004279b5
    TEST EDI,EDI                        ; 004279b8
    JL 0x004278cb                       ; 004279ba
        ;   XREF to: 004278cb (CONDITIONAL_JUMP)  ; LAB_004278cb
    IMUL EAX,EDI,0x30                   ; 004279c0
    ADD EAX,dword ptr [EBP + 0x66]      ; 004279c3
    PUSH EAX                            ; 004279c6
    LEA EAX,[EBX + 0x8]                 ; 004279c7
    PUSH EAX                            ; 004279ca
    LEA ESI,[EBP + 0x56]                ; 004279cb
    LEA EDI,[EBP + 0x4a]                ; 004279ce
    CALL core_xform.cpp_FUN_00591530    ; 004279d1
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x56]                ; 004279d6
    LEA EAX,[EBP + 0x4a]                ; 004279d9
    ADD ESP,0x8                         ; 004279dc
    MOVSD ES:EDI,ESI                    ; 004279df
    MOVSD ES:EDI,ESI                    ; 004279e0
    MOVSD ES:EDI,ESI                    ; 004279e1
    PUSH EAX                            ; 004279e2
    MOV ESI,dword ptr [EBP + 0x8a]      ; 004279e3
    PUSH ESI                            ; 004279e9
    CALL core_bodypart.cpp_FUN_00417690 ; 004279ea
        ;   XREF to: 00417690 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00417690(CBodyPart * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004279ef
    JMP 0x004278cb                      ; 004279f2
        ;   XREF to: 004278cb (UNCONDITIONAL_JUMP)  ; LAB_004278cb

