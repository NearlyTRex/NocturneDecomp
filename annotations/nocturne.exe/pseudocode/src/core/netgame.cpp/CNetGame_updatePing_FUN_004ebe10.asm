; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame *this_ptr,int player_index,float max_ping)
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
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 at 004ed769
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 at 004ed38e
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebcad
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 at 004ea625
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c242
;   TerminatedCString s_CNetGame_updatePing_inva_0058c256
;   double DOUBLE_0058c282 = 0.0000152587890625
;   double DOUBLE_0058c28a = 30
;   double DOUBLE_0058c292 = 0.400000000000000
;   double DOUBLE_0058c29a = 5
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebe10
        ;   Label: core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10
    PUSH ESI                            ; 004ebe11
    PUSH EDI                            ; 004ebe12
    PUSH EBP                            ; 004ebe13
    MOV EBP,ESP                         ; 004ebe14
    SUB ESP,0x1c                        ; 004ebe16
    AND ESP,0xfffffff8                  ; 004ebe19
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ebe1c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ebe1f
    TEST EBX,EBX                        ; 004ebe22
    JL 0x004ebe2b                       ; 004ebe24
        ;   XREF to: 004ebe2b (CONDITIONAL_JUMP)  ; LAB_004ebe2b
    CMP EBX,dword ptr [ESI + 0x1c]      ; 004ebe26
    JL 0x004ebe4e                       ; 004ebe29
        ;   XREF to: 004ebe4e (CONDITIONAL_JUMP)  ; LAB_004ebe4e
    MOV ECX,0x58c242                    ; 004ebe2b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ebe2b
    MOV EDI,0x735                       ; 004ebe30
    PUSH 0x58c256                       ; 004ebe35 | = "CNetGame::updatePing - invalid player..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ebe3a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004ebe40 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ebe46
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ebe4b
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ebe4e
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004ebe4e
    MOV EDX,EAX                         ; 004ebe53
    MOV ECX,0x12                        ; 004ebe55
    SAR EDX,0x1f                        ; 004ebe5a
    IDIV ECX                            ; 004ebe5d
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ebe5f | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ebe65
    SUB EAX,ECX                         ; 004ebe67
    MOV dword ptr [0x01cea3f4],EDX      ; 004ebe69 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ebe6f
    JL 0x004ebfaa                       ; 004ebe71
        ;   XREF to: 004ebfaa (CONDITIONAL_JUMP)  ; LAB_004ebfaa
    CMP EAX,0x20000                     ; 004ebe77
    JLE 0x004ebe83                      ; 004ebe7c
        ;   XREF to: 004ebe83 (CONDITIONAL_JUMP)  ; LAB_004ebe83
    MOV EAX,0x20000                     ; 004ebe7e
    MOV EDI,dword ptr [0x01cea3f8]      ; 004ebe83 | DAT_01cea3f8
        ;   Label: LAB_004ebe83
    ADD EDI,EAX                         ; 004ebe89
    LEA EAX,[EBX*0x8 + 0x0]             ; 004ebe8b
    MOV EDX,EAX                         ; 004ebe92
    SHL EAX,0x4                         ; 004ebe94
    SUB EAX,EDX                         ; 004ebe97
    LEA EDX,[ESI + 0x20]                ; 004ebe99
    ADD EDX,EAX                         ; 004ebe9c
    MOV EAX,dword ptr [ESI + 0x114]     ; 004ebe9e
    MOV dword ptr [0x01cea3f8],EDI      ; 004ebea4 | DAT_01cea3f8
    CMP EBX,EAX                         ; 004ebeaa
    JZ 0x004ebfb1                       ; 004ebeac
        ;   XREF to: 004ebfb1 (CONDITIONAL_JUMP)  ; LAB_004ebfb1
    MOV ECX,EDI                         ; 004ebeb2
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004ebeb4
    SUB ECX,EAX                         ; 004ebeb7
    MOV dword ptr [ESP + 0x18],ECX      ; 004ebeb9
    FILD dword ptr [ESP + 0x18]         ; 004ebebd
    FMUL double ptr [0x0058c282]        ; 004ebec1 | DOUBLE_0058c282
    FST float ptr [ESP + 0x8]           ; 004ebec7
    FLDZ                                ; 004ebecb
    FCOMPP                              ; 004ebecd
    FNSTSW AX                           ; 004ebecf
    SAHF                                ; 004ebed1
    JBE 0x004ebeda                      ; 004ebed2
        ;   XREF to: 004ebeda (CONDITIONAL_JUMP)  ; LAB_004ebeda
    XOR ECX,ECX                         ; 004ebed4
    MOV dword ptr [ESP + 0x8],ECX       ; 004ebed6
    FLD float ptr [ESP + 0x8]           ; 004ebeda
        ;   Label: LAB_004ebeda
    FCOMP double ptr [0x0058c28a]       ; 004ebede | DOUBLE_0058c28a
    FNSTSW AX                           ; 004ebee4
    SAHF                                ; 004ebee6
    JBE 0x004ebef1                      ; 004ebee7
        ;   XREF to: 004ebef1 (CONDITIONAL_JUMP)  ; LAB_004ebef1
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 004ebee9
    FLD float ptr [ESP + 0x8]           ; 004ebef1
        ;   Label: LAB_004ebef1
    FCOMP double ptr [0x0058c292]       ; 004ebef5 | DOUBLE_0058c292
    FNSTSW AX                           ; 004ebefb
    SAHF                                ; 004ebefd
    JC 0x004ebfa3                       ; 004ebefe
        ;   XREF to: 004ebfa3 (CONDITIONAL_JUMP)  ; LAB_004ebfa3
    MOV ECX,dword ptr [0x01cea3f8]      ; 004ebf04 | DAT_01cea3f8
    MOV EAX,dword ptr [EDX + 0x30]      ; 004ebf0a
    SUB ECX,EAX                         ; 004ebf0d
    MOV dword ptr [ESP + 0x18],ECX      ; 004ebf0f
    FILD dword ptr [ESP + 0x18]         ; 004ebf13
    FMUL double ptr [0x0058c282]        ; 004ebf17 | DOUBLE_0058c282
    FST float ptr [ESP + 0x4]           ; 004ebf1d
    FLDZ                                ; 004ebf21
    FCOMPP                              ; 004ebf23
    FNSTSW AX                           ; 004ebf25
    SAHF                                ; 004ebf27
    JBE 0x004ebf30                      ; 004ebf28
        ;   XREF to: 004ebf30 (CONDITIONAL_JUMP)  ; LAB_004ebf30
    XOR EAX,EAX                         ; 004ebf2a
    MOV dword ptr [ESP + 0x4],EAX       ; 004ebf2c
    FLD float ptr [ESP + 0x4]           ; 004ebf30
        ;   Label: LAB_004ebf30
    FCOMP double ptr [0x0058c28a]       ; 004ebf34 | DOUBLE_0058c28a
    FNSTSW AX                           ; 004ebf3a
    SAHF                                ; 004ebf3c
    JBE 0x004ebf47                      ; 004ebf3d
        ;   XREF to: 004ebf47 (CONDITIONAL_JUMP)  ; LAB_004ebf47
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 004ebf3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ebf47
        ;   Label: LAB_004ebf47
    FLDZ                                ; 004ebf4b
    MOV dword ptr [ESP],EAX             ; 004ebf4d
    FCOMP float ptr [EDX + 0x28]        ; 004ebf50
    FNSTSW AX                           ; 004ebf53
    SAHF                                ; 004ebf55
    JA 0x004ebf64                       ; 004ebf56
        ;   XREF to: 004ebf64 (CONDITIONAL_JUMP)  ; LAB_004ebf64
    FLD float ptr [ESP + 0x4]           ; 004ebf58
    FCOMP float ptr [EBP + 0x1c]        ; 004ebf5c
    FNSTSW AX                           ; 004ebf5f
    SAHF                                ; 004ebf61
    JC 0x004ebfa3                       ; 004ebf62
        ;   XREF to: 004ebfa3 (CONDITIONAL_JUMP)  ; LAB_004ebfa3
    FLD float ptr [ESP]                 ; 004ebf64
        ;   Label: LAB_004ebf64
    FCOMP double ptr [0x0058c29a]       ; 004ebf67 | DOUBLE_0058c29a
    FNSTSW AX                           ; 004ebf6d
    SAHF                                ; 004ebf6f
    JBE 0x004ebf79                      ; 004ebf70
        ;   XREF to: 004ebf79 (CONDITIONAL_JUMP)  ; LAB_004ebf79
    MOV dword ptr [EDX + 0x28],0xbf800000 ; 004ebf72
    MOV AH,0x4                          ; 004ebf79
        ;   Label: LAB_004ebf79
    MOV EDI,0x9                         ; 004ebf7b
    MOV byte ptr [ESP + 0x10],AH        ; 004ebf80
    MOV EAX,[0x01cea3f8]                ; 004ebf84 | DAT_01cea3f8
    MOV dword ptr [ESP + 0xc],EDI       ; 004ebf89
    MOV dword ptr [ESP + 0x11],EAX      ; 004ebf8d
    MOV dword ptr [EDX + 0x2c],EAX      ; 004ebf91
    LEA EAX,[ESP + 0xc]                 ; 004ebf94
    PUSH EAX                            ; 004ebf98
    PUSH EBX                            ; 004ebf99
    PUSH ESI                            ; 004ebf9a
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004ebf9b
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 004ebfa0
    MOV ESP,EBP                         ; 004ebfa3
        ;   Label: LAB_004ebfa3
    POP EBP                             ; 004ebfa5
    POP EDI                             ; 004ebfa6
    POP ESI                             ; 004ebfa7
    POP EBX                             ; 004ebfa8
    RET                                 ; 004ebfa9
    XOR EAX,EAX                         ; 004ebfaa
        ;   Label: LAB_004ebfaa
    JMP 0x004ebe83                      ; 004ebfac
        ;   XREF to: 004ebe83 (UNCONDITIONAL_JUMP)  ; LAB_004ebe83
    MOV dword ptr [EDX + 0x28],0x0      ; 004ebfb1
        ;   Label: LAB_004ebfb1
    MOV dword ptr [EDX + 0x2c],EDI      ; 004ebfb8
    MOV dword ptr [EDX + 0x30],EDI      ; 004ebfbb
    MOV ESP,EBP                         ; 004ebfbe
    POP EBP                             ; 004ebfc0
    POP EDI                             ; 004ebfc1
    POP ESI                             ; 004ebfc2
    POP EBX                             ; 004ebfc3
    RET                                 ; 004ebfc4

