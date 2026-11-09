; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bb8b0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_gabriela.cpp_FUN_004b1bf0 at 004b1dd8
;   core_stranger.cpp_FUN_0056d060 at 0056d2b1
;   unkafter_stranger.cpp_FUN_0045b190 at 0045b3e1
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_inv.cpp_FUN_004dd2f0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cedef4]                ; 004bb8b0 | DAT_01cedef4
        ;   Label: core_game.cpp_FUN_004bb8b0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bb8b5
    ADD EAX,0x2437c                     ; 004bb8bc
    PUSH EAX                            ; 004bb8c1
    CALL core_inv.cpp_FUN_004dd2f0      ; 004bb8c2
        ;   XREF to: 004dd2f0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dd2f0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004bb8c7
    RET                                 ; 004bb8ca

