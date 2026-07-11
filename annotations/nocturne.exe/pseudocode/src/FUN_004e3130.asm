; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3130(undefined4 param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_004e7ed0 at 004e8049
;   FUN_004e85b0 at 004e86b4
;
; Called Functions:
;   FUN_004e29d0
;   FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3130
        ;   Label: FUN_004e3130
    PUSH ESI                            ; 004e3131
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e3132
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e3136
    PUSH ESI                            ; 004e313a
    MOV EBX,dword ptr [EBX]             ; 004e313b
    CALL FUN_004e29d0                   ; 004e313d
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e3142
    PUSH 0x2                            ; 004e3145
    PUSH ESI                            ; 004e3147
    MOV dword ptr [EBX],EAX             ; 004e3148
    CALL FUN_004e2ac0                   ; 004e314a
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    MOV EDX,0x4                         ; 004e314f
    ADD ESP,0x8                         ; 004e3154
    SUB EDX,EAX                         ; 004e3157
    PUSH ESI                            ; 004e3159
    MOV dword ptr [EBX + 0x4],EDX       ; 004e315a
    CALL FUN_004e29d0                   ; 004e315d
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e3162
    TEST EAX,EAX                        ; 004e3165
    SETZ AL                             ; 004e3167
    PUSH 0x4                            ; 004e316a
    AND EAX,0xff                        ; 004e316c
    PUSH ESI                            ; 004e3171
    MOV dword ptr [EBX + 0x8],EAX       ; 004e3172
    CALL FUN_004e2ac0                   ; 004e3175
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e317a
    PUSH 0x2                            ; 004e317d
    PUSH ESI                            ; 004e317f
    MOV dword ptr [EBX + 0xc],EAX       ; 004e3180
    CALL FUN_004e2ac0                   ; 004e3183
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e3188
    PUSH ESI                            ; 004e318b
    MOV dword ptr [EBX + 0x10],EAX      ; 004e318c
    CALL FUN_004e29d0                   ; 004e318f
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e3194
    PUSH ESI                            ; 004e3197
    MOV dword ptr [EBX + 0x14],EAX      ; 004e3198
    CALL FUN_004e29d0                   ; 004e319b
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e31a0
    PUSH 0x2                            ; 004e31a3
    PUSH ESI                            ; 004e31a5
    MOV dword ptr [EBX + 0x18],EAX      ; 004e31a6
    CALL FUN_004e2ac0                   ; 004e31a9
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e31ae
    PUSH 0x2                            ; 004e31b1
    PUSH ESI                            ; 004e31b3
    MOV dword ptr [EBX + 0x1c],EAX      ; 004e31b4
    CALL FUN_004e2ac0                   ; 004e31b7
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e31bc
    PUSH ESI                            ; 004e31bf
    MOV dword ptr [EBX + 0x20],EAX      ; 004e31c0
    CALL FUN_004e29d0                   ; 004e31c3
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e31c8
    PUSH ESI                            ; 004e31cb
    MOV dword ptr [EBX + 0x24],EAX      ; 004e31cc
    CALL FUN_004e29d0                   ; 004e31cf
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e29d0()
    ADD ESP,0x4                         ; 004e31d4
    PUSH 0x2                            ; 004e31d7
    PUSH ESI                            ; 004e31d9
    MOV dword ptr [EBX + 0x28],EAX      ; 004e31da
    CALL FUN_004e2ac0                   ; 004e31dd
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e31e2
    MOV dword ptr [EBX + 0x2c],EAX      ; 004e31e5
    POP ESI                             ; 004e31e8
    POP EBX                             ; 004e31e9
    RET                                 ; 004e31ea

