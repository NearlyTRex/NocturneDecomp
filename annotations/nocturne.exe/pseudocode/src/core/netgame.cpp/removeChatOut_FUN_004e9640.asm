; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_removeChatOut_FUN_004e9640(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058ba22
;   TerminatedCString s_removeChatOut_invalid_in_0058ba36
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01d06610
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9640
        ;   Label: core_netgame.cpp_removeChatOut_FUN_004e9640
    PUSH EDI                            ; 004e9641
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e9642
    TEST EBX,EBX                        ; 004e9646
    JL 0x004e96ab                       ; 004e9648
        ;   XREF to: 004e96ab (CONDITIONAL_JUMP)  ; LAB_004e96ab
    CMP EBX,dword ptr [0x01d06610]      ; 004e964a | DAT_01d06610
    JGE 0x004e96ab                      ; 004e9650
        ;   XREF to: 004e96ab (CONDITIONAL_JUMP)  ; LAB_004e96ab
    MOV EDI,dword ptr [0x01d06610]      ; 004e9652 | DAT_01d06610
        ;   Label: LAB_004e9652
    DEC EDI                             ; 004e9658
    MOV EDX,EDI                         ; 004e9659
    SUB EDX,EBX                         ; 004e965b
    MOV EAX,EDX                         ; 004e965d
    SHL EAX,0x4                         ; 004e965f
    ADD EAX,EDX                         ; 004e9662
    SHL EAX,0x2                         ; 004e9664
    ADD EAX,EDX                         ; 004e9667
    SHL EAX,0x2                         ; 004e9669
    LEA EDX,[EBX + 0x1]                 ; 004e966c
    PUSH EAX                            ; 004e966f
    MOV EAX,EDX                         ; 004e9670
    SHL EAX,0x4                         ; 004e9672
    ADD EAX,EDX                         ; 004e9675
    SHL EAX,0x2                         ; 004e9677
    ADD EAX,EDX                         ; 004e967a
    SHL EAX,0x2                         ; 004e967c
    ADD EAX,0x1d06614                   ; 004e967f
    PUSH EAX                            ; 004e9684
    MOV EAX,EBX                         ; 004e9685
    SHL EAX,0x4                         ; 004e9687
    ADD EAX,EBX                         ; 004e968a
    SHL EAX,0x2                         ; 004e968c
    ADD EAX,EBX                         ; 004e968f
    SHL EAX,0x2                         ; 004e9691
    ADD EAX,0x1d06614                   ; 004e9694
    PUSH EAX                            ; 004e9699
    MOV dword ptr [0x01d06610],EDI      ; 004e969a | DAT_01d06610
    CALL crt_string.c_memmove_FUN_00566170 ; 004e96a0
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004e96a5
    POP EDI                             ; 004e96a8
    POP EBX                             ; 004e96a9
    RET                                 ; 004e96aa
    PUSH ESI                            ; 004e96ab
        ;   Label: LAB_004e96ab
    MOV ECX,0x58ba22                    ; 004e96ac | = "..\\core\\netgame.cpp"
    MOV ESI,0x107                       ; 004e96b1
    PUSH 0x58ba36                       ; 004e96b6 | = "removeChatOut - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 004e96bb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e96c1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e96c7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e96cc
    POP ESI                             ; 004e96cf
    JMP 0x004e9652                      ; 004e96d0
        ;   XREF to: 004e9652 (UNCONDITIONAL_JUMP)  ; LAB_004e9652

