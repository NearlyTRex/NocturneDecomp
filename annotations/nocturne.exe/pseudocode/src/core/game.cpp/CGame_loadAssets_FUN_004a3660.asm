; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_loadAssets_FUN_004a3660(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd40
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70
;   core_gore.cpp_CGore_loadAssets_FUN_004b04b0
;   core_inv.cpp_loadAssets_FUN_004befa0
;   core_set.cpp_CDemonSet_loadAssets_FUN_0050d280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3660
        ;   Label: core_game.cpp_CGame_loadAssets_FUN_004a3660
    MOV EDX,dword ptr [0x005be368]      ; 004a3661 | DAT_005be368
    PUSH EDX                            ; 004a3667 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_loadAssets_FUN_0050d280 ; 004a3668
        ;   XREF to: 0050d280 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadAssets_FUN_0050d280(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a366d
    MOV ECX,dword ptr [0x005b80f0]      ; 004a3670 | DAT_005b80f0
    PUSH ECX                            ; 004a3676
    CALL core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70 ; 004a3677
        ;   XREF to: 0048af70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004a367c
    MOV EBX,dword ptr [0x005b96c4]      ; 004a367f | INT_005b96c4
    PUSH EBX                            ; 004a3685
    CALL core_gore.cpp_CGore_loadAssets_FUN_004b04b0 ; 004a3686
        ;   XREF to: 004b04b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_loadAssets_FUN_004b04b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004a368b
    CALL core_inv.cpp_loadAssets_FUN_004befa0 ; 004a368e
        ;   XREF to: 004befa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004befa0()
    POP EBX                             ; 004a3693
    RET                                 ; 004a3694

