; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_004755c0(int param_1,int *param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005bca25
;
; Called Functions:
;   core_dtrace.cpp_FUN_00475090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004755c0
        ;   Label: core_dtrace.cpp_FUN_004755c0
    PUSH ESI                            ; 004755c1
    PUSH EDI                            ; 004755c2
    PUSH EBP                            ; 004755c3
    SUB ESP,0x30                        ; 004755c4
    MOV ESI,dword ptr [ESP + 0x44]      ; 004755c7
    MOV EBP,dword ptr [ESP + 0x48]      ; 004755cb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004755cf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004755d3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004755d7
    FILD dword ptr [ESP + 0x2c]         ; 004755db
    MOV dword ptr [ESP + 0x2c],EAX      ; 004755df
    FMUL float ptr [ESI + 0x28]         ; 004755e3
    FILD dword ptr [ESP + 0x2c]         ; 004755e6
    MOV EAX,dword ptr [ESP + 0x54]      ; 004755ea
    FMUL float ptr [ESI + 0x2c]         ; 004755ee
    MOV dword ptr [ESP + 0x2c],EAX      ; 004755f1
    XOR EDX,EDX                         ; 004755f5
    FILD dword ptr [ESP + 0x2c]         ; 004755f7
    FMUL float ptr [ESI + 0x30]         ; 004755fb
    MOV dword ptr [ESP + 0x24],EDX      ; 004755fe
    FXCH ST2                            ; 00475602
    FADD float ptr [ESI + 0x10]         ; 00475604
    MOV dword ptr [ESP + 0x18],EDX      ; 00475607
    FSTP float ptr [ESP]                ; 0047560b
    FADD float ptr [ESI + 0x14]         ; 0047560e
    FXCH                                ; 00475611
    FADD float ptr [ESI + 0x18]         ; 00475613
    FXCH                                ; 00475616
    FSTP float ptr [ESP + 0x4]          ; 00475618
    FSTP float ptr [ESP + 0x8]          ; 0047561c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00475620
        ;   Label: LAB_00475620
    XOR EDI,EDI                         ; 00475624
    MOV dword ptr [ESP + 0x1c],EAX      ; 00475626
    MOV dword ptr [ESP + 0x20],EAX      ; 0047562a
    MOV EBX,dword ptr [EBP]             ; 0047562e
        ;   Label: LAB_0047562e
    TEST EBX,EBX                        ; 00475631
    JZ 0x004756d1                       ; 00475633
        ;   XREF to: 004756d1 (CONDITIONAL_JUMP)  ; LAB_004756d1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00475639
    LEA EAX,[EBX + EDX*0x1]             ; 0047563d
    CMP byte ptr [EAX],0x0              ; 00475640
    JZ 0x004756d1                       ; 00475643
        ;   XREF to: 004756d1 (CONDITIONAL_JUMP)  ; LAB_004756d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00475649
    XOR EBX,EBX                         ; 0047564d
    MOV dword ptr [ESP + 0x28],EAX      ; 0047564f
    MOV ECX,dword ptr [ESP + 0x28]      ; 00475653
        ;   Label: LAB_00475653
    MOV EAX,dword ptr [EBP]             ; 00475657
    ADD EAX,ECX                         ; 0047565a
    MOV AL,byte ptr [EAX]               ; 0047565c
    XOR EDX,EDX                         ; 0047565e
    AND EAX,0xff                        ; 00475660
    MOV DL,byte ptr [EBX + 0x5fb0e8]    ; 00475665
    TEST EAX,EDX                        ; 0047566b
    JZ 0x004756cb                       ; 0047566d
        ;   XREF to: 004756cb (CONDITIONAL_JUMP)  ; LAB_004756cb
    MOV dword ptr [ESP + 0x2c],EBX      ; 0047566f
    FILD dword ptr [ESP + 0x2c]         ; 00475673
    FMUL float ptr [ESI + 0x28]         ; 00475677
    FLD float ptr [0x005bca25]          ; 0047567a | DAT_005bca25
    FXCH                                ; 00475680
    FMUL ST1                            ; 00475682
    MOV dword ptr [ESP + 0x2c],EDI      ; 00475684
    FADD float ptr [ESP]                ; 00475688
    FILD dword ptr [ESP + 0x2c]         ; 0047568b
    FXCH                                ; 0047568f
    FSTP float ptr [ESP + 0xc]          ; 00475691
    FMUL float ptr [ESI + 0x2c]         ; 00475695
    MOV EAX,dword ptr [ESP + 0x24]      ; 00475698
    FMUL ST1                            ; 0047569c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0047569e
    FADD float ptr [ESP + 0x4]          ; 004756a2
    FILD dword ptr [ESP + 0x2c]         ; 004756a6
    FXCH                                ; 004756aa
    FSTP float ptr [ESP + 0x10]         ; 004756ac
    FMUL float ptr [ESI + 0x30]         ; 004756b0
    LEA EAX,[ESP + 0xc]                 ; 004756b3
    FMULP                               ; 004756b7
    PUSH EAX                            ; 004756b9
    FADD float ptr [ESP + 0xc]          ; 004756ba
    PUSH ESI                            ; 004756be
    FSTP float ptr [ESP + 0x1c]         ; 004756bf
    CALL core_dtrace.cpp_FUN_00475090   ; 004756c3
        ;   XREF to: 00475090 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00475090()
    ADD ESP,0x8                         ; 004756c8
    INC EBX                             ; 004756cb
        ;   Label: LAB_004756cb
    CMP EBX,0x8                         ; 004756cc
    JL 0x00475653                       ; 004756cf
        ;   XREF to: 00475653 (CONDITIONAL_JUMP)  ; LAB_00475653
    MOV EAX,dword ptr [ESP + 0x20]      ; 004756d1
        ;   Label: LAB_004756d1
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004756d5
    INC EDI                             ; 004756d9
    INC EAX                             ; 004756da
    INC EBX                             ; 004756db
    MOV dword ptr [ESP + 0x20],EAX      ; 004756dc
    MOV dword ptr [ESP + 0x1c],EBX      ; 004756e0
    CMP EDI,0x8                         ; 004756e4
    JL 0x0047562e                       ; 004756e7
        ;   XREF to: 0047562e (CONDITIONAL_JUMP)  ; LAB_0047562e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004756ed
    MOV EDX,dword ptr [ESP + 0x18]      ; 004756f1
    INC ECX                             ; 004756f5
    ADD EDX,0x8                         ; 004756f6
    MOV dword ptr [ESP + 0x24],ECX      ; 004756f9
    MOV dword ptr [ESP + 0x18],EDX      ; 004756fd
    CMP ECX,0x8                         ; 00475701
    JL 0x00475620                       ; 00475704
        ;   XREF to: 00475620 (CONDITIONAL_JUMP)  ; LAB_00475620
    ADD ESP,0x30                        ; 0047570a
    POP EBP                             ; 0047570d
    POP EDI                             ; 0047570e
    POP ESI                             ; 0047570f
    POP EBX                             ; 00475710
    RET                                 ; 00475711

