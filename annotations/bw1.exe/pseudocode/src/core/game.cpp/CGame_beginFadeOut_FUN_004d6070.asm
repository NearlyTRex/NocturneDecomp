; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004d6070(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d030a
;   core_script.cpp_CScript_step_FUN_00544460 at 00546107
;
; Referenced Globals:
;   int g_INT_0061b498 = 0x140
;   int g_INT_0061b49c = 0xc8
;   int g_INT_01cd0c7c
;   float g_FLOAT_01cd0c80
;   int g_INT_01cd0c84
;   int g_INT_01cd0c88
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01cd0c7c],0x3      ; 004d6070 | g_INT_01cd0c7c
        ;   Label: core_game.cpp_CGame_beginFadeOut_FUN_004d6070
    MOV EDX,dword ptr [0x0061b498]      ; 004d607a | g_INT_0061b498
    MOV EAX,EDX                         ; 004d6080
    SAR EDX,0x1f                        ; 004d6082
    SUB EAX,EDX                         ; 004d6085
    SAR EAX,0x1                         ; 004d6087
    MOV EDX,dword ptr [0x0061b49c]      ; 004d6089 | g_INT_0061b49c
    MOV [0x01cd0c84],EAX                ; 004d608f | g_INT_01cd0c84
    MOV EAX,EDX                         ; 004d6094
    SAR EDX,0x1f                        ; 004d6096
    SUB EAX,EDX                         ; 004d6099
    SAR EAX,0x1                         ; 004d609b
    FILD dword ptr [0x0061b498]         ; 004d609d | g_INT_0061b498
    FSTP float ptr [0x01cd0c80]         ; 004d60a3 | g_FLOAT_01cd0c80
    MOV [0x01cd0c88],EAX                ; 004d60a9 | g_INT_01cd0c88
    MOV EAX,EAX                         ; 004d60ae

