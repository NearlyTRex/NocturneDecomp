; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bd430(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b82e9
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_FUN_004a24a0
;   core_gore.cpp_CGore_loadAssets_FUN_004cec70
;   core_inv.cpp_loadAssets_FUN_004da570
;   core_set.cpp_CDemonSet_loadAssets_FUN_00539ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd430
        ;   Label: core_game.cpp_CGame_loadAssets_FUN_004bd430
    MOV EDX,dword ptr [0x00603b28]      ; 004bd431 | g_CDemonSetPtr
    PUSH EDX                            ; 004bd437 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_loadAssets_FUN_00539ee0 ; 004bd438
        ;   XREF to: 00539ee0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadAssets_FUN_00539ee0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004bd43d
    MOV ECX,dword ptr [0x005fc5a0]      ; 004bd440 | DAT_005fc5a0
    PUSH ECX                            ; 004bd446
    CALL core_fire.cpp_FUN_004a24a0     ; 004bd447
        ;   XREF to: 004a24a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a24a0()
    ADD ESP,0x4                         ; 004bd44c
    MOV EBX,dword ptr [0x005fed24]      ; 004bd44f | g_CGorePtr
    PUSH EBX                            ; 004bd455
    CALL core_gore.cpp_CGore_loadAssets_FUN_004cec70 ; 004bd456
        ;   XREF to: 004cec70 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_loadAssets_FUN_004cec70(CGore * this_ptr)
    ADD ESP,0x4                         ; 004bd45b
    CALL core_inv.cpp_loadAssets_FUN_004da570 ; 004bd45e
        ;   XREF to: 004da570 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da570()
    POP EBX                             ; 004bd463
    RET                                 ; 004bd464

