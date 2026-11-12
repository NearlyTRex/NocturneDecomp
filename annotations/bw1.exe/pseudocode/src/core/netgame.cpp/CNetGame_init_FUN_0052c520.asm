; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_init_FUN_0052c520(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 00503986
;
; Referenced Globals:
;   TerminatedCString s_netlog_txt_005eb66f
;   TerminatedCString s_USERNAME_005eb67a
;   TerminatedCString s_COMPUTERNAME_005eb683
;   TerminatedCString s_MyComputer_005eb690
;   undefined4 s_yComputer_005eb690+1
;   undefined4 s_Computer_005eb690+2
;   undefined4 s_omputer_005eb690+3
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51db4
;   undefined4 DAT_01d6dfb8
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
;   crt_env.c_getenv_FUN_005c3050
;   crt_unknown.c_FUN_005c25c0
;   support_trisock.cpp_FUN_0059eeb0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052c520
        ;   Label: core_netgame.cpp_CNetGame_init_FUN_0052c520
    PUSH EDI                            ; 0052c521
    PUSH 0x5eb66f                       ; 0052c522 | = "netlog.txt"
    CALL crt_unknown.c_FUN_005c25c0     ; 0052c527
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c25c0(char * filename)
    MOV EDX,0x1                         ; 0052c52c
    ADD ESP,0x4                         ; 0052c531
    MOV dword ptr [0x01d51da0],EDX      ; 0052c534 | DAT_01d51da0
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052c53a
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,EAX                         ; 0052c53f
    MOV ESI,0x12                        ; 0052c541
    SAR EDX,0x1f                        ; 0052c546
    IDIV ESI                            ; 0052c549
    MOV [0x01d51d9c],EAX                ; 0052c54b | DAT_01d51d9c
    CALL support_trisock.cpp_FUN_0059eeb0 ; 0052c550
        ;   XREF to: 0059eeb0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059eeb0()
    PUSH 0x5eb67a                       ; 0052c555 | = "USERNAME"
    CALL crt_env.c_getenv_FUN_005c3050  ; 0052c55a
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 0052c55f
    MOV ESI,EAX                         ; 0052c562
    TEST EAX,EAX                        ; 0052c564
    JZ 0x0052c5b1                       ; 0052c566
        ;   XREF to: 0052c5b1 (CONDITIONAL_JUMP)  ; LAB_0052c5b1
    TEST ESI,ESI                        ; 0052c568
        ;   Label: LAB_0052c568
    JNZ 0x0052c571                      ; 0052c56a
        ;   XREF to: 0052c571 (CONDITIONAL_JUMP)  ; LAB_0052c571
    MOV ESI,0x5eb690                    ; 0052c56c | = "MyComputer"
    MOV EDI,dword ptr [ESP + 0xc]       ; 0052c571
        ;   Label: LAB_0052c571
    ADD EDI,0x8                         ; 0052c575
    XOR ECX,ECX                         ; 0052c578
    PUSH EDI                            ; 0052c57a
    MOV AL,byte ptr [ESI]               ; 0052c57b | = "MyComputer" | s_Computer_005eb690+2
        ;   Label: LAB_0052c57b
    MOV byte ptr [EDI],AL               ; 0052c57d
    CMP AL,0x0                          ; 0052c57f
    JZ 0x0052c593                       ; 0052c581
        ;   XREF to: 0052c593 (CONDITIONAL_JUMP)  ; LAB_0052c593
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c583 | s_yComputer_005eb690+1 | s_omputer_005eb690+3
    ADD ESI,0x2                         ; 0052c586
    MOV byte ptr [EDI + 0x1],AL         ; 0052c589
    ADD EDI,0x2                         ; 0052c58c
    CMP AL,0x0                          ; 0052c58f
    JNZ 0x0052c57b                      ; 0052c591
        ;   XREF to: 0052c57b (CONDITIONAL_JUMP)  ; LAB_0052c57b
    POP EDI                             ; 0052c593
        ;   Label: LAB_0052c593
    PUSH ECX                            ; 0052c594
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052c595
    PUSH ESI                            ; 0052c599
    MOV dword ptr [0x01d51db4],ECX      ; 0052c59a | DAT_01d51db4
    MOV dword ptr [0x01d6dfb8],ECX      ; 0052c5a0 | DAT_01d6dfb8
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 0052c5a6
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0052c5ab
    POP EDI                             ; 0052c5ae
    POP ESI                             ; 0052c5af
    RET                                 ; 0052c5b0
    PUSH 0x5eb683                       ; 0052c5b1 | = "COMPUTERNAME"
        ;   Label: LAB_0052c5b1
    CALL crt_env.c_getenv_FUN_005c3050  ; 0052c5b6
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 0052c5bb
    MOV ESI,EAX                         ; 0052c5be
    JMP 0x0052c568                      ; 0052c5c0
        ;   XREF to: 0052c568 (UNCONDITIONAL_JUMP)  ; LAB_0052c568

