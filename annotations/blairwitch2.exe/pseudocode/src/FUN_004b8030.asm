; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b8030(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b460
;   undefined4 DAT_0061b5a8
;
; Called Functions:
;   FUN_0052ddf0
;   FUN_00538d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8030
        ;   Label: FUN_004b8030
    PUSH ESI                            ; 004b8031
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b8032
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b8036
    CMP EDX,dword ptr [EAX + 0x260]     ; 004b803a
    JZ 0x004b804c                       ; 004b8040
        ;   XREF to: 004b804c (CONDITIONAL_JUMP)  ; LAB_004b804c
    MOV dword ptr [EAX + 0x260],EDX     ; 004b8042
    TEST EDX,EDX                        ; 004b8048
    JZ 0x004b804f                       ; 004b804a
        ;   XREF to: 004b804f (CONDITIONAL_JUMP)  ; LAB_004b804f
    POP ESI                             ; 004b804c
        ;   Label: LAB_004b804c
    POP EBX                             ; 004b804d
    RET                                 ; 004b804e
    MOV EDX,dword ptr [0x0061b460]      ; 004b804f | DAT_0061b460
        ;   Label: LAB_004b804f
    PUSH 0x1                            ; 004b8055
    MOV ESI,dword ptr [EDX + 0xc]       ; 004b8057
    PUSH ESI                            ; 004b805a
    MOV EAX,[0x0061b5a8]                ; 004b805b | DAT_0061b5a8
    PUSH EAX                            ; 004b8060
    MOV EBX,dword ptr [EAX + 0x15aeb8]  ; 004b8061
    CALL FUN_00538d10                   ; 004b8067
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00538d10()
    MOV EAX,[0x0061b460]                ; 004b806c | DAT_0061b460
    MOV dword ptr [EAX + 0x10],0x0      ; 004b8071
    MOV EAX,[0x0061b5a8]                ; 004b8078 | DAT_0061b5a8
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b807d
    ADD ESP,0xc                         ; 004b8083
    CMP EBX,EDX                         ; 004b8086
    JNZ 0x004b804c                      ; 004b8088
        ;   XREF to: 004b804c (CONDITIONAL_JUMP)  ; LAB_004b804c
    PUSH EDX                            ; 004b808a
    PUSH EAX                            ; 004b808b
    CALL FUN_0052ddf0                   ; 004b808c
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 004b8091
    POP ESI                             ; 004b8094
    POP EBX                             ; 004b8095
    RET                                 ; 004b8096

