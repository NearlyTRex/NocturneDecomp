; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x43]:4  local_43
; undefined        Stack[-0x3f]:1  local_3f
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 at 004ed7c9
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c7e5
;   TerminatedCString s_CNetGame_sendSimFrameAck_0058c7f9
;   TerminatedCString s_core_netgame_cpp_0058c83a
;   TerminatedCString s_CNetGame_sendSimFrameAck_0058c84e
;   TerminatedCString s_core_netgame_cpp_0058c891
;   TerminatedCString s_CNetGame_sendSimFrameAck_0058c8a5
;   TerminatedCString s_core_netgame_cpp_0058c8db
;   TerminatedCString s_CNetGame_sendSimFrameAck_0058c8ef
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea408
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edaf0
        ;   Label: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0
    PUSH ESI                            ; 004edaf1
    PUSH EDI                            ; 004edaf2
    PUSH EBP                            ; 004edaf3
    SUB ESP,0x38                        ; 004edaf4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004edaf7
    CMP dword ptr [EBX],0x2             ; 004edafb
    JNZ 0x004edbb2                      ; 004edafe
        ;   XREF to: 004edbb2 (CONDITIONAL_JUMP)  ; LAB_004edbb2
    CMP dword ptr [EBX + 0x4],0x3       ; 004edb04
        ;   Label: LAB_004edb04
    JZ 0x004edb2c                       ; 004edb08
        ;   XREF to: 004edb2c (CONDITIONAL_JUMP)  ; LAB_004edb2c
    MOV EBP,0x58c83a                    ; 004edb0a | = "..\\core\\netgame.cpp"
    MOV EAX,0xa2a                       ; 004edb0f
    PUSH 0x58c84e                       ; 004edb14 | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01cc4800],EBP      ; 004edb19 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004edb1f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004edb24
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004edb29
    CMP dword ptr [EBX + 0x110],0x0     ; 004edb2c
        ;   Label: LAB_004edb2c
    JL 0x004edbda                       ; 004edb33
        ;   XREF to: 004edbda (CONDITIONAL_JUMP)  ; LAB_004edbda
    CMP dword ptr [EBX + 0x114],0x0     ; 004edb39
        ;   Label: LAB_004edb39
    JL 0x004edc02                       ; 004edb40
        ;   XREF to: 004edc02 (CONDITIONAL_JUMP)  ; LAB_004edc02
    MOV EDX,0x35                        ; 004edb46
        ;   Label: LAB_004edb46
    MOV AH,0x10                         ; 004edb4b
    MOV dword ptr [ESP],EDX             ; 004edb4d
    MOV byte ptr [ESP + 0x4],AH         ; 004edb50
    MOV EAX,dword ptr [EBX + 0x114]     ; 004edb54
    SHL EAX,0x3                         ; 004edb5a
    MOV EDX,EAX                         ; 004edb5d
    SHL EAX,0x4                         ; 004edb5f
    SUB EAX,EDX                         ; 004edb62
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68] ; 004edb64
    MOV dword ptr [ESP + 0x5],EAX       ; 004edb68
    MOV EAX,dword ptr [EBX + 0x114]     ; 004edb6c
    SHL EAX,0x3                         ; 004edb72
    MOV EDX,EAX                         ; 004edb75
    SHL EAX,0x4                         ; 004edb77
    SUB EAX,EDX                         ; 004edb7a
    LEA ESI,[EBX + EAX*0x1]             ; 004edb7c
    MOV ECX,0xb                         ; 004edb7f
    LEA EDI,[ESP + 0x9]                 ; 004edb84
    LEA ESI,[ESI + 0x6c]                ; 004edb88
    MOV EAX,ESP                         ; 004edb8b
    MOVSD.REP ES:EDI,ESI                ; 004edb8d
    PUSH EAX                            ; 004edb8f
    MOV ECX,dword ptr [EBX + 0x110]     ; 004edb90
    PUSH ECX                            ; 004edb96
    PUSH EBX                            ; 004edb97
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004edb98
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,[0x01cea3f8]                ; 004edb9d | DAT_01cea3f8
    ADD ESP,0xc                         ; 004edba2
    MOV [0x01cea408],EAX                ; 004edba5 | DAT_01cea408
    ADD ESP,0x38                        ; 004edbaa
    POP EBP                             ; 004edbad
    POP EDI                             ; 004edbae
    POP ESI                             ; 004edbaf
    POP EBX                             ; 004edbb0
    RET                                 ; 004edbb1
    MOV ECX,0x58c7e5                    ; 004edbb2 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004edbb2
    MOV ESI,0xa29                       ; 004edbb7
    PUSH 0x58c7f9                       ; 004edbbc | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01cc4800],ECX      ; 004edbc1 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004edbc7 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004edbcd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004edbd2
    JMP 0x004edb04                      ; 004edbd5
        ;   XREF to: 004edb04 (UNCONDITIONAL_JUMP)  ; LAB_004edb04
    MOV ECX,0x58c891                    ; 004edbda | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004edbda
    MOV ESI,0xa2b                       ; 004edbdf
    PUSH 0x58c8a5                       ; 004edbe4 | = "CNetGame::sendSimFrameAck - server no..."
    MOV dword ptr [0x01cc4800],ECX      ; 004edbe9 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004edbef | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004edbf5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004edbfa
    JMP 0x004edb39                      ; 004edbfd
        ;   XREF to: 004edb39 (UNCONDITIONAL_JUMP)  ; LAB_004edb39
    MOV EBP,0x58c8db                    ; 004edc02 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004edc02
    MOV EAX,0xa2c                       ; 004edc07
    PUSH 0x58c8ef                       ; 004edc0c | = "CNetGame::sendSimFrameAck - I'm not i..."
    MOV dword ptr [0x01cc4800],EBP      ; 004edc11 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004edc17 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004edc1c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004edc21
    JMP 0x004edb46                      ; 004edc24
        ;   XREF to: 004edb46 (UNCONDITIONAL_JUMP)  ; LAB_004edb46

