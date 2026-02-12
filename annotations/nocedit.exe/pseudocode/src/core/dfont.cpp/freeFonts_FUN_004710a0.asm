; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dfont_cpp_freeFonts_FUN_004710a0(void)
;
;
; XREF[1]:
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508809
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_0061eb7e
;   TerminatedCString s_core_dfont_cpp_0061eb90
;   TerminatedCString s_core_dfont_cpp_0061eba2
;   TerminatedCString s_core_dfont_cpp_0061ebb4
;   TerminatedCString s_core_dfont_cpp_0061ebc6
;   TerminatedCString s_core_dfont_cpp_0061ebd8
;   TerminatedCString s_core_dfont_cpp_0061ebea
;   TerminatedCString s_core_dfont_cpp_0061ebfc
;   TerminatedCString s_core_dfont_cpp_0061ec0e
;   TerminatedCString s_core_dfont_cpp_0061ec20
;   char* g_CurrentDebugFilename = 0067d200
;   CBitFont* g_MediumFont
;   CBitFont* g_TinyFont
;   CBitFont* g_ThemeFont
;   CBitFont* g_SmallEditorFont
;   ... and 9 more
;
; Called Functions:
;   engine_font.cpp_CBitFont_dtor_FUN_004cceb0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004710a0
        ;   Label: core_dfont.cpp_freeFonts_FUN_004710a0
    PUSH ESI                            ; 004710a1
    PUSH EDI                            ; 004710a2
    PUSH EBP                            ; 004710a3
    MOV ECX,0xc7                        ; 004710a4
    MOV EDX,0x61eb7e                    ; 004710a9 | = "..\\core\\dfont.cpp"
    MOV EBX,dword ptr [0x020a5718]      ; 004710ae | g_MediumFont
    MOV dword ptr [0x02f0d944],ECX      ; 004710b4 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 004710ba | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 004710c0
    JNZ 0x004712cf                      ; 004710c2
        ;   XREF to: 004712cf (CONDITIONAL_JUMP)  ; LAB_004712cf
    MOV EBP,0x61eb90                    ; 004710c8 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_004710c8
    MOV EAX,0xc9                        ; 004710cd
    MOV EDX,dword ptr [0x020a571c]      ; 004710d2 | g_TinyFont
    XOR EDI,EDI                         ; 004710d8
    MOV dword ptr [0x0067d20c],EBP      ; 004710da | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 004710e0 | g_CurrentDebugLine
    MOV dword ptr [0x020a5718],EDI      ; 004710e5 | g_MediumFont
    TEST EDX,EDX                        ; 004710eb
    JZ 0x00471102                       ; 004710ed
        ;   XREF to: 00471102 (CONDITIONAL_JUMP)  ; LAB_00471102
    PUSH EDI                            ; 004710ef
    PUSH EDX                            ; 004710f0
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 004710f1
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004710f6
    PUSH EAX                            ; 004710f9
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004710fa
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004710ff
    MOV ESI,0x61eba2                    ; 00471102 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00471102
    MOV EDI,0xcb                        ; 00471107
    MOV EBP,dword ptr [0x020a5720]      ; 0047110c | g_ThemeFont
    XOR EBX,EBX                         ; 00471112
    MOV dword ptr [0x0067d20c],ESI      ; 00471114 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 0047111a | g_CurrentDebugLine
    MOV dword ptr [0x020a571c],EBX      ; 00471120 | g_TinyFont
    TEST EBP,EBP                        ; 00471126
    JZ 0x0047113d                       ; 00471128
        ;   XREF to: 0047113d (CONDITIONAL_JUMP)  ; LAB_0047113d
    PUSH EBX                            ; 0047112a
    PUSH EBP                            ; 0047112b
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 0047112c
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00471131
    PUSH EAX                            ; 00471134
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00471135
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0047113a
    MOV ECX,0x61ebb4                    ; 0047113d | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0047113d
    MOV EBX,0xcd                        ; 00471142
    MOV ESI,dword ptr [0x020a5724]      ; 00471147 | g_SmallEditorFont
    XOR EDX,EDX                         ; 0047114d
    MOV dword ptr [0x0067d20c],ECX      ; 0047114f | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 00471155 | g_CurrentDebugLine
    MOV dword ptr [0x020a5720],EDX      ; 0047115b | g_ThemeFont
    TEST ESI,ESI                        ; 00471161
    JZ 0x00471178                       ; 00471163
        ;   XREF to: 00471178 (CONDITIONAL_JUMP)  ; LAB_00471178
    PUSH EDX                            ; 00471165
    PUSH ESI                            ; 00471166
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 00471167
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047116c
    PUSH EAX                            ; 0047116f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00471170
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00471175
    MOV EAX,0x61ebc6                    ; 00471178 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00471178
    MOV EDX,0xcf                        ; 0047117d
    MOV ECX,dword ptr [0x020a5728]      ; 00471182 | g_ConsoleFont
    XOR EBP,EBP                         ; 00471188
    MOV [0x0067d20c],EAX                ; 0047118a | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0047118f | g_CurrentDebugLine
    MOV dword ptr [0x020a5724],EBP      ; 00471195 | g_SmallEditorFont
    TEST ECX,ECX                        ; 0047119b
    JZ 0x004711b2                       ; 0047119d
        ;   XREF to: 004711b2 (CONDITIONAL_JUMP)  ; LAB_004711b2
    PUSH EBP                            ; 0047119f
    PUSH ECX                            ; 004711a0
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 004711a1
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004711a6
    PUSH EAX                            ; 004711a9
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004711aa
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004711af
    MOV EBP,0x61ebd8                    ; 004711b2 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_004711b2
    MOV EAX,0xd2                        ; 004711b7
    XOR ESI,ESI                         ; 004711bc
    MOV EDX,dword ptr [0x020a572c]      ; 004711be | g_MicroFont
    MOV dword ptr [0x02cf1cd0],ESI      ; 004711c4 | g_EditorFont
    MOV dword ptr [0x0067d20c],EBP      ; 004711ca | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 004711d0 | g_CurrentDebugLine
    MOV dword ptr [0x020a5728],ESI      ; 004711d5 | g_ConsoleFont
    TEST EDX,EDX                        ; 004711db
    JZ 0x004711f2                       ; 004711dd
        ;   XREF to: 004711f2 (CONDITIONAL_JUMP)  ; LAB_004711f2
    PUSH ESI                            ; 004711df
    PUSH EDX                            ; 004711e0
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 004711e1
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004711e6
    PUSH EAX                            ; 004711e9
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004711ea
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004711ef
    XOR EBX,EBX                         ; 004711f2
        ;   Label: LAB_004711f2
    MOV ESI,dword ptr [0x02fa8cd0]      ; 004711f4 | g_MessageCount
    MOV dword ptr [0x020a572c],EBX      ; 004711fa | g_MicroFont
    TEST ESI,ESI                        ; 00471200
    JZ 0x004712ca                       ; 00471202
        ;   XREF to: 004712ca (CONDITIONAL_JUMP)  ; LAB_004712ca
    MOV EBP,0xd5                        ; 00471208
    MOV EDI,0x61ebea                    ; 0047120d | = "..\\core\\dfont.cpp"
    MOV EAX,[0x020a5730]                ; 00471212 | g_MediumWinFont
    MOV dword ptr [0x02f0d944],EBP      ; 00471217 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDI      ; 0047121d | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00471223
    JNZ 0x004712e8                      ; 00471225
        ;   XREF to: 004712e8 (CONDITIONAL_JUMP)  ; LAB_004712e8
    MOV ECX,0x61ebfc                    ; 0047122b | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0047122b
    MOV EBX,0xd7                        ; 00471230
    MOV ESI,dword ptr [0x020a5734]      ; 00471235 | g_TinyWinFont
    XOR EDX,EDX                         ; 0047123b
    MOV dword ptr [0x0067d20c],ECX      ; 0047123d | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 00471243 | g_CurrentDebugLine
    MOV dword ptr [0x020a5730],EDX      ; 00471249 | g_MediumWinFont
    TEST ESI,ESI                        ; 0047124f
    JZ 0x0047125d                       ; 00471251
        ;   XREF to: 0047125d (CONDITIONAL_JUMP)  ; LAB_0047125d
    PUSH 0x2                            ; 00471253
    MOV EDX,dword ptr [ESI]             ; 00471255
    PUSH ESI                            ; 00471257
    CALL dword ptr [EDX]                ; 00471258
    ADD ESP,0x8                         ; 0047125a
    MOV EBP,0x61ec0e                    ; 0047125d | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0047125d
    MOV EAX,0xd9                        ; 00471262
    MOV EDX,dword ptr [0x020a5738]      ; 00471267 | g_ThemeWinFont
    XOR EDI,EDI                         ; 0047126d
    MOV dword ptr [0x0067d20c],EBP      ; 0047126f | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 00471275 | g_CurrentDebugLine
    MOV dword ptr [0x020a5734],EDI      ; 0047127a | g_TinyWinFont
    TEST EDX,EDX                        ; 00471280
    JZ 0x00471290                       ; 00471282
        ;   XREF to: 00471290 (CONDITIONAL_JUMP)  ; LAB_00471290
    PUSH 0x2                            ; 00471284
    MOV EAX,EDX                         ; 00471286
    PUSH EAX                            ; 00471288
    MOV EDX,dword ptr [EDX]             ; 00471289
    CALL dword ptr [EDX]                ; 0047128b
    ADD ESP,0x8                         ; 0047128d
    MOV EBX,0x61ec20                    ; 00471290 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00471290
    MOV ESI,0xdb                        ; 00471295
    MOV EDI,dword ptr [0x020a573c]      ; 0047129a | g_DebugWinFont
    XOR ECX,ECX                         ; 004712a0
    MOV dword ptr [0x0067d20c],EBX      ; 004712a2 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 004712a8 | g_CurrentDebugLine
    MOV dword ptr [0x020a5738],ECX      ; 004712ae | g_ThemeWinFont
    TEST EDI,EDI                        ; 004712b4
    JZ 0x004712c2                       ; 004712b6
        ;   XREF to: 004712c2 (CONDITIONAL_JUMP)  ; LAB_004712c2
    PUSH 0x2                            ; 004712b8
    MOV EDX,dword ptr [EDI]             ; 004712ba
    PUSH EDI                            ; 004712bc
    CALL dword ptr [EDX]                ; 004712bd
    ADD ESP,0x8                         ; 004712bf
    XOR EBP,EBP                         ; 004712c2
        ;   Label: LAB_004712c2
    MOV dword ptr [0x020a573c],EBP      ; 004712c4 | g_DebugWinFont
    POP EBP                             ; 004712ca
        ;   Label: LAB_004712ca
    POP EDI                             ; 004712cb
    POP ESI                             ; 004712cc
    POP EBX                             ; 004712cd
    RET                                 ; 004712ce
    PUSH 0x0                            ; 004712cf
        ;   Label: LAB_004712cf
    PUSH EBX                            ; 004712d1
    CALL engine_font.cpp_CBitFont_dtor_FUN_004cceb0 ; 004712d2
        ;   XREF to: 004cceb0 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_dtor_FUN_004cceb0(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004712d7
    PUSH EAX                            ; 004712da
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004712db
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004712e0
    JMP 0x004710c8                      ; 004712e3
        ;   XREF to: 004710c8 (UNCONDITIONAL_JUMP)  ; LAB_004710c8
    PUSH 0x2                            ; 004712e8
        ;   Label: LAB_004712e8
    MOV EDX,dword ptr [EAX]             ; 004712ea
    PUSH EAX                            ; 004712ec
    CALL dword ptr [EDX]                ; 004712ed
    ADD ESP,0x8                         ; 004712ef
    JMP 0x0047122b                      ; 004712f2
        ;   XREF to: 0047122b (UNCONDITIONAL_JUMP)  ; LAB_0047122b

