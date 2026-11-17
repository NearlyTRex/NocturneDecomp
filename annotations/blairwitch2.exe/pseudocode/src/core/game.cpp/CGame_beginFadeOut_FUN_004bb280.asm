; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004bb280(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00524252
;
; Referenced Globals:
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141bc = 0xc8
;   int g_IrisFadeType
;   float g_IrisFadeRadius
;   int g_IrisFadeCenterX
;   int g_IrisFadeCenterY
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01cb80e0],0x3      ; 004bb280 | g_IrisFadeType
        ;   Label: core_game.cpp_CGame_beginFadeOut_FUN_004bb280
    MOV EDX,dword ptr [0x006141b8]      ; 004bb28a | g_INT_006141b8
    MOV EAX,EDX                         ; 004bb290
    SAR EDX,0x1f                        ; 004bb292
    SUB EAX,EDX                         ; 004bb295
    SAR EAX,0x1                         ; 004bb297
    MOV EDX,dword ptr [0x006141bc]      ; 004bb299 | g_INT_006141bc
    MOV [0x01cb8110],EAX                ; 004bb29f | g_IrisFadeCenterX
    MOV EAX,EDX                         ; 004bb2a4
    SAR EDX,0x1f                        ; 004bb2a6
    SUB EAX,EDX                         ; 004bb2a9
    SAR EAX,0x1                         ; 004bb2ab
    FILD dword ptr [0x006141b8]         ; 004bb2ad | g_INT_006141b8
    FSTP float ptr [0x01cb810c]         ; 004bb2b3 | g_IrisFadeRadius
    MOV [0x01cb8114],EAX                ; 004bb2b9 | g_IrisFadeCenterY
    MOV EAX,EAX                         ; 004bb2be

