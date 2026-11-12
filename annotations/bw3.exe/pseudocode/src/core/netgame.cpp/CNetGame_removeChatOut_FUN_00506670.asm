; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00506670(CNetGame *this_ptr)
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
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 at 00504d05
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ca409
;   TerminatedCString s_removeChatOut_invalid_in_005ca41d
;   undefined4 DAT_005cace1
;   undefined4 DAT_005cace9
;   undefined4 DAT_005cacf1
;   undefined4 DAT_005cacf9
;   undefined4 DAT_005cad01
;   undefined4 DAT_005cad09
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01dc2690
;   undefined4 DAT_01dc2694
;   undefined4 DAT_01dc2698
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0
;   crt_string.c_memmove_FUN_005a54c0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506670
        ;   Label: core_netgame.cpp_CNetGame_removeChatOut_FUN_00506670
    PUSH ESI                            ; 00506671
    PUSH EDI                            ; 00506672
    PUSH EBP                            ; 00506673
    MOV EBP,ESP                         ; 00506674
    SUB ESP,0x144                       ; 00506676
    AND ESP,0xfffffff8                  ; 0050667c
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0050667f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00506684
    MOV EBX,0x12                        ; 00506686
    SAR EDX,0x1f                        ; 0050668b
    IDIV EBX                            ; 0050668e
    MOV ECX,dword ptr [0x01da6474]      ; 00506690 | DAT_01da6474
    MOV EDX,EAX                         ; 00506696
    SUB EAX,ECX                         ; 00506698
    MOV dword ptr [0x01da6474],EDX      ; 0050669a | DAT_01da6474
    TEST EAX,EAX                        ; 005066a0
    JL 0x005068b8                       ; 005066a2
        ;   XREF to: 005068b8 (CONDITIONAL_JUMP)  ; LAB_005068b8
    CMP EAX,0x20000                     ; 005066a8
    JLE 0x005066b4                      ; 005066ad
        ;   XREF to: 005066b4 (CONDITIONAL_JUMP)  ; LAB_005066b4
    MOV EAX,0x20000                     ; 005066af
    MOV EBX,dword ptr [0x01da6478]      ; 005066b4 | DAT_01da6478
        ;   Label: LAB_005066b4
    MOV EDI,dword ptr [0x01dc2690]      ; 005066ba | DAT_01dc2690
    XOR ESI,ESI                         ; 005066c0
    ADD EBX,EAX                         ; 005066c2
    MOV dword ptr [ESP + 0x120],ESI     ; 005066c4
    MOV dword ptr [0x01da6478],EBX      ; 005066cb | DAT_01da6478
    TEST EDI,EDI                        ; 005066d1
    JLE 0x005068b1                      ; 005066d3
        ;   XREF to: 005068b1 (CONDITIONAL_JUMP)  ; LAB_005068b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005066d9
    MOV ECX,0x1dc2694                   ; 005066dc
    ADD EAX,0x20                        ; 005066e1
    MOV dword ptr [ESP + 0x11c],ECX     ; 005066e4 | DAT_01dc2694
    MOV dword ptr [ESP + 0x118],EAX     ; 005066eb
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005066f2
        ;   Label: LAB_005066f2
    MOV EDX,dword ptr [0x01da6478]      ; 005066f9 | DAT_01da6478
    MOV dword ptr [ESP + 0x12c],EAX     ; 005066ff | DAT_01dc2694
    MOV EAX,dword ptr [EAX]             ; 00506706 | DAT_01dc2694
    SUB EDX,EAX                         ; 00506708
    MOV dword ptr [ESP + 0x140],EDX     ; 0050670a
    MOV EBX,0x1                         ; 00506711
    FILD dword ptr [ESP + 0x140]        ; 00506716
    FMUL double ptr [0x005cace1]        ; 0050671d | DAT_005cace1
    MOV dword ptr [ESP + 0x128],EBX     ; 00506723
    FST float ptr [ESP + 0x4]           ; 0050672a
    FLDZ                                ; 0050672e
    FCOMPP                              ; 00506730
    FNSTSW AX                           ; 00506732
    SAHF                                ; 00506734
    JA 0x005068bf                       ; 00506735
        ;   XREF to: 005068bf (CONDITIONAL_JUMP)  ; LAB_005068bf
    FLD float ptr [ESP + 0x4]           ; 0050673b
        ;   Label: LAB_0050673b
    FCOMP double ptr [0x005cacf1]       ; 0050673f | DAT_005cacf1
    FNSTSW AX                           ; 00506745
    SAHF                                ; 00506747
    JBE 0x00506752                      ; 00506748
        ;   XREF to: 00506752 (CONDITIONAL_JUMP)  ; LAB_00506752
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050674a
    FLD float ptr [ESP + 0x4]           ; 00506752
        ;   Label: LAB_00506752
    FCOMP double ptr [0x005cacf9]       ; 00506756 | DAT_005cacf9
    FNSTSW AX                           ; 0050675c
    SAHF                                ; 0050675e
    JNC 0x00506820                      ; 0050675f
        ;   XREF to: 00506820 (CONDITIONAL_JUMP)  ; LAB_00506820
    XOR EAX,EAX                         ; 00506765
    MOV dword ptr [ESP + 0x130],EAX     ; 00506767
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050676e
    CMP dword ptr [EAX + 0x1c],0x0      ; 00506771
    JLE 0x00506820                      ; 00506775
        ;   XREF to: 00506820 (CONDITIONAL_JUMP)  ; LAB_00506820
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050677b
    ADD EAX,0x14                        ; 00506782
    MOV dword ptr [ESP + 0x124],EAX     ; 00506785
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050678c
    MOV dword ptr [ESP + 0x138],EAX     ; 00506793 | DAT_01dc2694
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050679a
    MOV dword ptr [ESP + 0x134],EAX     ; 0050679d
    MOV EAX,dword ptr [ESP + 0x118]     ; 005067a4
    ADD EAX,0x1c                        ; 005067ab
    MOV EBX,dword ptr [ESP + 0x12c]     ; 005067ae
    MOV dword ptr [ESP + 0x13c],EAX     ; 005067b5
    MOV EAX,dword ptr [ESP + 0x138]     ; 005067bc
        ;   Label: LAB_005067bc
    CMP byte ptr [EAX + 0x8],0x0        ; 005067c3 | DAT_01dc269c | DAT_01dc269d
    JZ 0x005068ca                       ; 005067c7
        ;   XREF to: 005068ca (CONDITIONAL_JUMP)  ; LAB_005068ca
    MOV ECX,dword ptr [ESP + 0x138]     ; 005067cd
        ;   Label: LAB_005067cd
    MOV ESI,dword ptr [ESP + 0x134]     ; 005067d4
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005067db
    MOV EAX,dword ptr [ESP + 0x130]     ; 005067e2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005067e9
    ADD EBX,0x4                         ; 005067ec
    INC ECX                             ; 005067ef
    ADD ESI,0x80                        ; 005067f0
    ADD EDI,0x80                        ; 005067f6
    INC EAX                             ; 005067fc
    MOV dword ptr [ESP + 0x138],ECX     ; 005067fd
    MOV dword ptr [ESP + 0x134],ESI     ; 00506804
    MOV dword ptr [ESP + 0x13c],EDI     ; 0050680b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00506812
    MOV dword ptr [ESP + 0x130],EAX     ; 00506815
    CMP EAX,ECX                         ; 0050681c
    JL 0x005067bc                       ; 0050681e
        ;   XREF to: 005067bc (CONDITIONAL_JUMP)  ; LAB_005067bc
    CMP dword ptr [ESP + 0x128],0x0     ; 00506820
        ;   Label: LAB_00506820
    JZ 0x005069ce                       ; 00506828
        ;   XREF to: 005069ce (CONDITIONAL_JUMP)  ; LAB_005069ce
    MOV EBX,dword ptr [ESP + 0x120]     ; 0050682e
    TEST EBX,EBX                        ; 00506835
    JL 0x00506841                       ; 00506837
        ;   XREF to: 00506841 (CONDITIONAL_JUMP)  ; LAB_00506841
    CMP EBX,dword ptr [0x01dc2690]      ; 00506839 | DAT_01dc2690
    JL 0x00506863                       ; 0050683f
        ;   XREF to: 00506863 (CONDITIONAL_JUMP)  ; LAB_00506863
    MOV EAX,0x5ca409                    ; 00506841 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00506841
    MOV EDX,0x107                       ; 00506846
    PUSH 0x5ca41d                       ; 0050684b | = "removeChatOut - invalid index"
    MOV [0x01d71de0],EAX                ; 00506850 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00506855 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050685b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00506860
    MOV ECX,dword ptr [0x01dc2690]      ; 00506863 | DAT_01dc2690
        ;   Label: LAB_00506863
    DEC ECX                             ; 00506869
    MOV EAX,ECX                         ; 0050686a
    SUB EAX,EBX                         ; 0050686c
    IMUL EAX,EAX,0x114                  ; 0050686e
    PUSH EAX                            ; 00506874
    LEA EAX,[EBX + 0x1]                 ; 00506875
    IMUL EAX,EAX,0x114                  ; 00506878
    ADD EAX,0x1dc2694                   ; 0050687e
    PUSH EAX                            ; 00506883
    IMUL EAX,EBX,0x114                  ; 00506884
    ADD EAX,0x1dc2694                   ; 0050688a
    PUSH EAX                            ; 0050688f
    MOV dword ptr [0x01dc2690],ECX      ; 00506890 | DAT_01dc2690
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00506896
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050689b
    MOV EAX,dword ptr [ESP + 0x120]     ; 0050689e
        ;   Label: LAB_0050689e
    CMP EAX,dword ptr [0x01dc2690]      ; 005068a5 | DAT_01dc2690
    JL 0x005066f2                       ; 005068ab
        ;   XREF to: 005066f2 (CONDITIONAL_JUMP)  ; LAB_005066f2
    MOV ESP,EBP                         ; 005068b1
        ;   Label: LAB_005068b1
    POP EBP                             ; 005068b3
    POP EDI                             ; 005068b4
    POP ESI                             ; 005068b5
    POP EBX                             ; 005068b6
    RET                                 ; 005068b7
    XOR EAX,EAX                         ; 005068b8
        ;   Label: LAB_005068b8
    JMP 0x005066b4                      ; 005068ba
        ;   XREF to: 005066b4 (UNCONDITIONAL_JUMP)  ; LAB_005066b4
    XOR ESI,ESI                         ; 005068bf
        ;   Label: LAB_005068bf
    MOV dword ptr [ESP + 0x4],ESI       ; 005068c1
    JMP 0x0050673b                      ; 005068c5
        ;   XREF to: 0050673b (UNCONDITIONAL_JUMP)  ; LAB_0050673b
    MOV EAX,dword ptr [ESP + 0x134]     ; 005068ca
        ;   Label: LAB_005068ca
    XOR ESI,ESI                         ; 005068d1
    FLD float ptr [EAX + 0x48]          ; 005068d3
    FMUL double ptr [0x005cace9]        ; 005068d6 | DAT_005cace9
    MOV dword ptr [ESP + 0x128],ESI     ; 005068dc
    FST float ptr [ESP + 0x8]           ; 005068e3
    FCOMP double ptr [0x005cad01]       ; 005068e7 | DAT_005cad01
    FNSTSW AX                           ; 005068ed
    SAHF                                ; 005068ef
    JNC 0x005068fa                      ; 005068f0
        ;   XREF to: 005068fa (CONDITIONAL_JUMP)  ; LAB_005068fa
    MOV dword ptr [ESP + 0x8],0x40000000 ; 005068f2
    FLD float ptr [ESP + 0x8]           ; 005068fa
        ;   Label: LAB_005068fa
    FCOMP double ptr [0x005cad09]       ; 005068fe | DAT_005cad09
    FNSTSW AX                           ; 00506904
    SAHF                                ; 00506906
    JBE 0x00506911                      ; 00506907
        ;   XREF to: 00506911 (CONDITIONAL_JUMP)  ; LAB_00506911
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 00506909
    MOV EDX,dword ptr [0x01da6478]      ; 00506911 | DAT_01da6478
        ;   Label: LAB_00506911
    MOV EAX,dword ptr [EBX + 0xc]       ; 00506917 | DAT_01dc26a4
    SUB EDX,EAX                         ; 0050691a
    MOV dword ptr [ESP + 0x140],EDX     ; 0050691c
    FILD dword ptr [ESP + 0x140]        ; 00506923
    FMUL double ptr [0x005cace1]        ; 0050692a | DAT_005cace1
    FST float ptr [ESP]                 ; 00506930
    FLDZ                                ; 00506933
    FCOMPP                              ; 00506935
    FNSTSW AX                           ; 00506937
    SAHF                                ; 00506939
    JBE 0x00506941                      ; 0050693a
        ;   XREF to: 00506941 (CONDITIONAL_JUMP)  ; LAB_00506941
    XOR EDX,EDX                         ; 0050693c
    MOV dword ptr [ESP],EDX             ; 0050693e
    FLD float ptr [ESP]                 ; 00506941
        ;   Label: LAB_00506941
    FCOMP double ptr [0x005cacf1]       ; 00506944 | DAT_005cacf1
    FNSTSW AX                           ; 0050694a
    SAHF                                ; 0050694c
    JBE 0x00506956                      ; 0050694d
        ;   XREF to: 00506956 (CONDITIONAL_JUMP)  ; LAB_00506956
    MOV dword ptr [ESP],0x41f00000      ; 0050694f
    FLD float ptr [ESP]                 ; 00506956
        ;   Label: LAB_00506956
    FCOMP float ptr [ESP + 0x8]         ; 00506959
    FNSTSW AX                           ; 0050695d
    SAHF                                ; 0050695f
    JBE 0x005067cd                      ; 00506960
        ;   XREF to: 005067cd (CONDITIONAL_JUMP)  ; LAB_005067cd
    MOV ESI,0x109                       ; 00506966
    MOV DH,0x6                          ; 0050696b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050696d
    MOV dword ptr [ESP + 0xc],ESI       ; 00506974
    MOV byte ptr [ESP + 0x10],DH        ; 00506978
    LEA EDI,[ESP + 0x15]                ; 0050697c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00506980 | DAT_01dc2698
    MOV ESI,dword ptr [ESP + 0x124]     ; 00506983
    MOV dword ptr [ESP + 0x11],EAX      ; 0050698a
    PUSH EDI                            ; 0050698e
    MOV AL,byte ptr [ESI]               ; 0050698f | DAT_01dc26a8 | DAT_01dc26aa
        ;   Label: LAB_0050698f
    MOV byte ptr [EDI],AL               ; 00506991
    CMP AL,0x0                          ; 00506993
    JZ 0x005069a7                       ; 00506995
        ;   XREF to: 005069a7 (CONDITIONAL_JUMP)  ; LAB_005069a7
    MOV AL,byte ptr [ESI + 0x1]         ; 00506997 | DAT_01dc26a9 | DAT_01dc26ab
    ADD ESI,0x2                         ; 0050699a
    MOV byte ptr [EDI + 0x1],AL         ; 0050699d
    ADD EDI,0x2                         ; 005069a0
    CMP AL,0x0                          ; 005069a3
    JNZ 0x0050698f                      ; 005069a5
        ;   XREF to: 0050698f (CONDITIONAL_JUMP)  ; LAB_0050698f
    POP EDI                             ; 005069a7
        ;   Label: LAB_005069a7
    LEA EAX,[ESP + 0xc]                 ; 005069a8
    PUSH EAX                            ; 005069ac
    MOV EDI,dword ptr [ESP + 0x140]     ; 005069ad
    PUSH EDI                            ; 005069b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005069b5
    PUSH EAX                            ; 005069b8
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 ; 005069b9
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    MOV EAX,[0x01da6478]                ; 005069be | DAT_01da6478
    ADD ESP,0xc                         ; 005069c3
    MOV dword ptr [EBX + 0xc],EAX       ; 005069c6 | DAT_01dc26a4
    JMP 0x005067cd                      ; 005069c9
        ;   XREF to: 005067cd (UNCONDITIONAL_JUMP)  ; LAB_005067cd
    MOV EBX,dword ptr [ESP + 0x120]     ; 005069ce
        ;   Label: LAB_005069ce
    MOV ECX,dword ptr [ESP + 0x11c]     ; 005069d5
    INC EBX                             ; 005069dc
    ADD ECX,0x114                       ; 005069dd
    MOV dword ptr [ESP + 0x120],EBX     ; 005069e3
    MOV dword ptr [ESP + 0x11c],ECX     ; 005069ea
    JMP 0x0050689e                      ; 005069f1
        ;   XREF to: 0050689e (UNCONDITIONAL_JUMP)  ; LAB_0050689e

