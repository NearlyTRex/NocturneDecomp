; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame *this_ptr,char *message,int target_player)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   message
; int              Stack[0xc]:4   target_player
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00506312
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01dc2690
;   undefined4 DAT_01dc5c7c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__strncpy_FUN_005a4ee0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005064d0
        ;   Label: core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0
    PUSH ESI                            ; 005064d1
    PUSH EDI                            ; 005064d2
    PUSH EBP                            ; 005064d3
    MOV EBP,dword ptr [0x01da6478]      ; 005064d4 | DAT_01da6478
    MOV ESI,dword ptr [ESP + 0x14]      ; 005064da
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005064de
    CMP dword ptr [0x01dc2690],0x32     ; 005064e2 | DAT_01dc2690
    JGE 0x00506606                      ; 005064e9
        ;   XREF to: 00506606 (CONDITIONAL_JUMP)  ; LAB_00506606
    MOV EDX,dword ptr [0x01dc2690]      ; 005064ef | DAT_01dc2690
        ;   Label: LAB_005064ef
    MOV EAX,EDX                         ; 005064f5
    SHL EAX,0x4                         ; 005064f7
    ADD EAX,EDX                         ; 005064fa
    SHL EAX,0x2                         ; 005064fc
    ADD EAX,EDX                         ; 005064ff
    MOV EDI,0x1dc2694                   ; 00506501
    SHL EAX,0x2                         ; 00506506
    ADD EDI,EAX                         ; 00506509
    LEA EAX,[EDX + 0x1]                 ; 0050650b
    MOV [0x01dc2690],EAX                ; 0050650e | DAT_01dc2690
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00506513
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00506518
    MOV ECX,0x12                        ; 0050651a
    SAR EDX,0x1f                        ; 0050651f
    IDIV ECX                            ; 00506522
    MOV ECX,dword ptr [0x01da6474]      ; 00506524 | DAT_01da6474
    MOV EDX,EAX                         ; 0050652a
    SUB EAX,ECX                         ; 0050652c
    MOV dword ptr [0x01da6474],EDX      ; 0050652e | DAT_01da6474
    TEST EAX,EAX                        ; 00506534
    JL 0x0050662e                       ; 00506536
        ;   XREF to: 0050662e (CONDITIONAL_JUMP)  ; LAB_0050662e
    MOV EBP,dword ptr [0x01da6478]      ; 0050653c | DAT_01da6478
    CMP EAX,0x20000                     ; 00506542
    JLE 0x0050654e                      ; 00506547
        ;   XREF to: 0050654e (CONDITIONAL_JUMP)  ; LAB_0050654e
    MOV EAX,0x20000                     ; 00506549
    ADD EBP,EAX                         ; 0050654e
        ;   Label: LAB_0050654e
    MOV EAX,[0x01dc5c7c]                ; 00506550 | DAT_01dc5c7c
    PUSH 0x2                            ; 00506555
    INC EAX                             ; 00506557
    PUSH 0x1                            ; 00506558
    MOV [0x01dc5c7c],EAX                ; 0050655a | DAT_01dc5c7c
    MOV dword ptr [EDI + 0x4],EAX       ; 0050655f
    LEA EAX,[EDI + 0x8]                 ; 00506562
    PUSH EAX                            ; 00506565
    MOV dword ptr [0x01da6478],EBP      ; 00506566 | DAT_01da6478
    MOV dword ptr [EDI],EBP             ; 0050656c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0050656e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EBP,dword ptr [0x01da6478]      ; 00506573 | DAT_01da6478
    ADD ESP,0xc                         ; 00506579
    TEST EBX,EBX                        ; 0050657c
    JL 0x0050663b                       ; 0050657e
        ;   XREF to: 0050663b (CONDITIONAL_JUMP)  ; LAB_0050663b
    LEA EAX,[EDI + EBX*0x1]             ; 00506584
    LEA EDX,[EBP + 0xffc40000]          ; 00506587
    MOV byte ptr [EAX + 0x8],0x0        ; 0050658d
    MOV dword ptr [EDI + EBX*0x4 + 0xc],EDX ; 00506591
    LEA EAX,[EAX]                       ; 00506595
    LEA EDX,[EDX]                       ; 0050659b
    MOV EBX,EBX                         ; 0050659e
    PUSH 0x100                          ; 005065a0
        ;   Label: LAB_005065a0
    PUSH 0x0                            ; 005065a5
    LEA EBX,[EDI + 0x14]                ; 005065a7
    MOV EAX,dword ptr [ESI + 0x124]     ; 005065aa
    PUSH EBX                            ; 005065b0
    MOV dword ptr [0x01da6478],EBP      ; 005065b1 | DAT_01da6478
    MOV byte ptr [EDI + EAX*0x1 + 0x8],0x1 ; 005065b7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005065bc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005065c1
    PUSH 0xff                           ; 005065c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005065c9
    PUSH EAX                            ; 005065cd
    PUSH EBX                            ; 005065ce
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 005065cf
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005065d4
    PUSH EBX                            ; 005065d7
    LEA EAX,[ESI + 0x8]                 ; 005065d8
    PUSH EAX                            ; 005065db
    MOV EDX,dword ptr [EDI + 0x4]       ; 005065dc
    PUSH EDX                            ; 005065df
    MOV EDX,dword ptr [ESI + 0x124]     ; 005065e0
    LEA EAX,[ESI + 0x20]                ; 005065e6
    SHL EDX,0x7                         ; 005065e9
    ADD EAX,EDX                         ; 005065ec
    ADD EAX,0x1c                        ; 005065ee
    PUSH EAX                            ; 005065f1
    PUSH ESI                            ; 005065f2
    CALL core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00 ; 005065f3
        ;   XREF to: 00506a00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00(CNetGame * this_ptr, SNetworkAddr * sender_addr, int message_id, char * sender_name, ...)
    MOV EBP,dword ptr [0x01da6478]      ; 005065f8 | DAT_01da6478
    ADD ESP,0x14                        ; 005065fe
    POP EBP                             ; 00506601
    POP EDI                             ; 00506602
    POP ESI                             ; 00506603
    POP EBX                             ; 00506604
    RET                                 ; 00506605
    MOV ECX,0x5cac89                    ; 00506606
        ;   Label: LAB_00506606
    MOV EDI,0x76c                       ; 0050660b
    PUSH 0x5cac9d                       ; 00506610
    MOV dword ptr [0x01d71de0],ECX      ; 00506615 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0050661b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00506621
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00506626
    JMP 0x005064ef                      ; 00506629
        ;   XREF to: 005064ef (UNCONDITIONAL_JUMP)  ; LAB_005064ef
    MOV EBP,dword ptr [0x01da6478]      ; 0050662e | DAT_01da6478
        ;   Label: LAB_0050662e
    XOR EAX,EAX                         ; 00506634
    JMP 0x0050654e                      ; 00506636
        ;   XREF to: 0050654e (UNCONDITIONAL_JUMP)  ; LAB_0050654e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050663b
        ;   Label: LAB_0050663b
    XOR EAX,EAX                         ; 0050663e
    TEST EDX,EDX                        ; 00506640
    JLE 0x005065a0                      ; 00506642
        ;   XREF to: 005065a0 (CONDITIONAL_JUMP)  ; LAB_005065a0
    MOV ECX,EDI                         ; 00506648
    MOV EDX,EDI                         ; 0050664a
    ADD EDX,0x4                         ; 0050664c
        ;   Label: LAB_0050664c
    LEA EBX,[EBP + 0xffc40000]          ; 0050664f
    MOV byte ptr [ECX + 0x8],0x0        ; 00506655
    MOV dword ptr [EDX + 0x8],EBX       ; 00506659
    INC EAX                             ; 0050665c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0050665d
    INC ECX                             ; 00506660
    CMP EAX,EBX                         ; 00506661
    JL 0x0050664c                       ; 00506663
        ;   XREF to: 0050664c (CONDITIONAL_JUMP)  ; LAB_0050664c
    JMP 0x005065a0                      ; 00506665
        ;   XREF to: 005065a0 (UNCONDITIONAL_JUMP)  ; LAB_005065a0

