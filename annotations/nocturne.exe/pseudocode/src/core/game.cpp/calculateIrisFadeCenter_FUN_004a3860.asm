; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004a3860(void)
;
;
; XREF[2]:
;   core_game.cpp_CGame_beginFadeIn_FUN_004a37e0 at 004a381a
;   core_game.cpp_CGame_renderIrisFade_FUN_004a3960 at 004a399d
;
; Referenced Globals:
;   undefined4 DAT_005be220
;   undefined4 DAT_01e56dac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3860
        ;   Label: core_game.cpp_calculateIrisFadeCenter_FUN_004a3860
    PUSH ESI                            ; 004a3861
    PUSH EDI                            ; 004a3862
    SUB ESP,0x60                        ; 004a3863
    MOV EAX,[0x005be220]                ; 004a3866 | DAT_005be220
    MOV EDX,dword ptr [EAX + 0xc]       ; 004a386b | DAT_01e56dac
    TEST EDX,EDX                        ; 004a386e
    JNZ 0x004a3695                      ; 004a3870
        ;   XREF to: 004a3695 (CONDITIONAL_JUMP)  ; LAB_004a3695
    ADD ESP,0x60                        ; 004a3876
        ;   Label: LAB_004a3876
    POP EDI                             ; 004a3879
    POP ESI                             ; 004a387a
    POP EBX                             ; 004a387b
    RET                                 ; 004a387c

