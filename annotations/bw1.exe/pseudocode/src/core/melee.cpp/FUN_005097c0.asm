; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005097c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_005e7930
;   TerminatedCString s_CMelee_fire_should_never_005e7942
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5e7930                    ; 005097c0 | = "..\\core\\melee.cpp"
        ;   Label: FUN_005097c0
    MOV ECX,0x8c                        ; 005097c5
    PUSH 0x5e7942                       ; 005097ca | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x01d1d400],EDX      ; 005097cf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005097d5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005097db
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    MOV EAX,0x1                         ; 005097e0
    ADD ESP,0x4                         ; 005097e5
    RET                                 ; 005097e8

