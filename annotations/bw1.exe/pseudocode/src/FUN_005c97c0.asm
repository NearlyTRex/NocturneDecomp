; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005c97c0(int param_1,uint param_2,int param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c26e0 at 005c26ff
;   FUN_005cc6e0 at 005cc7f3
;
; Referenced Globals:
;   undefined4 DAT_0060852c
;   undefined4 DAT_00608546
;
; Called Functions:
;   FUN_005c9950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c97c0
        ;   Label: FUN_005c97c0
    PUSH ESI                            ; 005c97c1
    PUSH EDI                            ; 005c97c2
    PUSH EBP                            ; 005c97c3
    SUB ESP,0x4                         ; 005c97c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c97c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c97cb
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c97cf
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c97d3
    CMP EBX,0xa8c0                      ; 005c97d7
    JNC 0x005c97fb                      ; 005c97dd
        ;   XREF to: 005c97fb (CONDITIONAL_JUMP)  ; LAB_005c97fb
    TEST EAX,EAX                        ; 005c97df
    JLE 0x005c97fb                      ; 005c97e1
        ;   XREF to: 005c97fb (CONDITIONAL_JUMP)  ; LAB_005c97fb
    ADD EBX,0x15180                     ; 005c97e3
    MOV ESI,0x15180                     ; 005c97e9
    SUB EBX,EAX                         ; 005c97ee
    XOR EDX,EDX                         ; 005c97f0
    MOV EAX,EBX                         ; 005c97f2
    DIV ESI                             ; 005c97f4
    ADD EBP,EAX                         ; 005c97f6
    DEC EBP                             ; 005c97f8
    JMP 0x005c980a                      ; 005c97f9
        ;   XREF to: 005c980a (UNCONDITIONAL_JUMP)  ; LAB_005c980a
    MOV ESI,0x15180                     ; 005c97fb
        ;   Label: LAB_005c97fb
    SUB EBX,EAX                         ; 005c9800
    XOR EDX,EDX                         ; 005c9802
    MOV EAX,EBX                         ; 005c9804
    DIV ESI                             ; 005c9806
    ADD EBP,EAX                         ; 005c9808
    MOV ESI,0x15180                     ; 005c980a
        ;   Label: LAB_005c980a
    MOV EAX,EBX                         ; 005c980f
    XOR EDX,EDX                         ; 005c9811
    DIV ESI                             ; 005c9813
    MOV EBX,EDX                         ; 005c9815
    MOV ESI,0xe10                       ; 005c9817
    MOV EAX,EBX                         ; 005c981c
    XOR EDX,EDX                         ; 005c981e
    DIV ESI                             ; 005c9820
    XOR EDX,EDX                         ; 005c9822
    MOV dword ptr [EDI + 0x8],EAX       ; 005c9824
    MOV EAX,EBX                         ; 005c9827
    DIV ESI                             ; 005c9829
    MOV EBX,EDX                         ; 005c982b
    MOV ESI,0x3c                        ; 005c982d
    MOV EAX,EBX                         ; 005c9832
    XOR EDX,EDX                         ; 005c9834
    DIV ESI                             ; 005c9836
    XOR EDX,EDX                         ; 005c9838
    MOV dword ptr [EDI + 0x4],EAX       ; 005c983a
    MOV EAX,EBX                         ; 005c983d
    DIV ESI                             ; 005c983f
    MOV EBX,0x16e                       ; 005c9841
    MOV EAX,EBP                         ; 005c9846
    MOV dword ptr [EDI],EDX             ; 005c9848
    XOR EDX,EDX                         ; 005c984a
    DIV EBX                             ; 005c984c
    MOV ESI,EAX                         ; 005c984e
    SHL EAX,0x3                         ; 005c9850
    ADD EAX,ESI                         ; 005c9853
    SHL EAX,0x3                         ; 005c9855
    ADD EAX,ESI                         ; 005c9858
    MOV EBX,EAX                         ; 005c985a
    SHL EAX,0x2                         ; 005c985c
    ADD EAX,EBX                         ; 005c985f
    MOV EBX,EBP                         ; 005c9861
    SUB EBX,EAX                         ; 005c9863
    TEST ESI,ESI                        ; 005c9865
    JBE 0x005c9871                      ; 005c9867
        ;   XREF to: 005c9871 (CONDITIONAL_JUMP)  ; LAB_005c9871
    LEA EAX,[ESI + -0x1]                ; 005c9869
    SHR EAX,0x2                         ; 005c986c
    SUB EBX,EAX                         ; 005c986f
    LEA EAX,[ESI + 0x76c]               ; 005c9871
        ;   Label: LAB_005c9871
    PUSH EAX                            ; 005c9877
    CALL FUN_005c9950                   ; 005c9878
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD EAX,0x16d                       ; 005c987d
    ADD ESP,0x4                         ; 005c9882
    CMP EBX,EAX                         ; 005c9885
    JC 0x005c9890                       ; 005c9887
        ;   XREF to: 005c9890 (CONDITIONAL_JUMP)  ; LAB_005c9890
    SUB EBX,EAX                         ; 005c9889
        ;   Label: LAB_005c9889
    INC ESI                             ; 005c988b
    CMP EBX,EAX                         ; 005c988c
    JNC 0x005c9889                      ; 005c988e
        ;   XREF to: 005c9889 (CONDITIONAL_JUMP)  ; LAB_005c9889
    MOV dword ptr [EDI + 0x14],ESI      ; 005c9890
        ;   Label: LAB_005c9890
    ADD ESI,0x76c                       ; 005c9893
    MOV EDX,0x60852c                    ; 005c9899 | DAT_0060852c
    PUSH ESI                            ; 005c989e
    MOV dword ptr [EDI + 0x1c],EBX      ; 005c989f
    MOV dword ptr [ESP + 0x4],EDX       ; 005c98a2 | DAT_0060852c
    CALL FUN_005c9950                   ; 005c98a6
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD ESP,0x4                         ; 005c98ab
    TEST EAX,EAX                        ; 005c98ae
    JZ 0x005c98b9                       ; 005c98b0
        ;   XREF to: 005c98b9 (CONDITIONAL_JUMP)  ; LAB_005c98b9
    MOV dword ptr [ESP],0x608546        ; 005c98b2 | DAT_00608546
    MOV ESI,0x1f                        ; 005c98b9
        ;   Label: LAB_005c98b9
    MOV EAX,EBX                         ; 005c98be
    XOR EDX,EDX                         ; 005c98c0
    DIV ESI                             ; 005c98c2
    MOV EDX,dword ptr [ESP]             ; 005c98c4
    LEA ESI,[EAX*0x2 + 0x0]             ; 005c98c7
    ADD ESI,EDX                         ; 005c98ce
    MOV ESI,dword ptr [ESI]             ; 005c98d0 | DAT_00608546 | DAT_0060852c
    SAR ESI,0x10                        ; 005c98d2
    CMP EBX,ESI                         ; 005c98d5
    JC 0x005c98da                       ; 005c98d7
        ;   XREF to: 005c98da (CONDITIONAL_JUMP)  ; LAB_005c98da
    INC EAX                             ; 005c98d9
    MOV ECX,dword ptr [ESP]             ; 005c98da
        ;   Label: LAB_005c98da
    MOV dword ptr [EDI + 0x10],EAX      ; 005c98dd
    ADD EAX,EAX                         ; 005c98e0
    ADD EAX,ECX                         ; 005c98e2
    MOVSX EAX,word ptr [EAX]            ; 005c98e4 | DAT_00608546 | DAT_0060852c
    SUB EBX,EAX                         ; 005c98e7
    XOR EDX,EDX                         ; 005c98e9
    INC EBX                             ; 005c98eb
    LEA EAX,[EBP + 0x1]                 ; 005c98ec
    MOV dword ptr [EDI + 0xc],EBX       ; 005c98ef
    MOV EBX,0x7                         ; 005c98f2
    DIV EBX                             ; 005c98f7
    MOV EAX,EDI                         ; 005c98f9
    MOV dword ptr [EDI + 0x18],EDX      ; 005c98fb
    ADD ESP,0x4                         ; 005c98fe
    POP EBP                             ; 005c9901
    POP EDI                             ; 005c9902
    POP ESI                             ; 005c9903
    POP EBX                             ; 005c9904
    RET                                 ; 005c9905

