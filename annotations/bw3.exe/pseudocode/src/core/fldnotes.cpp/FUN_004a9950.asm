; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a9950(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a9d90 at 004a9dbb
;
; Referenced Globals:
;   TerminatedCString s_image_box_32_32_005c102a
;   TerminatedCString s_image_check_32_32_005c103c
;   undefined4 DAT_005c1050
;   TerminatedCString s_cont_005c1055
;   TerminatedCString s_ul_br_005c105d
;   TerminatedCString s_ERROR_item_won_t_fit_br_005c1067
;   undefined4 DAT_01d0d008
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a8ed0
;   core_fldnotes.cpp_FUN_004a8f30
;   core_fldnotes.cpp_FUN_004aa6d0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9950
        ;   Label: core_fldnotes.cpp_FUN_004a9950
    PUSH ESI                            ; 004a9951
    PUSH EDI                            ; 004a9952
    PUSH EBP                            ; 004a9953
    SUB ESP,0xc                         ; 004a9954
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a9957
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a995b
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a995f
    MOV EDX,dword ptr [0x01d0d008]      ; 004a9962 | DAT_01d0d008
    MOV dword ptr [ESI + 0x144],EAX     ; 004a9968
    TEST EDX,EDX                        ; 004a996e
    JZ 0x004a99df                       ; 004a9970
        ;   XREF to: 004a99df (CONDITIONAL_JUMP)  ; LAB_004a99df
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a9972
        ;   Label: LAB_004a9972
    MOV EBP,dword ptr [EAX + 0x140]     ; 004a9976
    CMP EBP,0x3                         ; 004a997c
    JZ 0x004a9a04                       ; 004a997f
        ;   XREF to: 004a9a04 (CONDITIONAL_JUMP)  ; LAB_004a9a04
    CMP EBP,0x4                         ; 004a9985
    JZ 0x004a9a22                       ; 004a9988
        ;   XREF to: 004a9a22 (CONDITIONAL_JUMP)  ; LAB_004a9a22
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a998e
        ;   Label: LAB_004a998e
    MOV ECX,dword ptr [EAX + 0x158]     ; 004a9992
    TEST ECX,ECX                        ; 004a9998
    JGE 0x004a9a40                      ; 004a999a
        ;   XREF to: 004a9a40 (CONDITIONAL_JUMP)  ; LAB_004a9a40
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a99a0
        ;   Label: LAB_004a99a0
    ADD EAX,0x40                        ; 004a99a4
    MOV EBP,0xffffffff                  ; 004a99a7
    MOV dword ptr [ESP],EAX             ; 004a99ac
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a99af
    XOR ESI,ESI                         ; 004a99b3
    ADD EAX,0x148                       ; 004a99b5
    MOV dword ptr [ESP + 0x8],ESI       ; 004a99ba
    MOV dword ptr [ESP + 0x4],EAX       ; 004a99be
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a99c2
        ;   Label: LAB_004a99c2
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a99c6
    CMP EDI,dword ptr [EAX]             ; 004a99ca
    JL 0x004a9a75                       ; 004a99cc
        ;   XREF to: 004a9a75 (CONDITIONAL_JUMP)  ; LAB_004a9a75
    MOV EAX,0x1                         ; 004a99d2
        ;   Label: LAB_004a99d2
    ADD ESP,0xc                         ; 004a99d7
        ;   Label: LAB_004a99d7
    POP EBP                             ; 004a99da
    POP EDI                             ; 004a99db
    POP ESI                             ; 004a99dc
    POP EBX                             ; 004a99dd
    RET                                 ; 004a99de
    MOV ECX,dword ptr [ESI + 0x140]     ; 004a99df
        ;   Label: LAB_004a99df
    TEST ECX,ECX                        ; 004a99e5
    JZ 0x004a99d2                       ; 004a99e7
        ;   XREF to: 004a99d2 (CONDITIONAL_JUMP)  ; LAB_004a99d2
    CMP ECX,0x2                         ; 004a99e9
    JZ 0x004a99d2                       ; 004a99ec
        ;   XREF to: 004a99d2 (CONDITIONAL_JUMP)  ; LAB_004a99d2
    CMP ECX,0x5                         ; 004a99ee
    JNZ 0x004a9972                      ; 004a99f1
        ;   XREF to: 004a9972 (CONDITIONAL_JUMP)  ; LAB_004a9972
    MOV EAX,0x1                         ; 004a99f7
    ADD ESP,0xc                         ; 004a99fc
    POP EBP                             ; 004a99ff
    POP EDI                             ; 004a9a00
    POP ESI                             ; 004a9a01
    POP EBX                             ; 004a9a02
    RET                                 ; 004a9a03
    PUSH 0x5c102a                       ; 004a9a04 | = "<image box 32 32>"
        ;   Label: LAB_004a9a04
    PUSH EBX                            ; 004a9a09
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9a0a
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9a0f
    TEST EAX,EAX                        ; 004a9a12
    JNZ 0x004a998e                      ; 004a9a14
        ;   XREF to: 004a998e (CONDITIONAL_JUMP)  ; LAB_004a998e
    ADD ESP,0xc                         ; 004a9a1a
    POP EBP                             ; 004a9a1d
    POP EDI                             ; 004a9a1e
    POP ESI                             ; 004a9a1f
    POP EBX                             ; 004a9a20
    RET                                 ; 004a9a21
    PUSH 0x5c103c                       ; 004a9a22 | = "<image check 32 32>"
        ;   Label: LAB_004a9a22
    PUSH EBX                            ; 004a9a27
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9a28
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9a2d
    TEST EAX,EAX                        ; 004a9a30
    JNZ 0x004a998e                      ; 004a9a32
        ;   XREF to: 004a998e (CONDITIONAL_JUMP)  ; LAB_004a998e
    ADD ESP,0xc                         ; 004a9a38
    POP EBP                             ; 004a9a3b
    POP EDI                             ; 004a9a3c
    POP ESI                             ; 004a9a3d
    POP EBX                             ; 004a9a3e
    RET                                 ; 004a9a3f
    MOV EAX,ECX                         ; 004a9a40
        ;   Label: LAB_004a9a40
    SHL EAX,0x5                         ; 004a9a42
    ADD EAX,ECX                         ; 004a9a45
    SHL EAX,0x2                         ; 004a9a47
    SUB EAX,ECX                         ; 004a9a4a
    SHL EAX,0x2                         ; 004a9a4c
    MOV ESI,EAX                         ; 004a9a4f
    SHL EAX,0x3                         ; 004a9a51
    ADD EAX,ESI                         ; 004a9a54
    PUSH EBX                            ; 004a9a56
    ADD EAX,0x1d0e370                   ; 004a9a57
    PUSH EAX                            ; 004a9a5c
    CALL core_fldnotes.cpp_FUN_004aa6d0 ; 004a9a5d
        ;   XREF to: 004aa6d0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004aa6d0()
    ADD ESP,0x8                         ; 004a9a62
    TEST EAX,EAX                        ; 004a9a65
    JNZ 0x004a99a0                      ; 004a9a67
        ;   XREF to: 004a99a0 (CONDITIONAL_JUMP)  ; LAB_004a99a0
    ADD ESP,0xc                         ; 004a9a6d
    POP EBP                             ; 004a9a70
    POP EDI                             ; 004a9a71
    POP ESI                             ; 004a9a72
    POP EBX                             ; 004a9a73
    RET                                 ; 004a9a74
    PUSH EDI                            ; 004a9a75
        ;   Label: LAB_004a9a75
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9a76
    PUSH EDX                            ; 004a9a7a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 004a9a7b
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    XOR EDI,EDI                         ; 004a9a80
    ADD ESP,0x8                         ; 004a9a82
    MOV DL,byte ptr [EAX]               ; 004a9a85
    MOV ESI,EAX                         ; 004a9a87
    TEST DL,DL                          ; 004a9a89
    JZ 0x004a9b5c                       ; 004a9a8b
        ;   XREF to: 004a9b5c (CONDITIONAL_JUMP)  ; LAB_004a9b5c
    CMP EBP,dword ptr [EBX + 0x10]      ; 004a9a91
        ;   Label: LAB_004a9a91
    JZ 0x004a9aa9                       ; 004a9a94
        ;   XREF to: 004a9aa9 (CONDITIONAL_JUMP)  ; LAB_004a9aa9
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a9a96
    MOV CL,byte ptr [EAX + 0x40]        ; 004a9a9a
    TEST CL,CL                          ; 004a9a9d
    JZ 0x004a9aa6                       ; 004a9a9f
        ;   XREF to: 004a9aa6 (CONDITIONAL_JUMP)  ; LAB_004a9aa6
    CMP CL,0x2a                         ; 004a9aa1
    JNZ 0x004a9acd                      ; 004a9aa4
        ;   XREF to: 004a9acd (CONDITIONAL_JUMP)  ; LAB_004a9acd
    MOV EBP,dword ptr [EBX + 0x10]      ; 004a9aa6
        ;   Label: LAB_004a9aa6
    PUSH ESI                            ; 004a9aa9
        ;   Label: LAB_004a9aa9
    PUSH EBX                            ; 004a9aaa
    CALL core_fldnotes.cpp_FUN_004a8f30 ; 004a9aab
        ;   XREF to: 004a8f30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8f30()
    ADD ESP,0x8                         ; 004a9ab0
    TEST EAX,EAX                        ; 004a9ab3
    JL 0x004a9b3a                       ; 004a9ab5
        ;   XREF to: 004a9b3a (CONDITIONAL_JUMP)  ; LAB_004a9b3a
    JLE 0x004a9b44                      ; 004a9abb
        ;   XREF to: 004a9b44 (CONDITIONAL_JUMP)  ; LAB_004a9b44
    ADD ESI,EAX                         ; 004a9ac1
    CMP byte ptr [ESI],0x0              ; 004a9ac3
        ;   Label: LAB_004a9ac3
    JNZ 0x004a9a91                      ; 004a9ac6
        ;   XREF to: 004a9a91 (CONDITIONAL_JUMP)  ; LAB_004a9a91
    JMP 0x004a9b5c                      ; 004a9ac8
        ;   XREF to: 004a9b5c (UNCONDITIONAL_JUMP)  ; LAB_004a9b5c
    PUSH 0x5c1050                       ; 004a9acd | DAT_005c1050
        ;   Label: LAB_004a9acd
    PUSH EBX                            ; 004a9ad2
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9ad3
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9ad8
    TEST EAX,EAX                        ; 004a9adb
    JZ 0x004a99d7                       ; 004a9add
        ;   XREF to: 004a99d7 (CONDITIONAL_JUMP)  ; LAB_004a99d7
    MOV EAX,dword ptr [ESP]             ; 004a9ae3
    PUSH EAX                            ; 004a9ae6
    PUSH EBX                            ; 004a9ae7
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9ae8
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9aed
    TEST EAX,EAX                        ; 004a9af0
    JZ 0x004a99d7                       ; 004a9af2
        ;   XREF to: 004a99d7 (CONDITIONAL_JUMP)  ; LAB_004a99d7
    CMP EBP,-0x1                        ; 004a9af8
    JZ 0x004a9b1c                       ; 004a9afb
        ;   XREF to: 004a9b1c (CONDITIONAL_JUMP)  ; LAB_004a9b1c
    PUSH 0x5c1055                       ; 004a9afd | = "(cont.)"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004a9b02
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004a9b07
    PUSH EAX                            ; 004a9b0a
    PUSH EBX                            ; 004a9b0b
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9b0c
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9b11
    TEST EAX,EAX                        ; 004a9b14
    JZ 0x004a99d7                       ; 004a9b16
        ;   XREF to: 004a99d7 (CONDITIONAL_JUMP)  ; LAB_004a99d7
    PUSH 0x5c105d                       ; 004a9b1c | = "</ul><br>"
        ;   Label: LAB_004a9b1c
    PUSH EBX                            ; 004a9b21
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9b22
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9b27
    TEST EAX,EAX                        ; 004a9b2a
    JNZ 0x004a9aa6                      ; 004a9b2c
        ;   XREF to: 004a9aa6 (CONDITIONAL_JUMP)  ; LAB_004a9aa6
    ADD ESP,0xc                         ; 004a9b32
    POP EBP                             ; 004a9b35
    POP EDI                             ; 004a9b36
    POP ESI                             ; 004a9b37
    POP EBX                             ; 004a9b38
    RET                                 ; 004a9b39
    XOR EAX,EAX                         ; 004a9b3a
        ;   Label: LAB_004a9b3a
    ADD ESP,0xc                         ; 004a9b3c
    POP EBP                             ; 004a9b3f
    POP EDI                             ; 004a9b40
    POP ESI                             ; 004a9b41
    POP EBX                             ; 004a9b42
    RET                                 ; 004a9b43
    INC EDI                             ; 004a9b44
        ;   Label: LAB_004a9b44
    CMP EDI,0x1                         ; 004a9b45
    JLE 0x004a9ac3                      ; 004a9b48
        ;   XREF to: 004a9ac3 (CONDITIONAL_JUMP)  ; LAB_004a9ac3
    PUSH 0x5c1067                       ; 004a9b4e | = "ERROR: item won't fit<br>"
    PUSH EBX                            ; 004a9b53
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9b54
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9b59
    INC dword ptr [ESP + 0x8]           ; 004a9b5c
        ;   Label: LAB_004a9b5c
    JMP 0x004a99c2                      ; 004a9b60
        ;   XREF to: 004a99c2 (UNCONDITIONAL_JUMP)  ; LAB_004a99c2

