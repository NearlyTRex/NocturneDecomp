; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004700d0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddec
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   shape_edittool.cpp_FUN_004722b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004700d0
        ;   Label: shape_edittool.cpp_FUN_004700d0
    PUSH ESI                            ; 004700d1
    PUSH EDI                            ; 004700d2
    PUSH EBP                            ; 004700d3
    SUB ESP,0x4                         ; 004700d4
    CMP dword ptr [0x01bcd070],0x0      ; 004700d7 | DAT_01bcd070
    JZ 0x00470178                       ; 004700de
        ;   XREF to: 00470178 (CONDITIONAL_JUMP)  ; LAB_00470178
    MOV EAX,[0x01bcd070]                ; 004700e4 | DAT_01bcd070
        ;   Label: LAB_004700e4
    PUSH 0x6a                           ; 004700e9
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004700eb
    PUSH EAX                            ; 004700f1
    MOV dword ptr [0x01bcd9b8],EDX      ; 004700f2 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004700f8
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004700fd
    MOV [0x01bcd9bc],EAX                ; 00470100 | DAT_01bcd9bc
    LEA EAX,[ESP + 0x20]                ; 00470105
    MOV dword ptr [ESP],EAX             ; 00470109
    MOV EAX,ESP                         ; 0047010c
    PUSH EAX                            ; 0047010e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047010f
    PUSH ESI                            ; 00470113
    PUSH 0x1bcb0d0                      ; 00470114
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00470119
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047011e
    MOV EBP,dword ptr [ESP + 0x18]      ; 00470121
    XOR EDI,EDI                         ; 00470125
    PUSH EBP                            ; 00470127
    MOV dword ptr [ESP + 0x4],EDI       ; 00470128
    CALL shape_edittool.cpp_FUN_004722b0 ; 0047012c
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 00470131
    PUSH 0xffff                         ; 00470134
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00470139
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0047013e
    PUSH -0x1                           ; 00470141
    MOV EAX,[0x01bcddec]                ; 00470143 | DAT_01bcddec
    PUSH EAX                            ; 00470148
    MOV EDX,dword ptr [0x01c00c5c]      ; 00470149 | DAT_01c00c5c
    PUSH EDX                            ; 0047014f
    MOV ECX,dword ptr [0x01c00c58]      ; 00470150 | DAT_01c00c58
    PUSH ECX                            ; 00470156
    PUSH 0x1bcb0d0                      ; 00470157
    MOV EBX,dword ptr [0x01bcd070]      ; 0047015c | DAT_01bcd070
    PUSH EBX                            ; 00470162
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00470163
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00470168
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0047016b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    ADD ESP,0x4                         ; 00470170
    POP EBP                             ; 00470173
    POP EDI                             ; 00470174
    POP ESI                             ; 00470175
    POP EBX                             ; 00470176
    RET                                 ; 00470177
    MOV ECX,0x57e4fa                    ; 00470178 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00470178
    MOV EBX,0x8b                        ; 0047017d
    PUSH 0x57e510                       ; 00470182 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00470187 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0047018d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00470193
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00470198
    JMP 0x004700e4                      ; 0047019b
        ;   XREF to: 004700e4 (UNCONDITIONAL_JUMP)  ; LAB_004700e4

