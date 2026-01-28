; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_setedit_cpp_ResolveMasterLights_FUN_0057c550(void)
;
;
; XREF[1]:
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cc12
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00647b0d
;   TerminatedCString s_Can_t_resolve_master_lig_00647b21
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonLight*[96] g_MasterLightList
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057c550
        ;   Label: core_setedit.cpp_ResolveMasterLights_FUN_0057c550
    PUSH ESI                            ; 0057c551
    PUSH EDI                            ; 0057c552
    PUSH EBP                            ; 0057c553
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057c554
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 0057c558
    XOR EBX,EBX                         ; 0057c55e
    TEST EDX,EDX                        ; 0057c560
    JLE 0x0057c599                      ; 0057c562
        ;   XREF to: 0057c599 (CONDITIONAL_JUMP)  ; LAB_0057c599
    MOV EBP,dword ptr [ESP + 0x18]      ; 0057c564
    LEA ESI,[EDI + 0x19a34]             ; 0057c568
    SHL EBP,0x2                         ; 0057c56e
    MOV EAX,dword ptr [EBP + 0x3276db0] ; 0057c571 | g_MasterLightList
        ;   Label: LAB_0057c571
    PUSH ESI                            ; 0057c577
    ADD EAX,0x40                        ; 0057c578
    PUSH EAX                            ; 0057c57b
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0057c57c
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057c581
    TEST EAX,EAX                        ; 0057c584
    JZ 0x0057c5c6                       ; 0057c586
        ;   XREF to: 0057c5c6 (CONDITIONAL_JUMP)  ; LAB_0057c5c6
    INC EBX                             ; 0057c588
    MOV ECX,dword ptr [EDI + 0x19a2c]   ; 0057c589
    ADD ESI,0x1898                      ; 0057c58f
    CMP EBX,ECX                         ; 0057c595
    JL 0x0057c571                       ; 0057c597
        ;   XREF to: 0057c571 (CONDITIONAL_JUMP)  ; LAB_0057c571
    MOV EBX,0x647b0d                    ; 0057c599 | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057c599
    MOV ESI,0xaa8                       ; 0057c59e
    PUSH 0x647b21                       ; 0057c5a3 | = "Can't resolve master light number"
    MOV dword ptr [0x02f0ca48],EBX      ; 0057c5a8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0057c5ae | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057c5b4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0xffffffff                  ; 0057c5b9
    ADD ESP,0x4                         ; 0057c5be
    POP EBP                             ; 0057c5c1
    POP EDI                             ; 0057c5c2
    POP ESI                             ; 0057c5c3
    POP EBX                             ; 0057c5c4
    RET                                 ; 0057c5c5
    MOV EAX,EBX                         ; 0057c5c6
        ;   Label: LAB_0057c5c6
    POP EBP                             ; 0057c5c8
    POP EDI                             ; 0057c5c9
    POP ESI                             ; 0057c5ca
    POP EBX                             ; 0057c5cb
    RET                                 ; 0057c5cc

