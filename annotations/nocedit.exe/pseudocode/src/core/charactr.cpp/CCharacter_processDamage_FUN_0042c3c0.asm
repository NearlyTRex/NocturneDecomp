; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0 (CCharacter *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[10]:
;   core_baron.cpp_CBaron_processDamage_FUN_00413cd0 at 00413ce1
;   core_colonel.cpp_CColonel_FUN_004404b0 at 004405a0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 at 004a9f2d
;   core_gabriela.cpp_CGabriella_FUN_004d6b30 at 004d6c88
;   core_haystack.cpp_CHaystack_processDamage_FUN_004f1b70 at 004f1c00
;   core_icepick.cpp_CIcePick_processDamage_FUN_004f95b0 at 004f9721
;   core_npc.cpp_CNPC_processDamage_FUN_00544d30 at 00544e01
;   core_scat.cpp_CScat_processDamage_FUN_00557ea0 at 00557fa2
;   core_stranger.cpp_CStranger_FUN_005c48b0 at 005c4afd
;   core_svetlana.cpp_FUN_005d9d30 at 005d9e80
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   CGame g_CGameInstance
;   CGore g_CGoreInstance
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_CCharacter_FUN_0042b190
;   core_charactr.cpp_CCharacter_FUN_0042b5b0
;   core_charactr.cpp_CCharacter_FUN_0042b8e0
;   core_charactr.cpp_CCharacter_FUN_0042b930
;   core_charactr.cpp_CCharacter_FUN_0042b9e0
;   core_charactr.cpp_CCharacter_FUN_0042d060
;   core_game.cpp_CGame_FUN_004e0bf0
;   core_gore.cpp_FUN_004edbb0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c3c0
        ;   Label: core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
    PUSH ESI                            ; 0042c3c1
    PUSH EBP                            ; 0042c3c2
    SUB ESP,0x1c                        ; 0042c3c3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042c3c6
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042c3ca
    FLD float ptr [ESI + 0x4]           ; 0042c3ce
    FLDZ                                ; 0042c3d1
    FCOMPP                              ; 0042c3d3
    FNSTSW AX                           ; 0042c3d5
    SAHF                                ; 0042c3d7
    JNC 0x0042c505                      ; 0042c3d8
        ;   XREF to: 0042c505 (CONDITIONAL_JUMP)  ; LAB_0042c505
    LEA EDX,[ESI + 0xc]                 ; 0042c3de
    FLD float ptr [EDX + 0x4]           ; 0042c3e1
    FMUL ST0                            ; 0042c3e4
    FLD float ptr [EDX]                 ; 0042c3e6
    FMUL ST0                            ; 0042c3e8
    FADDP                               ; 0042c3ea
    FLD float ptr [EDX + 0x8]           ; 0042c3ec
    FMUL ST0                            ; 0042c3ef
    FADDP                               ; 0042c3f1
    FSQRT                               ; 0042c3f3
    XOR ECX,ECX                         ; 0042c3f5
    FLDZ                                ; 0042c3f7
    FCOMPP                              ; 0042c3f9
    FNSTSW AX                           ; 0042c3fb
    SAHF                                ; 0042c3fd
    JNC 0x0042c402                      ; 0042c3fe
        ;   XREF to: 0042c402 (CONDITIONAL_JUMP)  ; LAB_0042c402
    MOV ECX,EDX                         ; 0042c400
    MOV EAX,dword ptr [ESI + 0x30]      ; 0042c402
        ;   Label: LAB_0042c402
    CMP EAX,0x6                         ; 0042c405
    JNC 0x0042c53d                      ; 0042c408
        ;   XREF to: 0042c53d (CONDITIONAL_JUMP)  ; LAB_0042c53d
    CMP EAX,0x4                         ; 0042c40e
    JNC 0x0042c55a                      ; 0042c411
        ;   XREF to: 0042c55a (CONDITIONAL_JUMP)  ; LAB_0042c55a
    CMP EAX,0x3                         ; 0042c417
    JNZ 0x0042c429                      ; 0042c41a
        ;   XREF to: 0042c429 (CONDITIONAL_JUMP)  ; LAB_0042c429
    PUSH dword ptr [ESI + 0x18]         ; 0042c41c
    PUSH ECX                            ; 0042c41f
    PUSH EBX                            ; 0042c420
    CALL core_charactr.cpp_CCharacter_FUN_0042b930 ; 0042c421
        ;   XREF to: 0042b930 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b930(CCharacter * this_ptr)
    ADD ESP,0xc                         ; 0042c426
    CMP dword ptr [ESI + 0x28],0x5      ; 0042c429
        ;   Label: LAB_0042c429
    JNZ 0x0042c45b                      ; 0042c42d
        ;   XREF to: 0042c45b (CONDITIONAL_JUMP)  ; LAB_0042c45b
    LEA EAX,[ESI + 0x1c]                ; 0042c42f
    PUSH EAX                            ; 0042c432
    LEA EAX,[ESP + 0x4]                 ; 0042c433
    PUSH EAX                            ; 0042c437
    PUSH EBX                            ; 0042c438
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042c439
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042c43e
    PUSH 0x0                            ; 0042c441
    PUSH 0x3f800000                     ; 0042c443
    PUSH 0x0                            ; 0042c448
    MOV ECX,dword ptr [ESI]             ; 0042c44a
    PUSH ECX                            ; 0042c44c
    LEA EAX,[ESP + 0x10]                ; 0042c44d
    PUSH EAX                            ; 0042c451
    PUSH EBX                            ; 0042c452
    CALL core_charactr.cpp_CCharacter_FUN_0042b5b0 ; 0042c453
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 0042c458
    FLD float ptr [ESI + 0x8]           ; 0042c45b
        ;   Label: LAB_0042c45b
    FLDZ                                ; 0042c45e
    FCOMPP                              ; 0042c460
    FNSTSW AX                           ; 0042c462
    SAHF                                ; 0042c464
    JNC 0x0042c4ae                      ; 0042c465
        ;   XREF to: 0042c4ae (CONDITIONAL_JUMP)  ; LAB_0042c4ae
    PUSH EDI                            ; 0042c467
    FLD float ptr [ESI + 0x4]           ; 0042c468
    LEA EAX,[ESI + 0x1c]                ; 0042c46b
    FMUL float ptr [ESI + 0x8]          ; 0042c46e
    PUSH EAX                            ; 0042c471
    LEA EAX,[ESP + 0x14]                ; 0042c472
    PUSH EAX                            ; 0042c476
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042c477
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EBX                            ; 0042c47c
    FISTP dword ptr [ESP + 0x28]        ; 0042c47d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0042c481
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042c485
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042c48a
    MOV EBP,dword ptr [EBX + 0x2610]    ; 0042c48d
    PUSH EBP                            ; 0042c493
    INC EDI                             ; 0042c494
    PUSH EDI                            ; 0042c495
    ADD ESI,0xc                         ; 0042c496
    PUSH ESI                            ; 0042c499
    LEA EAX,[ESP + 0x1c]                ; 0042c49a
    PUSH EAX                            ; 0042c49e
    MOV EAX,[0x0067b9a0]                ; 0042c49f | g_CGoreInstance | g_CGorePtr
    PUSH EAX                            ; 0042c4a4 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004edbb0     ; 0042c4a5
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004edbb0()
    ADD ESP,0x14                        ; 0042c4aa
    POP EDI                             ; 0042c4ad
    CMP dword ptr [EBX + 0x2444],0x1    ; 0042c4ae
        ;   Label: LAB_0042c4ae
    JNZ 0x0042c4f2                      ; 0042c4b5
        ;   XREF to: 0042c4f2 (CONDITIONAL_JUMP)  ; LAB_0042c4f2
    MOV EAX,[0x02db87d0]                ; 0042c4b7 | g_LocalHeroIndex
    CMP EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0042c4bc | g_HeroActors
    JZ 0x0042c4f2                       ; 0042c4c3
        ;   XREF to: 0042c4f2 (CONDITIONAL_JUMP)  ; LAB_0042c4f2
    FLD float ptr [EBX + 0x243c]        ; 0042c4c5
    FDIV float ptr [EBX + 0x2440]       ; 0042c4cb
    PUSH 0x40a00000                     ; 0042c4d1
    SUB ESP,0x4                         ; 0042c4d6
    LEA EAX,[EBX + 0x2448]              ; 0042c4d9
    FSTP float ptr [ESP]                ; 0042c4df
    PUSH EAX                            ; 0042c4e2
    MOV ESI,dword ptr [0x0067b654]      ; 0042c4e3 | g_CGamePtr
    PUSH ESI                            ; 0042c4e9 | g_CGameInstance
    CALL core_game.cpp_CGame_FUN_004e0bf0 ; 0042c4ea
        ;   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004e0bf0(CGame * this_ptr)
    ADD ESP,0x10                        ; 0042c4ef
    FLD float ptr [EBX + 0x243c]        ; 0042c4f2
        ;   Label: LAB_0042c4f2
    FLDZ                                ; 0042c4f8
    FCOMPP                              ; 0042c4fa
    FNSTSW AX                           ; 0042c4fc
    SAHF                                ; 0042c4fe
    JNC 0x0042c56a                      ; 0042c4ff
        ;   XREF to: 0042c56a (CONDITIONAL_JUMP)  ; LAB_0042c56a
    ADD ESP,0x1c                        ; 0042c505
        ;   Label: LAB_0042c505
    POP EBP                             ; 0042c508
    POP ESI                             ; 0042c509
    POP EBX                             ; 0042c50a
    RET                                 ; 0042c50b
    PUSH 0x0                            ; 0042c50c
        ;   Label: LAB_0042c50c
    PUSH dword ptr [ESI + 0x18]         ; 0042c50e
    PUSH ECX                            ; 0042c511
    PUSH EBX                            ; 0042c512
    CALL core_charactr.cpp_CCharacter_FUN_0042b9e0 ; 0042c513
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0042c518
    JMP 0x0042c429                      ; 0042c51b
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    PUSH EBX                            ; 0042c520
        ;   Label: LAB_0042c520
    CALL core_charactr.cpp_CCharacter_FUN_0042b190 ; 0042c521
        ;   XREF to: 0042b190 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b190(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042c526
    JMP 0x0042c429                      ; 0042c529
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    MOV dword ptr [EBX + 0xb7e0],0x40000000 ; 0042c52e
        ;   Label: LAB_0042c52e
    JMP 0x0042c429                      ; 0042c538
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    JBE 0x0042c52e                      ; 0042c53d
        ;   XREF to: 0042c52e (CONDITIONAL_JUMP)  ; LAB_0042c52e
        ;   Label: LAB_0042c53d
    CMP EAX,0x68                        ; 0042c53f
    JNC 0x0042c54e                      ; 0042c542
        ;   XREF to: 0042c54e (CONDITIONAL_JUMP)  ; LAB_0042c54e
    CMP EAX,0x7                         ; 0042c544
    JZ 0x0042c50c                       ; 0042c547
        ;   XREF to: 0042c50c (CONDITIONAL_JUMP)  ; LAB_0042c50c
    JMP 0x0042c429                      ; 0042c549
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    JBE 0x0042c520                      ; 0042c54e
        ;   XREF to: 0042c520 (CONDITIONAL_JUMP)  ; LAB_0042c520
        ;   Label: LAB_0042c54e
    CMP EAX,0x6a                        ; 0042c550
    JZ 0x0042c52e                       ; 0042c553
        ;   XREF to: 0042c52e (CONDITIONAL_JUMP)  ; LAB_0042c52e
    JMP 0x0042c429                      ; 0042c555
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    JBE 0x0042c50c                      ; 0042c55a
        ;   XREF to: 0042c50c (CONDITIONAL_JUMP)  ; LAB_0042c50c
        ;   Label: LAB_0042c55a
    PUSH EBX                            ; 0042c55c
    CALL core_charactr.cpp_CCharacter_FUN_0042b8e0 ; 0042c55d
        ;   XREF to: 0042b8e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b8e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042c562
    JMP 0x0042c429                      ; 0042c565
        ;   XREF to: 0042c429 (UNCONDITIONAL_JUMP)  ; LAB_0042c429
    PUSH EBX                            ; 0042c56a
        ;   Label: LAB_0042c56a
    CALL core_charactr.cpp_CCharacter_FUN_0042d060 ; 0042c56b
        ;   XREF to: 0042d060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042c570
    ADD ESP,0x1c                        ; 0042c573
    POP EBP                             ; 0042c576
    POP ESI                             ; 0042c577
    POP EBX                             ; 0042c578
    RET                                 ; 0042c579

