; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawCursor_FUN_004c4a10(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004b6f30 at 004b79a2
;
; Referenced Globals:
;   int g_INT_01c5fadc
;   int g_INT_01c5fae0
;   int g_INT_01d22b48
;   int[16] g_INT_ARRAY_01d22bec
;   undefined4 g_INT_ARRAY_01d22bec[8]
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4a10
        ;   Label: core_game.cpp_drawCursor_FUN_004c4a10
    MOV EDX,dword ptr [0x01d22b48]      ; 004c4a11 | g_INT_01d22b48
    MOV EAX,[0x01c5fae0]                ; 004c4a17 | g_INT_01c5fae0
    MOV ECX,dword ptr [EDX*0x4 + 0x1d22c0c] ; 004c4a1c | g_INT_ARRAY_01d22bec[8]
    PUSH 0xffff                         ; 004c4a23
    SUB EAX,ECX                         ; 004c4a28
    MOV EBX,dword ptr [EDX*0x4 + 0x1d22bec] ; 004c4a2a | g_INT_ARRAY_01d22bec
    PUSH EAX                            ; 004c4a31
    MOV EAX,[0x01c5fadc]                ; 004c4a32 | g_INT_01c5fadc
    SUB EAX,EBX                         ; 004c4a37
    PUSH EAX                            ; 004c4a39
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c4a3a
    ADD EAX,EDX                         ; 004c4a41
    SHL EAX,0x2                         ; 004c4a43
    ADD EAX,0x1d22b4c                   ; 004c4a46
    PUSH EAX                            ; 004c4a4b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004c4a4c
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004c4a51
    POP EBX                             ; 004c4a54
    RET                                 ; 004c4a55

