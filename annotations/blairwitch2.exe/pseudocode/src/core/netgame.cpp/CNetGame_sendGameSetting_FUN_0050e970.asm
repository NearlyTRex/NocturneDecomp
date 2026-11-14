; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_0050e970(CNetGame *this_ptr,int player_index)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d4cf
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e44
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   crt_memory.c___arrinit_FUN_005b7f5f
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e970
        ;   Label: core_netgame.cpp_CNetGame_sendGameSetting_FUN_0050e970
    PUSH ESI                            ; 0050e971
    PUSH EDI                            ; 0050e972
    PUSH EBP                            ; 0050e973
    SUB ESP,0xb8                        ; 0050e974
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050e97a
    MOV EDX,dword ptr [EAX]             ; 0050e981
    CMP EDX,0x1                         ; 0050e983
    JNZ 0x0050e98d                      ; 0050e986
        ;   XREF to: 0050e98d (CONDITIONAL_JUMP)  ; LAB_0050e98d
    CMP EDX,dword ptr [EAX + 0x4]       ; 0050e988
    JZ 0x0050e9b0                       ; 0050e98b
        ;   XREF to: 0050e9b0 (CONDITIONAL_JUMP)  ; LAB_0050e9b0
    MOV EBX,0x5e0e04                    ; 0050e98d
        ;   Label: LAB_0050e98d
    MOV ESI,0x8a8                       ; 0050e992
    PUSH 0x5e0e18                       ; 0050e997
    MOV dword ptr [0x01d046a0],EBX      ; 0050e99c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050e9a2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050e9a8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050e9ad
    MOV EDI,dword ptr [ESP + 0xd0]      ; 0050e9b0
        ;   Label: LAB_0050e9b0
    TEST EDI,EDI                        ; 0050e9b7
    JL 0x0050e9c7                       ; 0050e9b9
        ;   XREF to: 0050e9c7 (CONDITIONAL_JUMP)  ; LAB_0050e9c7
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0050e9bb
    CMP EDI,dword ptr [EDX + 0x1c]      ; 0050e9c2
    JL 0x0050e9e9                       ; 0050e9c5
        ;   XREF to: 0050e9e9 (CONDITIONAL_JUMP)  ; LAB_0050e9e9
    MOV EAX,0x5e0e66                    ; 0050e9c7
        ;   Label: LAB_0050e9c7
    MOV EDX,0x8ae                       ; 0050e9cc
    PUSH 0x5e0e7a                       ; 0050e9d1
    MOV [0x01d046a0],EAX                ; 0050e9d6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050e9db | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050e9e1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050e9e6
    PUSH 0x5fa6a0                       ; 0050e9e9
        ;   Label: LAB_0050e9e9
    MOV AH,0xb                          ; 0050e9ee
    PUSH 0x2                            ; 0050e9f0
    MOV byte ptr [ESP + 0xc],AH         ; 0050e9f2
    LEA EAX,[ESP + 0x69]                ; 0050e9f6
    MOV ECX,0xb1                        ; 0050e9fa
    PUSH EAX                            ; 0050e9ff
    MOV dword ptr [ESP + 0xc],ECX       ; 0050ea00
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0050ea04
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050ea09
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050ea0c
    MOV EAX,dword ptr [EAX + 0x17c]     ; 0050ea13
    MOV dword ptr [ESP + 0x9],EAX       ; 0050ea19
    MOV EAX,[0x01d34e44]                ; 0050ea1d | DAT_01d34e44
    MOV dword ptr [ESP + 0x5],EAX       ; 0050ea22
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050ea26
    LEA EDI,[ESP + 0xd]                 ; 0050ea2d
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0050ea31
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0050ea38
    ADD ESI,0x128                       ; 0050ea3b
    MOV dword ptr [ESP + 0x5d],EAX      ; 0050ea41
    PUSH EDI                            ; 0050ea45
    MOV AL,byte ptr [ESI]               ; 0050ea46
        ;   Label: LAB_0050ea46
    MOV byte ptr [EDI],AL               ; 0050ea48
    CMP AL,0x0                          ; 0050ea4a
    JZ 0x0050ea5e                       ; 0050ea4c
        ;   XREF to: 0050ea5e (CONDITIONAL_JUMP)  ; LAB_0050ea5e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ea4e
    ADD ESI,0x2                         ; 0050ea51
    MOV byte ptr [EDI + 0x1],AL         ; 0050ea54
    ADD EDI,0x2                         ; 0050ea57
    CMP AL,0x0                          ; 0050ea5a
    JNZ 0x0050ea46                      ; 0050ea5c
        ;   XREF to: 0050ea46 (CONDITIONAL_JUMP)  ; LAB_0050ea46
    POP EDI                             ; 0050ea5e
        ;   Label: LAB_0050ea5e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050ea5f
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0050ea66
    XOR EBX,EBX                         ; 0050ea69
    TEST ESI,ESI                        ; 0050ea6b
    JLE 0x0050eb00                      ; 0050ea6d
        ;   XREF to: 0050eb00 (CONDITIONAL_JUMP)  ; LAB_0050eb00
    LEA EBP,[EAX + 0x20]                ; 0050ea73
    MOV EDX,EAX                         ; 0050ea76
    LEA EAX,[ESP + 0x61]                ; 0050ea78
    MOV dword ptr [ESP + 0xb4],EAX      ; 0050ea7c
    IMUL ECX,EBX,0x28                   ; 0050ea83
        ;   Label: LAB_0050ea83
    MOV EDI,dword ptr [ESP + 0xb4]      ; 0050ea86
    MOV ESI,EBP                         ; 0050ea8d
    PUSH EDI                            ; 0050ea8f
    MOV AL,byte ptr [ESI]               ; 0050ea90
        ;   Label: LAB_0050ea90
    MOV byte ptr [EDI],AL               ; 0050ea92
    CMP AL,0x0                          ; 0050ea94
    JZ 0x0050eaa8                       ; 0050ea96
        ;   XREF to: 0050eaa8 (CONDITIONAL_JUMP)  ; LAB_0050eaa8
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ea98
    ADD ESI,0x2                         ; 0050ea9b
    MOV byte ptr [EDI + 0x1],AL         ; 0050ea9e
    ADD EDI,0x2                         ; 0050eaa1
    CMP AL,0x0                          ; 0050eaa4
    JNZ 0x0050ea90                      ; 0050eaa6
        ;   XREF to: 0050ea90 (CONDITIONAL_JUMP)  ; LAB_0050ea90
    POP EDI                             ; 0050eaa8
        ;   Label: LAB_0050eaa8
    LEA ESI,[EDX + 0x3c]                ; 0050eaa9
    LEA EDI,[ESP + ECX*0x1 + 0x75]      ; 0050eaac
    MOVSD ES:EDI,ESI                    ; 0050eab0
    MOVSD ES:EDI,ESI                    ; 0050eab1
    MOV EAX,dword ptr [EDX + 0x64]      ; 0050eab2
    MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX ; 0050eab5
    MOV EAX,dword ptr [EDX + 0x34]      ; 0050eabc
    ADD EDX,0x80                        ; 0050eabf
    MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX ; 0050eac5
    ADD EBP,0x80                        ; 0050eac9
    MOV EAX,dword ptr [EDX + -0x48]     ; 0050eacf
    MOV EDI,dword ptr [ESP + 0xb4]      ; 0050ead2
    MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX ; 0050ead9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050eae0
    INC EBX                             ; 0050eae7
    ADD EDI,0x28                        ; 0050eae8
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0050eaeb
    MOV dword ptr [ESP + 0xb4],EDI      ; 0050eaee
    CMP EBX,ECX                         ; 0050eaf5
    JL 0x0050ea83                       ; 0050eaf7
        ;   XREF to: 0050ea83 (CONDITIONAL_JUMP)  ; LAB_0050ea83
    LEA EAX,[EAX]                       ; 0050eaf9
    NOP                                 ; 0050eaff
    MOV EAX,ESP                         ; 0050eb00
        ;   Label: LAB_0050eb00
    PUSH EAX                            ; 0050eb02
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0050eb03
    PUSH EBX                            ; 0050eb0a
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0050eb0b
    PUSH ESI                            ; 0050eb12
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050eb13
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050eb18
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050eb1b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050eb20
    MOV ECX,0x12                        ; 0050eb22
    SAR EDX,0x1f                        ; 0050eb27
    IDIV ECX                            ; 0050eb2a
    MOV EDI,dword ptr [0x01d34e34]      ; 0050eb2c | DAT_01d34e34
    MOV EDX,EAX                         ; 0050eb32
    SUB EDX,EDI                         ; 0050eb34
    MOV [0x01d34e34],EAX                ; 0050eb36 | DAT_01d34e34
    TEST EDX,EDX                        ; 0050eb3b
    JL 0x0050eb7b                       ; 0050eb3d
        ;   XREF to: 0050eb7b (CONDITIONAL_JUMP)  ; LAB_0050eb7b
    CMP EDX,0x20000                     ; 0050eb3f
    JLE 0x0050eb4c                      ; 0050eb45
        ;   XREF to: 0050eb4c (CONDITIONAL_JUMP)  ; LAB_0050eb4c
    MOV EDX,0x20000                     ; 0050eb47
    MOV EBP,dword ptr [0x01d34e38]      ; 0050eb4c | DAT_01d34e38
        ;   Label: LAB_0050eb4c
    ADD EBP,EDX                         ; 0050eb52
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0050eb54
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050eb5b
    SHL EDX,0x7                         ; 0050eb62
    ADD EDX,EAX                         ; 0050eb65
    MOV dword ptr [0x01d34e38],EBP      ; 0050eb67 | DAT_01d34e38
    MOV dword ptr [EDX + 0x58],EBP      ; 0050eb6d
    ADD ESP,0xb8                        ; 0050eb70
    POP EBP                             ; 0050eb76
    POP EDI                             ; 0050eb77
    POP ESI                             ; 0050eb78
    POP EBX                             ; 0050eb79
    RET                                 ; 0050eb7a
    XOR EDX,EDX                         ; 0050eb7b
        ;   Label: LAB_0050eb7b
    JMP 0x0050eb4c                      ; 0050eb7d
        ;   XREF to: 0050eb4c (UNCONDITIONAL_JUMP)  ; LAB_0050eb4c

