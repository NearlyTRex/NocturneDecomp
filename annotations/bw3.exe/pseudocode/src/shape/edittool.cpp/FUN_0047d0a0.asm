; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047d0a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5bb20
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_FUN_004b0a20
;   engine_mini3d.cpp_setAlpha_FUN_004edaf0
;   shape_edittool.cpp_FUN_0047fa80
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d0a0
        ;   Label: shape_edittool.cpp_FUN_0047d0a0
    PUSH ESI                            ; 0047d0a1
    PUSH EDI                            ; 0047d0a2
    PUSH EBP                            ; 0047d0a3
    SUB ESP,0x404                       ; 0047d0a4
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047d0aa | DAT_01c5b0e0
    JZ 0x0047d170                       ; 0047d0b1
        ;   XREF to: 0047d170 (CONDITIONAL_JUMP)  ; LAB_0047d170
    MOV EAX,[0x01c5b0e0]                ; 0047d0b7 | DAT_01c5b0e0
        ;   Label: LAB_0047d0b7
    PUSH 0x6a                           ; 0047d0bc
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047d0be
    PUSH EAX                            ; 0047d0c4
    MOV dword ptr [0x01c5bae0],EDX      ; 0047d0c5 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047d0cb
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047d0d0
    MOV [0x01c5bae4],EAX                ; 0047d0d3 | DAT_01c5bae4
    LEA EAX,[ESP + 0x420]               ; 0047d0d8
    MOV dword ptr [ESP + 0x400],EAX     ; 0047d0df
    LEA EAX,[ESP + 0x400]               ; 0047d0e6
    PUSH EAX                            ; 0047d0ed
    MOV ESI,dword ptr [ESP + 0x420]     ; 0047d0ee
    PUSH ESI                            ; 0047d0f5
    LEA EAX,[ESP + 0x8]                 ; 0047d0f6
    PUSH EAX                            ; 0047d0fa
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047d0fb
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047d100
    MOV EBP,dword ptr [ESP + 0x418]     ; 0047d103
    XOR EDI,EDI                         ; 0047d10a
    PUSH EBP                            ; 0047d10c
    MOV dword ptr [ESP + 0x404],EDI     ; 0047d10d
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047d114
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047d119
    PUSH 0xffff                         ; 0047d11c
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047d121
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047d126
    PUSH 0x3f800000                     ; 0047d129
    CALL engine_mini3d.cpp_setAlpha_FUN_004edaf0 ; 0047d12e
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004edaf0(float alpha)
    ADD ESP,0x4                         ; 0047d133
    PUSH -0x1                           ; 0047d136
    MOV EAX,[0x01c5bb20]                ; 0047d138 | DAT_01c5bb20
    PUSH EAX                            ; 0047d13d
    MOV EDX,dword ptr [0x01c6b5ac]      ; 0047d13e | DAT_01c6b5ac
    PUSH EDX                            ; 0047d144
    MOV ECX,dword ptr [0x01c6b5a8]      ; 0047d145 | DAT_01c6b5a8
    PUSH ECX                            ; 0047d14b
    LEA EAX,[ESP + 0x10]                ; 0047d14c
    PUSH EAX                            ; 0047d150
    MOV EBX,dword ptr [0x01c5b0e0]      ; 0047d151 | DAT_01c5b0e0
    PUSH EBX                            ; 0047d157
    CALL engine_font.cpp_FUN_004b0a20   ; 0047d158
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 0047d15d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047d160
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    ADD ESP,0x404                       ; 0047d165
    POP EBP                             ; 0047d16b
    POP EDI                             ; 0047d16c
    POP ESI                             ; 0047d16d
    POP EBX                             ; 0047d16e
    RET                                 ; 0047d16f
    MOV ECX,0x5bcd25                    ; 0047d170
        ;   Label: LAB_0047d170
    MOV EBX,0xa7                        ; 0047d175
    PUSH 0x5bcd3b                       ; 0047d17a
    MOV dword ptr [0x01d71de0],ECX      ; 0047d17f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047d185 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047d18b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047d190
    JMP 0x0047d0b7                      ; 0047d193
        ;   XREF to: 0047d0b7 (UNCONDITIONAL_JUMP)  ; LAB_0047d0b7

