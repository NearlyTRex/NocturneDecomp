; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_FUN_0052fb60(CNetGame *this_ptr,int player_index)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e6aa
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51dac
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_send_FUN_0052df50
;   crt_memory.c___arrinit_FUN_005c0357
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fb60
        ;   Label: core_netgame.cpp_FUN_0052fb60
    PUSH ESI                            ; 0052fb61
    PUSH EDI                            ; 0052fb62
    PUSH EBP                            ; 0052fb63
    SUB ESP,0xb8                        ; 0052fb64
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052fb6a
    MOV EDX,dword ptr [EAX]             ; 0052fb71
    CMP EDX,0x1                         ; 0052fb73
    JNZ 0x0052fb7d                      ; 0052fb76
        ;   XREF to: 0052fb7d (CONDITIONAL_JUMP)  ; LAB_0052fb7d
    CMP EDX,dword ptr [EAX + 0x4]       ; 0052fb78
    JZ 0x0052fba0                       ; 0052fb7b
        ;   XREF to: 0052fba0 (CONDITIONAL_JUMP)  ; LAB_0052fba0
    MOV EBX,0x5ec05f                    ; 0052fb7d
        ;   Label: LAB_0052fb7d
    MOV ESI,0x8a8                       ; 0052fb82
    PUSH 0x5ec073                       ; 0052fb87
    MOV dword ptr [0x01d1d400],EBX      ; 0052fb8c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0052fb92 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052fb98
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052fb9d
    MOV EDI,dword ptr [ESP + 0xd0]      ; 0052fba0
        ;   Label: LAB_0052fba0
    TEST EDI,EDI                        ; 0052fba7
    JL 0x0052fbb7                       ; 0052fba9
        ;   XREF to: 0052fbb7 (CONDITIONAL_JUMP)  ; LAB_0052fbb7
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0052fbab
    CMP EDI,dword ptr [EDX + 0x1c]      ; 0052fbb2
    JL 0x0052fbd9                       ; 0052fbb5
        ;   XREF to: 0052fbd9 (CONDITIONAL_JUMP)  ; LAB_0052fbd9
    MOV EAX,0x5ec0c1                    ; 0052fbb7
        ;   Label: LAB_0052fbb7
    MOV EDX,0x8ae                       ; 0052fbbc
    PUSH 0x5ec0d5                       ; 0052fbc1
    MOV [0x01d1d400],EAX                ; 0052fbc6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052fbcb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052fbd1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052fbd6
    PUSH 0x6043a0                       ; 0052fbd9
        ;   Label: LAB_0052fbd9
    MOV AH,0xb                          ; 0052fbde
    PUSH 0x2                            ; 0052fbe0
    MOV byte ptr [ESP + 0xc],AH         ; 0052fbe2
    LEA EAX,[ESP + 0x69]                ; 0052fbe6
    MOV ECX,0xb1                        ; 0052fbea
    PUSH EAX                            ; 0052fbef
    MOV dword ptr [ESP + 0xc],ECX       ; 0052fbf0
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0052fbf4
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0052fbf9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052fbfc
    MOV EAX,dword ptr [EAX + 0x174]     ; 0052fc03
    MOV dword ptr [ESP + 0x9],EAX       ; 0052fc09
    MOV EAX,[0x01d51dac]                ; 0052fc0d | DAT_01d51dac
    MOV dword ptr [ESP + 0x5],EAX       ; 0052fc12
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052fc16
    LEA EDI,[ESP + 0xd]                 ; 0052fc1d
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0052fc21
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0052fc28
    ADD ESI,0x120                       ; 0052fc2b
    MOV dword ptr [ESP + 0x5d],EAX      ; 0052fc31
    PUSH EDI                            ; 0052fc35
    MOV AL,byte ptr [ESI]               ; 0052fc36
        ;   Label: LAB_0052fc36
    MOV byte ptr [EDI],AL               ; 0052fc38
    CMP AL,0x0                          ; 0052fc3a
    JZ 0x0052fc4e                       ; 0052fc3c
        ;   XREF to: 0052fc4e (CONDITIONAL_JUMP)  ; LAB_0052fc4e
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fc3e
    ADD ESI,0x2                         ; 0052fc41
    MOV byte ptr [EDI + 0x1],AL         ; 0052fc44
    ADD EDI,0x2                         ; 0052fc47
    CMP AL,0x0                          ; 0052fc4a
    JNZ 0x0052fc36                      ; 0052fc4c
        ;   XREF to: 0052fc36 (CONDITIONAL_JUMP)  ; LAB_0052fc36
    POP EDI                             ; 0052fc4e
        ;   Label: LAB_0052fc4e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052fc4f
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0052fc56
    XOR EBX,EBX                         ; 0052fc59
    TEST ESI,ESI                        ; 0052fc5b
    JLE 0x0052fcf0                      ; 0052fc5d
        ;   XREF to: 0052fcf0 (CONDITIONAL_JUMP)  ; LAB_0052fcf0
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0052fc63
    ADD EAX,0x20                        ; 0052fc6a
    LEA EBP,[ESP + 0x61]                ; 0052fc6d
    MOV dword ptr [ESP + 0xb4],EAX      ; 0052fc71
    IMUL ECX,EBX,0x28                   ; 0052fc78
        ;   Label: LAB_0052fc78
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0052fc7b
    MOV EDI,EBP                         ; 0052fc82
    PUSH EDI                            ; 0052fc84
    MOV AL,byte ptr [ESI]               ; 0052fc85
        ;   Label: LAB_0052fc85
    MOV byte ptr [EDI],AL               ; 0052fc87
    CMP AL,0x0                          ; 0052fc89
    JZ 0x0052fc9d                       ; 0052fc8b
        ;   XREF to: 0052fc9d (CONDITIONAL_JUMP)  ; LAB_0052fc9d
    MOV AL,byte ptr [ESI + 0x1]         ; 0052fc8d
    ADD ESI,0x2                         ; 0052fc90
    MOV byte ptr [EDI + 0x1],AL         ; 0052fc93
    ADD EDI,0x2                         ; 0052fc96
    CMP AL,0x0                          ; 0052fc99
    JNZ 0x0052fc85                      ; 0052fc9b
        ;   XREF to: 0052fc85 (CONDITIONAL_JUMP)  ; LAB_0052fc85
    POP EDI                             ; 0052fc9d
        ;   Label: LAB_0052fc9d
    LEA ESI,[EDX + 0x3c]                ; 0052fc9e
    LEA EDI,[ESP + ECX*0x1 + 0x75]      ; 0052fca1
    MOVSD ES:EDI,ESI                    ; 0052fca5
    MOVSD ES:EDI,ESI                    ; 0052fca6
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052fca7
    MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX ; 0052fcaa
    MOV EAX,dword ptr [EDX + 0x34]      ; 0052fcb1
    ADD EDX,0x7c                        ; 0052fcb4
    MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX ; 0052fcb7
    ADD EBP,0x28                        ; 0052fcbb
    MOV EAX,dword ptr [EDX + -0x44]     ; 0052fcbe
    MOV EDI,dword ptr [ESP + 0xb4]      ; 0052fcc1
    MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX ; 0052fcc8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052fccf
    INC EBX                             ; 0052fcd6
    ADD EDI,0x7c                        ; 0052fcd7
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0052fcda
    MOV dword ptr [ESP + 0xb4],EDI      ; 0052fcdd
    CMP EBX,ECX                         ; 0052fce4
    JL 0x0052fc78                       ; 0052fce6
        ;   XREF to: 0052fc78 (CONDITIONAL_JUMP)  ; LAB_0052fc78
    LEA EAX,[EAX]                       ; 0052fce8
    MOV EDX,EDX                         ; 0052fcee
    MOV EAX,ESP                         ; 0052fcf0
        ;   Label: LAB_0052fcf0
    PUSH EAX                            ; 0052fcf2
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0052fcf3
    PUSH EBX                            ; 0052fcfa
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0052fcfb
    PUSH ESI                            ; 0052fd02
    CALL core_netgame.cpp_CNetGame_send_FUN_0052df50 ; 0052fd03
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0052df50(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0052fd08
    CALL wincore_winrun.cpp_FUN_005b2420 ; 0052fd0b
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
    MOV EDX,EAX                         ; 0052fd10
    MOV ECX,0x12                        ; 0052fd12
    SAR EDX,0x1f                        ; 0052fd17
    IDIV ECX                            ; 0052fd1a
    MOV EDI,dword ptr [0x01d51d9c]      ; 0052fd1c | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052fd22
    SUB EDX,EDI                         ; 0052fd24
    MOV [0x01d51d9c],EAX                ; 0052fd26 | DAT_01d51d9c
    TEST EDX,EDX                        ; 0052fd2b
    JL 0x0052fd70                       ; 0052fd2d
        ;   XREF to: 0052fd70 (CONDITIONAL_JUMP)  ; LAB_0052fd70
    CMP EDX,0x20000                     ; 0052fd2f
    JLE 0x0052fd3c                      ; 0052fd35
        ;   XREF to: 0052fd3c (CONDITIONAL_JUMP)  ; LAB_0052fd3c
    MOV EDX,0x20000                     ; 0052fd37
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0052fd3c
        ;   Label: LAB_0052fd3c
    MOV EBP,dword ptr [0x01d51da0]      ; 0052fd43 | DAT_01d51da0
    SHL EAX,0x2                         ; 0052fd49
    ADD EBP,EDX                         ; 0052fd4c
    MOV EDX,EAX                         ; 0052fd4e
    SHL EAX,0x5                         ; 0052fd50
    SUB EAX,EDX                         ; 0052fd53
    ADD EAX,dword ptr [ESP + 0xcc]      ; 0052fd55
    MOV dword ptr [0x01d51da0],EBP      ; 0052fd5c | DAT_01d51da0
    MOV dword ptr [EAX + 0x58],EBP      ; 0052fd62
    ADD ESP,0xb8                        ; 0052fd65
    POP EBP                             ; 0052fd6b
    POP EDI                             ; 0052fd6c
    POP ESI                             ; 0052fd6d
    POP EBX                             ; 0052fd6e
    RET                                 ; 0052fd6f
    XOR EDX,EDX                         ; 0052fd70
        ;   Label: LAB_0052fd70
    JMP 0x0052fd3c                      ; 0052fd72
        ;   XREF to: 0052fd3c (UNCONDITIONAL_JUMP)  ; LAB_0052fd3c

