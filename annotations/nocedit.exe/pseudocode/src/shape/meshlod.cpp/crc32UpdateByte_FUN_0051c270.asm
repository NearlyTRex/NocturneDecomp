; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_crc32UpdateByte_FUN_0051c270(uint *crc_ptr,uchar data_byte)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_ptr
; uchar            Stack[0x8]:1   data_byte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051c270
        ;   Label: shape_meshlod.cpp_crc32UpdateByte_FUN_0051c270
    XOR EDX,EDX                         ; 0051c274
    MOV DL,byte ptr [ESP + 0x8]         ; 0051c276
    MOV ECX,dword ptr [EAX]             ; 0051c27a
    SHL EDX,0x18                        ; 0051c27c
    XOR ECX,EDX                         ; 0051c27f
    MOV dword ptr [EAX],ECX             ; 0051c281
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c283
    JZ 0x0051c317                       ; 0051c287
        ;   XREF to: 0051c317 (CONDITIONAL_JUMP)  ; LAB_0051c317
    LEA EDX,[ECX + ECX*0x1]             ; 0051c28d
    XOR EDX,0x4c11db7                   ; 0051c290
    MOV dword ptr [EAX],EDX             ; 0051c296
        ;   Label: LAB_0051c296
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c298
    JZ 0x0051c31f                       ; 0051c29c
        ;   XREF to: 0051c31f (CONDITIONAL_JUMP)  ; LAB_0051c31f
    MOV EDX,dword ptr [EAX]             ; 0051c2a2
    ADD EDX,EDX                         ; 0051c2a4
    XOR EDX,0x4c11db7                   ; 0051c2a6
    MOV dword ptr [EAX],EDX             ; 0051c2ac
        ;   Label: LAB_0051c2ac
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c2ae
    JZ 0x0051c325                       ; 0051c2b2
        ;   XREF to: 0051c325 (CONDITIONAL_JUMP)  ; LAB_0051c325
    ADD EDX,EDX                         ; 0051c2b8
    XOR EDX,0x4c11db7                   ; 0051c2ba
    MOV dword ptr [EAX],EDX             ; 0051c2c0
        ;   Label: LAB_0051c2c0
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c2c2
    JZ 0x0051c329                       ; 0051c2c6
        ;   XREF to: 0051c329 (CONDITIONAL_JUMP)  ; LAB_0051c329
    ADD EDX,EDX                         ; 0051c2c8
    XOR EDX,0x4c11db7                   ; 0051c2ca
    MOV dword ptr [EAX],EDX             ; 0051c2d0
        ;   Label: LAB_0051c2d0
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c2d2
    JZ 0x0051c32d                       ; 0051c2d6
        ;   XREF to: 0051c32d (CONDITIONAL_JUMP)  ; LAB_0051c32d
    ADD EDX,EDX                         ; 0051c2d8
    XOR EDX,0x4c11db7                   ; 0051c2da
    MOV dword ptr [EAX],EDX             ; 0051c2e0
        ;   Label: LAB_0051c2e0
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c2e2
    JZ 0x0051c331                       ; 0051c2e6
        ;   XREF to: 0051c331 (CONDITIONAL_JUMP)  ; LAB_0051c331
    ADD EDX,EDX                         ; 0051c2e8
    XOR EDX,0x4c11db7                   ; 0051c2ea
    MOV dword ptr [EAX],EDX             ; 0051c2f0
        ;   Label: LAB_0051c2f0
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c2f2
    JZ 0x0051c335                       ; 0051c2f6
        ;   XREF to: 0051c335 (CONDITIONAL_JUMP)  ; LAB_0051c335
    MOV EDX,dword ptr [EAX]             ; 0051c2f8
    ADD EDX,EDX                         ; 0051c2fa
    XOR EDX,0x4c11db7                   ; 0051c2fc
    MOV dword ptr [EAX],EDX             ; 0051c302
        ;   Label: LAB_0051c302
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c304
    JZ 0x0051c33b                       ; 0051c308
        ;   XREF to: 0051c33b (CONDITIONAL_JUMP)  ; LAB_0051c33b
    MOV EDX,dword ptr [EAX]             ; 0051c30a
    ADD EDX,EDX                         ; 0051c30c
    XOR EDX,0x4c11db7                   ; 0051c30e
    MOV dword ptr [EAX],EDX             ; 0051c314
    RET                                 ; 0051c316
    LEA EDX,[ECX + ECX*0x1]             ; 0051c317
        ;   Label: LAB_0051c317
    JMP 0x0051c296                      ; 0051c31a
        ;   XREF to: 0051c296 (UNCONDITIONAL_JUMP)  ; LAB_0051c296
    MOV EDX,dword ptr [EAX]             ; 0051c31f
        ;   Label: LAB_0051c31f
    ADD EDX,EDX                         ; 0051c321
    JMP 0x0051c2ac                      ; 0051c323
        ;   XREF to: 0051c2ac (UNCONDITIONAL_JUMP)  ; LAB_0051c2ac
    ADD EDX,EDX                         ; 0051c325
        ;   Label: LAB_0051c325
    JMP 0x0051c2c0                      ; 0051c327
        ;   XREF to: 0051c2c0 (UNCONDITIONAL_JUMP)  ; LAB_0051c2c0
    ADD EDX,EDX                         ; 0051c329
        ;   Label: LAB_0051c329
    JMP 0x0051c2d0                      ; 0051c32b
        ;   XREF to: 0051c2d0 (UNCONDITIONAL_JUMP)  ; LAB_0051c2d0
    ADD EDX,EDX                         ; 0051c32d
        ;   Label: LAB_0051c32d
    JMP 0x0051c2e0                      ; 0051c32f
        ;   XREF to: 0051c2e0 (UNCONDITIONAL_JUMP)  ; LAB_0051c2e0
    ADD EDX,EDX                         ; 0051c331
        ;   Label: LAB_0051c331
    JMP 0x0051c2f0                      ; 0051c333
        ;   XREF to: 0051c2f0 (UNCONDITIONAL_JUMP)  ; LAB_0051c2f0
    MOV EDX,dword ptr [EAX]             ; 0051c335
        ;   Label: LAB_0051c335
    ADD EDX,EDX                         ; 0051c337
    JMP 0x0051c302                      ; 0051c339
        ;   XREF to: 0051c302 (UNCONDITIONAL_JUMP)  ; LAB_0051c302
    MOV EDX,dword ptr [EAX]             ; 0051c33b
        ;   Label: LAB_0051c33b
    ADD EDX,EDX                         ; 0051c33d
    MOV dword ptr [EAX],EDX             ; 0051c33f
    RET                                 ; 0051c341

