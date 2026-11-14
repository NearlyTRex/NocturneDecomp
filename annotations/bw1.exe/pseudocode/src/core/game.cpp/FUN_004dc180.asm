; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004dc180(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfcdc
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc180
        ;   Label: core_game.cpp_FUN_004dc180
    PUSH ESI                            ; 004dc181
    MOV EBX,0x1cd0b44                   ; 004dc182
    LEA ESI,[EBX + 0xa0]                ; 004dc187
    PUSH EBX                            ; 004dc18d
        ;   Label: LAB_004dc18d
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004dc18e
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004dc193
    ADD ESP,0x4                         ; 004dc196
    CMP EBX,ESI                         ; 004dc199
    JNZ 0x004dc18d                      ; 004dc19b
        ;   XREF to: 004dc18d (CONDITIONAL_JUMP)  ; LAB_004dc18d
    POP ESI                             ; 004dc19d
    POP EBX                             ; 004dc19e
    RET                                 ; 004dc19f

