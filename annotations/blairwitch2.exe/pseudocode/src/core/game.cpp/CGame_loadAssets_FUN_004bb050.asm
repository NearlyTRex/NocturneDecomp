; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bb050(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b64cb
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0
;   core_gore.cpp_CGore_loadAssets_FUN_004c9b00
;   core_inv.cpp_loadAssets_FUN_004da990
;   core_set.cpp_CDemonSet_loadAssets_FUN_005332a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb050
        ;   Label: core_game.cpp_CGame_loadAssets_FUN_004bb050
    MOV EDX,dword ptr [0x0061b5a8]      ; 004bb051 | g_CDemonSetPtr
    PUSH EDX                            ; 004bb057
    CALL core_set.cpp_CDemonSet_loadAssets_FUN_005332a0 ; 004bb058
        ;   XREF to: 005332a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadAssets_FUN_005332a0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004bb05d
    MOV ECX,dword ptr [0x00614d30]      ; 004bb060 | DAT_00614d30
    PUSH ECX                            ; 004bb066
    CALL core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0 ; 004bb067
        ;   XREF to: 0049d1c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004bb06c
    MOV EBX,dword ptr [0x006167e0]      ; 004bb06f | g_CGorePtr
    PUSH EBX                            ; 004bb075
    CALL core_gore.cpp_CGore_loadAssets_FUN_004c9b00 ; 004bb076
        ;   XREF to: 004c9b00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_loadAssets_FUN_004c9b00(CGore * this_ptr)
    ADD ESP,0x4                         ; 004bb07b
    CALL core_inv.cpp_loadAssets_FUN_004da990 ; 004bb07e
        ;   XREF to: 004da990 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da990()
    POP EBX                             ; 004bb083
    RET                                 ; 004bb084

