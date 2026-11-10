; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004c49f0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b860a
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c49f0
        ;   Label: core_game.cpp_FUN_004c49f0
    PUSH ESI                            ; 004c49f1
    MOV EBX,0x1d22b4c                   ; 004c49f2
    LEA ESI,[EBX + 0xa0]                ; 004c49f7
    PUSH EBX                            ; 004c49fd
        ;   Label: LAB_004c49fd
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004c49fe
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004c4a03
    ADD ESP,0x4                         ; 004c4a06
    CMP EBX,ESI                         ; 004c4a09
    JNZ 0x004c49fd                      ; 004c4a0b
        ;   XREF to: 004c49fd (CONDITIONAL_JUMP)  ; LAB_004c49fd
    POP ESI                             ; 004c4a0d
    POP EBX                             ; 004c4a0e
    RET                                 ; 004c4a0f

