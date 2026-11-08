; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004050e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c2a370
;
; Called Functions:
;   FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004050e0
        ;   Label: FUN_004050e0
    PUSH ESI                            ; 004050e1
    PUSH EDI                            ; 004050e2
    PUSH EBP                            ; 004050e3
    SUB ESP,0x18                        ; 004050e4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004050e7
    MOV EAX,[0x01c2a370]                ; 004050eb | DAT_01c2a370
    MOV EDX,dword ptr [EBX + 0x14]      ; 004050f0
    ADD EDX,EAX                         ; 004050f3
    MOV ECX,dword ptr [EBX + 0x10]      ; 004050f5
    MOV EAX,EDX                         ; 004050f8
    MOV dword ptr [EBX + 0x14],EDX      ; 004050fa
    SAR EDX,0x1f                        ; 004050fd
    IDIV ECX                            ; 00405100
    MOV EDX,EAX                         ; 00405102
    MOV ESI,dword ptr [EBX + 0x8]       ; 00405104
    SAR EDX,0x1f                        ; 00405107
    IDIV ESI                            ; 0040510a
    CMP EDX,dword ptr [EBX + 0xc]       ; 0040510c
    JZ 0x0040511b                       ; 0040510f
        ;   XREF to: 0040511b (CONDITIONAL_JUMP)  ; LAB_0040511b
    MOV dword ptr [EBX + 0x18],0x1      ; 00405111
    MOV dword ptr [EBX + 0xc],EDX       ; 00405118
    XOR EBP,EBP                         ; 0040511b
        ;   Label: LAB_0040511b
    MOV dword ptr [ESP + 0x4],EBP       ; 0040511d
    MOV ESI,dword ptr [EBX + 0xc]       ; 00405121
    LEA EAX,[EBX + 0x1c]                ; 00405124
    SHL ESI,0x5                         ; 00405127
    LEA EDI,[ESP + 0x8]                 ; 0040512a
    ADD ESI,EAX                         ; 0040512e
    PUSH EDI                            ; 00405130
    MOV AL,byte ptr [ESI]               ; 00405131
        ;   Label: LAB_00405131
    MOV byte ptr [EDI],AL               ; 00405133
    CMP AL,0x0                          ; 00405135
    JZ 0x00405149                       ; 00405137
        ;   XREF to: 00405149 (CONDITIONAL_JUMP)  ; LAB_00405149
    MOV AL,byte ptr [ESI + 0x1]         ; 00405139
    ADD ESI,0x2                         ; 0040513c
    MOV byte ptr [EDI + 0x1],AL         ; 0040513f
    ADD EDI,0x2                         ; 00405142
    CMP AL,0x0                          ; 00405145
    JNZ 0x00405131                      ; 00405147
        ;   XREF to: 00405131 (CONDITIONAL_JUMP)  ; LAB_00405131
    POP EDI                             ; 00405149
        ;   Label: LAB_00405149
    MOV EAX,ESP                         ; 0040514a
    PUSH EAX                            ; 0040514c
    CALL FUN_00574e00                   ; 0040514d
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    MOV EAX,dword ptr [EBX + 0x18]      ; 00405152
    ADD ESP,0x4                         ; 00405155
    TEST EAX,EAX                        ; 00405158
    JNZ 0x0040516f                      ; 0040515a
        ;   XREF to: 0040516f (CONDITIONAL_JUMP)  ; LAB_0040516f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040515c
    SHL EAX,0x5                         ; 0040515f
    ADD EAX,EBX                         ; 00405162
    ADD EAX,0x1c                        ; 00405164
    ADD ESP,0x18                        ; 00405167
    POP EBP                             ; 0040516a
    POP EDI                             ; 0040516b
    POP ESI                             ; 0040516c
    POP EBX                             ; 0040516d
    RET                                 ; 0040516e
    MOV dword ptr [EBX + 0x18],EBP      ; 0040516f
        ;   Label: LAB_0040516f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00405172
    SHL EAX,0x5                         ; 00405175
    ADD EAX,EBX                         ; 00405178
    ADD EAX,0x1c                        ; 0040517a
    ADD ESP,0x18                        ; 0040517d
    POP EBP                             ; 00405180
    POP EDI                             ; 00405181
    POP ESI                             ; 00405182
    POP EBX                             ; 00405183
    RET                                 ; 00405184

