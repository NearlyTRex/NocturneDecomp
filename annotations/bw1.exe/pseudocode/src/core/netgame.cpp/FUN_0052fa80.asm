; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052fa80(int *param_1)
;
;
; XREF[2]:
;   FUN_0052d450 at 0052d543
;   FUN_0052e120 at 0052e442
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec006
;   TerminatedCString s_CNetGame_gameSettingsCha_005ec01a
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51dac
;
; Called Functions:
;   FUN_005030e0
;   FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fa80
        ;   Label: FUN_0052fa80
    PUSH ESI                            ; 0052fa81
    PUSH EDI                            ; 0052fa82
    PUSH EBP                            ; 0052fa83
    MOV ESI,dword ptr [0x01d51da0]      ; 0052fa84 | DAT_01d51da0
    MOV EDI,dword ptr [0x01d51dac]      ; 0052fa8a | DAT_01d51dac
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052fa90
    CMP dword ptr [EBX],0x1             ; 0052fa94
    JNZ 0x0052fb25                      ; 0052fa97
        ;   XREF to: 0052fb25 (CONDITIONAL_JUMP)  ; LAB_0052fb25
    MOV EDI,dword ptr [0x01d51dac]      ; 0052fa9d | DAT_01d51dac
        ;   Label: LAB_0052fa9d
    INC EDI                             ; 0052faa3
    MOV dword ptr [0x01d51dac],EDI      ; 0052faa4 | DAT_01d51dac
    CALL FUN_005b2420                   ; 0052faaa
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDX,EAX                         ; 0052faaf
    MOV ECX,0x12                        ; 0052fab1
    SAR EDX,0x1f                        ; 0052fab6
    IDIV ECX                            ; 0052fab9
    MOV EDI,dword ptr [0x01d51dac]      ; 0052fabb | DAT_01d51dac
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052fac1 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052fac7
    SUB EAX,ECX                         ; 0052fac9
    MOV dword ptr [0x01d51d9c],EDX      ; 0052facb | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052fad1
    JL 0x0052fb4d                       ; 0052fad3
        ;   XREF to: 0052fb4d (CONDITIONAL_JUMP)  ; LAB_0052fb4d
    MOV ESI,dword ptr [0x01d51da0]      ; 0052fad9 | DAT_01d51da0
    CMP EAX,0x20000                     ; 0052fadf
    JLE 0x0052faeb                      ; 0052fae4
        ;   XREF to: 0052faeb (CONDITIONAL_JUMP)  ; LAB_0052faeb
    MOV EAX,0x20000                     ; 0052fae6
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0052faeb
        ;   Label: LAB_0052faeb
    ADD ESI,EAX                         ; 0052faee
    XOR EAX,EAX                         ; 0052faf0
    TEST EBP,EBP                        ; 0052faf2
    JLE 0x0052fb14                      ; 0052faf4
        ;   XREF to: 0052fb14 (CONDITIONAL_JUMP)  ; LAB_0052fb14
    MOV EDX,EBX                         ; 0052faf6
    CMP EAX,dword ptr [EBX + 0x11c]     ; 0052faf8
        ;   Label: LAB_0052faf8
    JZ 0x0052fb57                       ; 0052fafe
        ;   XREF to: 0052fb57 (CONDITIONAL_JUMP)  ; LAB_0052fb57
    LEA ECX,[ESI + 0xffe20000]          ; 0052fb00
    MOV dword ptr [EDX + 0x58],ECX      ; 0052fb06
    INC EAX                             ; 0052fb09
        ;   Label: LAB_0052fb09
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0052fb0a
    ADD EDX,0x7c                        ; 0052fb0d
    CMP EAX,ECX                         ; 0052fb10
    JL 0x0052faf8                       ; 0052fb12
        ;   XREF to: 0052faf8 (CONDITIONAL_JUMP)  ; LAB_0052faf8
    MOV dword ptr [0x01d51dac],EDI      ; 0052fb14 | DAT_01d51dac
        ;   Label: LAB_0052fb14
    MOV dword ptr [0x01d51da0],ESI      ; 0052fb1a | DAT_01d51da0
    POP EBP                             ; 0052fb20
    POP EDI                             ; 0052fb21
    POP ESI                             ; 0052fb22
    POP EBX                             ; 0052fb23
    RET                                 ; 0052fb24
    MOV ECX,0x5ec006                    ; 0052fb25 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052fb25
    MOV EBP,0x88c                       ; 0052fb2a
    PUSH 0x5ec01a                       ; 0052fb2f | = "CNetGame::gameSettingsChanged - shoul..."
    MOV dword ptr [0x01d1d400],ECX      ; 0052fb34 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0052fb3a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052fb40
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052fb45
    JMP 0x0052fa9d                      ; 0052fb48
        ;   XREF to: 0052fa9d (UNCONDITIONAL_JUMP)  ; LAB_0052fa9d
    MOV ESI,dword ptr [0x01d51da0]      ; 0052fb4d | DAT_01d51da0
        ;   Label: LAB_0052fb4d
    XOR EAX,EAX                         ; 0052fb53
    JMP 0x0052faeb                      ; 0052fb55
        ;   XREF to: 0052faeb (UNCONDITIONAL_JUMP)  ; LAB_0052faeb
    MOV dword ptr [EDX + 0x54],EDI      ; 0052fb57
        ;   Label: LAB_0052fb57
    JMP 0x0052fb09                      ; 0052fb5a
        ;   XREF to: 0052fb09 (UNCONDITIONAL_JUMP)  ; LAB_0052fb09

