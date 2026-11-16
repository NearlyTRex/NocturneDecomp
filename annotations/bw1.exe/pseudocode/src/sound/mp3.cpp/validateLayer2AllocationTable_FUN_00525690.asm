; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_00525690(SMpegFrame *frame)
;
; Parameters:
; SMpegFrame *     Stack[0x4]:4   frame
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525690
        ;   Label: sound_mp3.cpp_validateLayer2AllocationTable_FUN_00525690
    PUSH ESI                            ; 00525691
    PUSH EDI                            ; 00525692
    PUSH EBP                            ; 00525693
    SUB ESP,0xc                         ; 00525694
    MOV ESI,dword ptr [ESP + 0x20]      ; 00525697
    MOV ECX,dword ptr [ESI]             ; 0052569b
    MOV EAX,dword ptr [ECX + 0x4]       ; 0052569d
    DEC EAX                             ; 005256a0
    MOV dword ptr [ESP],EAX             ; 005256a1
    MOV EAX,dword ptr [ECX + 0xc]       ; 005256a4
    MOV EBX,dword ptr [ECX]             ; 005256a7
    MOV dword ptr [ESP + 0x4],EAX       ; 005256a9
    LEA EAX,[EBX*0x4 + 0x0]             ; 005256ad
    SUB EAX,EBX                         ; 005256b4
    SHL EAX,0x2                         ; 005256b6
    MOV EBP,EAX                         ; 005256b9
    SHL EBP,0x4                         ; 005256bb
    SUB EBP,EAX                         ; 005256be
    MOV EAX,dword ptr [ESP]             ; 005256c0
    SHL EAX,0x2                         ; 005256c3
    MOV EDX,EAX                         ; 005256c6
    SHL EAX,0x4                         ; 005256c8
    SUB EAX,EDX                         ; 005256cb
    ADD EBP,EAX                         ; 005256cd
    MOV EAX,dword ptr [ESP + 0x4]       ; 005256cf
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x620328] ; 005256d3
    MOV EAX,EDX                         ; 005256da
    MOV EBP,dword ptr [ESI + 0x10]      ; 005256dc
    SAR EDX,0x1f                        ; 005256df
    IDIV EBP                            ; 005256e2
    MOV EDX,EAX                         ; 005256e4
    MOV EAX,dword ptr [ECX + 0x10]      ; 005256e6
    MOV ECX,EBX                         ; 005256e9
    SHL ECX,0x5                         ; 005256eb
    MOV EDI,dword ptr [ESI + 0x18]      ; 005256ee
    FLD double ptr [ECX + EAX*0x8 + 0x6202e8] ; 005256f1
    CALL crt_math.c_round_FUN_005c03a0  ; 005256f8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 005256fd
    CMP EBX,0x1                         ; 00525701
    JNZ 0x00525789                      ; 00525704
        ;   XREF to: 00525789 (CONDITIONAL_JUMP)  ; LAB_00525789
    CMP dword ptr [ESP + 0x8],0x30      ; 0052570a
    JNZ 0x0052572b                      ; 0052570f
        ;   XREF to: 0052572b (CONDITIONAL_JUMP)  ; LAB_0052572b
    CMP EDX,0x38                        ; 00525711
    JL 0x0052572b                       ; 00525714
        ;   XREF to: 0052572b (CONDITIONAL_JUMP)  ; LAB_0052572b
    XOR EAX,EAX                         ; 00525716
        ;   Label: LAB_00525716
    CMP EAX,dword ptr [ESI + 0xc]       ; 00525718
    JNZ 0x0052579d                      ; 0052571b
        ;   XREF to: 0052579d (CONDITIONAL_JUMP)  ; LAB_0052579d
    MOV EAX,EDI                         ; 00525721
    ADD ESP,0xc                         ; 00525723
    POP EBP                             ; 00525726
    POP EDI                             ; 00525727
    POP ESI                             ; 00525728
    POP EBX                             ; 00525729
    RET                                 ; 0052572a
    CMP EDX,0x38                        ; 0052572b
        ;   Label: LAB_0052572b
    JL 0x00525735                       ; 0052572e
        ;   XREF to: 00525735 (CONDITIONAL_JUMP)  ; LAB_00525735
    CMP EDX,0x50                        ; 00525730
    JLE 0x00525716                      ; 00525733
        ;   XREF to: 00525716 (CONDITIONAL_JUMP)  ; LAB_00525716
    CMP dword ptr [ESP + 0x8],0x30      ; 00525735
        ;   Label: LAB_00525735
    JZ 0x00525755                       ; 0052573a
        ;   XREF to: 00525755 (CONDITIONAL_JUMP)  ; LAB_00525755
    CMP EDX,0x60                        ; 0052573c
    JL 0x00525755                       ; 0052573f
        ;   XREF to: 00525755 (CONDITIONAL_JUMP)  ; LAB_00525755
    MOV EAX,0x1                         ; 00525741
    CMP EAX,dword ptr [ESI + 0xc]       ; 00525746
    JNZ 0x0052579d                      ; 00525749
        ;   XREF to: 0052579d (CONDITIONAL_JUMP)  ; LAB_0052579d
    MOV EAX,EDI                         ; 0052574b
    ADD ESP,0xc                         ; 0052574d
    POP EBP                             ; 00525750
    POP EDI                             ; 00525751
    POP ESI                             ; 00525752
    POP EBX                             ; 00525753
    RET                                 ; 00525754
    CMP dword ptr [ESP + 0x8],0x20      ; 00525755
        ;   Label: LAB_00525755
    JZ 0x00525775                       ; 0052575a
        ;   XREF to: 00525775 (CONDITIONAL_JUMP)  ; LAB_00525775
    CMP EDX,0x30                        ; 0052575c
    JG 0x00525775                       ; 0052575f
        ;   XREF to: 00525775 (CONDITIONAL_JUMP)  ; LAB_00525775
    MOV EAX,0x2                         ; 00525761
    CMP EAX,dword ptr [ESI + 0xc]       ; 00525766
    JNZ 0x0052579d                      ; 00525769
        ;   XREF to: 0052579d (CONDITIONAL_JUMP)  ; LAB_0052579d
    MOV EAX,EDI                         ; 0052576b
    ADD ESP,0xc                         ; 0052576d
    POP EBP                             ; 00525770
    POP EDI                             ; 00525771
    POP ESI                             ; 00525772
    POP EBX                             ; 00525773
    RET                                 ; 00525774
    MOV EAX,0x3                         ; 00525775
        ;   Label: LAB_00525775
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052577a
    JNZ 0x0052579d                      ; 0052577d
        ;   XREF to: 0052579d (CONDITIONAL_JUMP)  ; LAB_0052579d
    MOV EAX,EDI                         ; 0052577f
    ADD ESP,0xc                         ; 00525781
    POP EBP                             ; 00525784
    POP EDI                             ; 00525785
    POP ESI                             ; 00525786
    POP EBX                             ; 00525787
    RET                                 ; 00525788
    MOV EAX,0x4                         ; 00525789
        ;   Label: LAB_00525789
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052578e
    JNZ 0x0052579d                      ; 00525791
        ;   XREF to: 0052579d (CONDITIONAL_JUMP)  ; LAB_0052579d
    MOV EAX,EDI                         ; 00525793
    ADD ESP,0xc                         ; 00525795
    POP EBP                             ; 00525798
    POP EDI                             ; 00525799
    POP ESI                             ; 0052579a
    POP EBX                             ; 0052579b
    RET                                 ; 0052579c
    PUSH 0x1d404c8                      ; 0052579d
        ;   Label: LAB_0052579d
    MOV EAX,0x5eb0b6                    ; 005257a2
    MOV EDX,0x1d8                       ; 005257a7
    PUSH 0x5eb0c7                       ; 005257ac
    MOV [0x01d1d400],EAX                ; 005257b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005257b6 | DAT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 005257bc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x8                         ; 005257c1
    MOV EAX,EDI                         ; 005257c4
    ADD ESP,0xc                         ; 005257c6
    POP EBP                             ; 005257c9
    POP EDI                             ; 005257ca
    POP ESI                             ; 005257cb
    POP EBX                             ; 005257cc
    RET                                 ; 005257cd

