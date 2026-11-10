; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * core_npc_cpp_CNPC_ctor_FUN_00531670(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_hiram.cpp_CHiram_ctor_FUN_004ed190 at 004ed198
;   core_hostage.cpp_CHostage_ctor_FUN_004ed500 at 004ed508
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f0990 at 004f0998
;   core_npc.cpp_factoryFuncNPC_FUN_00531640 at 00531653
;   core_passngr.cpp_CPassenger_ctor_FUN_00532770 at 00532778
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780 at 00594786
;   core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00 at 00594a06
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_ctor_FUN_0042c080
;   core_path.cpp_CPathMap_ctor_FUN_00532fe0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531670
        ;   Label: core_npc.cpp_CNPC_ctor_FUN_00531670
    SUB ESP,0x4                         ; 00531671
    MOV EBX,dword ptr [ESP + 0xc]       ; 00531674
    PUSH EBX                            ; 00531678
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042c080 ; 00531679
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042c080(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0053167e
    ADD EAX,0xc1d0                      ; 00531681
    PUSH EAX                            ; 00531686
    CALL core_path.cpp_CPathMap_ctor_FUN_00532fe0 ; 00531687
        ;   XREF to: 00532fe0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00532fe0(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xffff3e30]          ; 0053168c
    MOV dword ptr [EBX + 0x154],0x604454 ; 00531692
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0053169c
    ADD ESP,0x4                         ; 005316a6
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 005316a9
    PUSH 0x3f8ccccd                     ; 005316b3
    MOV dword ptr [EBX + 0x2ffc],0x3fcccccd ; 005316b8
    PUSH 0x3f666666                     ; 005316c2
    MOV dword ptr [EBX + 0x3000],0xc479c000 ; 005316c7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005316d1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005316d6
    FLD float ptr [ESP + 0x8]           ; 005316da
    ADD ESP,0x8                         ; 005316de
    PUSH 0x5ec714                       ; 005316e1
    LEA EAX,[EBX + 0x158]               ; 005316e6
    PUSH EAX                            ; 005316ec
    FSTP float ptr [EBX + 0x1fab4]      ; 005316ed
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 005316f3
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005316f8
    ADD ESP,0x8                         ; 00531702
    MOV dword ptr [EBX + 0x1faac],0x0   ; 00531705
    MOV EAX,EBX                         ; 0053170f
    MOV dword ptr [EBX + 0x1fab0],0x0   ; 00531711
    ADD ESP,0x4                         ; 0053171b
    POP EBX                             ; 0053171e
    RET                                 ; 0053171f

