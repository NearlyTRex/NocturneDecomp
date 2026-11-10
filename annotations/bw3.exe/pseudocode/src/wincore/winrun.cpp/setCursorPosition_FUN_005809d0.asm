; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005809d0(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[4]:
;   core_game.cpp_CGame_processMouseControls_FUN_004ba2e0 at 004ba34b
;   core_game.cpp_FUN_004ba490 at 004ba528
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e817a
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00 at 00485ba7
;
; Referenced Globals:
;   void* PTR_SetCursorPos_005b34f4 = 001b3bc8
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005809d0
        ;   Label: wincore_winrun.cpp_setCursorPosition_FUN_005809d0
    PUSH EDX                            ; 005809d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005809d5
    PUSH ECX                            ; 005809d9
    CALL dword ptr CS:[0x5b34f4]        ; 005809da | PTR_SetCursorPos_005b34f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 005809e1
    MOV [0x01c5fadc],EAX                ; 005809e5 | DAT_01c5fadc
    MOV EAX,dword ptr [ESP + 0x8]       ; 005809ea
    MOV [0x01c5fae0],EAX                ; 005809ee | DAT_01c5fae0
    RET                                 ; 005809f3

