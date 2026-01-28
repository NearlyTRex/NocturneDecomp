; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_005447e0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_hiram.cpp_CHiram_ctor_FUN_004f43f0 at 004f43f8
;   core_hostage.cpp_CHostage_ctor_FUN_004f4840 at 004f4848
;   core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f7b70 at 004f7b78
;   core_npc.cpp_factoryFunc_FUN_005447a0 at 005447ba
;   core_passngr.cpp_CPassenger_ctor_FUN_00545b30 at 00545b38
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060 at 005da066
;   core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0 at 005da2c6
;
; Referenced Globals:
;   TerminatedCString s_priest_dfm_0063e309
;   CDemonActor_vtable g_CNPCVTable
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
;   core_path.cpp_CPathMap_ctor_FUN_00546450
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005447e0
        ;   Label: core_npc.cpp_CNPC_ctor_FUN_005447e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005447e1
    PUSH EBX                            ; 005447e5
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20 ; 005447e6
        ;   XREF to: 00427e20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005447eb
    ADD EAX,0xbe24                      ; 005447ee
    PUSH EAX                            ; 005447f3
    CALL core_path.cpp_CPathMap_ctor_FUN_00546450 ; 005447f4
        ;   XREF to: 00546450 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00546450(CPathMap * this_ptr)
    LEA EBX,[EAX + 0xffff41dc]          ; 005447f9
    MOV dword ptr [EBX + 0x154],0x661d94 ; 005447ff | g_CNPCVTable
    ADD ESP,0x4                         ; 00544809
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 0054480c
    PUSH 0x63e309                       ; 00544816 | = "priest.dfm"
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 0054481b
    LEA EAX,[EBX + 0x158]               ; 00544825
    MOV dword ptr [EBX + 0x2dec],0x3fcccccd ; 0054482b
    PUSH EAX                            ; 00544835
    MOV dword ptr [EBX + 0x2df0],0xc479c000 ; 00544836
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00544840
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2624],0x0    ; 00544845
    ADD ESP,0x8                         ; 0054484f
    MOV dword ptr [EBX + 0x1f700],0x0   ; 00544852
    MOV EAX,EBX                         ; 0054485c
    MOV dword ptr [EBX + 0x1f704],0x0   ; 0054485e
    POP EBX                             ; 00544868
    RET                                 ; 00544869

