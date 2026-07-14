; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char FUN_1000ff20(byte *param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_1000e650 at 1000e673
;   FUN_1000e6b0 at 1000e6d3
;   FUN_1000f3c0 at 1000f4a2
;
; Referenced Globals:
;   undefined4 DAT_10017758
;   undefined4 DAT_10017760
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   __lock
;   __tolower_lk
;   FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 1000ff20
        ;   Label: FUN_1000ff20
    MOV EBP,ESP                         ; 1000ff21
    PUSH EDI                            ; 1000ff23
    PUSH ESI                            ; 1000ff24
    PUSH EBX                            ; 1000ff25
    MOV ESI,dword ptr [EBP + 0xc]       ; 1000ff26
    MOV EDI,dword ptr [EBP + 0x8]       ; 1000ff29
    LEA EAX,[0x10017758]                ; 1000ff2c | DAT_10017758
    CMP dword ptr [EAX + 0x8],0x0       ; 1000ff32 | DAT_10017760
    JNZ 0x1000ff73                      ; 1000ff36
        ;   XREF to: 1000ff73 (CONDITIONAL_JUMP)  ; LAB_1000ff73
    MOV AL,0xff                         ; 1000ff38
    MOV EAX,EAX                         ; 1000ff3a
    OR AL,AL                            ; 1000ff3c
        ;   Label: LAB_1000ff3c
    JZ 0x1000ff6e                       ; 1000ff3e
        ;   XREF to: 1000ff6e (CONDITIONAL_JUMP)  ; LAB_1000ff6e
    MOV AL,byte ptr [ESI]               ; 1000ff40
    INC ESI                             ; 1000ff42
    MOV AH,byte ptr [EDI]               ; 1000ff43
    INC EDI                             ; 1000ff45
    CMP AH,AL                           ; 1000ff46
    JZ 0x1000ff3c                       ; 1000ff48
        ;   XREF to: 1000ff3c (CONDITIONAL_JUMP)  ; LAB_1000ff3c
    SUB AL,0x41                         ; 1000ff4a
    CMP AL,0x1a                         ; 1000ff4c
    SBB CL,CL                           ; 1000ff4e
    AND CL,0x20                         ; 1000ff50
    ADD AL,CL                           ; 1000ff53
    ADD AL,0x41                         ; 1000ff55
    XCHG AL,AH                          ; 1000ff57
    SUB AL,0x41                         ; 1000ff59
    CMP AL,0x1a                         ; 1000ff5b
    SBB CL,CL                           ; 1000ff5d
    AND CL,0x20                         ; 1000ff5f
    ADD AL,CL                           ; 1000ff62
    ADD AL,0x41                         ; 1000ff64
    CMP AL,AH                           ; 1000ff66
    JZ 0x1000ff3c                       ; 1000ff68
        ;   XREF to: 1000ff3c (CONDITIONAL_JUMP)  ; LAB_1000ff3c
    SBB AL,AL                           ; 1000ff6a
    SBB AL,0xff                         ; 1000ff6c
    MOVSX EAX,AL                        ; 1000ff6e
        ;   Label: LAB_1000ff6e
    JMP 0x1000ffe2                      ; 1000ff71
        ;   XREF to: 1000ffe2 (UNCONDITIONAL_JUMP)  ; LAB_1000ffe2
    CMP dword ptr [0x10240854],0x0      ; 1000ff73 | DAT_10240854
        ;   Label: LAB_1000ff73
    JG 0x1000ff86                       ; 1000ff7a
        ;   XREF to: 1000ff86 (CONDITIONAL_JUMP)  ; LAB_1000ff86
    INC dword ptr [0x10240858]          ; 1000ff7c | DAT_10240858
    PUSH 0x0                            ; 1000ff82
    JMP 0x1000ff94                      ; 1000ff84
        ;   XREF to: 1000ff94 (UNCONDITIONAL_JUMP)  ; LAB_1000ff94
    PUSH 0x13                           ; 1000ff86
        ;   Label: LAB_1000ff86
    CALL __lock                         ; 1000ff88
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV dword ptr [ESP],0x1             ; 1000ff8d
    MOV EAX,0xff                        ; 1000ff94
        ;   Label: LAB_1000ff94
    XOR EBX,EBX                         ; 1000ff99
    NOP                                 ; 1000ff9b
    OR AL,AL                            ; 1000ff9c
        ;   Label: LAB_1000ff9c
    JZ 0x1000ffc7                       ; 1000ff9e
        ;   XREF to: 1000ffc7 (CONDITIONAL_JUMP)  ; LAB_1000ffc7
    MOV AL,byte ptr [ESI]               ; 1000ffa0
    INC ESI                             ; 1000ffa2
    MOV BL,byte ptr [EDI]               ; 1000ffa3
    INC EDI                             ; 1000ffa5
    CMP AL,BL                           ; 1000ffa6
    JZ 0x1000ff9c                       ; 1000ffa8
        ;   XREF to: 1000ff9c (CONDITIONAL_JUMP)  ; LAB_1000ff9c
    PUSH EAX                            ; 1000ffaa
    PUSH EBX                            ; 1000ffab
    CALL __tolower_lk                   ; 1000ffac
        ;   XREF to: 10009be0 (UNCONDITIONAL_CALL)  ; undefined __tolower_lk()
    MOV EBX,EAX                         ; 1000ffb1
    ADD ESP,0x4                         ; 1000ffb3
    CALL __tolower_lk                   ; 1000ffb6
        ;   XREF to: 10009be0 (UNCONDITIONAL_CALL)  ; undefined __tolower_lk()
    ADD ESP,0x4                         ; 1000ffbb
    CMP BL,AL                           ; 1000ffbe
    JZ 0x1000ff9c                       ; 1000ffc0
        ;   XREF to: 1000ff9c (CONDITIONAL_JUMP)  ; LAB_1000ff9c
    SBB EAX,EAX                         ; 1000ffc2
    SBB EAX,-0x1                        ; 1000ffc4
    MOV EBX,EAX                         ; 1000ffc7
        ;   Label: LAB_1000ffc7
    POP EAX                             ; 1000ffc9
    OR EAX,EAX                          ; 1000ffca
    JNZ 0x1000ffd6                      ; 1000ffcc
        ;   XREF to: 1000ffd6 (CONDITIONAL_JUMP)  ; LAB_1000ffd6
    DEC dword ptr [0x10240858]          ; 1000ffce | DAT_10240858
    JMP 0x1000ffe0                      ; 1000ffd4
        ;   XREF to: 1000ffe0 (UNCONDITIONAL_JUMP)  ; LAB_1000ffe0
    PUSH 0x13                           ; 1000ffd6
        ;   Label: LAB_1000ffd6
    CALL FUN_10005a10                   ; 1000ffd8
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000ffdd
    MOV EAX,EBX                         ; 1000ffe0
        ;   Label: LAB_1000ffe0
    POP EBX                             ; 1000ffe2
        ;   Label: LAB_1000ffe2
    POP ESI                             ; 1000ffe3
    POP EDI                             ; 1000ffe4
    LEAVE                               ; 1000ffe5
    RET                                 ; 1000ffe6

