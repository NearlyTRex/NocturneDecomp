; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433130(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409c80
;   FUN_0040d180
;   FUN_0040d1c0
;   FUN_004fc070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433130
        ;   Label: FUN_00433130
    PUSH ESI                            ; 00433131
    PUSH EDI                            ; 00433132
    MOV EDI,dword ptr [ESP + 0x10]      ; 00433133
    MOV EBX,dword ptr [ESP + 0x14]      ; 00433137
    PUSH EBX                            ; 0043313b
    PUSH EDI                            ; 0043313c
    CALL FUN_00409c80                   ; 0043313d
        ;   XREF to: 00409c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00409c80()
    ADD ESP,0x8                         ; 00433142
    PUSH dword ptr [EDI + 0x2538]       ; 00433145
    LEA ESI,[EDI + 0x158]               ; 0043314b
    PUSH EBX                            ; 00433151
    ADD EDI,0x24a8                      ; 00433152
    CALL FUN_0040d180                   ; 00433158
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    MOV AH,byte ptr [EDI]               ; 0043315d
    ADD ESP,0x8                         ; 0043315f
    TEST AH,AH                          ; 00433162
    JNZ 0x0043316a                      ; 00433164
        ;   XREF to: 0043316a (CONDITIONAL_JUMP)  ; LAB_0043316a
    POP EDI                             ; 00433166
    POP ESI                             ; 00433167
    POP EBX                             ; 00433168
    RET                                 ; 00433169
    PUSH EDI                            ; 0043316a
        ;   Label: LAB_0043316a
    PUSH EBX                            ; 0043316b
    CALL FUN_0040d1c0                   ; 0043316c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x8                         ; 00433171
    PUSH ESI                            ; 00433174
    CALL FUN_004fc070                   ; 00433175
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 0043317a
    PUSH EAX                            ; 0043317d
    PUSH EBX                            ; 0043317e
    CALL FUN_0040d1c0                   ; 0043317f
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x8                         ; 00433184
    SUB ESP,0x4                         ; 00433187
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043318a
    MOV dword ptr [ESP],EAX             ; 0043318d
    PUSH EBX                            ; 00433190
    CALL FUN_0040d180                   ; 00433191
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    ADD ESP,0x8                         ; 00433196
    POP EDI                             ; 00433199
    POP ESI                             ; 0043319a
    POP EBX                             ; 0043319b
    RET                                 ; 0043319c

