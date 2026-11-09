; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(int muted)
;
; Parameters:
; int              Stack[0x4]:4   muted
;
; XREF[4]:
;   core_game.cpp_FUN_004b82e0 at 004b8440
;   core_menu.cpp_FUN_004ed260 at 004edb33
;   core_menu.cpp_FUN_004ee3f0 at 004ee724
;   sound_sndmain.cpp_FUN_00553680 at 00553899
;
; Referenced Globals:
;   undefined4 DAT_02648e8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00550bd0
        ;   Label: sound_sndmain.cpp_setSoundMuted_FUN_00550bd0
    MOV [0x02648e8c],EAX                ; 00550bd4 | DAT_02648e8c
    TEST EAX,EAX                        ; 00550bd9
    JNZ 0x005526b0                      ; 00550bdb
        ;   XREF to: 005526b0 (CONDITIONAL_JUMP)
    RET                                 ; 00550be1

