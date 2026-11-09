; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_netgame_cpp_FUN_0050ce70(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020 at 0050e67d
;   core_netgame.cpp_FUN_0050b420 at 0050b482
;   core_netgame.cpp_FUN_0050b4d0 at 0050b523
;   core_netgame.cpp_FUN_0050c280 at 0050c45a
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0a9f
;   TerminatedCString s_CNetGame_addPlayer_too_m_005e0ab3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e44
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ce70
        ;   Label: core_netgame.cpp_FUN_0050ce70
    PUSH ESI                            ; 0050ce71
    PUSH EDI                            ; 0050ce72
    PUSH EBP                            ; 0050ce73
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050ce74
    CMP dword ptr [EBX + 0x1c],0x2      ; 0050ce78
    JGE 0x0050cf20                      ; 0050ce7c
        ;   XREF to: 0050cf20 (CONDITIONAL_JUMP)  ; LAB_0050cf20
    PUSH 0x80                           ; 0050ce82
        ;   Label: LAB_0050ce82
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0050ce87
    ADD EBX,0x20                        ; 0050ce8a
    PUSH 0x0                            ; 0050ce8d
    MOV EAX,EBP                         ; 0050ce8f
    LEA EDX,[EBP + 0x1]                 ; 0050ce91
    SHL EAX,0x7                         ; 0050ce94
    MOV dword ptr [EBX + -0x4],EDX      ; 0050ce97
    ADD EBX,EAX                         ; 0050ce9a
    PUSH EBX                            ; 0050ce9c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050ce9d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050cea2
    MOV EDI,EBX                         ; 0050cea5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050cea7
    PUSH EDI                            ; 0050ceab
    MOV AL,byte ptr [ESI]               ; 0050ceac
        ;   Label: LAB_0050ceac
    MOV byte ptr [EDI],AL               ; 0050ceae
    CMP AL,0x0                          ; 0050ceb0
    JZ 0x0050cec4                       ; 0050ceb2
        ;   XREF to: 0050cec4 (CONDITIONAL_JUMP)  ; LAB_0050cec4
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ceb4
    ADD ESI,0x2                         ; 0050ceb7
    MOV byte ptr [EDI + 0x1],AL         ; 0050ceba
    ADD EDI,0x2                         ; 0050cebd
    CMP AL,0x0                          ; 0050cec0
    JNZ 0x0050ceac                      ; 0050cec2
        ;   XREF to: 0050ceac (CONDITIONAL_JUMP)  ; LAB_0050ceac
    POP EDI                             ; 0050cec4
        ;   Label: LAB_0050cec4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050cec5
    LEA EDI,[EBX + 0x1c]                ; 0050cec9
    MOVSD ES:EDI,ESI                    ; 0050cecc
    MOVSD ES:EDI,ESI                    ; 0050cecd
    MOV dword ptr [EBX + 0x28],0xbf800000 ; 0050cece
    MOV dword ptr [EBX + 0x44],0x0      ; 0050ced5
    MOV dword ptr [EBX + 0x40],0x0      ; 0050cedc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050cee3
    MOV dword ptr [EBX + 0x3c],0x0      ; 0050cee7
    MOV dword ptr [EBX + 0x14],EAX      ; 0050ceee
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050cef1
    MOV dword ptr [EBX + 0x18],EAX      ; 0050cef5
    MOV EAX,[0x01d34e38]                ; 0050cef8 | DAT_01d34e38
    MOV dword ptr [EBX + 0x24],EAX      ; 0050cefd
    SUB EAX,0x1e0000                    ; 0050cf00
    MOV dword ptr [EBX + 0x2c],EAX      ; 0050cf05
    MOV EDX,EAX                         ; 0050cf08
    MOV dword ptr [EBX + 0x30],EAX      ; 0050cf0a
    MOV EAX,[0x01d34e44]                ; 0050cf0d | DAT_01d34e44
    MOV dword ptr [EBX + 0x38],EDX      ; 0050cf12
    DEC EAX                             ; 0050cf15
    MOV dword ptr [EBX + 0x34],EAX      ; 0050cf16
    MOV EAX,EBP                         ; 0050cf19
    POP EBP                             ; 0050cf1b
    POP EDI                             ; 0050cf1c
    POP ESI                             ; 0050cf1d
    POP EBX                             ; 0050cf1e
    RET                                 ; 0050cf1f
    MOV ECX,0x5e0a9f                    ; 0050cf20 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050cf20
    MOV ESI,0x5ff                       ; 0050cf25
    PUSH 0x5e0ab3                       ; 0050cf2a | = "CNetGame::addPlayer - too many players!"
    MOV dword ptr [0x01d046a0],ECX      ; 0050cf2f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050cf35 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050cf3b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050cf40
    JMP 0x0050ce82                      ; 0050cf43
        ;   XREF to: 0050ce82 (UNCONDITIONAL_JUMP)  ; LAB_0050ce82

