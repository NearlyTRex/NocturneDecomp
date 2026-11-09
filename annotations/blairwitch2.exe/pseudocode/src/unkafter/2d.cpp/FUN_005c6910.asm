; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c6910(undefined2 *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c6210 at 005c63a8
;
; Called Functions:
;   crt_unknown.c_FUN_005c0e00
;   unkafter_morph.cpp_FUN_005c33f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6910
        ;   Label: unkafter_2d.cpp_FUN_005c6910
    PUSH ESI                            ; 005c6911
    PUSH EDI                            ; 005c6912
    PUSH EBP                            ; 005c6913
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c6914
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c6918
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005c691c
    XOR ESI,ESI                         ; 005c6920
    TEST EDI,EDI                        ; 005c6922
    JZ 0x005c695e                       ; 005c6924
        ;   XREF to: 005c695e (CONDITIONAL_JUMP)  ; LAB_005c695e
    TEST EBP,EBP                        ; 005c6926
        ;   Label: LAB_005c6926
    JBE 0x005c6983                      ; 005c6928
        ;   XREF to: 005c6983 (CONDITIONAL_JUMP)  ; LAB_005c6983
    CMP byte ptr [EBX],0x0              ; 005c692a
    JZ 0x005c6945                       ; 005c692d
        ;   XREF to: 005c6945 (CONDITIONAL_JUMP)  ; LAB_005c6945
    PUSH 0x2                            ; 005c692f
    PUSH EBX                            ; 005c6931
    PUSH EDI                            ; 005c6932
    CALL unkafter_morph.cpp_FUN_005c33f0 ; 005c6933
        ;   XREF to: 005c33f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c33f0()
    ADD ESP,0xc                         ; 005c6938
    CMP EAX,-0x1                        ; 005c693b
    JNZ 0x005c694c                      ; 005c693e
        ;   XREF to: 005c694c (CONDITIONAL_JUMP)  ; LAB_005c694c
    POP EBP                             ; 005c6940
    POP EDI                             ; 005c6941
    POP ESI                             ; 005c6942
    POP EBX                             ; 005c6943
    RET                                 ; 005c6944
    MOV word ptr [EDI],0x0              ; 005c6945
        ;   Label: LAB_005c6945
    JMP 0x005c6983                      ; 005c694a
        ;   XREF to: 005c6983 (UNCONDITIONAL_JUMP)  ; LAB_005c6983
    PUSH EBX                            ; 005c694c
        ;   Label: LAB_005c694c
    DEC EBP                             ; 005c694d
    CALL crt_unknown.c_FUN_005c0e00     ; 005c694e
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    ADD EDI,0x2                         ; 005c6953
    INC ESI                             ; 005c6956
    ADD ESP,0x4                         ; 005c6957
    MOV EBX,EAX                         ; 005c695a
    JMP 0x005c6926                      ; 005c695c
        ;   XREF to: 005c6926 (UNCONDITIONAL_JUMP)  ; LAB_005c6926
    CMP byte ptr [EBX],0x0              ; 005c695e
        ;   Label: LAB_005c695e
    JZ 0x005c6983                       ; 005c6961
        ;   XREF to: 005c6983 (CONDITIONAL_JUMP)  ; LAB_005c6983
    PUSH 0x2                            ; 005c6963
    PUSH EBX                            ; 005c6965
    PUSH 0x0                            ; 005c6966
    CALL unkafter_morph.cpp_FUN_005c33f0 ; 005c6968
        ;   XREF to: 005c33f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c33f0()
    ADD ESP,0xc                         ; 005c696d
    CMP EAX,-0x1                        ; 005c6970
    JZ 0x005c6985                       ; 005c6973
        ;   XREF to: 005c6985 (CONDITIONAL_JUMP)  ; LAB_005c6985
    PUSH EBX                            ; 005c6975
    CALL crt_unknown.c_FUN_005c0e00     ; 005c6976
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    INC ESI                             ; 005c697b
    ADD ESP,0x4                         ; 005c697c
    MOV EBX,EAX                         ; 005c697f
    JMP 0x005c695e                      ; 005c6981
        ;   XREF to: 005c695e (UNCONDITIONAL_JUMP)  ; LAB_005c695e
    MOV EAX,ESI                         ; 005c6983
        ;   Label: LAB_005c6983
    POP EBP                             ; 005c6985
        ;   Label: LAB_005c6985
    POP EDI                             ; 005c6986
    POP ESI                             ; 005c6987
    POP EBX                             ; 005c6988
    RET                                 ; 005c6989

