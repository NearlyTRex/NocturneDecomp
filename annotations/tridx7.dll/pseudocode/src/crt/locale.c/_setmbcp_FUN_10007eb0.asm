; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c__setmbcp_FUN_10007eb0(int code_page)
;
; Parameters:
; int              Stack[0x4]:4   code_page
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0xe]:1  local_e
; undefined1       Stack[-0xd]:1  local_d
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_locale.c__initmbctable_FUN_100081d0 at 100081d2
;
; Referenced Globals:
;   undefined4 DAT_10016dd8
;   undefined4 DAT_10016dd8+1
;   undefined4 DAT_10016dd8+2
;   undefined4 DAT_10016dd8+3
;   undefined1 DAT_10016ddc
;   undefined4 DAT_10016edc
;   undefined4 DAT_10016ee0
;   undefined4 DAT_10016ee8
;   undefined4 DAT_10016eec
;   undefined4 DAT_10016ef0
;   undefined4 DAT_10016ef4
;   undefined1 DAT_10016ef8
;   undefined1 DAT_10016ef9
;   undefined4 DAT_10016f00
;   undefined4 DAT_10016f04
;   ... and 8 more
;
; Called Functions:
;   crt_locale.c__CPtoLCID_FUN_10008130
;   crt_locale.c_getSystemCP_FUN_100080e0
;   crt_locale.c_setSBCS_FUN_10008190
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;   GetCPInfo
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 10007eb0
        ;   Label: crt_locale.c__setmbcp_FUN_10007eb0
    PUSH EBX                            ; 10007eb3
    PUSH ESI                            ; 10007eb4
    PUSH EDI                            ; 10007eb5
    PUSH EBP                            ; 10007eb6
    PUSH 0x19                           ; 10007eb7
    CALL crt_thread.c__lock_FUN_100059a0 ; 10007eb9
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    MOV EAX,dword ptr [ESP + 0x30]      ; 10007ebe
    ADD ESP,0x4                         ; 10007ec2
    PUSH EAX                            ; 10007ec5
    CALL crt_locale.c_getSystemCP_FUN_100080e0 ; 10007ec6
        ;   XREF to: 100080e0 (UNCONDITIONAL_CALL)  ; uint crt_locale.c_getSystemCP_FUN_100080e0()
    ADD ESP,0x4                         ; 10007ecb
    MOV EBP,EAX                         ; 10007ece
    CMP dword ptr [0x10016edc],EBP      ; 10007ed0 | DAT_10016edc
    JNZ 0x10007eec                      ; 10007ed6
        ;   XREF to: 10007eec (CONDITIONAL_JUMP)  ; LAB_10007eec
    PUSH 0x19                           ; 10007ed8
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10007eda
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10007edf
    XOR EAX,EAX                         ; 10007ee2
    POP EBP                             ; 10007ee4
    POP EDI                             ; 10007ee5
    POP ESI                             ; 10007ee6
    POP EBX                             ; 10007ee7
    ADD ESP,0x18                        ; 10007ee8
    RET                                 ; 10007eeb
    TEST EBP,EBP                        ; 10007eec
        ;   Label: LAB_10007eec
    JNZ 0x10007f09                      ; 10007eee
        ;   XREF to: 10007f09 (CONDITIONAL_JUMP)  ; LAB_10007f09
    CALL crt_locale.c_setSBCS_FUN_10008190 ; 10007ef0
        ;   XREF to: 10008190 (UNCONDITIONAL_CALL)  ; void crt_locale.c_setSBCS_FUN_10008190()
    PUSH 0x19                           ; 10007ef5
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10007ef7
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10007efc
    XOR EAX,EAX                         ; 10007eff
    POP EBP                             ; 10007f01
    POP EDI                             ; 10007f02
    POP ESI                             ; 10007f03
    POP EBX                             ; 10007f04
    ADD ESP,0x18                        ; 10007f05
    RET                                 ; 10007f08
    MOV dword ptr [ESP + 0x10],0x0      ; 10007f09
        ;   Label: LAB_10007f09
    MOV EAX,0x10016f00                  ; 10007f11 | DAT_10016f00
    CMP dword ptr [EAX],EBP             ; 10007f16 | DAT_10016f00 | DAT_10016f30
        ;   Label: LAB_10007f16
    JZ 0x10007fb9                       ; 10007f18
        ;   XREF to: 10007fb9 (CONDITIONAL_JUMP)  ; LAB_10007fb9
    ADD EAX,0x30                        ; 10007f1e
    INC dword ptr [ESP + 0x10]          ; 10007f21
    CMP EAX,0x10016ff0                  ; 10007f25 | DAT_10016ff0
    JC 0x10007f16                       ; 10007f2a
        ;   XREF to: 10007f16 (CONDITIONAL_JUMP)  ; LAB_10007f16
    LEA EAX,[ESP + 0x14]                ; 10007f2c
    PUSH EAX                            ; 10007f30
    PUSH EBP                            ; 10007f31
    CALL dword ptr [0x10242190]         ; 10007f32 | PTR_GetCPInfo_10242190
    CMP EAX,0x1                         ; 10007f38
    JNZ 0x1000809a                      ; 10007f3b
        ;   XREF to: 1000809a (CONDITIONAL_JUMP)  ; LAB_1000809a
    MOV EDI,0x10016dd8                  ; 10007f41 | DAT_10016dd8
    XOR EAX,EAX                         ; 10007f46
    MOV ECX,0x40                        ; 10007f48
    STOSD.REP ES:EDI                    ; 10007f4d | DAT_10016dd8 | DAT_10016ddc
    STOSB ES:EDI                        ; 10007f4f | DAT_10016ddc
    CMP dword ptr [ESP + 0x14],0x1      ; 10007f50
    JBE 0x1000806b                      ; 10007f55
        ;   XREF to: 1000806b (CONDITIONAL_JUMP)  ; LAB_1000806b
    LEA ESI,[ESP + 0x1a]                ; 10007f5b
    CMP byte ptr [ESP + 0x1a],AL        ; 10007f5f
    JZ 0x10007f91                       ; 10007f63
        ;   XREF to: 10007f91 (CONDITIONAL_JUMP)  ; LAB_10007f91
    MOV CL,byte ptr [ESI + 0x1]         ; 10007f65
        ;   Label: LAB_10007f65
    TEST CL,CL                          ; 10007f68
    JZ 0x10007f91                       ; 10007f6a
        ;   XREF to: 10007f91 (CONDITIONAL_JUMP)  ; LAB_10007f91
    XOR EAX,EAX                         ; 10007f6c
    XOR EDX,EDX                         ; 10007f6e
    MOV AL,byte ptr [ESI]               ; 10007f70
    MOV DL,CL                           ; 10007f72
    CMP EDX,EAX                         ; 10007f74
    JC 0x10007f89                       ; 10007f76
        ;   XREF to: 10007f89 (CONDITIONAL_JUMP)  ; LAB_10007f89
    OR byte ptr [EAX + 0x10016dd9],0x4  ; 10007f78 | DAT_10016dd8+1 | DAT_10016dd8+2
        ;   Label: LAB_10007f78
    INC EAX                             ; 10007f7f
    XOR ECX,ECX                         ; 10007f80
    MOV CL,byte ptr [ESI + 0x1]         ; 10007f82
    CMP ECX,EAX                         ; 10007f85
    JNC 0x10007f78                      ; 10007f87
        ;   XREF to: 10007f78 (CONDITIONAL_JUMP)  ; LAB_10007f78
    ADD ESI,0x2                         ; 10007f89
        ;   Label: LAB_10007f89
    CMP byte ptr [ESI],0x0              ; 10007f8c
    JNZ 0x10007f65                      ; 10007f8f
        ;   XREF to: 10007f65 (CONDITIONAL_JUMP)  ; LAB_10007f65
    MOV EAX,0x1                         ; 10007f91
        ;   Label: LAB_10007f91
    OR byte ptr [EAX + 0x10016dd9],0x8  ; 10007f96 | DAT_10016dd8+2 | DAT_10016dd8+3
        ;   Label: LAB_10007f96
    INC EAX                             ; 10007f9d
    CMP EAX,0xff                        ; 10007f9e
    JC 0x10007f96                       ; 10007fa3
        ;   XREF to: 10007f96 (CONDITIONAL_JUMP)  ; LAB_10007f96
    PUSH EBP                            ; 10007fa5
    MOV dword ptr [0x10016edc],EBP      ; 10007fa6 | DAT_10016edc
    CALL crt_locale.c__CPtoLCID_FUN_10008130 ; 10007fac
        ;   XREF to: 10008130 (UNCONDITIONAL_CALL)  ; int crt_locale.c__CPtoLCID_FUN_10008130(int codepage)
    ADD ESP,0x4                         ; 10007fb1
    JMP 0x10008072                      ; 10007fb4
        ;   XREF to: 10008072 (UNCONDITIONAL_JUMP)  ; LAB_10008072
    MOV EDI,0x10016dd8                  ; 10007fb9 | DAT_10016dd8
        ;   Label: LAB_10007fb9
    XOR EAX,EAX                         ; 10007fbe
    MOV ECX,0x40                        ; 10007fc0
    STOSD.REP ES:EDI                    ; 10007fc5 | DAT_10016dd8 | DAT_10016ddc
    STOSB ES:EDI                        ; 10007fc7 | DAT_10016ddc
    MOV ECX,dword ptr [ESP + 0x10]      ; 10007fc8
    LEA EDX,[ECX + ECX*0x2]             ; 10007fcc
    LEA EDI,[EDX*0x2 + 0x0]             ; 10007fcf
    LEA ECX,[EDI + EAX*0x1]             ; 10007fd6
        ;   Label: LAB_10007fd6
    LEA ESI,[ECX*0x8 + 0x10016f10]      ; 10007fd9 | DAT_10016f10
    CMP byte ptr [ESI],0x0              ; 10007fe0 | DAT_10016f10
    JZ 0x10008016                       ; 10007fe3
        ;   XREF to: 10008016 (CONDITIONAL_JUMP)  ; LAB_10008016
    MOV CL,byte ptr [ESI + 0x1]         ; 10007fe5 | DAT_10016f11 | DAT_10016f13
        ;   Label: LAB_10007fe5
    TEST CL,CL                          ; 10007fe8
    JZ 0x10008016                       ; 10007fea
        ;   XREF to: 10008016 (CONDITIONAL_JUMP)  ; LAB_10008016
    XOR EDX,EDX                         ; 10007fec
    XOR EBX,EBX                         ; 10007fee
    MOV DL,byte ptr [ESI]               ; 10007ff0 | DAT_10016f10
    MOV BL,CL                           ; 10007ff2
    CMP EBX,EDX                         ; 10007ff4
    JC 0x1000800e                       ; 10007ff6
        ;   XREF to: 1000800e (CONDITIONAL_JUMP)  ; LAB_1000800e
    MOV CL,byte ptr [EAX + 0x10016ef8]  ; 10007ff8 | DAT_10016ef8 | DAT_10016ef9
    OR byte ptr [EDX + 0x10016dd9],CL   ; 10007ffe | DAT_10016dd8+1 | DAT_10016dd8+2
        ;   Label: LAB_10007ffe
    INC EDX                             ; 10008004
    XOR EBX,EBX                         ; 10008005
    MOV BL,byte ptr [ESI + 0x1]         ; 10008007 | DAT_10016f11
    CMP EBX,EDX                         ; 1000800a
    JNC 0x10007ffe                      ; 1000800c
        ;   XREF to: 10007ffe (CONDITIONAL_JUMP)  ; LAB_10007ffe
    ADD ESI,0x2                         ; 1000800e
        ;   Label: LAB_1000800e
    CMP byte ptr [ESI],0x0              ; 10008011 | DAT_10016f12
    JNZ 0x10007fe5                      ; 10008014
        ;   XREF to: 10007fe5 (CONDITIONAL_JUMP)  ; LAB_10007fe5
    INC EAX                             ; 10008016
        ;   Label: LAB_10008016
    CMP EAX,0x4                         ; 10008017
    JC 0x10007fd6                       ; 1000801a
        ;   XREF to: 10007fd6 (CONDITIONAL_JUMP)  ; LAB_10007fd6
    PUSH EBP                            ; 1000801c
    MOV dword ptr [0x10016edc],EBP      ; 1000801d | DAT_10016edc
    CALL crt_locale.c__CPtoLCID_FUN_10008130 ; 10008023
        ;   XREF to: 10008130 (UNCONDITIONAL_CALL)  ; int crt_locale.c__CPtoLCID_FUN_10008130(int codepage)
    ADD ESP,0x4                         ; 10008028
    MOV EDX,0x10016ee8                  ; 1000802b | DAT_10016ee8
    MOV [0x10016ee0],EAX                ; 10008030 | DAT_10016ee0
    MOV EAX,dword ptr [ESP + 0x10]      ; 10008035
    SHL EAX,0x4                         ; 10008039
    MOV EBX,dword ptr [EAX + EAX*0x2 + 0x10016f08] ; 1000803c | DAT_10016f08
    PUSH 0x19                           ; 10008043
    LEA ECX,[EAX + EAX*0x2 + 0x10016f04] ; 10008045 | DAT_10016f04
    MOV EAX,dword ptr [ECX]             ; 1000804c
    MOV ECX,dword ptr [ECX + 0x8]       ; 1000804e
    MOV dword ptr [EDX],EAX             ; 10008051 | DAT_10016ee8
    MOV dword ptr [EDX + 0x4],EBX       ; 10008053 | DAT_10016eec
    MOV dword ptr [EDX + 0x8],ECX       ; 10008056 | DAT_10016ef0
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10008059
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 1000805e
    XOR EAX,EAX                         ; 10008061
    POP EBP                             ; 10008063
    POP EDI                             ; 10008064
    POP ESI                             ; 10008065
    POP EBX                             ; 10008066
    ADD ESP,0x18                        ; 10008067
    RET                                 ; 1000806a
    XOR EAX,EAX                         ; 1000806b
        ;   Label: LAB_1000806b
    MOV [0x10016edc],EAX                ; 1000806d | DAT_10016edc
    MOV ECX,0x10016ee8                  ; 10008072 | DAT_10016ee8
        ;   Label: LAB_10008072
    PUSH 0x19                           ; 10008077
    MOV [0x10016ee0],EAX                ; 10008079 | DAT_10016ee0
    XOR EAX,EAX                         ; 1000807e
    MOV dword ptr [ECX],EAX             ; 10008080 | DAT_10016ee8
    MOV dword ptr [ECX + 0x4],EAX       ; 10008082 | DAT_10016eec
    MOV dword ptr [ECX + 0x8],EAX       ; 10008085 | DAT_10016ef0
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10008088
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 1000808d
    XOR EAX,EAX                         ; 10008090
    POP EBP                             ; 10008092
    POP EDI                             ; 10008093
    POP ESI                             ; 10008094
    POP EBX                             ; 10008095
    ADD ESP,0x18                        ; 10008096
    RET                                 ; 10008099
    CMP dword ptr [0x10016ef4],0x0      ; 1000809a | DAT_10016ef4
        ;   Label: LAB_1000809a
    JZ 0x100080bc                       ; 100080a1
        ;   XREF to: 100080bc (CONDITIONAL_JUMP)  ; LAB_100080bc
    CALL crt_locale.c_setSBCS_FUN_10008190 ; 100080a3
        ;   XREF to: 10008190 (UNCONDITIONAL_CALL)  ; void crt_locale.c_setSBCS_FUN_10008190()
    PUSH 0x19                           ; 100080a8
    CALL crt_thread.c__unlock_FUN_10005a10 ; 100080aa
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 100080af
    XOR EAX,EAX                         ; 100080b2
    POP EBP                             ; 100080b4
    POP EDI                             ; 100080b5
    POP ESI                             ; 100080b6
    POP EBX                             ; 100080b7
    ADD ESP,0x18                        ; 100080b8
    RET                                 ; 100080bb
    PUSH 0x19                           ; 100080bc
        ;   Label: LAB_100080bc
    CALL crt_thread.c__unlock_FUN_10005a10 ; 100080be
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 100080c3
    MOV EAX,0xffffffff                  ; 100080c6
    POP EBP                             ; 100080cb
    POP EDI                             ; 100080cc
    POP ESI                             ; 100080cd
    POP EBX                             ; 100080ce
    ADD ESP,0x18                        ; 100080cf
    RET                                 ; 100080d2

