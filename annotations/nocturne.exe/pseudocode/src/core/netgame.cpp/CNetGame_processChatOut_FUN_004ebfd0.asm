; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(CNetGame *this_ptr,char *message,int target_player)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   target_player
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebdfb
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c2a2
;   TerminatedCString s_CNetGame_processChatOut_0058c2b6
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01d06610
;   undefined4 DAT_01d09bfc
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
;   crt_memory.c_memset_FUN_00563cc0
;   crt_string.c__strncpy_FUN_00565f70
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebfd0
        ;   Label: core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
    PUSH ESI                            ; 004ebfd1
    PUSH EDI                            ; 004ebfd2
    PUSH EBP                            ; 004ebfd3
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ebfd4 | DAT_01cea3f8
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ebfda
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ebfde
    CMP dword ptr [0x01d06610],0x32     ; 004ebfe2 | DAT_01d06610
    JGE 0x004ec10f                      ; 004ebfe9
        ;   XREF to: 004ec10f (CONDITIONAL_JUMP)  ; LAB_004ec10f
    MOV EDX,dword ptr [0x01d06610]      ; 004ebfef | DAT_01d06610
        ;   Label: LAB_004ebfef
    MOV EAX,EDX                         ; 004ebff5
    SHL EAX,0x4                         ; 004ebff7
    ADD EAX,EDX                         ; 004ebffa
    SHL EAX,0x2                         ; 004ebffc
    ADD EAX,EDX                         ; 004ebfff
    MOV EBP,0x1d06614                   ; 004ec001
    SHL EAX,0x2                         ; 004ec006
    ADD EBP,EAX                         ; 004ec009
    LEA EAX,[EDX + 0x1]                 ; 004ec00b
    MOV [0x01d06610],EAX                ; 004ec00e | DAT_01d06610
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ec013
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ec018
    MOV ECX,0x12                        ; 004ec01a
    SAR EDX,0x1f                        ; 004ec01f
    IDIV ECX                            ; 004ec022
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ec024 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ec02a
    SUB EAX,ECX                         ; 004ec02c
    MOV dword ptr [0x01cea3f4],EDX      ; 004ec02e | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ec034
    JL 0x004ec137                       ; 004ec036
        ;   XREF to: 004ec137 (CONDITIONAL_JUMP)  ; LAB_004ec137
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ec03c | DAT_01cea3f8
    CMP EAX,0x20000                     ; 004ec042
    JLE 0x004ec04e                      ; 004ec047
        ;   XREF to: 004ec04e (CONDITIONAL_JUMP)  ; LAB_004ec04e
    MOV EAX,0x20000                     ; 004ec049
    ADD EDI,EAX                         ; 004ec04e
        ;   Label: LAB_004ec04e
    MOV EAX,[0x01d09bfc]                ; 004ec050 | DAT_01d09bfc
    PUSH 0x2                            ; 004ec055
    INC EAX                             ; 004ec057
    PUSH 0x1                            ; 004ec058
    MOV [0x01d09bfc],EAX                ; 004ec05a | DAT_01d09bfc
    MOV dword ptr [EBP + 0x4],EAX       ; 004ec05f
    LEA EAX,[EBP + 0x8]                 ; 004ec062
    PUSH EAX                            ; 004ec065
    MOV dword ptr [0x01cea3f8],EDI      ; 004ec066 | DAT_01cea3f8
    MOV dword ptr [EBP],EDI             ; 004ec06c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004ec06f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ec074 | DAT_01cea3f8
    ADD ESP,0xc                         ; 004ec07a
    TEST EBX,EBX                        ; 004ec07d
    JL 0x004ec144                       ; 004ec07f
        ;   XREF to: 004ec144 (CONDITIONAL_JUMP)  ; LAB_004ec144
    LEA EAX,[EBX + EBP*0x1]             ; 004ec085
    MOV byte ptr [EAX + 0x8],0x0        ; 004ec088
    LEA EAX,[EDI + 0xffc40000]          ; 004ec08c
    MOV dword ptr [EBP + EBX*0x4 + 0xc],EAX ; 004ec092
    LEA EAX,[EAX]                       ; 004ec096
    LEA EDX,[EDX]                       ; 004ec09c
    PUSH 0x100                          ; 004ec0a0
        ;   Label: LAB_004ec0a0
    PUSH 0x0                            ; 004ec0a5
    LEA EBX,[EBP + 0x14]                ; 004ec0a7
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ec0aa
    PUSH EBX                            ; 004ec0b0
    MOV dword ptr [0x01cea3f8],EDI      ; 004ec0b1 | DAT_01cea3f8
    MOV byte ptr [EAX + EBP*0x1 + 0x8],0x1 ; 004ec0b7
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004ec0bc
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004ec0c1
    PUSH 0xff                           ; 004ec0c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ec0c9
    PUSH EAX                            ; 004ec0cd
    PUSH EBX                            ; 004ec0ce
    CALL crt_string.c__strncpy_FUN_00565f70 ; 004ec0cf
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00565f70(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 004ec0d4
    PUSH EBX                            ; 004ec0d7
    LEA EAX,[ESI + 0x8]                 ; 004ec0d8
    PUSH EAX                            ; 004ec0db
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ec0dc
    MOV EDX,dword ptr [EBP + 0x4]       ; 004ec0e2
    SHL EAX,0x3                         ; 004ec0e5
    PUSH EDX                            ; 004ec0e8
    MOV EDX,EAX                         ; 004ec0e9
    SHL EAX,0x4                         ; 004ec0eb
    SUB EAX,EDX                         ; 004ec0ee
    MOV EDX,EAX                         ; 004ec0f0
    LEA EAX,[ESI + 0x20]                ; 004ec0f2
    ADD EAX,EDX                         ; 004ec0f5
    ADD EAX,0x1c                        ; 004ec0f7
    PUSH EAX                            ; 004ec0fa
    PUSH ESI                            ; 004ec0fb
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500 ; 004ec0fc
        ;   XREF to: 004ec500 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ec101 | DAT_01cea3f8
    ADD ESP,0x14                        ; 004ec107
    POP EBP                             ; 004ec10a
    POP EDI                             ; 004ec10b
    POP ESI                             ; 004ec10c
    POP EBX                             ; 004ec10d
    RET                                 ; 004ec10e
    MOV ECX,0x58c2a2                    ; 004ec10f | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ec10f
    MOV EBP,0x76c                       ; 004ec114
    PUSH 0x58c2b6                       ; 004ec119 | = "CNetGame::processChatOut - too many p..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ec11e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004ec124 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ec12a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ec12f
    JMP 0x004ebfef                      ; 004ec132
        ;   XREF to: 004ebfef (UNCONDITIONAL_JUMP)  ; LAB_004ebfef
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ec137 | DAT_01cea3f8
        ;   Label: LAB_004ec137
    XOR EAX,EAX                         ; 004ec13d
    JMP 0x004ec04e                      ; 004ec13f
        ;   XREF to: 004ec04e (UNCONDITIONAL_JUMP)  ; LAB_004ec04e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004ec144
        ;   Label: LAB_004ec144
    XOR EAX,EAX                         ; 004ec147
    TEST EDX,EDX                        ; 004ec149
    JLE 0x004ec0a0                      ; 004ec14b
        ;   XREF to: 004ec0a0 (CONDITIONAL_JUMP)  ; LAB_004ec0a0
    MOV EDX,EBP                         ; 004ec151
    MOV ECX,EBP                         ; 004ec153
    ADD ECX,0x4                         ; 004ec155
        ;   Label: LAB_004ec155
    LEA EBX,[EDI + 0xffc40000]          ; 004ec158
    MOV byte ptr [EDX + 0x8],0x0        ; 004ec15e
    MOV dword ptr [ECX + 0x8],EBX       ; 004ec162
    INC EAX                             ; 004ec165
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004ec166
    INC EDX                             ; 004ec169
    CMP EAX,EBX                         ; 004ec16a
    JL 0x004ec155                       ; 004ec16c
        ;   XREF to: 004ec155 (CONDITIONAL_JUMP)  ; LAB_004ec155
    JMP 0x004ec0a0                      ; 004ec16e
        ;   XREF to: 004ec0a0 (UNCONDITIONAL_JUMP)  ; LAB_004ec0a0

