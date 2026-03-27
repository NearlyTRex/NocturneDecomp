; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x158]:4  local_158
; float            Stack[-0x154]:4  local_154
; float            Stack[-0x150]:4  local_150
; SNetPacket_Simple Stack[-0x14c]:9  local_14c
; char[259]        Stack[-0x143]:259  local_143
; SNetPlayer *     Stack[-0x40]:4  local_40
; SChatOutMessage * Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; char *           Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; SChatOutMessage * Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; CNetGame *       Stack[-0x24]:4  local_24
; SChatOutMessage * Stack[-0x20]:4  local_20
; SNetworkAddr *   Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 at 00540645
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d245
;   TerminatedCString s_removeChatOut_invalid_in_0063d259
;   double DOUBLE_0063db1d = 0.0000152587890625
;   double DOUBLE_0063db25 = 4
;   double DOUBLE_0063db2d = 30
;   double DOUBLE_0063db35 = 20
;   double DOUBLE_0063db3d = 2
;   double DOUBLE_0063db45 = 5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   int g_ChatOutCount
;   SChatOutMessage[50] g_ChatOutMessages
;   undefined4 g_ChatOutMessages[0].timestamp+1
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_sendPacket_FUN_00541230
;   crt_string.c_memmove_FUN_005fe5e0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541ff0
        ;   Label: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
    PUSH ESI                            ; 00541ff1
    PUSH EDI                            ; 00541ff2
    PUSH EBP                            ; 00541ff3
    MOV EBP,ESP                         ; 00541ff4
    SUB ESP,0x144                       ; 00541ff6
    AND ESP,0xfffffff8                  ; 00541ffc
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00541fff
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00542004
    MOV EBX,0x12                        ; 00542006
    SAR EDX,0x1f                        ; 0054200b
    IDIV EBX                            ; 0054200e
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00542010 | g_LastPingTime
    MOV EDX,EAX                         ; 00542016
    SUB EAX,ECX                         ; 00542018
    MOV dword ptr [0x02f7c8b4],EDX      ; 0054201a | g_LastPingTime
    TEST EAX,EAX                        ; 00542020
    JL 0x00542232                       ; 00542022
        ;   XREF to: 00542232 (CONDITIONAL_JUMP)  ; LAB_00542232
    CMP EAX,0x20000                     ; 00542028
    JLE 0x00542034                      ; 0054202d
        ;   XREF to: 00542034 (CONDITIONAL_JUMP)  ; LAB_00542034
    MOV EAX,0x20000                     ; 0054202f
    MOV EBX,dword ptr [0x02f7c8b8]      ; 00542034 | g_CurrentGameTime
        ;   Label: LAB_00542034
    MOV EDI,dword ptr [0x02f98ad0]      ; 0054203a | g_ChatOutCount
    XOR ESI,ESI                         ; 00542040
    ADD EBX,EAX                         ; 00542042
    MOV dword ptr [ESP + 0x120],ESI     ; 00542044
    MOV dword ptr [0x02f7c8b8],EBX      ; 0054204b | g_CurrentGameTime
    TEST EDI,EDI                        ; 00542051
    JLE 0x0054222b                      ; 00542053
        ;   XREF to: 0054222b (CONDITIONAL_JUMP)  ; LAB_0054222b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542059
    MOV ECX,0x2f98ad4                   ; 0054205c | g_ChatOutMessages
    ADD EAX,0x20                        ; 00542061
    MOV dword ptr [ESP + 0x11c],ECX     ; 00542064 | g_ChatOutMessages
    MOV dword ptr [ESP + 0x118],EAX     ; 0054206b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00542072
        ;   Label: LAB_00542072
    MOV EDX,dword ptr [0x02f7c8b8]      ; 00542079 | g_CurrentGameTime
    MOV dword ptr [ESP + 0x12c],EAX     ; 0054207f | g_ChatOutMessages
    MOV EAX,dword ptr [EAX]             ; 00542086 | g_ChatOutMessages
    SUB EDX,EAX                         ; 00542088
    MOV dword ptr [ESP + 0x140],EDX     ; 0054208a
    MOV EBX,0x1                         ; 00542091
    FILD dword ptr [ESP + 0x140]        ; 00542096
    FMUL double ptr [0x0063db1d]        ; 0054209d | DOUBLE_0063db1d
    MOV dword ptr [ESP + 0x128],EBX     ; 005420a3
    FST float ptr [ESP + 0x4]           ; 005420aa
    FLDZ                                ; 005420ae
    FCOMPP                              ; 005420b0
    FNSTSW AX                           ; 005420b2
    SAHF                                ; 005420b4
    JA 0x00542239                       ; 005420b5
        ;   XREF to: 00542239 (CONDITIONAL_JUMP)  ; LAB_00542239
    FLD float ptr [ESP + 0x4]           ; 005420bb
        ;   Label: LAB_005420bb
    FCOMP double ptr [0x0063db2d]       ; 005420bf | DOUBLE_0063db2d
    FNSTSW AX                           ; 005420c5
    SAHF                                ; 005420c7
    JBE 0x005420d2                      ; 005420c8
        ;   XREF to: 005420d2 (CONDITIONAL_JUMP)  ; LAB_005420d2
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 005420ca
    FLD float ptr [ESP + 0x4]           ; 005420d2
        ;   Label: LAB_005420d2
    FCOMP double ptr [0x0063db35]       ; 005420d6 | DOUBLE_0063db35
    FNSTSW AX                           ; 005420dc
    SAHF                                ; 005420de
    JNC 0x0054219a                      ; 005420df
        ;   XREF to: 0054219a (CONDITIONAL_JUMP)  ; LAB_0054219a
    XOR EAX,EAX                         ; 005420e5
    MOV dword ptr [ESP + 0x130],EAX     ; 005420e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005420ee
    CMP dword ptr [EAX + 0x1c],0x0      ; 005420f1
    JLE 0x0054219a                      ; 005420f5
        ;   XREF to: 0054219a (CONDITIONAL_JUMP)  ; LAB_0054219a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005420fb
    ADD EAX,0x14                        ; 00542102
    MOV dword ptr [ESP + 0x124],EAX     ; 00542105 | g_ChatOutMessages[0].message[0]
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0054210c
    MOV dword ptr [ESP + 0x138],EAX     ; 00542113 | g_ChatOutMessages
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054211a
    MOV dword ptr [ESP + 0x134],EAX     ; 0054211d
    MOV EAX,dword ptr [ESP + 0x118]     ; 00542124
    ADD EAX,0x1c                        ; 0054212b
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0054212e | g_ChatOutMessages
    MOV dword ptr [ESP + 0x13c],EAX     ; 00542135
    MOV EAX,dword ptr [ESP + 0x138]     ; 0054213c
        ;   Label: LAB_0054213c
    CMP byte ptr [EAX + 0x8],0x0        ; 00542143 | g_ChatOutMessages[0].ack_flags | g_ChatOutMessages[0].ack_flags+1
    JZ 0x00542244                       ; 00542147
        ;   XREF to: 00542244 (CONDITIONAL_JUMP)  ; LAB_00542244
    MOV ECX,dword ptr [ESP + 0x138]     ; 0054214d
        ;   Label: LAB_0054214d
    MOV ESI,dword ptr [ESP + 0x134]     ; 00542154
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0054215b
    MOV EAX,dword ptr [ESP + 0x130]     ; 00542162
    MOV EDX,dword ptr [EBP + 0x14]      ; 00542169
    ADD EBX,0x4                         ; 0054216c | g_ChatOutMessages[0].sequence_number
    INC ECX                             ; 0054216f
    ADD ESI,0x78                        ; 00542170
    ADD EDI,0x78                        ; 00542173
    INC EAX                             ; 00542176
    MOV dword ptr [ESP + 0x138],ECX     ; 00542177 | g_ChatOutMessages[0].timestamp+1 | g_ChatOutMessages[0].timestamp+2
    MOV dword ptr [ESP + 0x134],ESI     ; 0054217e
    MOV dword ptr [ESP + 0x13c],EDI     ; 00542185
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0054218c
    MOV dword ptr [ESP + 0x130],EAX     ; 0054218f
    CMP EAX,ECX                         ; 00542196
    JL 0x0054213c                       ; 00542198
        ;   XREF to: 0054213c (CONDITIONAL_JUMP)  ; LAB_0054213c
    CMP dword ptr [ESP + 0x128],0x0     ; 0054219a
        ;   Label: LAB_0054219a
    JZ 0x00542348                       ; 005421a2
        ;   XREF to: 00542348 (CONDITIONAL_JUMP)  ; LAB_00542348
    MOV EBX,dword ptr [ESP + 0x120]     ; 005421a8
    TEST EBX,EBX                        ; 005421af
    JL 0x005421bb                       ; 005421b1
        ;   XREF to: 005421bb (CONDITIONAL_JUMP)  ; LAB_005421bb
    CMP EBX,dword ptr [0x02f98ad0]      ; 005421b3 | g_ChatOutCount
    JL 0x005421dd                       ; 005421b9
        ;   XREF to: 005421dd (CONDITIONAL_JUMP)  ; LAB_005421dd
    MOV EAX,0x63d245                    ; 005421bb | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005421bb
    MOV EDX,0x107                       ; 005421c0
    PUSH 0x63d259                       ; 005421c5 | = "removeChatOut - invalid index"
    MOV [0x02f0ca48],EAX                ; 005421ca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005421cf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005421d5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005421da
    MOV ECX,dword ptr [0x02f98ad0]      ; 005421dd | g_ChatOutCount
        ;   Label: LAB_005421dd
    DEC ECX                             ; 005421e3
    MOV EAX,ECX                         ; 005421e4
    SUB EAX,EBX                         ; 005421e6
    IMUL EAX,EAX,0x114                  ; 005421e8
    PUSH EAX                            ; 005421ee
    LEA EAX,[EBX + 0x1]                 ; 005421ef
    IMUL EAX,EAX,0x114                  ; 005421f2
    ADD EAX,0x2f98ad4                   ; 005421f8 | g_ChatOutMessages
    PUSH EAX                            ; 005421fd
    IMUL EAX,EBX,0x114                  ; 005421fe
    ADD EAX,0x2f98ad4                   ; 00542204 | g_ChatOutMessages
    PUSH EAX                            ; 00542209
    MOV dword ptr [0x02f98ad0],ECX      ; 0054220a | g_ChatOutCount
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00542210
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00542215
    MOV EAX,dword ptr [ESP + 0x120]     ; 00542218
        ;   Label: LAB_00542218
    CMP EAX,dword ptr [0x02f98ad0]      ; 0054221f | g_ChatOutCount
    JL 0x00542072                       ; 00542225
        ;   XREF to: 00542072 (CONDITIONAL_JUMP)  ; LAB_00542072
    MOV ESP,EBP                         ; 0054222b
        ;   Label: LAB_0054222b
    POP EBP                             ; 0054222d
    POP EDI                             ; 0054222e
    POP ESI                             ; 0054222f
    POP EBX                             ; 00542230
    RET                                 ; 00542231
    XOR EAX,EAX                         ; 00542232
        ;   Label: LAB_00542232
    JMP 0x00542034                      ; 00542234
        ;   XREF to: 00542034 (UNCONDITIONAL_JUMP)  ; LAB_00542034
    XOR ESI,ESI                         ; 00542239
        ;   Label: LAB_00542239
    MOV dword ptr [ESP + 0x4],ESI       ; 0054223b
    JMP 0x005420bb                      ; 0054223f
        ;   XREF to: 005420bb (UNCONDITIONAL_JUMP)  ; LAB_005420bb
    MOV EAX,dword ptr [ESP + 0x134]     ; 00542244
        ;   Label: LAB_00542244
    XOR ESI,ESI                         ; 0054224b
    FLD float ptr [EAX + 0x48]          ; 0054224d
    FMUL double ptr [0x0063db25]        ; 00542250 | DOUBLE_0063db25
    MOV dword ptr [ESP + 0x128],ESI     ; 00542256
    FST float ptr [ESP + 0x8]           ; 0054225d
    FCOMP double ptr [0x0063db3d]       ; 00542261 | DOUBLE_0063db3d
    FNSTSW AX                           ; 00542267
    SAHF                                ; 00542269
    JNC 0x00542274                      ; 0054226a
        ;   XREF to: 00542274 (CONDITIONAL_JUMP)  ; LAB_00542274
    MOV dword ptr [ESP + 0x8],0x40000000 ; 0054226c
    FLD float ptr [ESP + 0x8]           ; 00542274
        ;   Label: LAB_00542274
    FCOMP double ptr [0x0063db45]       ; 00542278 | DOUBLE_0063db45
    FNSTSW AX                           ; 0054227e
    SAHF                                ; 00542280
    JBE 0x0054228b                      ; 00542281
        ;   XREF to: 0054228b (CONDITIONAL_JUMP)  ; LAB_0054228b
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 00542283
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0054228b | g_CurrentGameTime
        ;   Label: LAB_0054228b
    MOV EAX,dword ptr [EBX + 0xc]       ; 00542291 | g_ChatOutMessages[0].player_timestamps[0] | g_ChatOutMessages[0].player_timestamps[1]
    SUB EDX,EAX                         ; 00542294
    MOV dword ptr [ESP + 0x140],EDX     ; 00542296
    FILD dword ptr [ESP + 0x140]        ; 0054229d
    FMUL double ptr [0x0063db1d]        ; 005422a4 | DOUBLE_0063db1d
    FST float ptr [ESP]                 ; 005422aa
    FLDZ                                ; 005422ad
    FCOMPP                              ; 005422af
    FNSTSW AX                           ; 005422b1
    SAHF                                ; 005422b3
    JBE 0x005422bb                      ; 005422b4
        ;   XREF to: 005422bb (CONDITIONAL_JUMP)  ; LAB_005422bb
    XOR EDX,EDX                         ; 005422b6
    MOV dword ptr [ESP],EDX             ; 005422b8
    FLD float ptr [ESP]                 ; 005422bb
        ;   Label: LAB_005422bb
    FCOMP double ptr [0x0063db2d]       ; 005422be | DOUBLE_0063db2d
    FNSTSW AX                           ; 005422c4
    SAHF                                ; 005422c6
    JBE 0x005422d0                      ; 005422c7
        ;   XREF to: 005422d0 (CONDITIONAL_JUMP)  ; LAB_005422d0
    MOV dword ptr [ESP],0x41f00000      ; 005422c9
    FLD float ptr [ESP]                 ; 005422d0
        ;   Label: LAB_005422d0
    FCOMP float ptr [ESP + 0x8]         ; 005422d3
    FNSTSW AX                           ; 005422d7
    SAHF                                ; 005422d9
    JBE 0x0054214d                      ; 005422da
        ;   XREF to: 0054214d (CONDITIONAL_JUMP)  ; LAB_0054214d
    MOV ESI,0x109                       ; 005422e0
    MOV DH,0x6                          ; 005422e5
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005422e7
    MOV dword ptr [ESP + 0xc],ESI       ; 005422ee
    MOV byte ptr [ESP + 0x10],DH        ; 005422f2
    LEA EDI,[ESP + 0x15]                ; 005422f6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005422fa | g_ChatOutMessages[0].sequence_number
    MOV ESI,dword ptr [ESP + 0x124]     ; 005422fd
    MOV dword ptr [ESP + 0x11],EAX      ; 00542304
    PUSH EDI                            ; 00542308
    MOV AL,byte ptr [ESI]               ; 00542309 | g_ChatOutMessages[0].message[0] | g_ChatOutMessages[0].message[2]
        ;   Label: LAB_00542309
    MOV byte ptr [EDI],AL               ; 0054230b
    CMP AL,0x0                          ; 0054230d
    JZ 0x00542321                       ; 0054230f
        ;   XREF to: 00542321 (CONDITIONAL_JUMP)  ; LAB_00542321
    MOV AL,byte ptr [ESI + 0x1]         ; 00542311 | g_ChatOutMessages[0].message[1] | g_ChatOutMessages[0].message[3]
    ADD ESI,0x2                         ; 00542314
    MOV byte ptr [EDI + 0x1],AL         ; 00542317
    ADD EDI,0x2                         ; 0054231a
    CMP AL,0x0                          ; 0054231d
    JNZ 0x00542309                      ; 0054231f
        ;   XREF to: 00542309 (CONDITIONAL_JUMP)  ; LAB_00542309
    POP EDI                             ; 00542321
        ;   Label: LAB_00542321
    LEA EAX,[ESP + 0xc]                 ; 00542322
    PUSH EAX                            ; 00542326
    MOV EDI,dword ptr [ESP + 0x140]     ; 00542327
    PUSH EDI                            ; 0054232e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054232f
    PUSH EAX                            ; 00542332
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 00542333
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    MOV EAX,[0x02f7c8b8]                ; 00542338 | g_CurrentGameTime
    ADD ESP,0xc                         ; 0054233d
    MOV dword ptr [EBX + 0xc],EAX       ; 00542340 | g_ChatOutMessages[0].player_timestamps[0] | g_ChatOutMessages[0].player_timestamps[1]
    JMP 0x0054214d                      ; 00542343
        ;   XREF to: 0054214d (UNCONDITIONAL_JUMP)  ; LAB_0054214d
    MOV EBX,dword ptr [ESP + 0x120]     ; 00542348
        ;   Label: LAB_00542348
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0054234f
    INC EBX                             ; 00542356
    ADD ECX,0x114                       ; 00542357
    MOV dword ptr [ESP + 0x120],EBX     ; 0054235d
    MOV dword ptr [ESP + 0x11c],ECX     ; 00542364 | g_ChatOutMessages[1].timestamp
    JMP 0x00542218                      ; 0054236b
        ;   XREF to: 00542218 (UNCONDITIONAL_JUMP)  ; LAB_00542218

