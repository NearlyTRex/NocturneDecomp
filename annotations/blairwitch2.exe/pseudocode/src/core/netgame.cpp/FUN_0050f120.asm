; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_0050f120(CNetGame *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b51f9
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e1060
;   TerminatedCString s_CNetGame_processClientFr_005e1074
;   undefined4 DAT_005e10ad
;   undefined4 DAT_005e10b5
;   undefined4 DAT_005e10bd
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e48
;   undefined4 DAT_01d54640
;   undefined4 DAT_01d546b8
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0
;   core_netgame.cpp_CNetGame_updatePing_FUN_0050d840
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f120
        ;   Label: core_netgame.cpp_FUN_0050f120
    PUSH ESI                            ; 0050f121
    PUSH EDI                            ; 0050f122
    PUSH EBP                            ; 0050f123
    MOV EBP,ESP                         ; 0050f124
    SUB ESP,0x10                        ; 0050f126
    AND ESP,0xfffffff8                  ; 0050f129
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050f12c
    CMP dword ptr [ESI],0x2             ; 0050f12f
    JNZ 0x0050f296                      ; 0050f132
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    CMP dword ptr [ESI + 0x4],0x3       ; 0050f138
    JNZ 0x0050f296                      ; 0050f13c
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    CMP dword ptr [ESI + 0x120],0x0     ; 0050f142
    JL 0x0050f296                       ; 0050f149
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    CMP dword ptr [ESI + 0x124],0x0     ; 0050f14f
    JL 0x0050f29d                       ; 0050f156
        ;   XREF to: 0050f29d (CONDITIONAL_JUMP)  ; LAB_0050f29d
    MOV ECX,dword ptr [ESI + 0x120]     ; 0050f15c
        ;   Label: LAB_0050f15c
    PUSH 0x41200000                     ; 0050f162
    PUSH ECX                            ; 0050f167
    PUSH ESI                            ; 0050f168
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_0050d840 ; 0050f169
        ;   XREF to: 0050d840 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_0050d840(CNetGame * this_ptr, int player_index, float max_ping)
    ADD ESP,0xc                         ; 0050f16e
    PUSH ESI                            ; 0050f171
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050f172
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 0050f177
    ADD ESP,0x4                         ; 0050f179
    CMP EBX,0x2                         ; 0050f17c
    JNZ 0x0050f296                      ; 0050f17f
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    MOV EBX,dword ptr [ESI + 0x124]     ; 0050f185
        ;   Label: LAB_0050f185
    MOV EDI,dword ptr [0x01d54640]      ; 0050f18b | DAT_01d54640
    SHL EBX,0x7                         ; 0050f191
    XOR EDX,EDX                         ; 0050f194
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x68] ; 0050f196
    TEST EDI,EDI                        ; 0050f19a
    JLE 0x0050f2d0                      ; 0050f19c
        ;   XREF to: 0050f2d0 (CONDITIONAL_JUMP)  ; LAB_0050f2d0
    XOR EAX,EAX                         ; 0050f1a2
    IMUL ECX,EDI,0x74                   ; 0050f1a4
    MOV EDI,dword ptr [EAX + 0x1d54644] ; 0050f1a7 | DAT_01d546b8
        ;   Label: LAB_0050f1a7
    CMP EBX,EDI                         ; 0050f1ad
    JNZ 0x0050f2c4                      ; 0050f1af
        ;   XREF to: 0050f2c4 (CONDITIONAL_JUMP)  ; LAB_0050f2c4
    TEST EDX,EDX                        ; 0050f1b5
    JL 0x0050f2d0                       ; 0050f1b7
        ;   XREF to: 0050f2d0 (CONDITIONAL_JUMP)  ; LAB_0050f2d0
    ADD EAX,0x1d54644                   ; 0050f1bd
    PUSH EAX                            ; 0050f1c2 | DAT_01d546b8
    PUSH ESI                            ; 0050f1c3
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370 ; 0050f1c4
        ;   XREF to: 0050f370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 0050f1c9
    PUSH ESI                            ; 0050f1cc
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0 ; 0050f1cd
        ;   XREF to: 0050f4f0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI + 0x124]     ; 0050f1d2
    XOR EBX,EDI                         ; 0050f1d8
    SHL EAX,0x7                         ; 0050f1da
    ADD ESP,0x4                         ; 0050f1dd
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68] ; 0050f1e0
    MOV EDI,dword ptr [0x01d54640]      ; 0050f1e4 | DAT_01d54640
    MOV dword ptr [ESP + 0x4],EAX       ; 0050f1ea
    TEST EDI,EDI                        ; 0050f1ee
    JLE 0x0050f242                      ; 0050f1f0
        ;   XREF to: 0050f242 (CONDITIONAL_JUMP)  ; LAB_0050f242
    MOV EAX,0x1d54644                   ; 0050f1f2
    ADD EAX,0x74                        ; 0050f1f7
    XOR EDI,EDI                         ; 0050f1fa
    MOV dword ptr [ESP + 0x8],EAX       ; 0050f1fc | DAT_01d546b8
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050f200
        ;   Label: LAB_0050f200
    CMP ECX,dword ptr [EDI + 0x1d54644] ; 0050f204
    JLE 0x0050f341                      ; 0050f20a
        ;   XREF to: 0050f341 (CONDITIONAL_JUMP)  ; LAB_0050f341
    MOV EDX,dword ptr [0x01d54640]      ; 0050f210 | DAT_01d54640
    DEC EDX                             ; 0050f216
    MOV EAX,EDX                         ; 0050f217
    SUB EAX,EBX                         ; 0050f219
    IMUL EAX,EAX,0x74                   ; 0050f21b
    PUSH EAX                            ; 0050f21e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050f21f
    MOV EAX,0x1d54644                   ; 0050f223
    PUSH ECX                            ; 0050f228 | DAT_01d546b8
    ADD EAX,EDI                         ; 0050f229
    PUSH EAX                            ; 0050f22b
    MOV dword ptr [0x01d54640],EDX      ; 0050f22c | DAT_01d54640
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0050f232
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050f237
    CMP EBX,dword ptr [0x01d54640]      ; 0050f23a | DAT_01d54640
        ;   Label: LAB_0050f23a
    JL 0x0050f200                       ; 0050f240
        ;   XREF to: 0050f200 (CONDITIONAL_JUMP)  ; LAB_0050f200
    MOV EDX,dword ptr [0x01d54640]      ; 0050f242 | DAT_01d54640
        ;   Label: LAB_0050f242
    MOV ECX,dword ptr [ESI + 0x124]     ; 0050f248
    MOV dword ptr [ESI + 0x178],0x0     ; 0050f24e
    SHL ECX,0x7                         ; 0050f258
    XOR EDI,EDI                         ; 0050f25b
    MOV ECX,dword ptr [ECX + ESI*0x1 + 0x68] ; 0050f25d
    TEST EDX,EDX                        ; 0050f261
    JLE 0x0050f296                      ; 0050f263
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    MOV dword ptr [ESP + 0xc],EDX       ; 0050f265
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f269
    SHL EDX,0x3                         ; 0050f26d
    SUB EDX,EBX                         ; 0050f270
    SHL EDX,0x2                         ; 0050f272
    ADD EDX,EBX                         ; 0050f275
    XOR EAX,EAX                         ; 0050f277
    SHL EDX,0x2                         ; 0050f279
    CMP ECX,dword ptr [EAX + 0x1d54644] ; 0050f27c | DAT_01d546b8
        ;   Label: LAB_0050f27c
    JNZ 0x0050f355                      ; 0050f282
        ;   XREF to: 0050f355 (CONDITIONAL_JUMP)  ; LAB_0050f355
    TEST EDI,EDI                        ; 0050f288
    JL 0x0050f296                       ; 0050f28a
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    MOV dword ptr [ESI + 0x178],0x1     ; 0050f28c
    MOV ESP,EBP                         ; 0050f296
        ;   Label: LAB_0050f296
    POP EBP                             ; 0050f298
    POP EDI                             ; 0050f299
    POP ESI                             ; 0050f29a
    POP EBX                             ; 0050f29b
    RET                                 ; 0050f29c
    MOV EAX,0x5e1060                    ; 0050f29d | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f29d
    MOV EDX,0x97c                       ; 0050f2a2
    PUSH 0x5e1074                       ; 0050f2a7 | = "CNetGame::processClientFrame - I'm no..."
    MOV [0x01d046a0],EAX                ; 0050f2ac | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050f2b1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f2b7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f2bc
    JMP 0x0050f15c                      ; 0050f2bf
        ;   XREF to: 0050f15c (UNCONDITIONAL_JUMP)  ; LAB_0050f15c
    ADD EAX,0x74                        ; 0050f2c4
        ;   Label: LAB_0050f2c4
    INC EDX                             ; 0050f2c7
    CMP EAX,ECX                         ; 0050f2c8
    JL 0x0050f1a7                       ; 0050f2ca
        ;   XREF to: 0050f1a7 (CONDITIONAL_JUMP)  ; LAB_0050f1a7
    PUSH ESI                            ; 0050f2d0
        ;   Label: LAB_0050f2d0
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050f2d1
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 0050f2d6
    ADD ESP,0x4                         ; 0050f2d8
    CMP EAX,0x2                         ; 0050f2db
    JNZ 0x0050f296                      ; 0050f2de
        ;   XREF to: 0050f296 (CONDITIONAL_JUMP)  ; LAB_0050f296
    MOV EAX,[0x01d34e48]                ; 0050f2e0 | DAT_01d34e48
    MOV EDX,dword ptr [0x01d34e38]      ; 0050f2e5 | DAT_01d34e38
    SUB EDX,EAX                         ; 0050f2eb
    MOV dword ptr [ESP + 0xc],EDX       ; 0050f2ed
    FILD dword ptr [ESP + 0xc]          ; 0050f2f1
    FMUL double ptr [0x005e10ad]        ; 0050f2f5 | DAT_005e10ad
    FST float ptr [ESP]                 ; 0050f2fb
    FLDZ                                ; 0050f2fe
    FCOMPP                              ; 0050f300
    FNSTSW AX                           ; 0050f302
    SAHF                                ; 0050f304
    JBE 0x0050f30c                      ; 0050f305
        ;   XREF to: 0050f30c (CONDITIONAL_JUMP)  ; LAB_0050f30c
    XOR EDX,EDX                         ; 0050f307
    MOV dword ptr [ESP],EDX             ; 0050f309
    FLD float ptr [ESP]                 ; 0050f30c
        ;   Label: LAB_0050f30c
    FCOMP double ptr [0x005e10b5]       ; 0050f30f | DAT_005e10b5
    FNSTSW AX                           ; 0050f315
    SAHF                                ; 0050f317
    JBE 0x0050f321                      ; 0050f318
        ;   XREF to: 0050f321 (CONDITIONAL_JUMP)  ; LAB_0050f321
    MOV dword ptr [ESP],0x41f00000      ; 0050f31a
    FLD float ptr [ESP]                 ; 0050f321
        ;   Label: LAB_0050f321
    FCOMP double ptr [0x005e10bd]       ; 0050f324 | DAT_005e10bd
    FNSTSW AX                           ; 0050f32a
    SAHF                                ; 0050f32c
    JBE 0x0050f185                      ; 0050f32d
        ;   XREF to: 0050f185 (CONDITIONAL_JUMP)  ; LAB_0050f185
    PUSH ESI                            ; 0050f333
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0 ; 0050f334
        ;   XREF to: 0050f4f0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050f339
    JMP 0x0050f185                      ; 0050f33c
        ;   XREF to: 0050f185 (UNCONDITIONAL_JUMP)  ; LAB_0050f185
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050f341
        ;   Label: LAB_0050f341
    INC EBX                             ; 0050f345
    ADD EAX,0x74                        ; 0050f346
    ADD EDI,0x74                        ; 0050f349
    MOV dword ptr [ESP + 0x8],EAX       ; 0050f34c
    JMP 0x0050f23a                      ; 0050f350
        ;   XREF to: 0050f23a (UNCONDITIONAL_JUMP)  ; LAB_0050f23a
    ADD EAX,0x74                        ; 0050f355
        ;   Label: LAB_0050f355
    INC EDI                             ; 0050f358
    CMP EAX,EDX                         ; 0050f359
    JL 0x0050f27c                       ; 0050f35b
        ;   XREF to: 0050f27c (CONDITIONAL_JUMP)  ; LAB_0050f27c
    MOV ESP,EBP                         ; 0050f361
    POP EBP                             ; 0050f363
    POP EDI                             ; 0050f364
    POP ESI                             ; 0050f365
    POP EBX                             ; 0050f366
    RET                                 ; 0050f367

