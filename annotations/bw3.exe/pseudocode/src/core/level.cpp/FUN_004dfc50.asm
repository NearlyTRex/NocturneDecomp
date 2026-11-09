; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_level_cpp_FUN_004dfc50(undefined4 *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_game.cpp_FUN_004bdfb0 at 004be142
;   core_game.cpp_FUN_004be8d0 at 004beaa7
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f73df
;
; Referenced Globals:
;   TerminatedCString s_load_0_005c688d
;   TerminatedCString s_L_demon_005c6894
;   TerminatedCString s_load_1_005c689c
;   TerminatedCString s_L_cross_005c68a3
;   TerminatedCString s_load_2_005c68ab
;   TerminatedCString s_L_stick_005c68b2
;   TerminatedCString s_load_3_005c68ba
;   TerminatedCString s_L_shaman_005c68c1
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005a35cc
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_special.cpp_clearScreen_FUN_00560d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfc50
        ;   Label: core_level.cpp_FUN_004dfc50
    PUSH ESI                            ; 004dfc51
    SUB ESP,0x50                        ; 004dfc52
    MOV ESI,dword ptr [ESP + 0x5c]      ; 004dfc55
    MOV EDX,dword ptr [ESP + 0x64]      ; 004dfc59
    MOV dword ptr [ESI + 0x4],0xc       ; 004dfc5d
    MOV dword ptr [ESI + 0x8],0x0       ; 004dfc64
    MOV dword ptr [ESI + 0xc],0x1       ; 004dfc6b
    MOV dword ptr [ESI],0x0             ; 004dfc72
    MOV dword ptr [ESI + 0x110],EDX     ; 004dfc78
    TEST EDX,EDX                        ; 004dfc7e
    JZ 0x004dff0b                       ; 004dfc80
        ;   XREF to: 004dff0b (CONDITIONAL_JUMP)  ; LAB_004dff0b
    MOV dword ptr [ESI + 0x118],0x0     ; 004dfc86
    MOV dword ptr [ESI + 0x11c],0xc0    ; 004dfc90
    MOV dword ptr [ESI + 0x120],0xc0    ; 004dfc9a
    MOV dword ptr [ESI + 0x114],0x1bf   ; 004dfca4
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004dfcae
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_004dfcae
    MOV EDX,EAX                         ; 004dfcb3
    MOV EBX,0x4                         ; 004dfcb5
    SAR EDX,0x1f                        ; 004dfcba
    IDIV EBX                            ; 004dfcbd
    MOV EBX,EDX                         ; 004dfcbf
    TEST EDX,EDX                        ; 004dfcc1
    JNZ 0x004dfd7e                      ; 004dfcc3
        ;   XREF to: 004dfd7e (CONDITIONAL_JUMP)  ; LAB_004dfd7e
    MOV EDX,ESP                         ; 004dfcc9
    PUSH EDX                            ; 004dfccb
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004dfccc
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004dfcd1
    PUSH 0x1e0                          ; 004dfcd4
    PUSH 0x280                          ; 004dfcd9
    PUSH 0x5c688d                       ; 004dfcde | = "load_0"
    LEA EDX,[ESP + 0xc]                 ; 004dfce3
    PUSH EDX                            ; 004dfce7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfce8
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfced
    PUSH 0x80                           ; 004dfcf0
    PUSH 0x80                           ; 004dfcf5
    PUSH 0x5c6894                       ; 004dfcfa | = "L_demon"
    PUSH 0x1d70be8                      ; 004dfcff
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfd04
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfd09
    PUSH 0xffff                         ; 004dfd0c
    PUSH EBX                            ; 004dfd11
    PUSH EBX                            ; 004dfd12
    LEA EDX,[ESP + 0xc]                 ; 004dfd13
    PUSH EDX                            ; 004dfd17
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004dfd18
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x78    ; 004dfd1d
    MOV dword ptr [ESI + 0x118],0x82    ; 004dfd27
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004dfd31
    MOV dword ptr [ESI + 0x120],0x5a    ; 004dfd3b
    MOV dword ptr [ESI + 0x110],0x1     ; 004dfd45
    ADD ESP,0x10                        ; 004dfd4f
    MOV dword ptr [ESI + 0x124],0x82    ; 004dfd52
    PUSH EBX                            ; 004dfd5c
    LEA EDX,[ESP + 0x4]                 ; 004dfd5d
    MOV dword ptr [ESI + 0x128],0xc8    ; 004dfd61
    PUSH EDX                            ; 004dfd6b
    MOV dword ptr [ESI + 0x12c],0xf4    ; 004dfd6c
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004dfd76
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dfd7b
    CMP EBX,0x1                         ; 004dfd7e
        ;   Label: LAB_004dfd7e
    JNZ 0x004dfe3d                      ; 004dfd81
        ;   XREF to: 004dfe3d (CONDITIONAL_JUMP)  ; LAB_004dfe3d
    LEA EDX,[ESP + 0x14]                ; 004dfd87
    PUSH EDX                            ; 004dfd8b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004dfd8c
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004dfd91
    PUSH 0x1e0                          ; 004dfd94
    PUSH 0x280                          ; 004dfd99
    PUSH 0x5c689c                       ; 004dfd9e | = "load_1"
    LEA EDX,[ESP + 0x20]                ; 004dfda3
    PUSH EDX                            ; 004dfda7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfda8
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfdad
    PUSH 0x80                           ; 004dfdb0
    PUSH 0x80                           ; 004dfdb5
    PUSH 0x5c68a3                       ; 004dfdba | = "L_cross"
    PUSH 0x1d70be8                      ; 004dfdbf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfdc4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfdc9
    PUSH 0xffff                         ; 004dfdcc
    PUSH 0x0                            ; 004dfdd1
    PUSH 0x0                            ; 004dfdd3
    LEA EDX,[ESP + 0x20]                ; 004dfdd5
    PUSH EDX                            ; 004dfdd9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004dfdda
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x1e4   ; 004dfddf
    MOV dword ptr [ESI + 0x118],0x42    ; 004dfde9
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004dfdf3
    MOV dword ptr [ESI + 0x120],0x5a    ; 004dfdfd
    MOV dword ptr [ESI + 0x124],0x82    ; 004dfe07
    ADD ESP,0x10                        ; 004dfe11
    MOV dword ptr [ESI + 0x128],0xbd    ; 004dfe14
    PUSH 0x0                            ; 004dfe1e
    LEA EDX,[ESP + 0x18]                ; 004dfe20
    MOV dword ptr [ESI + 0x12c],0xff    ; 004dfe24
    PUSH EDX                            ; 004dfe2e
    MOV dword ptr [ESI + 0x110],EBX     ; 004dfe2f
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004dfe35
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dfe3a
    CMP EBX,0x2                         ; 004dfe3d
        ;   Label: LAB_004dfe3d
    JNZ 0x004dff00                      ; 004dfe40
        ;   XREF to: 004dff00 (CONDITIONAL_JUMP)  ; LAB_004dff00
    LEA EDX,[ESP + 0x28]                ; 004dfe46
    PUSH EDX                            ; 004dfe4a
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004dfe4b
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004dfe50
    PUSH 0x1e0                          ; 004dfe53
    PUSH 0x280                          ; 004dfe58
    PUSH 0x5c68ab                       ; 004dfe5d | = "load_2"
    LEA EDX,[ESP + 0x34]                ; 004dfe62
    PUSH EDX                            ; 004dfe66
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfe67
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfe6c
    PUSH 0x80                           ; 004dfe6f
    PUSH 0x80                           ; 004dfe74
    PUSH 0x5c68b2                       ; 004dfe79 | = "L_stick"
    PUSH 0x1d70be8                      ; 004dfe7e
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dfe83
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dfe88
    PUSH 0xffff                         ; 004dfe8b
    PUSH 0x0                            ; 004dfe90
    PUSH 0x0                            ; 004dfe92
    LEA EDX,[ESP + 0x34]                ; 004dfe94
    PUSH EDX                            ; 004dfe98
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004dfe99
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x9f    ; 004dfe9e
    MOV dword ptr [ESI + 0x118],0x1     ; 004dfea8
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004dfeb2
    MOV dword ptr [ESI + 0x120],0x5a    ; 004dfebc
    MOV dword ptr [ESI + 0x110],0x1     ; 004dfec6
    ADD ESP,0x10                        ; 004dfed0
    MOV dword ptr [ESI + 0x124],0x9e    ; 004dfed3
    PUSH 0x0                            ; 004dfedd
    LEA EDX,[ESP + 0x2c]                ; 004dfedf
    MOV dword ptr [ESI + 0x128],0xe1    ; 004dfee3
    PUSH EDX                            ; 004dfeed
    MOV dword ptr [ESI + 0x12c],0xff    ; 004dfeee
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004dfef8
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dfefd
    CMP EBX,0x3                         ; 004dff00
        ;   Label: LAB_004dff00
    JZ 0x004dff3d                       ; 004dff03
        ;   XREF to: 004dff3d (CONDITIONAL_JUMP)  ; LAB_004dff3d
    ADD ESP,0x50                        ; 004dff05
    POP ESI                             ; 004dff08
    POP EBX                             ; 004dff09
    RET                                 ; 004dff0a
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004dff0b
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_004dff0b
    MOV dword ptr [ESI + 0x114],0x0     ; 004dff10
    MOV dword ptr [ESI + 0x118],0x0     ; 004dff1a
    MOV dword ptr [ESI + 0x11c],0x280   ; 004dff24
    MOV dword ptr [ESI + 0x120],0x1e0   ; 004dff2e
    JMP 0x004dfcae                      ; 004dff38
        ;   XREF to: 004dfcae (UNCONDITIONAL_JUMP)  ; LAB_004dfcae
    LEA EDX,[ESP + 0x3c]                ; 004dff3d
        ;   Label: LAB_004dff3d
    PUSH EDX                            ; 004dff41
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004dff42
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004dff47
    PUSH 0x1e0                          ; 004dff4a
    PUSH 0x280                          ; 004dff4f
    PUSH 0x5c68ba                       ; 004dff54 | = "load_3"
    LEA EDX,[ESP + 0x48]                ; 004dff59
    PUSH EDX                            ; 004dff5d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dff5e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dff63
    PUSH 0x80                           ; 004dff66
    PUSH 0x80                           ; 004dff6b
    PUSH 0x5c68c1                       ; 004dff70 | = "L_shaman"
    PUSH 0x1d70be8                      ; 004dff75
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004dff7a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004dff7f
    PUSH 0xffff                         ; 004dff82
    PUSH 0x0                            ; 004dff87
    PUSH 0x0                            ; 004dff89
    LEA EDX,[ESP + 0x48]                ; 004dff8b
    PUSH EDX                            ; 004dff8f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004dff90
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x17b   ; 004dff95
    MOV dword ptr [ESI + 0x118],0x44    ; 004dff9f
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004dffa9
    MOV dword ptr [ESI + 0x120],0x5a    ; 004dffb3
    MOV dword ptr [ESI + 0x110],0x1     ; 004dffbd
    ADD ESP,0x10                        ; 004dffc7
    MOV dword ptr [ESI + 0x124],0x6b    ; 004dffca
    PUSH 0x0                            ; 004dffd4
    LEA EDX,[ESP + 0x40]                ; 004dffd6
    MOV dword ptr [ESI + 0x128],0x9a    ; 004dffda
    PUSH EDX                            ; 004dffe4
    MOV dword ptr [ESI + 0x12c],0xff    ; 004dffe5
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004dffef
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dfff4
    ADD ESP,0x50                        ; 004dfff7
    POP ESI                             ; 004dfffa
    POP EBX                             ; 004dfffb
    RET                                 ; 004dfffc

