; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_enqueueInput_FUN_005f2f30(int input_value)
;
; Parameters:
; int              Stack[0x4]:4   input_value
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df2a3
;   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 at 005f330f
;
; Referenced Globals:
;   BOOL g_UseMultimediaTimer
;   int g_InputReadIndex
;   int g_InputWriteIndex
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2f30
        ;   Label: wincore_winrun.cpp_enqueueInput_FUN_005f2f30
    MOV EDX,dword ptr [0x03f96c1c]      ; 005f2f31 | int g_InputWriteIndex
    MOV ECX,dword ptr [0x03f96c18]      ; 005f2f37 | int g_InputReadIndex
    INC EDX                             ; 005f2f3d
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f2f3e
    MOV dword ptr [EDX*0x4 + 0x3f96bc4],EBX ; 005f2f42 | BOOL g_UseMultimediaTimer
    CMP EDX,0x14                        ; 005f2f49
    JL 0x005f2f50                       ; 005f2f4c | LAB_005f2f50
        ;   XREF to: 005f2f50 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 005f2f4e
    CMP EDX,ECX                         ; 005f2f50
        ;   Label: LAB_005f2f50
    JNZ 0x005f2f5c                      ; 005f2f52 | LAB_005f2f5c
        ;   XREF to: 005f2f5c (CONDITIONAL_JUMP)
    INC ECX                             ; 005f2f54
    CMP ECX,0x14                        ; 005f2f55
    JL 0x005f2f5c                       ; 005f2f58 | LAB_005f2f5c
        ;   XREF to: 005f2f5c (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005f2f5a
    MOV dword ptr [0x03f96c18],ECX      ; 005f2f5c | int g_InputReadIndex
        ;   Label: LAB_005f2f5c
    MOV dword ptr [0x03f96c1c],EDX      ; 005f2f62 | int g_InputWriteIndex
    POP EBX                             ; 005f2f68
    RET                                 ; 005f2f69

