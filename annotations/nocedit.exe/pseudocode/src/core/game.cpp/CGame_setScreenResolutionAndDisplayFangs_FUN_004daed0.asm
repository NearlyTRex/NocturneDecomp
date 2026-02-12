; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[6]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db886
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e99e
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539e1b
;   core_setedit.cpp_CDemonSet_FUN_005805a0 at 00580701
;   core_setedit.cpp_CDemonSet_FUN_00581320 at 00581435
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057ca39
;
; Referenced Globals:
;   TerminatedCString s_fangs_0062b63b
;   int g_WindowHeight = 0xc8
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CBitFont* g_ThemeFont
;   CBitFont* g_EditorFont
;   undefined4 DAT_02f33744
;
; Called Functions:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004daed0
        ;   Label: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
    SUB ESP,0x14                        ; 004daed1
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0 ; 004daed4
        ;   XREF to: 00402a80 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0()
    CMP dword ptr [0x00679398],0x1e0    ; 004daed9 | g_WindowHeight
    JNZ 0x004daeef                      ; 004daee3
        ;   XREF to: 004daeef (CONDITIONAL_JUMP)  ; LAB_004daeef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004daee5
    CMP dword ptr [EAX + 0x8],0x20      ; 004daee9
    JZ 0x004daf03                       ; 004daeed
        ;   XREF to: 004daf03 (CONDITIONAL_JUMP)  ; LAB_004daf03
    PUSH 0x20                           ; 004daeef
        ;   Label: LAB_004daeef
    PUSH 0x1e0                          ; 004daef1
    PUSH 0x280                          ; 004daef6
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 004daefb
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004daf00
    MOV EAX,[0x0067d550]                ; 004daf03 | g_CDemonMissionPtr
        ;   Label: LAB_004daf03
    CMP dword ptr [EAX + 0x4],0x0       ; 004daf08 | DAT_02f33744
    JZ 0x004daf69                       ; 004daf0c
        ;   XREF to: 004daf69 (CONDITIONAL_JUMP)  ; LAB_004daf69
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004daf0e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_004daf0e
    MOV EAX,ESP                         ; 004daf13
    PUSH EAX                            ; 004daf15
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004daf16
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004daf1b
    PUSH 0x1e0                          ; 004daf1e
    PUSH 0x280                          ; 004daf23
    PUSH 0x62b63b                       ; 004daf28 | = "fangs"
    LEA EAX,[ESP + 0xc]                 ; 004daf2d
    PUSH EAX                            ; 004daf31
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004daf32
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004daf37
    PUSH 0x8000                         ; 004daf3a
    PUSH 0x0                            ; 004daf3f
    PUSH 0x0                            ; 004daf41
    LEA EAX,[ESP + 0xc]                 ; 004daf43
    PUSH EAX                            ; 004daf47
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 004daf48
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004daf4d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004daf50
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x0                            ; 004daf55
    LEA EAX,[ESP + 0x4]                 ; 004daf57
    PUSH EAX                            ; 004daf5b
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 004daf5c
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004daf61
    ADD ESP,0x14                        ; 004daf64
    POP EBX                             ; 004daf67
    RET                                 ; 004daf68
    MOV EAX,[0x020a5720]                ; 004daf69 | g_ThemeFont
        ;   Label: LAB_004daf69
    MOV [0x02cf1cd0],EAX                ; 004daf6e | g_EditorFont
    JMP 0x004daf0e                      ; 004daf73
        ;   XREF to: 004daf0e (UNCONDITIONAL_JUMP)  ; LAB_004daf0e

