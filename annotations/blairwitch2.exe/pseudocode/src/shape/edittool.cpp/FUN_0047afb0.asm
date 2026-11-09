; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047afb0(CInputString *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0047d270 at 0047d4bc
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b3e8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1eff
;   TerminatedCString s_CInputString_draw_string_005d1f15
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263a8
;   undefined4 DAT_01c263ac
;   undefined4 DAT_01c263b0
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_FUN_004a8df0
;   engine_mini3d.cpp_FUN_004f3570
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   shape_edittool.cpp_CInputString_calcX_FUN_0047aef0
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047afb0
        ;   Label: shape_edittool.cpp_FUN_0047afb0
    PUSH ESI                            ; 0047afb1
    PUSH EDI                            ; 0047afb2
    PUSH EBP                            ; 0047afb3
    SUB ESP,0x14                        ; 0047afb4
    MOV EBX,dword ptr [ESP + 0x28]      ; 0047afb7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0047afbb
    MOV EDI,dword ptr [ESP + 0x30]      ; 0047afbf
    MOV EAX,[0x01c25f7c]                ; 0047afc3 | DAT_01c25f7c
    ADD EAX,EDI                         ; 0047afc8
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047afca
    MOV dword ptr [ESP + 0x10],EAX      ; 0047afd0
    MOV EAX,dword ptr [EBX + 0x138]     ; 0047afd4
    CMP EAX,EDX                         ; 0047afda
    JNZ 0x0047b0c9                      ; 0047afdc
        ;   XREF to: 0047b0c9 (CONDITIONAL_JUMP)  ; LAB_0047b0c9
    PUSH 0xffff                         ; 0047afe2
        ;   Label: LAB_0047afe2
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047afe7
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047afec
    PUSH 0x3f800000                     ; 0047afef
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047aff4
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    MOV ESI,dword ptr [EBX + 0x13c]     ; 0047aff9
    ADD ESP,0x4                         ; 0047afff
    TEST ESI,ESI                        ; 0047b002
    JZ 0x0047b194                       ; 0047b004
        ;   XREF to: 0047b194 (CONDITIONAL_JUMP)  ; LAB_0047b194
    CMP dword ptr [EBX + 0x130],0x400   ; 0047b00a
    JC 0x0047b038                       ; 0047b014
        ;   XREF to: 0047b038 (CONDITIONAL_JUMP)  ; LAB_0047b038
    MOV ESI,0x5d1eff                    ; 0047b016 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x223                       ; 0047b01b
    PUSH 0x5d1f15                       ; 0047b020 | = "CInputString::draw - string too big f..."
    MOV dword ptr [0x01d046a0],ESI      ; 0047b025 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0047b02b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047b030
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047b035
    MOV EDX,dword ptr [EBX + 0x130]     ; 0047b038
        ;   Label: LAB_0047b038
    PUSH EDX                            ; 0047b03e
    PUSH 0x2a                           ; 0047b03f
    PUSH 0x1c25f88                      ; 0047b041
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0047b046
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047b04b
    PUSH -0x1                           ; 0047b04e
    MOV ECX,dword ptr [0x01c263ac]      ; 0047b050 | DAT_01c263ac
    PUSH ECX                            ; 0047b056
    PUSH EDI                            ; 0047b057
    PUSH EBP                            ; 0047b058
    MOV ESI,dword ptr [0x01c25590]      ; 0047b059 | DAT_01c25590
    PUSH 0x1c25f88                      ; 0047b05f
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047b064
    XOR DL,DL                           ; 0047b06a
    PUSH ESI                            ; 0047b06c
    MOV byte ptr [EAX + 0x1c25f88],DL   ; 0047b06d
    CALL engine_font.cpp_FUN_004a8df0   ; 0047b073
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
        ;   Label: LAB_0047b073
    ADD ESP,0x18                        ; 0047b078
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0047b07b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    TEST EAX,0x40000                    ; 0047b080
    JZ 0x0047b0c1                       ; 0047b085
        ;   XREF to: 0047b0c1 (CONDITIONAL_JUMP)  ; LAB_0047b0c1
    MOV EDX,dword ptr [0x01c25f84]      ; 0047b087 | DAT_01c25f84
    MOV EAX,[0x01c263b0]                ; 0047b08d | DAT_01c263b0
    TEST EDX,EDX                        ; 0047b092
    JNZ 0x0047b1ab                      ; 0047b094
        ;   XREF to: 0047b1ab (CONDITIONAL_JUMP)  ; LAB_0047b1ab
    MOV [0x01c35e60],EAX                ; 0047b09a | DAT_01c35e60
    MOV ECX,dword ptr [EBX + 0x134]     ; 0047b09f
        ;   Label: LAB_0047b09f
    PUSH ECX                            ; 0047b0a5
    PUSH EBX                            ; 0047b0a6
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0047aef0 ; 0047b0a7
        ;   XREF to: 0047aef0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0047aef0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 0047b0ac
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047b0af
    PUSH EBX                            ; 0047b0b3
    ADD EBP,EAX                         ; 0047b0b4
    PUSH EBP                            ; 0047b0b6
    PUSH EDI                            ; 0047b0b7
    PUSH EBP                            ; 0047b0b8
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 0047b0b9
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0047b0be
    ADD ESP,0x14                        ; 0047b0c1
        ;   Label: LAB_0047b0c1
    POP EBP                             ; 0047b0c4
    POP EDI                             ; 0047b0c5
    POP ESI                             ; 0047b0c6
    POP EBX                             ; 0047b0c7
    RET                                 ; 0047b0c8
    PUSH EAX                            ; 0047b0c9
        ;   Label: LAB_0047b0c9
    PUSH EBX                            ; 0047b0ca
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0047aef0 ; 0047b0cb
        ;   XREF to: 0047aef0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0047aef0(CInputString * this_ptr, int char_index)
    ADD ESP,0x8                         ; 0047b0d0
    LEA ESI,[EAX + EBP*0x1]             ; 0047b0d3
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047b0d6
    PUSH EAX                            ; 0047b0dc
    PUSH EBX                            ; 0047b0dd
    CALL shape_edittool.cpp_CInputString_calcX_FUN_0047aef0 ; 0047b0de
        ;   XREF to: 0047aef0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CInputString_calcX_FUN_0047aef0(CInputString * this_ptr, int char_index)
    ADD EAX,EBP                         ; 0047b0e3
    ADD ESP,0x8                         ; 0047b0e5
    CMP ESI,EAX                         ; 0047b0e8
    JLE 0x0047b0f2                      ; 0047b0ea
        ;   XREF to: 0047b0f2 (CONDITIONAL_JUMP)  ; LAB_0047b0f2
    MOV EDX,ESI                         ; 0047b0ec
    MOV ESI,EAX                         ; 0047b0ee
    MOV EAX,EDX                         ; 0047b0f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047b0f2
        ;   Label: LAB_0047b0f2
    MOV ECX,dword ptr [0x01c25f84]      ; 0047b0f6 | DAT_01c25f84
    MOV dword ptr [ESP + 0xc],EDI       ; 0047b0fc
    MOV dword ptr [ESP + 0x4],EAX       ; 0047b100
    MOV dword ptr [ESP + 0x8],ESI       ; 0047b104
    MOV dword ptr [ESP],EDX             ; 0047b108
    MOV EDX,dword ptr [0x01c263a8]      ; 0047b10b | DAT_01c263a8
    TEST ECX,ECX                        ; 0047b111
    JZ 0x0047b17e                       ; 0047b113
        ;   XREF to: 0047b17e (CONDITIONAL_JUMP)  ; LAB_0047b17e
    JNZ 0x0047b13d                      ; 0047b115
        ;   XREF to: 0047b13d (CONDITIONAL_JUMP)  ; LAB_0047b13d
    MOV dword ptr [0x01c35e60],EDX      ; 0047b117 | DAT_01c35e60
    MOV ESI,dword ptr [ESP]             ; 0047b11d
        ;   Label: LAB_0047b11d
    PUSH ESI                            ; 0047b120
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047b121
    PUSH EAX                            ; 0047b125
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047b126
    PUSH EDX                            ; 0047b12a
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047b12b
    PUSH ECX                            ; 0047b12f
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047b130
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047b135
    JMP 0x0047afe2                      ; 0047b138
        ;   XREF to: 0047afe2 (UNCONDITIONAL_JUMP)  ; LAB_0047afe2
    AND EDX,0xff                        ; 0047b13d
        ;   Label: LAB_0047b13d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047b143
    SUB EAX,EDX                         ; 0047b14a
    XOR EDX,EDX                         ; 0047b14c
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047b14e | DAT_01c35839
    MOV ESI,EDX                         ; 0047b154
    XOR EDX,EDX                         ; 0047b156
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047b158 | DAT_01c35838
    SHL ESI,0x8                         ; 0047b15e
    SHL EDX,0x10                        ; 0047b161
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047b164 | DAT_01c3583a
    OR EDX,ESI                          ; 0047b16a
    AND EAX,0xff                        ; 0047b16c
    OR EAX,EDX                          ; 0047b171
    PUSH EAX                            ; 0047b173
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047b174
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047b179
    JMP 0x0047b11d                      ; 0047b17c
        ;   XREF to: 0047b11d (UNCONDITIONAL_JUMP)  ; LAB_0047b11d
    PUSH EDX                            ; 0047b17e
        ;   Label: LAB_0047b17e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047b17f
    PUSH EDX                            ; 0047b183
    PUSH EAX                            ; 0047b184
    PUSH EDI                            ; 0047b185
    PUSH ESI                            ; 0047b186
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047b187
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047b18c
    JMP 0x0047afe2                      ; 0047b18f
        ;   XREF to: 0047afe2 (UNCONDITIONAL_JUMP)  ; LAB_0047afe2
    PUSH -0x1                           ; 0047b194
        ;   Label: LAB_0047b194
    MOV EAX,[0x01c263ac]                ; 0047b196 | DAT_01c263ac
    PUSH EAX                            ; 0047b19b
    PUSH EDI                            ; 0047b19c
    PUSH EBP                            ; 0047b19d
    PUSH EBX                            ; 0047b19e
    MOV EDX,dword ptr [0x01c25590]      ; 0047b19f | DAT_01c25590
    PUSH EDX                            ; 0047b1a5
    JMP 0x0047b073                      ; 0047b1a6
        ;   XREF to: 0047b073 (UNCONDITIONAL_JUMP)  ; LAB_0047b073
    AND EAX,0xff                        ; 0047b1ab
        ;   Label: LAB_0047b1ab
    MOV EDX,EAX                         ; 0047b1b0
    SHL EAX,0x2                         ; 0047b1b2
    SUB EAX,EDX                         ; 0047b1b5
    XOR EDX,EDX                         ; 0047b1b7
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047b1b9 | DAT_01c35839
    MOV ESI,EDX                         ; 0047b1bf
    XOR EDX,EDX                         ; 0047b1c1
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047b1c3 | DAT_01c35838
    SHL ESI,0x8                         ; 0047b1c9
    SHL EDX,0x10                        ; 0047b1cc
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047b1cf | DAT_01c3583a
    OR EDX,ESI                          ; 0047b1d5
    AND EAX,0xff                        ; 0047b1d7
    OR EAX,EDX                          ; 0047b1dc
    PUSH EAX                            ; 0047b1de
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047b1df
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047b1e4
    JMP 0x0047b09f                      ; 0047b1e7
        ;   XREF to: 0047b09f (UNCONDITIONAL_JUMP)  ; LAB_0047b09f

