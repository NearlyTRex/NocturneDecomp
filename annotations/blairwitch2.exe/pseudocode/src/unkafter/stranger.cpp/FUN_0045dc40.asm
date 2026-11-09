; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_stranger_cpp_FUN_0045dc40(int param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 s_CDoc_startGettingGrabbed_005d0826+1
;   TerminatedCString s_current_motion_is_s_005d0851
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_hero.cpp_FUN_004cea50
;   core_motion.cpp_FUN_005035c0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dc40
        ;   Label: unkafter_stranger.cpp_FUN_0045dc40
    PUSH ESI                            ; 0045dc41
    PUSH EDI                            ; 0045dc42
    PUSH EBP                            ; 0045dc43
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045dc44
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045dc48
    TEST ESI,ESI                        ; 0045dc4c
    JNZ 0x0045dc57                      ; 0045dc4e
        ;   XREF to: 0045dc57 (CONDITIONAL_JUMP)  ; LAB_0045dc57
    XOR EAX,EAX                         ; 0045dc50
        ;   Label: LAB_0045dc50
    POP EBP                             ; 0045dc52
        ;   Label: LAB_0045dc52
    POP EDI                             ; 0045dc53
    POP ESI                             ; 0045dc54
    POP EBX                             ; 0045dc55
    RET                                 ; 0045dc56
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045dc57
        ;   Label: LAB_0045dc57
    PUSH EDX                            ; 0045dc5b
    PUSH ESI                            ; 0045dc5c
    PUSH 0x5d0827                       ; 0045dc5d | s_CDoc_startGettingGrabbed_005d0826+1
    MOV ECX,dword ptr [0x00609ed0]      ; 0045dc62 | g_CConsolePtr
    PUSH ECX                            ; 0045dc68 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045dc69
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0045dc6e
    LEA EAX,[EBX + 0x2b4]               ; 0045dc71
    PUSH EAX                            ; 0045dc77
    CALL core_motion.cpp_FUN_005035c0   ; 0045dc78
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0045dc7d
    PUSH EAX                            ; 0045dc80
    PUSH 0x5d0851                       ; 0045dc81 | = "  current motion is %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0045dc86 | g_CConsolePtr
    PUSH EDI                            ; 0045dc8c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0045dc8d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EBP,dword ptr [EBX + 0x25608]   ; 0045dc92
    ADD ESP,0xc                         ; 0045dc98
    TEST EBP,EBP                        ; 0045dc9b
    JNZ 0x0045dc50                      ; 0045dc9d
        ;   XREF to: 0045dc50 (CONDITIONAL_JUMP)  ; LAB_0045dc50
    MOV EAX,dword ptr [EBX + 0x25604]   ; 0045dc9f
    TEST EAX,EAX                        ; 0045dca5
    JNZ 0x0045dc50                      ; 0045dca7
        ;   XREF to: 0045dc50 (CONDITIONAL_JUMP)  ; LAB_0045dc50
    CMP dword ptr [EBX + 0x25610],0x0   ; 0045dca9
    JNZ 0x0045dc52                      ; 0045dcb0
        ;   XREF to: 0045dc52 (CONDITIONAL_JUMP)  ; LAB_0045dc52
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 0045dcb2
    TEST ECX,ECX                        ; 0045dcb8
    JZ 0x0045dcc1                       ; 0045dcba
        ;   XREF to: 0045dcc1 (CONDITIONAL_JUMP)  ; LAB_0045dcc1
    CMP ECX,0x3                         ; 0045dcbc
    JNZ 0x0045dc52                      ; 0045dcbf
        ;   XREF to: 0045dc52 (CONDITIONAL_JUMP)  ; LAB_0045dc52
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045dcc1
        ;   Label: LAB_0045dcc1
    PUSH EBP                            ; 0045dcc5
    PUSH ESI                            ; 0045dcc6
    PUSH EBX                            ; 0045dcc7
    CALL core_hero.cpp_FUN_004cea50     ; 0045dcc8
        ;   XREF to: 004cea50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cea50()
    ADD ESP,0xc                         ; 0045dccd
    MOV ESI,EAX                         ; 0045dcd0
    TEST EAX,EAX                        ; 0045dcd2
    JZ 0x0045dd24                       ; 0045dcd4
        ;   XREF to: 0045dd24 (CONDITIONAL_JUMP)  ; LAB_0045dd24
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0045dcd6
    CMP EDX,dword ptr [EBX + 0x2620]    ; 0045dcdc
    JZ 0x0045dcf8                       ; 0045dce2
        ;   XREF to: 0045dcf8 (CONDITIONAL_JUMP)  ; LAB_0045dcf8
    PUSH 0x0                            ; 0045dce4
    PUSH 0x0                            ; 0045dce6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045dce8
    PUSH EBX                            ; 0045dcee
    CALL dword ptr [EAX + 0x130]        ; 0045dcef
    ADD ESP,0xc                         ; 0045dcf5
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0045dcf8
        ;   Label: LAB_0045dcf8
    CMP ECX,dword ptr [EBX + 0x2698]    ; 0045dcfe
    JZ 0x0045dd1a                       ; 0045dd04
        ;   XREF to: 0045dd1a (CONDITIONAL_JUMP)  ; LAB_0045dd1a
    PUSH 0x0                            ; 0045dd06
    PUSH 0x1                            ; 0045dd08
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045dd0a
    PUSH EBX                            ; 0045dd10
    CALL dword ptr [EAX + 0x130]        ; 0045dd11
    ADD ESP,0xc                         ; 0045dd17
    MOV dword ptr [EBX + 0x2573c],0x0   ; 0045dd1a
        ;   Label: LAB_0045dd1a
    MOV EAX,ESI                         ; 0045dd24
        ;   Label: LAB_0045dd24
    POP EBP                             ; 0045dd26
    POP EDI                             ; 0045dd27
    POP ESI                             ; 0045dd28
    POP EBX                             ; 0045dd29
    RET                                 ; 0045dd2a

