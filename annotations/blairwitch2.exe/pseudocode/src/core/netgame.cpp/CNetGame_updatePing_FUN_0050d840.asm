; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0050d840(CNetGame *this_ptr,int player_index,float max_ping)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; float            Stack[0xc]:4   max_ping
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1f]:4  local_1f
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_0050f120 at 0050f169
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 at 0050ed6e
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d6e2
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 at 0050c06f
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0bbd
;   TerminatedCString s_CNetGame_updatePing_inva_005e0bd1
;   undefined4 DAT_005e0bfd
;   undefined4 DAT_005e0c05
;   undefined4 DAT_005e0c0d
;   undefined4 DAT_005e0c15
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d840
        ;   Label: core_netgame.cpp_CNetGame_updatePing_FUN_0050d840
    PUSH ESI                            ; 0050d841
    PUSH EDI                            ; 0050d842
    PUSH EBP                            ; 0050d843
    MOV EBP,ESP                         ; 0050d844
    SUB ESP,0x1c                        ; 0050d846
    AND ESP,0xfffffff8                  ; 0050d849
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050d84c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050d84f
    TEST EBX,EBX                        ; 0050d852
    JL 0x0050d85b                       ; 0050d854
        ;   XREF to: 0050d85b (CONDITIONAL_JUMP)  ; LAB_0050d85b
    CMP EBX,dword ptr [ESI + 0x1c]      ; 0050d856
    JL 0x0050d87e                       ; 0050d859
        ;   XREF to: 0050d87e (CONDITIONAL_JUMP)  ; LAB_0050d87e
    MOV ECX,0x5e0bbd                    ; 0050d85b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050d85b
    MOV EDI,0x735                       ; 0050d860
    PUSH 0x5e0bd1                       ; 0050d865 | = "CNetGame::updatePing - invalid player..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050d86a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050d870 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050d876
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050d87b
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050d87e
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_0050d87e
    MOV EDX,EAX                         ; 0050d883
    MOV ECX,0x12                        ; 0050d885
    SAR EDX,0x1f                        ; 0050d88a
    IDIV ECX                            ; 0050d88d
    MOV ECX,dword ptr [0x01d34e34]      ; 0050d88f | DAT_01d34e34
    MOV EDX,EAX                         ; 0050d895
    SUB EAX,ECX                         ; 0050d897
    MOV dword ptr [0x01d34e34],EDX      ; 0050d899 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050d89f
    JL 0x0050d9d1                       ; 0050d8a1
        ;   XREF to: 0050d9d1 (CONDITIONAL_JUMP)  ; LAB_0050d9d1
    CMP EAX,0x20000                     ; 0050d8a7
    JLE 0x0050d8b3                      ; 0050d8ac
        ;   XREF to: 0050d8b3 (CONDITIONAL_JUMP)  ; LAB_0050d8b3
    MOV EAX,0x20000                     ; 0050d8ae
    MOV EDX,EBX                         ; 0050d8b3
        ;   Label: LAB_0050d8b3
    MOV EDI,dword ptr [0x01d34e38]      ; 0050d8b5 | DAT_01d34e38
    SHL EDX,0x7                         ; 0050d8bb
    ADD EDI,EAX                         ; 0050d8be
    LEA EAX,[ESI + 0x20]                ; 0050d8c0
    ADD EDX,EAX                         ; 0050d8c3
    MOV EAX,dword ptr [ESI + 0x124]     ; 0050d8c5
    MOV dword ptr [0x01d34e38],EDI      ; 0050d8cb | DAT_01d34e38
    CMP EBX,EAX                         ; 0050d8d1
    JZ 0x0050d9d8                       ; 0050d8d3
        ;   XREF to: 0050d9d8 (CONDITIONAL_JUMP)  ; LAB_0050d9d8
    MOV ECX,EDI                         ; 0050d8d9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0050d8db
    SUB ECX,EAX                         ; 0050d8de
    MOV dword ptr [ESP + 0x18],ECX      ; 0050d8e0
    FILD dword ptr [ESP + 0x18]         ; 0050d8e4
    FMUL double ptr [0x005e0bfd]        ; 0050d8e8 | DAT_005e0bfd
    FST float ptr [ESP + 0x8]           ; 0050d8ee
    FLDZ                                ; 0050d8f2
    FCOMPP                              ; 0050d8f4
    FNSTSW AX                           ; 0050d8f6
    SAHF                                ; 0050d8f8
    JBE 0x0050d901                      ; 0050d8f9
        ;   XREF to: 0050d901 (CONDITIONAL_JUMP)  ; LAB_0050d901
    XOR ECX,ECX                         ; 0050d8fb
    MOV dword ptr [ESP + 0x8],ECX       ; 0050d8fd
    FLD float ptr [ESP + 0x8]           ; 0050d901
        ;   Label: LAB_0050d901
    FCOMP double ptr [0x005e0c05]       ; 0050d905 | DAT_005e0c05
    FNSTSW AX                           ; 0050d90b
    SAHF                                ; 0050d90d
    JBE 0x0050d918                      ; 0050d90e
        ;   XREF to: 0050d918 (CONDITIONAL_JUMP)  ; LAB_0050d918
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0050d910
    FLD float ptr [ESP + 0x8]           ; 0050d918
        ;   Label: LAB_0050d918
    FCOMP double ptr [0x005e0c0d]       ; 0050d91c | DAT_005e0c0d
    FNSTSW AX                           ; 0050d922
    SAHF                                ; 0050d924
    JC 0x0050d9ca                       ; 0050d925
        ;   XREF to: 0050d9ca (CONDITIONAL_JUMP)  ; LAB_0050d9ca
    MOV ECX,dword ptr [0x01d34e38]      ; 0050d92b | DAT_01d34e38
    MOV EAX,dword ptr [EDX + 0x30]      ; 0050d931
    SUB ECX,EAX                         ; 0050d934
    MOV dword ptr [ESP + 0x18],ECX      ; 0050d936
    FILD dword ptr [ESP + 0x18]         ; 0050d93a
    FMUL double ptr [0x005e0bfd]        ; 0050d93e | DAT_005e0bfd
    FST float ptr [ESP + 0x4]           ; 0050d944
    FLDZ                                ; 0050d948
    FCOMPP                              ; 0050d94a
    FNSTSW AX                           ; 0050d94c
    SAHF                                ; 0050d94e
    JBE 0x0050d957                      ; 0050d94f
        ;   XREF to: 0050d957 (CONDITIONAL_JUMP)  ; LAB_0050d957
    XOR EAX,EAX                         ; 0050d951
    MOV dword ptr [ESP + 0x4],EAX       ; 0050d953
    FLD float ptr [ESP + 0x4]           ; 0050d957
        ;   Label: LAB_0050d957
    FCOMP double ptr [0x005e0c05]       ; 0050d95b | DAT_005e0c05
    FNSTSW AX                           ; 0050d961
    SAHF                                ; 0050d963
    JBE 0x0050d96e                      ; 0050d964
        ;   XREF to: 0050d96e (CONDITIONAL_JUMP)  ; LAB_0050d96e
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050d966
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050d96e
        ;   Label: LAB_0050d96e
    FLDZ                                ; 0050d972
    MOV dword ptr [ESP],EAX             ; 0050d974
    FCOMP float ptr [EDX + 0x28]        ; 0050d977
    FNSTSW AX                           ; 0050d97a
    SAHF                                ; 0050d97c
    JA 0x0050d98b                       ; 0050d97d
        ;   XREF to: 0050d98b (CONDITIONAL_JUMP)  ; LAB_0050d98b
    FLD float ptr [ESP + 0x4]           ; 0050d97f
    FCOMP float ptr [EBP + 0x1c]        ; 0050d983
    FNSTSW AX                           ; 0050d986
    SAHF                                ; 0050d988
    JC 0x0050d9ca                       ; 0050d989
        ;   XREF to: 0050d9ca (CONDITIONAL_JUMP)  ; LAB_0050d9ca
    FLD float ptr [ESP]                 ; 0050d98b
        ;   Label: LAB_0050d98b
    FCOMP double ptr [0x005e0c15]       ; 0050d98e | DAT_005e0c15
    FNSTSW AX                           ; 0050d994
    SAHF                                ; 0050d996
    JBE 0x0050d9a0                      ; 0050d997
        ;   XREF to: 0050d9a0 (CONDITIONAL_JUMP)  ; LAB_0050d9a0
    MOV dword ptr [EDX + 0x28],0xbf800000 ; 0050d999
    MOV AH,0x4                          ; 0050d9a0
        ;   Label: LAB_0050d9a0
    MOV EDI,0x9                         ; 0050d9a2
    MOV byte ptr [ESP + 0x10],AH        ; 0050d9a7
    MOV EAX,[0x01d34e38]                ; 0050d9ab | DAT_01d34e38
    MOV dword ptr [ESP + 0xc],EDI       ; 0050d9b0
    MOV dword ptr [ESP + 0x11],EAX      ; 0050d9b4
    MOV dword ptr [EDX + 0x2c],EAX      ; 0050d9b8
    LEA EAX,[ESP + 0xc]                 ; 0050d9bb
    PUSH EAX                            ; 0050d9bf
    PUSH EBX                            ; 0050d9c0
    PUSH ESI                            ; 0050d9c1
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050d9c2
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050d9c7
    MOV ESP,EBP                         ; 0050d9ca
        ;   Label: LAB_0050d9ca
    POP EBP                             ; 0050d9cc
    POP EDI                             ; 0050d9cd
    POP ESI                             ; 0050d9ce
    POP EBX                             ; 0050d9cf
    RET                                 ; 0050d9d0
    XOR EAX,EAX                         ; 0050d9d1
        ;   Label: LAB_0050d9d1
    JMP 0x0050d8b3                      ; 0050d9d3
        ;   XREF to: 0050d8b3 (UNCONDITIONAL_JUMP)  ; LAB_0050d8b3
    MOV dword ptr [EDX + 0x28],0x0      ; 0050d9d8
        ;   Label: LAB_0050d9d8
    MOV dword ptr [EDX + 0x2c],EDI      ; 0050d9df
    MOV dword ptr [EDX + 0x30],EDI      ; 0050d9e2
    MOV ESP,EBP                         ; 0050d9e5
    POP EBP                             ; 0050d9e7
    POP EDI                             ; 0050d9e8
    POP ESI                             ; 0050d9e9
    POP EBX                             ; 0050d9ea
    RET                                 ; 0050d9eb

