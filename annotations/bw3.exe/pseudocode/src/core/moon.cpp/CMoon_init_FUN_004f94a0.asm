; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_init_FUN_004f94a0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_menu.cpp_FUN_004ea280 at 004ea412
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea580
;
; Referenced Globals:
;   TerminatedCString s_bwp3_menu_scroll_005c9245
;   TerminatedCString s_bwp3_hand_005c9256
;   undefined4 s_BWP3_mainmenu_005c9283+2
;   TerminatedCString s_blair_00000_005c9293
;   TerminatedCString s_blair_00001_005c929f
;   void* PTR_s_BWP3_mainmenu_005c9283+2_006006f8 = 005c9285
;   void* PTR_s_blair_00000_006006fc = 005c9293
;   undefined1* PTR_s_blair_00001_00600700 = 005c929f
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f94a0
        ;   Label: core_moon.cpp_CMoon_init_FUN_004f94a0
    PUSH EBP                            ; 004f94a1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004f94a2
    CMP dword ptr [EDI],0x0             ; 004f94a6
    JZ 0x004f94ae                       ; 004f94a9
        ;   XREF to: 004f94ae (CONDITIONAL_JUMP)  ; LAB_004f94ae
    POP EBP                             ; 004f94ab
    POP EDI                             ; 004f94ac
    RET                                 ; 004f94ad
    PUSH ESI                            ; 004f94ae
        ;   Label: LAB_004f94ae
    PUSH EBX                            ; 004f94af
    PUSH 0x1e0                          ; 004f94b0
    PUSH 0x280                          ; 004f94b5
    PUSH 0x5c9245                       ; 004f94ba | = "bwp3_menu_scroll"
    PUSH 0x1d883a8                      ; 004f94bf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004f94c4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f94c9
    PUSH 0x1e0                          ; 004f94cc
    PUSH 0x280                          ; 004f94d1
    MOV ECX,dword ptr [0x006006f8]      ; 004f94d6 | PTR_s_BWP3_mainmenu_005c9283+2_006006f8
    PUSH ECX                            ; 004f94dc | s_BWP3_mainmenu_005c9283+2
    PUSH 0x1d88614                      ; 004f94dd
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004f94e2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f94e7
    PUSH 0x200                          ; 004f94ea
    PUSH 0x200                          ; 004f94ef
    PUSH 0x5c9256                       ; 004f94f4 | = "bwp3_hand"
    PUSH 0x1d88628                      ; 004f94f9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004f94fe
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV dword ptr [EDI + 0xad0],0x140   ; 004f9503
    MOV dword ptr [EDI + 0xad4],0xfffffec0 ; 004f950d
    MOV dword ptr [EDI + 0xad8],0x0     ; 004f9517
    MOV ESI,0x1d883bc                   ; 004f9521
    MOV dword ptr [EDI + 0xadc],0x1e0   ; 004f9526
    XOR EBX,EBX                         ; 004f9530
    MOV dword ptr [EDI + 0xae0],0x10000 ; 004f9532
    ADD ESP,0x10                        ; 004f953c
    MOV dword ptr [EDI + 0xae4],0x0     ; 004f953f
    PUSH 0xa5                           ; 004f9549
        ;   Label: LAB_004f9549
    PUSH 0x280                          ; 004f954e
    MOV EBP,dword ptr [EBX + 0x6006fc]  ; 004f9553 | PTR_s_blair_00000_006006fc | PTR_s_blair_00001_00600700
    PUSH EBP                            ; 004f9559 | = "blair_00000" | s_blair_00001_005c929f
    PUSH ESI                            ; 004f955a
    ADD EBX,0x4                         ; 004f955b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004f955e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004f9563
    ADD ESI,0x14                        ; 004f9566
    CMP EBX,0x78                        ; 004f9569
    JNZ 0x004f9549                      ; 004f956c
        ;   XREF to: 004f9549 (CONDITIONAL_JUMP)  ; LAB_004f9549
    MOV dword ptr [EDI],0x1             ; 004f956e
    POP EBX                             ; 004f9574
    POP ESI                             ; 004f9575
    POP EBP                             ; 004f9576
    POP EDI                             ; 004f9577
    RET                                 ; 004f9578

