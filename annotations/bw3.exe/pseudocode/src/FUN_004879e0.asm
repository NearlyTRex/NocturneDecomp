; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004879e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004879e0
        ;   Label: FUN_004879e0
    PUSH ESI                            ; 004879e1
    PUSH EDI                            ; 004879e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004879e3
    PUSH EBX                            ; 004879e7
    CALL FUN_00408600                   ; 004879e8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004879ed
    ADD EAX,0x248                       ; 004879f0
    PUSH EAX                            ; 004879f5
    CALL FUN_00462500                   ; 004879f6
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    LEA EBX,[EAX + 0xfffffdb8]          ; 004879fb
    MOV dword ptr [EBX + 0x154],0x5df244 ; 00487a01
    MOV dword ptr [EBX + 0x15c],0x3f800000 ; 00487a0b
    MOV ESI,0x5bd9ed                    ; 00487a15
    MOV dword ptr [EBX + 0x160],0x3f800000 ; 00487a1a
    ADD ESP,0x4                         ; 00487a24
    MOV dword ptr [EBX + 0x164],0x3f800000 ; 00487a27
    LEA EDI,[EBX + 0x16c]               ; 00487a31
    MOV dword ptr [EBX + 0x158],0x0     ; 00487a37
    PUSH EDI                            ; 00487a41
    MOV AL,byte ptr [ESI]               ; 00487a42
        ;   Label: LAB_00487a42
    MOV byte ptr [EDI],AL               ; 00487a44
    CMP AL,0x0                          ; 00487a46
    JZ 0x00487a5a                       ; 00487a48
        ;   XREF to: 00487a5a (CONDITIONAL_JUMP)  ; LAB_00487a5a
    MOV AL,byte ptr [ESI + 0x1]         ; 00487a4a
    ADD ESI,0x2                         ; 00487a4d
    MOV byte ptr [EDI + 0x1],AL         ; 00487a50
    ADD EDI,0x2                         ; 00487a53
    CMP AL,0x0                          ; 00487a56
    JNZ 0x00487a42                      ; 00487a58
        ;   XREF to: 00487a42 (CONDITIONAL_JUMP)  ; LAB_00487a42
    POP EDI                             ; 00487a5a
        ;   Label: LAB_00487a5a
    MOV ESI,0x5bd9f2                    ; 00487a5b
    LEA EDI,[EBX + 0x1d0]               ; 00487a60
    PUSH EDI                            ; 00487a66
    MOV AL,byte ptr [ESI]               ; 00487a67
        ;   Label: LAB_00487a67
    MOV byte ptr [EDI],AL               ; 00487a69
    CMP AL,0x0                          ; 00487a6b
    JZ 0x00487a7f                       ; 00487a6d
        ;   XREF to: 00487a7f (CONDITIONAL_JUMP)  ; LAB_00487a7f
    MOV AL,byte ptr [ESI + 0x1]         ; 00487a6f
    ADD ESI,0x2                         ; 00487a72
    MOV byte ptr [EDI + 0x1],AL         ; 00487a75
    ADD EDI,0x2                         ; 00487a78
    CMP AL,0x0                          ; 00487a7b
    JNZ 0x00487a67                      ; 00487a7d
        ;   XREF to: 00487a67 (CONDITIONAL_JUMP)  ; LAB_00487a67
    POP EDI                             ; 00487a7f
        ;   Label: LAB_00487a7f
    MOV dword ptr [EBX + 0x464],0x0     ; 00487a80
    MOV dword ptr [EBX + 0x468],0x3dcccccd ; 00487a8a
    MOV dword ptr [EBX + 0x168],0x1     ; 00487a94
    MOV dword ptr [EBX + 0x23c],0xff    ; 00487a9e
    MOV dword ptr [EBX + 0x240],0x0     ; 00487aa8
    MOV dword ptr [EBX + 0x244],0x0     ; 00487ab2
    PUSH 0x5bd9f7                       ; 00487abc
    MOV dword ptr [EBX + 0x238],0x1     ; 00487ac1
    LEA EAX,[EBX + 0x248]               ; 00487acb
    MOV dword ptr [EBX + 0x234],0x0     ; 00487ad1
    PUSH EAX                            ; 00487adb
    MOV dword ptr [EBX + 0x46c],0x0     ; 00487adc
    CALL FUN_004625f0                   ; 00487ae6
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x3c4],0x41a00000 ; 00487aeb
    MOV dword ptr [EBX + 0x3c8],0x42c80000 ; 00487af5
    MOV dword ptr [EBX + 0x3cc],0x3f800000 ; 00487aff
    MOV dword ptr [EBX + 0x3d0],0x0     ; 00487b09
    MOV dword ptr [EBX + 0x3d4],0x4000  ; 00487b13
    MOV dword ptr [EBX + 0x3d8],0x10000 ; 00487b1d
    MOV dword ptr [EBX + 0x3dc],0xffff  ; 00487b27
    MOV dword ptr [EBX + 0x3e0],0x3ecccccd ; 00487b31
    MOV dword ptr [EBX + 0x3f4],0x42480000 ; 00487b3b
    MOV dword ptr [EBX + 0x3e4],0x0     ; 00487b45
    MOV dword ptr [EBX + 0x3e8],0x0     ; 00487b4f
    MOV dword ptr [EBX + 0x3ec],0x1     ; 00487b59
    MOV dword ptr [EBX + 0x3f0],0x0     ; 00487b63
    MOV byte ptr [EBX + 0x3f8],0x0      ; 00487b6d
    MOV dword ptr [EBX + 0x460],0x1     ; 00487b74
    MOV dword ptr [EBX + 0x4b0],0x0     ; 00487b7e
    ADD ESP,0x8                         ; 00487b88
    MOV dword ptr [EBX + 0x4b8],0x0     ; 00487b8b
    MOV EAX,EBX                         ; 00487b95
    MOV dword ptr [EBX + 0x4bc],0x3f800000 ; 00487b97
    POP EDI                             ; 00487ba1
    POP ESI                             ; 00487ba2
    POP EBX                             ; 00487ba3
    RET                                 ; 00487ba4

