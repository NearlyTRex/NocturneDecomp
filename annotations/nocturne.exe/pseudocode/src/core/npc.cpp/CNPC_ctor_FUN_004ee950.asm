; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_004ee950(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_hiram.cpp_CHiram_ctor_FUN_004b6610 at 004b6618
;   core_hostage.cpp_CHostage_ctor_FUN_004b69f0 at 004b69f8
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004b9af0 at 004b9af8
;   core_npc.cpp_factoryFuncNPC_FUN_004ee920 at 004ee933
;   core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0 at 004ef4e8
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_00543150 at 00543156
;   core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0 at 005433a6
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_0058cac0
;   CCharacter_full_vtable g_CNPCVTable
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_00423f40
;   core_path.cpp_CPathMap_ctor_FUN_004efd50
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee950
        ;   Label: core_npc.cpp_CNPC_ctor_FUN_004ee950
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ee951
    PUSH EBX                            ; 004ee955
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00423f40 ; 004ee956
        ;   XREF to: 00423f40 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00423f40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ee95b
    ADD EAX,0xbc8c                      ; 004ee95e
    PUSH EAX                            ; 004ee963
    CALL core_path.cpp_CPathMap_ctor_FUN_004efd50 ; 004ee964
        ;   XREF to: 004efd50 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_004efd50(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xffff4374]          ; 004ee969
    MOV dword ptr [EBX + 0x14c],0x5a0eb4 ; 004ee96f | g_CNPCVTable
    ADD ESP,0x4                         ; 004ee979
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004ee97c
    PUSH 0x58cac0                       ; 004ee986 | = "priest.dfm"
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 004ee98b
    LEA EAX,[EBX + 0x150]               ; 004ee995
    MOV dword ptr [EBX + 0x2de4],0x3fcccccd ; 004ee99b
    PUSH EAX                            ; 004ee9a5
    MOV dword ptr [EBX + 0x2de8],0xc479c000 ; 004ee9a6
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004ee9b0
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x261c],0x0    ; 004ee9b5
    ADD ESP,0x8                         ; 004ee9bf
    MOV dword ptr [EBX + 0x1f568],0x0   ; 004ee9c2
    MOV EAX,EBX                         ; 004ee9cc
    MOV dword ptr [EBX + 0x1f56c],0x0   ; 004ee9ce
    POP EBX                             ; 004ee9d8
    RET                                 ; 004ee9d9

