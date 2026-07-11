; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_005049b0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ff2c0 at 00501037
;
; Referenced Globals:
;   undefined4 DAT_0058fa9a
;   undefined4 DAT_0058faa2
;   undefined4 DAT_0058faaa
;   undefined4 DAT_005bed68
;   undefined4 DAT_00765a60
;   undefined4 DAT_00765a98
;   undefined4 DAT_01e56418
;   undefined4 DAT_01e56c2c
;
; Called Functions:
;   FUN_00473cb0
;   FUN_004fe180
;   FUN_005261b0
;   FUN_00526340
;   FUN_005263c0
;   FUN_0052ea40
;   FUN_0052ebc0
;   FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005049b0
        ;   Label: FUN_005049b0
    PUSH ESI                            ; 005049b1
    PUSH EDI                            ; 005049b2
    PUSH EBP                            ; 005049b3
    MOV EBP,ESP                         ; 005049b4
    SUB ESP,0x18                        ; 005049b6
    AND ESP,0xfffffff8                  ; 005049b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005049bc
    MOV ESI,dword ptr [EBP + 0x20]      ; 005049bf
    XOR EDX,EDX                         ; 005049c2
    FLDZ                                ; 005049c4
    MOV dword ptr [ESP + 0x10],EDX      ; 005049c6
    FCOMP float ptr [EBX + 0x44c]       ; 005049ca
    FNSTSW AX                           ; 005049d0
    SAHF                                ; 005049d2
    JA 0x00504a1d                       ; 005049d3
        ;   XREF to: 00504a1d (CONDITIONAL_JUMP)  ; LAB_00504a1d
    MOV EAX,dword ptr [EBX + 0x44c]     ; 005049d5
    MOV dword ptr [ESP],EAX             ; 005049db
    PUSH 0x765a60                       ; 005049de | DAT_00765a60
        ;   Label: LAB_005049de
    MOV ECX,dword ptr [0x00765a98]      ; 005049e3 | DAT_00765a98
    PUSH ECX                            ; 005049e9
    MOV EDI,dword ptr [EBP + 0x18]      ; 005049ea
    PUSH EDI                            ; 005049ed
    CALL FUN_004fe180                   ; 005049ee
        ;   XREF to: 004fe180 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe180()
    ADD ESP,0xc                         ; 005049f3
    MOV dword ptr [EBX + 0x4],EAX       ; 005049f6
    TEST EAX,EAX                        ; 005049f9
    JNZ 0x00504ac2                      ; 005049fb
        ;   XREF to: 00504ac2 (CONDITIONAL_JUMP)  ; LAB_00504ac2
    CMP dword ptr [0x01e56c2c],0x0      ; 00504a01 | DAT_01e56c2c
    JZ 0x00504aaf                       ; 00504a08
        ;   XREF to: 00504aaf (CONDITIONAL_JUMP)  ; LAB_00504aaf
    MOV dword ptr [ESP + 0xc],EAX       ; 00504a0e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504a12
    MOV ESP,EBP                         ; 00504a16
    POP EBP                             ; 00504a18
    POP EDI                             ; 00504a19
    POP ESI                             ; 00504a1a
    POP EBX                             ; 00504a1b
    RET                                 ; 00504a1c
    MOV EAX,ESP                         ; 00504a1d
        ;   Label: LAB_00504a1d
    PUSH EAX                            ; 00504a1f
    PUSH 0x58fa9a                       ; 00504a20 | DAT_0058fa9a
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00504a25
    PUSH ECX                            ; 00504a28
    CALL FUN_00566b5c                   ; 00504a29
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0xc                         ; 00504a2e
    CMP EAX,0x1                         ; 00504a31
    JZ 0x005049de                       ; 00504a34
        ;   XREF to: 005049de (CONDITIONAL_JUMP)  ; LAB_005049de
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00504a36
    PUSH EDI                            ; 00504a39
    MOV EAX,[0x005bed68]                ; 00504a3a | DAT_005bed68
    PUSH EAX                            ; 00504a3f
    CALL FUN_0052ebc0                   ; 00504a40
        ;   XREF to: 0052ebc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ebc0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00504a45
    FLD float ptr [ESP + 0x1c]          ; 00504a49
    ADD ESP,0x8                         ; 00504a4d
    FST float ptr [ESP]                 ; 00504a50
    FLDZ                                ; 00504a53
    FCOMPP                              ; 00504a55
    FNSTSW AX                           ; 00504a57
    SAHF                                ; 00504a59
    JA 0x00504a76                       ; 00504a5a
        ;   XREF to: 00504a76 (CONDITIONAL_JUMP)  ; LAB_00504a76
    CMP dword ptr [0x01e56418],0x0      ; 00504a5c | DAT_01e56418
        ;   Label: LAB_00504a5c
    JNZ 0x005049de                      ; 00504a63
        ;   XREF to: 005049de (CONDITIONAL_JUMP)  ; LAB_005049de
    MOV dword ptr [ESP + 0x10],0x1      ; 00504a69
    JMP 0x005049de                      ; 00504a71
        ;   XREF to: 005049de (UNCONDITIONAL_JUMP)  ; LAB_005049de
    PUSH EDI                            ; 00504a76
        ;   Label: LAB_00504a76
    PUSH 0x1e56c30                      ; 00504a77
    CALL FUN_00473cb0                   ; 00504a7c
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cb0()
    ADD ESP,0x8                         ; 00504a81
    MOV EDI,ESI                         ; 00504a84
    SUB ECX,ECX                         ; 00504a86
    DEC ECX                             ; 00504a88
    XOR EAX,EAX                         ; 00504a89
    SCASB.REPNE ES:EDI                  ; 00504a8b
    NOT ECX                             ; 00504a8d
    DEC ECX                             ; 00504a8f
    XOR EDI,EDI                         ; 00504a90
    MOV dword ptr [ESP + 0x4],ECX       ; 00504a92
    MOV dword ptr [ESP + 0x8],EDI       ; 00504a96
    FILD qword ptr [ESP + 0x4]          ; 00504a9a
    FMUL double ptr [0x0058faa2]        ; 00504a9e | DAT_0058faa2
    FADD double ptr [0x0058faaa]        ; 00504aa4 | DAT_0058faaa
    FSTP float ptr [ESP]                ; 00504aaa
    JMP 0x00504a5c                      ; 00504aad
        ;   XREF to: 00504a5c (UNCONDITIONAL_JUMP)  ; LAB_00504a5c
    MOV dword ptr [ESP + 0xc],0xbf800000 ; 00504aaf
        ;   Label: LAB_00504aaf
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504ab7
    MOV ESP,EBP                         ; 00504abb
    POP EBP                             ; 00504abd
    POP EDI                             ; 00504abe
    POP ESI                             ; 00504abf
    POP EBX                             ; 00504ac0
    RET                                 ; 00504ac1
    MOV EDX,dword ptr [EBX + 0x14]      ; 00504ac2
        ;   Label: LAB_00504ac2
    MOV dword ptr [EBX + 0x8],EAX       ; 00504ac5
    TEST EDX,EDX                        ; 00504ac8
    JZ 0x00504b4c                       ; 00504aca
        ;   XREF to: 00504b4c (CONDITIONAL_JUMP)  ; LAB_00504b4c
    CMP dword ptr [0x01e56418],0x0      ; 00504ad0 | DAT_01e56418
        ;   Label: LAB_00504ad0
    JNZ 0x00504b3a                      ; 00504ad7
        ;   XREF to: 00504b3a (CONDITIONAL_JUMP)  ; LAB_00504b3a
    LEA EDI,[EBX + 0x4c]                ; 00504ad9
    PUSH EDI                            ; 00504adc
    MOV AL,byte ptr [ESI]               ; 00504add
        ;   Label: LAB_00504add
    MOV byte ptr [EDI],AL               ; 00504adf
    CMP AL,0x0                          ; 00504ae1
    JZ 0x00504af5                       ; 00504ae3
        ;   XREF to: 00504af5 (CONDITIONAL_JUMP)  ; LAB_00504af5
    MOV AL,byte ptr [ESI + 0x1]         ; 00504ae5
    ADD ESI,0x2                         ; 00504ae8
    MOV byte ptr [EDI + 0x1],AL         ; 00504aeb
    ADD EDI,0x2                         ; 00504aee
    CMP AL,0x0                          ; 00504af1
    JNZ 0x00504add                      ; 00504af3
        ;   XREF to: 00504add (CONDITIONAL_JUMP)  ; LAB_00504add
    POP EDI                             ; 00504af5
        ;   Label: LAB_00504af5
    MOV EAX,dword ptr [EBX + 0x4]       ; 00504af6
    TEST EAX,EAX                        ; 00504af9
    JZ 0x00504b08                       ; 00504afb
        ;   XREF to: 00504b08 (CONDITIONAL_JUMP)  ; LAB_00504b08
    MOV ECX,EAX                         ; 00504afd
    MOV EAX,dword ptr [ESP]             ; 00504aff
    MOV dword ptr [ECX + 0x2610],EAX    ; 00504b02
    CMP dword ptr [ESP + 0x10],0x0      ; 00504b08
        ;   Label: LAB_00504b08
    JZ 0x00504b3a                       ; 00504b0d
        ;   XREF to: 00504b3a (CONDITIONAL_JUMP)  ; LAB_00504b3a
    CALL FUN_00526340                   ; 00504b0f
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    PUSH 0x2                            ; 00504b14
    CALL FUN_005261b0                   ; 00504b16
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005261b0()
    ADD ESP,0x4                         ; 00504b1b
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00504b1e
    PUSH ECX                            ; 00504b21
    PUSH EBX                            ; 00504b22
    MOV ESI,dword ptr [0x005bed68]      ; 00504b23 | DAT_005bed68
    PUSH ESI                            ; 00504b29
    CALL FUN_0052ea40                   ; 00504b2a
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ea40()
    ADD ESP,0xc                         ; 00504b2f
    MOV dword ptr [EBX + 0x24],EAX      ; 00504b32
    CALL FUN_005263c0                   ; 00504b35
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV EAX,dword ptr [ESP]             ; 00504b3a
        ;   Label: LAB_00504b3a
    MOV dword ptr [ESP + 0xc],EAX       ; 00504b3d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00504b41
    MOV ESP,EBP                         ; 00504b45
    POP EBP                             ; 00504b47
    POP EDI                             ; 00504b48
    POP ESI                             ; 00504b49
    POP EBX                             ; 00504b4a
    RET                                 ; 00504b4b
    MOV ECX,dword ptr [EBX + 0x4]       ; 00504b4c
        ;   Label: LAB_00504b4c
    CMP ECX,dword ptr [EBX + 0xc]       ; 00504b4f
    JZ 0x00504ad0                       ; 00504b52
        ;   XREF to: 00504ad0 (CONDITIONAL_JUMP)  ; LAB_00504ad0
    MOV EAX,dword ptr [EBX + 0x4]       ; 00504b58
    MOV dword ptr [EBX + 0x10],0x1      ; 00504b5b
    MOV dword ptr [EBX + 0xc],EAX       ; 00504b62
    JMP 0x00504ad0                      ; 00504b65
        ;   XREF to: 00504ad0 (UNCONDITIONAL_JUMP)  ; LAB_00504ad0

