; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00415dd0(CBatCreature *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 004160b6
;
; Referenced Globals:
;   void* switchdataD_00415db8 = 00415e0d
;   TerminatedCString s_limb_wav_0061567e
;   double DOUBLE_00615689 = 7
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
;   core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415dd0
        ;   Label: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0
    PUSH ESI                            ; 00415dd1
    PUSH EDI                            ; 00415dd2
    PUSH EBP                            ; 00415dd3
    SUB ESP,0xc                         ; 00415dd4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00415dd7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00415ddb
    FLD float ptr [ESI + 0x2c]          ; 00415ddf
    FLDZ                                ; 00415de2
    FCOMPP                              ; 00415de4
    FNSTSW AX                           ; 00415de6
    SAHF                                ; 00415de8
    JNC 0x00415e15                      ; 00415de9
        ;   XREF to: 00415e15 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 00415deb
    JNZ 0x00415e15                      ; 00415dee
        ;   XREF to: 00415e15 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00415df0
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00415df5
    MOV EDI,0x6                         ; 00415df7
    SAR EDX,0x1f                        ; 00415dfc
    IDIV EDI                            ; 00415dff
    CMP EDX,0x5                         ; 00415e01
    JA 0x00415e15                       ; 00415e04
        ;   XREF to: 00415e15 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x415db8]  ; 00415e06 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbedc]    ; 00415e0d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00415e13
        ;   Label: LAB_00415e13
    MOV ECX,dword ptr [EBX + 0xbedc]    ; 00415e15
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 00415e1b
    CMP EAX,ECX                         ; 00415e1d
    JNZ 0x00415ec9                      ; 00415e1f
        ;   XREF to: 00415ec9 (CONDITIONAL_JUMP)  ; LAB_00415ec9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00415e25
        ;   Label: LAB_00415e25
    MOV EBP,dword ptr [EBX + 0xbebc]    ; 00415e28
    MOV dword ptr [ESP + 0x8],EAX       ; 00415e2e
    CMP EBP,dword ptr [ESI]             ; 00415e32
    JNZ 0x00415e3e                      ; 00415e34
        ;   XREF to: 00415e3e (CONDITIONAL_JUMP)  ; LAB_00415e3e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00415e36
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 00415e3e
        ;   Label: LAB_00415e3e
    CMP EDX,dword ptr [ESI]             ; 00415e44
    JNZ 0x00415e50                      ; 00415e46
        ;   XREF to: 00415e50 (CONDITIONAL_JUMP)  ; LAB_00415e50
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00415e48
    MOV EAX,[0x0067b654]                ; 00415e50 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00415e50
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00415e55 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x00415e66                       ; 00415e5c
        ;   XREF to: 00415e66 (CONDITIONAL_JUMP)  ; LAB_00415e66
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00415e5e
    MOV EAX,[0x0067b654]                ; 00415e66 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00415e66
    MOV EDX,dword ptr [EAX + 0x14]      ; 00415e6b | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 00415e6e
    JNZ 0x00415e76                      ; 00415e70
        ;   XREF to: 00415e76 (CONDITIONAL_JUMP)  ; LAB_00415e76
    MOV dword ptr [ESP + 0x8],EDX       ; 00415e72
    PUSH dword ptr [ESP + 0x8]          ; 00415e76
        ;   Label: LAB_00415e76
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00415e7a
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00415e7f
    TEST EAX,EAX                        ; 00415e82
    JNZ 0x00415f0d                      ; 00415e84
        ;   XREF to: 00415f0d (CONDITIONAL_JUMP)  ; LAB_00415f0d
    ADD ESP,0xc                         ; 00415e8a
    POP EBP                             ; 00415e8d
    POP EDI                             ; 00415e8e
    POP ESI                             ; 00415e8f
    POP EBX                             ; 00415e90
    RET                                 ; 00415e91
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 00415e92
        ;   Label: caseD_1
    JMP 0x00415e13                      ; 00415e98
        ;   XREF to: 00415e13 (UNCONDITIONAL_JUMP)  ; LAB_00415e13
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 00415e9d
        ;   Label: caseD_2
    JMP 0x00415e13                      ; 00415ea3
        ;   XREF to: 00415e13 (UNCONDITIONAL_JUMP)  ; LAB_00415e13
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 00415ea8
        ;   Label: caseD_3
    JMP 0x00415e13                      ; 00415eae
        ;   XREF to: 00415e13 (UNCONDITIONAL_JUMP)  ; LAB_00415e13
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 00415eb3
        ;   Label: caseD_4
    JMP 0x00415e13                      ; 00415eb9
        ;   XREF to: 00415e13 (UNCONDITIONAL_JUMP)  ; LAB_00415e13
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 00415ebe
        ;   Label: caseD_5
    JMP 0x00415e13                      ; 00415ec4
        ;   XREF to: 00415e13 (UNCONDITIONAL_JUMP)  ; LAB_00415e13
    CMP EAX,dword ptr [EBX + 0xbee0]    ; 00415ec9
        ;   Label: LAB_00415ec9
    JZ 0x00415e25                       ; 00415ecf
        ;   XREF to: 00415e25 (CONDITIONAL_JUMP)  ; LAB_00415e25
    CMP EAX,dword ptr [EBX + 0xbee4]    ; 00415ed5
    JZ 0x00415e25                       ; 00415edb
        ;   XREF to: 00415e25 (CONDITIONAL_JUMP)  ; LAB_00415e25
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 00415ee1
    JZ 0x00415e25                       ; 00415ee7
        ;   XREF to: 00415e25 (CONDITIONAL_JUMP)  ; LAB_00415e25
    CMP EAX,dword ptr [EBX + 0xbec0]    ; 00415eed
    JZ 0x00415e25                       ; 00415ef3
        ;   XREF to: 00415e25 (CONDITIONAL_JUMP)  ; LAB_00415e25
    CMP EAX,dword ptr [EBX + 0xbebc]    ; 00415ef9
    JZ 0x00415e25                       ; 00415eff
        ;   XREF to: 00415e25 (CONDITIONAL_JUMP)  ; LAB_00415e25
    ADD ESP,0xc                         ; 00415f05
    POP EBP                             ; 00415f08
    POP EDI                             ; 00415f09
    POP ESI                             ; 00415f0a
    POP EBX                             ; 00415f0b
    RET                                 ; 00415f0c
    MOV EDI,dword ptr [EBX + 0x2610]    ; 00415f0d
        ;   Label: LAB_00415f0d
    PUSH EDI                            ; 00415f13
    PUSH 0x0                            ; 00415f14
    PUSH 0x0                            ; 00415f16
    PUSH EBX                            ; 00415f18
    LEA EAX,[ESI + 0xc]                 ; 00415f19
    PUSH EAX                            ; 00415f1c
    LEA EAX,[EBX + 0x30]                ; 00415f1d
    PUSH EAX                            ; 00415f20
    LEA EAX,[EBX + 0x20]                ; 00415f21
    PUSH EAX                            ; 00415f24
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 00415f25
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 00415f2a
    MOV EDI,EAX                         ; 00415f2d
    PUSH 0x0                            ; 00415f2f
    MOV EBP,EAX                         ; 00415f31
    MOV EAX,dword ptr [ESI]             ; 00415f33
    PUSH EAX                            ; 00415f35
    PUSH EDI                            ; 00415f36
    PUSH EBX                            ; 00415f37
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 00415f38
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 00415f3d
    MOV EDX,dword ptr [EBX + 0xbedc]    ; 00415f3f
    ADD ESP,0x10                        ; 00415f45
    CMP EAX,EDX                         ; 00415f48
    JNZ 0x00415f5f                      ; 00415f4a
        ;   XREF to: 00415f5f (CONDITIONAL_JUMP)  ; LAB_00415f5f
    PUSH 0x0                            ; 00415f4c
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 00415f4e
    PUSH ECX                            ; 00415f54
    PUSH EDI                            ; 00415f55
    PUSH EBX                            ; 00415f56
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 00415f57
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00415f5c
    MOV EDI,dword ptr [EBX + 0xbee4]    ; 00415f5f
        ;   Label: LAB_00415f5f
    CMP EDI,dword ptr [ESI]             ; 00415f65
    JNZ 0x00415f7c                      ; 00415f67
        ;   XREF to: 00415f7c (CONDITIONAL_JUMP)  ; LAB_00415f7c
    PUSH 0x0                            ; 00415f69
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 00415f6b
    PUSH EAX                            ; 00415f71
    PUSH EBP                            ; 00415f72
    PUSH EBX                            ; 00415f73
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 00415f74
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00415f79
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 00415f7c
        ;   Label: LAB_00415f7c
    CMP EDX,dword ptr [ESI]             ; 00415f82
    JNZ 0x00415fe8                      ; 00415f84
        ;   XREF to: 00415fe8 (CONDITIONAL_JUMP)  ; LAB_00415fe8
    PUSH 0x0                            ; 00415f86
    LEA EDI,[ESI + 0xc]                 ; 00415f88
    PUSH EDI                            ; 00415f8b
    MOV ECX,dword ptr [EBX + 0xbee4]    ; 00415f8c
    PUSH ECX                            ; 00415f92
    PUSH EBX                            ; 00415f93
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00415f94
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 00415f99
    PUSH 0x0                            ; 00415f9c
    PUSH EDI                            ; 00415f9e
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 00415f9f
    PUSH EAX                            ; 00415fa5
    PUSH EBX                            ; 00415fa6
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00415fa7
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 00415fac
    PUSH 0x0                            ; 00415faf
    PUSH EDI                            ; 00415fb1
    MOV EDX,dword ptr [EBX + 0xbedc]    ; 00415fb2
    PUSH EDX                            ; 00415fb8
    PUSH EBX                            ; 00415fb9
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00415fba
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 00415fbf
    PUSH 0x0                            ; 00415fc2
    PUSH EDI                            ; 00415fc4
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 00415fc5
    PUSH ECX                            ; 00415fcb
    PUSH EBX                            ; 00415fcc
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00415fcd
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 00415fd2
    PUSH 0x0                            ; 00415fd5
    PUSH EDI                            ; 00415fd7
    MOV EDI,dword ptr [EBX + 0xbebc]    ; 00415fd8
    PUSH EDI                            ; 00415fde
    PUSH EBX                            ; 00415fdf
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00415fe0
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index)
    ADD ESP,0x10                        ; 00415fe5
    PUSH 0x61567e                       ; 00415fe8 | = "limb?.wav"
        ;   Label: LAB_00415fe8
    PUSH EBX                            ; 00415fed
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300 ; 00415fee
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00415ff3
    PUSH EBP                            ; 00415ff6
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 00415ff7
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 00415ffc
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00416002
    ADD ESP,0x4                         ; 00416009
    TEST EBP,EBP                        ; 0041600c
    JNZ 0x00416017                      ; 0041600e
        ;   XREF to: 00416017 (CONDITIONAL_JUMP)  ; LAB_00416017
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00416010
    FLD float ptr [ESI + 0x8]           ; 00416017
        ;   Label: LAB_00416017
    FLD ST0                             ; 0041601a
    FMUL double ptr [0x00615689]        ; 0041601c | DOUBLE_00615689
    FSTP ST1                            ; 00416022
    FSTP float ptr [ESI + 0x8]          ; 00416024
    ADD ESP,0xc                         ; 00416027
    POP EBP                             ; 0041602a
    POP EDI                             ; 0041602b
    POP ESI                             ; 0041602c
    POP EBX                             ; 0041602d
    RET                                 ; 0041602e

