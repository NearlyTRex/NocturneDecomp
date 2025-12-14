; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_FormatFixedPoint_FUN_0060305c(char * buffer, int fixed_point_value, FormatSpec * spec_info)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   fixed_point_value
; FormatSpec *     Stack[0xc]:4   spec_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 006034a6
;
; Called Functions:
;   crt_stdio.c_IntegerToString_FUN_00607d18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060305c
        ;   Label: crt_stdio.c_FormatFixedPoint_FUN_0060305c
    PUSH ESI                            ; 0060305d
    PUSH EDI                            ; 0060305e
    PUSH EBP                            ; 0060305f
    SUB ESP,0x4                         ; 00603060
    MOV EBX,dword ptr [ESP + 0x18]      ; 00603063
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00603067
    MOV ESI,dword ptr [ESP + 0x20]      ; 0060306b
    MOV dword ptr [ESP],EAX             ; 0060306f
    TEST EAX,EAX                        ; 00603072
    JGE 0x00603081                      ; 00603074
        ;   XREF to: 00603081 (CONDITIONAL_JUMP)  ; LAB_00603081
    MOV EDX,EAX                         ; 00603076
    MOV byte ptr [EBX],0x2d             ; 00603078
    NEG EDX                             ; 0060307b
    INC EBX                             ; 0060307d
    MOV dword ptr [ESP],EDX             ; 0060307e
    CMP dword ptr [ESI + 0x8],-0x1      ; 00603081
        ;   Label: LAB_00603081
    JNZ 0x0060308e                      ; 00603085
        ;   XREF to: 0060308e (CONDITIONAL_JUMP)  ; LAB_0060308e
    MOV dword ptr [ESI + 0x8],0x4       ; 00603087
    PUSH 0xa                            ; 0060308e
        ;   Label: LAB_0060308e
    XOR EAX,EAX                         ; 00603090
    PUSH EBX                            ; 00603092
    MOV AX,word ptr [ESP + 0xa]         ; 00603093
    PUSH EAX                            ; 00603098
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 00603099
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0060309e
    MOV AH,byte ptr [EBX]               ; 006030a1
    MOV ECX,EBX                         ; 006030a3
    TEST AH,AH                          ; 006030a5
    JZ 0x006030b1                       ; 006030a7
        ;   XREF to: 006030b1 (CONDITIONAL_JUMP)  ; LAB_006030b1
    MOV DL,byte ptr [EBX + 0x1]         ; 006030a9
        ;   Label: LAB_006030a9
    INC EBX                             ; 006030ac
    TEST DL,DL                          ; 006030ad
    JNZ 0x006030a9                      ; 006030af
        ;   XREF to: 006030a9 (CONDITIONAL_JUMP)  ; LAB_006030a9
    CMP dword ptr [ESI + 0x8],0x0       ; 006030b1
        ;   Label: LAB_006030b1
    JZ 0x006030e9                       ; 006030b5
        ;   XREF to: 006030e9 (CONDITIONAL_JUMP)  ; LAB_006030e9
    MOV byte ptr [EBX],0x2e             ; 006030b7
    XOR EAX,EAX                         ; 006030ba
    MOV EBP,dword ptr [ESI + 0x8]       ; 006030bc
    INC EBX                             ; 006030bf
    TEST EBP,EBP                        ; 006030c0
    JLE 0x006030e6                      ; 006030c2
        ;   XREF to: 006030e6 (CONDITIONAL_JUMP)  ; LAB_006030e6
    XOR EDX,EDX                         ; 006030c4
        ;   Label: LAB_006030c4
    MOV word ptr [ESP + 0x2],DX         ; 006030c6
    MOV EDI,dword ptr [ESP]             ; 006030cb
    IMUL EDX,EDI,0xa                    ; 006030ce
    MOV dword ptr [ESP],EDX             ; 006030d1
    MOV DL,byte ptr [ESP + 0x2]         ; 006030d4
    ADD DL,0x30                         ; 006030d8
    MOV byte ptr [EBX],DL               ; 006030db
    INC EAX                             ; 006030dd
    MOV EBP,dword ptr [ESI + 0x8]       ; 006030de
    INC EBX                             ; 006030e1
    CMP EAX,EBP                         ; 006030e2
    JL 0x006030c4                       ; 006030e4
        ;   XREF to: 006030c4 (CONDITIONAL_JUMP)  ; LAB_006030c4
    MOV byte ptr [EBX],0x0              ; 006030e6
        ;   Label: LAB_006030e6
    TEST byte ptr [ESP + 0x1],0x80      ; 006030e9
        ;   Label: LAB_006030e9
    JZ 0x00603157                       ; 006030ee
        ;   XREF to: 00603157 (CONDITIONAL_JUMP)  ; LAB_00603157
    CMP EBX,ECX                         ; 006030f4
        ;   Label: LAB_006030f4
    JNZ 0x00603133                      ; 006030f6
        ;   XREF to: 00603133 (CONDITIONAL_JUMP)  ; LAB_00603133
    LEA EBX,[ECX + 0x1]                 ; 006030f8
    MOV byte ptr [ECX],0x31             ; 006030fb
    CMP byte ptr [EBX],0x30             ; 006030fe
    JNZ 0x0060310b                      ; 00603101
        ;   XREF to: 0060310b (CONDITIONAL_JUMP)  ; LAB_0060310b
    MOV AL,byte ptr [EBX + 0x1]         ; 00603103
        ;   Label: LAB_00603103
    INC EBX                             ; 00603106
    CMP AL,0x30                         ; 00603107
    JZ 0x00603103                       ; 00603109
        ;   XREF to: 00603103 (CONDITIONAL_JUMP)  ; LAB_00603103
    MOV AH,byte ptr [EBX]               ; 0060310b
        ;   Label: LAB_0060310b
    CMP AH,0x2e                         ; 0060310d
    JNZ 0x0060312a                      ; 00603110
        ;   XREF to: 0060312a (CONDITIONAL_JUMP)  ; LAB_0060312a
    MOV byte ptr [EBX],0x30             ; 00603112
    INC EBX                             ; 00603115
    MOV byte ptr [EBX],AH               ; 00603116
    MOV DL,byte ptr [EBX + 0x1]         ; 00603118
    INC EBX                             ; 0060311b
    CMP DL,0x30                         ; 0060311c
    JNZ 0x0060312a                      ; 0060311f
        ;   XREF to: 0060312a (CONDITIONAL_JUMP)  ; LAB_0060312a
    MOV DH,byte ptr [EBX + 0x1]         ; 00603121
        ;   Label: LAB_00603121
    INC EBX                             ; 00603124
    CMP DH,0x30                         ; 00603125
    JZ 0x00603121                       ; 00603128
        ;   XREF to: 00603121 (CONDITIONAL_JUMP)  ; LAB_00603121
    MOV byte ptr [EBX],0x30             ; 0060312a
        ;   Label: LAB_0060312a
    INC EBX                             ; 0060312d
    MOV byte ptr [EBX],0x0              ; 0060312e
    JMP 0x00603157                      ; 00603131
        ;   XREF to: 00603157 (UNCONDITIONAL_JUMP)  ; LAB_00603157
    MOV DL,byte ptr [EBX + -0x1]        ; 00603133
        ;   Label: LAB_00603133
    DEC EBX                             ; 00603136
    CMP DL,0x2e                         ; 00603137
    JNZ 0x0060313d                      ; 0060313a
        ;   XREF to: 0060313d (CONDITIONAL_JUMP)  ; LAB_0060313d
    DEC EBX                             ; 0060313c
    MOV DH,byte ptr [EBX]               ; 0060313d
        ;   Label: LAB_0060313d
    CMP DH,0x39                         ; 0060313f
    JZ 0x00603152                       ; 00603142
        ;   XREF to: 00603152 (CONDITIONAL_JUMP)  ; LAB_00603152
    MOV CL,DH                           ; 00603144
    INC CL                              ; 00603146
    MOV byte ptr [EBX],CL               ; 00603148
    ADD ESP,0x4                         ; 0060314a
    POP EBP                             ; 0060314d
    POP EDI                             ; 0060314e
    POP ESI                             ; 0060314f
    POP EBX                             ; 00603150
    RET                                 ; 00603151
    MOV byte ptr [EBX],0x30             ; 00603152
        ;   Label: LAB_00603152
    JMP 0x006030f4                      ; 00603155
        ;   XREF to: 006030f4 (UNCONDITIONAL_JUMP)  ; LAB_006030f4
    ADD ESP,0x4                         ; 00603157
        ;   Label: LAB_00603157
    POP EBP                             ; 0060315a
    POP EDI                             ; 0060315b
    POP ESI                             ; 0060315c
    POP EBX                             ; 0060315d
    RET                                 ; 0060315e

