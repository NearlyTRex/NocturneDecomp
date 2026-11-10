; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * core_inv_cpp_FUN_004db8e0(void *param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   core_inv.cpp_CInventory_clear_FUN_004da860 at 004da883
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40 at 004def7c
;   core_inv.cpp_FUN_004dc8c0 at 004dca6a
;   core_script.cpp_FUN_00522350 at 00526a40
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056dd3d
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_00583160 at 00583346
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045c85d
;
; Referenced Globals:
;   TerminatedCString s_Deleting_s_005db732
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408730
;   crt_string.c_memmove_FUN_005ba1f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db8e0
        ;   Label: core_inv.cpp_FUN_004db8e0
    PUSH ESI                            ; 004db8e1
    PUSH EDI                            ; 004db8e2
    PUSH EBP                            ; 004db8e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004db8e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004db8e8
    PUSH EBP                            ; 004db8ec
    PUSH 0x5db732                       ; 004db8ed | = "Deleting: %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 004db8f2 | g_CConsolePtr
    PUSH EDX                            ; 004db8f8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004db8f9
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,dword ptr [ESI + 0x468]     ; 004db8fe
    SHL EAX,0x2                         ; 004db904
    ADD EAX,ESI                         ; 004db907
    MOV ECX,dword ptr [EAX + 0x610]     ; 004db909
    ADD ESP,0xc                         ; 004db90f
    CMP EBP,ECX                         ; 004db912
    JZ 0x004db95c                       ; 004db914
        ;   XREF to: 004db95c (CONDITIONAL_JUMP)  ; LAB_004db95c
    MOV EAX,dword ptr [ESI + 0x468]     ; 004db916
        ;   Label: LAB_004db916
    SHL EAX,0x2                         ; 004db91c
    ADD EAX,ESI                         ; 004db91f
    CMP EBP,dword ptr [EAX + 0x5fc]     ; 004db921
    JNZ 0x004db933                      ; 004db927
        ;   XREF to: 004db933 (CONDITIONAL_JUMP)  ; LAB_004db933
    MOV dword ptr [EAX + 0x5fc],0x0     ; 004db929
    MOV EDI,dword ptr [ESI + 0x10]      ; 004db933
        ;   Label: LAB_004db933
    XOR EBX,EBX                         ; 004db936
    TEST EDI,EDI                        ; 004db938
    JLE 0x004db957                      ; 004db93a
        ;   XREF to: 004db957 (CONDITIONAL_JUMP)  ; LAB_004db957
    MOV EAX,ESI                         ; 004db93c
    MOV ECX,dword ptr [EAX + 0x14]      ; 004db93e
        ;   Label: LAB_004db93e
    LEA EDI,[EBX*0x4 + 0x0]             ; 004db941
    CMP EBP,ECX                         ; 004db948
    JZ 0x004db968                       ; 004db94a
        ;   XREF to: 004db968 (CONDITIONAL_JUMP)  ; LAB_004db968
    INC EBX                             ; 004db94c
    MOV EDX,dword ptr [ESI + 0x10]      ; 004db94d
    ADD EAX,0x4                         ; 004db950
    CMP EBX,EDX                         ; 004db953
    JL 0x004db93e                       ; 004db955
        ;   XREF to: 004db93e (CONDITIONAL_JUMP)  ; LAB_004db93e
    POP EBP                             ; 004db957
        ;   Label: LAB_004db957
    POP EDI                             ; 004db958
    POP ESI                             ; 004db959
    POP EBX                             ; 004db95a
    RET                                 ; 004db95b
    MOV dword ptr [EAX + 0x610],0x0     ; 004db95c
        ;   Label: LAB_004db95c
    JMP 0x004db916                      ; 004db966
        ;   XREF to: 004db916 (UNCONDITIONAL_JUMP)  ; LAB_004db916
    MOV EAX,dword ptr [ESI + 0x10]      ; 004db968
        ;   Label: LAB_004db968
    DEC EAX                             ; 004db96b
    MOV dword ptr [ESI + 0x10],EAX      ; 004db96c
    SUB EAX,EBX                         ; 004db96f
    SHL EAX,0x2                         ; 004db971
    LEA EDX,[EDI + 0x4]                 ; 004db974
    PUSH EAX                            ; 004db977
    LEA EAX,[ESI + 0x14]                ; 004db978
    ADD EDX,EAX                         ; 004db97b
    PUSH EDX                            ; 004db97d
    ADD EAX,EDI                         ; 004db97e
    PUSH EAX                            ; 004db980
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004db981
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004db986
    MOV ECX,dword ptr [ESI + 0x10]      ; 004db989
    MOV EDX,EBX                         ; 004db98c
    CMP EBX,ECX                         ; 004db98e
    JGE 0x004db9b0                      ; 004db990
        ;   XREF to: 004db9b0 (CONDITIONAL_JUMP)  ; LAB_004db9b0
    LEA EAX,[EDI + ESI*0x1]             ; 004db992
    MOV EBX,dword ptr [EAX + 0x470]     ; 004db995
        ;   Label: LAB_004db995
    MOV dword ptr [EAX + 0x46c],EBX     ; 004db99b
    INC EDX                             ; 004db9a1
    MOV EBX,dword ptr [ESI + 0x10]      ; 004db9a2
    ADD EAX,0x4                         ; 004db9a5
    CMP EDX,EBX                         ; 004db9a8
    JL 0x004db995                       ; 004db9aa
        ;   XREF to: 004db995 (CONDITIONAL_JUMP)  ; LAB_004db995
    LEA EAX,[EAX]                       ; 004db9ac
    CMP dword ptr [ESP + 0x1c],0x0      ; 004db9b0
        ;   Label: LAB_004db9b0
    JZ 0x004db957                       ; 004db9b5
        ;   XREF to: 004db957 (CONDITIONAL_JUMP)  ; LAB_004db957
    PUSH EBP                            ; 004db9b7
    CALL core_actor.cpp_FUN_00408730    ; 004db9b8
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408730()
    ADD ESP,0x4                         ; 004db9bd
    POP EBP                             ; 004db9c0
    POP EDI                             ; 004db9c1
    POP ESI                             ; 004db9c2
    POP EBX                             ; 004db9c3
    RET                                 ; 004db9c4

