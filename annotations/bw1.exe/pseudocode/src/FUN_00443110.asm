; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443110(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00443530 at 004435bb
;   FUN_00443790 at 004437d3
;
; Called Functions:
;   FUN_00443070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443110
        ;   Label: FUN_00443110
    PUSH EBP                            ; 00443111
    MOV EAX,dword ptr [ESP + 0xc]       ; 00443112
    MOV EBX,dword ptr [ESP + 0x14]      ; 00443116
    MOV ECX,dword ptr [EAX]             ; 0044311a
    MOV EDX,dword ptr [EAX + 0xc]       ; 0044311c
    CMP EDX,ECX                         ; 0044311f
    JGE 0x0044318f                      ; 00443121
        ;   XREF to: 0044318f (CONDITIONAL_JUMP)  ; LAB_0044318f
    DEC EDX                             ; 00443123
    TEST dword ptr [EAX + 0xc],EDX      ; 00443124
    JNZ 0x0044312c                      ; 00443127
        ;   XREF to: 0044312c (CONDITIONAL_JUMP)  ; LAB_0044312c
    INC dword ptr [EAX + 0x8]           ; 00443129
    PUSH ESI                            ; 0044312c
        ;   Label: LAB_0044312c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0044312d
    MOV ECX,dword ptr [EAX + 0x10]      ; 00443130
    SHL EDX,0x4                         ; 00443133
    ADD EDX,ECX                         ; 00443136
    MOV ECX,dword ptr [ESP + 0x14]      ; 00443138
    MOV dword ptr [EDX],ECX             ; 0044313c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0044313e
    MOV ECX,dword ptr [EAX + 0x10]      ; 00443141
    SHL EDX,0x4                         ; 00443144
    MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX ; 00443147
    MOV ECX,dword ptr [EAX + 0xc]       ; 0044314b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0044314e
    SHL ECX,0x4                         ; 00443151
    MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff ; 00443154
    MOV ECX,EBX                         ; 0044315c
    MOV EDX,dword ptr [EAX + 0x10]      ; 0044315e
    MOV EBX,dword ptr [EAX + 0xc]       ; 00443161
    SHL ECX,0x4                         ; 00443164
    SHL EBX,0x4                         ; 00443167
    LEA ESI,[EDX + ECX*0x1]             ; 0044316a
    ADD EBX,EDX                         ; 0044316d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044316f
    MOV dword ptr [EBX + 0xc],EDX       ; 00443172
    MOV EDX,dword ptr [EAX + 0x10]      ; 00443175
    ADD ECX,EDX                         ; 00443178
    MOV EDX,dword ptr [EAX + 0xc]       ; 0044317a
    MOV dword ptr [ECX + 0x8],EDX       ; 0044317d
    MOV EBP,dword ptr [EAX + 0xc]       ; 00443180
    INC EBP                             ; 00443183
    XOR EDX,EDX                         ; 00443184
    MOV dword ptr [EAX + 0xc],EBP       ; 00443186
    POP ESI                             ; 00443189
    MOV EAX,EDX                         ; 0044318a
    POP EBP                             ; 0044318c
    POP EBX                             ; 0044318d
    RET                                 ; 0044318e
    PUSH EAX                            ; 0044318f
        ;   Label: LAB_0044318f
    CALL FUN_00443070                   ; 00443190
        ;   XREF to: 00443070 (UNCONDITIONAL_CALL)  ; undefined FUN_00443070()
    MOV EDX,0x1                         ; 00443195
    ADD ESP,0x4                         ; 0044319a
    MOV EAX,EDX                         ; 0044319d
    POP EBP                             ; 0044319f
    POP EBX                             ; 004431a0
    RET                                 ; 004431a1

