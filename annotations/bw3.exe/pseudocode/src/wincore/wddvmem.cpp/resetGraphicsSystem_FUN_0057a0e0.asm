; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_0057a0e0(void)
;
;
; XREF[1]:
;   engine_2d.c_resetGraphicsSystem_FUN_00402ac0 at 00402ac0
;
; Referenced Globals:
;   TerminatedCString s_You_have_hit_a_kludge_in_005d7528
;   TerminatedCString s_You_are_setting_accelera_005d754e
;   TerminatedCString s_the_appropriate_bit_dept_005d7580
;   TerminatedCString s_I_am_forcing_the_screen_005d75a1
;   TerminatedCString s_Press_any_key_to_continu_005d75d2
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf5fcc
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   undefined4 DAT_02d0bcf8
;   ... and 1 more
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   engine_special.cpp_setResolutionAndColorTable_FUN_00565a90
;   wincore_wddvmem.cpp_FUN_00579bb0
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;   wincore_winrun.cpp_getNextKeypress_FUN_00580790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a0e0
        ;   Label: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0
    PUSH ESI                            ; 0057a0e1
    PUSH EDI                            ; 0057a0e2
    PUSH EBP                            ; 0057a0e3
    MOV EDX,0x1                         ; 0057a0e4
    MOV ECX,dword ptr [0x02cf5fcc]      ; 0057a0e9 | DAT_02cf5fcc
    MOV dword ptr [0x02d0bcf8],EDX      ; 0057a0ef | DAT_02d0bcf8
    TEST ECX,ECX                        ; 0057a0f5
    JZ 0x0057a24c                       ; 0057a0f7
        ;   XREF to: 0057a24c (CONDITIONAL_JUMP)  ; LAB_0057a24c
    CMP dword ptr [0x005fba20],0x10     ; 0057a0fd | DAT_005fba20
    JL 0x0057a251                       ; 0057a104
        ;   XREF to: 0057a251 (CONDITIONAL_JUMP)  ; LAB_0057a251
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 0057a10a
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_0057a10a
    MOV EBP,dword ptr [0x02d0bcec]      ; 0057a10f | DAT_02d0bcec
    TEST EBP,EBP                        ; 0057a115
    JZ 0x0057a127                       ; 0057a117
        ;   XREF to: 0057a127 (CONDITIONAL_JUMP)  ; LAB_0057a127
    PUSH EBP                            ; 0057a119
    MOV EDX,dword ptr [EBP]             ; 0057a11a
    CALL dword ptr [EDX + 0x8]          ; 0057a11d
    XOR EAX,EAX                         ; 0057a120
    MOV [0x02d0bcec],EAX                ; 0057a122 | DAT_02d0bcec
    MOV EDX,dword ptr [0x02d0bce8]      ; 0057a127 | DAT_02d0bce8
        ;   Label: LAB_0057a127
    TEST EDX,EDX                        ; 0057a12d
    JZ 0x0057a141                       ; 0057a12f
        ;   XREF to: 0057a141 (CONDITIONAL_JUMP)  ; LAB_0057a141
    MOV EAX,EDX                         ; 0057a131
    PUSH EAX                            ; 0057a133
    MOV EDX,dword ptr [EDX]             ; 0057a134
    CALL dword ptr [EDX + 0x8]          ; 0057a136
    XOR ECX,ECX                         ; 0057a139
    MOV dword ptr [0x02d0bce8],ECX      ; 0057a13b | DAT_02d0bce8
    MOV EBX,dword ptr [0x02d0bce4]      ; 0057a141 | DAT_02d0bce4
        ;   Label: LAB_0057a141
    TEST EBX,EBX                        ; 0057a147
    JZ 0x0057a159                       ; 0057a149
        ;   XREF to: 0057a159 (CONDITIONAL_JUMP)  ; LAB_0057a159
    PUSH EBX                            ; 0057a14b
    MOV EDX,dword ptr [EBX]             ; 0057a14c
    XOR ESI,ESI                         ; 0057a14e
    CALL dword ptr [EDX + 0x8]          ; 0057a150
    MOV dword ptr [0x02d0bce4],ESI      ; 0057a153 | DAT_02d0bce4
    MOV EDI,dword ptr [0x02d0bce0]      ; 0057a159 | DAT_02d0bce0
        ;   Label: LAB_0057a159
    TEST EDI,EDI                        ; 0057a15f
    JZ 0x0057a17c                       ; 0057a161
        ;   XREF to: 0057a17c (CONDITIONAL_JUMP)  ; LAB_0057a17c
    PUSH EDI                            ; 0057a163
    MOV EDX,dword ptr [EDI]             ; 0057a164
    CALL dword ptr [EDX + 0x4c]         ; 0057a166
    MOV EAX,[0x02d0bce0]                ; 0057a169 | DAT_02d0bce0
    PUSH EAX                            ; 0057a16e
    MOV EDX,dword ptr [EAX]             ; 0057a16f
    XOR EBP,EBP                         ; 0057a171
    CALL dword ptr [EDX + 0x8]          ; 0057a173
    MOV dword ptr [0x02d0bce0],EBP      ; 0057a176 | DAT_02d0bce0
    MOV EAX,[0x005fba20]                ; 0057a17c | DAT_005fba20
        ;   Label: LAB_0057a17c
    PUSH EAX                            ; 0057a181
    MOV EDX,dword ptr [0x005fba1c]      ; 0057a182 | DAT_005fba1c
    PUSH EDX                            ; 0057a188
    MOV ECX,dword ptr [0x005fba18]      ; 0057a189 | DAT_005fba18
    PUSH ECX                            ; 0057a18f
    CALL engine_special.cpp_setResolutionAndColorTable_FUN_00565a90 ; 0057a190
        ;   XREF to: 00565a90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setResolutionAndColorTable_FUN_00565a90(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0057a195
    TEST EAX,EAX                        ; 0057a198
    JNZ 0x0057a24c                      ; 0057a19a
        ;   XREF to: 0057a24c (CONDITIONAL_JUMP)  ; LAB_0057a24c
    MOV EDI,dword ptr [0x02d0bcec]      ; 0057a1a0 | DAT_02d0bcec
    MOV [0x02cf5fcc],EAX                ; 0057a1a6 | DAT_02cf5fcc
    MOV [0x01c6cee8],EAX                ; 0057a1ab | DAT_01c6cee8
    TEST EDI,EDI                        ; 0057a1b0
    JNZ 0x0057a2d2                      ; 0057a1b2
        ;   XREF to: 0057a2d2 (CONDITIONAL_JUMP)  ; LAB_0057a2d2
    MOV EAX,[0x02d0bce8]                ; 0057a1b8 | DAT_02d0bce8
        ;   Label: LAB_0057a1b8
    TEST EAX,EAX                        ; 0057a1bd
    JZ 0x0057a1cf                       ; 0057a1bf
        ;   XREF to: 0057a1cf (CONDITIONAL_JUMP)  ; LAB_0057a1cf
    PUSH EAX                            ; 0057a1c1
    MOV EDX,dword ptr [EAX]             ; 0057a1c2
    CALL dword ptr [EDX + 0x8]          ; 0057a1c4
    XOR EDX,EDX                         ; 0057a1c7
    MOV dword ptr [0x02d0bce8],EDX      ; 0057a1c9 | DAT_02d0bce8
    MOV ECX,dword ptr [0x02d0bce4]      ; 0057a1cf | DAT_02d0bce4
        ;   Label: LAB_0057a1cf
    TEST ECX,ECX                        ; 0057a1d5
    JZ 0x0057a1e7                       ; 0057a1d7
        ;   XREF to: 0057a1e7 (CONDITIONAL_JUMP)  ; LAB_0057a1e7
    PUSH ECX                            ; 0057a1d9
    MOV EDX,dword ptr [ECX]             ; 0057a1da
    XOR EBX,EBX                         ; 0057a1dc
    CALL dword ptr [EDX + 0x8]          ; 0057a1de
    MOV dword ptr [0x02d0bce4],EBX      ; 0057a1e1 | DAT_02d0bce4
    MOV ESI,dword ptr [0x02d0bce0]      ; 0057a1e7 | DAT_02d0bce0
        ;   Label: LAB_0057a1e7
    TEST ESI,ESI                        ; 0057a1ed
    JZ 0x0057a20a                       ; 0057a1ef
        ;   XREF to: 0057a20a (CONDITIONAL_JUMP)  ; LAB_0057a20a
    PUSH ESI                            ; 0057a1f1
    MOV EDX,dword ptr [ESI]             ; 0057a1f2
    CALL dword ptr [EDX + 0x4c]         ; 0057a1f4
    MOV EAX,[0x02d0bce0]                ; 0057a1f7 | DAT_02d0bce0
    PUSH EAX                            ; 0057a1fc
    MOV EDX,dword ptr [EAX]             ; 0057a1fd
    XOR EDI,EDI                         ; 0057a1ff
    CALL dword ptr [EDX + 0x8]          ; 0057a201
    MOV dword ptr [0x02d0bce0],EDI      ; 0057a204 | DAT_02d0bce0
    PUSH 0x0                            ; 0057a20a
        ;   Label: LAB_0057a20a
    PUSH 0x2d0bce0                      ; 0057a20c | DAT_02d0bce0
    PUSH 0x0                            ; 0057a211
    CALL crt_ddraw.c_DirectDrawCreate   ; 0057a213
        ;   XREF to: 005b254a (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 0057a218
    JNZ 0x0057a230                      ; 0057a21a
        ;   XREF to: 0057a230 (CONDITIONAL_JUMP)  ; LAB_0057a230
    PUSH 0x11                           ; 0057a21c
    MOV EBP,dword ptr [0x02d21b78]      ; 0057a21e | DAT_02d21b78
    MOV EAX,[0x02d0bce0]                ; 0057a224 | DAT_02d0bce0
    PUSH EBP                            ; 0057a229
    MOV EDX,dword ptr [EAX]             ; 0057a22a
    PUSH EAX                            ; 0057a22c
    CALL dword ptr [EDX + 0x50]         ; 0057a22d
    MOV EAX,[0x005fba20]                ; 0057a230 | DAT_005fba20
        ;   Label: LAB_0057a230
    PUSH EAX                            ; 0057a235
    MOV EDX,dword ptr [0x005fba1c]      ; 0057a236 | DAT_005fba1c
    PUSH EDX                            ; 0057a23c
    MOV ECX,dword ptr [0x005fba18]      ; 0057a23d | DAT_005fba18
    PUSH ECX                            ; 0057a243
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 0057a244
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 0057a249
    POP EBP                             ; 0057a24c
        ;   Label: LAB_0057a24c
    POP EDI                             ; 0057a24d
    POP ESI                             ; 0057a24e
    POP EBX                             ; 0057a24f
    RET                                 ; 0057a250
    PUSH 0x10                           ; 0057a251
        ;   Label: LAB_0057a251
    MOV ESI,dword ptr [0x005fba1c]      ; 0057a253 | DAT_005fba1c
    PUSH ESI                            ; 0057a259
    MOV EDI,dword ptr [0x005fba18]      ; 0057a25a | DAT_005fba18
    PUSH EDI                            ; 0057a260
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 0057a261
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 0057a266
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 0057a269
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0x0                            ; 0057a26e
    PUSH 0x0                            ; 0057a270
    PUSH 0x5d7528                       ; 0057a272 | = "You have hit a kludge in the program."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0057a277
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057a27c
    PUSH 0x16                           ; 0057a27f
    PUSH 0x0                            ; 0057a281
    PUSH 0x5d754e                       ; 0057a283 | = "You are setting acceleration mode wit..."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0057a288
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057a28d
    PUSH 0x21                           ; 0057a290
    PUSH 0x0                            ; 0057a292
    PUSH 0x5d7580                       ; 0057a294 | = "the appropriate bit depth first."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0057a299
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057a29e
    PUSH 0x2c                           ; 0057a2a1
    PUSH 0x0                            ; 0057a2a3
    PUSH 0x5d75a1                       ; 0057a2a5 | = "I am forcing the screen to switch to ..."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0057a2aa
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057a2af
    PUSH 0x42                           ; 0057a2b2
    PUSH 0x0                            ; 0057a2b4
    PUSH 0x5d75d2                       ; 0057a2b6 | = "Press any key to continue."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0057a2bb
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057a2c0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0057a2c3
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 0057a2c8
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
    JMP 0x0057a10a                      ; 0057a2cd
        ;   XREF to: 0057a10a (UNCONDITIONAL_JUMP)  ; LAB_0057a10a
    PUSH EDI                            ; 0057a2d2
        ;   Label: LAB_0057a2d2
    MOV EDX,dword ptr [EDI]             ; 0057a2d3
    XOR EBP,EBP                         ; 0057a2d5
    CALL dword ptr [EDX + 0x8]          ; 0057a2d7
    MOV dword ptr [0x02d0bcec],EBP      ; 0057a2da | DAT_02d0bcec
    JMP 0x0057a1b8                      ; 0057a2e0
        ;   XREF to: 0057a1b8 (UNCONDITIONAL_JUMP)  ; LAB_0057a1b8

