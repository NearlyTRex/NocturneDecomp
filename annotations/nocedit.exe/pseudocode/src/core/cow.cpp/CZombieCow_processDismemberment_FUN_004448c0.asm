; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004448c0(CZombieCow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cow.cpp_CZombieCow_processDamage_FUN_00444b40 at 00444b4d
;
; Referenced Globals:
;   void* switchdataD_004448b0 = 004448fd
;   TerminatedCString s_limb_wav_00619588
;   double DOUBLE_00619595 = 7
;   double DOUBLE_0061959d = 0.5
;   double DOUBLE_006195a5 = 2.5
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

    PUSH EBX                            ; 004448c0
        ;   Label: core_cow.cpp_CZombieCow_processDismemberment_FUN_004448c0
    PUSH ESI                            ; 004448c1
    PUSH EDI                            ; 004448c2
    PUSH EBP                            ; 004448c3
    SUB ESP,0xc                         ; 004448c4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004448c7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004448cb
    FLD float ptr [ESI + 0x2c]          ; 004448cf
    FLDZ                                ; 004448d2
    FCOMPP                              ; 004448d4
    FNSTSW AX                           ; 004448d6
    SAHF                                ; 004448d8
    JNC 0x00444905                      ; 004448d9
        ;   XREF to: 00444905 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004448db
    JNZ 0x00444905                      ; 004448de
        ;   XREF to: 00444905 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004448e0
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 004448e5
    MOV EDI,0x4                         ; 004448e7
    SAR EDX,0x1f                        ; 004448ec
    IDIV EDI                            ; 004448ef
    CMP EDX,0x3                         ; 004448f1
    JA 0x00444905                       ; 004448f4
        ;   XREF to: 00444905 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4448b0]  ; 004448f6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 004448fd
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00444903
        ;   Label: LAB_00444903
    MOV ECX,dword ptr [EBX + 0xbee4]    ; 00444905
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0044490b
    CMP EAX,ECX                         ; 0044490d
    JNZ 0x00444ad4                      ; 0044490f
        ;   XREF to: 00444ad4 (CONDITIONAL_JUMP)  ; LAB_00444ad4
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00444915
        ;   Label: LAB_00444915
    MOV dword ptr [ESP + 0x8],EAX       ; 00444918
    MOV EAX,[0x0067b654]                ; 0044491c | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x1e0],0x0     ; 00444921 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x00444932                       ; 00444928
        ;   XREF to: 00444932 (CONDITIONAL_JUMP)  ; LAB_00444932
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0044492a
    MOV EAX,[0x0067b654]                ; 00444932 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00444932
    MOV EDX,dword ptr [EAX + 0x14]      ; 00444937 | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 0044493a
    JNZ 0x00444942                      ; 0044493c
        ;   XREF to: 00444942 (CONDITIONAL_JUMP)  ; LAB_00444942
    MOV dword ptr [ESP + 0x8],EDX       ; 0044493e
    PUSH dword ptr [ESP + 0x8]          ; 00444942
        ;   Label: LAB_00444942
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00444946
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0044494b
    TEST EAX,EAX                        ; 0044494e
    JZ 0x00444a8d                       ; 00444950
        ;   XREF to: 00444a8d (CONDITIONAL_JUMP)  ; LAB_00444a8d
    PUSH 0x0                            ; 00444956
    PUSH 0x0                            ; 00444958
    PUSH 0x0                            ; 0044495a
    PUSH EBX                            ; 0044495c
    LEA EDI,[ESI + 0xc]                 ; 0044495d
    PUSH EDI                            ; 00444960
    LEA EAX,[EBX + 0x30]                ; 00444961
    PUSH EAX                            ; 00444964
    LEA EAX,[EBX + 0x20]                ; 00444965
    PUSH EAX                            ; 00444968
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 00444969
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0044496e
    PUSH 0x0                            ; 00444971
    MOV EDX,dword ptr [ESI]             ; 00444973
    PUSH EDX                            ; 00444975
    PUSH EAX                            ; 00444976
    PUSH EBX                            ; 00444977
    MOV EBP,EAX                         ; 00444978
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 0044497a
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0044497f
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 00444981
    ADD ESP,0x10                        ; 00444987
    CMP EAX,ECX                         ; 0044498a
    JNZ 0x00444a3d                      ; 0044498c
        ;   XREF to: 00444a3d (CONDITIONAL_JUMP)  ; LAB_00444a3d
    PUSH 0x0                            ; 00444992
    PUSH EDI                            ; 00444994
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 00444995
    PUSH EAX                            ; 0044499b
    PUSH EBX                            ; 0044499c
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 0044499d
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004449a2
    PUSH 0x0                            ; 004449a5
    PUSH EDI                            ; 004449a7
    MOV EDX,dword ptr [EBX + 0xbecc]    ; 004449a8
    PUSH EDX                            ; 004449ae
    PUSH EBX                            ; 004449af
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004449b0
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004449b5
    PUSH 0x0                            ; 004449b8
    PUSH EDI                            ; 004449ba
    MOV ECX,dword ptr [EBX + 0xbed0]    ; 004449bb
    PUSH ECX                            ; 004449c1
    PUSH EBX                            ; 004449c2
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004449c3
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004449c8
    PUSH 0x0                            ; 004449cb
    PUSH EDI                            ; 004449cd
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 004449ce
    PUSH EAX                            ; 004449d4
    PUSH EBX                            ; 004449d5
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004449d6
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004449db
    PUSH 0x0                            ; 004449de
    PUSH EDI                            ; 004449e0
    MOV EDX,dword ptr [EBX + 0xbed8]    ; 004449e1
    PUSH EDX                            ; 004449e7
    PUSH EBX                            ; 004449e8
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004449e9
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004449ee
    PUSH 0x0                            ; 004449f1
    PUSH EDI                            ; 004449f3
    MOV ECX,dword ptr [EBX + 0xbedc]    ; 004449f4
    PUSH ECX                            ; 004449fa
    PUSH EBX                            ; 004449fb
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 004449fc
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00444a01
    PUSH 0x0                            ; 00444a04
    PUSH EDI                            ; 00444a06
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 00444a07
    PUSH EAX                            ; 00444a0d
    PUSH EBX                            ; 00444a0e
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00444a0f
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00444a14
    PUSH 0x0                            ; 00444a17
    PUSH EDI                            ; 00444a19
    MOV EDX,dword ptr [EBX + 0xbee8]    ; 00444a1a
    PUSH EDX                            ; 00444a20
    PUSH EBX                            ; 00444a21
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00444a22
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00444a27
    PUSH 0x0                            ; 00444a2a
    PUSH EDI                            ; 00444a2c
    MOV ECX,dword ptr [EBX + 0xbeec]    ; 00444a2d
    PUSH ECX                            ; 00444a33
    PUSH EBX                            ; 00444a34
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 00444a35
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00444a3a
    PUSH 0x619588                       ; 00444a3d | = "limb?.wav"
        ;   Label: LAB_00444a3d
    PUSH EBX                            ; 00444a42
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300 ; 00444a43
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00444a48
    PUSH EBP                            ; 00444a4b
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 00444a4c
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 00444a51
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00444a57
    ADD ESP,0x4                         ; 00444a5e
    TEST EDI,EDI                        ; 00444a61
    JZ 0x00444b06                       ; 00444a63
        ;   XREF to: 00444b06 (CONDITIONAL_JUMP)  ; LAB_00444b06
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 00444a69
        ;   Label: LAB_00444a69
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00444a6f
    JZ 0x00444b12                       ; 00444a77
        ;   XREF to: 00444b12 (CONDITIONAL_JUMP)  ; LAB_00444b12
    FLD float ptr [ESI + 0x8]           ; 00444a7d
        ;   Label: LAB_00444a7d
    FLD ST0                             ; 00444a80
    FMUL double ptr [0x00619595]        ; 00444a82 | DOUBLE_00619595
    FSTP ST1                            ; 00444a88
    FSTP float ptr [ESI + 0x8]          ; 00444a8a
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 00444a8d
        ;   Label: LAB_00444a8d
    CMP EDX,dword ptr [ESI]             ; 00444a93
    JNZ 0x00444b1e                      ; 00444a95
        ;   XREF to: 00444b1e (CONDITIONAL_JUMP)  ; LAB_00444b1e
    FLD float ptr [ESI + 0x4]           ; 00444a9b
    FLD ST0                             ; 00444a9e
    FMUL double ptr [0x006195a5]        ; 00444aa0 | DOUBLE_006195a5
    FSTP ST1                            ; 00444aa6
    FSTP float ptr [ESI + 0x4]          ; 00444aa8
    ADD ESP,0xc                         ; 00444aab
    POP EBP                             ; 00444aae
    POP EDI                             ; 00444aaf
    POP ESI                             ; 00444ab0
    POP EBX                             ; 00444ab1
    RET                                 ; 00444ab2
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 00444ab3
        ;   Label: caseD_1
    JMP 0x00444903                      ; 00444ab9
        ;   XREF to: 00444903 (UNCONDITIONAL_JUMP)  ; LAB_00444903
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 00444abe
        ;   Label: caseD_2
    JMP 0x00444903                      ; 00444ac4
        ;   XREF to: 00444903 (UNCONDITIONAL_JUMP)  ; LAB_00444903
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 00444ac9
        ;   Label: caseD_3
    JMP 0x00444903                      ; 00444acf
        ;   XREF to: 00444903 (UNCONDITIONAL_JUMP)  ; LAB_00444903
    CMP EAX,dword ptr [EBX + 0xbee8]    ; 00444ad4
        ;   Label: LAB_00444ad4
    JZ 0x00444915                       ; 00444ada
        ;   XREF to: 00444915 (CONDITIONAL_JUMP)  ; LAB_00444915
    CMP EAX,dword ptr [EBX + 0xbeec]    ; 00444ae0
    JZ 0x00444915                       ; 00444ae6
        ;   XREF to: 00444915 (CONDITIONAL_JUMP)  ; LAB_00444915
    CMP EAX,dword ptr [EBX + 0xbec8]    ; 00444aec
    JZ 0x00444915                       ; 00444af2
        ;   XREF to: 00444915 (CONDITIONAL_JUMP)  ; LAB_00444915
    CMP EAX,dword ptr [EBX + 0xbee0]    ; 00444af8
    JZ 0x00444915                       ; 00444afe
        ;   XREF to: 00444915 (CONDITIONAL_JUMP)  ; LAB_00444915
    JMP 0x00444a8d                      ; 00444b04
        ;   XREF to: 00444a8d (UNCONDITIONAL_JUMP)  ; LAB_00444a8d
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00444b06
        ;   Label: LAB_00444b06
    JMP 0x00444a69                      ; 00444b0d
        ;   XREF to: 00444a69 (UNCONDITIONAL_JUMP)  ; LAB_00444a69
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00444b12
        ;   Label: LAB_00444b12
    JMP 0x00444a7d                      ; 00444b19
        ;   XREF to: 00444a7d (UNCONDITIONAL_JUMP)  ; LAB_00444a7d
    FLD float ptr [ESI + 0x4]           ; 00444b1e
        ;   Label: LAB_00444b1e
    FLD ST0                             ; 00444b21
    FMUL double ptr [0x0061959d]        ; 00444b23 | DOUBLE_0061959d
    FSTP ST1                            ; 00444b29
    FSTP float ptr [ESI + 0x4]          ; 00444b2b
    ADD ESP,0xc                         ; 00444b2e
    POP EBP                             ; 00444b31
    POP EDI                             ; 00444b32
    POP ESI                             ; 00444b33
    POP EBX                             ; 00444b34
    RET                                 ; 00444b35

