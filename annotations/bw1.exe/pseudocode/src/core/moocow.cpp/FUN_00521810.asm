; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_FUN_00521810(CCharacter *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_moocow.cpp_CMooCow_processDamage_FUN_00521990 at 0052199d
;
; Referenced Globals:
;   TerminatedCString s_limb_wav_005ea3d9
;   undefined4 DAT_005ea3ea
;   undefined4 DAT_005ea3f2
;   undefined4 DAT_005ea3fa
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_createBodyPart_FUN_00418940
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521810
        ;   Label: core_moocow.cpp_FUN_00521810
    PUSH ESI                            ; 00521811
    PUSH EDI                            ; 00521812
    PUSH EBP                            ; 00521813
    SUB ESP,0xc                         ; 00521814
    MOV EBX,dword ptr [ESP + 0x20]      ; 00521817
    MOV ESI,dword ptr [ESP + 0x24]      ; 0052181b
    MOV EDX,dword ptr [EBX + 0xc1dc]    ; 0052181f
    MOV EAX,dword ptr [ESI]             ; 00521825
    CMP EAX,EDX                         ; 00521827
    JZ 0x00521837                       ; 00521829
        ;   XREF to: 00521837 (CONDITIONAL_JUMP)  ; LAB_00521837
    CMP EAX,dword ptr [EBX + 0xc1f0]    ; 0052182b
    JNZ 0x00521947                      ; 00521831
        ;   XREF to: 00521947 (CONDITIONAL_JUMP)  ; LAB_00521947
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00521837
        ;   Label: LAB_00521837
    MOV dword ptr [ESP + 0x8],EAX       ; 0052183a
    MOV EAX,[0x0061d95c]                ; 0052183e | g_CGamePtr
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00521843 | g_CGameInstance.field460_0x1fc
    JZ 0x00521854                       ; 0052184a
        ;   XREF to: 00521854 (CONDITIONAL_JUMP)  ; LAB_00521854
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0052184c
    MOV EAX,[0x0061d95c]                ; 00521854 | g_CGamePtr
        ;   Label: LAB_00521854
    MOV EDX,dword ptr [EAX + 0x14]      ; 00521859 | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 0052185c
    JNZ 0x00521864                      ; 0052185e
        ;   XREF to: 00521864 (CONDITIONAL_JUMP)  ; LAB_00521864
    MOV dword ptr [ESP + 0x8],EDX       ; 00521860
    PUSH dword ptr [ESP + 0x8]          ; 00521864
        ;   Label: LAB_00521864
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00521868
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0052186d
    TEST EAX,EAX                        ; 00521870
    JZ 0x00521947                       ; 00521872
        ;   XREF to: 00521947 (CONDITIONAL_JUMP)  ; LAB_00521947
    PUSH 0x0                            ; 00521878
    PUSH 0x0                            ; 0052187a
    PUSH 0x0                            ; 0052187c
    PUSH EBX                            ; 0052187e
    LEA EDI,[ESI + 0xc]                 ; 0052187f
    PUSH EDI                            ; 00521882
    LEA EAX,[EBX + 0x30]                ; 00521883
    PUSH EAX                            ; 00521886
    LEA EAX,[EBX + 0x20]                ; 00521887
    PUSH EAX                            ; 0052188a
    CALL core_bodypart.cpp_createBodyPart_FUN_00418940 ; 0052188b
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00521890
    PUSH 0x0                            ; 00521893
    MOV EDX,dword ptr [ESI]             ; 00521895
    PUSH EDX                            ; 00521897
    PUSH EAX                            ; 00521898
    PUSH EBX                            ; 00521899
    MOV EBP,EAX                         ; 0052189a
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 ; 0052189c
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 005218a1
    MOV ECX,dword ptr [EBX + 0xc1f0]    ; 005218a3
    ADD ESP,0x10                        ; 005218a9
    CMP EAX,ECX                         ; 005218ac
    JNZ 0x0052190f                      ; 005218ae
        ;   XREF to: 0052190f (CONDITIONAL_JUMP)  ; LAB_0052190f
    PUSH 0x0                            ; 005218b0
    PUSH EDI                            ; 005218b2
    MOV EAX,dword ptr [EBX + 0xc1dc]    ; 005218b3
    PUSH EAX                            ; 005218b9
    PUSH EBX                            ; 005218ba
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 005218bb
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005218c0
    PUSH 0x0                            ; 005218c3
    PUSH EDI                            ; 005218c5
    MOV EDX,dword ptr [EBX + 0xc1e0]    ; 005218c6
    PUSH EDX                            ; 005218cc
    PUSH EBX                            ; 005218cd
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 005218ce
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005218d3
    PUSH 0x0                            ; 005218d6
    PUSH EDI                            ; 005218d8
    MOV ECX,dword ptr [EBX + 0xc1e4]    ; 005218d9
    PUSH ECX                            ; 005218df
    PUSH EBX                            ; 005218e0
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 005218e1
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005218e6
    PUSH 0x0                            ; 005218e9
    PUSH EDI                            ; 005218eb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005218ec
    PUSH EAX                            ; 005218f2
    PUSH EBX                            ; 005218f3
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 005218f4
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005218f9
    PUSH 0x0                            ; 005218fc
    PUSH EDI                            ; 005218fe
    MOV EDX,dword ptr [EBX + 0xc1ec]    ; 005218ff
    PUSH EDX                            ; 00521905
    PUSH EBX                            ; 00521906
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 ; 00521907
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0052190c
    PUSH 0x5ea3d9                       ; 0052190f | = "limb?.wav"
        ;   Label: LAB_0052190f
    PUSH EBX                            ; 00521914
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0 ; 00521915
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0052191a
    PUSH EBP                            ; 0052191d
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 0052191e
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc1dc]    ; 00521923
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00521929
    ADD ESP,0x4                         ; 00521930
    TEST ECX,ECX                        ; 00521933
    JZ 0x00521969                       ; 00521935
        ;   XREF to: 00521969 (CONDITIONAL_JUMP)  ; LAB_00521969
    FLD float ptr [ESI + 0x8]           ; 00521937
        ;   Label: LAB_00521937
    FLD ST0                             ; 0052193a
    FMUL double ptr [0x005ea3ea]        ; 0052193c | DAT_005ea3ea
    FSTP ST1                            ; 00521942
    FSTP float ptr [ESI + 0x8]          ; 00521944
    MOV EDI,dword ptr [EBX + 0xc1dc]    ; 00521947
        ;   Label: LAB_00521947
    CMP EDI,dword ptr [ESI]             ; 0052194d
    JNZ 0x00521972                      ; 0052194f
        ;   XREF to: 00521972 (CONDITIONAL_JUMP)  ; LAB_00521972
    FLD float ptr [ESI + 0x4]           ; 00521951
    FLD ST0                             ; 00521954
    FMUL double ptr [0x005ea3fa]        ; 00521956 | DAT_005ea3fa
    FSTP ST1                            ; 0052195c
    FSTP float ptr [ESI + 0x4]          ; 0052195e
    ADD ESP,0xc                         ; 00521961
    POP EBP                             ; 00521964
    POP EDI                             ; 00521965
    POP ESI                             ; 00521966
    POP EBX                             ; 00521967
    RET                                 ; 00521968
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00521969
        ;   Label: LAB_00521969
    JMP 0x00521937                      ; 00521970
        ;   XREF to: 00521937 (UNCONDITIONAL_JUMP)  ; LAB_00521937
    FLD float ptr [ESI + 0x4]           ; 00521972
        ;   Label: LAB_00521972
    FLD ST0                             ; 00521975
    FMUL double ptr [0x005ea3f2]        ; 00521977 | DAT_005ea3f2
    FSTP ST1                            ; 0052197d
    FSTP float ptr [ESI + 0x4]          ; 0052197f
    ADD ESP,0xc                         ; 00521982
    POP EBP                             ; 00521985
    POP EDI                             ; 00521986
    POP ESI                             ; 00521987
    POP EBX                             ; 00521988
    RET                                 ; 00521989

