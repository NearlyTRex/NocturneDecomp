; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0050d9f0(CNetGame *this_ptr,char *message,int target_player)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   target_player
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d832
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d51050
;   undefined4 DAT_01d5463c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c__strncpy_FUN_005b9cf0
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d9f0
        ;   Label: core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0
    PUSH ESI                            ; 0050d9f1
    PUSH EDI                            ; 0050d9f2
    PUSH EBP                            ; 0050d9f3
    MOV EBP,dword ptr [0x01d34e38]      ; 0050d9f4 | DAT_01d34e38
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050d9fa
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050d9fe
    CMP dword ptr [0x01d51050],0x32     ; 0050da02 | DAT_01d51050
    JGE 0x0050db26                      ; 0050da09
        ;   XREF to: 0050db26 (CONDITIONAL_JUMP)  ; LAB_0050db26
    MOV EDX,dword ptr [0x01d51050]      ; 0050da0f | DAT_01d51050
        ;   Label: LAB_0050da0f
    MOV EAX,EDX                         ; 0050da15
    SHL EAX,0x4                         ; 0050da17
    ADD EAX,EDX                         ; 0050da1a
    SHL EAX,0x2                         ; 0050da1c
    ADD EAX,EDX                         ; 0050da1f
    MOV EDI,0x1d51054                   ; 0050da21
    SHL EAX,0x2                         ; 0050da26
    ADD EDI,EAX                         ; 0050da29
    LEA EAX,[EDX + 0x1]                 ; 0050da2b
    MOV [0x01d51050],EAX                ; 0050da2e | DAT_01d51050
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050da33
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050da38
    MOV ECX,0x12                        ; 0050da3a
    SAR EDX,0x1f                        ; 0050da3f
    IDIV ECX                            ; 0050da42
    MOV ECX,dword ptr [0x01d34e34]      ; 0050da44 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050da4a
    SUB EAX,ECX                         ; 0050da4c
    MOV dword ptr [0x01d34e34],EDX      ; 0050da4e | DAT_01d34e34
    TEST EAX,EAX                        ; 0050da54
    JL 0x0050db4e                       ; 0050da56
        ;   XREF to: 0050db4e (CONDITIONAL_JUMP)  ; LAB_0050db4e
    MOV EBP,dword ptr [0x01d34e38]      ; 0050da5c | DAT_01d34e38
    CMP EAX,0x20000                     ; 0050da62
    JLE 0x0050da6e                      ; 0050da67
        ;   XREF to: 0050da6e (CONDITIONAL_JUMP)  ; LAB_0050da6e
    MOV EAX,0x20000                     ; 0050da69
    ADD EBP,EAX                         ; 0050da6e
        ;   Label: LAB_0050da6e
    MOV EAX,[0x01d5463c]                ; 0050da70 | DAT_01d5463c
    PUSH 0x2                            ; 0050da75
    INC EAX                             ; 0050da77
    PUSH 0x1                            ; 0050da78
    MOV [0x01d5463c],EAX                ; 0050da7a | DAT_01d5463c
    MOV dword ptr [EDI + 0x4],EAX       ; 0050da7f
    LEA EAX,[EDI + 0x8]                 ; 0050da82
    PUSH EAX                            ; 0050da85
    MOV dword ptr [0x01d34e38],EBP      ; 0050da86 | DAT_01d34e38
    MOV dword ptr [EDI],EBP             ; 0050da8c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050da8e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EBP,dword ptr [0x01d34e38]      ; 0050da93 | DAT_01d34e38
    ADD ESP,0xc                         ; 0050da99
    TEST EBX,EBX                        ; 0050da9c
    JL 0x0050db5b                       ; 0050da9e
        ;   XREF to: 0050db5b (CONDITIONAL_JUMP)  ; LAB_0050db5b
    LEA EAX,[EDI + EBX*0x1]             ; 0050daa4
    LEA EDX,[EBP + 0xffc40000]          ; 0050daa7
    MOV byte ptr [EAX + 0x8],0x0        ; 0050daad
    MOV dword ptr [EDI + EBX*0x4 + 0xc],EDX ; 0050dab1
    LEA EAX,[EAX]                       ; 0050dab5
    LEA EDX,[EDX]                       ; 0050dabb
    MOV EBX,EBX                         ; 0050dabe
    PUSH 0x100                          ; 0050dac0
        ;   Label: LAB_0050dac0
    PUSH 0x0                            ; 0050dac5
    LEA EBX,[EDI + 0x14]                ; 0050dac7
    MOV EAX,dword ptr [ESI + 0x124]     ; 0050daca
    PUSH EBX                            ; 0050dad0
    MOV dword ptr [0x01d34e38],EBP      ; 0050dad1 | DAT_01d34e38
    MOV byte ptr [EDI + EAX*0x1 + 0x8],0x1 ; 0050dad7
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050dadc
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050dae1
    PUSH 0xff                           ; 0050dae4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050dae9
    PUSH EAX                            ; 0050daed
    PUSH EBX                            ; 0050daee
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 0050daef
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0050daf4
    PUSH EBX                            ; 0050daf7
    LEA EAX,[ESI + 0x8]                 ; 0050daf8
    PUSH EAX                            ; 0050dafb
    MOV EDX,dword ptr [EDI + 0x4]       ; 0050dafc
    PUSH EDX                            ; 0050daff
    MOV EDX,dword ptr [ESI + 0x124]     ; 0050db00
    LEA EAX,[ESI + 0x20]                ; 0050db06
    SHL EDX,0x7                         ; 0050db09
    ADD EAX,EDX                         ; 0050db0c
    ADD EAX,0x1c                        ; 0050db0e
    PUSH EAX                            ; 0050db11
    PUSH ESI                            ; 0050db12
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20 ; 0050db13
        ;   XREF to: 0050df20 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    MOV EBP,dword ptr [0x01d34e38]      ; 0050db18 | DAT_01d34e38
    ADD ESP,0x14                        ; 0050db1e
    POP EBP                             ; 0050db21
    POP EDI                             ; 0050db22
    POP ESI                             ; 0050db23
    POP EBX                             ; 0050db24
    RET                                 ; 0050db25
    MOV ECX,0x5e0c1d                    ; 0050db26
        ;   Label: LAB_0050db26
    MOV EDI,0x76c                       ; 0050db2b
    PUSH 0x5e0c31                       ; 0050db30
    MOV dword ptr [0x01d046a0],ECX      ; 0050db35 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050db3b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050db41
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050db46
    JMP 0x0050da0f                      ; 0050db49
        ;   XREF to: 0050da0f (UNCONDITIONAL_JUMP)  ; LAB_0050da0f
    MOV EBP,dword ptr [0x01d34e38]      ; 0050db4e | DAT_01d34e38
        ;   Label: LAB_0050db4e
    XOR EAX,EAX                         ; 0050db54
    JMP 0x0050da6e                      ; 0050db56
        ;   XREF to: 0050da6e (UNCONDITIONAL_JUMP)  ; LAB_0050da6e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050db5b
        ;   Label: LAB_0050db5b
    XOR EAX,EAX                         ; 0050db5e
    TEST EDX,EDX                        ; 0050db60
    JLE 0x0050dac0                      ; 0050db62
        ;   XREF to: 0050dac0 (CONDITIONAL_JUMP)  ; LAB_0050dac0
    MOV ECX,EDI                         ; 0050db68
    MOV EDX,EDI                         ; 0050db6a
    ADD EDX,0x4                         ; 0050db6c
        ;   Label: LAB_0050db6c
    LEA EBX,[EBP + 0xffc40000]          ; 0050db6f
    MOV byte ptr [ECX + 0x8],0x0        ; 0050db75
    MOV dword ptr [EDX + 0x8],EBX       ; 0050db79
    INC EAX                             ; 0050db7c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0050db7d
    INC ECX                             ; 0050db80
    CMP EAX,EBX                         ; 0050db81
    JL 0x0050db6c                       ; 0050db83
        ;   XREF to: 0050db6c (CONDITIONAL_JUMP)  ; LAB_0050db6c
    JMP 0x0050dac0                      ; 0050db85
        ;   XREF to: 0050dac0 (UNCONDITIONAL_JUMP)  ; LAB_0050dac0

