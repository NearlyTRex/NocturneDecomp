; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_fire_FUN_004e7200(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_005c711c
;   TerminatedCString s_CMelee_fire_should_never_005c712e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5c711c                    ; 004e7200 | = "..\\core\\melee.cpp"
        ;   Label: core_melee.cpp_CMelee_fire_FUN_004e7200
    MOV ECX,0x8c                        ; 004e7205
    PUSH 0x5c712e                       ; 004e720a | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x01d71de0],EDX      ; 004e720f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004e7215 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e721b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    MOV EAX,0x1                         ; 004e7220
    ADD ESP,0x4                         ; 004e7225
    RET                                 ; 004e7228

