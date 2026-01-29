; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(void)
;
; Local Variables:
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xc3]:4  local_c3
; undefined4       Stack[-0xbf]:4  local_bf
; undefined        Stack[-0xbb]:1  local_bb
; undefined1       Stack[-0xba]:1  local_ba
; undefined4       Stack[-0x6b]:4  local_6b
; undefined        Stack[-0x67]:1  local_67
; undefined1       Stack[-0x66]:1  local_66
; undefined        Stack[-0x53]:1  local_53
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_netgame.cpp_FUN_00541390 at 00541916
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dcac
;   TerminatedCString s_CNetGame_sendGameSetting_0063dcc0
;   TerminatedCString s_core_netgame_cpp_0063dd0e
;   TerminatedCString s_CNetGame_send_invalid_pl_0063dd22
;   WatcomTypeInfo g_SPlayerTypeInfo
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   undefined4 DAT_02f7c8c4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   crt_memory.c___arrinit_FUN_005fe667
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542dd0
        ;   Label: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
    PUSH ESI                            ; 00542dd1
    PUSH EDI                            ; 00542dd2
    PUSH EBP                            ; 00542dd3
    SUB ESP,0xb8                        ; 00542dd4
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00542dda
    MOV EDX,dword ptr [EAX]             ; 00542de1
    CMP EDX,0x1                         ; 00542de3
    JNZ 0x00542ded                      ; 00542de6
        ;   XREF to: 00542ded (CONDITIONAL_JUMP)  ; LAB_00542ded
    CMP EDX,dword ptr [EAX + 0x4]       ; 00542de8
    JZ 0x00542e10                       ; 00542deb
        ;   XREF to: 00542e10 (CONDITIONAL_JUMP)  ; LAB_00542e10
    MOV EBX,0x63dcac                    ; 00542ded | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00542ded
    MOV ESI,0x8a8                       ; 00542df2
    PUSH 0x63dcc0                       ; 00542df7 | = "CNetGame::sendGameSettingsPacket - sh..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00542dfc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00542e02 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00542e08
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00542e0d
    MOV EDI,dword ptr [ESP + 0xd0]      ; 00542e10
        ;   Label: LAB_00542e10
    TEST EDI,EDI                        ; 00542e17
    JL 0x00542e27                       ; 00542e19
        ;   XREF to: 00542e27 (CONDITIONAL_JUMP)  ; LAB_00542e27
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00542e1b
    CMP EDI,dword ptr [EDX + 0x1c]      ; 00542e22
    JL 0x00542e49                       ; 00542e25
        ;   XREF to: 00542e49 (CONDITIONAL_JUMP)  ; LAB_00542e49
    MOV EAX,0x63dd0e                    ; 00542e27 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00542e27
    MOV EDX,0x8ae                       ; 00542e2c
    PUSH 0x63dd22                       ; 00542e31 | = "CNetGame::send - invalid player index"
    MOV [0x02f0ca48],EAX                ; 00542e36 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00542e3b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00542e41
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00542e46
    PUSH 0x661ce0                       ; 00542e49 | g_SPlayerTypeInfo
        ;   Label: LAB_00542e49
    MOV AH,0xb                          ; 00542e4e
    PUSH 0x2                            ; 00542e50
    MOV byte ptr [ESP + 0xc],AH         ; 00542e52
    LEA EAX,[ESP + 0x69]                ; 00542e56
    MOV ECX,0xb1                        ; 00542e5a
    PUSH EAX                            ; 00542e5f
    MOV dword ptr [ESP + 0xc],ECX       ; 00542e60
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00542e64
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00542e69
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00542e6c
    MOV EAX,dword ptr [EAX + 0x16c]     ; 00542e73
    MOV dword ptr [ESP + 0x9],EAX       ; 00542e79
    MOV EAX,[0x02f7c8c4]                ; 00542e7d | DAT_02f7c8c4
    MOV dword ptr [ESP + 0x5],EAX       ; 00542e82
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00542e86
    LEA EDI,[ESP + 0xd]                 ; 00542e8d
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00542e91
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00542e98
    ADD ESI,0x118                       ; 00542e9b
    MOV dword ptr [ESP + 0x5d],EAX      ; 00542ea1
    PUSH EDI                            ; 00542ea5
    MOV AL,byte ptr [ESI]               ; 00542ea6
        ;   Label: LAB_00542ea6
    MOV byte ptr [EDI],AL               ; 00542ea8
    CMP AL,0x0                          ; 00542eaa
    JZ 0x00542ebe                       ; 00542eac
        ;   XREF to: 00542ebe (CONDITIONAL_JUMP)  ; LAB_00542ebe
    MOV AL,byte ptr [ESI + 0x1]         ; 00542eae
    ADD ESI,0x2                         ; 00542eb1
    MOV byte ptr [EDI + 0x1],AL         ; 00542eb4
    ADD EDI,0x2                         ; 00542eb7
    CMP AL,0x0                          ; 00542eba
    JNZ 0x00542ea6                      ; 00542ebc
        ;   XREF to: 00542ea6 (CONDITIONAL_JUMP)  ; LAB_00542ea6
    POP EDI                             ; 00542ebe
        ;   Label: LAB_00542ebe
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00542ebf
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00542ec6
    XOR EBX,EBX                         ; 00542ec9
    TEST ESI,ESI                        ; 00542ecb
    JLE 0x00542f60                      ; 00542ecd
        ;   XREF to: 00542f60 (CONDITIONAL_JUMP)  ; LAB_00542f60
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00542ed3
    ADD EAX,0x20                        ; 00542eda
    LEA EBP,[ESP + 0x61]                ; 00542edd
    MOV dword ptr [ESP + 0xb4],EAX      ; 00542ee1
    IMUL ECX,EBX,0x28                   ; 00542ee8
        ;   Label: LAB_00542ee8
    MOV ESI,dword ptr [ESP + 0xb4]      ; 00542eeb
    MOV EDI,EBP                         ; 00542ef2
    PUSH EDI                            ; 00542ef4
    MOV AL,byte ptr [ESI]               ; 00542ef5
        ;   Label: LAB_00542ef5
    MOV byte ptr [EDI],AL               ; 00542ef7
    CMP AL,0x0                          ; 00542ef9
    JZ 0x00542f0d                       ; 00542efb
        ;   XREF to: 00542f0d (CONDITIONAL_JUMP)  ; LAB_00542f0d
    MOV AL,byte ptr [ESI + 0x1]         ; 00542efd
    ADD ESI,0x2                         ; 00542f00
    MOV byte ptr [EDI + 0x1],AL         ; 00542f03
    ADD EDI,0x2                         ; 00542f06
    CMP AL,0x0                          ; 00542f09
    JNZ 0x00542ef5                      ; 00542f0b
        ;   XREF to: 00542ef5 (CONDITIONAL_JUMP)  ; LAB_00542ef5
    POP EDI                             ; 00542f0d
        ;   Label: LAB_00542f0d
    LEA ESI,[EDX + 0x3c]                ; 00542f0e
    LEA EDI,[ESP + ECX*0x1 + 0x75]      ; 00542f11
    MOVSD ES:EDI,ESI                    ; 00542f15
    MOVSD ES:EDI,ESI                    ; 00542f16
    MOV EAX,dword ptr [EDX + 0x64]      ; 00542f17
    MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX ; 00542f1a
    MOV EAX,dword ptr [EDX + 0x34]      ; 00542f21
    ADD EDX,0x78                        ; 00542f24
    MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX ; 00542f27
    ADD EBP,0x28                        ; 00542f2b
    MOV EAX,dword ptr [EDX + -0x40]     ; 00542f2e
    MOV EDI,dword ptr [ESP + 0xb4]      ; 00542f31
    MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX ; 00542f38
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00542f3f
    INC EBX                             ; 00542f46
    ADD EDI,0x78                        ; 00542f47
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00542f4a
    MOV dword ptr [ESP + 0xb4],EDI      ; 00542f4d
    CMP EBX,ECX                         ; 00542f54
    JL 0x00542ee8                       ; 00542f56
        ;   XREF to: 00542ee8 (CONDITIONAL_JUMP)  ; LAB_00542ee8
    LEA EAX,[EAX]                       ; 00542f58
    MOV EDX,EDX                         ; 00542f5e
    MOV EAX,ESP                         ; 00542f60
        ;   Label: LAB_00542f60
    PUSH EAX                            ; 00542f62
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00542f63
    PUSH EBX                            ; 00542f6a
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00542f6b
    PUSH ESI                            ; 00542f72
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00542f73
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_send_FUN_005411c0()
    ADD ESP,0xc                         ; 00542f78
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00542f7b
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00542f80
    MOV ECX,0x12                        ; 00542f82
    SAR EDX,0x1f                        ; 00542f87
    IDIV ECX                            ; 00542f8a
    MOV EDI,dword ptr [0x02f7c8b4]      ; 00542f8c | g_LastPingTime
    MOV EDX,EAX                         ; 00542f92
    SUB EDX,EDI                         ; 00542f94
    MOV [0x02f7c8b4],EAX                ; 00542f96 | g_LastPingTime
    TEST EDX,EDX                        ; 00542f9b
    JL 0x00542fe0                       ; 00542f9d
        ;   XREF to: 00542fe0 (CONDITIONAL_JUMP)  ; LAB_00542fe0
    CMP EDX,0x20000                     ; 00542f9f
    JLE 0x00542fac                      ; 00542fa5
        ;   XREF to: 00542fac (CONDITIONAL_JUMP)  ; LAB_00542fac
    MOV EDX,0x20000                     ; 00542fa7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00542fac
        ;   Label: LAB_00542fac
    MOV EBP,dword ptr [0x02f7c8b8]      ; 00542fb3 | g_CurrentGameTime
    SHL EAX,0x3                         ; 00542fb9
    ADD EBP,EDX                         ; 00542fbc
    MOV EDX,EAX                         ; 00542fbe
    SHL EAX,0x4                         ; 00542fc0
    SUB EAX,EDX                         ; 00542fc3
    ADD EAX,dword ptr [ESP + 0xcc]      ; 00542fc5
    MOV dword ptr [0x02f7c8b8],EBP      ; 00542fcc | g_CurrentGameTime
    MOV dword ptr [EAX + 0x58],EBP      ; 00542fd2
    ADD ESP,0xb8                        ; 00542fd5
    POP EBP                             ; 00542fdb
    POP EDI                             ; 00542fdc
    POP ESI                             ; 00542fdd
    POP EBX                             ; 00542fde
    RET                                 ; 00542fdf
    XOR EDX,EDX                         ; 00542fe0
        ;   Label: LAB_00542fe0
    JMP 0x00542fac                      ; 00542fe2
        ;   XREF to: 00542fac (UNCONDITIONAL_JUMP)  ; LAB_00542fac

