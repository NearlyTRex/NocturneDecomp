; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LRESULT wincore_winrun_cpp_FUN_00558d90(HWND param_1,uint param_2,HWND param_3,uint param_4)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00559260 at 005593d1
;
; Referenced Globals:
;   void* PTR_DefWindowProcA_00575420 = 00175928
;   void* PTR_PostQuitMessage_0057545c = 00175a1c
;   void* PTR_SetCursor_0057546c = 00175a64
;   void* PTR_GetCurrentProcess_005754f8 = 00175cbe
;   void* PTR_SetThreadPriority_005755b0 = 00176034
;   undefined4 DAT_005b7630
;   undefined4 DAT_005c1660
;   int INT_005c1668 = -0x1
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bd1d94
;   undefined4 DAT_01c02598
;   undefined4 DAT_01c02798
;   undefined4 DAT_01c02799
;   undefined4 DAT_01c027a4
;   ... and 6 more
;
; Called Functions:
;   DefWindowProcA
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   GetCurrentProcess
;   PostQuitMessage
;   SetCursor
;   SetThreadPriority
;   wincore_wddvmem.cpp_FUN_00553ba0
;   wincore_wddvmem.cpp_FUN_00553ca0
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70
;   wincore_winrun.cpp_enqueueInput_FUN_00558ba0
;   wincore_winvideo.cpp_closeMovie_FUN_0055a1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558d90
        ;   Label: wincore_winrun.cpp_FUN_00558d90
    PUSH ESI                            ; 00558d91
    PUSH EDI                            ; 00558d92
    PUSH EBP                            ; 00558d93
    MOV EBP,dword ptr [ESP + 0x14]      ; 00558d94
    MOV EBX,dword ptr [ESP + 0x18]      ; 00558d98
    MOV ESI,dword ptr [ESP + 0x20]      ; 00558d9c
    MOV EDX,dword ptr [0x02de2098]      ; 00558da0 | DAT_02de2098
    CMP EBP,EDX                         ; 00558da6
    JNZ 0x00558df5                      ; 00558da8
        ;   XREF to: 00558df5 (CONDITIONAL_JUMP)  ; LAB_00558df5
    MOV EAX,EBX                         ; 00558daa
    CMP EBX,0x112                       ; 00558dac
    JNC 0x0055908e                      ; 00558db2
        ;   XREF to: 0055908e (CONDITIONAL_JUMP)  ; LAB_0055908e
    CMP EBX,0x20                        ; 00558db8
    JNC 0x0055913c                      ; 00558dbb
        ;   XREF to: 0055913c (CONDITIONAL_JUMP)  ; LAB_0055913c
    CMP EBX,0x2                         ; 00558dc1
    JC 0x00558ddf                       ; 00558dc4
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JA 0x0055919e                       ; 00558dc6
        ;   XREF to: 0055919e (CONDITIONAL_JUMP)  ; LAB_0055919e
    PUSH 0x0                            ; 00558dcc
    CALL dword ptr CS:[0x57545c]        ; 00558dce | PTR_PostQuitMessage_0057545c
    MOV dword ptr [0x02de20a0],0x1      ; 00558dd5 | DAT_02de20a0
    PUSH ESI                            ; 00558ddf
        ;   Label: LAB_00558ddf
    MOV ESI,dword ptr [ESP + 0x20]      ; 00558de0
    PUSH ESI                            ; 00558de4
    PUSH EBX                            ; 00558de5
    PUSH EBP                            ; 00558de6
    CALL dword ptr CS:[0x575420]        ; 00558de7 | PTR_DefWindowProcA_00575420
    POP EBP                             ; 00558dee
    POP EDI                             ; 00558def
    POP ESI                             ; 00558df0
    POP EBX                             ; 00558df1
    RET 0x10                            ; 00558df2
    PUSH ESI                            ; 00558df5
        ;   Label: LAB_00558df5
    MOV EDI,dword ptr [ESP + 0x20]      ; 00558df6
    PUSH EDI                            ; 00558dfa
    PUSH EBX                            ; 00558dfb
    PUSH EBP                            ; 00558dfc
    CALL dword ptr CS:[0x575420]        ; 00558dfd | PTR_DefWindowProcA_00575420
    POP EBP                             ; 00558e04
    POP EDI                             ; 00558e05
    POP ESI                             ; 00558e06
    POP EBX                             ; 00558e07
    RET 0x10                            ; 00558e08
    XOR EAX,EAX                         ; 00558e0b
        ;   Label: LAB_00558e0b
    POP EBP                             ; 00558e0d
    POP EDI                             ; 00558e0e
    POP ESI                             ; 00558e0f
    POP EBX                             ; 00558e10
    RET 0x10                            ; 00558e11
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00558e14
        ;   Label: LAB_00558e14
    CMP ECX,0xf140                      ; 00558e18
    JC 0x00558ddf                       ; 00558e1e
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558e0b                      ; 00558e20
        ;   XREF to: 00558e0b (CONDITIONAL_JUMP)  ; LAB_00558e0b
    CMP ECX,0xf170                      ; 00558e22
    JZ 0x00558e0b                       ; 00558e28
        ;   XREF to: 00558e0b (CONDITIONAL_JUMP)  ; LAB_00558e0b
    JMP 0x00558ddf                      ; 00558e2a
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    MOV EAX,[0x005c1660]                ; 00558e2c | DAT_005c1660
        ;   Label: LAB_00558e2c
    MOV [0x005c1668],EAX                ; 00558e31 | INT_005c1668
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00558e36
    MOV [0x005c1660],EAX                ; 00558e3a | DAT_005c1660
    MOV EAX,[0x005c1668]                ; 00558e3f | INT_005c1668
    CMP EAX,dword ptr [0x005c1660]      ; 00558e44 | DAT_005c1660
    JZ 0x00558ddf                       ; 00558e4a
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    CALL dword ptr CS:[0x5754f8]        ; 00558e4c | PTR_GetCurrentProcess_005754f8
    MOV ECX,dword ptr [0x005c1660]      ; 00558e53 | DAT_005c1660
    MOV EDI,EAX                         ; 00558e59
    TEST ECX,ECX                        ; 00558e5b
    JZ 0x00558e8f                       ; 00558e5d
        ;   XREF to: 00558e8f (CONDITIONAL_JUMP)  ; LAB_00558e8f
    PUSH 0x1                            ; 00558e5f
    PUSH EAX                            ; 00558e61
    CALL dword ptr CS:[0x5755b0]        ; 00558e62 | PTR_SetThreadPriority_005755b0
    CALL wincore_wddvmem.cpp_FUN_00553ba0 ; 00558e69
        ;   XREF to: 00553ba0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00553ba0()
    CMP dword ptr [0x005c1668],-0x1     ; 00558e6e | INT_005c1668
    JZ 0x00558ddf                       ; 00558e75
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 00558e7b
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV dword ptr [0x02de20a4],0x1      ; 00558e80 | DAT_02de20a4
    JMP 0x00558ddf                      ; 00558e8a
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    CALL wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70 ; 00558e8f
        ;   XREF to: 00553b70 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70()
        ;   Label: LAB_00558e8f
    PUSH -0xf                           ; 00558e94
    PUSH EDI                            ; 00558e96
    XOR EDI,EDI                         ; 00558e97
    CALL dword ptr CS:[0x5755b0]        ; 00558e99 | PTR_SetThreadPriority_005755b0
    MOV dword ptr [0x02de20a4],EDI      ; 00558ea0 | DAT_02de20a4
    JMP 0x00558ddf                      ; 00558ea6
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    PUSH 0x0                            ; 00558eab
        ;   Label: LAB_00558eab
    CALL dword ptr CS:[0x57546c]        ; 00558ead | PTR_SetCursor_0057546c
    MOV EAX,0x1                         ; 00558eb4
    POP EBP                             ; 00558eb9
    POP EDI                             ; 00558eba
    POP ESI                             ; 00558ebb
    POP EBX                             ; 00558ebc
    RET 0x10                            ; 00558ebd
    CMP EDX,dword ptr [ESP + 0x1c]      ; 00558ec0
        ;   Label: LAB_00558ec0
    JZ 0x00558ddf                       ; 00558ec4
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    CALL wincore_wddvmem.cpp_FUN_00553ca0 ; 00558eca
        ;   XREF to: 00553ca0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00553ca0()
        ;   Label: LAB_00558eca
    JMP 0x00558ddf                      ; 00558ecf
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    CALL wincore_wddvmem.cpp_FUN_00553ca0 ; 00558ed4
        ;   XREF to: 00553ca0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00553ca0()
        ;   Label: LAB_00558ed4
    JMP 0x00558ddf                      ; 00558ed9
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    MOV EAX,ESI                         ; 00558ede
        ;   Label: LAB_00558ede
    MOV EDI,dword ptr [0x005b7630]      ; 00558ee0 | DAT_005b7630
    SAR EAX,0x10                        ; 00558ee6
    AND EAX,EDI                         ; 00558ee9
    MOV byte ptr [EAX + 0x1c02598],0x1  ; 00558eeb | DAT_01c02598
    CMP EAX,0x3e                        ; 00558ef2
    JNZ 0x00558ddf                      ; 00558ef5
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    XOR EAX,EAX                         ; 00558efb
    POP EBP                             ; 00558efd
    POP EDI                             ; 00558efe
    POP ESI                             ; 00558eff
    POP EBX                             ; 00558f00
    RET 0x10                            ; 00558f01
    XOR EAX,EBX                         ; 00558f04
        ;   Label: LAB_00558f04
    MOV AL,byte ptr [ESP + 0x1c]        ; 00558f06
    TEST EAX,EAX                        ; 00558f0a
    JZ 0x00558ddf                       ; 00558f0c
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    AND EAX,0xffff                      ; 00558f12
    PUSH EAX                            ; 00558f17
    CALL wincore_winrun.cpp_enqueueInput_FUN_00558ba0 ; 00558f18
        ;   XREF to: 00558ba0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_enqueueInput_FUN_00558ba0()
    ADD ESP,0x4                         ; 00558f1d
    JMP 0x00558ddf                      ; 00558f20
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    XOR EBX,EBX                         ; 00558f25
        ;   Label: LAB_00558f25
    MOV BX,SI                           ; 00558f27
    MOV dword ptr [0x01bd1d8c],EBX      ; 00558f2a | DAT_01bd1d8c
    AND EAX,0xffff                      ; 00558f30
    MOV [0x01bd1d90],EAX                ; 00558f35 | DAT_01bd1d90
    XOR EAX,EAX                         ; 00558f3a
    POP EBP                             ; 00558f3c
    POP EDI                             ; 00558f3d
    POP ESI                             ; 00558f3e
    POP EBX                             ; 00558f3f
    RET 0x10                            ; 00558f40
    XOR EBX,EBX                         ; 00558f43
        ;   Label: LAB_00558f43
    MOV BX,SI                           ; 00558f45
    MOV dword ptr [0x01bd1d8c],EBX      ; 00558f48 | DAT_01bd1d8c
    AND EAX,0xffff                      ; 00558f4e
    MOV [0x01bd1d90],EAX                ; 00558f53 | DAT_01bd1d90
    OR byte ptr [0x01bd1d94],0x1        ; 00558f58 | DAT_01bd1d94
    MOV byte ptr [0x01c02798],0x1       ; 00558f5f | DAT_01c02798
    XOR EAX,EAX                         ; 00558f66
    POP EBP                             ; 00558f68
    POP EDI                             ; 00558f69
    POP ESI                             ; 00558f6a
    POP EBX                             ; 00558f6b
    RET 0x10                            ; 00558f6c
    XOR EBX,EBX                         ; 00558f6f
        ;   Label: LAB_00558f6f
    MOV BX,SI                           ; 00558f71
    MOV dword ptr [0x01bd1d8c],EBX      ; 00558f74 | DAT_01bd1d8c
    MOV EDX,0x1                         ; 00558f7a
    AND EAX,0xffff                      ; 00558f7f
    MOV CH,byte ptr [0x01bd1d94]        ; 00558f84 | DAT_01bd1d94
    MOV [0x01bd1d90],EAX                ; 00558f8a | DAT_01bd1d90
    AND CH,0xfe                         ; 00558f8f
    MOV dword ptr [0x02de28b0],EDX      ; 00558f92 | DAT_02de28b0
    MOV byte ptr [0x01bd1d94],CH        ; 00558f98 | DAT_01bd1d94
    XOR EAX,EAX                         ; 00558f9e
    POP EBP                             ; 00558fa0
    POP EDI                             ; 00558fa1
    POP ESI                             ; 00558fa2
    POP EBX                             ; 00558fa3
    RET 0x10                            ; 00558fa4
    XOR EBX,EBX                         ; 00558fa7
        ;   Label: LAB_00558fa7
    MOV BX,SI                           ; 00558fa9
    MOV dword ptr [0x01bd1d8c],EBX      ; 00558fac | DAT_01bd1d8c
    MOV CL,0x1                          ; 00558fb2
    AND EAX,0xffff                      ; 00558fb4
    MOV BH,byte ptr [0x01bd1d94]        ; 00558fb9 | DAT_01bd1d94
    MOV [0x01bd1d90],EAX                ; 00558fbf | DAT_01bd1d90
    OR BH,0x2                           ; 00558fc4
    MOV byte ptr [0x01c02799],CL        ; 00558fc7 | DAT_01c02799
    MOV byte ptr [0x01bd1d94],BH        ; 00558fcd | DAT_01bd1d94
    XOR EAX,EAX                         ; 00558fd3
    POP EBP                             ; 00558fd5
    POP EDI                             ; 00558fd6
    POP ESI                             ; 00558fd7
    POP EBX                             ; 00558fd8
    RET 0x10                            ; 00558fd9
    XOR EBX,EBX                         ; 00558fdc
        ;   Label: LAB_00558fdc
    MOV BX,SI                           ; 00558fde
    MOV dword ptr [0x01bd1d8c],EBX      ; 00558fe1 | DAT_01bd1d8c
    AND EAX,0xffff                      ; 00558fe7
    MOV BL,byte ptr [0x01bd1d94]        ; 00558fec | DAT_01bd1d94
    MOV [0x01bd1d90],EAX                ; 00558ff2 | DAT_01bd1d90
    AND BL,0xfd                         ; 00558ff7
    MOV EAX,0x1                         ; 00558ffa
    MOV byte ptr [0x01bd1d94],BL        ; 00558fff | DAT_01bd1d94
    MOV [0x02de28b4],EAX                ; 00559005 | DAT_02de28b4
    XOR EAX,EAX                         ; 0055900a
    POP EBP                             ; 0055900c
    POP EDI                             ; 0055900d
    POP ESI                             ; 0055900e
    POP EBX                             ; 0055900f
    RET 0x10                            ; 00559010
    XOR EBX,EBX                         ; 00559013
        ;   Label: LAB_00559013
    MOV BX,SI                           ; 00559015
    MOV dword ptr [0x01bd1d8c],EBX      ; 00559018 | DAT_01bd1d8c
    MOV DL,byte ptr [0x01bd1d94]        ; 0055901e | DAT_01bd1d94
    AND EAX,0xffff                      ; 00559024
    OR DL,0x4                           ; 00559029
    MOV [0x01bd1d90],EAX                ; 0055902c | DAT_01bd1d90
    MOV byte ptr [0x01bd1d94],DL        ; 00559031 | DAT_01bd1d94
    MOV DH,0x1                          ; 00559037
    XOR EAX,EAX                         ; 00559039
    MOV byte ptr [0x01c027a4],DH        ; 0055903b | DAT_01c027a4
    POP EBP                             ; 00559041
    POP EDI                             ; 00559042
    POP ESI                             ; 00559043
    POP EBX                             ; 00559044
    RET 0x10                            ; 00559045
    XOR EBX,EBX                         ; 00559048
        ;   Label: LAB_00559048
    MOV BX,SI                           ; 0055904a
    MOV dword ptr [0x01bd1d8c],EBX      ; 0055904d | DAT_01bd1d8c
    AND EAX,0xffff                      ; 00559053
    MOV [0x01bd1d90],EAX                ; 00559058 | DAT_01bd1d90
    MOV AH,byte ptr [0x01bd1d94]        ; 0055905d | DAT_01bd1d94
    MOV EBP,0x1                         ; 00559063
    AND AH,0xfb                         ; 00559068
    MOV dword ptr [0x02de28e0],EBP      ; 0055906b | DAT_02de28e0
    MOV byte ptr [0x01bd1d94],AH        ; 00559071 | DAT_01bd1d94
    XOR EAX,EAX                         ; 00559077
    POP EBP                             ; 00559079
    POP EDI                             ; 0055907a
    POP ESI                             ; 0055907b
    POP EBX                             ; 0055907c
    RET 0x10                            ; 0055907d
    PUSH EDX                            ; 00559080
        ;   Label: LAB_00559080
    CALL wincore_winvideo.cpp_closeMovie_FUN_0055a1c0 ; 00559081
        ;   XREF to: 0055a1c0 (UNCONDITIONAL_CALL)  ; undefined wincore_winvideo.cpp_closeMovie_FUN_0055a1c0()
    ADD ESP,0x4                         ; 00559086
    JMP 0x00558ddf                      ; 00559089
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558e14                      ; 0055908e
        ;   XREF to: 00558e14 (CONDITIONAL_JUMP)  ; LAB_00558e14
        ;   Label: LAB_0055908e
    MOV EAX,ESI                         ; 00559094
    SHR EAX,0x10                        ; 00559096
    AND EAX,0xffff                      ; 00559099
    CMP EBX,0x205                       ; 0055909e
    JNC 0x005590bf                      ; 005590a4
        ;   XREF to: 005590bf (CONDITIONAL_JUMP)  ; LAB_005590bf
    CMP EBX,0x201                       ; 005590a6
    JNC 0x00559119                      ; 005590ac
        ;   XREF to: 00559119 (CONDITIONAL_JUMP)  ; LAB_00559119
    CMP EBX,0x200                       ; 005590ae
    JZ 0x00558f25                       ; 005590b4
        ;   XREF to: 00558f25 (CONDITIONAL_JUMP)  ; LAB_00558f25
    JMP 0x00558ddf                      ; 005590ba
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558fdc                      ; 005590bf
        ;   XREF to: 00558fdc (CONDITIONAL_JUMP)  ; LAB_00558fdc
        ;   Label: LAB_005590bf
    CMP EBX,0x30f                       ; 005590c5
    JNC 0x005590f0                      ; 005590cb
        ;   XREF to: 005590f0 (CONDITIONAL_JUMP)  ; LAB_005590f0
    CMP EBX,0x207                       ; 005590cd
    JC 0x00558ddf                       ; 005590d3
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00559013                      ; 005590d9
        ;   XREF to: 00559013 (CONDITIONAL_JUMP)  ; LAB_00559013
    CMP EBX,0x208                       ; 005590df
    JZ 0x00559048                       ; 005590e5
        ;   XREF to: 00559048 (CONDITIONAL_JUMP)  ; LAB_00559048
    JMP 0x00558ddf                      ; 005590eb
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558eca                      ; 005590f0
        ;   XREF to: 00558eca (CONDITIONAL_JUMP)  ; LAB_00558eca
        ;   Label: LAB_005590f0
    CMP EBX,0x311                       ; 005590f6
    JC 0x00558ddf                       ; 005590fc
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558ec0                      ; 00559102
        ;   XREF to: 00558ec0 (CONDITIONAL_JUMP)  ; LAB_00558ec0
    CMP EBX,0x3b9                       ; 00559108
    JZ 0x00559080                       ; 0055910e
        ;   XREF to: 00559080 (CONDITIONAL_JUMP)  ; LAB_00559080
    JMP 0x00558ddf                      ; 00559114
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558f43                      ; 00559119
        ;   XREF to: 00558f43 (CONDITIONAL_JUMP)  ; LAB_00558f43
        ;   Label: LAB_00559119
    CMP EBX,0x202                       ; 0055911f
    JBE 0x00558f6f                      ; 00559125
        ;   XREF to: 00558f6f (CONDITIONAL_JUMP)  ; LAB_00558f6f
    CMP EBX,0x204                       ; 0055912b
    JZ 0x00558fa7                       ; 00559131
        ;   XREF to: 00558fa7 (CONDITIONAL_JUMP)  ; LAB_00558fa7
    JMP 0x00558ddf                      ; 00559137
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558eab                      ; 0055913c
        ;   XREF to: 00558eab (CONDITIONAL_JUMP)  ; LAB_00558eab
        ;   Label: LAB_0055913c
    CMP EBX,0x102                       ; 00559142
    JNC 0x00559179                      ; 00559148
        ;   XREF to: 00559179 (CONDITIONAL_JUMP)  ; LAB_00559179
    CMP EBX,0x100                       ; 0055914a
    JC 0x00558ddf                       ; 00559150
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558ede                      ; 00559156
        ;   XREF to: 00558ede (CONDITIONAL_JUMP)  ; LAB_00558ede
    MOV EAX,ESI                         ; 0055915c
        ;   Label: LAB_0055915c
    MOV EDX,dword ptr [0x005b7630]      ; 0055915e | DAT_005b7630
    SAR EAX,0x10                        ; 00559164
    AND EAX,EDX                         ; 00559167
    MOV dword ptr [EAX*0x4 + 0x2de20b0],0x1 ; 00559169
    JMP 0x00558ddf                      ; 00559174
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558f04                      ; 00559179
        ;   XREF to: 00558f04 (CONDITIONAL_JUMP)  ; LAB_00558f04
        ;   Label: LAB_00559179
    CMP EBX,0x104                       ; 0055917f
    JC 0x00558ddf                       ; 00559185
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558ede                      ; 0055918b
        ;   XREF to: 00558ede (CONDITIONAL_JUMP)  ; LAB_00558ede
    CMP EBX,0x105                       ; 00559191
    JZ 0x0055915c                       ; 00559197
        ;   XREF to: 0055915c (CONDITIONAL_JUMP)  ; LAB_0055915c
    JMP 0x00558ddf                      ; 00559199
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf
    CMP EBX,0xf                         ; 0055919e
        ;   Label: LAB_0055919e
    JC 0x00558ddf                       ; 005591a1
        ;   XREF to: 00558ddf (CONDITIONAL_JUMP)  ; LAB_00558ddf
    JBE 0x00558ed4                      ; 005591a7
        ;   XREF to: 00558ed4 (CONDITIONAL_JUMP)  ; LAB_00558ed4
    CMP EBX,0x1c                        ; 005591ad
    JZ 0x00558e2c                       ; 005591b0
        ;   XREF to: 00558e2c (CONDITIONAL_JUMP)  ; LAB_00558e2c
    JMP 0x00558ddf                      ; 005591b6
        ;   XREF to: 00558ddf (UNCONDITIONAL_JUMP)  ; LAB_00558ddf

