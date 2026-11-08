; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004609e0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x36]:4  local_36
; undefined4       Stack[-0x2e]:4  local_2e
;
; XREF[4]:
;   FUN_00460980 at 004609c1
;   FUN_004e46c0 at 004e474e
;   FUN_00519f00 at 00519f3d
;   FUN_0051b280 at 0051b2b7
;
; Called Functions:
;   FUN_00461210
;   thunk_FUN_005bfdd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004609e0
        ;   Label: FUN_004609e0
    SUB ESP,0x148                       ; 004609e1
    MOV EBX,dword ptr [ESP + 0x150]     ; 004609e7
    TEST EBX,EBX                        ; 004609ee
    JZ 0x004609f7                       ; 004609f0
        ;   XREF to: 004609f7 (CONDITIONAL_JUMP)  ; LAB_004609f7
    CMP byte ptr [EBX],0x0              ; 004609f2
    JNZ 0x00460a01                      ; 004609f5
        ;   XREF to: 00460a01 (CONDITIONAL_JUMP)  ; LAB_00460a01
    XOR EAX,EAX                         ; 004609f7
        ;   Label: LAB_004609f7
    ADD ESP,0x148                       ; 004609f9
        ;   Label: LAB_004609f9
    POP EBX                             ; 004609ff
    RET                                 ; 00460a00
    PUSH EBX                            ; 00460a01
        ;   Label: LAB_00460a01
    LEA EAX,[ESP + 0x4]                 ; 00460a02
    PUSH EAX                            ; 00460a06
    CALL FUN_00461210                   ; 00460a07
        ;   XREF to: 00461210 (UNCONDITIONAL_CALL)  ; undefined FUN_00461210()
    ADD ESP,0x8                         ; 00460a0c
    TEST EAX,EAX                        ; 00460a0f
    JZ 0x004609f9                       ; 00460a11
        ;   XREF to: 004609f9 (CONDITIONAL_JUMP)  ; LAB_004609f9
    LEA EAX,[ESP + 0x100]               ; 00460a13
    PUSH EAX                            ; 00460a1a
    LEA EAX,[ESP + 0x4]                 ; 00460a1b
    PUSH EAX                            ; 00460a1f
    CALL thunk_FUN_005bfdd4             ; 00460a20
        ;   XREF to: 005b99c8 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005bfdd4()
    ADD ESP,0x8                         ; 00460a25
    TEST EAX,EAX                        ; 00460a28
    JNZ 0x004609f7                      ; 00460a2a
        ;   XREF to: 004609f7 (CONDITIONAL_JUMP)  ; LAB_004609f7
    PUSH EDI                            ; 00460a2c
    PUSH ESI                            ; 00460a2d
    MOV EAX,dword ptr [ESP + 0x11e]     ; 00460a2e
    MOV dword ptr [EBX + 0x204],EAX     ; 00460a35
    MOV EAX,dword ptr [ESP + 0x126]     ; 00460a3b
    MOV dword ptr [EBX + 0x200],0x0     ; 00460a42
    LEA ESI,[ESP + 0x8]                 ; 00460a4c
    MOV dword ptr [EBX + 0x20c],EAX     ; 00460a50
    LEA EDI,[EBX + 0x100]               ; 00460a56
    MOV dword ptr [EBX + 0x210],EAX     ; 00460a5c
    PUSH EDI                            ; 00460a62
    MOV AL,byte ptr [ESI]               ; 00460a63
        ;   Label: LAB_00460a63
    MOV byte ptr [EDI],AL               ; 00460a65
    CMP AL,0x0                          ; 00460a67
    JZ 0x00460a7b                       ; 00460a69
        ;   XREF to: 00460a7b (CONDITIONAL_JUMP)  ; LAB_00460a7b
    MOV AL,byte ptr [ESI + 0x1]         ; 00460a6b
    ADD ESI,0x2                         ; 00460a6e
    MOV byte ptr [EDI + 0x1],AL         ; 00460a71
    ADD EDI,0x2                         ; 00460a74
    CMP AL,0x0                          ; 00460a77
    JNZ 0x00460a63                      ; 00460a79
        ;   XREF to: 00460a63 (CONDITIONAL_JUMP)  ; LAB_00460a63
    POP EDI                             ; 00460a7b
        ;   Label: LAB_00460a7b
    MOV EAX,0x1                         ; 00460a7c
    MOV dword ptr [EBX + 0x208],0x0     ; 00460a81
    POP ESI                             ; 00460a8b
    POP EDI                             ; 00460a8c
    ADD ESP,0x148                       ; 00460a8d
    POP EBX                             ; 00460a93
    RET                                 ; 00460a94

