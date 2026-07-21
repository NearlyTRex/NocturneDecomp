; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_init_FUN_004e9910(int param_1)
;
;
; XREF[1]:
;   FUN_004c85f0 at 004c8d4a
;
; Referenced Globals:
;   string s_netlog.txt_0058ba99
;   string s_USERNAME_0058baa4
;   string s_COMPUTERNAME_0058baad
;   string s_MyComputer_0058baba
;   undefined4 s_yComputer_0058baba+1
;   undefined4 s_Computer_0058baba+2
;   undefined4 s_omputer_0058baba+3
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea40c
;   undefined4 DAT_01d06610
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   crt_env.c_getenv_FUN_00566e10
;   crt_stdio.c_remove_FUN_005657c0
;   support_trisock.cpp_startupWinsock_FUN_00549280
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e9910
        ;   Label: core_netgame.cpp_CNetGame_init_FUN_004e9910
    PUSH EDI                            ; 004e9911
    PUSH 0x58ba99                       ; 004e9912 | = "netlog.txt"
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004e9917
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_remove_FUN_005657c0()
    MOV EDX,0x1                         ; 004e991c
    ADD ESP,0x4                         ; 004e9921
    MOV dword ptr [0x01cea3f8],EDX      ; 004e9924 | DAT_01cea3f8
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004e992a
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004e992f
    MOV ESI,0x12                        ; 004e9931
    SAR EDX,0x1f                        ; 004e9936
    IDIV ESI                            ; 004e9939
    MOV [0x01cea3f4],EAX                ; 004e993b | DAT_01cea3f4
    CALL support_trisock.cpp_startupWinsock_FUN_00549280 ; 004e9940
        ;   XREF to: 00549280 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_startupWinsock_FUN_00549280()
    PUSH 0x58baa4                       ; 004e9945 | = "USERNAME"
    CALL crt_env.c_getenv_FUN_00566e10  ; 004e994a
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; undefined crt_env.c_getenv_FUN_00566e10()
    ADD ESP,0x4                         ; 004e994f
    MOV ESI,EAX                         ; 004e9952
    TEST EAX,EAX                        ; 004e9954
    JZ 0x004e99a1                       ; 004e9956
        ;   XREF to: 004e99a1 (CONDITIONAL_JUMP)  ; LAB_004e99a1
    TEST ESI,ESI                        ; 004e9958
        ;   Label: LAB_004e9958
    JNZ 0x004e9961                      ; 004e995a
        ;   XREF to: 004e9961 (CONDITIONAL_JUMP)  ; LAB_004e9961
    MOV ESI,0x58baba                    ; 004e995c | = "MyComputer"
    MOV EDI,dword ptr [ESP + 0xc]       ; 004e9961
        ;   Label: LAB_004e9961
    ADD EDI,0x8                         ; 004e9965
    XOR ECX,ECX                         ; 004e9968
    PUSH EDI                            ; 004e996a
    MOV AL,byte ptr [ESI]               ; 004e996b | = "MyComputer" | s_Computer_0058baba+2
        ;   Label: LAB_004e996b
    MOV byte ptr [EDI],AL               ; 004e996d
    CMP AL,0x0                          ; 004e996f
    JZ 0x004e9983                       ; 004e9971
        ;   XREF to: 004e9983 (CONDITIONAL_JUMP)  ; LAB_004e9983
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9973 | s_yComputer_0058baba+1 | s_omputer_0058baba+3
    ADD ESI,0x2                         ; 004e9976
    MOV byte ptr [EDI + 0x1],AL         ; 004e9979
    ADD EDI,0x2                         ; 004e997c
    CMP AL,0x0                          ; 004e997f
    JNZ 0x004e996b                      ; 004e9981
        ;   XREF to: 004e996b (CONDITIONAL_JUMP)  ; LAB_004e996b
    POP EDI                             ; 004e9983
        ;   Label: LAB_004e9983
    PUSH ECX                            ; 004e9984
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e9985
    PUSH ESI                            ; 004e9989
    MOV dword ptr [0x01cea40c],ECX      ; 004e998a | DAT_01cea40c
    MOV dword ptr [0x01d06610],ECX      ; 004e9990 | DAT_01d06610
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9996
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90()
    ADD ESP,0x8                         ; 004e999b
    POP EDI                             ; 004e999e
    POP ESI                             ; 004e999f
    RET                                 ; 004e99a0
    PUSH 0x58baad                       ; 004e99a1 | = "COMPUTERNAME"
        ;   Label: LAB_004e99a1
    CALL crt_env.c_getenv_FUN_00566e10  ; 004e99a6
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; undefined crt_env.c_getenv_FUN_00566e10()
    ADD ESP,0x4                         ; 004e99ab
    MOV ESI,EAX                         ; 004e99ae
    JMP 0x004e9958                      ; 004e99b0
        ;   XREF to: 004e9958 (UNCONDITIONAL_JUMP)  ; LAB_004e9958

