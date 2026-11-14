; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_0052ed80(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined1       Stack[-0x148]:1  local_148
; undefined4       Stack[-0x147]:4  local_147
; undefined        Stack[-0x143]:1  local_143
; undefined1       Stack[-0x142]:1  local_142
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 at 0052d3f5
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005eb5f8
;   TerminatedCString s_removeChatOut_invalid_in_005eb60c
;   undefined4 DAT_005ebed0
;   undefined4 DAT_005ebed8
;   undefined4 DAT_005ebee0
;   undefined4 DAT_005ebee8
;   undefined4 DAT_005ebef0
;   undefined4 DAT_005ebef8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d6dfb8
;   undefined4 DAT_01d6dfbc
;   undefined4 DAT_01d6dfc0
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0
;   crt_string.c_memmove_FUN_005c25d0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ed80
        ;   Label: core_netgame.cpp_CNetGame_removeChatOut_FUN_0052ed80
    PUSH ESI                            ; 0052ed81
    PUSH EDI                            ; 0052ed82
    PUSH EBP                            ; 0052ed83
    MOV EBP,ESP                         ; 0052ed84
    SUB ESP,0x144                       ; 0052ed86
    AND ESP,0xfffffff8                  ; 0052ed8c
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052ed8f
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,EAX                         ; 0052ed94
    MOV EBX,0x12                        ; 0052ed96
    SAR EDX,0x1f                        ; 0052ed9b
    IDIV EBX                            ; 0052ed9e
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052eda0 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052eda6
    SUB EAX,ECX                         ; 0052eda8
    MOV dword ptr [0x01d51d9c],EDX      ; 0052edaa | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052edb0
    JL 0x0052efc2                       ; 0052edb2
        ;   XREF to: 0052efc2 (CONDITIONAL_JUMP)  ; LAB_0052efc2
    CMP EAX,0x20000                     ; 0052edb8
    JLE 0x0052edc4                      ; 0052edbd
        ;   XREF to: 0052edc4 (CONDITIONAL_JUMP)  ; LAB_0052edc4
    MOV EAX,0x20000                     ; 0052edbf
    MOV EBX,dword ptr [0x01d51da0]      ; 0052edc4 | DAT_01d51da0
        ;   Label: LAB_0052edc4
    MOV EDI,dword ptr [0x01d6dfb8]      ; 0052edca | DAT_01d6dfb8
    XOR ESI,ESI                         ; 0052edd0
    ADD EBX,EAX                         ; 0052edd2
    MOV dword ptr [ESP + 0x120],ESI     ; 0052edd4
    MOV dword ptr [0x01d51da0],EBX      ; 0052eddb | DAT_01d51da0
    TEST EDI,EDI                        ; 0052ede1
    JLE 0x0052efbb                      ; 0052ede3
        ;   XREF to: 0052efbb (CONDITIONAL_JUMP)  ; LAB_0052efbb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ede9
    MOV ECX,0x1d6dfbc                   ; 0052edec
    ADD EAX,0x20                        ; 0052edf1
    MOV dword ptr [ESP + 0x11c],ECX     ; 0052edf4 | DAT_01d6dfbc
    MOV dword ptr [ESP + 0x118],EAX     ; 0052edfb
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052ee02
        ;   Label: LAB_0052ee02
    MOV EDX,dword ptr [0x01d51da0]      ; 0052ee09 | DAT_01d51da0
    MOV dword ptr [ESP + 0x12c],EAX     ; 0052ee0f | DAT_01d6dfbc
    MOV EAX,dword ptr [EAX]             ; 0052ee16 | DAT_01d6dfbc
    SUB EDX,EAX                         ; 0052ee18
    MOV dword ptr [ESP + 0x140],EDX     ; 0052ee1a
    MOV EBX,0x1                         ; 0052ee21
    FILD dword ptr [ESP + 0x140]        ; 0052ee26
    FMUL double ptr [0x005ebed0]        ; 0052ee2d | DAT_005ebed0
    MOV dword ptr [ESP + 0x128],EBX     ; 0052ee33
    FST float ptr [ESP + 0x4]           ; 0052ee3a
    FLDZ                                ; 0052ee3e
    FCOMPP                              ; 0052ee40
    FNSTSW AX                           ; 0052ee42
    SAHF                                ; 0052ee44
    JA 0x0052efc9                       ; 0052ee45
        ;   XREF to: 0052efc9 (CONDITIONAL_JUMP)  ; LAB_0052efc9
    FLD float ptr [ESP + 0x4]           ; 0052ee4b
        ;   Label: LAB_0052ee4b
    FCOMP double ptr [0x005ebee0]       ; 0052ee4f | DAT_005ebee0
    FNSTSW AX                           ; 0052ee55
    SAHF                                ; 0052ee57
    JBE 0x0052ee62                      ; 0052ee58
        ;   XREF to: 0052ee62 (CONDITIONAL_JUMP)  ; LAB_0052ee62
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0052ee5a
    FLD float ptr [ESP + 0x4]           ; 0052ee62
        ;   Label: LAB_0052ee62
    FCOMP double ptr [0x005ebee8]       ; 0052ee66 | DAT_005ebee8
    FNSTSW AX                           ; 0052ee6c
    SAHF                                ; 0052ee6e
    JNC 0x0052ef2a                      ; 0052ee6f
        ;   XREF to: 0052ef2a (CONDITIONAL_JUMP)  ; LAB_0052ef2a
    XOR EAX,EAX                         ; 0052ee75
    MOV dword ptr [ESP + 0x130],EAX     ; 0052ee77
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ee7e
    CMP dword ptr [EAX + 0x1c],0x0      ; 0052ee81
    JLE 0x0052ef2a                      ; 0052ee85
        ;   XREF to: 0052ef2a (CONDITIONAL_JUMP)  ; LAB_0052ef2a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0052ee8b
    ADD EAX,0x14                        ; 0052ee92
    MOV dword ptr [ESP + 0x124],EAX     ; 0052ee95
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0052ee9c
    MOV dword ptr [ESP + 0x138],EAX     ; 0052eea3 | DAT_01d6dfbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052eeaa
    MOV dword ptr [ESP + 0x134],EAX     ; 0052eead
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052eeb4
    ADD EAX,0x1c                        ; 0052eebb
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0052eebe
    MOV dword ptr [ESP + 0x13c],EAX     ; 0052eec5
    MOV EAX,dword ptr [ESP + 0x138]     ; 0052eecc
        ;   Label: LAB_0052eecc
    CMP byte ptr [EAX + 0x8],0x0        ; 0052eed3 | DAT_01d6dfc4 | DAT_01d6dfc5
    JZ 0x0052efd4                       ; 0052eed7
        ;   XREF to: 0052efd4 (CONDITIONAL_JUMP)  ; LAB_0052efd4
    MOV ECX,dword ptr [ESP + 0x138]     ; 0052eedd
        ;   Label: LAB_0052eedd
    MOV ESI,dword ptr [ESP + 0x134]     ; 0052eee4
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0052eeeb
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052eef2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052eef9
    ADD EBX,0x4                         ; 0052eefc
    INC ECX                             ; 0052eeff
    ADD ESI,0x7c                        ; 0052ef00
    ADD EDI,0x7c                        ; 0052ef03
    INC EAX                             ; 0052ef06
    MOV dword ptr [ESP + 0x138],ECX     ; 0052ef07
    MOV dword ptr [ESP + 0x134],ESI     ; 0052ef0e
    MOV dword ptr [ESP + 0x13c],EDI     ; 0052ef15
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0052ef1c
    MOV dword ptr [ESP + 0x130],EAX     ; 0052ef1f
    CMP EAX,ECX                         ; 0052ef26
    JL 0x0052eecc                       ; 0052ef28
        ;   XREF to: 0052eecc (CONDITIONAL_JUMP)  ; LAB_0052eecc
    CMP dword ptr [ESP + 0x128],0x0     ; 0052ef2a
        ;   Label: LAB_0052ef2a
    JZ 0x0052f0d8                       ; 0052ef32
        ;   XREF to: 0052f0d8 (CONDITIONAL_JUMP)  ; LAB_0052f0d8
    MOV EBX,dword ptr [ESP + 0x120]     ; 0052ef38
    TEST EBX,EBX                        ; 0052ef3f
    JL 0x0052ef4b                       ; 0052ef41
        ;   XREF to: 0052ef4b (CONDITIONAL_JUMP)  ; LAB_0052ef4b
    CMP EBX,dword ptr [0x01d6dfb8]      ; 0052ef43 | DAT_01d6dfb8
    JL 0x0052ef6d                       ; 0052ef49
        ;   XREF to: 0052ef6d (CONDITIONAL_JUMP)  ; LAB_0052ef6d
    MOV EAX,0x5eb5f8                    ; 0052ef4b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052ef4b
    MOV EDX,0x107                       ; 0052ef50
    PUSH 0x5eb60c                       ; 0052ef55 | = "removeChatOut - invalid index"
    MOV [0x01d1d400],EAX                ; 0052ef5a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052ef5f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052ef65
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052ef6a
    MOV ECX,dword ptr [0x01d6dfb8]      ; 0052ef6d | DAT_01d6dfb8
        ;   Label: LAB_0052ef6d
    DEC ECX                             ; 0052ef73
    MOV EAX,ECX                         ; 0052ef74
    SUB EAX,EBX                         ; 0052ef76
    IMUL EAX,EAX,0x114                  ; 0052ef78
    PUSH EAX                            ; 0052ef7e
    LEA EAX,[EBX + 0x1]                 ; 0052ef7f
    IMUL EAX,EAX,0x114                  ; 0052ef82
    ADD EAX,0x1d6dfbc                   ; 0052ef88
    PUSH EAX                            ; 0052ef8d
    IMUL EAX,EBX,0x114                  ; 0052ef8e
    ADD EAX,0x1d6dfbc                   ; 0052ef94
    PUSH EAX                            ; 0052ef99
    MOV dword ptr [0x01d6dfb8],ECX      ; 0052ef9a | DAT_01d6dfb8
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0052efa0
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0052efa5
    MOV EAX,dword ptr [ESP + 0x120]     ; 0052efa8
        ;   Label: LAB_0052efa8
    CMP EAX,dword ptr [0x01d6dfb8]      ; 0052efaf | DAT_01d6dfb8
    JL 0x0052ee02                       ; 0052efb5
        ;   XREF to: 0052ee02 (CONDITIONAL_JUMP)  ; LAB_0052ee02
    MOV ESP,EBP                         ; 0052efbb
        ;   Label: LAB_0052efbb
    POP EBP                             ; 0052efbd
    POP EDI                             ; 0052efbe
    POP ESI                             ; 0052efbf
    POP EBX                             ; 0052efc0
    RET                                 ; 0052efc1
    XOR EAX,EAX                         ; 0052efc2
        ;   Label: LAB_0052efc2
    JMP 0x0052edc4                      ; 0052efc4
        ;   XREF to: 0052edc4 (UNCONDITIONAL_JUMP)  ; LAB_0052edc4
    XOR ESI,ESI                         ; 0052efc9
        ;   Label: LAB_0052efc9
    MOV dword ptr [ESP + 0x4],ESI       ; 0052efcb
    JMP 0x0052ee4b                      ; 0052efcf
        ;   XREF to: 0052ee4b (UNCONDITIONAL_JUMP)  ; LAB_0052ee4b
    MOV EAX,dword ptr [ESP + 0x134]     ; 0052efd4
        ;   Label: LAB_0052efd4
    XOR ESI,ESI                         ; 0052efdb
    FLD float ptr [EAX + 0x48]          ; 0052efdd
    FMUL double ptr [0x005ebed8]        ; 0052efe0 | DAT_005ebed8
    MOV dword ptr [ESP + 0x128],ESI     ; 0052efe6
    FST float ptr [ESP + 0x8]           ; 0052efed
    FCOMP double ptr [0x005ebef0]       ; 0052eff1 | DAT_005ebef0
    FNSTSW AX                           ; 0052eff7
    SAHF                                ; 0052eff9
    JNC 0x0052f004                      ; 0052effa
        ;   XREF to: 0052f004 (CONDITIONAL_JUMP)  ; LAB_0052f004
    MOV dword ptr [ESP + 0x8],0x40000000 ; 0052effc
    FLD float ptr [ESP + 0x8]           ; 0052f004
        ;   Label: LAB_0052f004
    FCOMP double ptr [0x005ebef8]       ; 0052f008 | DAT_005ebef8
    FNSTSW AX                           ; 0052f00e
    SAHF                                ; 0052f010
    JBE 0x0052f01b                      ; 0052f011
        ;   XREF to: 0052f01b (CONDITIONAL_JUMP)  ; LAB_0052f01b
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 0052f013
    MOV EDX,dword ptr [0x01d51da0]      ; 0052f01b | DAT_01d51da0
        ;   Label: LAB_0052f01b
    MOV EAX,dword ptr [EBX + 0xc]       ; 0052f021 | DAT_01d6dfcc
    SUB EDX,EAX                         ; 0052f024
    MOV dword ptr [ESP + 0x140],EDX     ; 0052f026
    FILD dword ptr [ESP + 0x140]        ; 0052f02d
    FMUL double ptr [0x005ebed0]        ; 0052f034 | DAT_005ebed0
    FST float ptr [ESP]                 ; 0052f03a
    FLDZ                                ; 0052f03d
    FCOMPP                              ; 0052f03f
    FNSTSW AX                           ; 0052f041
    SAHF                                ; 0052f043
    JBE 0x0052f04b                      ; 0052f044
        ;   XREF to: 0052f04b (CONDITIONAL_JUMP)  ; LAB_0052f04b
    XOR EDX,EDX                         ; 0052f046
    MOV dword ptr [ESP],EDX             ; 0052f048
    FLD float ptr [ESP]                 ; 0052f04b
        ;   Label: LAB_0052f04b
    FCOMP double ptr [0x005ebee0]       ; 0052f04e | DAT_005ebee0
    FNSTSW AX                           ; 0052f054
    SAHF                                ; 0052f056
    JBE 0x0052f060                      ; 0052f057
        ;   XREF to: 0052f060 (CONDITIONAL_JUMP)  ; LAB_0052f060
    MOV dword ptr [ESP],0x41f00000      ; 0052f059
    FLD float ptr [ESP]                 ; 0052f060
        ;   Label: LAB_0052f060
    FCOMP float ptr [ESP + 0x8]         ; 0052f063
    FNSTSW AX                           ; 0052f067
    SAHF                                ; 0052f069
    JBE 0x0052eedd                      ; 0052f06a
        ;   XREF to: 0052eedd (CONDITIONAL_JUMP)  ; LAB_0052eedd
    MOV ESI,0x109                       ; 0052f070
    MOV DH,0x6                          ; 0052f075
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0052f077
    MOV dword ptr [ESP + 0xc],ESI       ; 0052f07e
    MOV byte ptr [ESP + 0x10],DH        ; 0052f082
    LEA EDI,[ESP + 0x15]                ; 0052f086
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052f08a | DAT_01d6dfc0
    MOV ESI,dword ptr [ESP + 0x124]     ; 0052f08d
    MOV dword ptr [ESP + 0x11],EAX      ; 0052f094
    PUSH EDI                            ; 0052f098
    MOV AL,byte ptr [ESI]               ; 0052f099 | DAT_01d6dfd0 | DAT_01d6dfd2
        ;   Label: LAB_0052f099
    MOV byte ptr [EDI],AL               ; 0052f09b
    CMP AL,0x0                          ; 0052f09d
    JZ 0x0052f0b1                       ; 0052f09f
        ;   XREF to: 0052f0b1 (CONDITIONAL_JUMP)  ; LAB_0052f0b1
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f0a1 | DAT_01d6dfd1 | DAT_01d6dfd3
    ADD ESI,0x2                         ; 0052f0a4
    MOV byte ptr [EDI + 0x1],AL         ; 0052f0a7
    ADD EDI,0x2                         ; 0052f0aa
    CMP AL,0x0                          ; 0052f0ad
    JNZ 0x0052f099                      ; 0052f0af
        ;   XREF to: 0052f099 (CONDITIONAL_JUMP)  ; LAB_0052f099
    POP EDI                             ; 0052f0b1
        ;   Label: LAB_0052f0b1
    LEA EAX,[ESP + 0xc]                 ; 0052f0b2
    PUSH EAX                            ; 0052f0b6
    MOV EDI,dword ptr [ESP + 0x140]     ; 0052f0b7
    PUSH EDI                            ; 0052f0be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052f0bf
    PUSH EAX                            ; 0052f0c2
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0 ; 0052f0c3
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    MOV EAX,[0x01d51da0]                ; 0052f0c8 | DAT_01d51da0
    ADD ESP,0xc                         ; 0052f0cd
    MOV dword ptr [EBX + 0xc],EAX       ; 0052f0d0 | DAT_01d6dfcc
    JMP 0x0052eedd                      ; 0052f0d3
        ;   XREF to: 0052eedd (UNCONDITIONAL_JUMP)  ; LAB_0052eedd
    MOV EBX,dword ptr [ESP + 0x120]     ; 0052f0d8
        ;   Label: LAB_0052f0d8
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0052f0df
    INC EBX                             ; 0052f0e6
    ADD ECX,0x114                       ; 0052f0e7
    MOV dword ptr [ESP + 0x120],EBX     ; 0052f0ed
    MOV dword ptr [ESP + 0x11c],ECX     ; 0052f0f4
    JMP 0x0052efa8                      ; 0052f0fb
        ;   XREF to: 0052efa8 (UNCONDITIONAL_JUMP)  ; LAB_0052efa8

