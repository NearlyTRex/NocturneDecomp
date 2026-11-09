; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059c270_cpp_FUN_0059c2c0(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b624a
;
; Referenced Globals:
;   TerminatedCString s_anon_005ef5d1
;   TerminatedCString s_anon_005ef5fa
;   TerminatedCString s_Blair_Witch_Volume_2_Cof_005ef622
;   TerminatedCString s_anon_005ef64a
;   TerminatedCString s_Copyright_2000_Humanhead_005ef672
;   TerminatedCString s_anon_005ef69a
;   TerminatedCString s_anon_005ef6c2
;   undefined4 DAT_005ef6ea
;   TerminatedCString s_GameHook_enabled_005ef6ec
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c2c0
        ;   Label: unkaddr_0059c270.cpp_FUN_0059c2c0
    PUSH ESI                            ; 0059c2c1
    PUSH EDI                            ; 0059c2c2
    PUSH EBP                            ; 0059c2c3
    PUSH 0x5ef5d1                       ; 0059c2c4 | = "\n***********************************..."
    MOV EDX,dword ptr [0x00609ed0]      ; 0059c2c9 | g_CConsolePtr
    PUSH EDX                            ; 0059c2cf | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c2d0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c2d5
    PUSH 0x5ef5fa                       ; 0059c2d8 | = "*                                    *\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0059c2dd | g_CConsolePtr
    PUSH ECX                            ; 0059c2e3 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c2e4
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c2e9
    PUSH 0x5ef622                       ; 0059c2ec | = "* Blair Witch Volume 2 : Coffin Rock *\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 0059c2f1 | g_CConsolePtr
    PUSH EBX                            ; 0059c2f7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c2f8
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c2fd
    PUSH 0x5ef64a                       ; 0059c300 | = "*                                    *\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 0059c305 | g_CConsolePtr
    PUSH ESI                            ; 0059c30b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c30c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c311
    PUSH 0x5ef672                       ; 0059c314 | = "*  Copyright 2000 Humanhead Studios  *\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0059c319 | g_CConsolePtr
    PUSH EDI                            ; 0059c31f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c320
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c325
    PUSH 0x5ef69a                       ; 0059c328 | = "*                                    *\n"
    MOV EBP,dword ptr [0x00609ed0]      ; 0059c32d | g_CConsolePtr
    PUSH EBP                            ; 0059c333 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c334
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c339
    PUSH 0x5ef6c2                       ; 0059c33c | = "**************************************\n"
    MOV EAX,[0x00609ed0]                ; 0059c341 | g_CConsolePtr
    PUSH EAX                            ; 0059c346 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c347
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c34c
    PUSH 0x5ef6ea                       ; 0059c34f | DAT_005ef6ea
    MOV EDX,dword ptr [0x00609ed0]      ; 0059c354 | g_CConsolePtr
    PUSH EDX                            ; 0059c35a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c35b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c360
    PUSH 0x5ef6ec                       ; 0059c363 | = "GameHook enabled.\n\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0059c368 | g_CConsolePtr
    PUSH ECX                            ; 0059c36e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059c36f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0059c374
    POP EBP                             ; 0059c377
    POP EDI                             ; 0059c378
    POP ESI                             ; 0059c379
    POP EBX                             ; 0059c37a
    RET                                 ; 0059c37b

