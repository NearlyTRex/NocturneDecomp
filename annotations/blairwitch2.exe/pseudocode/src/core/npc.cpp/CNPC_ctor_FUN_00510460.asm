; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * core_npc_cpp_CNPC_ctor_FUN_00510460(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_hiram.cpp_CHiram_ctor_FUN_004d0f30 at 004d0f38
;   core_hostage.cpp_CHostage_ctor_FUN_004d12d0 at 004d12d8
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004d4780 at 004d4788
;   core_npc.cpp_factoryFuncNPC_FUN_00510430 at 00510443
;   core_passngr.cpp_CPassenger_ctor_FUN_00511410 at 00511418
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30 at 00571b36
;   core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0 at 00571db6
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340
;   core_path.cpp_CPathMap_ctor_FUN_00511c90
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510460
        ;   Label: core_npc.cpp_CNPC_ctor_FUN_00510460
    SUB ESP,0x4                         ; 00510461
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510464
    PUSH EBX                            ; 00510468
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00422340 ; 00510469
        ;   XREF to: 00422340 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00422340(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0051046e
    ADD EAX,0x10a60                     ; 00510471
    PUSH EAX                            ; 00510476
    CALL core_path.cpp_CPathMap_ctor_FUN_00511c90 ; 00510477
        ;   XREF to: 00511c90 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00511c90(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xfffef5a0]          ; 0051047c
    MOV dword ptr [EBX + 0x2b0],0x5fa754 ; 00510482
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0051048c
    ADD ESP,0x4                         ; 00510496
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 00510499
    PUSH 0x3f8ccccd                     ; 005104a3
    MOV dword ptr [EBX + 0x3440],0x3fcccccd ; 005104a8
    PUSH 0x3f666666                     ; 005104b2
    MOV dword ptr [EBX + 0x3444],0xc479c000 ; 005104b7
    CALL core_actor.cpp_FUN_0040cf60    ; 005104c1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 005104c6
    FLD float ptr [ESP + 0x8]           ; 005104ca
    ADD ESP,0x8                         ; 005104ce
    PUSH 0x5e14b9                       ; 005104d1
    LEA EAX,[EBX + 0x2b4]               ; 005104d6
    PUSH EAX                            ; 005104dc
    FSTP float ptr [EBX + 0x24344]      ; 005104dd
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005104e3
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x282c],0x0    ; 005104e8
    ADD ESP,0x8                         ; 005104f2
    MOV dword ptr [EBX + 0x2433c],0x0   ; 005104f5
    MOV EAX,EBX                         ; 005104ff
    MOV dword ptr [EBX + 0x24340],0x0   ; 00510501
    ADD ESP,0x4                         ; 0051050b
    POP EBX                             ; 0051050e
    RET                                 ; 0051050f

