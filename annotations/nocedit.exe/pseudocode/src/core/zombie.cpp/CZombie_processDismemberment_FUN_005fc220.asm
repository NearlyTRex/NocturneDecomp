; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_005fc220(CZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processDamage_FUN_005fc4f0 at 005fc4fd
;
; Referenced Globals:
;   void* switchdataD_005fc200 = 005fc25d
;   TerminatedCString s_limb_wav_006589b9
;   double DOUBLE_006589c5 = 7
;   double DOUBLE_006589cd = 0.5
;   double DOUBLE_006589d5 = 2.5
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

    PUSH EBX                            ; 005fc220
        ;   Label: core_zombie.cpp_CZombie_processDismemberment_FUN_005fc220
    PUSH ESI                            ; 005fc221
    PUSH EDI                            ; 005fc222
    PUSH EBP                            ; 005fc223
    SUB ESP,0xc                         ; 005fc224
    MOV EBX,dword ptr [ESP + 0x20]      ; 005fc227
    MOV ESI,dword ptr [ESP + 0x24]      ; 005fc22b
    FLD float ptr [ESI + 0x2c]          ; 005fc22f
    FLDZ                                ; 005fc232
    FCOMPP                              ; 005fc234
    FNSTSW AX                           ; 005fc236
    SAHF                                ; 005fc238
    JNC 0x005fc265                      ; 005fc239
        ;   XREF to: 005fc265 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 005fc23b
    JNZ 0x005fc265                      ; 005fc23e
        ;   XREF to: 005fc265 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005fc240
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 005fc245
    MOV EDI,0x6                         ; 005fc247
    SAR EDX,0x1f                        ; 005fc24c
    IDIV EDI                            ; 005fc24f
    CMP EDX,0x5                         ; 005fc251
    JA 0x005fc265                       ; 005fc254
        ;   XREF to: 005fc265 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5fc200]  ; 005fc256 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbf78]    ; 005fc25d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 005fc263
        ;   Label: LAB_005fc263
    MOV ECX,dword ptr [EBX + 0xbf78]    ; 005fc265
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 005fc26b
    CMP EAX,ECX                         ; 005fc26d
    JNZ 0x005fc462                      ; 005fc26f
        ;   XREF to: 005fc462 (CONDITIONAL_JUMP)  ; LAB_005fc462
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005fc275
        ;   Label: LAB_005fc275
    MOV EBP,dword ptr [EBX + 0xbf90]    ; 005fc278
    MOV dword ptr [ESP + 0x8],EAX       ; 005fc27e
    CMP EBP,dword ptr [ESI]             ; 005fc282
    JNZ 0x005fc28e                      ; 005fc284
        ;   XREF to: 005fc28e (CONDITIONAL_JUMP)  ; LAB_005fc28e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 005fc286
    MOV EDX,dword ptr [EBX + 0xbf8c]    ; 005fc28e
        ;   Label: LAB_005fc28e
    CMP EDX,dword ptr [ESI]             ; 005fc294
    JNZ 0x005fc2a0                      ; 005fc296
        ;   XREF to: 005fc2a0 (CONDITIONAL_JUMP)  ; LAB_005fc2a0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 005fc298
    MOV EAX,[0x0067b654]                ; 005fc2a0 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_005fc2a0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 005fc2a5 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x005fc2b6                       ; 005fc2ac
        ;   XREF to: 005fc2b6 (CONDITIONAL_JUMP)  ; LAB_005fc2b6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005fc2ae
    MOV EAX,[0x0067b654]                ; 005fc2b6 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_005fc2b6
    MOV EDX,dword ptr [EAX + 0x14]      ; 005fc2bb | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 005fc2be
    JNZ 0x005fc2c6                      ; 005fc2c0
        ;   XREF to: 005fc2c6 (CONDITIONAL_JUMP)  ; LAB_005fc2c6
    MOV dword ptr [ESP + 0x8],EDX       ; 005fc2c2
    PUSH dword ptr [ESP + 0x8]          ; 005fc2c6
        ;   Label: LAB_005fc2c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005fc2ca
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005fc2cf
    TEST EAX,EAX                        ; 005fc2d2
    JZ 0x005fc3f9                       ; 005fc2d4
        ;   XREF to: 005fc3f9 (CONDITIONAL_JUMP)  ; LAB_005fc3f9
    PUSH 0x0                            ; 005fc2da
    PUSH 0x0                            ; 005fc2dc
    PUSH 0x0                            ; 005fc2de
    PUSH EBX                            ; 005fc2e0
    LEA EAX,[ESI + 0xc]                 ; 005fc2e1
    PUSH EAX                            ; 005fc2e4
    LEA EAX,[EBX + 0x30]                ; 005fc2e5
    PUSH EAX                            ; 005fc2e8
    LEA EAX,[EBX + 0x20]                ; 005fc2e9
    PUSH EAX                            ; 005fc2ec
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 005fc2ed
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 005fc2f2
    MOV EDI,EAX                         ; 005fc2f5
    PUSH 0x0                            ; 005fc2f7
    MOV EBP,EAX                         ; 005fc2f9
    MOV EAX,dword ptr [ESI]             ; 005fc2fb
    PUSH EAX                            ; 005fc2fd
    PUSH EDI                            ; 005fc2fe
    PUSH EBX                            ; 005fc2ff
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 005fc300
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 005fc305
    MOV EDX,dword ptr [EBX + 0xbf78]    ; 005fc307
    ADD ESP,0x10                        ; 005fc30d
    CMP EAX,EDX                         ; 005fc310
    JNZ 0x005fc327                      ; 005fc312
        ;   XREF to: 005fc327 (CONDITIONAL_JUMP)  ; LAB_005fc327
    PUSH 0x0                            ; 005fc314
    MOV ECX,dword ptr [EBX + 0xbf7c]    ; 005fc316
    PUSH ECX                            ; 005fc31c
    PUSH EDI                            ; 005fc31d
    PUSH EBX                            ; 005fc31e
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 005fc31f
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 005fc324
    MOV EDI,dword ptr [EBX + 0xbf80]    ; 005fc327
        ;   Label: LAB_005fc327
    CMP EDI,dword ptr [ESI]             ; 005fc32d
    JNZ 0x005fc344                      ; 005fc32f
        ;   XREF to: 005fc344 (CONDITIONAL_JUMP)  ; LAB_005fc344
    PUSH 0x0                            ; 005fc331
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005fc333
    PUSH EAX                            ; 005fc339
    PUSH EBP                            ; 005fc33a
    PUSH EBX                            ; 005fc33b
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 005fc33c
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 005fc341
    MOV EDX,dword ptr [EBX + 0xbf8c]    ; 005fc344
        ;   Label: LAB_005fc344
    CMP EDX,dword ptr [ESI]             ; 005fc34a
    JNZ 0x005fc3b0                      ; 005fc34c
        ;   XREF to: 005fc3b0 (CONDITIONAL_JUMP)  ; LAB_005fc3b0
    PUSH 0x0                            ; 005fc34e
    LEA EDI,[ESI + 0xc]                 ; 005fc350
    PUSH EDI                            ; 005fc353
    MOV ECX,dword ptr [EBX + 0xbf80]    ; 005fc354
    PUSH ECX                            ; 005fc35a
    PUSH EBX                            ; 005fc35b
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 005fc35c
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005fc361
    PUSH 0x0                            ; 005fc364
    PUSH EDI                            ; 005fc366
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005fc367
    PUSH EAX                            ; 005fc36d
    PUSH EBX                            ; 005fc36e
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 005fc36f
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005fc374
    PUSH 0x0                            ; 005fc377
    PUSH EDI                            ; 005fc379
    MOV EDX,dword ptr [EBX + 0xbf78]    ; 005fc37a
    PUSH EDX                            ; 005fc380
    PUSH EBX                            ; 005fc381
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 005fc382
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005fc387
    PUSH 0x0                            ; 005fc38a
    PUSH EDI                            ; 005fc38c
    MOV ECX,dword ptr [EBX + 0xbf7c]    ; 005fc38d
    PUSH ECX                            ; 005fc393
    PUSH EBX                            ; 005fc394
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 005fc395
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005fc39a
    PUSH 0x0                            ; 005fc39d
    PUSH EDI                            ; 005fc39f
    MOV EDI,dword ptr [EBX + 0xbf90]    ; 005fc3a0
    PUSH EDI                            ; 005fc3a6
    PUSH EBX                            ; 005fc3a7
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 005fc3a8
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 005fc3ad
    PUSH 0x6589b9                       ; 005fc3b0 | = "limb?.wav"
        ;   Label: LAB_005fc3b0
    PUSH EBX                            ; 005fc3b5
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300 ; 005fc3b6
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005fc3bb
    PUSH EBP                            ; 005fc3be
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 005fc3bf
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005fc3c4
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005fc3ca
    ADD ESP,0x4                         ; 005fc3d1
    TEST EBP,EBP                        ; 005fc3d4
    JZ 0x005fc4a3                       ; 005fc3d6
        ;   XREF to: 005fc4a3 (CONDITIONAL_JUMP)  ; LAB_005fc4a3
    FLD float ptr [ESI + 0x8]           ; 005fc3dc
        ;   Label: LAB_005fc3dc
    FLD ST0                             ; 005fc3df
    FMUL double ptr [0x006589c5]        ; 005fc3e1 | DOUBLE_006589c5
    FSTP ST1                            ; 005fc3e7
    FSTP float ptr [ESI + 0x8]          ; 005fc3e9
    CMP dword ptr [EBX + 0xbf88],0x0    ; 005fc3ec
    JL 0x005fc4af                       ; 005fc3f3
        ;   XREF to: 005fc4af (CONDITIONAL_JUMP)  ; LAB_005fc4af
    MOV EDX,dword ptr [EBX + 0xbf90]    ; 005fc3f9
        ;   Label: LAB_005fc3f9
    MOV EAX,dword ptr [ESI]             ; 005fc3ff
    CMP EAX,EDX                         ; 005fc401
    JZ 0x005fc4bb                       ; 005fc403
        ;   XREF to: 005fc4bb (CONDITIONAL_JUMP)  ; LAB_005fc4bb
    CMP EAX,dword ptr [EBX + 0xbf88]    ; 005fc409
    JZ 0x005fc41d                       ; 005fc40f
        ;   XREF to: 005fc41d (CONDITIONAL_JUMP)  ; LAB_005fc41d
    CMP EAX,dword ptr [EBX + 0xbf8c]    ; 005fc411
    JNZ 0x005fc4d3                      ; 005fc417
        ;   XREF to: 005fc4d3 (CONDITIONAL_JUMP)  ; LAB_005fc4d3
    MOV EAX,dword ptr [ESI + 0x4]       ; 005fc41d
        ;   Label: LAB_005fc41d
    MOV dword ptr [ESI + 0x4],EAX       ; 005fc420
    ADD ESP,0xc                         ; 005fc423
    POP EBP                             ; 005fc426
    POP EDI                             ; 005fc427
    POP ESI                             ; 005fc428
    POP EBX                             ; 005fc429
    RET                                 ; 005fc42a
    MOV EAX,dword ptr [EBX + 0xbf7c]    ; 005fc42b
        ;   Label: caseD_1
    JMP 0x005fc263                      ; 005fc431
        ;   XREF to: 005fc263 (UNCONDITIONAL_JUMP)  ; LAB_005fc263
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 005fc436
        ;   Label: caseD_2
    JMP 0x005fc263                      ; 005fc43c
        ;   XREF to: 005fc263 (UNCONDITIONAL_JUMP)  ; LAB_005fc263
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005fc441
        ;   Label: caseD_3
    JMP 0x005fc263                      ; 005fc447
        ;   XREF to: 005fc263 (UNCONDITIONAL_JUMP)  ; LAB_005fc263
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005fc44c
        ;   Label: caseD_4
    JMP 0x005fc263                      ; 005fc452
        ;   XREF to: 005fc263 (UNCONDITIONAL_JUMP)  ; LAB_005fc263
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005fc457
        ;   Label: caseD_5
    JMP 0x005fc263                      ; 005fc45d
        ;   XREF to: 005fc263 (UNCONDITIONAL_JUMP)  ; LAB_005fc263
    CMP EAX,dword ptr [EBX + 0xbf7c]    ; 005fc462
        ;   Label: LAB_005fc462
    JZ 0x005fc275                       ; 005fc468
        ;   XREF to: 005fc275 (CONDITIONAL_JUMP)  ; LAB_005fc275
    CMP EAX,dword ptr [EBX + 0xbf80]    ; 005fc46e
    JZ 0x005fc275                       ; 005fc474
        ;   XREF to: 005fc275 (CONDITIONAL_JUMP)  ; LAB_005fc275
    CMP EAX,dword ptr [EBX + 0xbf84]    ; 005fc47a
    JZ 0x005fc275                       ; 005fc480
        ;   XREF to: 005fc275 (CONDITIONAL_JUMP)  ; LAB_005fc275
    CMP EAX,dword ptr [EBX + 0xbf8c]    ; 005fc486
    JZ 0x005fc275                       ; 005fc48c
        ;   XREF to: 005fc275 (CONDITIONAL_JUMP)  ; LAB_005fc275
    CMP EAX,dword ptr [EBX + 0xbf90]    ; 005fc492
    JZ 0x005fc275                       ; 005fc498
        ;   XREF to: 005fc275 (CONDITIONAL_JUMP)  ; LAB_005fc275
    JMP 0x005fc3f9                      ; 005fc49e
        ;   XREF to: 005fc3f9 (UNCONDITIONAL_JUMP)  ; LAB_005fc3f9
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 005fc4a3
        ;   Label: LAB_005fc4a3
    JMP 0x005fc3dc                      ; 005fc4aa
        ;   XREF to: 005fc3dc (UNCONDITIONAL_JUMP)  ; LAB_005fc3dc
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 005fc4af
        ;   Label: LAB_005fc4af
    JMP 0x005fc3f9                      ; 005fc4b6
        ;   XREF to: 005fc3f9 (UNCONDITIONAL_JUMP)  ; LAB_005fc3f9
    FLD float ptr [ESI + 0x4]           ; 005fc4bb
        ;   Label: LAB_005fc4bb
    FLD ST0                             ; 005fc4be
    FMUL double ptr [0x006589d5]        ; 005fc4c0 | DOUBLE_006589d5
    FSTP ST1                            ; 005fc4c6
    FSTP float ptr [ESI + 0x4]          ; 005fc4c8
    ADD ESP,0xc                         ; 005fc4cb
    POP EBP                             ; 005fc4ce
    POP EDI                             ; 005fc4cf
    POP ESI                             ; 005fc4d0
    POP EBX                             ; 005fc4d1
    RET                                 ; 005fc4d2
    FLD float ptr [ESI + 0x4]           ; 005fc4d3
        ;   Label: LAB_005fc4d3
    FLD ST0                             ; 005fc4d6
    FMUL double ptr [0x006589cd]        ; 005fc4d8 | DOUBLE_006589cd
    FSTP ST1                            ; 005fc4de
    FSTP float ptr [ESI + 0x4]          ; 005fc4e0
    ADD ESP,0xc                         ; 005fc4e3
    POP EBP                             ; 005fc4e6
    POP EDI                             ; 005fc4e7
    POP ESI                             ; 005fc4e8
    POP EBX                             ; 005fc4e9
    RET                                 ; 005fc4ea

