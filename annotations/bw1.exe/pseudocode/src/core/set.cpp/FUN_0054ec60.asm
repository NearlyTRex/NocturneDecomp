; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ec60(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004cf5e0 at 004cf87f
;   FUN_0051b8d0 at 0051ba2d
;
; Referenced Globals:
;   TerminatedCString s_Initializing_scene_005f072c
;   TerminatedCString s_core_set_cpp_005f073f
;   TerminatedCString s_CDemonSet_initScene_Memo_005f074f
;   TerminatedCString s_core_set_cpp_005f0790
;   TerminatedCString s_CDemonSet_initScene_Too_005f07a0
;   undefined4 DAT_00611358
;   undefined4 DAT_0061f2e0
;   undefined4 DAT_0062604c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fe4cb4
;   undefined4 DAT_01fe4cb8
;   undefined4 DAT_01fe4e38
;   undefined4 DAT_01fe55bc
;   undefined4 DAT_01fe55d0
;   ... and 2 more
;
; Called Functions:
;   FUN_0044cb60
;   FUN_00453540
;   FUN_004542a0
;   FUN_0045d770
;   FUN_00462760
;   FUN_00462820
;   FUN_00462ad0
;   FUN_00463360
;   FUN_004fe9c0
;   FUN_005030e0
;   FUN_00531090
;   FUN_0054e3c0
;   FUN_0055bf10
;   FUN_0055c060
;   FUN_0055cf80
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ec60
        ;   Label: FUN_0054ec60
    PUSH ESI                            ; 0054ec61
    PUSH EDI                            ; 0054ec62
    PUSH EBP                            ; 0054ec63
    SUB ESP,0x4                         ; 0054ec64
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054ec67
    PUSH 0x0                            ; 0054ec6b
    PUSH 0x5f072c                       ; 0054ec6d | = "Initializing scene"
    CALL FUN_00531090                   ; 0054ec72
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0054ec77
    PUSH EAX                            ; 0054ec7a
    MOV EDX,dword ptr [0x0061f2e0]      ; 0054ec7b | DAT_0061f2e0
    PUSH EDX                            ; 0054ec81
    CALL FUN_004fe9c0                   ; 0054ec82
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0054ec87
    CALL FUN_00462760                   ; 0054ec8a
        ;   XREF to: 00462760 (UNCONDITIONAL_CALL)  ; undefined FUN_00462760()
    MOV ECX,dword ptr [0x00611358]      ; 0054ec8f | DAT_00611358
    PUSH ECX                            ; 0054ec95
    CALL FUN_0045d770                   ; 0054ec96
        ;   XREF to: 0045d770 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d770()
    ADD ESP,0x4                         ; 0054ec9b
    XOR ESI,ESI                         ; 0054ec9e
    PUSH 0x1fe37ec                      ; 0054eca0
    MOV dword ptr [0x01fe55bc],ESI      ; 0054eca5 | DAT_01fe55bc
    MOV dword ptr [EBX + 0x15acc8],0x0  ; 0054ecab
    CALL FUN_0044cb60                   ; 0054ecb5
        ;   XREF to: 0044cb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044cb60()
    ADD ESP,0x4                         ; 0054ecba
    LEA ESI,[EBX + 0x15ac40]            ; 0054ecbd
    PUSH ESI                            ; 0054ecc3
    PUSH 0x1fe37ec                      ; 0054ecc4
    MOV EDI,ESI                         ; 0054ecc9
    CALL FUN_004542a0                   ; 0054eccb
        ;   XREF to: 004542a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004542a0()
    LEA EAX,[EBX + 0x15ac64]            ; 0054ecd0
    MOV EBP,dword ptr [ESI]             ; 0054ecd6
    ADD ESI,0xc                         ; 0054ecd8
    MOV dword ptr [EAX],EBP             ; 0054ecdb
    MOV EBP,dword ptr [ESI + -0x8]      ; 0054ecdd
    MOV EDX,EAX                         ; 0054ece0
    MOV dword ptr [EAX + 0x4],EBP       ; 0054ece2
    ADD EAX,0xc                         ; 0054ece5
    MOV EBP,dword ptr [ESI + -0x4]      ; 0054ece8
    ADD ESP,0x8                         ; 0054eceb
    MOV dword ptr [EAX + -0x4],EBP      ; 0054ecee
    CMP EAX,ESI                         ; 0054ecf1
    JZ 0x0054ed05                       ; 0054ecf3
        ;   XREF to: 0054ed05 (CONDITIONAL_JUMP)  ; LAB_0054ed05
    MOV ECX,dword ptr [ESI]             ; 0054ecf5
    MOV dword ptr [EAX],ECX             ; 0054ecf7
    MOV ECX,dword ptr [ESI + 0x4]       ; 0054ecf9
    MOV dword ptr [EAX + 0x4],ECX       ; 0054ecfc
    MOV ECX,dword ptr [ESI + 0x8]       ; 0054ecff
    MOV dword ptr [EAX + 0x8],ECX       ; 0054ed02
    MOV EAX,dword ptr [EDI + 0x18]      ; 0054ed05
        ;   Label: LAB_0054ed05
    MOV dword ptr [EDX + 0x18],EAX      ; 0054ed08
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0054ed0b
    MOV dword ptr [EDX + 0x1c],EAX      ; 0054ed0e
    MOV EAX,dword ptr [EDI + 0x20]      ; 0054ed11
    MOV dword ptr [EDX + 0x20],EAX      ; 0054ed14
    PUSH dword ptr [EBX + 0x14d150]     ; 0054ed17
    PUSH 0x1fe37ec                      ; 0054ed1d
    MOV EBP,0x5f073f                    ; 0054ed22 | = "..\\core\\set.cpp"
    XOR ESI,ESI                         ; 0054ed27
    CALL FUN_00453540                   ; 0054ed29
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; undefined FUN_00453540()
    ADD ESP,0x8                         ; 0054ed2e
    CMP dword ptr [ESI + 0x1fe4cb8],0x0 ; 0054ed31 | DAT_01fe4cb8
        ;   Label: LAB_0054ed31
    JZ 0x0054ed57                       ; 0054ed38
        ;   XREF to: 0054ed57 (CONDITIONAL_JUMP)  ; LAB_0054ed57
    MOV EAX,0x3e3                       ; 0054ed3a
    PUSH 0x5f074f                       ; 0054ed3f | = "CDemonSet::initScene - Memory leakage..."
    MOV dword ptr [0x01d1d400],EBP      ; 0054ed44 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0054ed4a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0054ed4f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0054ed54
    ADD ESI,0x4                         ; 0054ed57
        ;   Label: LAB_0054ed57
    CMP ESI,0x180                       ; 0054ed5a
    JNZ 0x0054ed31                      ; 0054ed60
        ;   XREF to: 0054ed31 (CONDITIONAL_JUMP)  ; LAB_0054ed31
    MOV ECX,dword ptr [EBX + 0x19a2c]   ; 0054ed62
    XOR EDX,EDX                         ; 0054ed68
    XOR ESI,ESI                         ; 0054ed6a
    MOV dword ptr [0x01fe4cb4],EDX      ; 0054ed6c | DAT_01fe4cb4
    TEST ECX,ECX                        ; 0054ed72
    JLE 0x0054eda5                      ; 0054ed74
        ;   XREF to: 0054eda5 (CONDITIONAL_JUMP)  ; LAB_0054eda5
    LEA EAX,[EBX + 0x19a30]             ; 0054ed76
    MOV EDI,EBX                         ; 0054ed7c
    MOV dword ptr [ESP],EAX             ; 0054ed7e
    IMUL EBP,ESI,0x1898                 ; 0054ed81
        ;   Label: LAB_0054ed81
    CMP dword ptr [EDI + 0x19a30],0x0   ; 0054ed87
    JZ 0x0054ee8e                       ; 0054ed8e
        ;   XREF to: 0054ee8e (CONDITIONAL_JUMP)  ; LAB_0054ee8e
    INC ESI                             ; 0054ed94
        ;   Label: LAB_0054ed94
    MOV EBP,dword ptr [EBX + 0x19a2c]   ; 0054ed95
    ADD EDI,0x1898                      ; 0054ed9b
    CMP ESI,EBP                         ; 0054eda1
    JL 0x0054ed81                       ; 0054eda3
        ;   XREF to: 0054ed81 (CONDITIONAL_JUMP)  ; LAB_0054ed81
    MOV EAX,[0x01fe4cb4]                ; 0054eda5 | DAT_01fe4cb4
        ;   Label: LAB_0054eda5
    XOR EDI,EDI                         ; 0054edaa
    TEST EAX,EAX                        ; 0054edac
    JLE 0x0054ee00                      ; 0054edae
        ;   XREF to: 0054ee00 (CONDITIONAL_JUMP)  ; LAB_0054ee00
    XOR EBP,EBP                         ; 0054edb0
    PUSH 0x0                            ; 0054edb2
        ;   Label: LAB_0054edb2
    MOV ESI,dword ptr [EBP + 0x1fe4cb8] ; 0054edb4 | DAT_01fe4cb8
    PUSH ESI                            ; 0054edba
    CALL FUN_00462820                   ; 0054edbb
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; undefined FUN_00462820()
    ADD ESP,0x8                         ; 0054edc0
    PUSH ESI                            ; 0054edc3
    CALL FUN_00463360                   ; 0054edc4
        ;   XREF to: 00463360 (UNCONDITIONAL_CALL)  ; undefined FUN_00463360()
    ADD ESP,0x4                         ; 0054edc9
    PUSH 0x0                            ; 0054edcc
    PUSH 0x461c3f9a                     ; 0054edce
    PUSH EBX                            ; 0054edd3
    CALL FUN_0054e3c0                   ; 0054edd4
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3c0()
    ADD ESP,0xc                         ; 0054edd9
    PUSH 0x0                            ; 0054eddc
    PUSH ESI                            ; 0054edde
    ADD EBP,0x4                         ; 0054eddf
    INC EDI                             ; 0054ede2
    CALL FUN_00462ad0                   ; 0054ede3
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00462ad0()
    MOV EDX,dword ptr [0x01fe4cb4]      ; 0054ede8 | DAT_01fe4cb4
    ADD ESP,0x8                         ; 0054edee
    CMP EDI,EDX                         ; 0054edf1
    JL 0x0054edb2                       ; 0054edf3
        ;   XREF to: 0054edb2 (CONDITIONAL_JUMP)  ; LAB_0054edb2
    LEA EAX,[EAX]                       ; 0054edf5
    LEA EDX,[EDX]                       ; 0054edfb
    MOV EBX,EBX                         ; 0054edfe
    MOV dword ptr [EBX + 0x15aeb8],0xffffffff ; 0054ee00
        ;   Label: LAB_0054ee00
    PUSH EBX                            ; 0054ee0a
    MOV dword ptr [EBX + 0x15aebc],0xffffffff ; 0054ee0b
    XOR ECX,ECX                         ; 0054ee15
    XOR ESI,ESI                         ; 0054ee17
    MOV dword ptr [0x01fe4e38],ECX      ; 0054ee19 | DAT_01fe4e38
    MOV dword ptr [0x01fe5c88],ECX      ; 0054ee1f | DAT_01fe5c88
    MOV dword ptr [0x01fe55d0],ECX      ; 0054ee25 | DAT_01fe55d0
    MOV dword ptr [0x01fe5764],ECX      ; 0054ee2b | DAT_01fe5764
    MOV dword ptr [EBX + 0x15aec0],ECX  ; 0054ee31
    CALL FUN_0055bf10                   ; 0054ee37
        ;   XREF to: 0055bf10 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bf10()
    MOV EAX,dword ptr [EBX]             ; 0054ee3c
    ADD ESP,0x4                         ; 0054ee3e
    TEST EAX,EAX                        ; 0054ee41
    JLE 0x0054ee70                      ; 0054ee43
        ;   XREF to: 0054ee70 (CONDITIONAL_JUMP)  ; LAB_0054ee70
    MOV EDI,EBX                         ; 0054ee45
    LEA EBP,[EBX + 0x104]               ; 0054ee47
    PUSH EBP                            ; 0054ee4d
        ;   Label: LAB_0054ee4d
    PUSH EBX                            ; 0054ee4e
    ADD EDI,0x1a4                       ; 0054ee4f
    INC ESI                             ; 0054ee55
    CALL FUN_0055c060                   ; 0054ee56
        ;   XREF to: 0055c060 (UNCONDITIONAL_CALL)  ; undefined FUN_0055c060()
    MOV dword ptr [EDI + -0x4],EAX      ; 0054ee5b
    ADD EBP,0x1a4                       ; 0054ee5e
    MOV EDX,dword ptr [EBX]             ; 0054ee64
    ADD ESP,0x8                         ; 0054ee66
    CMP ESI,EDX                         ; 0054ee69
    JL 0x0054ee4d                       ; 0054ee6b
        ;   XREF to: 0054ee4d (CONDITIONAL_JUMP)  ; LAB_0054ee4d
    LEA EAX,[EAX]                       ; 0054ee6d
    MOV ECX,dword ptr [EBX + 0x161680]  ; 0054ee70
        ;   Label: LAB_0054ee70
    PUSH ECX                            ; 0054ee76
    MOV EBX,dword ptr [0x0062604c]      ; 0054ee77 | DAT_0062604c
    PUSH EBX                            ; 0054ee7d
    CALL FUN_005aefc0                   ; 0054ee7e
        ;   XREF to: 005aefc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005aefc0()
    ADD ESP,0x8                         ; 0054ee83
    ADD ESP,0x4                         ; 0054ee86
    POP EBP                             ; 0054ee89
    POP EDI                             ; 0054ee8a
    POP ESI                             ; 0054ee8b
    POP EBX                             ; 0054ee8c
    RET                                 ; 0054ee8d
    ADD EBP,dword ptr [ESP]             ; 0054ee8e
        ;   Label: LAB_0054ee8e
    PUSH EBP                            ; 0054ee91
    CALL FUN_0055cf80                   ; 0054ee92
        ;   XREF to: 0055cf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cf80()
    ADD ESP,0x4                         ; 0054ee97
    PUSH EAX                            ; 0054ee9a
    MOV EDX,dword ptr [0x01fe4cb4]      ; 0054ee9b | DAT_01fe4cb4
    PUSH EBP                            ; 0054eea1
    MOV dword ptr [EDX*0x4 + 0x1fe4cb8],EAX ; 0054eea2 | DAT_01fe4cb8
    CALL FUN_0055d0e0                   ; 0054eea9
        ;   XREF to: 0055d0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0e0()
    MOV EDX,dword ptr [0x01fe4cb4]      ; 0054eeae | DAT_01fe4cb4
    INC EDX                             ; 0054eeb4
    ADD ESP,0x8                         ; 0054eeb5
    MOV dword ptr [0x01fe4cb4],EDX      ; 0054eeb8 | DAT_01fe4cb4
    CMP EDX,0x60                        ; 0054eebe
    JLE 0x0054ed94                      ; 0054eec1
        ;   XREF to: 0054ed94 (CONDITIONAL_JUMP)  ; LAB_0054ed94
    MOV EBP,0x5f0790                    ; 0054eec7 | = "..\\core\\set.cpp"
    MOV EAX,0x3fa                       ; 0054eecc
    PUSH 0x5f07a0                       ; 0054eed1 | = "CDemonSet::initScene - Too many spotl..."
    MOV dword ptr [0x01d1d400],EBP      ; 0054eed6 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0054eedc | DAT_01d1d404
    CALL FUN_005030e0                   ; 0054eee1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0054eee6
    JMP 0x0054ed94                      ; 0054eee9
        ;   XREF to: 0054ed94 (UNCONDITIONAL_JUMP)  ; LAB_0054ed94

