; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ac830(void)
;
;
; XREF[1]:
;   engine_2d.c_resetGraphicsSystem_FUN_00402ac0 at 00402ac0
;
; Referenced Globals:
;   TerminatedCString s_You_have_hit_a_kludge_in_005f95af
;   TerminatedCString s_You_are_setting_accelera_005f95d5
;   TerminatedCString s_the_appropriate_bit_dept_005f9607
;   TerminatedCString s_I_am_forcing_the_screen_005f9628
;   TerminatedCString s_Press_any_key_to_continu_005f9659
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83370
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   undefined4 DAT_02c99318
;   ... and 1 more
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   engine_special.cpp_setResolutionAndColorTable_FUN_005821c0
;   wincore_wddvmem.cpp_FUN_005ac300
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;   wincore_winrun.cpp_getNextKeypress_FUN_005b2510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac830
        ;   Label: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830
    PUSH ESI                            ; 005ac831
    PUSH EDI                            ; 005ac832
    PUSH EBP                            ; 005ac833
    MOV EDX,0x1                         ; 005ac834
    MOV ECX,dword ptr [0x02c83370]      ; 005ac839 | DAT_02c83370
    MOV dword ptr [0x02c99318],EDX      ; 005ac83f | DAT_02c99318
    TEST ECX,ECX                        ; 005ac845
    JZ 0x005ac99c                       ; 005ac847
        ;   XREF to: 005ac99c (CONDITIONAL_JUMP)  ; LAB_005ac99c
    CMP dword ptr [0x0061b4a0],0x10     ; 005ac84d | DAT_0061b4a0
    JL 0x005ac9a1                       ; 005ac854
        ;   XREF to: 005ac9a1 (CONDITIONAL_JUMP)  ; LAB_005ac9a1
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 005ac85a
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_005ac85a
    MOV EBP,dword ptr [0x02c9930c]      ; 005ac85f | DAT_02c9930c
    TEST EBP,EBP                        ; 005ac865
    JZ 0x005ac877                       ; 005ac867
        ;   XREF to: 005ac877 (CONDITIONAL_JUMP)  ; LAB_005ac877
    PUSH EBP                            ; 005ac869
    MOV EDX,dword ptr [EBP]             ; 005ac86a
    CALL dword ptr [EDX + 0x8]          ; 005ac86d
    XOR EAX,EAX                         ; 005ac870
    MOV [0x02c9930c],EAX                ; 005ac872 | DAT_02c9930c
    MOV EDX,dword ptr [0x02c99308]      ; 005ac877 | DAT_02c99308
        ;   Label: LAB_005ac877
    TEST EDX,EDX                        ; 005ac87d
    JZ 0x005ac891                       ; 005ac87f
        ;   XREF to: 005ac891 (CONDITIONAL_JUMP)  ; LAB_005ac891
    MOV EAX,EDX                         ; 005ac881
    PUSH EAX                            ; 005ac883
    MOV EDX,dword ptr [EDX]             ; 005ac884
    CALL dword ptr [EDX + 0x8]          ; 005ac886
    XOR ECX,ECX                         ; 005ac889
    MOV dword ptr [0x02c99308],ECX      ; 005ac88b | DAT_02c99308
    MOV EBX,dword ptr [0x02c99304]      ; 005ac891 | DAT_02c99304
        ;   Label: LAB_005ac891
    TEST EBX,EBX                        ; 005ac897
    JZ 0x005ac8a9                       ; 005ac899
        ;   XREF to: 005ac8a9 (CONDITIONAL_JUMP)  ; LAB_005ac8a9
    PUSH EBX                            ; 005ac89b
    MOV EDX,dword ptr [EBX]             ; 005ac89c
    XOR ESI,ESI                         ; 005ac89e
    CALL dword ptr [EDX + 0x8]          ; 005ac8a0
    MOV dword ptr [0x02c99304],ESI      ; 005ac8a3 | DAT_02c99304
    MOV EDI,dword ptr [0x02c99300]      ; 005ac8a9 | DAT_02c99300
        ;   Label: LAB_005ac8a9
    TEST EDI,EDI                        ; 005ac8af
    JZ 0x005ac8cc                       ; 005ac8b1
        ;   XREF to: 005ac8cc (CONDITIONAL_JUMP)  ; LAB_005ac8cc
    PUSH EDI                            ; 005ac8b3
    MOV EDX,dword ptr [EDI]             ; 005ac8b4
    CALL dword ptr [EDX + 0x4c]         ; 005ac8b6
    MOV EAX,[0x02c99300]                ; 005ac8b9 | DAT_02c99300
    PUSH EAX                            ; 005ac8be
    MOV EDX,dword ptr [EAX]             ; 005ac8bf
    XOR EBP,EBP                         ; 005ac8c1
    CALL dword ptr [EDX + 0x8]          ; 005ac8c3
    MOV dword ptr [0x02c99300],EBP      ; 005ac8c6 | DAT_02c99300
    MOV EAX,[0x0061b4a0]                ; 005ac8cc | DAT_0061b4a0
        ;   Label: LAB_005ac8cc
    PUSH EAX                            ; 005ac8d1
    MOV EDX,dword ptr [0x0061b49c]      ; 005ac8d2 | DAT_0061b49c
    PUSH EDX                            ; 005ac8d8
    MOV ECX,dword ptr [0x0061b498]      ; 005ac8d9 | DAT_0061b498
    PUSH ECX                            ; 005ac8df
    CALL engine_special.cpp_setResolutionAndColorTable_FUN_005821c0 ; 005ac8e0
        ;   XREF to: 005821c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setResolutionAndColorTable_FUN_005821c0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005ac8e5
    TEST EAX,EAX                        ; 005ac8e8
    JNZ 0x005ac99c                      ; 005ac8ea
        ;   XREF to: 005ac99c (CONDITIONAL_JUMP)  ; LAB_005ac99c
    MOV EDI,dword ptr [0x02c9930c]      ; 005ac8f0 | DAT_02c9930c
    MOV [0x02c83370],EAX                ; 005ac8f6 | DAT_02c83370
    MOV [0x01c50948],EAX                ; 005ac8fb | DAT_01c50948
    TEST EDI,EDI                        ; 005ac900
    JNZ 0x005aca22                      ; 005ac902
        ;   XREF to: 005aca22 (CONDITIONAL_JUMP)  ; LAB_005aca22
    MOV EAX,[0x02c99308]                ; 005ac908 | DAT_02c99308
        ;   Label: LAB_005ac908
    TEST EAX,EAX                        ; 005ac90d
    JZ 0x005ac91f                       ; 005ac90f
        ;   XREF to: 005ac91f (CONDITIONAL_JUMP)  ; LAB_005ac91f
    PUSH EAX                            ; 005ac911
    MOV EDX,dword ptr [EAX]             ; 005ac912
    CALL dword ptr [EDX + 0x8]          ; 005ac914
    XOR EDX,EDX                         ; 005ac917
    MOV dword ptr [0x02c99308],EDX      ; 005ac919 | DAT_02c99308
    MOV ECX,dword ptr [0x02c99304]      ; 005ac91f | DAT_02c99304
        ;   Label: LAB_005ac91f
    TEST ECX,ECX                        ; 005ac925
    JZ 0x005ac937                       ; 005ac927
        ;   XREF to: 005ac937 (CONDITIONAL_JUMP)  ; LAB_005ac937
    PUSH ECX                            ; 005ac929
    MOV EDX,dword ptr [ECX]             ; 005ac92a
    XOR EBX,EBX                         ; 005ac92c
    CALL dword ptr [EDX + 0x8]          ; 005ac92e
    MOV dword ptr [0x02c99304],EBX      ; 005ac931 | DAT_02c99304
    MOV ESI,dword ptr [0x02c99300]      ; 005ac937 | DAT_02c99300
        ;   Label: LAB_005ac937
    TEST ESI,ESI                        ; 005ac93d
    JZ 0x005ac95a                       ; 005ac93f
        ;   XREF to: 005ac95a (CONDITIONAL_JUMP)  ; LAB_005ac95a
    PUSH ESI                            ; 005ac941
    MOV EDX,dword ptr [ESI]             ; 005ac942
    CALL dword ptr [EDX + 0x4c]         ; 005ac944
    MOV EAX,[0x02c99300]                ; 005ac947 | DAT_02c99300
    PUSH EAX                            ; 005ac94c
    MOV EDX,dword ptr [EAX]             ; 005ac94d
    XOR EDI,EDI                         ; 005ac94f
    CALL dword ptr [EDX + 0x8]          ; 005ac951
    MOV dword ptr [0x02c99300],EDI      ; 005ac954 | DAT_02c99300
    PUSH 0x0                            ; 005ac95a
        ;   Label: LAB_005ac95a
    PUSH 0x2c99300                      ; 005ac95c | DAT_02c99300
    PUSH 0x0                            ; 005ac961
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ac963
        ;   XREF to: 005cf7ba (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 005ac968
    JNZ 0x005ac980                      ; 005ac96a
        ;   XREF to: 005ac980 (CONDITIONAL_JUMP)  ; LAB_005ac980
    PUSH 0x11                           ; 005ac96c
    MOV EBP,dword ptr [0x02c9be68]      ; 005ac96e | DAT_02c9be68
    MOV EAX,[0x02c99300]                ; 005ac974 | DAT_02c99300
    PUSH EBP                            ; 005ac979
    MOV EDX,dword ptr [EAX]             ; 005ac97a
    PUSH EAX                            ; 005ac97c
    CALL dword ptr [EDX + 0x50]         ; 005ac97d
    MOV EAX,[0x0061b4a0]                ; 005ac980 | DAT_0061b4a0
        ;   Label: LAB_005ac980
    PUSH EAX                            ; 005ac985
    MOV EDX,dword ptr [0x0061b49c]      ; 005ac986 | DAT_0061b49c
    PUSH EDX                            ; 005ac98c
    MOV ECX,dword ptr [0x0061b498]      ; 005ac98d | DAT_0061b498
    PUSH ECX                            ; 005ac993
    CALL wincore_wddvmem.cpp_FUN_005ac300 ; 005ac994
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ac300()
    ADD ESP,0xc                         ; 005ac999
    POP EBP                             ; 005ac99c
        ;   Label: LAB_005ac99c
    POP EDI                             ; 005ac99d
    POP ESI                             ; 005ac99e
    POP EBX                             ; 005ac99f
    RET                                 ; 005ac9a0
    PUSH 0x10                           ; 005ac9a1
        ;   Label: LAB_005ac9a1
    MOV ESI,dword ptr [0x0061b49c]      ; 005ac9a3 | DAT_0061b49c
    PUSH ESI                            ; 005ac9a9
    MOV EDI,dword ptr [0x0061b498]      ; 005ac9aa | DAT_0061b498
    PUSH EDI                            ; 005ac9b0
    CALL wincore_wddvmem.cpp_FUN_005ac300 ; 005ac9b1
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ac300()
    ADD ESP,0xc                         ; 005ac9b6
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 005ac9b9
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0x0                            ; 005ac9be
    PUSH 0x0                            ; 005ac9c0
    PUSH 0x5f95af                       ; 005ac9c2 | = "You have hit a kludge in the program."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005ac9c7
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ac9cc
    PUSH 0x16                           ; 005ac9cf
    PUSH 0x0                            ; 005ac9d1
    PUSH 0x5f95d5                       ; 005ac9d3 | = "You are setting acceleration mode wit..."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005ac9d8
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ac9dd
    PUSH 0x21                           ; 005ac9e0
    PUSH 0x0                            ; 005ac9e2
    PUSH 0x5f9607                       ; 005ac9e4 | = "the appropriate bit depth first."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005ac9e9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ac9ee
    PUSH 0x2c                           ; 005ac9f1
    PUSH 0x0                            ; 005ac9f3
    PUSH 0x5f9628                       ; 005ac9f5 | = "I am forcing the screen to switch to ..."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005ac9fa
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ac9ff
    PUSH 0x42                           ; 005aca02
    PUSH 0x0                            ; 005aca04
    PUSH 0x5f9659                       ; 005aca06 | = "Press any key to continue."
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005aca0b
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005aca10
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 005aca13
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005b2510 ; 005aca18
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005b2510()
    JMP 0x005ac85a                      ; 005aca1d
        ;   XREF to: 005ac85a (UNCONDITIONAL_JUMP)  ; LAB_005ac85a
    PUSH EDI                            ; 005aca22
        ;   Label: LAB_005aca22
    MOV EDX,dword ptr [EDI]             ; 005aca23
    XOR EBP,EBP                         ; 005aca25
    CALL dword ptr [EDX + 0x8]          ; 005aca27
    MOV dword ptr [0x02c9930c],EBP      ; 005aca2a | DAT_02c9930c
    JMP 0x005ac908                      ; 005aca30
        ;   XREF to: 005ac908 (UNCONDITIONAL_JUMP)  ; LAB_005ac908

