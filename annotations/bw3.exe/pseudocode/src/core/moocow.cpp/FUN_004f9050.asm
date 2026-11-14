; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_FUN_004f9050(CCharacter *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_moocow.cpp_CMooCow_processDamage_FUN_004f91d0 at 004f91dd
;
; Referenced Globals:
;   TerminatedCString s_limb_wav_005c9213
;   undefined4 DAT_005c9224
;   undefined4 DAT_005c922c
;   undefined4 DAT_005c9234
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9050
        ;   Label: core_moocow.cpp_FUN_004f9050
    PUSH ESI                            ; 004f9051
    PUSH EDI                            ; 004f9052
    PUSH EBP                            ; 004f9053
    SUB ESP,0xc                         ; 004f9054
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f9057
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f905b
    MOV EDX,dword ptr [EBX + 0xcdd8]    ; 004f905f
    MOV EAX,dword ptr [ESI]             ; 004f9065
    CMP EAX,EDX                         ; 004f9067
    JZ 0x004f9077                       ; 004f9069
        ;   XREF to: 004f9077 (CONDITIONAL_JUMP)  ; LAB_004f9077
    CMP EAX,dword ptr [EBX + 0xcdec]    ; 004f906b
    JNZ 0x004f9187                      ; 004f9071
        ;   XREF to: 004f9187 (CONDITIONAL_JUMP)  ; LAB_004f9187
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004f9077
        ;   Label: LAB_004f9077
    MOV dword ptr [ESP + 0x8],EAX       ; 004f907a
    MOV EAX,[0x005fe9dc]                ; 004f907e | g_CGamePtr
    CMP dword ptr [EAX + 0x204],0x0     ; 004f9083 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x004f9094                       ; 004f908a
        ;   XREF to: 004f9094 (CONDITIONAL_JUMP)  ; LAB_004f9094
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004f908c
    MOV EAX,[0x005fe9dc]                ; 004f9094 | g_CGamePtr
        ;   Label: LAB_004f9094
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f9099 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 004f909c
    JNZ 0x004f90a4                      ; 004f909e
        ;   XREF to: 004f90a4 (CONDITIONAL_JUMP)  ; LAB_004f90a4
    MOV dword ptr [ESP + 0x8],EDX       ; 004f90a0
    PUSH dword ptr [ESP + 0x8]          ; 004f90a4
        ;   Label: LAB_004f90a4
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004f90a8
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004f90ad
    TEST EAX,EAX                        ; 004f90b0
    JZ 0x004f9187                       ; 004f90b2
        ;   XREF to: 004f9187 (CONDITIONAL_JUMP)  ; LAB_004f9187
    PUSH 0x0                            ; 004f90b8
    PUSH 0x0                            ; 004f90ba
    PUSH 0x0                            ; 004f90bc
    PUSH EBX                            ; 004f90be
    LEA EDI,[ESI + 0xc]                 ; 004f90bf
    PUSH EDI                            ; 004f90c2
    LEA EAX,[EBX + 0x30]                ; 004f90c3
    PUSH EAX                            ; 004f90c6
    LEA EAX,[EBX + 0x20]                ; 004f90c7
    PUSH EAX                            ; 004f90ca
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 004f90cb
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004f90d0
    PUSH 0x1                            ; 004f90d3
    MOV EDX,dword ptr [ESI]             ; 004f90d5
    PUSH EDX                            ; 004f90d7
    PUSH EAX                            ; 004f90d8
    PUSH EBX                            ; 004f90d9
    MOV EBP,EAX                         ; 004f90da
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 004f90dc
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004f90e1
    MOV ECX,dword ptr [EBX + 0xcdec]    ; 004f90e3
    ADD ESP,0x10                        ; 004f90e9
    CMP EAX,ECX                         ; 004f90ec
    JNZ 0x004f914f                      ; 004f90ee
        ;   XREF to: 004f914f (CONDITIONAL_JUMP)  ; LAB_004f914f
    PUSH 0x1                            ; 004f90f0
    PUSH EDI                            ; 004f90f2
    MOV EAX,dword ptr [EBX + 0xcdd8]    ; 004f90f3
    PUSH EAX                            ; 004f90f9
    PUSH EBX                            ; 004f90fa
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004f90fb
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f9100
    PUSH 0x1                            ; 004f9103
    PUSH EDI                            ; 004f9105
    MOV EDX,dword ptr [EBX + 0xcddc]    ; 004f9106
    PUSH EDX                            ; 004f910c
    PUSH EBX                            ; 004f910d
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004f910e
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f9113
    PUSH 0x1                            ; 004f9116
    PUSH EDI                            ; 004f9118
    MOV ECX,dword ptr [EBX + 0xcde0]    ; 004f9119
    PUSH ECX                            ; 004f911f
    PUSH EBX                            ; 004f9120
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004f9121
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f9126
    PUSH 0x1                            ; 004f9129
    PUSH EDI                            ; 004f912b
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004f912c
    PUSH EAX                            ; 004f9132
    PUSH EBX                            ; 004f9133
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004f9134
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f9139
    PUSH 0x1                            ; 004f913c
    PUSH EDI                            ; 004f913e
    MOV EDX,dword ptr [EBX + 0xcde8]    ; 004f913f
    PUSH EDX                            ; 004f9145
    PUSH EBX                            ; 004f9146
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520 ; 004f9147
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00430520(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004f914c
    PUSH 0x5c9213                       ; 004f914f | = "limb?.wav"
        ;   Label: LAB_004f914f
    PUSH EBX                            ; 004f9154
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810 ; 004f9155
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_00434810(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004f915a
    PUSH EBP                            ; 004f915d
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 004f915e
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xcdd8]    ; 004f9163
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004f9169
    ADD ESP,0x4                         ; 004f9170
    TEST ECX,ECX                        ; 004f9173
    JZ 0x004f91a9                       ; 004f9175
        ;   XREF to: 004f91a9 (CONDITIONAL_JUMP)  ; LAB_004f91a9
    FLD float ptr [ESI + 0x8]           ; 004f9177
        ;   Label: LAB_004f9177
    FLD ST0                             ; 004f917a
    FMUL double ptr [0x005c9224]        ; 004f917c | DAT_005c9224
    FSTP ST1                            ; 004f9182
    FSTP float ptr [ESI + 0x8]          ; 004f9184
    MOV EDI,dword ptr [EBX + 0xcdd8]    ; 004f9187
        ;   Label: LAB_004f9187
    CMP EDI,dword ptr [ESI]             ; 004f918d
    JNZ 0x004f91b2                      ; 004f918f
        ;   XREF to: 004f91b2 (CONDITIONAL_JUMP)  ; LAB_004f91b2
    FLD float ptr [ESI + 0x4]           ; 004f9191
    FLD ST0                             ; 004f9194
    FMUL double ptr [0x005c9234]        ; 004f9196 | DAT_005c9234
    FSTP ST1                            ; 004f919c
    FSTP float ptr [ESI + 0x4]          ; 004f919e
    ADD ESP,0xc                         ; 004f91a1
    POP EBP                             ; 004f91a4
    POP EDI                             ; 004f91a5
    POP ESI                             ; 004f91a6
    POP EBX                             ; 004f91a7
    RET                                 ; 004f91a8
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004f91a9
        ;   Label: LAB_004f91a9
    JMP 0x004f9177                      ; 004f91b0
        ;   XREF to: 004f9177 (UNCONDITIONAL_JUMP)  ; LAB_004f9177
    FLD float ptr [ESI + 0x4]           ; 004f91b2
        ;   Label: LAB_004f91b2
    FLD ST0                             ; 004f91b5
    FMUL double ptr [0x005c922c]        ; 004f91b7 | DAT_005c922c
    FSTP ST1                            ; 004f91bd
    FSTP float ptr [ESI + 0x4]          ; 004f91bf
    ADD ESP,0xc                         ; 004f91c2
    POP EBP                             ; 004f91c5
    POP EDI                             ; 004f91c6
    POP ESI                             ; 004f91c7
    POP EBX                             ; 004f91c8
    RET                                 ; 004f91c9

