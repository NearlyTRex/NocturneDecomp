; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LRESULT __stdcall wincore_winrun_cpp_FUN_005b27d0(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)
;
; Parameters:
; HWND             Stack[0x4]:4   hWnd
; UINT             Stack[0x8]:4   message
; WPARAM           Stack[0xc]:4   wParam
; LPARAM           Stack[0x10]:4   lParam
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b2e00 at 005b2f74
;
; Referenced Globals:
;   void* PTR_DefWindowProcA_005d04ac = 001d0a9e
;   void* PTR_PostQuitMessage_005d04ec = 001d0ba2
;   void* PTR_SetCursor_005d04fc = 001d0bea
;   void* PTR_GetCurrentProcess_005d0588 = 001d0e40
;   void* PTR_SetThreadPriority_005d0650 = 001d11fe
;   undefined4 DAT_0061b4ac
;   undefined4 DAT_006260e4
;   undefined4 DAT_006260ec
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 DAT_01c50950
;   undefined4 DAT_01c50b50
;   undefined4 DAT_01c50b51
;   undefined4 DAT_01c50b5c
;   ... and 12 more
;
; Called Functions:
;   DefWindowProcA
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   GetCurrentProcess
;   PostQuitMessage
;   SetCursor
;   SetThreadPriority
;   wincore_wddvmem.cpp_FUN_005ad270
;   wincore_wddvmem.cpp_FUN_005ad3d0
;   wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0
;   wincore_winrun.cpp_enqueueInput_FUN_005b25b0
;   wincore_winvideo.cpp_closeMovie_FUN_005b4980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b27d0
        ;   Label: wincore_winrun.cpp_FUN_005b27d0
    PUSH ESI                            ; 005b27d1
    PUSH EDI                            ; 005b27d2
    PUSH EBP                            ; 005b27d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b27d4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b27d8
    CMP EBP,dword ptr [0x02c9be68]      ; 005b27dc | DAT_02c9be68
    JNZ 0x005b2872                      ; 005b27e2
        ;   XREF to: 005b2872 (CONDITIONAL_JUMP)  ; LAB_005b2872
    MOV ECX,dword ptr [0x02c9c7e8]      ; 005b27e8 | DAT_02c9c7e8
    XOR ESI,ESI                         ; 005b27ee
    TEST ECX,ECX                        ; 005b27f0
    JLE 0x005b281e                      ; 005b27f2
        ;   XREF to: 005b281e (CONDITIONAL_JUMP)  ; LAB_005b281e
    XOR EBX,EBX                         ; 005b27f4
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b27f6
        ;   Label: LAB_005b27f6
    PUSH EDX                            ; 005b27fa
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b27fb
    PUSH ECX                            ; 005b27ff
    PUSH EDI                            ; 005b2800
    MOV EAX,EBX                         ; 005b2801
    PUSH EBP                            ; 005b2803
    CALL dword ptr [EAX + 0x2c9c7ec]    ; 005b2804
    ADD ESP,0x10                        ; 005b280a
    TEST EAX,EAX                        ; 005b280d
    JNZ 0x005b287e                      ; 005b280f
        ;   XREF to: 005b287e (CONDITIONAL_JUMP)  ; LAB_005b287e
    MOV EAX,[0x02c9c7e8]                ; 005b2811 | DAT_02c9c7e8
    INC ESI                             ; 005b2816
    ADD EBX,0x4                         ; 005b2817
    CMP ESI,EAX                         ; 005b281a
    JL 0x005b27f6                       ; 005b281c
        ;   XREF to: 005b27f6 (CONDITIONAL_JUMP)  ; LAB_005b27f6
    MOV EAX,EDI                         ; 005b281e
        ;   Label: LAB_005b281e
    CMP EDI,0x105                       ; 005b2820
    JNC 0x005b2bad                      ; 005b2826
        ;   XREF to: 005b2bad (CONDITIONAL_JUMP)  ; LAB_005b2bad
    CMP EDI,0x20                        ; 005b282c
    JNC 0x005b2c73                      ; 005b282f
        ;   XREF to: 005b2c73 (CONDITIONAL_JUMP)  ; LAB_005b2c73
    CMP EDI,0x2                         ; 005b2835
    JC 0x005b2854                       ; 005b2838
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JA 0x005b2cc4                       ; 005b283a
        ;   XREF to: 005b2cc4 (CONDITIONAL_JUMP)  ; LAB_005b2cc4
    PUSH 0x0                            ; 005b2840
    MOV EBX,0x1                         ; 005b2842
    CALL dword ptr CS:[0x5d04ec]        ; 005b2847 | PTR_PostQuitMessage_005d04ec
    MOV dword ptr [0x02c9be70],EBX      ; 005b284e | DAT_02c9be70
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b2854
        ;   Label: LAB_005b2854
    PUSH ESI                            ; 005b2858
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b2859
    PUSH EAX                            ; 005b285d
    PUSH EDI                            ; 005b285e
        ;   Label: LAB_005b285e
    PUSH EBP                            ; 005b285f
    CALL dword ptr CS:[0x5d04ac]        ; 005b2860 | PTR_DefWindowProcA_005d04ac
    MOV EDI,EAX                         ; 005b2867
    MOV EAX,EDI                         ; 005b2869
    POP EBP                             ; 005b286b
    POP EDI                             ; 005b286c
    POP ESI                             ; 005b286d
    POP EBX                             ; 005b286e
    RET 0x10                            ; 005b286f
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b2872
        ;   Label: LAB_005b2872
    PUSH EBX                            ; 005b2876
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b2877
    PUSH ESI                            ; 005b287b
    JMP 0x005b285e                      ; 005b287c
        ;   XREF to: 005b285e (UNCONDITIONAL_JUMP)  ; LAB_005b285e
    XOR EDI,EDI                         ; 005b287e
        ;   Label: LAB_005b287e
    MOV EAX,EDI                         ; 005b2880
    POP EBP                             ; 005b2882
    POP EDI                             ; 005b2883
    POP ESI                             ; 005b2884
    POP EBX                             ; 005b2885
    RET 0x10                            ; 005b2886
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b2889
        ;   Label: LAB_005b2889
    CMP EAX,0xf140                      ; 005b288d
    JC 0x005b2854                       ; 005b2892
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b287e                      ; 005b2894
        ;   XREF to: 005b287e (CONDITIONAL_JUMP)  ; LAB_005b287e
    CMP EAX,0xf170                      ; 005b2896
    JZ 0x005b287e                       ; 005b289b
        ;   XREF to: 005b287e (CONDITIONAL_JUMP)  ; LAB_005b287e
    JMP 0x005b2854                      ; 005b289d
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    MOV EAX,[0x006260e4]                ; 005b289f | DAT_006260e4
        ;   Label: LAB_005b289f
    MOV [0x006260ec],EAX                ; 005b28a4 | DAT_006260ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b28a9
    MOV [0x006260e4],EAX                ; 005b28ad | DAT_006260e4
    MOV EAX,[0x006260ec]                ; 005b28b2 | DAT_006260ec
    CMP EAX,dword ptr [0x006260e4]      ; 005b28b7 | DAT_006260e4
    JZ 0x005b2854                       ; 005b28bd
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    CALL dword ptr CS:[0x5d0588]        ; 005b28bf | PTR_GetCurrentProcess_005d0588
    MOV ESI,dword ptr [0x006260e4]      ; 005b28c6 | DAT_006260e4
    MOV EBX,EAX                         ; 005b28cc
    TEST ESI,ESI                        ; 005b28ce
    JZ 0x005b2902                       ; 005b28d0
        ;   XREF to: 005b2902 (CONDITIONAL_JUMP)  ; LAB_005b2902
    PUSH 0x1                            ; 005b28d2
    PUSH EAX                            ; 005b28d4
    CALL dword ptr CS:[0x5d0650]        ; 005b28d5 | PTR_SetThreadPriority_005d0650
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0 ; 005b28dc
        ;   XREF to: 005ad2c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0()
    CMP dword ptr [0x006260ec],-0x1     ; 005b28e1 | DAT_006260ec
    JZ 0x005b2854                       ; 005b28e8
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 005b28ee
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [0x02c9be74],0x1      ; 005b28f3 | DAT_02c9be74
    JMP 0x005b2854                      ; 005b28fd
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    CALL wincore_wddvmem.cpp_FUN_005ad270 ; 005b2902
        ;   XREF to: 005ad270 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ad270()
        ;   Label: LAB_005b2902
    PUSH -0xf                           ; 005b2907
    PUSH EBX                            ; 005b2909
    CALL dword ptr CS:[0x5d0650]        ; 005b290a | PTR_SetThreadPriority_005d0650
    MOV dword ptr [0x02c9be74],ESI      ; 005b2911 | DAT_02c9be74
    JMP 0x005b2854                      ; 005b2917
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    PUSH 0x0                            ; 005b291c
        ;   Label: LAB_005b291c
    MOV EDI,0x1                         ; 005b291e
    CALL dword ptr CS:[0x5d04fc]        ; 005b2923 | PTR_SetCursor_005d04fc
    MOV EAX,EDI                         ; 005b292a
    POP EBP                             ; 005b292c
    POP EDI                             ; 005b292d
    POP ESI                             ; 005b292e
    POP EBX                             ; 005b292f
    RET 0x10                            ; 005b2930
    CMP EBP,dword ptr [ESP + 0x1c]      ; 005b2933
        ;   Label: LAB_005b2933
    JZ 0x005b2854                       ; 005b2937
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    CALL wincore_wddvmem.cpp_FUN_005ad3d0 ; 005b293d
        ;   XREF to: 005ad3d0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005ad3d0()
        ;   Label: LAB_005b293d
    JMP 0x005b2854                      ; 005b2942
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    CALL wincore_wddvmem.cpp_FUN_005ad3d0 ; 005b2947
        ;   XREF to: 005ad3d0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005ad3d0()
        ;   Label: LAB_005b2947
    JMP 0x005b2854                      ; 005b294c
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b2951
        ;   Label: LAB_005b2951
    MOV EDX,dword ptr [0x0061b4ac]      ; 005b2955 | DAT_0061b4ac
    SAR EAX,0x10                        ; 005b295b
    XOR ECX,ECX                         ; 005b295e
    AND EAX,EDX                         ; 005b2960
    MOV DL,0x1                          ; 005b2962
    MOV dword ptr [0x02c9c7e0],ECX      ; 005b2964 | DAT_02c9c7e0
    MOV byte ptr [EAX + 0x1c50950],DL   ; 005b296a | DAT_01c50950
    CMP EAX,0x3e                        ; 005b2970
    JNZ 0x005b2854                      ; 005b2973
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    XOR EDI,EDI                         ; 005b2979
        ;   Label: LAB_005b2979
    MOV EAX,EDI                         ; 005b297b
    POP EBP                             ; 005b297d
    POP EDI                             ; 005b297e
    POP ESI                             ; 005b297f
    POP EBX                             ; 005b2980
    RET 0x10                            ; 005b2981
    XOR EAX,EDI                         ; 005b2984
        ;   Label: LAB_005b2984
    MOV AL,byte ptr [ESP + 0x1c]        ; 005b2986
    TEST EAX,EAX                        ; 005b298a
    JZ 0x005b2854                       ; 005b298c
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    AND EAX,0xffff                      ; 005b2992
    PUSH EAX                            ; 005b2997
    CALL wincore_winrun.cpp_enqueueInput_FUN_005b25b0 ; 005b2998
        ;   XREF to: 005b25b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_005b25b0(int input_value)
    ADD ESP,0x4                         ; 005b299d
    JMP 0x005b2854                      ; 005b29a0
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b29a5
        ;   Label: LAB_005b29a5
    MOV EBX,dword ptr [0x0061b4ac]      ; 005b29a9 | DAT_0061b4ac
    SAR EAX,0x10                        ; 005b29af
    AND EAX,EBX                         ; 005b29b2
    MOV dword ptr [EAX*0x4 + 0x2c9be80],0x1 ; 005b29b4
    XOR EAX,EAX                         ; 005b29bf
    MOV [0x02c9c7e0],EAX                ; 005b29c1 | DAT_02c9c7e0
    JMP 0x005b2854                      ; 005b29c6
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    XOR EBX,EBX                         ; 005b29cb
        ;   Label: LAB_005b29cb
    MOV BX,word ptr [ESP + 0x20]        ; 005b29cd
    MOV dword ptr [0x01c4353c],EBX      ; 005b29d2 | DAT_01c4353c
    AND EAX,0xffff                      ; 005b29d8
    XOR EBP,EBP                         ; 005b29dd
    XOR EDI,EDI                         ; 005b29df
    MOV [0x01c43540],EAX                ; 005b29e1 | DAT_01c43540
    MOV dword ptr [0x02c9c7e4],EBP      ; 005b29e6 | DAT_02c9c7e4
    MOV EAX,EDI                         ; 005b29ec
    POP EBP                             ; 005b29ee
    POP EDI                             ; 005b29ef
    POP ESI                             ; 005b29f0
    POP EBX                             ; 005b29f1
    RET 0x10                            ; 005b29f2
    XOR EBX,EBX                         ; 005b29f5
        ;   Label: LAB_005b29f5
    MOV BX,word ptr [ESP + 0x20]        ; 005b29f7
    MOV dword ptr [0x01c4353c],EBX      ; 005b29fc | DAT_01c4353c
    AND EAX,0xffff                      ; 005b2a02
    MOV [0x01c43540],EAX                ; 005b2a07 | DAT_01c43540
    MOV AL,[0x01c43544]                 ; 005b2a0c | DAT_01c43544
    OR AL,0x1                           ; 005b2a11
    XOR EDI,EDI                         ; 005b2a13
    MOV [0x01c43544],AL                 ; 005b2a15 | DAT_01c43544
    MOV AH,0x1                          ; 005b2a1a
    MOV dword ptr [0x02c9c7e4],EDI      ; 005b2a1c | DAT_02c9c7e4
    MOV byte ptr [0x01c50b50],AH        ; 005b2a22 | DAT_01c50b50
    MOV EAX,EDI                         ; 005b2a28
    POP EBP                             ; 005b2a2a
    POP EDI                             ; 005b2a2b
    POP ESI                             ; 005b2a2c
    POP EBX                             ; 005b2a2d
    RET 0x10                            ; 005b2a2e
    XOR EBX,EBX                         ; 005b2a31
        ;   Label: LAB_005b2a31
    MOV BX,word ptr [ESP + 0x20]        ; 005b2a33
    MOV dword ptr [0x01c4353c],EBX      ; 005b2a38 | DAT_01c4353c
    MOV EBX,0x1                         ; 005b2a3e
    MOV CH,byte ptr [0x01c43544]        ; 005b2a43 | DAT_01c43544
    AND EAX,0xffff                      ; 005b2a49
    XOR ESI,ESI                         ; 005b2a4e
    XOR EDI,EDI                         ; 005b2a50
    MOV [0x01c43540],EAX                ; 005b2a52 | DAT_01c43540
    AND CH,0xfe                         ; 005b2a57
    MOV dword ptr [0x02c9c680],EBX      ; 005b2a5a | DAT_02c9c680
    MOV dword ptr [0x02c9c7e4],ESI      ; 005b2a60 | DAT_02c9c7e4
    MOV byte ptr [0x01c43544],CH        ; 005b2a66 | DAT_01c43544
    MOV EAX,EDI                         ; 005b2a6c
    POP EBP                             ; 005b2a6e
    POP EDI                             ; 005b2a6f
    POP ESI                             ; 005b2a70
    POP EBX                             ; 005b2a71
    RET 0x10                            ; 005b2a72
    XOR EBX,EBX                         ; 005b2a75
        ;   Label: LAB_005b2a75
    MOV BX,word ptr [ESP + 0x20]        ; 005b2a77
    MOV dword ptr [0x01c4353c],EBX      ; 005b2a7c | DAT_01c4353c
    MOV CL,0x1                          ; 005b2a82
    MOV BH,byte ptr [0x01c43544]        ; 005b2a84 | DAT_01c43544
    AND EAX,0xffff                      ; 005b2a8a
    XOR EDI,EDI                         ; 005b2a8f
    MOV [0x01c43540],EAX                ; 005b2a91 | DAT_01c43540
    OR BH,0x2                           ; 005b2a96
    MOV byte ptr [0x01c50b51],CL        ; 005b2a99 | DAT_01c50b51
    XOR ECX,ECX                         ; 005b2a9f
    MOV byte ptr [0x01c43544],BH        ; 005b2aa1 | DAT_01c43544
    MOV dword ptr [0x02c9c7e4],ECX      ; 005b2aa7 | DAT_02c9c7e4
    MOV EAX,EDI                         ; 005b2aad
    POP EBP                             ; 005b2aaf
    POP EDI                             ; 005b2ab0
    POP ESI                             ; 005b2ab1
    POP EBX                             ; 005b2ab2
    RET 0x10                            ; 005b2ab3
    XOR EBX,EBX                         ; 005b2ab6
        ;   Label: LAB_005b2ab6
    MOV BX,word ptr [ESP + 0x20]        ; 005b2ab8
    MOV dword ptr [0x01c4353c],EBX      ; 005b2abd | DAT_01c4353c
    MOV BL,byte ptr [0x01c43544]        ; 005b2ac3 | DAT_01c43544
    AND EAX,0xffff                      ; 005b2ac9
    XOR EDX,EDX                         ; 005b2ace
    XOR EDI,EDI                         ; 005b2ad0
    MOV [0x01c43540],EAX                ; 005b2ad2 | DAT_01c43540
    AND BL,0xfd                         ; 005b2ad7
    MOV dword ptr [0x02c9c7e4],EDX      ; 005b2ada | DAT_02c9c7e4
    MOV EAX,0x1                         ; 005b2ae0
    MOV byte ptr [0x01c43544],BL        ; 005b2ae5 | DAT_01c43544
    MOV [0x02c9c684],EAX                ; 005b2aeb | DAT_02c9c684
    MOV EAX,EDI                         ; 005b2af0
    POP EBP                             ; 005b2af2
    POP EDI                             ; 005b2af3
    POP ESI                             ; 005b2af4
    POP EBX                             ; 005b2af5
    RET 0x10                            ; 005b2af6
    XOR EBX,EBX                         ; 005b2af9
        ;   Label: LAB_005b2af9
    MOV BX,word ptr [ESP + 0x20]        ; 005b2afb
    MOV dword ptr [0x01c4353c],EBX      ; 005b2b00 | DAT_01c4353c
    MOV DL,byte ptr [0x01c43544]        ; 005b2b06 | DAT_01c43544
    AND EAX,0xffff                      ; 005b2b0c
    XOR EBP,EBP                         ; 005b2b11
    XOR EDI,EDI                         ; 005b2b13
    OR DL,0x4                           ; 005b2b15
    MOV [0x01c43540],EAX                ; 005b2b18 | DAT_01c43540
    MOV byte ptr [0x01c43544],DL        ; 005b2b1d | DAT_01c43544
    MOV DH,0x1                          ; 005b2b23
    MOV dword ptr [0x02c9c7e4],EBP      ; 005b2b25 | DAT_02c9c7e4
    MOV byte ptr [0x01c50b5c],DH        ; 005b2b2b | DAT_01c50b5c
    MOV EAX,EDI                         ; 005b2b31
    POP EBP                             ; 005b2b33
    POP EDI                             ; 005b2b34
    POP ESI                             ; 005b2b35
    POP EBX                             ; 005b2b36
    RET 0x10                            ; 005b2b37
    XOR EBX,EBX                         ; 005b2b3a
        ;   Label: LAB_005b2b3a
    MOV BX,word ptr [ESP + 0x20]        ; 005b2b3c
    MOV dword ptr [0x01c4353c],EBX      ; 005b2b41 | DAT_01c4353c
    MOV ESI,0x1                         ; 005b2b47
    AND EAX,0xffff                      ; 005b2b4c
    XOR EDI,EDI                         ; 005b2b51
    MOV [0x01c43540],EAX                ; 005b2b53 | DAT_01c43540
    MOV AH,byte ptr [0x01c43544]        ; 005b2b58 | DAT_01c43544
    MOV dword ptr [0x02c9c6b0],ESI      ; 005b2b5e | DAT_02c9c6b0
    AND AH,0xfb                         ; 005b2b64
    MOV dword ptr [0x02c9c7e4],EDI      ; 005b2b67 | DAT_02c9c7e4
    MOV byte ptr [0x01c43544],AH        ; 005b2b6d | DAT_01c43544
    MOV EAX,EDI                         ; 005b2b73
    POP EBP                             ; 005b2b75
    POP EDI                             ; 005b2b76
    POP ESI                             ; 005b2b77
    POP EBX                             ; 005b2b78
    RET 0x10                            ; 005b2b79
    MOV EDX,dword ptr [0x02c9be68]      ; 005b2b7c | DAT_02c9be68
        ;   Label: LAB_005b2b7c
    PUSH EDX                            ; 005b2b82
    CALL wincore_winvideo.cpp_closeMovie_FUN_005b4980 ; 005b2b83
        ;   XREF to: 005b4980 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005b4980(HWND window_handle)
    ADD ESP,0x4                         ; 005b2b88
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b2b8b
    MOV ECX,0x1                         ; 005b2b8f
    MOV [0x02c9c7fc],EAX                ; 005b2b94 | DAT_02c9c7fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b2b99
    MOV dword ptr [0x02c9c7f8],ECX      ; 005b2b9d | DAT_02c9c7f8
    MOV [0x02c9c800],EAX                ; 005b2ba3 | DAT_02c9c800
    JMP 0x005b2854                      ; 005b2ba8
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b29a5                      ; 005b2bad
        ;   XREF to: 005b29a5 (CONDITIONAL_JUMP)  ; LAB_005b29a5
        ;   Label: LAB_005b2bad
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b2bb3
    SHR EAX,0x10                        ; 005b2bb7
    AND EAX,0xffff                      ; 005b2bba
    CMP EDI,0x205                       ; 005b2bbf
    JNC 0x005b2bf6                      ; 005b2bc5
        ;   XREF to: 005b2bf6 (CONDITIONAL_JUMP)  ; LAB_005b2bf6
    CMP EDI,0x201                       ; 005b2bc7
    JNC 0x005b2c50                      ; 005b2bcd
        ;   XREF to: 005b2c50 (CONDITIONAL_JUMP)  ; LAB_005b2c50
    CMP EDI,0x112                       ; 005b2bd3
    JC 0x005b2854                       ; 005b2bd9
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2889                      ; 005b2bdf
        ;   XREF to: 005b2889 (CONDITIONAL_JUMP)  ; LAB_005b2889
    CMP EDI,0x200                       ; 005b2be5
    JZ 0x005b29cb                       ; 005b2beb
        ;   XREF to: 005b29cb (CONDITIONAL_JUMP)  ; LAB_005b29cb
    JMP 0x005b2854                      ; 005b2bf1
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2ab6                      ; 005b2bf6
        ;   XREF to: 005b2ab6 (CONDITIONAL_JUMP)  ; LAB_005b2ab6
        ;   Label: LAB_005b2bf6
    CMP EDI,0x30f                       ; 005b2bfc
    JNC 0x005b2c27                      ; 005b2c02
        ;   XREF to: 005b2c27 (CONDITIONAL_JUMP)  ; LAB_005b2c27
    CMP EDI,0x207                       ; 005b2c04
    JC 0x005b2854                       ; 005b2c0a
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2af9                      ; 005b2c10
        ;   XREF to: 005b2af9 (CONDITIONAL_JUMP)  ; LAB_005b2af9
    CMP EDI,0x208                       ; 005b2c16
    JZ 0x005b2b3a                       ; 005b2c1c
        ;   XREF to: 005b2b3a (CONDITIONAL_JUMP)  ; LAB_005b2b3a
    JMP 0x005b2854                      ; 005b2c22
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b293d                      ; 005b2c27
        ;   XREF to: 005b293d (CONDITIONAL_JUMP)  ; LAB_005b293d
        ;   Label: LAB_005b2c27
    CMP EDI,0x311                       ; 005b2c2d
    JC 0x005b2854                       ; 005b2c33
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2933                      ; 005b2c39
        ;   XREF to: 005b2933 (CONDITIONAL_JUMP)  ; LAB_005b2933
    CMP EDI,0x3b9                       ; 005b2c3f
    JZ 0x005b2b7c                       ; 005b2c45
        ;   XREF to: 005b2b7c (CONDITIONAL_JUMP)  ; LAB_005b2b7c
    JMP 0x005b2854                      ; 005b2c4b
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b29f5                      ; 005b2c50
        ;   XREF to: 005b29f5 (CONDITIONAL_JUMP)  ; LAB_005b29f5
        ;   Label: LAB_005b2c50
    CMP EDI,0x202                       ; 005b2c56
    JBE 0x005b2a31                      ; 005b2c5c
        ;   XREF to: 005b2a31 (CONDITIONAL_JUMP)  ; LAB_005b2a31
    CMP EDI,0x204                       ; 005b2c62
    JZ 0x005b2a75                       ; 005b2c68
        ;   XREF to: 005b2a75 (CONDITIONAL_JUMP)  ; LAB_005b2a75
    JMP 0x005b2854                      ; 005b2c6e
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b291c                      ; 005b2c73
        ;   XREF to: 005b291c (CONDITIONAL_JUMP)  ; LAB_005b291c
        ;   Label: LAB_005b2c73
    CMP EDI,0x101                       ; 005b2c79
    JNC 0x005b2ca1                      ; 005b2c7f
        ;   XREF to: 005b2ca1 (CONDITIONAL_JUMP)  ; LAB_005b2ca1
    CMP EDI,0x7e                        ; 005b2c81
    JC 0x005b2854                       ; 005b2c84
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2979                      ; 005b2c8a
        ;   XREF to: 005b2979 (CONDITIONAL_JUMP)  ; LAB_005b2979
    CMP EDI,0x100                       ; 005b2c90
    JZ 0x005b2951                       ; 005b2c96
        ;   XREF to: 005b2951 (CONDITIONAL_JUMP)  ; LAB_005b2951
    JMP 0x005b2854                      ; 005b2c9c
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b29a5                      ; 005b2ca1
        ;   XREF to: 005b29a5 (CONDITIONAL_JUMP)  ; LAB_005b29a5
        ;   Label: LAB_005b2ca1
    CMP EDI,0x102                       ; 005b2ca7
    JBE 0x005b2984                      ; 005b2cad
        ;   XREF to: 005b2984 (CONDITIONAL_JUMP)  ; LAB_005b2984
    CMP EDI,0x104                       ; 005b2cb3
    JZ 0x005b2951                       ; 005b2cb9
        ;   XREF to: 005b2951 (CONDITIONAL_JUMP)  ; LAB_005b2951
    JMP 0x005b2854                      ; 005b2cbf
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854
    CMP EDI,0xf                         ; 005b2cc4
        ;   Label: LAB_005b2cc4
    JC 0x005b2854                       ; 005b2cc7
        ;   XREF to: 005b2854 (CONDITIONAL_JUMP)  ; LAB_005b2854
    JBE 0x005b2947                      ; 005b2ccd
        ;   XREF to: 005b2947 (CONDITIONAL_JUMP)  ; LAB_005b2947
    CMP EDI,0x1c                        ; 005b2cd3
    JZ 0x005b289f                       ; 005b2cd6
        ;   XREF to: 005b289f (CONDITIONAL_JUMP)  ; LAB_005b289f
    JMP 0x005b2854                      ; 005b2cdc
        ;   XREF to: 005b2854 (UNCONDITIONAL_JUMP)  ; LAB_005b2854

