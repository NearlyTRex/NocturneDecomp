; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_00599400(CZombie *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processDamage_FUN_005996d0 at 005996dd
;
; Referenced Globals:
;   undefined1* switchdataD_005993e4 = 0059943d
;   TerminatedCString s_limb_wav_005ef35e
;   undefined4 DAT_005ef36a
;   undefined4 DAT_005ef372
;   undefined4 DAT_005ef37a
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.blood_flag
;   undefined4 g_CGameInstance.gratuitous_dismemberment
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

    PUSH EBX                            ; 00599400
        ;   Label: core_zombie.cpp_CZombie_processDismemberment_FUN_00599400
    PUSH ESI                            ; 00599401
    PUSH EDI                            ; 00599402
    PUSH EBP                            ; 00599403
    SUB ESP,0xc                         ; 00599404
    MOV EBX,dword ptr [ESP + 0x20]      ; 00599407
    MOV ESI,dword ptr [ESP + 0x24]      ; 0059940b
    FLD float ptr [ESI + 0x2c]          ; 0059940f
    FLDZ                                ; 00599412
    FCOMPP                              ; 00599414
    FNSTSW AX                           ; 00599416
    SAHF                                ; 00599418
    JNC 0x00599445                      ; 00599419
        ;   XREF to: 00599445 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0059941b
    JNZ 0x00599445                      ; 0059941e
        ;   XREF to: 00599445 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00599420
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 00599425
    MOV EDI,0x6                         ; 00599427
    SAR EDX,0x1f                        ; 0059942c
    IDIV EDI                            ; 0059942f
    CMP EDX,0x5                         ; 00599431
    JA 0x00599445                       ; 00599434
        ;   XREF to: 00599445 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5993e4]  ; 00599436 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10bb4]   ; 0059943d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00599443
        ;   Label: LAB_00599443
    MOV ECX,dword ptr [EBX + 0x10bb4]   ; 00599445
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0059944b
    CMP EAX,ECX                         ; 0059944d
    JNZ 0x00599642                      ; 0059944f
        ;   XREF to: 00599642 (CONDITIONAL_JUMP)  ; LAB_00599642
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00599455
        ;   Label: LAB_00599455
    MOV EBP,dword ptr [EBX + 0x10bcc]   ; 00599458
    MOV dword ptr [ESP + 0x8],EAX       ; 0059945e
    CMP EBP,dword ptr [ESI]             ; 00599462
    JNZ 0x0059946e                      ; 00599464
        ;   XREF to: 0059946e (CONDITIONAL_JUMP)  ; LAB_0059946e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00599466
    MOV EDX,dword ptr [EBX + 0x10bc8]   ; 0059946e
        ;   Label: LAB_0059946e
    CMP EDX,dword ptr [ESI]             ; 00599474
    JNZ 0x00599480                      ; 00599476
        ;   XREF to: 00599480 (CONDITIONAL_JUMP)  ; LAB_00599480
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00599478
    MOV EAX,[0x00616494]                ; 00599480 | g_CGamePtr
        ;   Label: LAB_00599480
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00599485 | g_CGameInstance.gratuitous_dismemberment
    JZ 0x00599496                       ; 0059948c
        ;   XREF to: 00599496 (CONDITIONAL_JUMP)  ; LAB_00599496
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0059948e
    MOV EAX,[0x00616494]                ; 00599496 | g_CGamePtr
        ;   Label: LAB_00599496
    MOV EDX,dword ptr [EAX + 0x14]      ; 0059949b | g_CGameInstance.blood_flag
    TEST EDX,EDX                        ; 0059949e
    JNZ 0x005994a6                      ; 005994a0
        ;   XREF to: 005994a6 (CONDITIONAL_JUMP)  ; LAB_005994a6
    MOV dword ptr [ESP + 0x8],EDX       ; 005994a2
    PUSH dword ptr [ESP + 0x8]          ; 005994a6
        ;   Label: LAB_005994a6
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 005994aa
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 005994af
    TEST EAX,EAX                        ; 005994b2
    JZ 0x005995d9                       ; 005994b4
        ;   XREF to: 005995d9 (CONDITIONAL_JUMP)  ; LAB_005995d9
    PUSH 0x0                            ; 005994ba
    PUSH 0x0                            ; 005994bc
    PUSH 0x0                            ; 005994be
    PUSH EBX                            ; 005994c0
    LEA EAX,[ESI + 0xc]                 ; 005994c1
    PUSH EAX                            ; 005994c4
    LEA EAX,[EBX + 0x30]                ; 005994c5
    PUSH EAX                            ; 005994c8
    LEA EAX,[EBX + 0x20]                ; 005994c9
    PUSH EAX                            ; 005994cc
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 005994cd
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 005994d2
    MOV EDI,EAX                         ; 005994d5
    PUSH 0x0                            ; 005994d7
    MOV EBP,EAX                         ; 005994d9
    MOV EAX,dword ptr [ESI]             ; 005994db
    PUSH EAX                            ; 005994dd
    PUSH EDI                            ; 005994de
    PUSH EBX                            ; 005994df
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 005994e0
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 005994e5
    MOV EDX,dword ptr [EBX + 0x10bb4]   ; 005994e7
    ADD ESP,0x10                        ; 005994ed
    CMP EAX,EDX                         ; 005994f0
    JNZ 0x00599507                      ; 005994f2
        ;   XREF to: 00599507 (CONDITIONAL_JUMP)  ; LAB_00599507
    PUSH 0x0                            ; 005994f4
    MOV ECX,dword ptr [EBX + 0x10bb8]   ; 005994f6
    PUSH ECX                            ; 005994fc
    PUSH EDI                            ; 005994fd
    PUSH EBX                            ; 005994fe
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 005994ff
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00599504
    MOV EDI,dword ptr [EBX + 0x10bbc]   ; 00599507
        ;   Label: LAB_00599507
    CMP EDI,dword ptr [ESI]             ; 0059950d
    JNZ 0x00599524                      ; 0059950f
        ;   XREF to: 00599524 (CONDITIONAL_JUMP)  ; LAB_00599524
    PUSH 0x0                            ; 00599511
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 00599513
    PUSH EAX                            ; 00599519
    PUSH EBP                            ; 0059951a
    PUSH EBX                            ; 0059951b
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 0059951c
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00599521
    MOV EDX,dword ptr [EBX + 0x10bc8]   ; 00599524
        ;   Label: LAB_00599524
    CMP EDX,dword ptr [ESI]             ; 0059952a
    JNZ 0x00599590                      ; 0059952c
        ;   XREF to: 00599590 (CONDITIONAL_JUMP)  ; LAB_00599590
    PUSH 0x0                            ; 0059952e
    LEA EDI,[ESI + 0xc]                 ; 00599530
    PUSH EDI                            ; 00599533
    MOV ECX,dword ptr [EBX + 0x10bbc]   ; 00599534
    PUSH ECX                            ; 0059953a
    PUSH EBX                            ; 0059953b
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 0059953c
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00599541
    PUSH 0x0                            ; 00599544
    PUSH EDI                            ; 00599546
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 00599547
    PUSH EAX                            ; 0059954d
    PUSH EBX                            ; 0059954e
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 0059954f
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00599554
    PUSH 0x0                            ; 00599557
    PUSH EDI                            ; 00599559
    MOV EDX,dword ptr [EBX + 0x10bb4]   ; 0059955a
    PUSH EDX                            ; 00599560
    PUSH EBX                            ; 00599561
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 00599562
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00599567
    PUSH 0x0                            ; 0059956a
    PUSH EDI                            ; 0059956c
    MOV ECX,dword ptr [EBX + 0x10bb8]   ; 0059956d
    PUSH ECX                            ; 00599573
    PUSH EBX                            ; 00599574
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 00599575
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0059957a
    PUSH 0x0                            ; 0059957d
    PUSH EDI                            ; 0059957f
    MOV EDI,dword ptr [EBX + 0x10bcc]   ; 00599580
    PUSH EDI                            ; 00599586
    PUSH EBX                            ; 00599587
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770 ; 00599588
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0059958d
    PUSH 0x5ef35e                       ; 00599590 | = "limb?.wav"
        ;   Label: LAB_00599590
    PUSH EBX                            ; 00599595
    CALL core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260 ; 00599596
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0059959b
    PUSH EBP                            ; 0059959e
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 0059959f
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 005995a4
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 005995aa
    ADD ESP,0x4                         ; 005995b1
    TEST EBP,EBP                        ; 005995b4
    JZ 0x00599683                       ; 005995b6
        ;   XREF to: 00599683 (CONDITIONAL_JUMP)  ; LAB_00599683
    FLD float ptr [ESI + 0x8]           ; 005995bc
        ;   Label: LAB_005995bc
    FLD ST0                             ; 005995bf
    FMUL double ptr [0x005ef36a]        ; 005995c1 | DAT_005ef36a
    FSTP ST1                            ; 005995c7
    FSTP float ptr [ESI + 0x8]          ; 005995c9
    CMP dword ptr [EBX + 0x10bc4],0x0   ; 005995cc
    JL 0x0059968f                       ; 005995d3
        ;   XREF to: 0059968f (CONDITIONAL_JUMP)  ; LAB_0059968f
    MOV EDX,dword ptr [EBX + 0x10bcc]   ; 005995d9
        ;   Label: LAB_005995d9
    MOV EAX,dword ptr [ESI]             ; 005995df
    CMP EAX,EDX                         ; 005995e1
    JZ 0x0059969b                       ; 005995e3
        ;   XREF to: 0059969b (CONDITIONAL_JUMP)  ; LAB_0059969b
    CMP EAX,dword ptr [EBX + 0x10bc4]   ; 005995e9
    JZ 0x005995fd                       ; 005995ef
        ;   XREF to: 005995fd (CONDITIONAL_JUMP)  ; LAB_005995fd
    CMP EAX,dword ptr [EBX + 0x10bc8]   ; 005995f1
    JNZ 0x005996b3                      ; 005995f7
        ;   XREF to: 005996b3 (CONDITIONAL_JUMP)  ; LAB_005996b3
    MOV EAX,dword ptr [ESI + 0x4]       ; 005995fd
        ;   Label: LAB_005995fd
    MOV dword ptr [ESI + 0x4],EAX       ; 00599600
    ADD ESP,0xc                         ; 00599603
    POP EBP                             ; 00599606
    POP EDI                             ; 00599607
    POP ESI                             ; 00599608
    POP EBX                             ; 00599609
    RET                                 ; 0059960a
    MOV EAX,dword ptr [EBX + 0x10bb8]   ; 0059960b
        ;   Label: caseD_1
    JMP 0x00599443                      ; 00599611
        ;   XREF to: 00599443 (UNCONDITIONAL_JUMP)  ; LAB_00599443
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 00599616
        ;   Label: caseD_2
    JMP 0x00599443                      ; 0059961c
        ;   XREF to: 00599443 (UNCONDITIONAL_JUMP)  ; LAB_00599443
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 00599621
        ;   Label: caseD_3
    JMP 0x00599443                      ; 00599627
        ;   XREF to: 00599443 (UNCONDITIONAL_JUMP)  ; LAB_00599443
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 0059962c
        ;   Label: caseD_4
    JMP 0x00599443                      ; 00599632
        ;   XREF to: 00599443 (UNCONDITIONAL_JUMP)  ; LAB_00599443
    MOV EAX,dword ptr [EBX + 0x10bc8]   ; 00599637
        ;   Label: caseD_5
    JMP 0x00599443                      ; 0059963d
        ;   XREF to: 00599443 (UNCONDITIONAL_JUMP)  ; LAB_00599443
    CMP EAX,dword ptr [EBX + 0x10bb8]   ; 00599642
        ;   Label: LAB_00599642
    JZ 0x00599455                       ; 00599648
        ;   XREF to: 00599455 (CONDITIONAL_JUMP)  ; LAB_00599455
    CMP EAX,dword ptr [EBX + 0x10bbc]   ; 0059964e
    JZ 0x00599455                       ; 00599654
        ;   XREF to: 00599455 (CONDITIONAL_JUMP)  ; LAB_00599455
    CMP EAX,dword ptr [EBX + 0x10bc0]   ; 0059965a
    JZ 0x00599455                       ; 00599660
        ;   XREF to: 00599455 (CONDITIONAL_JUMP)  ; LAB_00599455
    CMP EAX,dword ptr [EBX + 0x10bc8]   ; 00599666
    JZ 0x00599455                       ; 0059966c
        ;   XREF to: 00599455 (CONDITIONAL_JUMP)  ; LAB_00599455
    CMP EAX,dword ptr [EBX + 0x10bcc]   ; 00599672
    JZ 0x00599455                       ; 00599678
        ;   XREF to: 00599455 (CONDITIONAL_JUMP)  ; LAB_00599455
    JMP 0x005995d9                      ; 0059967e
        ;   XREF to: 005995d9 (UNCONDITIONAL_JUMP)  ; LAB_005995d9
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00599683
        ;   Label: LAB_00599683
    JMP 0x005995bc                      ; 0059968a
        ;   XREF to: 005995bc (UNCONDITIONAL_JUMP)  ; LAB_005995bc
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 0059968f
        ;   Label: LAB_0059968f
    JMP 0x005995d9                      ; 00599696
        ;   XREF to: 005995d9 (UNCONDITIONAL_JUMP)  ; LAB_005995d9
    FLD float ptr [ESI + 0x4]           ; 0059969b
        ;   Label: LAB_0059969b
    FLD ST0                             ; 0059969e
    FMUL double ptr [0x005ef37a]        ; 005996a0 | DAT_005ef37a
    FSTP ST1                            ; 005996a6
    FSTP float ptr [ESI + 0x4]          ; 005996a8
    ADD ESP,0xc                         ; 005996ab
    POP EBP                             ; 005996ae
    POP EDI                             ; 005996af
    POP ESI                             ; 005996b0
    POP EBX                             ; 005996b1
    RET                                 ; 005996b2
    FLD float ptr [ESI + 0x4]           ; 005996b3
        ;   Label: LAB_005996b3
    FLD ST0                             ; 005996b6
    FMUL double ptr [0x005ef372]        ; 005996b8 | DAT_005ef372
    FSTP ST1                            ; 005996be
    FSTP float ptr [ESI + 0x4]          ; 005996c0
    ADD ESP,0xc                         ; 005996c3
    POP EBP                             ; 005996c6
    POP EDI                             ; 005996c7
    POP ESI                             ; 005996c8
    POP EBX                             ; 005996c9
    RET                                 ; 005996ca

