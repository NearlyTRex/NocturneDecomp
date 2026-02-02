; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_FUN_00559ac0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d80eb
;   core_script.cpp_CScript_FUN_00559b20 at 00559ba3
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   float g_ScriptTimeScale
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559ac0
        ;   Label: core_script.cpp_CScript_FUN_00559ac0
    SUB ESP,0x8                         ; 00559ac1
    MOV EDX,dword ptr [0x00679394]      ; 00559ac4 | g_WindowWidth
    LEA EAX,[EDX*0x4 + 0x0]             ; 00559aca
    SUB EAX,EDX                         ; 00559ad1
    SHL EAX,0x3                         ; 00559ad3
    ADD EDX,EAX                         ; 00559ad6
    SHL EDX,0x2                         ; 00559ad8
    MOV EBX,0xb9                        ; 00559adb
    MOV EAX,EDX                         ; 00559ae0
    SAR EDX,0x1f                        ; 00559ae2
    IDIV EBX                            ; 00559ae5
    MOV ECX,dword ptr [0x00679398]      ; 00559ae7 | g_WindowHeight
    MOV EDX,ECX                         ; 00559aed
    SUB EDX,EAX                         ; 00559aef
    MOV EAX,EDX                         ; 00559af1
    SAR EDX,0x1f                        ; 00559af3
    SUB EAX,EDX                         ; 00559af6
    SAR EAX,0x1                         ; 00559af8
    MOV dword ptr [ESP + 0x4],EAX       ; 00559afa
    FILD dword ptr [ESP + 0x4]          ; 00559afe
    FMUL float ptr [0x0310f4a0]         ; 00559b02 | g_ScriptTimeScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 00559b08
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00559b0d
    MOV EAX,dword ptr [ESP]             ; 00559b10
    ADD ESP,0x8                         ; 00559b13
    POP EBX                             ; 00559b16
    RET                                 ; 00559b17

