; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dfce
;
; Referenced Globals:
;   TerminatedCString s_fangs_005827b8
;   int g_WindowHeight = 0xc8
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   CBitFont* g_CBitFont_PTR_014b9900
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00403770
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d960
        ;   Label: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960
    SUB ESP,0x14                        ; 0049d961
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_00403770 ; 0049d964
        ;   XREF to: 00403770 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_00403770()
    CMP dword ptr [0x005b7620],0x1e0    ; 0049d969 | g_WindowHeight
    JNZ 0x0049d97f                      ; 0049d973
        ;   XREF to: 0049d97f (CONDITIONAL_JUMP)  ; LAB_0049d97f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d975
    CMP dword ptr [EAX + 0x8],0x20      ; 0049d979
    JZ 0x0049d993                       ; 0049d97d
        ;   XREF to: 0049d993 (CONDITIONAL_JUMP)  ; LAB_0049d993
    PUSH 0x20                           ; 0049d97f
        ;   Label: LAB_0049d97f
    PUSH 0x1e0                          ; 0049d981
    PUSH 0x280                          ; 0049d986
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 0049d98b
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0049d990
    MOV EAX,[0x005baf90]                ; 0049d993 | g_CDemonMission_PTR_005baf90
        ;   Label: LAB_0049d993
    CMP dword ptr [EAX + 0x4],0x0       ; 0049d998 | DAT_01cc9454
    JZ 0x0049d9f9                       ; 0049d99c
        ;   XREF to: 0049d9f9 (CONDITIONAL_JUMP)  ; LAB_0049d9f9
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0049d99e
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_0049d99e
    MOV EAX,ESP                         ; 0049d9a3
    PUSH EAX                            ; 0049d9a5
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 0049d9a6
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0049d9ab
    PUSH 0x1e0                          ; 0049d9ae
    PUSH 0x280                          ; 0049d9b3
    PUSH 0x5827b8                       ; 0049d9b8 | = "fangs"
    LEA EAX,[ESP + 0xc]                 ; 0049d9bd
    PUSH EAX                            ; 0049d9c1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 0049d9c2
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0049d9c7
    PUSH 0x8000                         ; 0049d9ca
    PUSH 0x0                            ; 0049d9cf
    PUSH 0x0                            ; 0049d9d1
    LEA EAX,[ESP + 0xc]                 ; 0049d9d3
    PUSH EAX                            ; 0049d9d7
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 0049d9d8
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0049d9dd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0049d9e0
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x0                            ; 0049d9e5
    LEA EAX,[ESP + 0x4]                 ; 0049d9e7
    PUSH EAX                            ; 0049d9eb
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 0049d9ec
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049d9f1
    ADD ESP,0x14                        ; 0049d9f4
    POP EBX                             ; 0049d9f7
    RET                                 ; 0049d9f8
    MOV EAX,[0x014b9900]                ; 0049d9f9 | g_CBitFont_PTR_014b9900
        ;   Label: LAB_0049d9f9
    MOV [0x01bcd070],EAX                ; 0049d9fe | DAT_01bcd070
    JMP 0x0049d99e                      ; 0049da03
        ;   XREF to: 0049d99e (UNCONDITIONAL_JUMP)  ; LAB_0049d99e

