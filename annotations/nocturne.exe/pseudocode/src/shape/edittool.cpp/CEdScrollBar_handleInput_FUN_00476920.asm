; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(int *param_1)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00475230 at 004752cc
;
; Referenced Globals:
;   void* switchdataD_00476908 = 00476b2c
;   undefined4 DAT_01bcde24
;   undefined4 DAT_01bcde28
;   undefined4 DAT_01bcde2c
;   undefined4 DAT_01bcde30
;   undefined4 DAT_01bcde34
;   undefined4 DAT_01bcde38
;   undefined4 DAT_01bcde3c
;   undefined4 DAT_01bcde40
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bd1d94
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
;   wincore_winrun.cpp_getTime_FUN_00558a30
;   wincore_winrun.cpp_setCursorPosition_FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476920
        ;   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
    PUSH ESI                            ; 00476921
    PUSH EDI                            ; 00476922
    PUSH EBP                            ; 00476923
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476924
    PUSH EBX                            ; 00476928
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0 ; 00476929
        ;   XREF to: 00476ce0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0()
    ADD ESP,0x4                         ; 0047692e
    PUSH EBX                            ; 00476931
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800 ; 00476932
        ;   XREF to: 00476800 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800()
    MOV EDX,dword ptr [0x01bcde24]      ; 00476937 | DAT_01bcde24
    ADD ESP,0x4                         ; 0047693d
    CMP EBX,EDX                         ; 00476940
    JNZ 0x00476bba                      ; 00476942
        ;   XREF to: 00476bba (CONDITIONAL_JUMP)  ; LAB_00476bba
    TEST byte ptr [0x01bd1d94],0x1      ; 00476948 | DAT_01bd1d94
    JZ 0x004769fa                       ; 0047694f
        ;   XREF to: 004769fa (CONDITIONAL_JUMP)  ; LAB_004769fa
    CMP dword ptr [0x01bcde28],0x0      ; 00476955 | DAT_01bcde28
    JNZ 0x00476ad8                      ; 0047695c
        ;   XREF to: 00476ad8 (CONDITIONAL_JUMP)  ; LAB_00476ad8
    CMP dword ptr [EBX + 0x10],0x0      ; 00476962
    JZ 0x00476a07                       ; 00476966
        ;   XREF to: 00476a07 (CONDITIONAL_JUMP)  ; LAB_00476a07
    MOV EDI,dword ptr [0x01bcde34]      ; 0047696c | DAT_01bcde34
    MOV ESI,dword ptr [EBX + 0x24]      ; 00476972
    MOV EBP,dword ptr [0x01bcde40]      ; 00476975 | DAT_01bcde40
    ADD ESI,EDI                         ; 0047697b
    MOV EAX,[0x01bd1d8c]                ; 0047697d | DAT_01bd1d8c
    SUB ESI,EBP                         ; 00476982
    MOV EDX,dword ptr [0x01bcde38]      ; 00476984 | DAT_01bcde38
    CMP EAX,ESI                         ; 0047698a
    JGE 0x00476990                      ; 0047698c
        ;   XREF to: 00476990 (CONDITIONAL_JUMP)  ; LAB_00476990
    MOV EAX,ESI                         ; 0047698e
    MOV ESI,dword ptr [0x01bcde40]      ; 00476990 | DAT_01bcde40
        ;   Label: LAB_00476990
    MOV EBP,dword ptr [0x01bcde34]      ; 00476996 | DAT_01bcde34
    MOV ECX,dword ptr [EBX + 0x30]      ; 0047699c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0047699f
    ADD ECX,ESI                         ; 004769a2
    MOV ESI,dword ptr [EBX + 0x28]      ; 004769a4
    SUB ECX,EDI                         ; 004769a7
    ADD ESI,EBP                         ; 004769a9
    SUB ESI,ECX                         ; 004769ab
    CMP EAX,ESI                         ; 004769ad
    JLE 0x004769b3                      ; 004769af
        ;   XREF to: 004769b3 (CONDITIONAL_JUMP)  ; LAB_004769b3
    MOV EAX,ESI                         ; 004769b1
    MOV ECX,dword ptr [0x01bcde34]      ; 004769b3 | DAT_01bcde34
        ;   Label: LAB_004769b3
    MOV ESI,EAX                         ; 004769b9
    MOV EDI,dword ptr [0x01bcde40]      ; 004769bb | DAT_01bcde40
    SUB ESI,ECX                         ; 004769c1
    ADD ESI,EDI                         ; 004769c3
    PUSH EDX                            ; 004769c5
        ;   Label: LAB_004769c5
    PUSH EAX                            ; 004769c6
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 004769c7
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_setCursorPosition_FUN_00558d60()
    MOV EAX,dword ptr [EBX + 0x8]       ; 004769cc
    MOV EBP,dword ptr [EBX + 0x4]       ; 004769cf
    ADD ESP,0x8                         ; 004769d2
    CMP EAX,EBP                         ; 004769d5
    JL 0x00476a67                       ; 004769d7
        ;   XREF to: 00476a67 (CONDITIONAL_JUMP)  ; LAB_00476a67
    MOV dword ptr [EBX],0x0             ; 004769dd
        ;   Label: LAB_004769dd
    PUSH EBX                            ; 004769e3
        ;   Label: LAB_004769e3
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0 ; 004769e4
        ;   XREF to: 00476ce0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0()
    ADD ESP,0x4                         ; 004769e9
    PUSH EBX                            ; 004769ec
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800 ; 004769ed
        ;   XREF to: 00476800 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800()
    ADD ESP,0x4                         ; 004769f2
    POP EBP                             ; 004769f5
        ;   Label: LAB_004769f5
    POP EDI                             ; 004769f6
    POP ESI                             ; 004769f7
    POP EBX                             ; 004769f8
    RET                                 ; 004769f9
    XOR EDX,EDX                         ; 004769fa
        ;   Label: LAB_004769fa
    MOV dword ptr [0x01bcde24],EDX      ; 004769fc | DAT_01bcde24
    POP EBP                             ; 00476a02
    POP EDI                             ; 00476a03
    POP ESI                             ; 00476a04
    POP EBX                             ; 00476a05
    RET                                 ; 00476a06
    MOV ECX,dword ptr [0x01bcde38]      ; 00476a07 | DAT_01bcde38
        ;   Label: LAB_00476a07
    MOV ESI,dword ptr [EBX + 0x24]      ; 00476a0d
    MOV EDI,dword ptr [0x01bcde40]      ; 00476a10 | DAT_01bcde40
    ADD ESI,ECX                         ; 00476a16
    MOV EDX,dword ptr [0x01bd1d90]      ; 00476a18 | DAT_01bd1d90
    SUB ESI,EDI                         ; 00476a1e
    MOV EAX,[0x01bcde34]                ; 00476a20 | DAT_01bcde34
    CMP EDX,ESI                         ; 00476a25
    JGE 0x00476a2b                      ; 00476a27
        ;   XREF to: 00476a2b (CONDITIONAL_JUMP)  ; LAB_00476a2b
    MOV EDX,ESI                         ; 00476a29
    MOV ESI,dword ptr [0x01bcde40]      ; 00476a2b | DAT_01bcde40
        ;   Label: LAB_00476a2b
    MOV EBP,dword ptr [EBX + 0x30]      ; 00476a31
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00476a34
    ADD ESI,EBP                         ; 00476a37
    SUB ESI,ECX                         ; 00476a39
    MOV EDI,dword ptr [0x01bcde38]      ; 00476a3b | DAT_01bcde38
    MOV ECX,ESI                         ; 00476a41
    MOV ESI,dword ptr [EBX + 0x28]      ; 00476a43
    ADD ESI,EDI                         ; 00476a46
    SUB ESI,ECX                         ; 00476a48
    CMP EDX,ESI                         ; 00476a4a
    JLE 0x00476a50                      ; 00476a4c
        ;   XREF to: 00476a50 (CONDITIONAL_JUMP)  ; LAB_00476a50
    MOV EDX,ESI                         ; 00476a4e
    MOV EBP,dword ptr [0x01bcde38]      ; 00476a50 | DAT_01bcde38
        ;   Label: LAB_00476a50
    MOV ESI,EDX                         ; 00476a56
    MOV ECX,dword ptr [0x01bcde40]      ; 00476a58 | DAT_01bcde40
    SUB ESI,EBP                         ; 00476a5e
    ADD ESI,ECX                         ; 00476a60
    JMP 0x004769c5                      ; 00476a62
        ;   XREF to: 004769c5 (UNCONDITIONAL_JUMP)  ; LAB_004769c5
    CMP EBP,0x1                         ; 00476a67
        ;   Label: LAB_00476a67
    JL 0x004769dd                       ; 00476a6a
        ;   XREF to: 004769dd (CONDITIONAL_JUMP)  ; LAB_004769dd
    CMP ESI,dword ptr [0x01bcde40]      ; 00476a70 | DAT_01bcde40
    JNZ 0x00476a84                      ; 00476a76
        ;   XREF to: 00476a84 (CONDITIONAL_JUMP)  ; LAB_00476a84
    MOV EAX,[0x01bcde3c]                ; 00476a78 | DAT_01bcde3c
    MOV dword ptr [EBX],EAX             ; 00476a7d
    JMP 0x004769e3                      ; 00476a7f
        ;   XREF to: 004769e3 (UNCONDITIONAL_JUMP)  ; LAB_004769e3
    MOV ECX,dword ptr [EBX + 0x24]      ; 00476a84
        ;   Label: LAB_00476a84
    CMP ESI,ECX                         ; 00476a87
    JLE 0x004769dd                      ; 00476a89
        ;   XREF to: 004769dd (CONDITIONAL_JUMP)  ; LAB_004769dd
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00476a8f
    MOV EDX,dword ptr [EBX + 0x30]      ; 00476a92
    SUB EDX,EDI                         ; 00476a95
    MOV EBP,dword ptr [EBX + 0x28]      ; 00476a97
    LEA EAX,[ESI + EDX*0x1]             ; 00476a9a
    CMP EAX,EBP                         ; 00476a9d
    JL 0x00476ab0                       ; 00476a9f
        ;   XREF to: 00476ab0 (CONDITIONAL_JUMP)  ; LAB_00476ab0
    MOV EDX,dword ptr [EBX + 0x8]       ; 00476aa1
    MOV EAX,dword ptr [EBX + 0x4]       ; 00476aa4
    SUB EAX,EDX                         ; 00476aa7
    MOV dword ptr [EBX],EAX             ; 00476aa9
    JMP 0x004769e3                      ; 00476aab
        ;   XREF to: 004769e3 (UNCONDITIONAL_JUMP)  ; LAB_004769e3
    MOV EAX,EBP                         ; 00476ab0
        ;   Label: LAB_00476ab0
    MOV EDI,dword ptr [EBX + 0x8]       ; 00476ab2
    SUB EAX,ECX                         ; 00476ab5
    MOV EBP,dword ptr [EBX + 0x24]      ; 00476ab7
    MOV ECX,EAX                         ; 00476aba
    MOV EAX,dword ptr [EBX + 0x4]       ; 00476abc
    SUB ECX,EDX                         ; 00476abf
    MOV EDX,ESI                         ; 00476ac1
    SUB EAX,EDI                         ; 00476ac3
    SUB EDX,EBP                         ; 00476ac5
    IMUL EDX,EAX                        ; 00476ac7
    MOV EAX,EDX                         ; 00476aca
    SAR EDX,0x1f                        ; 00476acc
    IDIV ECX                            ; 00476acf
    MOV dword ptr [EBX],EAX             ; 00476ad1
    JMP 0x004769e3                      ; 00476ad3
        ;   XREF to: 004769e3 (UNCONDITIONAL_JUMP)  ; LAB_004769e3
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00476ad8
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00476ad8
    MOV ESI,dword ptr [0x01bcde2c]      ; 00476add | DAT_01bcde2c
    MOV EDX,EAX                         ; 00476ae3
    SUB EAX,ESI                         ; 00476ae5
    TEST EAX,EAX                        ; 00476ae7
    JL 0x00476b50                       ; 00476ae9
        ;   XREF to: 00476b50 (CONDITIONAL_JUMP)  ; LAB_00476b50
    MOV EDI,dword ptr [0x01bcde30]      ; 00476aeb | DAT_01bcde30
        ;   Label: LAB_00476aeb
    SUB EDI,EAX                         ; 00476af1
    MOV dword ptr [0x01bcde2c],EDX      ; 00476af3 | DAT_01bcde2c
    MOV dword ptr [0x01bcde30],EDI      ; 00476af9 | DAT_01bcde30
    TEST EDI,EDI                        ; 00476aff
    JG 0x00476b35                       ; 00476b01
        ;   XREF to: 00476b35 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x9999                      ; 00476b03
    MOV EDX,dword ptr [EBX + 0x10]      ; 00476b08
    MOV [0x01bcde30],EAX                ; 00476b0b | DAT_01bcde30
    TEST EDX,EDX                        ; 00476b10
    JZ 0x00476b54                       ; 00476b12
        ;   XREF to: 00476b54 (CONDITIONAL_JUMP)  ; LAB_00476b54
    MOV EAX,[0x01bd1d8c]                ; 00476b14 | DAT_01bd1d8c
    MOV EDX,dword ptr [0x01bcde28]      ; 00476b19 | DAT_01bcde28
        ;   Label: LAB_00476b19
    DEC EDX                             ; 00476b1f
    CMP EDX,0x3                         ; 00476b20
    JA 0x00476b35                       ; 00476b23
        ;   XREF to: 00476b35 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x476908]  ; 00476b25 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ESI,dword ptr [EBX]             ; 00476b2c
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0xc]       ; 00476b2e
    SUB ESI,EAX                         ; 00476b31
    MOV dword ptr [EBX],ESI             ; 00476b33
    MOV EDI,dword ptr [0x01bcde38]      ; 00476b35 | DAT_01bcde38
        ;   Label: default
    PUSH EDI                            ; 00476b3b
    MOV EBP,dword ptr [0x01bcde34]      ; 00476b3c | DAT_01bcde34
    PUSH EBP                            ; 00476b42
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 00476b43
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_setCursorPosition_FUN_00558d60()
    ADD ESP,0x8                         ; 00476b48
    JMP 0x004769e3                      ; 00476b4b
        ;   XREF to: 004769e3 (UNCONDITIONAL_JUMP)  ; LAB_004769e3
    XOR EAX,EAX                         ; 00476b50
        ;   Label: LAB_00476b50
    JMP 0x00476aeb                      ; 00476b52
        ;   XREF to: 00476aeb (UNCONDITIONAL_JUMP)  ; LAB_00476aeb
    MOV EAX,[0x01bd1d90]                ; 00476b54 | DAT_01bd1d90
        ;   Label: LAB_00476b54
    JMP 0x00476b19                      ; 00476b59
        ;   XREF to: 00476b19 (UNCONDITIONAL_JUMP)  ; LAB_00476b19
    MOV ECX,dword ptr [EBX]             ; 00476b5b
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0xc]       ; 00476b5d
    ADD ECX,EAX                         ; 00476b60
    MOV dword ptr [EBX],ECX             ; 00476b62
    JMP 0x00476b35                      ; 00476b64
        ;   XREF to: 00476b35 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00476b66
        ;   Label: caseD_3
    JGE 0x00476b76                      ; 00476b69
        ;   XREF to: 00476b76 (CONDITIONAL_JUMP)  ; LAB_00476b76
    MOV EDX,dword ptr [EBX]             ; 00476b6b
    MOV EAX,dword ptr [EBX + 0x8]       ; 00476b6d
    SUB EDX,EAX                         ; 00476b70
    MOV dword ptr [EBX],EDX             ; 00476b72
    JMP 0x00476b35                      ; 00476b74
        ;   XREF to: 00476b35 (UNCONDITIONAL_JUMP)  ; default
    MOV CL,byte ptr [0x01bd1d94]        ; 00476b76 | DAT_01bd1d94
        ;   Label: LAB_00476b76
    XOR EAX,EAX                         ; 00476b7c
    AND CL,0xfe                         ; 00476b7e
    MOV [0x01bcde24],EAX                ; 00476b81 | DAT_01bcde24
    MOV byte ptr [0x01bd1d94],CL        ; 00476b86 | DAT_01bd1d94
    JMP 0x00476b35                      ; 00476b8c
        ;   XREF to: 00476b35 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x30]      ; 00476b8e
        ;   Label: caseD_4
    JLE 0x00476b9e                      ; 00476b91
        ;   XREF to: 00476b9e (CONDITIONAL_JUMP)  ; LAB_00476b9e
    MOV EDI,dword ptr [EBX]             ; 00476b93
    MOV EAX,dword ptr [EBX + 0x8]       ; 00476b95
    ADD EDI,EAX                         ; 00476b98
    MOV dword ptr [EBX],EDI             ; 00476b9a
    JMP 0x00476b35                      ; 00476b9c
        ;   XREF to: 00476b35 (UNCONDITIONAL_JUMP)  ; default
    MOV DH,byte ptr [0x01bd1d94]        ; 00476b9e | DAT_01bd1d94
        ;   Label: LAB_00476b9e
    XOR ESI,ESI                         ; 00476ba4
    AND DH,0xfe                         ; 00476ba6
    MOV dword ptr [0x01bcde24],ESI      ; 00476ba9 | DAT_01bcde24
    MOV byte ptr [0x01bd1d94],DH        ; 00476baf | DAT_01bd1d94
    JMP 0x00476b35                      ; 00476bb5
        ;   XREF to: 00476b35 (UNCONDITIONAL_JUMP)  ; default
    TEST EDX,EDX                        ; 00476bba
        ;   Label: LAB_00476bba
    JNZ 0x004769f5                      ; 00476bbc
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    TEST byte ptr [0x01bd1d94],0x1      ; 00476bc2 | DAT_01bd1d94
    JZ 0x004769f5                       ; 00476bc9
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    MOV EAX,[0x01bd1d8c]                ; 00476bcf | DAT_01bd1d8c
    CMP EAX,dword ptr [EBX + 0x14]      ; 00476bd4
    JL 0x004769f5                       ; 00476bd7
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    MOV EAX,[0x01bd1d90]                ; 00476bdd | DAT_01bd1d90
    CMP EAX,dword ptr [EBX + 0x18]      ; 00476be2
    JL 0x004769f5                       ; 00476be5
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    MOV EAX,[0x01bd1d8c]                ; 00476beb | DAT_01bd1d8c
    CMP EAX,dword ptr [EBX + 0x1c]      ; 00476bf0
    JGE 0x004769f5                      ; 00476bf3
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    MOV EAX,[0x01bd1d90]                ; 00476bf9 | DAT_01bd1d90
    CMP EAX,dword ptr [EBX + 0x20]      ; 00476bfe
    JGE 0x004769f5                      ; 00476c01
        ;   XREF to: 004769f5 (CONDITIONAL_JUMP)  ; LAB_004769f5
    MOV EAX,[0x01bd1d8c]                ; 00476c07 | DAT_01bd1d8c
    MOV [0x01bcde34],EAX                ; 00476c0c | DAT_01bcde34
    MOV EAX,[0x01bd1d90]                ; 00476c11 | DAT_01bd1d90
    MOV [0x01bcde38],EAX                ; 00476c16 | DAT_01bcde38
    MOV EAX,dword ptr [EBX]             ; 00476c1b
    MOV dword ptr [0x01bcde24],EBX      ; 00476c1d | DAT_01bcde24
    MOV [0x01bcde3c],EAX                ; 00476c23 | DAT_01bcde3c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00476c28
    MOV ECX,dword ptr [EBX + 0x10]      ; 00476c2b
    MOV [0x01bcde40],EAX                ; 00476c2e | DAT_01bcde40
    TEST ECX,ECX                        ; 00476c33
    JZ 0x00476c77                       ; 00476c35
        ;   XREF to: 00476c77 (CONDITIONAL_JUMP)  ; LAB_00476c77
    MOV EAX,[0x01bd1d8c]                ; 00476c37 | DAT_01bd1d8c
    CMP EAX,dword ptr [EBX + 0x24]      ; 00476c3c
        ;   Label: LAB_00476c3c
    JGE 0x00476c7e                      ; 00476c3f
        ;   XREF to: 00476c7e (CONDITIONAL_JUMP)  ; LAB_00476c7e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00476c41
    MOV EBP,dword ptr [EBX]             ; 00476c44
    MOV EDI,0x1                         ; 00476c46
    SUB EBP,EAX                         ; 00476c4b
    MOV dword ptr [0x01bcde28],EDI      ; 00476c4d | DAT_01bcde28
    MOV dword ptr [EBX],EBP             ; 00476c53
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00476c55
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00476c55
    MOV [0x01bcde2c],EAX                ; 00476c5a | DAT_01bcde2c
    MOV EAX,0x48000                     ; 00476c5f
    PUSH EBX                            ; 00476c64
    MOV [0x01bcde30],EAX                ; 00476c65 | DAT_01bcde30
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920 ; 00476c6a
        ;   XREF to: 00476920 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920()
    ADD ESP,0x4                         ; 00476c6f
    POP EBP                             ; 00476c72
    POP EDI                             ; 00476c73
    POP ESI                             ; 00476c74
    POP EBX                             ; 00476c75
    RET                                 ; 00476c76
    MOV EAX,[0x01bd1d90]                ; 00476c77 | DAT_01bd1d90
        ;   Label: LAB_00476c77
    JMP 0x00476c3c                      ; 00476c7c
        ;   XREF to: 00476c3c (UNCONDITIONAL_JUMP)  ; LAB_00476c3c
    CMP EAX,dword ptr [EBX + 0x28]      ; 00476c7e
        ;   Label: LAB_00476c7e
    JL 0x00476c99                       ; 00476c81
        ;   XREF to: 00476c99 (CONDITIONAL_JUMP)  ; LAB_00476c99
    MOV EAX,dword ptr [EBX + 0xc]       ; 00476c83
    MOV ESI,dword ptr [EBX]             ; 00476c86
    MOV ECX,0x2                         ; 00476c88
    ADD ESI,EAX                         ; 00476c8d
    MOV dword ptr [0x01bcde28],ECX      ; 00476c8f | DAT_01bcde28
    MOV dword ptr [EBX],ESI             ; 00476c95
    JMP 0x00476c55                      ; 00476c97
        ;   XREF to: 00476c55 (UNCONDITIONAL_JUMP)  ; LAB_00476c55
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00476c99
        ;   Label: LAB_00476c99
    JGE 0x00476cb4                      ; 00476c9c
        ;   XREF to: 00476cb4 (CONDITIONAL_JUMP)  ; LAB_00476cb4
    MOV EAX,dword ptr [EBX + 0x8]       ; 00476c9e
    MOV EDX,dword ptr [EBX]             ; 00476ca1
    MOV EBP,0x3                         ; 00476ca3
    SUB EDX,EAX                         ; 00476ca8
    MOV dword ptr [0x01bcde28],EBP      ; 00476caa | DAT_01bcde28
    MOV dword ptr [EBX],EDX             ; 00476cb0
    JMP 0x00476c55                      ; 00476cb2
        ;   XREF to: 00476c55 (UNCONDITIONAL_JUMP)  ; LAB_00476c55
    CMP EAX,dword ptr [EBX + 0x30]      ; 00476cb4
        ;   Label: LAB_00476cb4
    JL 0x00476ccf                       ; 00476cb7
        ;   XREF to: 00476ccf (CONDITIONAL_JUMP)  ; LAB_00476ccf
    MOV EAX,dword ptr [EBX + 0x8]       ; 00476cb9
    MOV EDI,dword ptr [EBX]             ; 00476cbc
    MOV ESI,0x4                         ; 00476cbe
    ADD EDI,EAX                         ; 00476cc3
    MOV dword ptr [0x01bcde28],ESI      ; 00476cc5 | DAT_01bcde28
    MOV dword ptr [EBX],EDI             ; 00476ccb
    JMP 0x00476c55                      ; 00476ccd
        ;   XREF to: 00476c55 (UNCONDITIONAL_JUMP)  ; LAB_00476c55
    XOR ECX,ECX                         ; 00476ccf
        ;   Label: LAB_00476ccf
    MOV dword ptr [0x01bcde28],ECX      ; 00476cd1 | DAT_01bcde28
    JMP 0x00476c55                      ; 00476cd7
        ;   XREF to: 00476c55 (UNCONDITIONAL_JUMP)  ; LAB_00476c55

