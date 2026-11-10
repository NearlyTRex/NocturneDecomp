; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   addr
; char *           Stack[0xc]:4   name
; int              Stack[0x10]:4   hero_number
; int              Stack[0x14]:4   aim_mode
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0052f200 at 0052f857
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c703
;   core_netgame.cpp_CNetGame_processPacket_FUN_0052d450 at 0052d638
;   core_netgame.cpp_FUN_0052c5fc at 0052c662
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ebcfa
;   TerminatedCString s_CNetGame_addPlayer_too_m_005ebd0e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51dac
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e040
        ;   Label: core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040
    PUSH ESI                            ; 0052e041
    PUSH EDI                            ; 0052e042
    PUSH EBP                            ; 0052e043
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052e044
    CMP dword ptr [ESI + 0x1c],0x2      ; 0052e048
    JGE 0x0052e0f8                      ; 0052e04c
        ;   XREF to: 0052e0f8 (CONDITIONAL_JUMP)  ; LAB_0052e0f8
    MOV EBP,dword ptr [ESI + 0x1c]      ; 0052e052
        ;   Label: LAB_0052e052
    LEA EBX,[EBP*0x4 + 0x0]             ; 0052e055
    MOV EAX,EBX                         ; 0052e05c
    SHL EBX,0x5                         ; 0052e05e
    SUB EBX,EAX                         ; 0052e061
    PUSH 0x7c                           ; 0052e063
    MOV EAX,EBX                         ; 0052e065
    LEA EBX,[ESI + 0x20]                ; 0052e067
    PUSH 0x0                            ; 0052e06a
    ADD EBX,EAX                         ; 0052e06c
    LEA EDX,[EBP + 0x1]                 ; 0052e06e
    PUSH EBX                            ; 0052e071
    MOV dword ptr [ESI + 0x1c],EDX      ; 0052e072
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0052e075
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052e07a
    MOV EDI,EBX                         ; 0052e07d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052e07f
    PUSH EDI                            ; 0052e083
    MOV AL,byte ptr [ESI]               ; 0052e084
        ;   Label: LAB_0052e084
    MOV byte ptr [EDI],AL               ; 0052e086
    CMP AL,0x0                          ; 0052e088
    JZ 0x0052e09c                       ; 0052e08a
        ;   XREF to: 0052e09c (CONDITIONAL_JUMP)  ; LAB_0052e09c
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e08c
    ADD ESI,0x2                         ; 0052e08f
    MOV byte ptr [EDI + 0x1],AL         ; 0052e092
    ADD EDI,0x2                         ; 0052e095
    CMP AL,0x0                          ; 0052e098
    JNZ 0x0052e084                      ; 0052e09a
        ;   XREF to: 0052e084 (CONDITIONAL_JUMP)  ; LAB_0052e084
    POP EDI                             ; 0052e09c
        ;   Label: LAB_0052e09c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0052e09d
    LEA EDI,[EBX + 0x1c]                ; 0052e0a1
    MOVSD ES:EDI,ESI                    ; 0052e0a4
    MOVSD ES:EDI,ESI                    ; 0052e0a5
    MOV dword ptr [EBX + 0x28],0xbf800000 ; 0052e0a6
    MOV dword ptr [EBX + 0x44],0x0      ; 0052e0ad
    MOV dword ptr [EBX + 0x40],0x0      ; 0052e0b4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052e0bb
    MOV dword ptr [EBX + 0x3c],0x0      ; 0052e0bf
    MOV dword ptr [EBX + 0x14],EAX      ; 0052e0c6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052e0c9
    MOV dword ptr [EBX + 0x18],EAX      ; 0052e0cd
    MOV EAX,[0x01d51da0]                ; 0052e0d0 | DAT_01d51da0
    MOV dword ptr [EBX + 0x24],EAX      ; 0052e0d5
    SUB EAX,0x1e0000                    ; 0052e0d8
    MOV dword ptr [EBX + 0x2c],EAX      ; 0052e0dd
    MOV EDX,EAX                         ; 0052e0e0
    MOV dword ptr [EBX + 0x30],EAX      ; 0052e0e2
    MOV EAX,[0x01d51dac]                ; 0052e0e5 | DAT_01d51dac
    MOV dword ptr [EBX + 0x38],EDX      ; 0052e0ea
    DEC EAX                             ; 0052e0ed
    MOV dword ptr [EBX + 0x34],EAX      ; 0052e0ee
    MOV EAX,EBP                         ; 0052e0f1
    POP EBP                             ; 0052e0f3
    POP EDI                             ; 0052e0f4
    POP ESI                             ; 0052e0f5
    POP EBX                             ; 0052e0f6
    RET                                 ; 0052e0f7
    MOV ECX,0x5ebcfa                    ; 0052e0f8 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052e0f8
    MOV EBX,0x5ff                       ; 0052e0fd
    PUSH 0x5ebd0e                       ; 0052e102 | = "CNetGame::addPlayer - too many players!"
    MOV dword ptr [0x01d1d400],ECX      ; 0052e107 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0052e10d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052e113
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052e118
    JMP 0x0052e052                      ; 0052e11b
        ;   XREF to: 0052e052 (UNCONDITIONAL_JUMP)  ; LAB_0052e052

