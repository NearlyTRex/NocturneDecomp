; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_0049a9b0(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_00626114
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   wincore_winrun.cpp_wasKeyPressed_FUN_005b2580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a9b0
        ;   Label: shape_edittool.cpp_CPickList_handleInput_FUN_0049a9b0
    PUSH ESI                            ; 0049a9b1
    PUSH EDI                            ; 0049a9b2
    PUSH EBP                            ; 0049a9b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049a9b4
    PUSH 0x1c                           ; 0049a9b8
    MOV EAX,[0x0061f2a4]                ; 0049a9ba | DAT_0061f2a4
    PUSH EAX                            ; 0049a9bf | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049a9c0 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049a9c2
    ADD ESP,0x8                         ; 0049a9c5
    TEST EAX,EAX                        ; 0049a9c8
    JZ 0x0049aa04                       ; 0049a9ca
        ;   XREF to: 0049aa04 (CONDITIONAL_JUMP)  ; LAB_0049aa04
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0049a9cc
    JNZ 0x0049a9df                      ; 0049a9d3
        ;   XREF to: 0049a9df (CONDITIONAL_JUMP)  ; LAB_0049a9df
    MOV EAX,0xffffffff                  ; 0049a9d5
        ;   Label: LAB_0049a9d5
    POP EBP                             ; 0049a9da
    POP EDI                             ; 0049a9db
    POP ESI                             ; 0049a9dc
    POP EBX                             ; 0049a9dd
    RET                                 ; 0049a9de
    MOV ECX,dword ptr [EBX + 0x194]     ; 0049a9df
        ;   Label: LAB_0049a9df
    PUSH ECX                            ; 0049a9e5
    PUSH EBX                            ; 0049a9e6
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100 ; 0049a9e7
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0049a9ec
    TEST EAX,EAX                        ; 0049a9ef
    JZ 0x0049aa04                       ; 0049a9f1
        ;   XREF to: 0049aa04 (CONDITIONAL_JUMP)  ; LAB_0049aa04
    MOV dword ptr [EBX + 0x188],0x1     ; 0049a9f3
    XOR EAX,EAX                         ; 0049a9fd
    POP EBP                             ; 0049a9ff
    POP EDI                             ; 0049aa00
    POP ESI                             ; 0049aa01
    POP EBX                             ; 0049aa02
    RET                                 ; 0049aa03
    PUSH 0x1                            ; 0049aa04
        ;   Label: LAB_0049aa04
    MOV EAX,[0x0061f2a4]                ; 0049aa06 | DAT_0061f2a4
    PUSH EAX                            ; 0049aa0b | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa0c | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049aa0e
    ADD ESP,0x8                         ; 0049aa11
    TEST EAX,EAX                        ; 0049aa14
    JNZ 0x0049a9d5                      ; 0049aa16
        ;   XREF to: 0049a9d5 (CONDITIONAL_JUMP)  ; LAB_0049a9d5
    PUSH 0x1d                           ; 0049aa18
    MOV EAX,[0x0061f2a4]                ; 0049aa1a | DAT_0061f2a4
    PUSH EAX                            ; 0049aa1f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa20 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0049aa22
    ADD ESP,0x8                         ; 0049aa24
    TEST EAX,EAX                        ; 0049aa27
    JZ 0x0049aa65                       ; 0049aa29
        ;   XREF to: 0049aa65 (CONDITIONAL_JUMP)  ; LAB_0049aa65
    PUSH 0x52                           ; 0049aa2b
    MOV EAX,[0x0061f2a4]                ; 0049aa2d | DAT_0061f2a4
    PUSH EAX                            ; 0049aa32 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa33 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049aa35
    ADD ESP,0x8                         ; 0049aa38
    TEST EAX,EAX                        ; 0049aa3b
    JZ 0x0049aa48                       ; 0049aa3d
        ;   XREF to: 0049aa48 (CONDITIONAL_JUMP)  ; LAB_0049aa48
    PUSH EBX                            ; 0049aa3f
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0 ; 0049aa40
        ;   XREF to: 00499ba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049aa45
    PUSH 0x2e                           ; 0049aa48
        ;   Label: LAB_0049aa48
    MOV EAX,[0x0061f2a4]                ; 0049aa4a | DAT_0061f2a4
    PUSH EAX                            ; 0049aa4f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa50 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049aa52
    ADD ESP,0x8                         ; 0049aa55
    TEST EAX,EAX                        ; 0049aa58
    JZ 0x0049aa65                       ; 0049aa5a
        ;   XREF to: 0049aa65 (CONDITIONAL_JUMP)  ; LAB_0049aa65
    PUSH EBX                            ; 0049aa5c
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0 ; 0049aa5d
        ;   XREF to: 00499ba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049aa62
    PUSH 0x2a                           ; 0049aa65
        ;   Label: LAB_0049aa65
    MOV EAX,[0x0061f2a4]                ; 0049aa67 | DAT_0061f2a4
    PUSH EAX                            ; 0049aa6c | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa6d | DAT_01d1bca0
    XOR ESI,ESI                         ; 0049aa6f
    CALL dword ptr [EDX]                ; 0049aa71
    ADD ESP,0x8                         ; 0049aa73
    TEST EAX,EAX                        ; 0049aa76
    JZ 0x0049ab86                       ; 0049aa78
        ;   XREF to: 0049ab86 (CONDITIONAL_JUMP)  ; LAB_0049ab86
    PUSH 0x2a                           ; 0049aa7e
        ;   Label: LAB_0049aa7e
    MOV EAX,[0x0061f2a4]                ; 0049aa80 | DAT_0061f2a4
    PUSH EAX                            ; 0049aa85 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aa86 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0049aa88
    ADD ESP,0x8                         ; 0049aa8a
    TEST EAX,EAX                        ; 0049aa8d
    JNZ 0x0049aba8                      ; 0049aa8f
        ;   XREF to: 0049aba8 (CONDITIONAL_JUMP)  ; LAB_0049aba8
    XOR EAX,EAX                         ; 0049aa95
        ;   Label: LAB_0049aa95
    XOR EDX,EDX                         ; 0049aa97
    MOV EDI,dword ptr [EBX + 0x3bc]     ; 0049aa99
        ;   Label: LAB_0049aa99
    ADD EDI,ESI                         ; 0049aa9f
    MOV dword ptr [EBX + 0x3bc],EDI     ; 0049aaa1
    CMP EDI,0x2                         ; 0049aaa7
    JL 0x0049abe8                       ; 0049aaaa
        ;   XREF to: 0049abe8 (CONDITIONAL_JUMP)  ; LAB_0049abe8
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0049aab0
    LEA ESI,[EBX + 0x124]               ; 0049aaba
        ;   Label: LAB_0049aaba
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 0049aac0
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_0049aac0
    TEST EAX,EAX                        ; 0049aac5
    JZ 0x0049ac48                       ; 0049aac7
        ;   XREF to: 0049ac48 (CONDITIONAL_JUMP)  ; LAB_0049ac48
    MOV EDI,dword ptr [0x0061f2a4]      ; 0049aacd | DAT_0061f2a4
    PUSH EDI                            ; 0049aad3 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270 ; 0049aad4
        ;   XREF to: 004fd270 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0049aad9
    MOV EDX,EAX                         ; 0049aadc
    CMP EAX,0x8                         ; 0049aade
    JNZ 0x0049aaea                      ; 0049aae1
        ;   XREF to: 0049aaea (CONDITIONAL_JUMP)  ; LAB_0049aaea
    MOV byte ptr [EBX + 0x124],0x0      ; 0049aae3
    CMP dword ptr [EBX + 0x1b4],0x0     ; 0049aaea
        ;   Label: LAB_0049aaea
    JNZ 0x0049aac0                      ; 0049aaf1
        ;   XREF to: 0049aac0 (CONDITIONAL_JUMP)  ; LAB_0049aac0
    MOV AL,DL                           ; 0049aaf3
    INC AL                              ; 0049aaf5
    AND EAX,0xff                        ; 0049aaf7
    TEST byte ptr [EAX + 0x626114],0xe0 ; 0049aafc | DAT_00626114
    JZ 0x0049ab27                       ; 0049ab03
        ;   XREF to: 0049ab27 (CONDITIONAL_JUMP)  ; LAB_0049ab27
    MOV EDI,ESI                         ; 0049ab05
    SUB ECX,ECX                         ; 0049ab07
    DEC ECX                             ; 0049ab09
    XOR EAX,EAX                         ; 0049ab0a
    SCASB.REPNE ES:EDI                  ; 0049ab0c
    NOT ECX                             ; 0049ab0e
    DEC ECX                             ; 0049ab10
    CMP ECX,0x63                        ; 0049ab11
    JNC 0x0049ab27                      ; 0049ab14
        ;   XREF to: 0049ab27 (CONDITIONAL_JUMP)  ; LAB_0049ab27
    LEA EAX,[EBX + ECX*0x1]             ; 0049ab16
    MOV byte ptr [EAX + 0x124],DL       ; 0049ab19
    MOV byte ptr [ECX + EBX*0x1 + 0x125],0x0 ; 0049ab1f
    CMP byte ptr [EBX + 0x124],0x0      ; 0049ab27
        ;   Label: LAB_0049ab27
    JZ 0x0049aac0                       ; 0049ab2e
        ;   XREF to: 0049aac0 (CONDITIONAL_JUMP)  ; LAB_0049aac0
    MOV EAX,dword ptr [EBX + 0x194]     ; 0049ab30
    PUSH EAX                            ; 0049ab36
    PUSH EBX                            ; 0049ab37
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0049ab38
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049ab3d
    PUSH EAX                            ; 0049ab40
    PUSH ESI                            ; 0049ab41
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0049ab42
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049ab47
    TEST EAX,EAX                        ; 0049ab4a
    JLE 0x0049ac39                      ; 0049ab4c
        ;   XREF to: 0049ac39 (CONDITIONAL_JUMP)  ; LAB_0049ac39
    MOV EDX,dword ptr [EBX]             ; 0049ab52
        ;   Label: LAB_0049ab52
    MOV EAX,dword ptr [EBX + 0x194]     ; 0049ab54
    CMP EAX,EDX                         ; 0049ab5a
    JGE 0x0049aac0                      ; 0049ab5c
        ;   XREF to: 0049aac0 (CONDITIONAL_JUMP)  ; LAB_0049aac0
    PUSH EAX                            ; 0049ab62
    PUSH EBX                            ; 0049ab63
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0049ab64
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049ab69
    PUSH EAX                            ; 0049ab6c
    PUSH ESI                            ; 0049ab6d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0049ab6e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049ab73
    TEST EAX,EAX                        ; 0049ab76
    JLE 0x0049aac0                      ; 0049ab78
        ;   XREF to: 0049aac0 (CONDITIONAL_JUMP)  ; LAB_0049aac0
    INC dword ptr [EBX + 0x194]         ; 0049ab7e
    JMP 0x0049ab52                      ; 0049ab84
        ;   XREF to: 0049ab52 (UNCONDITIONAL_JUMP)  ; LAB_0049ab52
    PUSH 0xf                            ; 0049ab86
        ;   Label: LAB_0049ab86
    MOV EAX,[0x0061f2a4]                ; 0049ab88 | DAT_0061f2a4
    PUSH EAX                            ; 0049ab8d | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ab8e | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ab90
    ADD ESP,0x8                         ; 0049ab93
    TEST EAX,EAX                        ; 0049ab96
    JZ 0x0049aa7e                       ; 0049ab98
        ;   XREF to: 0049aa7e (CONDITIONAL_JUMP)  ; LAB_0049aa7e
    MOV ESI,0x1                         ; 0049ab9e
    JMP 0x0049aa7e                      ; 0049aba3
        ;   XREF to: 0049aa7e (UNCONDITIONAL_JUMP)  ; LAB_0049aa7e
    PUSH 0xf                            ; 0049aba8
        ;   Label: LAB_0049aba8
    MOV EAX,[0x0061f2a4]                ; 0049abaa | DAT_0061f2a4
    PUSH EAX                            ; 0049abaf | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049abb0 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049abb2
    ADD ESP,0x8                         ; 0049abb5
    TEST EAX,EAX                        ; 0049abb8
    JZ 0x0049aa95                       ; 0049abba
        ;   XREF to: 0049aa95 (CONDITIONAL_JUMP)  ; LAB_0049aa95
    MOV ESI,0xffffffff                  ; 0049abc0
    JMP 0x0049aa95                      ; 0049abc5
        ;   XREF to: 0049aa95 (UNCONDITIONAL_JUMP)  ; LAB_0049aa95
    INC EAX                             ; 0049abca
        ;   Label: LAB_0049abca
    CMP EAX,0xa                         ; 0049abcb
    JL 0x0049aa99                       ; 0049abce
        ;   XREF to: 0049aa99 (CONDITIONAL_JUMP)  ; LAB_0049aa99
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 0049abd4
    JZ 0x0049aaba                       ; 0049abdb
        ;   XREF to: 0049aaba (CONDITIONAL_JUMP)  ; LAB_0049aaba
    XOR EAX,EAX                         ; 0049abe1
    POP EBP                             ; 0049abe3
    POP EDI                             ; 0049abe4
    POP ESI                             ; 0049abe5
    POP EBX                             ; 0049abe6
    RET                                 ; 0049abe7
    CMP EDI,-0x1                        ; 0049abe8
        ;   Label: LAB_0049abe8
    JGE 0x0049ac13                      ; 0049abeb
        ;   XREF to: 0049ac13 (CONDITIONAL_JUMP)  ; LAB_0049ac13
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0049abed
    CMP DL,byte ptr [EBX + 0xc0]        ; 0049abf7
        ;   Label: LAB_0049abf7
    JZ 0x0049abca                       ; 0049abfd
        ;   XREF to: 0049abca (CONDITIONAL_JUMP)  ; LAB_0049abca
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 0049abff
    JZ 0x0049aaba                       ; 0049ac06
        ;   XREF to: 0049aaba (CONDITIONAL_JUMP)  ; LAB_0049aaba
    XOR EAX,EAX                         ; 0049ac0c
    POP EBP                             ; 0049ac0e
    POP EDI                             ; 0049ac0f
    POP ESI                             ; 0049ac10
    POP EBX                             ; 0049ac11
    RET                                 ; 0049ac12
    CMP EDX,EDI                         ; 0049ac13
        ;   Label: LAB_0049ac13
    JNZ 0x0049ac1c                      ; 0049ac15
        ;   XREF to: 0049ac1c (CONDITIONAL_JUMP)  ; LAB_0049ac1c
    CMP DL,byte ptr [EBX + 0x5c]        ; 0049ac17
    JZ 0x0049abca                       ; 0049ac1a
        ;   XREF to: 0049abca (CONDITIONAL_JUMP)  ; LAB_0049abca
    CMP dword ptr [EBX + 0x3bc],0x1     ; 0049ac1c
        ;   Label: LAB_0049ac1c
    JZ 0x0049abf7                       ; 0049ac23
        ;   XREF to: 0049abf7 (CONDITIONAL_JUMP)  ; LAB_0049abf7
    CMP dword ptr [EBX + 0x3bc],-0x1    ; 0049ac25
    JZ 0x0049aaba                       ; 0049ac2c
        ;   XREF to: 0049aaba (CONDITIONAL_JUMP)  ; LAB_0049aaba
    XOR EAX,EAX                         ; 0049ac32
    POP EBP                             ; 0049ac34
    POP EDI                             ; 0049ac35
    POP ESI                             ; 0049ac36
    POP EBX                             ; 0049ac37
    RET                                 ; 0049ac38
    MOV dword ptr [EBX + 0x194],0x0     ; 0049ac39
        ;   Label: LAB_0049ac39
    JMP 0x0049ab52                      ; 0049ac43
        ;   XREF to: 0049ab52 (UNCONDITIONAL_JUMP)  ; LAB_0049ab52
    PUSH 0x48                           ; 0049ac48
        ;   Label: LAB_0049ac48
    MOV EAX,[0x0061f2a4]                ; 0049ac4a | DAT_0061f2a4
    PUSH EAX                            ; 0049ac4f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ac50 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ac52
    ADD ESP,0x8                         ; 0049ac55
    TEST EAX,EAX                        ; 0049ac58
    JZ 0x0049ac70                       ; 0049ac5a
        ;   XREF to: 0049ac70 (CONDITIONAL_JUMP)  ; LAB_0049ac70
    MOV EDX,dword ptr [EBX + 0x194]     ; 0049ac5c
    MOV byte ptr [EBX + 0x124],0x0      ; 0049ac62
    DEC EDX                             ; 0049ac69
    MOV dword ptr [EBX + 0x194],EDX     ; 0049ac6a
    PUSH 0x50                           ; 0049ac70
        ;   Label: LAB_0049ac70
    MOV EAX,[0x0061f2a4]                ; 0049ac72 | DAT_0061f2a4
    PUSH EAX                            ; 0049ac77 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ac78 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ac7a
    ADD ESP,0x8                         ; 0049ac7d
    TEST EAX,EAX                        ; 0049ac80
    JZ 0x0049ac98                       ; 0049ac82
        ;   XREF to: 0049ac98 (CONDITIONAL_JUMP)  ; LAB_0049ac98
    MOV ECX,dword ptr [EBX + 0x194]     ; 0049ac84
    MOV byte ptr [EBX + 0x124],0x0      ; 0049ac8a
    INC ECX                             ; 0049ac91
    MOV dword ptr [EBX + 0x194],ECX     ; 0049ac92
    PUSH 0x47                           ; 0049ac98
        ;   Label: LAB_0049ac98
    MOV EAX,[0x0061f2a4]                ; 0049ac9a | DAT_0061f2a4
    PUSH EAX                            ; 0049ac9f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049aca0 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049aca2
    ADD ESP,0x8                         ; 0049aca5
    TEST EAX,EAX                        ; 0049aca8
    JZ 0x0049acbd                       ; 0049acaa
        ;   XREF to: 0049acbd (CONDITIONAL_JUMP)  ; LAB_0049acbd
    MOV byte ptr [EBX + 0x124],0x0      ; 0049acac
    MOV dword ptr [EBX + 0x194],0x0     ; 0049acb3
    PUSH 0x4f                           ; 0049acbd
        ;   Label: LAB_0049acbd
    MOV EAX,[0x0061f2a4]                ; 0049acbf | DAT_0061f2a4
    PUSH EAX                            ; 0049acc4 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049acc5 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049acc7
    ADD ESP,0x8                         ; 0049acca
    TEST EAX,EAX                        ; 0049accd
    JZ 0x0049ace0                       ; 0049accf
        ;   XREF to: 0049ace0 (CONDITIONAL_JUMP)  ; LAB_0049ace0
    MOV EAX,dword ptr [EBX]             ; 0049acd1
    MOV byte ptr [EBX + 0x124],0x0      ; 0049acd3
    MOV dword ptr [EBX + 0x194],EAX     ; 0049acda
    PUSH 0x49                           ; 0049ace0
        ;   Label: LAB_0049ace0
    MOV EAX,[0x0061f2a4]                ; 0049ace2 | DAT_0061f2a4
    PUSH EAX                            ; 0049ace7 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ace8 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049acea
    ADD ESP,0x8                         ; 0049aced
    TEST EAX,EAX                        ; 0049acf0
    JZ 0x0049ad23                       ; 0049acf2
        ;   XREF to: 0049ad23 (CONDITIONAL_JUMP)  ; LAB_0049ad23
    MOV ESI,dword ptr [EBX + 0x194]     ; 0049acf4
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0049acfa
    MOV EDI,dword ptr [EBX + 0x198]     ; 0049ad00
    MOV byte ptr [EBX + 0x124],0x0      ; 0049ad06
    SUB ESI,EAX                         ; 0049ad0d
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0049ad0f
    MOV dword ptr [EBX + 0x194],ESI     ; 0049ad15
    SUB EDI,EAX                         ; 0049ad1b
    MOV dword ptr [EBX + 0x198],EDI     ; 0049ad1d
    PUSH 0x51                           ; 0049ad23
        ;   Label: LAB_0049ad23
    MOV EAX,[0x0061f2a4]                ; 0049ad25 | DAT_0061f2a4
    PUSH EAX                            ; 0049ad2a | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ad2b | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ad2d
    ADD ESP,0x8                         ; 0049ad30
    TEST EAX,EAX                        ; 0049ad33
    JZ 0x0049ad66                       ; 0049ad35
        ;   XREF to: 0049ad66 (CONDITIONAL_JUMP)  ; LAB_0049ad66
    MOV EBP,dword ptr [EBX + 0x194]     ; 0049ad37
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0049ad3d
    MOV EDX,dword ptr [EBX + 0x198]     ; 0049ad43
    MOV byte ptr [EBX + 0x124],0x0      ; 0049ad49
    ADD EBP,EAX                         ; 0049ad50
    MOV EAX,dword ptr [EBX + 0x19c]     ; 0049ad52
    MOV dword ptr [EBX + 0x194],EBP     ; 0049ad58
    ADD EDX,EAX                         ; 0049ad5e
    MOV dword ptr [EBX + 0x198],EDX     ; 0049ad60
    PUSH 0x4b                           ; 0049ad66
        ;   Label: LAB_0049ad66
    MOV EAX,[0x0061f2a4]                ; 0049ad68 | DAT_0061f2a4
    PUSH EAX                            ; 0049ad6d | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ad6e | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ad70
    ADD ESP,0x8                         ; 0049ad73
    TEST EAX,EAX                        ; 0049ad76
    JZ 0x0049ad95                       ; 0049ad78
        ;   XREF to: 0049ad95 (CONDITIONAL_JUMP)  ; LAB_0049ad95
    MOV ECX,dword ptr [EBX + 0x194]     ; 0049ad7a
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0049ad80
    MOV byte ptr [EBX + 0x124],0x0      ; 0049ad86
    SUB ECX,EAX                         ; 0049ad8d
    MOV dword ptr [EBX + 0x194],ECX     ; 0049ad8f
    PUSH 0x4d                           ; 0049ad95
        ;   Label: LAB_0049ad95
    MOV EAX,[0x0061f2a4]                ; 0049ad97 | DAT_0061f2a4
    PUSH EAX                            ; 0049ad9c | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0049ad9d | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0049ad9f
    ADD ESP,0x8                         ; 0049ada2
    TEST EAX,EAX                        ; 0049ada5
    JZ 0x0049adc4                       ; 0049ada7
        ;   XREF to: 0049adc4 (CONDITIONAL_JUMP)  ; LAB_0049adc4
    MOV ESI,dword ptr [EBX + 0x194]     ; 0049ada9
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0049adaf
    MOV byte ptr [EBX + 0x124],0x0      ; 0049adb5
    ADD ESI,EAX                         ; 0049adbc
    MOV dword ptr [EBX + 0x194],ESI     ; 0049adbe
    XOR EAX,EAX                         ; 0049adc4
        ;   Label: LAB_0049adc4
    POP EBP                             ; 0049adc6
    POP EDI                             ; 0049adc7
    POP ESI                             ; 0049adc8
    POP EBX                             ; 0049adc9
    RET                                 ; 0049adca

