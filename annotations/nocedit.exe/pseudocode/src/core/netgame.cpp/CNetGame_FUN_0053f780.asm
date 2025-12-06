; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_CNetGame_FUN_0053f780()
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005081cb
;
; Referenced Globals:
;   TerminatedCString s_netlog_txt_0063d2bc
;   TerminatedCString s_USERNAME_0063d2c7
;   TerminatedCString s_COMPUTERNAME_0063d2d0
;   TerminatedCString s_MyComputer_0063d2dd
;   undefined4 s_yComputer_0063d2de
;   undefined4 s_Computer_0063d2df
;   undefined4 s_omputer_0063d2e0
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   int g_ChatHistoryCount
;   undefined4 DAT_02f98ad0
;
; Called Functions:
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   crt_env.c_getenv_FUN_006013f0
;   crt_io.c_deleteFile_FUN_005ff9d0
;   support_trisock.cpp_startupWinsock_FUN_005e1ec0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053f780
        ;   Label: core_netgame.cpp_CNetGame_FUN_0053f780
    PUSH EDI                            ; 0053f781
    PUSH 0x63d2bc                       ; 0053f782 | = "netlog.txt" | s_netlog_txt_0063d2bc = netlog.txt
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0053f787 | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    MOV EDX,0x1                         ; 0053f78c
    ADD ESP,0x4                         ; 0053f791
    MOV dword ptr [0x02f7c8b8],EDX      ; 0053f794 | uint g_CurrentGameTime
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053f79a | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0053f79f
    MOV ESI,0x12                        ; 0053f7a1
    SAR EDX,0x1f                        ; 0053f7a6
    IDIV ESI                            ; 0053f7a9
    MOV [0x02f7c8b4],EAX                ; 0053f7ab | int g_LastPingTime
    CALL support_trisock.cpp_startupWinsock_FUN_005e1ec0 ; 0053f7b0 | int support_trisock.cpp_startupWinsock_FUN_005e1ec0()
        ;   XREF to: 005e1ec0 (UNCONDITIONAL_CALL)
    PUSH 0x63d2c7                       ; 0053f7b5 | = "USERNAME" | s_USERNAME_0063d2c7 = USERNAME
    CALL crt_env.c_getenv_FUN_006013f0  ; 0053f7ba | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053f7bf
    MOV ESI,EAX                         ; 0053f7c2
    TEST EAX,EAX                        ; 0053f7c4
    JZ 0x0053f811                       ; 0053f7c6 | LAB_0053f811
        ;   XREF to: 0053f811 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0053f7c8
        ;   Label: LAB_0053f7c8
    JNZ 0x0053f7d1                      ; 0053f7ca | LAB_0053f7d1
        ;   XREF to: 0053f7d1 (CONDITIONAL_JUMP)
    MOV ESI,0x63d2dd                    ; 0053f7cc | = "MyComputer" | s_MyComputer_0063d2dd = MyComputer
    MOV EDI,dword ptr [ESP + 0xc]       ; 0053f7d1
        ;   Label: LAB_0053f7d1
    ADD EDI,0x8                         ; 0053f7d5
    XOR ECX,ECX                         ; 0053f7d8
    PUSH EDI                            ; 0053f7da
    MOV AL,byte ptr [ESI]               ; 0053f7db | = "MyComputer" | s_MyComputer_0063d2dd = MyComputer
        ;   Label: LAB_0053f7db
    MOV byte ptr [EDI],AL               ; 0053f7dd
    CMP AL,0x0                          ; 0053f7df
    JZ 0x0053f7f3                       ; 0053f7e1 | LAB_0053f7f3
        ;   XREF to: 0053f7f3 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0053f7e3 | s_yComputer_0063d2de
    ADD ESI,0x2                         ; 0053f7e6
    MOV byte ptr [EDI + 0x1],AL         ; 0053f7e9
    ADD EDI,0x2                         ; 0053f7ec
    CMP AL,0x0                          ; 0053f7ef
    JNZ 0x0053f7db                      ; 0053f7f1 | LAB_0053f7db
        ;   XREF to: 0053f7db (CONDITIONAL_JUMP)
    POP EDI                             ; 0053f7f3
        ;   Label: LAB_0053f7f3
    PUSH ECX                            ; 0053f7f4
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053f7f5
    PUSH ESI                            ; 0053f7f9
    MOV dword ptr [0x02f7c8cc],ECX      ; 0053f7fa | int g_ChatHistoryCount
    MOV dword ptr [0x02f98ad0],ECX      ; 0053f800 | undefined4 DAT_02f98ad0
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053f806 | void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053f80b
    POP EDI                             ; 0053f80e
    POP ESI                             ; 0053f80f
    RET                                 ; 0053f810
    PUSH 0x63d2d0                       ; 0053f811 | = "COMPUTERNAME" | s_COMPUTERNAME_0063d2d0 = COMPUTERNAME
        ;   Label: LAB_0053f811
    CALL crt_env.c_getenv_FUN_006013f0  ; 0053f816 | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053f81b
    MOV ESI,EAX                         ; 0053f81e
    JMP 0x0053f7c8                      ; 0053f820 | LAB_0053f7c8
        ;   XREF to: 0053f7c8 (UNCONDITIONAL_JUMP)

