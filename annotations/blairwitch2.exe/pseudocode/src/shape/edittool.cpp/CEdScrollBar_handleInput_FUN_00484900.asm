; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00482770 at 0048280c
;
; Referenced Globals:
;   void* switchdataD_004848e8 = 00484b0c
;   undefined4 DAT_01c26410
;   undefined4 DAT_01c26414
;   undefined4 DAT_01c26418
;   undefined4 DAT_01c2641c
;   undefined4 DAT_01c26420
;   undefined4 DAT_01c26424
;   undefined4 DAT_01c26428
;   undefined4 DAT_01c2642c
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0
;   wincore_winrun.cpp_FUN_0058e9e0
;   wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484900
        ;   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900
    PUSH ESI                            ; 00484901
    PUSH EDI                            ; 00484902
    PUSH EBP                            ; 00484903
    MOV EBX,dword ptr [ESP + 0x14]      ; 00484904
    PUSH EBX                            ; 00484908
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0 ; 00484909
        ;   XREF to: 00484cc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0048490e
    PUSH EBX                            ; 00484911
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0 ; 00484912
        ;   XREF to: 004847e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar * this_ptr)
    MOV EDX,dword ptr [0x01c26410]      ; 00484917 | DAT_01c26410
    ADD ESP,0x4                         ; 0048491d
    CMP EBX,EDX                         ; 00484920
    JNZ 0x00484b9a                      ; 00484922
        ;   XREF to: 00484b9a (CONDITIONAL_JUMP)  ; LAB_00484b9a
    TEST byte ptr [0x01c2a384],0x1      ; 00484928 | DAT_01c2a384
    JZ 0x004849da                       ; 0048492f
        ;   XREF to: 004849da (CONDITIONAL_JUMP)  ; LAB_004849da
    CMP dword ptr [0x01c26414],0x0      ; 00484935 | DAT_01c26414
    JNZ 0x00484ab8                      ; 0048493c
        ;   XREF to: 00484ab8 (CONDITIONAL_JUMP)  ; LAB_00484ab8
    CMP dword ptr [EBX + 0x10],0x0      ; 00484942
    JZ 0x004849e7                       ; 00484946
        ;   XREF to: 004849e7 (CONDITIONAL_JUMP)  ; LAB_004849e7
    MOV EDI,dword ptr [0x01c26420]      ; 0048494c | DAT_01c26420
    MOV ESI,dword ptr [EBX + 0x24]      ; 00484952
    MOV EBP,dword ptr [0x01c2642c]      ; 00484955 | DAT_01c2642c
    ADD ESI,EDI                         ; 0048495b
    MOV EAX,[0x01c2a37c]                ; 0048495d | DAT_01c2a37c
    SUB ESI,EBP                         ; 00484962
    MOV EDX,dword ptr [0x01c26424]      ; 00484964 | DAT_01c26424
    CMP EAX,ESI                         ; 0048496a
    JGE 0x00484970                      ; 0048496c
        ;   XREF to: 00484970 (CONDITIONAL_JUMP)  ; LAB_00484970
    MOV EAX,ESI                         ; 0048496e
    MOV ESI,dword ptr [0x01c2642c]      ; 00484970 | DAT_01c2642c
        ;   Label: LAB_00484970
    MOV EBP,dword ptr [0x01c26420]      ; 00484976 | DAT_01c26420
    MOV ECX,dword ptr [EBX + 0x30]      ; 0048497c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0048497f
    ADD ECX,ESI                         ; 00484982
    MOV ESI,dword ptr [EBX + 0x28]      ; 00484984
    SUB ECX,EDI                         ; 00484987
    ADD ESI,EBP                         ; 00484989
    SUB ESI,ECX                         ; 0048498b
    CMP EAX,ESI                         ; 0048498d
    JLE 0x00484993                      ; 0048498f
        ;   XREF to: 00484993 (CONDITIONAL_JUMP)  ; LAB_00484993
    MOV EAX,ESI                         ; 00484991
    MOV ECX,dword ptr [0x01c26420]      ; 00484993 | DAT_01c26420
        ;   Label: LAB_00484993
    MOV ESI,EAX                         ; 00484999
    MOV EDI,dword ptr [0x01c2642c]      ; 0048499b | DAT_01c2642c
    SUB ESI,ECX                         ; 004849a1
    ADD ESI,EDI                         ; 004849a3
    PUSH EDX                            ; 004849a5
        ;   Label: LAB_004849a5
    PUSH EAX                            ; 004849a6
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 004849a7
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    MOV EAX,dword ptr [EBX + 0x8]       ; 004849ac
    MOV EBP,dword ptr [EBX + 0x4]       ; 004849af
    ADD ESP,0x8                         ; 004849b2
    CMP EAX,EBP                         ; 004849b5
    JL 0x00484a47                       ; 004849b7
        ;   XREF to: 00484a47 (CONDITIONAL_JUMP)  ; LAB_00484a47
    MOV dword ptr [EBX],0x0             ; 004849bd
        ;   Label: LAB_004849bd
    PUSH EBX                            ; 004849c3
        ;   Label: LAB_004849c3
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0 ; 004849c4
        ;   XREF to: 00484cc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004849c9
    PUSH EBX                            ; 004849cc
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0 ; 004849cd
        ;   XREF to: 004847e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004849d2
    POP EBP                             ; 004849d5
        ;   Label: LAB_004849d5
    POP EDI                             ; 004849d6
    POP ESI                             ; 004849d7
    POP EBX                             ; 004849d8
    RET                                 ; 004849d9
    XOR EDX,EDX                         ; 004849da
        ;   Label: LAB_004849da
    MOV dword ptr [0x01c26410],EDX      ; 004849dc | DAT_01c26410
    POP EBP                             ; 004849e2
    POP EDI                             ; 004849e3
    POP ESI                             ; 004849e4
    POP EBX                             ; 004849e5
    RET                                 ; 004849e6
    MOV ECX,dword ptr [0x01c26424]      ; 004849e7 | DAT_01c26424
        ;   Label: LAB_004849e7
    MOV ESI,dword ptr [EBX + 0x24]      ; 004849ed
    MOV EDI,dword ptr [0x01c2642c]      ; 004849f0 | DAT_01c2642c
    ADD ESI,ECX                         ; 004849f6
    MOV EDX,dword ptr [0x01c2a380]      ; 004849f8 | DAT_01c2a380
    SUB ESI,EDI                         ; 004849fe
    MOV EAX,[0x01c26420]                ; 00484a00 | DAT_01c26420
    CMP EDX,ESI                         ; 00484a05
    JGE 0x00484a0b                      ; 00484a07
        ;   XREF to: 00484a0b (CONDITIONAL_JUMP)  ; LAB_00484a0b
    MOV EDX,ESI                         ; 00484a09
    MOV ESI,dword ptr [0x01c2642c]      ; 00484a0b | DAT_01c2642c
        ;   Label: LAB_00484a0b
    MOV EBP,dword ptr [EBX + 0x30]      ; 00484a11
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00484a14
    ADD ESI,EBP                         ; 00484a17
    SUB ESI,ECX                         ; 00484a19
    MOV EDI,dword ptr [0x01c26424]      ; 00484a1b | DAT_01c26424
    MOV ECX,ESI                         ; 00484a21
    MOV ESI,dword ptr [EBX + 0x28]      ; 00484a23
    ADD ESI,EDI                         ; 00484a26
    SUB ESI,ECX                         ; 00484a28
    CMP EDX,ESI                         ; 00484a2a
    JLE 0x00484a30                      ; 00484a2c
        ;   XREF to: 00484a30 (CONDITIONAL_JUMP)  ; LAB_00484a30
    MOV EDX,ESI                         ; 00484a2e
    MOV EBP,dword ptr [0x01c26424]      ; 00484a30 | DAT_01c26424
        ;   Label: LAB_00484a30
    MOV ESI,EDX                         ; 00484a36
    MOV ECX,dword ptr [0x01c2642c]      ; 00484a38 | DAT_01c2642c
    SUB ESI,EBP                         ; 00484a3e
    ADD ESI,ECX                         ; 00484a40
    JMP 0x004849a5                      ; 00484a42
        ;   XREF to: 004849a5 (UNCONDITIONAL_JUMP)  ; LAB_004849a5
    CMP EBP,0x1                         ; 00484a47
        ;   Label: LAB_00484a47
    JL 0x004849bd                       ; 00484a4a
        ;   XREF to: 004849bd (CONDITIONAL_JUMP)  ; LAB_004849bd
    CMP ESI,dword ptr [0x01c2642c]      ; 00484a50 | DAT_01c2642c
    JNZ 0x00484a64                      ; 00484a56
        ;   XREF to: 00484a64 (CONDITIONAL_JUMP)  ; LAB_00484a64
    MOV EAX,[0x01c26428]                ; 00484a58 | DAT_01c26428
    MOV dword ptr [EBX],EAX             ; 00484a5d
    JMP 0x004849c3                      ; 00484a5f
        ;   XREF to: 004849c3 (UNCONDITIONAL_JUMP)  ; LAB_004849c3
    MOV ECX,dword ptr [EBX + 0x24]      ; 00484a64
        ;   Label: LAB_00484a64
    CMP ESI,ECX                         ; 00484a67
    JLE 0x004849bd                      ; 00484a69
        ;   XREF to: 004849bd (CONDITIONAL_JUMP)  ; LAB_004849bd
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00484a6f
    MOV EDX,dword ptr [EBX + 0x30]      ; 00484a72
    SUB EDX,EDI                         ; 00484a75
    MOV EBP,dword ptr [EBX + 0x28]      ; 00484a77
    LEA EAX,[ESI + EDX*0x1]             ; 00484a7a
    CMP EAX,EBP                         ; 00484a7d
    JL 0x00484a90                       ; 00484a7f
        ;   XREF to: 00484a90 (CONDITIONAL_JUMP)  ; LAB_00484a90
    MOV EDX,dword ptr [EBX + 0x8]       ; 00484a81
    MOV EAX,dword ptr [EBX + 0x4]       ; 00484a84
    SUB EAX,EDX                         ; 00484a87
    MOV dword ptr [EBX],EAX             ; 00484a89
    JMP 0x004849c3                      ; 00484a8b
        ;   XREF to: 004849c3 (UNCONDITIONAL_JUMP)  ; LAB_004849c3
    MOV EAX,EBP                         ; 00484a90
        ;   Label: LAB_00484a90
    MOV EDI,dword ptr [EBX + 0x8]       ; 00484a92
    SUB EAX,ECX                         ; 00484a95
    MOV EBP,dword ptr [EBX + 0x24]      ; 00484a97
    MOV ECX,EAX                         ; 00484a9a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00484a9c
    SUB ECX,EDX                         ; 00484a9f
    MOV EDX,ESI                         ; 00484aa1
    SUB EAX,EDI                         ; 00484aa3
    SUB EDX,EBP                         ; 00484aa5
    IMUL EDX,EAX                        ; 00484aa7
    MOV EAX,EDX                         ; 00484aaa
    SAR EDX,0x1f                        ; 00484aac
    IDIV ECX                            ; 00484aaf
    MOV dword ptr [EBX],EAX             ; 00484ab1
    JMP 0x004849c3                      ; 00484ab3
        ;   XREF to: 004849c3 (UNCONDITIONAL_JUMP)  ; LAB_004849c3
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 00484ab8
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_00484ab8
    MOV ESI,dword ptr [0x01c26418]      ; 00484abd | DAT_01c26418
    MOV EDX,EAX                         ; 00484ac3
    SUB EAX,ESI                         ; 00484ac5
    TEST EAX,EAX                        ; 00484ac7
    JL 0x00484b30                       ; 00484ac9
        ;   XREF to: 00484b30 (CONDITIONAL_JUMP)  ; LAB_00484b30
    MOV EDI,dword ptr [0x01c2641c]      ; 00484acb | DAT_01c2641c
        ;   Label: LAB_00484acb
    SUB EDI,EAX                         ; 00484ad1
    MOV dword ptr [0x01c26418],EDX      ; 00484ad3 | DAT_01c26418
    MOV dword ptr [0x01c2641c],EDI      ; 00484ad9 | DAT_01c2641c
    TEST EDI,EDI                        ; 00484adf
    JG 0x00484b15                       ; 00484ae1
        ;   XREF to: 00484b15 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x9999                      ; 00484ae3
    MOV EDX,dword ptr [EBX + 0x10]      ; 00484ae8
    MOV [0x01c2641c],EAX                ; 00484aeb | DAT_01c2641c
    TEST EDX,EDX                        ; 00484af0
    JZ 0x00484b34                       ; 00484af2
        ;   XREF to: 00484b34 (CONDITIONAL_JUMP)  ; LAB_00484b34
    MOV EAX,[0x01c2a37c]                ; 00484af4 | DAT_01c2a37c
    MOV EDX,dword ptr [0x01c26414]      ; 00484af9 | DAT_01c26414
        ;   Label: LAB_00484af9
    DEC EDX                             ; 00484aff
    CMP EDX,0x3                         ; 00484b00
    JA 0x00484b15                       ; 00484b03
        ;   XREF to: 00484b15 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4848e8]  ; 00484b05 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ESI,dword ptr [EBX]             ; 00484b0c
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0xc]       ; 00484b0e
    SUB ESI,EAX                         ; 00484b11
    MOV dword ptr [EBX],ESI             ; 00484b13
    MOV EDI,dword ptr [0x01c26424]      ; 00484b15 | DAT_01c26424
        ;   Label: default
    PUSH EDI                            ; 00484b1b
    MOV EBP,dword ptr [0x01c26420]      ; 00484b1c | DAT_01c26420
    PUSH EBP                            ; 00484b22
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 00484b23
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    ADD ESP,0x8                         ; 00484b28
    JMP 0x004849c3                      ; 00484b2b
        ;   XREF to: 004849c3 (UNCONDITIONAL_JUMP)  ; LAB_004849c3
    XOR EAX,EAX                         ; 00484b30
        ;   Label: LAB_00484b30
    JMP 0x00484acb                      ; 00484b32
        ;   XREF to: 00484acb (UNCONDITIONAL_JUMP)  ; LAB_00484acb
    MOV EAX,[0x01c2a380]                ; 00484b34 | DAT_01c2a380
        ;   Label: LAB_00484b34
    JMP 0x00484af9                      ; 00484b39
        ;   XREF to: 00484af9 (UNCONDITIONAL_JUMP)  ; LAB_00484af9
    MOV ECX,dword ptr [EBX]             ; 00484b3b
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0xc]       ; 00484b3d
    ADD ECX,EAX                         ; 00484b40
    MOV dword ptr [EBX],ECX             ; 00484b42
    JMP 0x00484b15                      ; 00484b44
        ;   XREF to: 00484b15 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00484b46
        ;   Label: caseD_3
    JGE 0x00484b56                      ; 00484b49
        ;   XREF to: 00484b56 (CONDITIONAL_JUMP)  ; LAB_00484b56
    MOV EDX,dword ptr [EBX]             ; 00484b4b
    MOV EAX,dword ptr [EBX + 0x8]       ; 00484b4d
    SUB EDX,EAX                         ; 00484b50
    MOV dword ptr [EBX],EDX             ; 00484b52
    JMP 0x00484b15                      ; 00484b54
        ;   XREF to: 00484b15 (UNCONDITIONAL_JUMP)  ; default
    MOV CL,byte ptr [0x01c2a384]        ; 00484b56 | DAT_01c2a384
        ;   Label: LAB_00484b56
    XOR EAX,EAX                         ; 00484b5c
    AND CL,0xfe                         ; 00484b5e
    MOV [0x01c26410],EAX                ; 00484b61 | DAT_01c26410
    MOV byte ptr [0x01c2a384],CL        ; 00484b66 | DAT_01c2a384
    JMP 0x00484b15                      ; 00484b6c
        ;   XREF to: 00484b15 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x30]      ; 00484b6e
        ;   Label: caseD_4
    JLE 0x00484b7e                      ; 00484b71
        ;   XREF to: 00484b7e (CONDITIONAL_JUMP)  ; LAB_00484b7e
    MOV EDI,dword ptr [EBX]             ; 00484b73
    MOV EAX,dword ptr [EBX + 0x8]       ; 00484b75
    ADD EDI,EAX                         ; 00484b78
    MOV dword ptr [EBX],EDI             ; 00484b7a
    JMP 0x00484b15                      ; 00484b7c
        ;   XREF to: 00484b15 (UNCONDITIONAL_JUMP)  ; default
    MOV DH,byte ptr [0x01c2a384]        ; 00484b7e | DAT_01c2a384
        ;   Label: LAB_00484b7e
    XOR ESI,ESI                         ; 00484b84
    AND DH,0xfe                         ; 00484b86
    MOV dword ptr [0x01c26410],ESI      ; 00484b89 | DAT_01c26410
    MOV byte ptr [0x01c2a384],DH        ; 00484b8f | DAT_01c2a384
    JMP 0x00484b15                      ; 00484b95
        ;   XREF to: 00484b15 (UNCONDITIONAL_JUMP)  ; default
    TEST EDX,EDX                        ; 00484b9a
        ;   Label: LAB_00484b9a
    JNZ 0x004849d5                      ; 00484b9c
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    TEST byte ptr [0x01c2a384],0x1      ; 00484ba2 | DAT_01c2a384
    JZ 0x004849d5                       ; 00484ba9
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,[0x01c2a37c]                ; 00484baf | DAT_01c2a37c
    CMP EAX,dword ptr [EBX + 0x14]      ; 00484bb4
    JL 0x004849d5                       ; 00484bb7
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,[0x01c2a380]                ; 00484bbd | DAT_01c2a380
    CMP EAX,dword ptr [EBX + 0x18]      ; 00484bc2
    JL 0x004849d5                       ; 00484bc5
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,[0x01c2a37c]                ; 00484bcb | DAT_01c2a37c
    CMP EAX,dword ptr [EBX + 0x1c]      ; 00484bd0
    JGE 0x004849d5                      ; 00484bd3
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,[0x01c2a380]                ; 00484bd9 | DAT_01c2a380
    CMP EAX,dword ptr [EBX + 0x20]      ; 00484bde
    JGE 0x004849d5                      ; 00484be1
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,[0x01c2a37c]                ; 00484be7 | DAT_01c2a37c
    MOV [0x01c26420],EAX                ; 00484bec | DAT_01c26420
    MOV EAX,[0x01c2a380]                ; 00484bf1 | DAT_01c2a380
    MOV [0x01c26424],EAX                ; 00484bf6 | DAT_01c26424
    MOV EAX,dword ptr [EBX]             ; 00484bfb
    MOV dword ptr [0x01c26410],EBX      ; 00484bfd | DAT_01c26410
    MOV [0x01c26428],EAX                ; 00484c03 | DAT_01c26428
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00484c08
    MOV ECX,dword ptr [EBX + 0x10]      ; 00484c0b
    MOV [0x01c2642c],EAX                ; 00484c0e | DAT_01c2642c
    TEST ECX,ECX                        ; 00484c13
    JZ 0x00484c57                       ; 00484c15
        ;   XREF to: 00484c57 (CONDITIONAL_JUMP)  ; LAB_00484c57
    MOV EAX,[0x01c2a37c]                ; 00484c17 | DAT_01c2a37c
    CMP EAX,dword ptr [EBX + 0x24]      ; 00484c1c
        ;   Label: LAB_00484c1c
    JGE 0x00484c5e                      ; 00484c1f
        ;   XREF to: 00484c5e (CONDITIONAL_JUMP)  ; LAB_00484c5e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00484c21
    MOV EBP,dword ptr [EBX]             ; 00484c24
    MOV EDI,0x1                         ; 00484c26
    SUB EBP,EAX                         ; 00484c2b
    MOV dword ptr [0x01c26414],EDI      ; 00484c2d | DAT_01c26414
    MOV dword ptr [EBX],EBP             ; 00484c33
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 00484c35
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_00484c35
    MOV [0x01c26418],EAX                ; 00484c3a | DAT_01c26418
    MOV EAX,0x48000                     ; 00484c3f
    PUSH EBX                            ; 00484c44
    MOV [0x01c2641c],EAX                ; 00484c45 | DAT_01c2641c
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900 ; 00484c4a
        ;   XREF to: 00484900 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00484c4f
    POP EBP                             ; 00484c52
    POP EDI                             ; 00484c53
    POP ESI                             ; 00484c54
    POP EBX                             ; 00484c55
    RET                                 ; 00484c56
    MOV EAX,[0x01c2a380]                ; 00484c57 | DAT_01c2a380
        ;   Label: LAB_00484c57
    JMP 0x00484c1c                      ; 00484c5c
        ;   XREF to: 00484c1c (UNCONDITIONAL_JUMP)  ; LAB_00484c1c
    CMP EAX,dword ptr [EBX + 0x28]      ; 00484c5e
        ;   Label: LAB_00484c5e
    JL 0x00484c79                       ; 00484c61
        ;   XREF to: 00484c79 (CONDITIONAL_JUMP)  ; LAB_00484c79
    MOV EAX,dword ptr [EBX + 0xc]       ; 00484c63
    MOV ESI,dword ptr [EBX]             ; 00484c66
    MOV ECX,0x2                         ; 00484c68
    ADD ESI,EAX                         ; 00484c6d
    MOV dword ptr [0x01c26414],ECX      ; 00484c6f | DAT_01c26414
    MOV dword ptr [EBX],ESI             ; 00484c75
    JMP 0x00484c35                      ; 00484c77
        ;   XREF to: 00484c35 (UNCONDITIONAL_JUMP)  ; LAB_00484c35
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00484c79
        ;   Label: LAB_00484c79
    JGE 0x00484c94                      ; 00484c7c
        ;   XREF to: 00484c94 (CONDITIONAL_JUMP)  ; LAB_00484c94
    MOV EAX,dword ptr [EBX + 0x8]       ; 00484c7e
    MOV EDX,dword ptr [EBX]             ; 00484c81
    MOV EBP,0x3                         ; 00484c83
    SUB EDX,EAX                         ; 00484c88
    MOV dword ptr [0x01c26414],EBP      ; 00484c8a | DAT_01c26414
    MOV dword ptr [EBX],EDX             ; 00484c90
    JMP 0x00484c35                      ; 00484c92
        ;   XREF to: 00484c35 (UNCONDITIONAL_JUMP)  ; LAB_00484c35
    CMP EAX,dword ptr [EBX + 0x30]      ; 00484c94
        ;   Label: LAB_00484c94
    JL 0x00484caf                       ; 00484c97
        ;   XREF to: 00484caf (CONDITIONAL_JUMP)  ; LAB_00484caf
    MOV EAX,dword ptr [EBX + 0x8]       ; 00484c99
    MOV EDI,dword ptr [EBX]             ; 00484c9c
    MOV ESI,0x4                         ; 00484c9e
    ADD EDI,EAX                         ; 00484ca3
    MOV dword ptr [0x01c26414],ESI      ; 00484ca5 | DAT_01c26414
    MOV dword ptr [EBX],EDI             ; 00484cab
    JMP 0x00484c35                      ; 00484cad
        ;   XREF to: 00484c35 (UNCONDITIONAL_JUMP)  ; LAB_00484c35
    XOR ECX,ECX                         ; 00484caf
        ;   Label: LAB_00484caf
    MOV dword ptr [0x01c26414],ECX      ; 00484cb1 | DAT_01c26414
    JMP 0x00484c35                      ; 00484cb7
        ;   XREF to: 00484c35 (UNCONDITIONAL_JUMP)  ; LAB_00484c35

