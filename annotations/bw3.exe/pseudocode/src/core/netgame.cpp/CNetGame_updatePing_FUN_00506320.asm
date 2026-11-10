; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00506320(CNetGame *this_ptr,int player_index,float max_ping)
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
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00 at 00507c49
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 at 0050784e
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 005061c2
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 at 00504b4f
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cac29
;   TerminatedCString s_CNetGame_updatePing_inva_005cac3d
;   undefined4 DAT_005cac69
;   undefined4 DAT_005cac71
;   undefined4 DAT_005cac79
;   undefined4 DAT_005cac81
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_send_FUN_00505870
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506320
        ;   Label: core_netgame.cpp_CNetGame_updatePing_FUN_00506320
    PUSH ESI                            ; 00506321
    PUSH EDI                            ; 00506322
    PUSH EBP                            ; 00506323
    MOV EBP,ESP                         ; 00506324
    SUB ESP,0x1c                        ; 00506326
    AND ESP,0xfffffff8                  ; 00506329
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050632c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050632f
    TEST EBX,EBX                        ; 00506332
    JL 0x0050633b                       ; 00506334
        ;   XREF to: 0050633b (CONDITIONAL_JUMP)  ; LAB_0050633b
    CMP EBX,dword ptr [ESI + 0x1c]      ; 00506336
    JL 0x0050635e                       ; 00506339
        ;   XREF to: 0050635e (CONDITIONAL_JUMP)  ; LAB_0050635e
    MOV ECX,0x5cac29                    ; 0050633b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050633b
    MOV EDI,0x735                       ; 00506340
    PUSH 0x5cac3d                       ; 00506345 | = "CNetGame::updatePing - invalid player..."
    MOV dword ptr [0x01d71de0],ECX      ; 0050634a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00506350 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00506356
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050635b
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0050635e
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_0050635e
    MOV EDX,EAX                         ; 00506363
    MOV ECX,0x12                        ; 00506365
    SAR EDX,0x1f                        ; 0050636a
    IDIV ECX                            ; 0050636d
    MOV ECX,dword ptr [0x01da6474]      ; 0050636f | DAT_01da6474
    MOV EDX,EAX                         ; 00506375
    SUB EAX,ECX                         ; 00506377
    MOV dword ptr [0x01da6474],EDX      ; 00506379 | DAT_01da6474
    TEST EAX,EAX                        ; 0050637f
    JL 0x005064b1                       ; 00506381
        ;   XREF to: 005064b1 (CONDITIONAL_JUMP)  ; LAB_005064b1
    CMP EAX,0x20000                     ; 00506387
    JLE 0x00506393                      ; 0050638c
        ;   XREF to: 00506393 (CONDITIONAL_JUMP)  ; LAB_00506393
    MOV EAX,0x20000                     ; 0050638e
    MOV EDX,EBX                         ; 00506393
        ;   Label: LAB_00506393
    MOV EDI,dword ptr [0x01da6478]      ; 00506395 | DAT_01da6478
    SHL EDX,0x7                         ; 0050639b
    ADD EDI,EAX                         ; 0050639e
    LEA EAX,[ESI + 0x20]                ; 005063a0
    ADD EDX,EAX                         ; 005063a3
    MOV EAX,dword ptr [ESI + 0x124]     ; 005063a5
    MOV dword ptr [0x01da6478],EDI      ; 005063ab | DAT_01da6478
    CMP EBX,EAX                         ; 005063b1
    JZ 0x005064b8                       ; 005063b3
        ;   XREF to: 005064b8 (CONDITIONAL_JUMP)  ; LAB_005064b8
    MOV ECX,EDI                         ; 005063b9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005063bb
    SUB ECX,EAX                         ; 005063be
    MOV dword ptr [ESP + 0x18],ECX      ; 005063c0
    FILD dword ptr [ESP + 0x18]         ; 005063c4
    FMUL double ptr [0x005cac69]        ; 005063c8 | DAT_005cac69
    FST float ptr [ESP + 0x8]           ; 005063ce
    FLDZ                                ; 005063d2
    FCOMPP                              ; 005063d4
    FNSTSW AX                           ; 005063d6
    SAHF                                ; 005063d8
    JBE 0x005063e1                      ; 005063d9
        ;   XREF to: 005063e1 (CONDITIONAL_JUMP)  ; LAB_005063e1
    XOR ECX,ECX                         ; 005063db
    MOV dword ptr [ESP + 0x8],ECX       ; 005063dd
    FLD float ptr [ESP + 0x8]           ; 005063e1
        ;   Label: LAB_005063e1
    FCOMP double ptr [0x005cac71]       ; 005063e5 | DAT_005cac71
    FNSTSW AX                           ; 005063eb
    SAHF                                ; 005063ed
    JBE 0x005063f8                      ; 005063ee
        ;   XREF to: 005063f8 (CONDITIONAL_JUMP)  ; LAB_005063f8
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 005063f0
    FLD float ptr [ESP + 0x8]           ; 005063f8
        ;   Label: LAB_005063f8
    FCOMP double ptr [0x005cac79]       ; 005063fc | DAT_005cac79
    FNSTSW AX                           ; 00506402
    SAHF                                ; 00506404
    JC 0x005064aa                       ; 00506405
        ;   XREF to: 005064aa (CONDITIONAL_JUMP)  ; LAB_005064aa
    MOV ECX,dword ptr [0x01da6478]      ; 0050640b | DAT_01da6478
    MOV EAX,dword ptr [EDX + 0x30]      ; 00506411
    SUB ECX,EAX                         ; 00506414
    MOV dword ptr [ESP + 0x18],ECX      ; 00506416
    FILD dword ptr [ESP + 0x18]         ; 0050641a
    FMUL double ptr [0x005cac69]        ; 0050641e | DAT_005cac69
    FST float ptr [ESP + 0x4]           ; 00506424
    FLDZ                                ; 00506428
    FCOMPP                              ; 0050642a
    FNSTSW AX                           ; 0050642c
    SAHF                                ; 0050642e
    JBE 0x00506437                      ; 0050642f
        ;   XREF to: 00506437 (CONDITIONAL_JUMP)  ; LAB_00506437
    XOR EAX,EAX                         ; 00506431
    MOV dword ptr [ESP + 0x4],EAX       ; 00506433
    FLD float ptr [ESP + 0x4]           ; 00506437
        ;   Label: LAB_00506437
    FCOMP double ptr [0x005cac71]       ; 0050643b | DAT_005cac71
    FNSTSW AX                           ; 00506441
    SAHF                                ; 00506443
    JBE 0x0050644e                      ; 00506444
        ;   XREF to: 0050644e (CONDITIONAL_JUMP)  ; LAB_0050644e
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 00506446
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050644e
        ;   Label: LAB_0050644e
    FLDZ                                ; 00506452
    MOV dword ptr [ESP],EAX             ; 00506454
    FCOMP float ptr [EDX + 0x28]        ; 00506457
    FNSTSW AX                           ; 0050645a
    SAHF                                ; 0050645c
    JA 0x0050646b                       ; 0050645d
        ;   XREF to: 0050646b (CONDITIONAL_JUMP)  ; LAB_0050646b
    FLD float ptr [ESP + 0x4]           ; 0050645f
    FCOMP float ptr [EBP + 0x1c]        ; 00506463
    FNSTSW AX                           ; 00506466
    SAHF                                ; 00506468
    JC 0x005064aa                       ; 00506469
        ;   XREF to: 005064aa (CONDITIONAL_JUMP)  ; LAB_005064aa
    FLD float ptr [ESP]                 ; 0050646b
        ;   Label: LAB_0050646b
    FCOMP double ptr [0x005cac81]       ; 0050646e | DAT_005cac81
    FNSTSW AX                           ; 00506474
    SAHF                                ; 00506476
    JBE 0x00506480                      ; 00506477
        ;   XREF to: 00506480 (CONDITIONAL_JUMP)  ; LAB_00506480
    MOV dword ptr [EDX + 0x28],0xbf800000 ; 00506479
    MOV AH,0x4                          ; 00506480
        ;   Label: LAB_00506480
    MOV EDI,0x9                         ; 00506482
    MOV byte ptr [ESP + 0x10],AH        ; 00506487
    MOV EAX,[0x01da6478]                ; 0050648b | DAT_01da6478
    MOV dword ptr [ESP + 0xc],EDI       ; 00506490
    MOV dword ptr [ESP + 0x11],EAX      ; 00506494
    MOV dword ptr [EDX + 0x2c],EAX      ; 00506498
    LEA EAX,[ESP + 0xc]                 ; 0050649b
    PUSH EAX                            ; 0050649f
    PUSH EBX                            ; 005064a0
    PUSH ESI                            ; 005064a1
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 005064a2
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 005064a7
    MOV ESP,EBP                         ; 005064aa
        ;   Label: LAB_005064aa
    POP EBP                             ; 005064ac
    POP EDI                             ; 005064ad
    POP ESI                             ; 005064ae
    POP EBX                             ; 005064af
    RET                                 ; 005064b0
    XOR EAX,EAX                         ; 005064b1
        ;   Label: LAB_005064b1
    JMP 0x00506393                      ; 005064b3
        ;   XREF to: 00506393 (UNCONDITIONAL_JUMP)  ; LAB_00506393
    MOV dword ptr [EDX + 0x28],0x0      ; 005064b8
        ;   Label: LAB_005064b8
    MOV dword ptr [EDX + 0x2c],EDI      ; 005064bf
    MOV dword ptr [EDX + 0x30],EDI      ; 005064c2
    MOV ESP,EBP                         ; 005064c5
    POP EBP                             ; 005064c7
    POP EDI                             ; 005064c8
    POP ESI                             ; 005064c9
    POP EBX                             ; 005064ca
    RET                                 ; 005064cb

