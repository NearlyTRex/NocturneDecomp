; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00507f10(int *param_1)
;
;
; XREF[2]:
;   FUN_004b92e0 at 004b93bc
;   FUN_004ba490 at 004ba49b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cb182
;   TerminatedCString s_CNetGame_getMyControls_I_005cb196
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507f10
        ;   Label: FUN_00507f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507f11
    CMP dword ptr [EBX],0x0             ; 00507f15
    JZ 0x00507f36                       ; 00507f18
        ;   XREF to: 00507f36 (CONDITIONAL_JUMP)  ; LAB_00507f36
    CMP dword ptr [EBX + 0x124],0x0     ; 00507f1a
    JL 0x00507f49                       ; 00507f21
        ;   XREF to: 00507f49 (CONDITIONAL_JUMP)  ; LAB_00507f49
    MOV EAX,dword ptr [EBX + 0x124]     ; 00507f23
    ADD EBX,0x20                        ; 00507f29
    SHL EAX,0x7                         ; 00507f2c
    ADD EAX,EBX                         ; 00507f2f
    ADD EAX,0x4c                        ; 00507f31
    POP EBX                             ; 00507f34
    RET                                 ; 00507f35
    MOV EAX,[0x01d5ba14]                ; 00507f36 | DAT_01d5ba14
        ;   Label: LAB_00507f36
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00507f3b
    ADD EAX,0xcdd4                      ; 00507f42
    POP EBX                             ; 00507f47
    RET                                 ; 00507f48
    PUSH EDI                            ; 00507f49
        ;   Label: LAB_00507f49
    PUSH ESI                            ; 00507f4a
    MOV ESI,0x5cb182                    ; 00507f4b | = "..\\core\\netgame.cpp"
    MOV EDI,0xa0f                       ; 00507f50
    PUSH 0x5cb196                       ; 00507f55 | = "CNetGame::getMyControls - I'm not in ..."
    MOV dword ptr [0x01d71de0],ESI      ; 00507f5a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00507f60 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00507f66
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00507f6b
    POP ESI                             ; 00507f6e
    POP EDI                             ; 00507f6f
    MOV EAX,dword ptr [EBX + 0x124]     ; 00507f70
    ADD EBX,0x20                        ; 00507f76
    SHL EAX,0x7                         ; 00507f79
    ADD EAX,EBX                         ; 00507f7c
    ADD EAX,0x4c                        ; 00507f7e
    POP EBX                             ; 00507f81
    RET                                 ; 00507f82

