; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d267
;   core_netgame.cpp_FUN_0050c280 at 0050c36c
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0dab
;   TerminatedCString s_CNetGame_gameSettingsCha_005e0dbf
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e44
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e890
        ;   Label: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890
    PUSH ESI                            ; 0050e891
    PUSH EDI                            ; 0050e892
    PUSH EBP                            ; 0050e893
    MOV ESI,dword ptr [0x01d34e38]      ; 0050e894 | DAT_01d34e38
    MOV EDI,dword ptr [0x01d34e44]      ; 0050e89a | DAT_01d34e44
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050e8a0
    CMP dword ptr [EBX],0x1             ; 0050e8a4
    JNZ 0x0050e938                      ; 0050e8a7
        ;   XREF to: 0050e938 (CONDITIONAL_JUMP)  ; LAB_0050e938
    MOV EDI,dword ptr [0x01d34e44]      ; 0050e8ad | DAT_01d34e44
        ;   Label: LAB_0050e8ad
    INC EDI                             ; 0050e8b3
    MOV dword ptr [0x01d34e44],EDI      ; 0050e8b4 | DAT_01d34e44
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0050e8ba
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050e8bf
    MOV ECX,0x12                        ; 0050e8c1
    SAR EDX,0x1f                        ; 0050e8c6
    IDIV ECX                            ; 0050e8c9
    MOV EDI,dword ptr [0x01d34e44]      ; 0050e8cb | DAT_01d34e44
    MOV ECX,dword ptr [0x01d34e34]      ; 0050e8d1 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050e8d7
    SUB EAX,ECX                         ; 0050e8d9
    MOV dword ptr [0x01d34e34],EDX      ; 0050e8db | DAT_01d34e34
    TEST EAX,EAX                        ; 0050e8e1
    JL 0x0050e960                       ; 0050e8e3
        ;   XREF to: 0050e960 (CONDITIONAL_JUMP)  ; LAB_0050e960
    MOV ESI,dword ptr [0x01d34e38]      ; 0050e8e9 | DAT_01d34e38
    CMP EAX,0x20000                     ; 0050e8ef
    JLE 0x0050e8fb                      ; 0050e8f4
        ;   XREF to: 0050e8fb (CONDITIONAL_JUMP)  ; LAB_0050e8fb
    MOV EAX,0x20000                     ; 0050e8f6
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0050e8fb
        ;   Label: LAB_0050e8fb
    ADD ESI,EAX                         ; 0050e8fe
    XOR EAX,EAX                         ; 0050e900
    TEST EBP,EBP                        ; 0050e902
    JLE 0x0050e927                      ; 0050e904
        ;   XREF to: 0050e927 (CONDITIONAL_JUMP)  ; LAB_0050e927
    MOV EDX,EBX                         ; 0050e906
    CMP EAX,dword ptr [EBX + 0x124]     ; 0050e908
        ;   Label: LAB_0050e908
    JZ 0x0050e96a                       ; 0050e90e
        ;   XREF to: 0050e96a (CONDITIONAL_JUMP)  ; LAB_0050e96a
    LEA ECX,[ESI + 0xffe20000]          ; 0050e910
    MOV dword ptr [EDX + 0x58],ECX      ; 0050e916
    INC EAX                             ; 0050e919
        ;   Label: LAB_0050e919
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0050e91a
    ADD EDX,0x80                        ; 0050e91d
    CMP EAX,ECX                         ; 0050e923
    JL 0x0050e908                       ; 0050e925
        ;   XREF to: 0050e908 (CONDITIONAL_JUMP)  ; LAB_0050e908
    MOV dword ptr [0x01d34e44],EDI      ; 0050e927 | DAT_01d34e44
        ;   Label: LAB_0050e927
    MOV dword ptr [0x01d34e38],ESI      ; 0050e92d | DAT_01d34e38
    POP EBP                             ; 0050e933
    POP EDI                             ; 0050e934
    POP ESI                             ; 0050e935
    POP EBX                             ; 0050e936
    RET                                 ; 0050e937
    MOV ECX,0x5e0dab                    ; 0050e938 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050e938
    MOV EBP,0x88c                       ; 0050e93d
    PUSH 0x5e0dbf                       ; 0050e942 | = "CNetGame::gameSettingsChanged - shoul..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050e947 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0050e94d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050e953
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050e958
    JMP 0x0050e8ad                      ; 0050e95b
        ;   XREF to: 0050e8ad (UNCONDITIONAL_JUMP)  ; LAB_0050e8ad
    MOV ESI,dword ptr [0x01d34e38]      ; 0050e960 | DAT_01d34e38
        ;   Label: LAB_0050e960
    XOR EAX,EAX                         ; 0050e966
    JMP 0x0050e8fb                      ; 0050e968
        ;   XREF to: 0050e8fb (UNCONDITIONAL_JUMP)  ; LAB_0050e8fb
    MOV dword ptr [EDX + 0x54],EDI      ; 0050e96a
        ;   Label: LAB_0050e96a
    JMP 0x0050e919                      ; 0050e96d
        ;   XREF to: 0050e919 (UNCONDITIONAL_JUMP)  ; LAB_0050e919

