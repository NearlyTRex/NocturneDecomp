; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507e50(int param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_00507790 at 00507988
;   FUN_00507c00 at 00507ca4
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cb131
;   TerminatedCString s_CNetGame_applySimFrameHi_005cb145
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004bf3a0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507e50
        ;   Label: FUN_00507e50
    PUSH ESI                            ; 00507e51
    PUSH EDI                            ; 00507e52
    PUSH EBP                            ; 00507e53
    MOV EBP,dword ptr [ESP + 0x14]      ; 00507e54
    CMP dword ptr [EBP + 0x124],0x0     ; 00507e58
    JL 0x00507ed9                       ; 00507e5f
        ;   XREF to: 00507ed9 (CONDITIONAL_JUMP)  ; LAB_00507ed9
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507e65
        ;   Label: LAB_00507e65
    MOV EAX,dword ptr [EAX + 0x4]       ; 00507e69
    MOV dword ptr [EBP + 0x17c],EAX     ; 00507e6c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507e72
    MOV ESI,dword ptr [0x005fe9dc]      ; 00507e76 | DAT_005fe9dc
    PUSH dword ptr [EAX + 0x8]          ; 00507e7c
    PUSH ESI                            ; 00507e7f
    CALL FUN_004bf3a0                   ; 00507e80
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bf3a0()
    ADD ESP,0x8                         ; 00507e85
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00507e88
    XOR EAX,EAX                         ; 00507e8b
    TEST EDI,EDI                        ; 00507e8d
    JLE 0x00507ec0                      ; 00507e8f
        ;   XREF to: 00507ec0 (CONDITIONAL_JUMP)  ; LAB_00507ec0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00507e91
    XOR EBX,EBX                         ; 00507e95
    MOV ESI,dword ptr [EBX + 0x1d5ba04] ; 00507e97
        ;   Label: LAB_00507e97
    MOV ECX,0xd                         ; 00507e9d
    LEA EDI,[ESI + 0xcdd4]              ; 00507ea2
    LEA ESI,[EDX + 0xc]                 ; 00507ea8
    ADD EBX,0x4                         ; 00507eab
    MOVSD.REP ES:EDI,ESI                ; 00507eae
    INC EAX                             ; 00507eb0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00507eb1
    ADD EDX,0x34                        ; 00507eb4
    CMP EAX,ECX                         ; 00507eb7
    JL 0x00507e97                       ; 00507eb9
        ;   XREF to: 00507e97 (CONDITIONAL_JUMP)  ; LAB_00507e97
    LEA EAX,[EAX]                       ; 00507ebb
    MOV ECX,ECX                         ; 00507ebe
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507ec0
        ;   Label: LAB_00507ec0
    MOV EDX,dword ptr [EBP + 0x124]     ; 00507ec4
    MOV EAX,dword ptr [EAX]             ; 00507eca
    SHL EDX,0x7                         ; 00507ecc
    INC EAX                             ; 00507ecf
    MOV dword ptr [EDX + EBP*0x1 + 0x68],EAX ; 00507ed0
    POP EBP                             ; 00507ed4
    POP EDI                             ; 00507ed5
    POP ESI                             ; 00507ed6
    POP EBX                             ; 00507ed7
    RET                                 ; 00507ed8
    MOV ECX,0x5cb131                    ; 00507ed9 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507ed9
    MOV EBX,0x9cd                       ; 00507ede
    PUSH 0x5cb145                       ; 00507ee3 | = "CNetGame::applySimFrameHistory - I'm ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00507ee8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00507eee | DAT_01d71de4
    CALL FUN_004e4330                   ; 00507ef4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00507ef9
    JMP 0x00507e65                      ; 00507efc
        ;   XREF to: 00507e65 (UNCONDITIONAL_JUMP)  ; LAB_00507e65

