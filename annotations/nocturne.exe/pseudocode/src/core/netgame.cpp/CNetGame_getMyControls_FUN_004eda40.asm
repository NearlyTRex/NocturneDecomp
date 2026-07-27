; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(int *param_1)
;
;
; XREF[2]:
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0 at 0049e865
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 at 0049f8cb
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c79b
;   TerminatedCString s_CNetGame_getMyControls_I_0058c7af
;   undefined4 DAT_01cae0e8
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eda40
        ;   Label: core_netgame.cpp_CNetGame_getMyControls_FUN_004eda40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eda41
    CMP dword ptr [EBX],0x0             ; 004eda45
    JZ 0x004eda6f                       ; 004eda48
        ;   XREF to: 004eda6f (CONDITIONAL_JUMP)  ; LAB_004eda6f
    CMP dword ptr [EBX + 0x114],0x0     ; 004eda4a
    JL 0x004eda82                       ; 004eda51
        ;   XREF to: 004eda82 (CONDITIONAL_JUMP)  ; LAB_004eda82
    MOV EAX,dword ptr [EBX + 0x114]     ; 004eda53
        ;   Label: LAB_004eda53
    SHL EAX,0x3                         ; 004eda59
    MOV EDX,EAX                         ; 004eda5c
    SHL EAX,0x4                         ; 004eda5e
    SUB EAX,EDX                         ; 004eda61
    MOV EDX,EAX                         ; 004eda63
    LEA EAX,[EBX + 0x20]                ; 004eda65
    ADD EAX,EDX                         ; 004eda68
    ADD EAX,0x4c                        ; 004eda6a
    POP EBX                             ; 004eda6d
    RET                                 ; 004eda6e
    MOV EAX,[0x01cae0e8]                ; 004eda6f | DAT_01cae0e8
        ;   Label: LAB_004eda6f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004eda74
    ADD EAX,0xbc94                      ; 004eda7b
    POP EBX                             ; 004eda80
    RET                                 ; 004eda81
    PUSH EDI                            ; 004eda82
        ;   Label: LAB_004eda82
    PUSH ESI                            ; 004eda83
    MOV ESI,0x58c79b                    ; 004eda84 | = "..\\core\\netgame.cpp"
    MOV EDI,0xa0f                       ; 004eda89
    PUSH 0x58c7af                       ; 004eda8e | = "CNetGame::getMyControls - I'm not in ..."
    MOV dword ptr [0x01cc4800],ESI      ; 004eda93 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004eda99 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004eda9f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004edaa4
    POP ESI                             ; 004edaa7
    POP EDI                             ; 004edaa8
    JMP 0x004eda53                      ; 004edaa9
        ;   XREF to: 004eda53 (UNCONDITIONAL_JUMP)  ; LAB_004eda53

