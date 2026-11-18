; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00580830(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bc1ed
;   wincore_winrun.cpp_mainWindowProc_FUN_00580a50 at 00580c18
;
; Referenced Globals:
;   int[1] g_UseMultimediaTimer
;   int g_InputReadIndex
;   int g_InputWriteIndex
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580830
        ;   Label: wincore_winrun.cpp_enqueueInput_FUN_00580830
    MOV EDX,dword ptr [0x02d2032c]      ; 00580831 | g_InputWriteIndex
    MOV ECX,dword ptr [0x02d20328]      ; 00580837 | g_InputReadIndex
    INC EDX                             ; 0058083d
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058083e
    MOV dword ptr [EDX*0x4 + 0x2d202d4],EBX ; 00580842 | g_UseMultimediaTimer
    CMP EDX,0x14                        ; 00580849
    JL 0x00580850                       ; 0058084c
        ;   XREF to: 00580850 (CONDITIONAL_JUMP)  ; LAB_00580850
    XOR EDX,EDX                         ; 0058084e
    CMP EDX,ECX                         ; 00580850
        ;   Label: LAB_00580850
    JNZ 0x0058085c                      ; 00580852
        ;   XREF to: 0058085c (CONDITIONAL_JUMP)  ; LAB_0058085c
    INC ECX                             ; 00580854
    CMP ECX,0x14                        ; 00580855
    JL 0x0058085c                       ; 00580858
        ;   XREF to: 0058085c (CONDITIONAL_JUMP)  ; LAB_0058085c
    XOR ECX,ECX                         ; 0058085a
    MOV dword ptr [0x02d20328],ECX      ; 0058085c | g_InputReadIndex
        ;   Label: LAB_0058085c
    MOV dword ptr [0x02d2032c],EDX      ; 00580862 | g_InputWriteIndex
    POP EBX                             ; 00580868
    RET                                 ; 00580869

