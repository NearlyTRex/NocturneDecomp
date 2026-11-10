; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004398b0(CZombieCow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cow.cpp_CZombieCow_processDamage_FUN_00439b30 at 00439b3d
;
; Referenced Globals:
;   undefined1* switchdataD_004398a0 = 004398ed
;   TerminatedCString s_limb_wav_005ce186
;   undefined4 DAT_005ce192
;   undefined4 DAT_005ce19a
;   undefined4 DAT_005ce1a2
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field11_0x14
;   undefined4 g_CGameInstance.field460_0x1fc
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_createBodyPart_FUN_004154f0
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004398b0
        ;   Label: core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0
    PUSH ESI                            ; 004398b1
    PUSH EDI                            ; 004398b2
    PUSH EBP                            ; 004398b3
    SUB ESP,0xc                         ; 004398b4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004398b7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004398bb
    FLD float ptr [ESI + 0x2c]          ; 004398bf
    FLDZ                                ; 004398c2
    FCOMPP                              ; 004398c4
    FNSTSW AX                           ; 004398c6
    SAHF                                ; 004398c8
    JNC 0x004398f5                      ; 004398c9
        ;   XREF to: 004398f5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004398cb
    JNZ 0x004398f5                      ; 004398ce
        ;   XREF to: 004398f5 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004398d0
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 004398d5
    MOV EDI,0x4                         ; 004398d7
    SAR EDX,0x1f                        ; 004398dc
    IDIV EDI                            ; 004398df
    CMP EDX,0x3                         ; 004398e1
    JA 0x004398f5                       ; 004398e4
        ;   XREF to: 004398f5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4398a0]  ; 004398e6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 004398ed
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004398f3
        ;   Label: LAB_004398f3
    MOV ECX,dword ptr [EBX + 0x10b20]   ; 004398f5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004398fb
    CMP EAX,ECX                         ; 004398fd
    JNZ 0x00439ac4                      ; 004398ff
        ;   XREF to: 00439ac4 (CONDITIONAL_JUMP)  ; LAB_00439ac4
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00439905
        ;   Label: LAB_00439905
    MOV dword ptr [ESP + 0x8],EAX       ; 00439908
    MOV EAX,[0x00616494]                ; 0043990c | g_CGamePtr
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00439911 | g_CGameInstance.field460_0x1fc
    JZ 0x00439922                       ; 00439918
        ;   XREF to: 00439922 (CONDITIONAL_JUMP)  ; LAB_00439922
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0043991a
    MOV EAX,[0x00616494]                ; 00439922 | g_CGamePtr
        ;   Label: LAB_00439922
    MOV EDX,dword ptr [EAX + 0x14]      ; 00439927 | g_CGameInstance.field11_0x14
    TEST EDX,EDX                        ; 0043992a
    JNZ 0x00439932                      ; 0043992c
        ;   XREF to: 00439932 (CONDITIONAL_JUMP)  ; LAB_00439932
    MOV dword ptr [ESP + 0x8],EDX       ; 0043992e
    PUSH dword ptr [ESP + 0x8]          ; 00439932
        ;   Label: LAB_00439932
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00439936
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0043993b
    TEST EAX,EAX                        ; 0043993e
    JZ 0x00439a7d                       ; 00439940
        ;   XREF to: 00439a7d (CONDITIONAL_JUMP)  ; LAB_00439a7d
    PUSH 0x0                            ; 00439946
    PUSH 0x0                            ; 00439948
    PUSH 0x0                            ; 0043994a
    PUSH EBX                            ; 0043994c
    LEA EDI,[ESI + 0xc]                 ; 0043994d
    PUSH EDI                            ; 00439950
    LEA EAX,[EBX + 0x30]                ; 00439951
    PUSH EAX                            ; 00439954
    LEA EAX,[EBX + 0x20]                ; 00439955
    PUSH EAX                            ; 00439958
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 00439959
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0043995e
    PUSH 0x0                            ; 00439961
    MOV EDX,dword ptr [ESI]             ; 00439963
    PUSH EDX                            ; 00439965
    PUSH EAX                            ; 00439966
    PUSH EBX                            ; 00439967
    MOV EBP,EAX                         ; 00439968
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 0043996a
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0043996f
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 00439971
    ADD ESP,0x10                        ; 00439977
    CMP EAX,ECX                         ; 0043997a
    JNZ 0x00439a2d                      ; 0043997c
        ;   XREF to: 00439a2d (CONDITIONAL_JUMP)  ; LAB_00439a2d
    PUSH 0x0                            ; 00439982
    PUSH EDI                            ; 00439984
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 00439985
    PUSH EAX                            ; 0043998b
    PUSH EBX                            ; 0043998c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 0043998d
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00439992
    PUSH 0x0                            ; 00439995
    PUSH EDI                            ; 00439997
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 00439998
    PUSH EDX                            ; 0043999e
    PUSH EBX                            ; 0043999f
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399a0
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004399a5
    PUSH 0x0                            ; 004399a8
    PUSH EDI                            ; 004399aa
    MOV ECX,dword ptr [EBX + 0x10b0c]   ; 004399ab
    PUSH ECX                            ; 004399b1
    PUSH EBX                            ; 004399b2
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399b3
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004399b8
    PUSH 0x0                            ; 004399bb
    PUSH EDI                            ; 004399bd
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 004399be
    PUSH EAX                            ; 004399c4
    PUSH EBX                            ; 004399c5
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399c6
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004399cb
    PUSH 0x0                            ; 004399ce
    PUSH EDI                            ; 004399d0
    MOV EDX,dword ptr [EBX + 0x10b14]   ; 004399d1
    PUSH EDX                            ; 004399d7
    PUSH EBX                            ; 004399d8
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399d9
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004399de
    PUSH 0x0                            ; 004399e1
    PUSH EDI                            ; 004399e3
    MOV ECX,dword ptr [EBX + 0x10b18]   ; 004399e4
    PUSH ECX                            ; 004399ea
    PUSH EBX                            ; 004399eb
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399ec
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004399f1
    PUSH 0x0                            ; 004399f4
    PUSH EDI                            ; 004399f6
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004399f7
    PUSH EAX                            ; 004399fd
    PUSH EBX                            ; 004399fe
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 004399ff
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00439a04
    PUSH 0x0                            ; 00439a07
    PUSH EDI                            ; 00439a09
    MOV EDX,dword ptr [EBX + 0x10b24]   ; 00439a0a
    PUSH EDX                            ; 00439a10
    PUSH EBX                            ; 00439a11
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 00439a12
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00439a17
    PUSH 0x0                            ; 00439a1a
    PUSH EDI                            ; 00439a1c
    MOV ECX,dword ptr [EBX + 0x10b28]   ; 00439a1d
    PUSH ECX                            ; 00439a23
    PUSH EBX                            ; 00439a24
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 00439a25
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00439a2a
    PUSH 0x5ce186                       ; 00439a2d | = "limb?.wav"
        ;   Label: LAB_00439a2d
    PUSH EBX                            ; 00439a32
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260 ; 00439a33
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00439a38
    PUSH EBP                            ; 00439a3b
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 00439a3c
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 00439a41
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00439a47
    ADD ESP,0x4                         ; 00439a4e
    TEST EDI,EDI                        ; 00439a51
    JZ 0x00439af6                       ; 00439a53
        ;   XREF to: 00439af6 (CONDITIONAL_JUMP)  ; LAB_00439af6
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 00439a59
        ;   Label: LAB_00439a59
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00439a5f
    JZ 0x00439b02                       ; 00439a67
        ;   XREF to: 00439b02 (CONDITIONAL_JUMP)  ; LAB_00439b02
    FLD float ptr [ESI + 0x8]           ; 00439a6d
        ;   Label: LAB_00439a6d
    FLD ST0                             ; 00439a70
    FMUL double ptr [0x005ce192]        ; 00439a72 | DAT_005ce192
    FSTP ST1                            ; 00439a78
    FSTP float ptr [ESI + 0x8]          ; 00439a7a
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 00439a7d
        ;   Label: LAB_00439a7d
    CMP EDX,dword ptr [ESI]             ; 00439a83
    JNZ 0x00439b0e                      ; 00439a85
        ;   XREF to: 00439b0e (CONDITIONAL_JUMP)  ; LAB_00439b0e
    FLD float ptr [ESI + 0x4]           ; 00439a8b
    FLD ST0                             ; 00439a8e
    FMUL double ptr [0x005ce1a2]        ; 00439a90 | DAT_005ce1a2
    FSTP ST1                            ; 00439a96
    FSTP float ptr [ESI + 0x4]          ; 00439a98
    ADD ESP,0xc                         ; 00439a9b
    POP EBP                             ; 00439a9e
    POP EDI                             ; 00439a9f
    POP ESI                             ; 00439aa0
    POP EBX                             ; 00439aa1
    RET                                 ; 00439aa2
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 00439aa3
        ;   Label: caseD_1
    JMP 0x004398f3                      ; 00439aa9
        ;   XREF to: 004398f3 (UNCONDITIONAL_JUMP)  ; LAB_004398f3
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 00439aae
        ;   Label: caseD_2
    JMP 0x004398f3                      ; 00439ab4
        ;   XREF to: 004398f3 (UNCONDITIONAL_JUMP)  ; LAB_004398f3
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 00439ab9
        ;   Label: caseD_3
    JMP 0x004398f3                      ; 00439abf
        ;   XREF to: 004398f3 (UNCONDITIONAL_JUMP)  ; LAB_004398f3
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 00439ac4
        ;   Label: LAB_00439ac4
    JZ 0x00439905                       ; 00439aca
        ;   XREF to: 00439905 (CONDITIONAL_JUMP)  ; LAB_00439905
    CMP EAX,dword ptr [EBX + 0x10b28]   ; 00439ad0
    JZ 0x00439905                       ; 00439ad6
        ;   XREF to: 00439905 (CONDITIONAL_JUMP)  ; LAB_00439905
    CMP EAX,dword ptr [EBX + 0x10b04]   ; 00439adc
    JZ 0x00439905                       ; 00439ae2
        ;   XREF to: 00439905 (CONDITIONAL_JUMP)  ; LAB_00439905
    CMP EAX,dword ptr [EBX + 0x10b1c]   ; 00439ae8
    JZ 0x00439905                       ; 00439aee
        ;   XREF to: 00439905 (CONDITIONAL_JUMP)  ; LAB_00439905
    JMP 0x00439a7d                      ; 00439af4
        ;   XREF to: 00439a7d (UNCONDITIONAL_JUMP)  ; LAB_00439a7d
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00439af6
        ;   Label: LAB_00439af6
    JMP 0x00439a59                      ; 00439afd
        ;   XREF to: 00439a59 (UNCONDITIONAL_JUMP)  ; LAB_00439a59
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00439b02
        ;   Label: LAB_00439b02
    JMP 0x00439a6d                      ; 00439b09
        ;   XREF to: 00439a6d (UNCONDITIONAL_JUMP)  ; LAB_00439a6d
    FLD float ptr [ESI + 0x4]           ; 00439b0e
        ;   Label: LAB_00439b0e
    FLD ST0                             ; 00439b11
    FMUL double ptr [0x005ce19a]        ; 00439b13 | DAT_005ce19a
    FSTP ST1                            ; 00439b19
    FSTP float ptr [ESI + 0x4]          ; 00439b1b
    ADD ESP,0xc                         ; 00439b1e
    POP EBP                             ; 00439b21
    POP EDI                             ; 00439b22
    POP ESI                             ; 00439b23
    POP EBX                             ; 00439b24
    RET                                 ; 00439b25

