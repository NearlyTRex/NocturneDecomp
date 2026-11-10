; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004dc040(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf83f
;
; Referenced Globals:
;   undefined4 s_cursor_005e3653+1
;   TerminatedCString s_upwhite_005e365b
;   TerminatedCString s_downwhite_005e3663
;   TerminatedCString s_leftwhite_005e366d
;   TerminatedCString s_rightwhite_005e3677
;   TerminatedCString s_crosshairsgreen_005e3682
;   TerminatedCString s_crosshairsred_005e3692
;   undefined4 DAT_005e36a0
;   undefined4 DAT_01cd0be4
;   undefined4 DAT_01cd0be8
;   undefined4 DAT_01cd0bec
;   undefined4 DAT_01cd0bf0
;   undefined4 DAT_01cd0bf4
;   undefined4 DAT_01cd0bf8
;   undefined4 DAT_01cd0bfc
;   ... and 9 more
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc040
        ;   Label: core_game.cpp_FUN_004dc040
    PUSH ESI                            ; 004dc041
    PUSH EBP                            ; 004dc042
    MOV EBX,0x1cd0b44                   ; 004dc043
    LEA ESI,[EBX + 0xa0]                ; 004dc048
    PUSH EBX                            ; 004dc04e
        ;   Label: LAB_004dc04e
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004dc04f
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004dc054
    ADD ESP,0x4                         ; 004dc057
    CMP EBX,ESI                         ; 004dc05a
    JNZ 0x004dc04e                      ; 004dc05c
        ;   XREF to: 004dc04e (CONDITIONAL_JUMP)  ; LAB_004dc04e
    PUSH 0x10                           ; 004dc05e
    PUSH 0x10                           ; 004dc060
    PUSH 0x5e3654                       ; 004dc062 | s_cursor_005e3653+1
    PUSH 0x1cd0b44                      ; 004dc067
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc06c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc071
    PUSH 0x10                           ; 004dc074
    PUSH 0x10                           ; 004dc076
    PUSH 0x5e365b                       ; 004dc078 | = "upwhite"
    PUSH 0x1cd0b58                      ; 004dc07d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc082
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc087
    PUSH 0x10                           ; 004dc08a
    PUSH 0x10                           ; 004dc08c
    PUSH 0x5e3663                       ; 004dc08e | = "downwhite"
    PUSH 0x1cd0b6c                      ; 004dc093
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc098
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc09d
    PUSH 0x10                           ; 004dc0a0
    PUSH 0x10                           ; 004dc0a2
    PUSH 0x5e366d                       ; 004dc0a4 | = "leftwhite"
    PUSH 0x1cd0b80                      ; 004dc0a9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc0ae
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc0b3
    PUSH 0x10                           ; 004dc0b6
    PUSH 0x10                           ; 004dc0b8
    PUSH 0x5e3677                       ; 004dc0ba | = "rightwhite"
    PUSH 0x1cd0b94                      ; 004dc0bf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc0c4
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc0c9
    PUSH 0x10                           ; 004dc0cc
    PUSH 0x10                           ; 004dc0ce
    PUSH 0x5e3682                       ; 004dc0d0 | = "crosshairsgreen"
    PUSH 0x1cd0ba8                      ; 004dc0d5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc0da
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc0df
    PUSH 0x10                           ; 004dc0e2
    PUSH 0x10                           ; 004dc0e4
    PUSH 0x5e3692                       ; 004dc0e6 | = "crosshairsred"
    PUSH 0x1cd0bbc                      ; 004dc0eb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc0f0
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dc0f5
    PUSH 0x10                           ; 004dc0f8
    PUSH 0x10                           ; 004dc0fa
    PUSH 0x5e36a0                       ; 004dc0fc | DAT_005e36a0
    PUSH 0x1cd0bd0                      ; 004dc101
    MOV EBP,0x10                        ; 004dc106
    XOR ESI,ESI                         ; 004dc10b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004dc10d
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EDX,0x8                         ; 004dc112
    ADD ESP,0x10                        ; 004dc117
    MOV dword ptr [0x01cd0c08],ESI      ; 004dc11a | DAT_01cd0c08
    MOV dword ptr [0x01cd0c0c],EBP      ; 004dc120 | DAT_01cd0c0c
    MOV dword ptr [0x01cd0bf0],ESI      ; 004dc126 | DAT_01cd0bf0
    MOV dword ptr [0x01cd0bf4],EBP      ; 004dc12c | DAT_01cd0bf4
    MOV dword ptr [0x01cd0be4],EDX      ; 004dc132 | DAT_01cd0be4
    MOV dword ptr [0x01cd0c04],EDX      ; 004dc138 | DAT_01cd0c04
    MOV dword ptr [0x01cd0be8],EDX      ; 004dc13e | DAT_01cd0be8
    MOV dword ptr [0x01cd0bec],EDX      ; 004dc144 | DAT_01cd0bec
    MOV dword ptr [0x01cd0c10],EDX      ; 004dc14a | DAT_01cd0c10
    MOV dword ptr [0x01cd0c14],EDX      ; 004dc150 | DAT_01cd0c14
    MOV dword ptr [0x01cd0bf8],EDX      ; 004dc156 | DAT_01cd0bf8
    MOV dword ptr [0x01cd0c18],EDX      ; 004dc15c | DAT_01cd0c18
    MOV dword ptr [0x01cd0bfc],EDX      ; 004dc162 | DAT_01cd0bfc
    MOV dword ptr [0x01cd0c1c],EDX      ; 004dc168 | DAT_01cd0c1c
    MOV dword ptr [0x01cd0c00],EDX      ; 004dc16e | DAT_01cd0c00
    MOV dword ptr [0x01cd0c20],EDX      ; 004dc174 | DAT_01cd0c20
    POP EBP                             ; 004dc17a
    POP ESI                             ; 004dc17b
    POP EBX                             ; 004dc17c
    RET                                 ; 004dc17d

