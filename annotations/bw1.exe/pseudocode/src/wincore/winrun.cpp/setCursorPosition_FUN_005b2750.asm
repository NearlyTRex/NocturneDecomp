; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005b2750(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[4]:
;   core_game.cpp_CGame_processMouseControls_FUN_004d1820 at 004d188b
;   core_game.cpp_FUN_004d19d0 at 004d1a68
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a66a
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60 at 0049d007
;
; Referenced Globals:
;   void* PTR_SetCursorPos_005d04f8 = 001d0bda
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b2750
        ;   Label: wincore_winrun.cpp_setCursorPosition_FUN_005b2750
    PUSH EDX                            ; 005b2754
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b2755
    PUSH ECX                            ; 005b2759
    CALL dword ptr CS:[0x5d04f8]        ; 005b275a | PTR_SetCursorPos_005d04f8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b2761
    MOV [0x01c4353c],EAX                ; 005b2765 | DAT_01c4353c
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b276a
    MOV [0x01c43540],EAX                ; 005b276e | DAT_01c43540
    RET                                 ; 005b2773

