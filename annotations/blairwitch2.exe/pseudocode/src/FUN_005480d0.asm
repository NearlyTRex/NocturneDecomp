; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005480d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_004154f0
;   FUN_00416700
;   FUN_00548130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005480d0
        ;   Label: FUN_005480d0
    PUSH ESI                            ; 005480d1
    PUSH EDI                            ; 005480d2
    PUSH EBP                            ; 005480d3
    PUSH 0x0                            ; 005480d4
    PUSH 0x0                            ; 005480d6
    PUSH 0x0                            ; 005480d8
    MOV EDX,dword ptr [ESP + 0x34]      ; 005480da
    PUSH EDX                            ; 005480de
    MOV ECX,dword ptr [ESP + 0x34]      ; 005480df
    PUSH ECX                            ; 005480e3
    MOV EBX,dword ptr [ESP + 0x34]      ; 005480e4
    PUSH EBX                            ; 005480e8
    MOV ESI,dword ptr [ESP + 0x34]      ; 005480e9
    PUSH ESI                            ; 005480ed
    CALL FUN_004154f0                   ; 005480ee
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 005480f3
    MOV EDI,dword ptr [ESP + 0x18]      ; 005480f6
    PUSH EDI                            ; 005480fa
    PUSH EAX                            ; 005480fb
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005480fc
    PUSH EBP                            ; 00548100
    MOV EBX,EAX                         ; 00548101
    MOV ESI,EAX                         ; 00548103
    CALL FUN_00548130                   ; 00548105
        ;   XREF to: 00548130 (UNCONDITIONAL_CALL)  ; undefined FUN_00548130()
    ADD ESP,0xc                         ; 0054810a
    TEST EBX,EBX                        ; 0054810d
    JNZ 0x00548118                      ; 0054810f
        ;   XREF to: 00548118 (CONDITIONAL_JUMP)  ; LAB_00548118
    MOV EAX,ESI                         ; 00548111
    POP EBP                             ; 00548113
    POP EDI                             ; 00548114
    POP ESI                             ; 00548115
    POP EBX                             ; 00548116
    RET                                 ; 00548117
    PUSH EBX                            ; 00548118
        ;   Label: LAB_00548118
    CALL FUN_00416700                   ; 00548119
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    ADD ESP,0x4                         ; 0054811e
    MOV EAX,ESI                         ; 00548121
    POP EBP                             ; 00548123
    POP EDI                             ; 00548124
    POP ESI                             ; 00548125
    POP EBX                             ; 00548126
    RET                                 ; 00548127

