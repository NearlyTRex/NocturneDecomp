; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540888
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 at 00542abf
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860 at 0053f8bf
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053f951
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d947
;   TerminatedCString s_CNetGame_addPlayer_too_m_0063d95b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   uint g_CurrentGameTime
;   undefined4 DAT_02f7c8c4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005412b0
        ;   Label: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
    PUSH ESI                            ; 005412b1
    PUSH EDI                            ; 005412b2
    PUSH EBP                            ; 005412b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005412b4
    CMP dword ptr [ESI + 0x1c],0x2      ; 005412b8
    JGE 0x00541368                      ; 005412bc
        ;   XREF to: 00541368 (CONDITIONAL_JUMP)  ; LAB_00541368
    MOV EBP,dword ptr [ESI + 0x1c]      ; 005412c2
        ;   Label: LAB_005412c2
    LEA EBX,[EBP*0x8 + 0x0]             ; 005412c5
    MOV EAX,EBX                         ; 005412cc
    SHL EBX,0x4                         ; 005412ce
    SUB EBX,EAX                         ; 005412d1
    PUSH 0x78                           ; 005412d3
    MOV EAX,EBX                         ; 005412d5
    LEA EBX,[ESI + 0x20]                ; 005412d7
    PUSH 0x0                            ; 005412da
    ADD EBX,EAX                         ; 005412dc
    LEA EDX,[EBP + 0x1]                 ; 005412de
    PUSH EBX                            ; 005412e1
    MOV dword ptr [ESI + 0x1c],EDX      ; 005412e2
    CALL crt_memory.c_memset_FUN_005fde40 ; 005412e5
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005412ea
    MOV EDI,EBX                         ; 005412ed
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005412ef
    PUSH EDI                            ; 005412f3
    MOV AL,byte ptr [ESI]               ; 005412f4
        ;   Label: LAB_005412f4
    MOV byte ptr [EDI],AL               ; 005412f6
    CMP AL,0x0                          ; 005412f8
    JZ 0x0054130c                       ; 005412fa
        ;   XREF to: 0054130c (CONDITIONAL_JUMP)  ; LAB_0054130c
    MOV AL,byte ptr [ESI + 0x1]         ; 005412fc
    ADD ESI,0x2                         ; 005412ff
    MOV byte ptr [EDI + 0x1],AL         ; 00541302
    ADD EDI,0x2                         ; 00541305
    CMP AL,0x0                          ; 00541308
    JNZ 0x005412f4                      ; 0054130a
        ;   XREF to: 005412f4 (CONDITIONAL_JUMP)  ; LAB_005412f4
    POP EDI                             ; 0054130c
        ;   Label: LAB_0054130c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054130d
    LEA EDI,[EBX + 0x1c]                ; 00541311
    MOVSD ES:EDI,ESI                    ; 00541314
    MOVSD ES:EDI,ESI                    ; 00541315
    MOV dword ptr [EBX + 0x28],0xbf800000 ; 00541316
    MOV dword ptr [EBX + 0x44],0x0      ; 0054131d
    MOV dword ptr [EBX + 0x40],0x0      ; 00541324
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054132b
    MOV dword ptr [EBX + 0x3c],0x0      ; 0054132f
    MOV dword ptr [EBX + 0x14],EAX      ; 00541336
    MOV EAX,dword ptr [ESP + 0x24]      ; 00541339
    MOV dword ptr [EBX + 0x18],EAX      ; 0054133d
    MOV EAX,[0x02f7c8b8]                ; 00541340 | g_CurrentGameTime
    MOV dword ptr [EBX + 0x24],EAX      ; 00541345
    SUB EAX,0x1e0000                    ; 00541348
    MOV dword ptr [EBX + 0x2c],EAX      ; 0054134d
    MOV EDX,EAX                         ; 00541350
    MOV dword ptr [EBX + 0x30],EAX      ; 00541352
    MOV EAX,[0x02f7c8c4]                ; 00541355 | DAT_02f7c8c4
    MOV dword ptr [EBX + 0x38],EDX      ; 0054135a
    DEC EAX                             ; 0054135d
    MOV dword ptr [EBX + 0x34],EAX      ; 0054135e
    MOV EAX,EBP                         ; 00541361
    POP EBP                             ; 00541363
    POP EDI                             ; 00541364
    POP ESI                             ; 00541365
    POP EBX                             ; 00541366
    RET                                 ; 00541367
    MOV ECX,0x63d947                    ; 00541368 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00541368
    MOV EBX,0x5ff                       ; 0054136d
    PUSH 0x63d95b                       ; 00541372 | = "CNetGame::addPlayer - too many players!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00541377 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054137d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541383
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00541388
    JMP 0x005412c2                      ; 0054138b
        ;   XREF to: 005412c2 (UNCONDITIONAL_JUMP)  ; LAB_005412c2

