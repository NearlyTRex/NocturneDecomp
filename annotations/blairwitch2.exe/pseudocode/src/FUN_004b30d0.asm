; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b30d0(void)
;
;
; XREF[1]:
;   FUN_004b5190 at 004b55f1
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_004011a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004b30d0
        ;   Label: FUN_004b30d0
    MOV EAX,[0x006141b8]                ; 004b30d2 | DAT_006141b8
    PUSH EDX                            ; 004b30d7
    DEC EAX                             ; 004b30d8
    PUSH EAX                            ; 004b30d9
    PUSH EDX                            ; 004b30da
    PUSH EDX                            ; 004b30db
    MOV dword ptr [0x01c35e60],EDX      ; 004b30dc | DAT_01c35e60
    CALL FUN_004011a0                   ; 004b30e2
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004b30e7
    MOV EAX,[0x006141b8]                ; 004b30ea | DAT_006141b8
    PUSH 0x1                            ; 004b30ef
    SUB EAX,0x2                         ; 004b30f1
    PUSH EAX                            ; 004b30f4
    PUSH 0x1                            ; 004b30f5
    PUSH 0x1                            ; 004b30f7
    CALL FUN_004011a0                   ; 004b30f9
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b30fe | DAT_006141bc
    ADD ESP,0x10                        ; 004b3103
    DEC EAX                             ; 004b3106
    MOV EDX,dword ptr [0x006141b8]      ; 004b3107 | DAT_006141b8
    PUSH EAX                            ; 004b310d
    DEC EDX                             ; 004b310e
    PUSH EDX                            ; 004b310f
    PUSH EAX                            ; 004b3110
    PUSH 0x0                            ; 004b3111
    CALL FUN_004011a0                   ; 004b3113
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b3118 | DAT_006141bc
    ADD ESP,0x10                        ; 004b311d
    SUB EAX,0x2                         ; 004b3120
    MOV EDX,dword ptr [0x006141b8]      ; 004b3123 | DAT_006141b8
    PUSH EAX                            ; 004b3129
    SUB EDX,0x2                         ; 004b312a
    PUSH EDX                            ; 004b312d
    PUSH EAX                            ; 004b312e
    PUSH 0x1                            ; 004b312f
    CALL FUN_004011a0                   ; 004b3131
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b3136 | DAT_006141bc
    ADD ESP,0x10                        ; 004b313b
    SUB EAX,0x2                         ; 004b313e
    PUSH EAX                            ; 004b3141
    PUSH 0x0                            ; 004b3142
    PUSH 0x1                            ; 004b3144
    PUSH 0x0                            ; 004b3146
    CALL FUN_004011a0                   ; 004b3148
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b314d | DAT_006141bc
    ADD ESP,0x10                        ; 004b3152
    SUB EAX,0x3                         ; 004b3155
    PUSH EAX                            ; 004b3158
    PUSH 0x1                            ; 004b3159
    PUSH 0x2                            ; 004b315b
    PUSH 0x1                            ; 004b315d
    CALL FUN_004011a0                   ; 004b315f
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b3164 | DAT_006141bc
    ADD ESP,0x10                        ; 004b3169
    SUB EAX,0x2                         ; 004b316c
    PUSH EAX                            ; 004b316f
    MOV EAX,[0x006141b8]                ; 004b3170 | DAT_006141b8
    DEC EAX                             ; 004b3175
    PUSH EAX                            ; 004b3176
    PUSH 0x1                            ; 004b3177
    PUSH EAX                            ; 004b3179
    CALL FUN_004011a0                   ; 004b317a
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    MOV EAX,[0x006141bc]                ; 004b317f | DAT_006141bc
    ADD ESP,0x10                        ; 004b3184
    SUB EAX,0x3                         ; 004b3187
    PUSH EAX                            ; 004b318a
    MOV EAX,[0x006141b8]                ; 004b318b | DAT_006141b8
    SUB EAX,0x2                         ; 004b3190
    PUSH EAX                            ; 004b3193
    PUSH 0x2                            ; 004b3194
    PUSH EAX                            ; 004b3196
    CALL FUN_004011a0                   ; 004b3197
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004b319c
    RET                                 ; 004b319f

