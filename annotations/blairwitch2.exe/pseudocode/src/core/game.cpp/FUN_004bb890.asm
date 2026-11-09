; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bb890(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004ad640 at 004adbcf
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_inv.cpp_FUN_004dd270
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cedef4]                ; 004bb890 | DAT_01cedef4
        ;   Label: core_game.cpp_FUN_004bb890
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bb895
    PUSH 0x0                            ; 004bb89c
    ADD EAX,0x2437c                     ; 004bb89e
    PUSH EAX                            ; 004bb8a3
    CALL core_inv.cpp_FUN_004dd270      ; 004bb8a4
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dd270(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004bb8a9
    RET                                 ; 004bb8ac

