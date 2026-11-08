; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004321a0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00433000 at 004336ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004321a0
        ;   Label: FUN_004321a0
    PUSH ESI                            ; 004321a1
    PUSH EDI                            ; 004321a2
    PUSH EBP                            ; 004321a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004321a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004321a8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004321ac
    MOV EDX,dword ptr [ESI + 0x4]       ; 004321b0
    MOV ECX,dword ptr [ESI + 0x8]       ; 004321b3
    MOV EBX,dword ptr [EBP + 0x8]       ; 004321b6
    ADD EDX,ECX                         ; 004321b9
    MOV ECX,dword ptr [EBP + 0x4]       ; 004321bb
    ADD ECX,EBX                         ; 004321be
    MOV EBX,EDX                         ; 004321c0
    SUB EBX,ECX                         ; 004321c2
    CMP EDX,EBX                         ; 004321c4
    JGE 0x004321da                      ; 004321c6
        ;   XREF to: 004321da (CONDITIONAL_JUMP)  ; LAB_004321da
    NEG EBX                             ; 004321c8
    CMP EDX,EBX                         ; 004321ca
    JLE 0x004321e1                      ; 004321cc
        ;   XREF to: 004321e1 (CONDITIONAL_JUMP)  ; LAB_004321e1
    NEG EBX                             ; 004321ce
    XOR EAX,EAX                         ; 004321d0
    SAR EDX,0x1                         ; 004321d2
    RCR EAX,0x1                         ; 004321d4
    IDIV EBX                            ; 004321d6
    JMP 0x004321e8                      ; 004321d8
        ;   XREF to: 004321e8 (UNCONDITIONAL_JUMP)  ; LAB_004321e8
    MOV EAX,0x7fffffff                  ; 004321da
        ;   Label: LAB_004321da
    JMP 0x004321e8                      ; 004321df
        ;   XREF to: 004321e8 (UNCONDITIONAL_JUMP)  ; LAB_004321e8
    NEG EBX                             ; 004321e1
        ;   Label: LAB_004321e1
    MOV EAX,0x80000000                  ; 004321e3
    MOV ECX,EAX                         ; 004321e8
        ;   Label: LAB_004321e8
    MOV EDX,dword ptr [ESI + 0x8]       ; 004321ea
    MOV EAX,dword ptr [EBP + 0x8]       ; 004321ed
    SUB EAX,EDX                         ; 004321f0
    MOV EDX,ECX                         ; 004321f2
    IMUL EDX                            ; 004321f4
    ADD EAX,EAX                         ; 004321f6
    ADC EDX,EDX                         ; 004321f8
    MOV EAX,EDX                         ; 004321fa
    MOV EDX,dword ptr [ESI + 0x8]       ; 004321fc
    ADD EAX,EDX                         ; 004321ff
    MOV dword ptr [EDI + 0x8],EAX       ; 00432201
    MOV EBX,EAX                         ; 00432204
    MOV dword ptr [EDI + 0x4],EAX       ; 00432206
    NEG EBX                             ; 00432209
    MOV dword ptr [EDI + 0x4],EBX       ; 0043220b
    MOV EAX,dword ptr [EBP]             ; 0043220e
    SUB EAX,dword ptr [ESI]             ; 00432211
    MOV EDX,ECX                         ; 00432213
    IMUL EDX                            ; 00432215
    ADD EAX,EAX                         ; 00432217
    ADC EDX,EDX                         ; 00432219
    MOV EAX,EDX                         ; 0043221b
    MOV EDX,dword ptr [ESI]             ; 0043221d
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043221f
    ADD EAX,EDX                         ; 00432226
    MOV dword ptr [EDI],EAX             ; 00432228
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043222a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043222d
    MOV EDX,ECX                         ; 00432230
    SUB EAX,EBX                         ; 00432232
    IMUL EDX                            ; 00432234
    ADD EAX,EAX                         ; 00432236
    ADC EDX,EDX                         ; 00432238
    MOV EAX,EDX                         ; 0043223a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043223c
    ADD EAX,EDX                         ; 0043223f
    MOV dword ptr [EDI + 0x20],EAX      ; 00432241
    MOV EAX,dword ptr [EBP + 0x24]      ; 00432244
    SUB EAX,dword ptr [ESI + 0x24]      ; 00432247
    MOV EDX,ECX                         ; 0043224a
    IMUL EDX                            ; 0043224c
    ADD EAX,EAX                         ; 0043224e
    ADC EDX,EDX                         ; 00432250
    MOV EAX,EDX                         ; 00432252
    MOV EDX,dword ptr [ESI + 0x24]      ; 00432254
    ADD EAX,EDX                         ; 00432257
    MOV dword ptr [EDI + 0x24],EAX      ; 00432259
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043225c
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043225f
    MOV EDX,ECX                         ; 00432262
    SUB EAX,EBX                         ; 00432264
    IMUL EDX                            ; 00432266
    ADD EAX,EAX                         ; 00432268
    ADC EDX,EDX                         ; 0043226a
    MOV EAX,EDX                         ; 0043226c
    MOV EDX,dword ptr [ESI + 0x28]      ; 0043226e
    ADD EDX,EAX                         ; 00432271
    MOV dword ptr [EDI + 0x28],EDX      ; 00432273
    MOV EAX,dword ptr [EBP + 0x18]      ; 00432276
    SUB EAX,dword ptr [ESI + 0x18]      ; 00432279
    MOV EDX,ECX                         ; 0043227c
    IMUL EDX                            ; 0043227e
    ADD EAX,EAX                         ; 00432280
    ADC EDX,EDX                         ; 00432282
    MOV EAX,EDX                         ; 00432284
    MOV EDX,dword ptr [ESI + 0x18]      ; 00432286
    ADD EDX,EAX                         ; 00432289
    MOV dword ptr [EDI + 0x18],EDX      ; 0043228b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043228e
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00432291
    MOV EDX,ECX                         ; 00432294
    SUB EAX,EBX                         ; 00432296
    IMUL EDX                            ; 00432298
    ADD EAX,EAX                         ; 0043229a
    ADC EDX,EDX                         ; 0043229c
    MOV EAX,EDX                         ; 0043229e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004322a0
    ADD EDX,EAX                         ; 004322a3
    MOV dword ptr [EDI + 0x1c],EDX      ; 004322a5
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004322a8
    MOV EBP,dword ptr [ESI + 0x2c]      ; 004322ab
    MOV EDX,ECX                         ; 004322ae
    SUB EAX,EBP                         ; 004322b0
    IMUL EDX                            ; 004322b2
    ADD EAX,EAX                         ; 004322b4
    ADC EDX,EDX                         ; 004322b6
    MOV EAX,EDX                         ; 004322b8
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004322ba
    ADD EDX,EAX                         ; 004322bd
    MOV dword ptr [EDI + 0x2c],EDX      ; 004322bf
    POP EBP                             ; 004322c2
    POP EDI                             ; 004322c3
    POP ESI                             ; 004322c4
    POP EBX                             ; 004322c5
    RET                                 ; 004322c6

