; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b67ea
;
; Referenced Globals:
;   TerminatedCString s_test_logo_005d76c1
;   undefined4 DAT_006141bc
;   undefined4 DAT_00618170
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01c25590
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   wincore_wddvmem.cpp_FUN_00588a50
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b60c0
        ;   Label: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0
    SUB ESP,0x14                        ; 004b60c1
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0 ; 004b60c4
        ;   XREF to: 00402ad0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0()
    CMP dword ptr [0x006141bc],0x1e0    ; 004b60c9 | DAT_006141bc
    JNZ 0x004b60df                      ; 004b60d3
        ;   XREF to: 004b60df (CONDITIONAL_JUMP)  ; LAB_004b60df
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b60d5
    CMP dword ptr [EAX + 0x8],0x20      ; 004b60d9
    JZ 0x004b60f3                       ; 004b60dd
        ;   XREF to: 004b60f3 (CONDITIONAL_JUMP)  ; LAB_004b60f3
    PUSH 0x20                           ; 004b60df
        ;   Label: LAB_004b60df
    PUSH 0x1e0                          ; 004b60e1
    PUSH 0x280                          ; 004b60e6
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 004b60eb
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004b60f0
    MOV EAX,[0x00618170]                ; 004b60f3 | DAT_00618170
        ;   Label: LAB_004b60f3
    CMP dword ptr [EAX + 0x1008],0x0    ; 004b60f8 | DAT_01d192f8
    JZ 0x004b615c                       ; 004b60ff
        ;   XREF to: 004b615c (CONDITIONAL_JUMP)  ; LAB_004b615c
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004b6101
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_004b6101
    MOV EAX,ESP                         ; 004b6106
    PUSH EAX                            ; 004b6108
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004b6109
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b610e
    PUSH 0x1e0                          ; 004b6111
    PUSH 0x280                          ; 004b6116
    PUSH 0x5d76c1                       ; 004b611b | = "test_logo"
    LEA EAX,[ESP + 0xc]                 ; 004b6120
    PUSH EAX                            ; 004b6124
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004b6125
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004b612a
    PUSH 0x8000                         ; 004b612d
    PUSH 0x0                            ; 004b6132
    PUSH 0x0                            ; 004b6134
    LEA EAX,[ESP + 0xc]                 ; 004b6136
    PUSH EAX                            ; 004b613a
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004b613b
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004b6140
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004b6143
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    PUSH 0x0                            ; 004b6148
    LEA EAX,[ESP + 0x4]                 ; 004b614a
    PUSH EAX                            ; 004b614e
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004b614f
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b6154
    ADD ESP,0x14                        ; 004b6157
    POP EBX                             ; 004b615a
    RET                                 ; 004b615b
    MOV EAX,[0x01511cc0]                ; 004b615c | DAT_01511cc0
        ;   Label: LAB_004b615c
    MOV [0x01c25590],EAX                ; 004b6161 | DAT_01c25590
    JMP 0x004b6101                      ; 004b6166
        ;   XREF to: 004b6101 (UNCONDITIONAL_JUMP)  ; LAB_004b6101

