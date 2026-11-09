; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_melee_cpp_CMelee_fire_FUN_005097c0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_005e7930
;   TerminatedCString s_CMelee_fire_should_never_005e7942
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5e7930                    ; 005097c0 | = "..\\core\\melee.cpp"
        ;   Label: core_melee.cpp_CMelee_fire_FUN_005097c0
    MOV ECX,0x8c                        ; 005097c5
    PUSH 0x5e7942                       ; 005097ca | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x01d1d400],EDX      ; 005097cf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005097d5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005097db
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    MOV EAX,0x1                         ; 005097e0
    ADD ESP,0x4                         ; 005097e5
    RET                                 ; 005097e8

