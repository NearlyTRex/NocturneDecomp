; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fldnotes_cpp_FUN_004a28b0(int param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fldnotes.cpp_FUN_004a32e0 at 004a3395
;   core_fldnotes.cpp_FUN_004a3740 at 004a378b
;   core_fldnotes.cpp_FUN_004a4070 at 004a40dd
;
; Referenced Globals:
;   TerminatedCString s_Incomplete_markup_tag_be_005d5af2
;   TerminatedCString s_Markup_tag_beginning_wit_005d5b1c
;   TerminatedCString s_Unexpected_found_near_s_005d5b4f
;   undefined4 DAT_0061ed94
;   undefined4 DAT_01cab7f0
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a2b30
;   core_fldnotes.cpp_FUN_004a2bf0
;   core_fldnotes.cpp_FUN_004a2c90
;   core_fldnotes.cpp_FUN_004a2cc0
;   core_fldnotes.cpp_FUN_004a3100
;   core_fldnotes.cpp_FUN_004a3160
;   crt_unknown.c_FUN_005b7790
;   unkaddr_004a1200.cpp_FUN_004a1390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a28b0
        ;   Label: core_fldnotes.cpp_FUN_004a28b0
    PUSH ESI                            ; 004a28b1
    PUSH EDI                            ; 004a28b2
    PUSH EBP                            ; 004a28b3
    SUB ESP,0x304                       ; 004a28b4
    MOV EDI,dword ptr [ESP + 0x318]     ; 004a28ba
    MOV EAX,dword ptr [EDI + 0x10]      ; 004a28c1
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004a28c4
    MOV dword ptr [ESP + 0x300],EAX     ; 004a28cb
    CMP EAX,EAX                         ; 004a28d2
    JNZ 0x004a2966                      ; 004a28d4
        ;   XREF to: 004a2966 (CONDITIONAL_JUMP)  ; LAB_004a2966
    MOV AL,byte ptr [EBX]               ; 004a28da
        ;   Label: LAB_004a28da
    INC AL                              ; 004a28dc
    AND EAX,0xff                        ; 004a28de
    MOV DL,byte ptr [EAX + 0x61ed94]    ; 004a28e3 | DAT_0061ed94
    LEA ESI,[EBX + 0x1]                 ; 004a28e9
    TEST DL,0x2                         ; 004a28ec
    JZ 0x004a28f5                       ; 004a28ef
        ;   XREF to: 004a28f5 (CONDITIONAL_JUMP)  ; LAB_004a28f5
    MOV EBX,ESI                         ; 004a28f1
    JMP 0x004a28da                      ; 004a28f3
        ;   XREF to: 004a28da (UNCONDITIONAL_JUMP)  ; LAB_004a28da
    MOV DH,byte ptr [EBX]               ; 004a28f5
        ;   Label: LAB_004a28f5
    TEST DH,DH                          ; 004a28f7
    JZ 0x004a2966                       ; 004a28f9
        ;   XREF to: 004a2966 (CONDITIONAL_JUMP)  ; LAB_004a2966
    CMP DH,0x3c                         ; 004a28fb
    JZ 0x004a297c                       ; 004a28fe
        ;   XREF to: 004a297c (CONDITIONAL_JUMP)  ; LAB_004a297c
    CMP DH,0x3e                         ; 004a2900
    JZ 0x004a2a5d                       ; 004a2903
        ;   XREF to: 004a2a5d (CONDITIONAL_JUMP)  ; LAB_004a2a5d
    MOV DL,byte ptr [EDI + 0x48]        ; 004a2909
    XOR EAX,EAX                         ; 004a290c
    TEST DL,DL                          ; 004a290e
    JNZ 0x004a2a87                      ; 004a2910
        ;   XREF to: 004a2a87 (CONDITIONAL_JUMP)  ; LAB_004a2a87
    MOV ESI,EBX                         ; 004a2916
        ;   Label: LAB_004a2916
    MOV DL,byte ptr [ESI]               ; 004a2918
        ;   Label: LAB_004a2918
    INC DL                              ; 004a291a
    AND EDX,0xff                        ; 004a291c
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 004a2922 | DAT_0061ed94
    JZ 0x004a2a96                       ; 004a2929
        ;   XREF to: 004a2a96 (CONDITIONAL_JUMP)  ; LAB_004a2a96
    XOR CH,CH                           ; 004a292f
        ;   Label: LAB_004a292f
    MOV byte ptr [ESP + EAX*0x1],CH     ; 004a2931
    MOV EAX,ESP                         ; 004a2934
    PUSH EAX                            ; 004a2936
    PUSH EDI                            ; 004a2937
    CALL core_fldnotes.cpp_FUN_004a3100 ; 004a2938
        ;   XREF to: 004a3100 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3100()
    ADD ESP,0x8                         ; 004a293d
    TEST EAX,EAX                        ; 004a2940
    JZ 0x004a2abd                       ; 004a2942
        ;   XREF to: 004a2abd (CONDITIONAL_JUMP)  ; LAB_004a2abd
    MOV EAX,ESP                         ; 004a2948
    PUSH EAX                            ; 004a294a
    PUSH EDI                            ; 004a294b
    MOV EBX,ESI                         ; 004a294c
    CALL core_fldnotes.cpp_FUN_004a3160 ; 004a294e
        ;   XREF to: 004a3160 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3160()
    ADD ESP,0x8                         ; 004a2953
    MOV EAX,dword ptr [ESP + 0x300]     ; 004a2956
        ;   Label: LAB_004a2956
    CMP EAX,dword ptr [EDI + 0x10]      ; 004a295d
    JZ 0x004a28da                       ; 004a2960
        ;   XREF to: 004a28da (CONDITIONAL_JUMP)  ; LAB_004a28da
    MOV EBP,dword ptr [ESP + 0x31c]     ; 004a2966
        ;   Label: LAB_004a2966
    MOV EAX,EBX                         ; 004a296d
    SUB EAX,EBP                         ; 004a296f
    ADD ESP,0x304                       ; 004a2971
    POP EBP                             ; 004a2977
        ;   Label: LAB_004a2977
    POP EDI                             ; 004a2978
    POP ESI                             ; 004a2979
    POP EBX                             ; 004a297a
    RET                                 ; 004a297b
    PUSH EDI                            ; 004a297c
        ;   Label: LAB_004a297c
    CALL core_fldnotes.cpp_FUN_004a2b30 ; 004a297d
        ;   XREF to: 004a2b30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2b30()
    MOV EBP,EBX                         ; 004a2982
    ADD ESP,0x4                         ; 004a2984
    MOV EBX,ESI                         ; 004a2987
    MOV CL,byte ptr [ESI]               ; 004a2989
    XOR EAX,EAX                         ; 004a298b
    CMP CL,0x3e                         ; 004a298d
    JZ 0x004a29b4                       ; 004a2990
        ;   XREF to: 004a29b4 (CONDITIONAL_JUMP)  ; LAB_004a29b4
    CMP byte ptr [EBX],0x0              ; 004a2992
        ;   Label: LAB_004a2992
    JZ 0x004a29f9                       ; 004a2995
        ;   XREF to: 004a29f9 (CONDITIONAL_JUMP)  ; LAB_004a29f9
    CMP EAX,0xff                        ; 004a2997
    JNC 0x004a2a23                      ; 004a299c
        ;   XREF to: 004a2a23 (CONDITIONAL_JUMP)  ; LAB_004a2a23
    MOV DL,byte ptr [EBX]               ; 004a29a2
    INC EBX                             ; 004a29a4
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DL ; 004a29a5
    MOV DL,byte ptr [EBX]               ; 004a29ac
    INC EAX                             ; 004a29ae
    CMP DL,0x3e                         ; 004a29af
    JNZ 0x004a2992                      ; 004a29b2
        ;   XREF to: 004a2992 (CONDITIONAL_JUMP)  ; LAB_004a2992
    XOR DH,DH                           ; 004a29b4
        ;   Label: LAB_004a29b4
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DH ; 004a29b6
    LEA EAX,[ESP + 0x200]               ; 004a29bd
    PUSH EAX                            ; 004a29c4
    CALL unkaddr_004a1200.cpp_FUN_004a1390 ; 004a29c5
        ;   XREF to: 004a1390 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a1200.cpp_FUN_004a1390()
    ADD ESP,0x4                         ; 004a29ca
    LEA EAX,[ESP + 0x200]               ; 004a29cd
    PUSH EAX                            ; 004a29d4
    PUSH EDI                            ; 004a29d5
    INC EBX                             ; 004a29d6
    CALL core_fldnotes.cpp_FUN_004a2cc0 ; 004a29d7
        ;   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2cc0()
    ADD ESP,0x8                         ; 004a29dc
    TEST EAX,EAX                        ; 004a29df
    JL 0x004a2a4d                       ; 004a29e1
        ;   XREF to: 004a2a4d (CONDITIONAL_JUMP)  ; LAB_004a2a4d
    JNZ 0x004a2956                      ; 004a29e3
        ;   XREF to: 004a2956 (CONDITIONAL_JUMP)  ; LAB_004a2956
    PUSH EDI                            ; 004a29e9
    CALL core_fldnotes.cpp_FUN_004a2c90 ; 004a29ea
        ;   XREF to: 004a2c90 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2c90()
    MOV EBX,EBP                         ; 004a29ef
    ADD ESP,0x4                         ; 004a29f1
    JMP 0x004a2956                      ; 004a29f4
        ;   XREF to: 004a2956 (UNCONDITIONAL_JUMP)  ; LAB_004a2956
    MOV EDI,dword ptr [ESP + 0x31c]     ; 004a29f9
        ;   Label: LAB_004a29f9
    PUSH EDI                            ; 004a2a00
    PUSH 0x5d5af2                       ; 004a2a01 | = "Incomplete markup tag beginning with ..."
    PUSH 0x1cab7f0                      ; 004a2a06 | DAT_01cab7f0
    CALL crt_unknown.c_FUN_005b7790     ; 004a2a0b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0xffffffff                  ; 004a2a10
    ADD ESP,0xc                         ; 004a2a15
    ADD ESP,0x304                       ; 004a2a18
    POP EBP                             ; 004a2a1e
    POP EDI                             ; 004a2a1f
    POP ESI                             ; 004a2a20
    POP EBX                             ; 004a2a21
    RET                                 ; 004a2a22
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004a2a23
        ;   Label: LAB_004a2a23
    PUSH ESI                            ; 004a2a2a
    PUSH 0x5d5b1c                       ; 004a2a2b | = "Markup tag beginning with '%s' - tag ..."
    PUSH 0x1cab7f0                      ; 004a2a30 | DAT_01cab7f0
    CALL crt_unknown.c_FUN_005b7790     ; 004a2a35
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0xffffffff                  ; 004a2a3a
    ADD ESP,0xc                         ; 004a2a3f
    ADD ESP,0x304                       ; 004a2a42
    POP EBP                             ; 004a2a48
    POP EDI                             ; 004a2a49
    POP ESI                             ; 004a2a4a
    POP EBX                             ; 004a2a4b
    RET                                 ; 004a2a4c
    MOV EAX,0xffffffff                  ; 004a2a4d
        ;   Label: LAB_004a2a4d
    ADD ESP,0x304                       ; 004a2a52
    POP EBP                             ; 004a2a58
    POP EDI                             ; 004a2a59
    POP ESI                             ; 004a2a5a
    POP EBX                             ; 004a2a5b
    RET                                 ; 004a2a5c
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004a2a5d
        ;   Label: LAB_004a2a5d
    PUSH EBX                            ; 004a2a64
    PUSH 0x5d5b4f                       ; 004a2a65 | = "Unexpected '>' found near '%s'"
    PUSH 0x1cab7f0                      ; 004a2a6a | DAT_01cab7f0
    CALL crt_unknown.c_FUN_005b7790     ; 004a2a6f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0xffffffff                  ; 004a2a74
    ADD ESP,0xc                         ; 004a2a79
    ADD ESP,0x304                       ; 004a2a7c
    POP EBP                             ; 004a2a82
    POP EDI                             ; 004a2a83
    POP ESI                             ; 004a2a84
    POP EBX                             ; 004a2a85
    RET                                 ; 004a2a86
    MOV DH,0x20                         ; 004a2a87
        ;   Label: LAB_004a2a87
    MOV EAX,0x1                         ; 004a2a89
    MOV byte ptr [ESP],DH               ; 004a2a8e
    JMP 0x004a2916                      ; 004a2a91
        ;   XREF to: 004a2916 (UNCONDITIONAL_JUMP)  ; LAB_004a2916
    MOV DL,byte ptr [ESI]               ; 004a2a96
        ;   Label: LAB_004a2a96
    TEST DL,DL                          ; 004a2a98
    JZ 0x004a292f                       ; 004a2a9a
        ;   XREF to: 004a292f (CONDITIONAL_JUMP)  ; LAB_004a292f
    CMP DL,0x3c                         ; 004a2aa0
    JZ 0x004a292f                       ; 004a2aa3
        ;   XREF to: 004a292f (CONDITIONAL_JUMP)  ; LAB_004a292f
    CMP DL,0x3e                         ; 004a2aa9
    JZ 0x004a292f                       ; 004a2aac
        ;   XREF to: 004a292f (CONDITIONAL_JUMP)  ; LAB_004a292f
    INC EAX                             ; 004a2ab2
    INC ESI                             ; 004a2ab3
    MOV byte ptr [ESP + EAX*0x1 + -0x1],DL ; 004a2ab4
    JMP 0x004a2918                      ; 004a2ab8
        ;   XREF to: 004a2918 (UNCONDITIONAL_JUMP)  ; LAB_004a2918
    PUSH EDI                            ; 004a2abd
        ;   Label: LAB_004a2abd
    CALL core_fldnotes.cpp_FUN_004a2bf0 ; 004a2abe
        ;   XREF to: 004a2bf0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2bf0()
    ADD ESP,0x4                         ; 004a2ac3
    JMP 0x004a2956                      ; 004a2ac6
        ;   XREF to: 004a2956 (UNCONDITIONAL_JUMP)  ; LAB_004a2956

