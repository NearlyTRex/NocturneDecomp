; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_loadAssets_FUN_004d5e40(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cf939
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0
;   core_gore.cpp_CGore_loadAssets_FUN_004e6310
;   core_inv.cpp_FUN_004f70e0
;   core_set.cpp_CDemonSet_loadAssets_FUN_00554550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5e40
        ;   Label: core_game.cpp_CGame_loadAssets_FUN_004d5e40
    MOV EDX,dword ptr [0x00622c18]      ; 004d5e41 | g_CDemonSetPtr
    PUSH EDX                            ; 004d5e47 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_loadAssets_FUN_00554550 ; 004d5e48
        ;   XREF to: 00554550 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadAssets_FUN_00554550(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d5e4d
    MOV ECX,dword ptr [0x0061c010]      ; 004d5e50 | DAT_0061c010
    PUSH ECX                            ; 004d5e56
    CALL core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0 ; 004d5e57
        ;   XREF to: 004b5ac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004d5e5c
    MOV EBX,dword ptr [0x0061dca4]      ; 004d5e5f | g_CGorePtr
    PUSH EBX                            ; 004d5e65
    CALL core_gore.cpp_CGore_loadAssets_FUN_004e6310 ; 004d5e66
        ;   XREF to: 004e6310 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_loadAssets_FUN_004e6310(CGore * this_ptr)
    ADD ESP,0x4                         ; 004d5e6b
    CALL core_inv.cpp_FUN_004f70e0      ; 004d5e6e
        ;   XREF to: 004f70e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f70e0()
    POP EBX                             ; 004d5e73
    RET                                 ; 004d5e74

