; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047bf80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c263b8
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004a8df0
;   engine_mini3d.cpp_setAlpha_FUN_004f3570
;   shape_edittool.cpp_FUN_0047e870
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bf80
        ;   Label: shape_edittool.cpp_FUN_0047bf80
    PUSH ESI                            ; 0047bf81
    PUSH EDI                            ; 0047bf82
    PUSH EBP                            ; 0047bf83
    SUB ESP,0x4                         ; 0047bf84
    CMP dword ptr [0x01c25590],0x0      ; 0047bf87 | DAT_01c25590
    JZ 0x0047c035                       ; 0047bf8e
        ;   XREF to: 0047c035 (CONDITIONAL_JUMP)  ; LAB_0047c035
    MOV EAX,[0x01c25590]                ; 0047bf94 | DAT_01c25590
        ;   Label: LAB_0047bf94
    PUSH 0x6a                           ; 0047bf99
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047bf9b
    PUSH EAX                            ; 0047bfa1
    MOV dword ptr [0x01c25f78],EDX      ; 0047bfa2 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047bfa8
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047bfad
    MOV [0x01c25f7c],EAX                ; 0047bfb0 | DAT_01c25f7c
    LEA EAX,[ESP + 0x20]                ; 0047bfb5
    MOV dword ptr [ESP],EAX             ; 0047bfb9
    MOV EAX,ESP                         ; 0047bfbc
    PUSH EAX                            ; 0047bfbe
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047bfbf
    PUSH ESI                            ; 0047bfc3
    PUSH 0x1c235f0                      ; 0047bfc4
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047bfc9
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047bfce
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047bfd1
    XOR EDI,EDI                         ; 0047bfd5
    PUSH EBP                            ; 0047bfd7
    MOV dword ptr [ESP + 0x4],EDI       ; 0047bfd8
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047bfdc
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047bfe1
    PUSH 0xffff                         ; 0047bfe4
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047bfe9
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047bfee
    PUSH 0x3f800000                     ; 0047bff1
    CALL engine_mini3d.cpp_setAlpha_FUN_004f3570 ; 0047bff6
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004f3570(float alpha)
    ADD ESP,0x4                         ; 0047bffb
    PUSH -0x1                           ; 0047bffe
    MOV EAX,[0x01c263b8]                ; 0047c000 | DAT_01c263b8
    PUSH EAX                            ; 0047c005
    MOV EDX,dword ptr [0x01c35e4c]      ; 0047c006 | DAT_01c35e4c
    PUSH EDX                            ; 0047c00c
    MOV ECX,dword ptr [0x01c35e48]      ; 0047c00d | DAT_01c35e48
    PUSH ECX                            ; 0047c013
    PUSH 0x1c235f0                      ; 0047c014
    MOV EBX,dword ptr [0x01c25590]      ; 0047c019 | DAT_01c25590
    PUSH EBX                            ; 0047c01f
    CALL engine_font.cpp_FUN_004a8df0   ; 0047c020
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047c025
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047c028
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    ADD ESP,0x4                         ; 0047c02d
    POP EBP                             ; 0047c030
    POP EDI                             ; 0047c031
    POP ESI                             ; 0047c032
    POP EBX                             ; 0047c033
    RET                                 ; 0047c034
    MOV ECX,0x5d1e6f                    ; 0047c035
        ;   Label: LAB_0047c035
    MOV EBX,0xa0                        ; 0047c03a
    PUSH 0x5d1e85                       ; 0047c03f
    MOV dword ptr [0x01d046a0],ECX      ; 0047c044 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047c04a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047c050
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047c055
    JMP 0x0047bf94                      ; 0047c058
        ;   XREF to: 0047bf94 (UNCONDITIONAL_JUMP)  ; LAB_0047bf94

