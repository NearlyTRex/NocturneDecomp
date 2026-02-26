; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbb2f
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c0db
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_IrisFadeType
;   float g_IrisFadeRadius
;   int g_IrisFadeCenterX
;   int g_IrisFadeCenterY
;
; *****************************************************************************

section .text

    MOV dword ptr [0x02d831ec],0x3      ; 004e0960 | g_IrisFadeType
        ;   Label: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
    MOV EDX,dword ptr [0x00679394]      ; 004e096a | g_WindowWidth
    MOV EAX,EDX                         ; 004e0970
    SAR EDX,0x1f                        ; 004e0972
    SUB EAX,EDX                         ; 004e0975
    SAR EAX,0x1                         ; 004e0977
    MOV EDX,dword ptr [0x00679398]      ; 004e0979 | g_WindowHeight
    MOV [0x02d831f4],EAX                ; 004e097f | g_IrisFadeCenterX
    MOV EAX,EDX                         ; 004e0984
    SAR EDX,0x1f                        ; 004e0986
    SUB EAX,EDX                         ; 004e0989
    SAR EAX,0x1                         ; 004e098b
    FILD dword ptr [0x00679394]         ; 004e098d | g_WindowWidth
    FSTP float ptr [0x02d831f0]         ; 004e0993 | g_IrisFadeRadius
    MOV [0x02d831f8],EAX                ; 004e0999 | g_IrisFadeCenterY
    MOV EAX,EAX                         ; 004e099e

