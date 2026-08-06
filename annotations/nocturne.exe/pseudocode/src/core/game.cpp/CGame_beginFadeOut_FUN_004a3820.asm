; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004a3820(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e574
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500b8b
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;   undefined4 DAT_01c78b0c
;   undefined4 DAT_01c78b10
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01c78b04],0x3      ; 004a3820 | DAT_01c78b04
        ;   Label: core_game.cpp_CGame_beginFadeOut_FUN_004a3820
    MOV EDX,dword ptr [0x005b761c]      ; 004a382a | g_WindowWidth
    MOV EAX,EDX                         ; 004a3830
    SAR EDX,0x1f                        ; 004a3832
    SUB EAX,EDX                         ; 004a3835
    SAR EAX,0x1                         ; 004a3837
    MOV EDX,dword ptr [0x005b7620]      ; 004a3839 | g_WindowHeight
    MOV [0x01c78b0c],EAX                ; 004a383f | DAT_01c78b0c
    MOV EAX,EDX                         ; 004a3844
    SAR EDX,0x1f                        ; 004a3846
    SUB EAX,EDX                         ; 004a3849
    SAR EAX,0x1                         ; 004a384b
    FILD dword ptr [0x005b761c]         ; 004a384d | g_WindowWidth
    FSTP float ptr [0x01c78b08]         ; 004a3853 | DAT_01c78b08
    MOV [0x01c78b10],EAX                ; 004a3859 | DAT_01c78b10
    MOV EAX,EAX                         ; 004a385e

