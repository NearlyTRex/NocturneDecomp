; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   FUN_00401010 at 0040104f
;   FUN_004c85f0 at 004c8760
;   FUN_00553ba0 at 00553c78
;   core_game.cpp_CGame_setGameRes_FUN_0049d870 at 0049d89f
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 at 0049d98b
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005533a0 at 00553461
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00553190 at 005532f4
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005977c5
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005977dc
;   TerminatedCString s_wincore_wddvmem_cpp_00597808
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0059781f
;   TerminatedCString s_wincore_wddvmem_cpp_00597847
;   TerminatedCString s_setScreenResolution_Crea_0059785e
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01cc4800
;   ... and 7 more
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_memset_FUN_00563cc0
;   engine_2d.c_setupViewportAndClipping_FUN_00401e30
;   FUN_004c8440
;   FUN_005638d0
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552e00
        ;   Label: wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
    PUSH ESI                            ; 00552e01
    PUSH EDI                            ; 00552e02
    PUSH EBP                            ; 00552e03
    SUB ESP,0x74                        ; 00552e04
    MOV EBX,dword ptr [ESP + 0x90]      ; 00552e07
    MOV EDX,dword ptr [0x02ddf55c]      ; 00552e0e | DAT_02ddf55c
    TEST EDX,EDX                        ; 00552e14
    JNZ 0x00552f97                      ; 00552e16
        ;   XREF to: 00552f97 (CONDITIONAL_JUMP)  ; LAB_00552f97
    MOV ESI,dword ptr [0x02ddf558]      ; 00552e1c | DAT_02ddf558
        ;   Label: LAB_00552e1c
    TEST ESI,ESI                        ; 00552e22
    JZ 0x00552e34                       ; 00552e24
        ;   XREF to: 00552e34 (CONDITIONAL_JUMP)  ; LAB_00552e34
    PUSH ESI                            ; 00552e26
    MOV EDX,dword ptr [ESI]             ; 00552e27
    XOR EDI,EDI                         ; 00552e29
    CALL dword ptr [EDX + 0x8]          ; 00552e2b
    MOV dword ptr [0x02ddf558],EDI      ; 00552e2e | DAT_02ddf558
    MOV EBP,dword ptr [0x02ddf554]      ; 00552e34 | DAT_02ddf554
        ;   Label: LAB_00552e34
    TEST EBP,EBP                        ; 00552e3a
    JZ 0x00552e4c                       ; 00552e3c
        ;   XREF to: 00552e4c (CONDITIONAL_JUMP)  ; LAB_00552e4c
    PUSH EBP                            ; 00552e3e
    MOV EDX,dword ptr [EBP]             ; 00552e3f
    CALL dword ptr [EDX + 0x8]          ; 00552e42
    XOR EAX,EAX                         ; 00552e45
    MOV [0x02ddf554],EAX                ; 00552e47 | DAT_02ddf554
    CMP EBX,0x8                         ; 00552e4c
        ;   Label: LAB_00552e4c
    JZ 0x00552e5f                       ; 00552e4f
        ;   XREF to: 00552e5f (CONDITIONAL_JUMP)  ; LAB_00552e5f
    CMP EBX,0x10                        ; 00552e51
    JZ 0x00552e5f                       ; 00552e54
        ;   XREF to: 00552e5f (CONDITIONAL_JUMP)  ; LAB_00552e5f
    CMP EBX,0x20                        ; 00552e56
    JNZ 0x00552f8d                      ; 00552e59
        ;   XREF to: 00552f8d (CONDITIONAL_JUMP)  ; LAB_00552f8d
    MOV EAX,dword ptr [ESP + 0x88]      ; 00552e5f
        ;   Label: LAB_00552e5f
    MOV ECX,dword ptr [0x005c5010]      ; 00552e66 | DAT_005c5010
    MOV dword ptr [0x005b7624],EBX      ; 00552e6c | DAT_005b7624
    XOR EDX,EDX                         ; 00552e72
    MOV [0x005b761c],EAX                ; 00552e74 | DAT_005b761c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00552e79
    MOV dword ptr [0x02ddf56c],EDX      ; 00552e80 | DAT_02ddf56c
    MOV [0x005b7620],EAX                ; 00552e86 | DAT_005b7620
    TEST ECX,ECX                        ; 00552e8b
    JZ 0x00552ea0                       ; 00552e8d
        ;   XREF to: 00552ea0 (CONDITIONAL_JUMP)  ; LAB_00552ea0
    PUSH ECX                            ; 00552e8f
    CALL FUN_005638d0                   ; 00552e90
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    XOR EDI,EDI                         ; 00552e95
    ADD ESP,0x4                         ; 00552e97
    MOV dword ptr [0x005c5010],EDI      ; 00552e9a | DAT_005c5010
    MOV EBP,dword ptr [0x02ddf560]      ; 00552ea0 | DAT_02ddf560
        ;   Label: LAB_00552ea0
    TEST EBP,EBP                        ; 00552ea6
    JZ 0x00552ebb                       ; 00552ea8
        ;   XREF to: 00552ebb (CONDITIONAL_JUMP)  ; LAB_00552ebb
    PUSH EBP                            ; 00552eaa
    CALL FUN_005638d0                   ; 00552eab
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    XOR EDX,EDX                         ; 00552eb0
    ADD ESP,0x4                         ; 00552eb2
    MOV dword ptr [0x006af62c],EDX      ; 00552eb5 | DAT_006af62c
    MOV EAX,[0x005b761c]                ; 00552ebb | DAT_005b761c
        ;   Label: LAB_00552ebb
    MOV ECX,dword ptr [0x005b7620]      ; 00552ec0 | DAT_005b7620
    IMUL ECX,EAX                        ; 00552ec6
    MOV EAX,[0x005b7624]                ; 00552ec9 | DAT_005b7624
    MOV EDX,EAX                         ; 00552ece
    SAR EDX,0x1f                        ; 00552ed0
    SHL EDX,0x3                         ; 00552ed3
    SBB EAX,EDX                         ; 00552ed6
    SAR EAX,0x3                         ; 00552ed8
    IMUL EAX,ECX                        ; 00552edb
    PUSH EAX                            ; 00552ede
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552edf
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00552ee4
    MOV [0x005c5010],EAX                ; 00552ee7 | DAT_005c5010
    TEST EAX,EAX                        ; 00552eec
    JNZ 0x00552f13                      ; 00552eee
        ;   XREF to: 00552f13 (CONDITIONAL_JUMP)  ; LAB_00552f13
    MOV ESI,0x5977c5                    ; 00552ef0 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0xea                        ; 00552ef5
    PUSH 0x5977dc                       ; 00552efa | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01cc4800],ESI      ; 00552eff | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00552f05 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00552f0b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00552f10
    MOV EAX,[0x005b761c]                ; 00552f13 | DAT_005b761c
        ;   Label: LAB_00552f13
    IMUL EAX,dword ptr [0x005b7620]     ; 00552f18 | DAT_005b7620
    SHL EAX,0x2                         ; 00552f1f
    ADD EAX,0x40                        ; 00552f22
    PUSH EAX                            ; 00552f25
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552f26
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00552f2b
    MOV [0x02ddf560],EAX                ; 00552f2e | DAT_02ddf560
    TEST EAX,EAX                        ; 00552f33
    JNZ 0x00552f59                      ; 00552f35
        ;   XREF to: 00552f59 (CONDITIONAL_JUMP)  ; LAB_00552f59
    MOV EAX,0x597808                    ; 00552f37 | = "..\\wincore\\wddvmem.cpp"
    MOV EDX,0xef                        ; 00552f3c
    PUSH 0x59781f                       ; 00552f41 | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV [0x01cc4800],EAX                ; 00552f46 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00552f4b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00552f51
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00552f56
    MOV EAX,[0x02ddf560]                ; 00552f59 | DAT_02ddf560
        ;   Label: LAB_00552f59
    PUSH EBX                            ; 00552f5e
    MOV ECX,dword ptr [ESP + 0x90]      ; 00552f5f
    ADD EAX,0x10                        ; 00552f66
    PUSH ECX                            ; 00552f69
    MOV ESI,dword ptr [ESP + 0x90]      ; 00552f6a
    AND AL,0xf0                         ; 00552f71
    PUSH ESI                            ; 00552f73
    MOV [0x006af62c],EAX                ; 00552f74 | DAT_006af62c
    MOV EAX,[0x02ddf550]                ; 00552f79 | DAT_02ddf550
    PUSH EAX                            ; 00552f7e
    MOV EDX,dword ptr [EAX]             ; 00552f7f
    CALL dword ptr [EDX + 0x54]         ; 00552f81
    TEST EAX,EAX                        ; 00552f84
    JZ 0x00552fd0                       ; 00552f86
        ;   XREF to: 00552fd0 (CONDITIONAL_JUMP)  ; LAB_00552fd0
    CMP EBX,0x20                        ; 00552f88
    JZ 0x00552fac                       ; 00552f8b
        ;   XREF to: 00552fac (CONDITIONAL_JUMP)  ; LAB_00552fac
    XOR EAX,EAX                         ; 00552f8d
        ;   Label: LAB_00552f8d
    ADD ESP,0x74                        ; 00552f8f
    POP EBP                             ; 00552f92
    POP EDI                             ; 00552f93
    POP ESI                             ; 00552f94
    POP EBX                             ; 00552f95
    RET                                 ; 00552f96
    MOV EAX,EDX                         ; 00552f97
        ;   Label: LAB_00552f97
    PUSH EAX                            ; 00552f99
    MOV EDX,dword ptr [EDX]             ; 00552f9a
    CALL dword ptr [EDX + 0x8]          ; 00552f9c
    XOR ECX,ECX                         ; 00552f9f
    MOV dword ptr [0x02ddf55c],ECX      ; 00552fa1 | DAT_02ddf55c
    JMP 0x00552e1c                      ; 00552fa7
        ;   XREF to: 00552e1c (UNCONDITIONAL_JUMP)  ; LAB_00552e1c
    PUSH 0x18                           ; 00552fac
        ;   Label: LAB_00552fac
    MOV EDI,dword ptr [ESP + 0x90]      ; 00552fae
    PUSH EDI                            ; 00552fb5
    MOV EAX,[0x02ddf550]                ; 00552fb6 | DAT_02ddf550
    PUSH ESI                            ; 00552fbb
    MOV EDX,dword ptr [EAX]             ; 00552fbc
    PUSH EAX                            ; 00552fbe
    CALL dword ptr [EDX + 0x54]         ; 00552fbf
    TEST EAX,EAX                        ; 00552fc2
    JNZ 0x00552f8d                      ; 00552fc4
        ;   XREF to: 00552f8d (CONDITIONAL_JUMP)  ; LAB_00552f8d
    MOV dword ptr [0x02ddf56c],0x1      ; 00552fc6 | DAT_02ddf56c
    PUSH 0x6c                           ; 00552fd0
        ;   Label: LAB_00552fd0
    PUSH 0x0                            ; 00552fd2
    LEA EAX,[ESP + 0x8]                 ; 00552fd4
    PUSH EAX                            ; 00552fd8
    MOV EBX,0x6218                      ; 00552fd9
    MOV ESI,0x2                         ; 00552fde
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00552fe3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV EDX,0x6c                        ; 00552fe8
    ADD ESP,0xc                         ; 00552fed
    MOV ECX,0x21                        ; 00552ff0
    MOV EAX,[0x02ddf550]                ; 00552ff5 | DAT_02ddf550
    PUSH 0x0                            ; 00552ffa
    MOV dword ptr [ESP + 0x4],EDX       ; 00552ffc
    MOV dword ptr [ESP + 0x8],ECX       ; 00553000
    MOV dword ptr [ESP + 0x6c],EBX      ; 00553004
    PUSH 0x2ddf554                      ; 00553008 | DAT_02ddf554
    LEA EDX,[ESP + 0x8]                 ; 0055300d
    MOV dword ptr [ESP + 0x1c],ESI      ; 00553011
    PUSH EDX                            ; 00553015
    MOV ECX,dword ptr [EAX]             ; 00553016
    PUSH EAX                            ; 00553018
    CALL dword ptr [ECX + 0x18]         ; 00553019
    TEST EAX,EAX                        ; 0055301c
    JZ 0x0055306c                       ; 0055301e
        ;   XREF to: 0055306c (CONDITIONAL_JUMP)  ; LAB_0055306c
    PUSH 0x0                            ; 00553020
    MOV EDI,0x1                         ; 00553022
    LEA EDX,[ESP + 0x4]                 ; 00553027
    PUSH 0x2ddf554                      ; 0055302b | DAT_02ddf554
    MOV EAX,[0x02ddf550]                ; 00553030 | DAT_02ddf550
    MOV dword ptr [ESP + 0x1c],EDI      ; 00553035
    PUSH EDX                            ; 00553039
    MOV ECX,dword ptr [EAX]             ; 0055303a
    PUSH EAX                            ; 0055303c
    CALL dword ptr [ECX + 0x18]         ; 0055303d
    TEST EAX,EAX                        ; 00553040
    JZ 0x0055306c                       ; 00553042
        ;   XREF to: 0055306c (CONDITIONAL_JUMP)  ; LAB_0055306c
    PUSH 0x0                            ; 00553044
    MOV EBP,0xa18                       ; 00553046
    LEA EDX,[ESP + 0x4]                 ; 0055304b
    PUSH 0x2ddf554                      ; 0055304f | DAT_02ddf554
    MOV EAX,[0x02ddf550]                ; 00553054 | DAT_02ddf550
    MOV dword ptr [ESP + 0x70],EBP      ; 00553059
    PUSH EDX                            ; 0055305d
    MOV ECX,dword ptr [EAX]             ; 0055305e
    PUSH EAX                            ; 00553060
    CALL dword ptr [ECX + 0x18]         ; 00553061
    TEST EAX,EAX                        ; 00553064
    JNZ 0x00552f8d                      ; 00553066
        ;   XREF to: 00552f8d (CONDITIONAL_JUMP)  ; LAB_00552f8d
    PUSH 0x4                            ; 0055306c
        ;   Label: LAB_0055306c
    PUSH 0x0                            ; 0055306e
    LEA EAX,[ESP + 0x74]                ; 00553070
    PUSH EAX                            ; 00553074
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00553075
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 0055307a
    PUSH 0x2ddf558                      ; 0055307d | DAT_02ddf558
    LEA ECX,[ESP + 0x70]                ; 00553082
    MOV EAX,0x4                         ; 00553086
    PUSH ECX                            ; 0055308b
    MOV dword ptr [ESP + 0x74],EAX      ; 0055308c
    MOV EAX,[0x02ddf554]                ; 00553090 | DAT_02ddf554
    PUSH EAX                            ; 00553095
    MOV EDX,dword ptr [EAX]             ; 00553096
    CALL dword ptr [EDX + 0x30]         ; 00553098
    TEST EAX,EAX                        ; 0055309b
    JNZ 0x00553162                      ; 0055309d
        ;   XREF to: 00553162 (CONDITIONAL_JUMP)  ; LAB_00553162
    MOV EDX,dword ptr [0x005b7620]      ; 005530a3 | DAT_005b7620
    XOR ECX,ECX                         ; 005530a9
    TEST EDX,EDX                        ; 005530ab
    JLE 0x00553120                      ; 005530ad
        ;   XREF to: 00553120 (CONDITIONAL_JUMP)  ; LAB_00553120
    MOV EAX,[0x005b7624]                ; 005530af | DAT_005b7624
    MOV EDX,EAX                         ; 005530b4
    SAR EDX,0x1f                        ; 005530b6
    SHL EDX,0x3                         ; 005530b9
    SBB EAX,EDX                         ; 005530bc
    SAR EAX,0x3                         ; 005530be
    MOV EDI,EAX                         ; 005530c1
    MOV EAX,[0x005b761c]                ; 005530c3 | DAT_005b761c
    SHL EAX,0x2                         ; 005530c8
    MOV dword ptr [ESP + 0x70],EAX      ; 005530cb
    IMUL EDX,dword ptr [0x005b761c],0x0 ; 005530cf | DAT_005b761c
    MOV EBX,dword ptr [0x005c5010]      ; 005530d6 | DAT_005c5010
    MOV EBP,dword ptr [0x005b7620]      ; 005530dc | DAT_005b7620
    XOR EAX,EAX                         ; 005530e2
    MOV ESI,dword ptr [0x005b761c]      ; 005530e4 | DAT_005b761c
        ;   Label: LAB_005530e4
    IMUL ESI,ECX                        ; 005530ea
    IMUL ESI,EDI                        ; 005530ed
    ADD ESI,EBX                         ; 005530f0
    MOV dword ptr [EAX + 0x1bd2fa0],ESI ; 005530f2 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV ESI,dword ptr [0x006af62c]      ; 005530f8 | DAT_006af62c
    ADD EAX,0x4                         ; 005530fe
    ADD ESI,EDX                         ; 00553101
    MOV dword ptr [EAX + 0x1bd425c],ESI ; 00553103 | DAT_01bd4260
    MOV ESI,dword ptr [ESP + 0x70]      ; 00553109
    INC ECX                             ; 0055310d
    ADD EDX,ESI                         ; 0055310e
    CMP ECX,EBP                         ; 00553110
    JL 0x005530e4                       ; 00553112
        ;   XREF to: 005530e4 (CONDITIONAL_JUMP)  ; LAB_005530e4
    LEA EAX,[EAX]                       ; 00553114
    LEA EDX,[EDX]                       ; 0055311a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00553120
        ;   Label: LAB_00553120
    DEC EAX                             ; 00553127
    PUSH EAX                            ; 00553128
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00553129
    DEC EAX                             ; 00553130
    PUSH EAX                            ; 00553131
    PUSH 0x0                            ; 00553132
    PUSH 0x0                            ; 00553134
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401e30 ; 00553136
        ;   XREF to: 00401e30 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_setupViewportAndClipping_FUN_00401e30()
    ADD ESP,0x10                        ; 0055313b
    XOR ESI,ESI                         ; 0055313e
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0 ; 00553140
        ;   XREF to: 005537e0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0()
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 00553145
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_00553145
    INC ESI                             ; 0055314a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0055314b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CMP ESI,0x3                         ; 00553150
    JL 0x00553145                       ; 00553153
        ;   XREF to: 00553145 (CONDITIONAL_JUMP)  ; LAB_00553145
    MOV EAX,0x1                         ; 00553155
    ADD ESP,0x74                        ; 0055315a
    POP EBP                             ; 0055315d
    POP EDI                             ; 0055315e
    POP ESI                             ; 0055315f
    POP EBX                             ; 00553160
    RET                                 ; 00553161
    MOV ECX,0x597847                    ; 00553162 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00553162
    MOV EBX,0x1d7                       ; 00553167
    PUSH 0x59785e                       ; 0055316c | = "setScreenResolution - Create back buf..."
    MOV dword ptr [0x01cc4800],ECX      ; 00553171 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00553177 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0055317d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00553182
    XOR EAX,EAX                         ; 00553185
    ADD ESP,0x74                        ; 00553187
    POP EBP                             ; 0055318a
    POP EDI                             ; 0055318b
    POP ESI                             ; 0055318c
    POP EBX                             ; 0055318d
    RET                                 ; 0055318e

