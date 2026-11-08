; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004390c0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_00407b30 at 00407b71
;   FUN_00407e30 at 00407e71
;   FUN_00439da0 at 0043a361
;   FUN_0046d550 at 0046d5e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004390c0
        ;   Label: FUN_004390c0
    PUSH ESI                            ; 004390c1
    PUSH EDI                            ; 004390c2
    PUSH EBP                            ; 004390c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004390c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004390c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004390cc
    MOV EBX,dword ptr [EDI]             ; 004390d0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004390d2
    MOV EAX,dword ptr [ECX]             ; 004390d5
    MOV EBP,dword ptr [EDI + 0x8]       ; 004390d7
    ADD EBX,EDX                         ; 004390da
    ADD EAX,EBP                         ; 004390dc
    SUB EBX,EAX                         ; 004390de
    MOV EAX,EDX                         ; 004390e0
    MOV EDX,dword ptr [ECX]             ; 004390e2
    SUB EAX,EDX                         ; 004390e4
    MOV EDX,EAX                         ; 004390e6
    CMP EDX,EBX                         ; 004390e8
    JGE 0x004390fe                      ; 004390ea
        ;   XREF to: 004390fe (CONDITIONAL_JUMP)  ; LAB_004390fe
    NEG EBX                             ; 004390ec
    CMP EDX,EBX                         ; 004390ee
    JLE 0x00439105                      ; 004390f0
        ;   XREF to: 00439105 (CONDITIONAL_JUMP)  ; LAB_00439105
    NEG EBX                             ; 004390f2
    XOR EAX,EAX                         ; 004390f4
    SAR EDX,0x1                         ; 004390f6
    RCR EAX,0x1                         ; 004390f8
    IDIV EBX                            ; 004390fa
    JMP 0x0043910c                      ; 004390fc
        ;   XREF to: 0043910c (UNCONDITIONAL_JUMP)  ; LAB_0043910c
    MOV EAX,0x7fffffff                  ; 004390fe
        ;   Label: LAB_004390fe
    JMP 0x0043910c                      ; 00439103
        ;   XREF to: 0043910c (UNCONDITIONAL_JUMP)  ; LAB_0043910c
    NEG EBX                             ; 00439105
        ;   Label: LAB_00439105
    MOV EAX,0x80000000                  ; 00439107
    MOV EBX,EAX                         ; 0043910c
        ;   Label: LAB_0043910c
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043910e
    MOV EAX,dword ptr [EDI + 0x8]       ; 00439111
    MOV EDX,EBX                         ; 00439114
    SUB EAX,EBP                         ; 00439116
    IMUL EDX                            ; 00439118
    ADD EAX,EAX                         ; 0043911a
    ADC EDX,EDX                         ; 0043911c
    MOV EAX,EDX                         ; 0043911e
    MOV EDX,dword ptr [ECX + 0x8]       ; 00439120
    ADD EAX,EDX                         ; 00439123
    MOV dword ptr [ESI + 0x8],EAX       ; 00439125
    MOV dword ptr [ESI],EAX             ; 00439128
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043912a
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043912d
    MOV EDX,EBX                         ; 00439130
    IMUL EDX                            ; 00439132
    ADD EAX,EAX                         ; 00439134
    ADC EDX,EDX                         ; 00439136
    MOV EAX,EDX                         ; 00439138
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043913a
    ADD EAX,EDX                         ; 0043913d
    MOV dword ptr [ESI + 0x4],EAX       ; 0043913f
    MOV EAX,dword ptr [EDI + 0x18]      ; 00439142
    MOV EBP,dword ptr [ECX + 0x18]      ; 00439145
    MOV EDX,EBX                         ; 00439148
    SUB EAX,EBP                         ; 0043914a
    IMUL EDX                            ; 0043914c
    ADD EAX,EAX                         ; 0043914e
    ADC EDX,EDX                         ; 00439150
    MOV EAX,EDX                         ; 00439152
    MOV EDX,dword ptr [ECX + 0x18]      ; 00439154
    ADD EAX,EDX                         ; 00439157
    MOV dword ptr [ESI + 0x18],EAX      ; 00439159
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043915c
    SUB EAX,dword ptr [ECX + 0x1c]      ; 0043915f
    MOV EDX,EBX                         ; 00439162
    IMUL EDX                            ; 00439164
    ADD EAX,EAX                         ; 00439166
    ADC EDX,EDX                         ; 00439168
    MOV EAX,EDX                         ; 0043916a
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043916c
    ADD EAX,EDX                         ; 0043916f
    MOV dword ptr [ESI + 0x1c],EAX      ; 00439171
    MOV EAX,dword ptr [EDI + 0x20]      ; 00439174
    MOV EBP,dword ptr [ECX + 0x20]      ; 00439177
    MOV EDX,EBX                         ; 0043917a
    SUB EAX,EBP                         ; 0043917c
    IMUL EDX                            ; 0043917e
    ADD EAX,EAX                         ; 00439180
    ADC EDX,EDX                         ; 00439182
    MOV EAX,EDX                         ; 00439184
    MOV EDX,dword ptr [ECX + 0x20]      ; 00439186
    ADD EAX,EDX                         ; 00439189
    MOV dword ptr [ESI + 0x20],EAX      ; 0043918b
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043918e
    SUB EAX,dword ptr [ECX + 0x2c]      ; 00439191
    MOV EDX,EBX                         ; 00439194
    IMUL EDX                            ; 00439196
    ADD EAX,EAX                         ; 00439198
    ADC EDX,EDX                         ; 0043919a
    MOV EAX,EDX                         ; 0043919c
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043919e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 004391a1
    ADD EDX,EAX                         ; 004391a8
    MOV dword ptr [ESI + 0x2c],EDX      ; 004391aa
    POP EBP                             ; 004391ad
    POP EDI                             ; 004391ae
    POP ESI                             ; 004391af
    POP EBX                             ; 004391b0
    RET                                 ; 004391b1

