; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00440860(undefined4 param_1,int *param_2,int *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440860
        ;   Label: support_codec.cpp_FUN_00440860
    PUSH ESI                            ; 00440861
    PUSH EDI                            ; 00440862
    PUSH EBP                            ; 00440863
    MOV EDI,dword ptr [ESP + 0x18]      ; 00440864
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00440868
    PUSH EDI                            ; 0044086c
        ;   Label: LAB_0044086c
    MOV EAX,dword ptr [EDI]             ; 0044086d
    CALL dword ptr [EAX + 0x4]          ; 0044086f
    MOV EBX,EAX                         ; 00440872
    ADD ESP,0x4                         ; 00440874
    MOV EDX,EAX                         ; 00440877
    CMP EAX,-0x1                        ; 00440879
    JZ 0x00440889                       ; 0044087c
        ;   XREF to: 00440889 (CONDITIONAL_JUMP)  ; LAB_00440889
    TEST EAX,EAX                        ; 0044087e
    JGE 0x00440893                      ; 00440880
        ;   XREF to: 00440893 (CONDITIONAL_JUMP)  ; LAB_00440893
    XOR EAX,EAX                         ; 00440882
        ;   Label: LAB_00440882
    POP EBP                             ; 00440884
    POP EDI                             ; 00440885
    POP ESI                             ; 00440886
    POP EBX                             ; 00440887
    RET                                 ; 00440888
    MOV EAX,0x1                         ; 00440889
        ;   Label: LAB_00440889
    POP EBP                             ; 0044088e
    POP EDI                             ; 0044088f
    POP ESI                             ; 00440890
    POP EBX                             ; 00440891
    RET                                 ; 00440892
    MOVZX ESI,DL                        ; 00440893
        ;   Label: LAB_00440893
    PUSH ESI                            ; 00440896
    MOV EAX,dword ptr [EBP]             ; 00440897
    PUSH EBP                            ; 0044089a
    CALL dword ptr [EAX + 0x4]          ; 0044089b
    MOV ESI,EAX                         ; 0044089e
    ADD ESP,0x8                         ; 004408a0
    TEST EAX,EAX                        ; 004408a3
    JGE 0x0044086c                      ; 004408a5
        ;   XREF to: 0044086c (CONDITIONAL_JUMP)  ; LAB_0044086c
    PUSH EBX                            ; 004408a7
    MOV EAX,dword ptr [EDI]             ; 004408a8
    PUSH EDI                            ; 004408aa
    CALL dword ptr [EAX + 0x8]          ; 004408ab
    ADD ESP,0x8                         ; 004408ae
    TEST EAX,EAX                        ; 004408b1
    JZ 0x00440882                       ; 004408b3
        ;   XREF to: 00440882 (CONDITIONAL_JUMP)  ; LAB_00440882
    CMP ESI,-0x1                        ; 004408b5
    JNZ 0x00440882                      ; 004408b8
        ;   XREF to: 00440882 (CONDITIONAL_JUMP)  ; LAB_00440882
    MOV EAX,0x2                         ; 004408ba
    POP EBP                             ; 004408bf
    POP EDI                             ; 004408c0
    POP ESI                             ; 004408c1
    POP EBX                             ; 004408c2
    RET                                 ; 004408c3

