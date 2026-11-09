; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fldnotes_cpp_FUN_004a8f30(int param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a8ed0 at 004a8ee7
;   core_fldnotes.cpp_FUN_004a9950 at 004a9aab
;
; Referenced Globals:
;   TerminatedCString s_Incomplete_markup_tag_be_005c0e5a
;   TerminatedCString s_Markup_tag_beginning_wit_005c0e84
;   TerminatedCString s_Unexpected_found_near_s_005c0eb7
;   undefined4 DAT_006074b8
;   undefined4 DAT_01d0d010
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a91b0
;   core_fldnotes.cpp_FUN_004a9270
;   core_fldnotes.cpp_FUN_004a9300
;   core_fldnotes.cpp_FUN_004a9330
;   core_fldnotes.cpp_FUN_004a9770
;   core_fldnotes.cpp_FUN_004a97d0
;   crt_unknown.c_FUN_005a28c0
;   unkaddr_004a76f0.cpp_FUN_004a7890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8f30
        ;   Label: core_fldnotes.cpp_FUN_004a8f30
    PUSH ESI                            ; 004a8f31
    PUSH EDI                            ; 004a8f32
    PUSH EBP                            ; 004a8f33
    SUB ESP,0x304                       ; 004a8f34
    MOV EDI,dword ptr [ESP + 0x318]     ; 004a8f3a
    MOV EAX,dword ptr [EDI + 0x10]      ; 004a8f41
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004a8f44
    MOV dword ptr [ESP + 0x300],EAX     ; 004a8f4b
    CMP EAX,EAX                         ; 004a8f52
    JNZ 0x004a8fe6                      ; 004a8f54
        ;   XREF to: 004a8fe6 (CONDITIONAL_JUMP)  ; LAB_004a8fe6
    MOV AL,byte ptr [EBX]               ; 004a8f5a
        ;   Label: LAB_004a8f5a
    INC AL                              ; 004a8f5c
    AND EAX,0xff                        ; 004a8f5e
    MOV DL,byte ptr [EAX + 0x6074b8]    ; 004a8f63 | DAT_006074b8
    LEA ESI,[EBX + 0x1]                 ; 004a8f69
    TEST DL,0x2                         ; 004a8f6c
    JZ 0x004a8f75                       ; 004a8f6f
        ;   XREF to: 004a8f75 (CONDITIONAL_JUMP)  ; LAB_004a8f75
    MOV EBX,ESI                         ; 004a8f71
    JMP 0x004a8f5a                      ; 004a8f73
        ;   XREF to: 004a8f5a (UNCONDITIONAL_JUMP)  ; LAB_004a8f5a
    MOV DH,byte ptr [EBX]               ; 004a8f75
        ;   Label: LAB_004a8f75
    TEST DH,DH                          ; 004a8f77
    JZ 0x004a8fe6                       ; 004a8f79
        ;   XREF to: 004a8fe6 (CONDITIONAL_JUMP)  ; LAB_004a8fe6
    CMP DH,0x3c                         ; 004a8f7b
    JZ 0x004a8ffc                       ; 004a8f7e
        ;   XREF to: 004a8ffc (CONDITIONAL_JUMP)  ; LAB_004a8ffc
    CMP DH,0x3e                         ; 004a8f80
    JZ 0x004a90dd                       ; 004a8f83
        ;   XREF to: 004a90dd (CONDITIONAL_JUMP)  ; LAB_004a90dd
    MOV DL,byte ptr [EDI + 0x48]        ; 004a8f89
    XOR EAX,EAX                         ; 004a8f8c
    TEST DL,DL                          ; 004a8f8e
    JNZ 0x004a9107                      ; 004a8f90
        ;   XREF to: 004a9107 (CONDITIONAL_JUMP)  ; LAB_004a9107
    MOV ESI,EBX                         ; 004a8f96
        ;   Label: LAB_004a8f96
    MOV DL,byte ptr [ESI]               ; 004a8f98
        ;   Label: LAB_004a8f98
    INC DL                              ; 004a8f9a
    AND EDX,0xff                        ; 004a8f9c
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004a8fa2 | DAT_006074b8
    JZ 0x004a9116                       ; 004a8fa9
        ;   XREF to: 004a9116 (CONDITIONAL_JUMP)  ; LAB_004a9116
    XOR CH,CH                           ; 004a8faf
        ;   Label: LAB_004a8faf
    MOV byte ptr [ESP + EAX*0x1],CH     ; 004a8fb1
    MOV EAX,ESP                         ; 004a8fb4
    PUSH EAX                            ; 004a8fb6
    PUSH EDI                            ; 004a8fb7
    CALL core_fldnotes.cpp_FUN_004a9770 ; 004a8fb8
        ;   XREF to: 004a9770 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9770()
    ADD ESP,0x8                         ; 004a8fbd
    TEST EAX,EAX                        ; 004a8fc0
    JZ 0x004a913d                       ; 004a8fc2
        ;   XREF to: 004a913d (CONDITIONAL_JUMP)  ; LAB_004a913d
    MOV EAX,ESP                         ; 004a8fc8
    PUSH EAX                            ; 004a8fca
    PUSH EDI                            ; 004a8fcb
    MOV EBX,ESI                         ; 004a8fcc
    CALL core_fldnotes.cpp_FUN_004a97d0 ; 004a8fce
        ;   XREF to: 004a97d0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a97d0()
    ADD ESP,0x8                         ; 004a8fd3
    MOV EAX,dword ptr [ESP + 0x300]     ; 004a8fd6
        ;   Label: LAB_004a8fd6
    CMP EAX,dword ptr [EDI + 0x10]      ; 004a8fdd
    JZ 0x004a8f5a                       ; 004a8fe0
        ;   XREF to: 004a8f5a (CONDITIONAL_JUMP)  ; LAB_004a8f5a
    MOV EBP,dword ptr [ESP + 0x31c]     ; 004a8fe6
        ;   Label: LAB_004a8fe6
    MOV EAX,EBX                         ; 004a8fed
    SUB EAX,EBP                         ; 004a8fef
    ADD ESP,0x304                       ; 004a8ff1
    POP EBP                             ; 004a8ff7
    POP EDI                             ; 004a8ff8
    POP ESI                             ; 004a8ff9
    POP EBX                             ; 004a8ffa
    RET                                 ; 004a8ffb
    PUSH EDI                            ; 004a8ffc
        ;   Label: LAB_004a8ffc
    CALL core_fldnotes.cpp_FUN_004a91b0 ; 004a8ffd
        ;   XREF to: 004a91b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a91b0()
    MOV EBP,EBX                         ; 004a9002
    ADD ESP,0x4                         ; 004a9004
    MOV EBX,ESI                         ; 004a9007
    MOV CL,byte ptr [ESI]               ; 004a9009
    XOR EAX,EAX                         ; 004a900b
    CMP CL,0x3e                         ; 004a900d
    JZ 0x004a9034                       ; 004a9010
        ;   XREF to: 004a9034 (CONDITIONAL_JUMP)  ; LAB_004a9034
    CMP byte ptr [EBX],0x0              ; 004a9012
        ;   Label: LAB_004a9012
    JZ 0x004a9079                       ; 004a9015
        ;   XREF to: 004a9079 (CONDITIONAL_JUMP)  ; LAB_004a9079
    CMP EAX,0xff                        ; 004a9017
    JNC 0x004a90a3                      ; 004a901c
        ;   XREF to: 004a90a3 (CONDITIONAL_JUMP)  ; LAB_004a90a3
    MOV DL,byte ptr [EBX]               ; 004a9022
    INC EBX                             ; 004a9024
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DL ; 004a9025
    MOV DL,byte ptr [EBX]               ; 004a902c
    INC EAX                             ; 004a902e
    CMP DL,0x3e                         ; 004a902f
    JNZ 0x004a9012                      ; 004a9032
        ;   XREF to: 004a9012 (CONDITIONAL_JUMP)  ; LAB_004a9012
    XOR DH,DH                           ; 004a9034
        ;   Label: LAB_004a9034
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DH ; 004a9036
    LEA EAX,[ESP + 0x200]               ; 004a903d
    PUSH EAX                            ; 004a9044
    CALL unkaddr_004a76f0.cpp_FUN_004a7890 ; 004a9045
        ;   XREF to: 004a7890 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7890()
    ADD ESP,0x4                         ; 004a904a
    LEA EAX,[ESP + 0x200]               ; 004a904d
    PUSH EAX                            ; 004a9054
    PUSH EDI                            ; 004a9055
    INC EBX                             ; 004a9056
    CALL core_fldnotes.cpp_FUN_004a9330 ; 004a9057
        ;   XREF to: 004a9330 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9330()
    ADD ESP,0x8                         ; 004a905c
    TEST EAX,EAX                        ; 004a905f
    JL 0x004a90cd                       ; 004a9061
        ;   XREF to: 004a90cd (CONDITIONAL_JUMP)  ; LAB_004a90cd
    JNZ 0x004a8fd6                      ; 004a9063
        ;   XREF to: 004a8fd6 (CONDITIONAL_JUMP)  ; LAB_004a8fd6
    PUSH EDI                            ; 004a9069
    CALL core_fldnotes.cpp_FUN_004a9300 ; 004a906a
        ;   XREF to: 004a9300 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9300()
    MOV EBX,EBP                         ; 004a906f
    ADD ESP,0x4                         ; 004a9071
    JMP 0x004a8fd6                      ; 004a9074
        ;   XREF to: 004a8fd6 (UNCONDITIONAL_JUMP)  ; LAB_004a8fd6
    MOV EDI,dword ptr [ESP + 0x31c]     ; 004a9079
        ;   Label: LAB_004a9079
    PUSH EDI                            ; 004a9080
    PUSH 0x5c0e5a                       ; 004a9081 | = "Incomplete markup tag beginning with ..."
    PUSH 0x1d0d010                      ; 004a9086 | DAT_01d0d010
    CALL crt_unknown.c_FUN_005a28c0     ; 004a908b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0xffffffff                  ; 004a9090
    ADD ESP,0xc                         ; 004a9095
    ADD ESP,0x304                       ; 004a9098
    POP EBP                             ; 004a909e
    POP EDI                             ; 004a909f
    POP ESI                             ; 004a90a0
    POP EBX                             ; 004a90a1
    RET                                 ; 004a90a2
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004a90a3
        ;   Label: LAB_004a90a3
    PUSH ESI                            ; 004a90aa
    PUSH 0x5c0e84                       ; 004a90ab | = "Markup tag beginning with '%s' - tag ..."
    PUSH 0x1d0d010                      ; 004a90b0 | DAT_01d0d010
    CALL crt_unknown.c_FUN_005a28c0     ; 004a90b5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0xffffffff                  ; 004a90ba
    ADD ESP,0xc                         ; 004a90bf
    ADD ESP,0x304                       ; 004a90c2
    POP EBP                             ; 004a90c8
    POP EDI                             ; 004a90c9
    POP ESI                             ; 004a90ca
    POP EBX                             ; 004a90cb
    RET                                 ; 004a90cc
    MOV EAX,0xffffffff                  ; 004a90cd
        ;   Label: LAB_004a90cd
    ADD ESP,0x304                       ; 004a90d2
    POP EBP                             ; 004a90d8
    POP EDI                             ; 004a90d9
    POP ESI                             ; 004a90da
    POP EBX                             ; 004a90db
    RET                                 ; 004a90dc
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004a90dd
        ;   Label: LAB_004a90dd
    PUSH EBX                            ; 004a90e4
    PUSH 0x5c0eb7                       ; 004a90e5 | = "Unexpected '>' found near '%s'"
    PUSH 0x1d0d010                      ; 004a90ea | DAT_01d0d010
    CALL crt_unknown.c_FUN_005a28c0     ; 004a90ef
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0xffffffff                  ; 004a90f4
    ADD ESP,0xc                         ; 004a90f9
    ADD ESP,0x304                       ; 004a90fc
    POP EBP                             ; 004a9102
    POP EDI                             ; 004a9103
    POP ESI                             ; 004a9104
    POP EBX                             ; 004a9105
    RET                                 ; 004a9106
    MOV DH,0x20                         ; 004a9107
        ;   Label: LAB_004a9107
    MOV EAX,0x1                         ; 004a9109
    MOV byte ptr [ESP],DH               ; 004a910e
    JMP 0x004a8f96                      ; 004a9111
        ;   XREF to: 004a8f96 (UNCONDITIONAL_JUMP)  ; LAB_004a8f96
    MOV DL,byte ptr [ESI]               ; 004a9116
        ;   Label: LAB_004a9116
    TEST DL,DL                          ; 004a9118
    JZ 0x004a8faf                       ; 004a911a
        ;   XREF to: 004a8faf (CONDITIONAL_JUMP)  ; LAB_004a8faf
    CMP DL,0x3c                         ; 004a9120
    JZ 0x004a8faf                       ; 004a9123
        ;   XREF to: 004a8faf (CONDITIONAL_JUMP)  ; LAB_004a8faf
    CMP DL,0x3e                         ; 004a9129
    JZ 0x004a8faf                       ; 004a912c
        ;   XREF to: 004a8faf (CONDITIONAL_JUMP)  ; LAB_004a8faf
    INC EAX                             ; 004a9132
    INC ESI                             ; 004a9133
    MOV byte ptr [ESP + EAX*0x1 + -0x1],DL ; 004a9134
    JMP 0x004a8f98                      ; 004a9138
        ;   XREF to: 004a8f98 (UNCONDITIONAL_JUMP)  ; LAB_004a8f98
    PUSH EDI                            ; 004a913d
        ;   Label: LAB_004a913d
    CALL core_fldnotes.cpp_FUN_004a9270 ; 004a913e
        ;   XREF to: 004a9270 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9270()
    ADD ESP,0x4                         ; 004a9143
    JMP 0x004a8fd6                      ; 004a9146
        ;   XREF to: 004a8fd6 (UNCONDITIONAL_JUMP)  ; LAB_004a8fd6

