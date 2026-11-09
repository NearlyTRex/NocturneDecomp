; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_fire_FUN_004eab20(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_005dca00
;   TerminatedCString s_CMelee_fire_should_never_005dca12
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5dca00                    ; 004eab20 | = "..\\core\\melee.cpp"
        ;   Label: core_melee.cpp_CMelee_fire_FUN_004eab20
    MOV ECX,0x8e                        ; 004eab25
    PUSH 0x5dca12                       ; 004eab2a | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x01d046a0],EDX      ; 004eab2f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004eab35 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eab3b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    MOV EAX,0x1                         ; 004eab40
    ADD ESP,0x4                         ; 004eab45
    RET                                 ; 004eab48

