; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00441750(CCheesyCipher *this_ptr,int *param_2,int *param_3)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   param_2
; int *            Stack[0xc]:4   param_3
;
; Called Functions:
;   support_codec.cpp_CCheesyCipher_transformByte_FUN_004416e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441750
        ;   Label: support_codec.cpp_CCheesyCipher_process_FUN_00441750
    PUSH ESI                            ; 00441751
    PUSH EDI                            ; 00441752
    PUSH EBP                            ; 00441753
    MOV EDI,dword ptr [ESP + 0x18]      ; 00441754
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00441758
    PUSH EDI                            ; 0044175c
        ;   Label: LAB_0044175c
    MOV EAX,dword ptr [EDI]             ; 0044175d
    CALL dword ptr [EAX + 0x4]          ; 0044175f
    ADD ESP,0x4                         ; 00441762
    MOV EBX,EAX                         ; 00441765
    CMP EAX,-0x1                        ; 00441767
    JZ 0x00441777                       ; 0044176a
        ;   XREF to: 00441777 (CONDITIONAL_JUMP)  ; LAB_00441777
    TEST EAX,EAX                        ; 0044176c
    JGE 0x00441781                      ; 0044176e
        ;   XREF to: 00441781 (CONDITIONAL_JUMP)  ; LAB_00441781
    XOR EAX,EAX                         ; 00441770
        ;   Label: LAB_00441770
    POP EBP                             ; 00441772
    POP EDI                             ; 00441773
    POP ESI                             ; 00441774
    POP EBX                             ; 00441775
    RET                                 ; 00441776
    MOV EAX,0x1                         ; 00441777
        ;   Label: LAB_00441777
    POP EBP                             ; 0044177c
    POP EDI                             ; 0044177d
    POP ESI                             ; 0044177e
    POP EBX                             ; 0044177f
    RET                                 ; 00441780
    XOR EAX,EAX                         ; 00441781
        ;   Label: LAB_00441781
    MOV AL,BL                           ; 00441783
    PUSH EAX                            ; 00441785
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441786
    PUSH EDX                            ; 0044178a
    XOR EBX,EBX                         ; 0044178b
    CALL support_codec.cpp_CCheesyCipher_transformByte_FUN_004416e0 ; 0044178d
        ;   XREF to: 004416e0 (UNCONDITIONAL_CALL)  ; uint support_codec.cpp_CCheesyCipher_transformByte_FUN_004416e0(CCheesyCipher * this_ptr, byte param_2)
    MOV BL,AL                           ; 00441792
    XOR EAX,EAX                         ; 00441794
    ADD ESP,0x8                         ; 00441796
    MOV AL,BL                           ; 00441799
    PUSH EAX                            ; 0044179b
    MOV ESI,dword ptr [EBP]             ; 0044179c
    PUSH EBP                            ; 0044179f
    CALL dword ptr [ESI + 0x4]          ; 004417a0
    MOV ESI,EAX                         ; 004417a3
    ADD ESP,0x8                         ; 004417a5
    TEST EAX,EAX                        ; 004417a8
    JGE 0x0044175c                      ; 004417aa
        ;   XREF to: 0044175c (CONDITIONAL_JUMP)  ; LAB_0044175c
    PUSH EBX                            ; 004417ac
    MOV EAX,dword ptr [EDI]             ; 004417ad
    PUSH EDI                            ; 004417af
    CALL dword ptr [EAX + 0x8]          ; 004417b0
    ADD ESP,0x8                         ; 004417b3
    TEST EAX,EAX                        ; 004417b6
    JZ 0x00441770                       ; 004417b8
        ;   XREF to: 00441770 (CONDITIONAL_JUMP)  ; LAB_00441770
    CMP ESI,-0x1                        ; 004417ba
    JNZ 0x00441770                      ; 004417bd
        ;   XREF to: 00441770 (CONDITIONAL_JUMP)  ; LAB_00441770
    MOV EAX,0x2                         ; 004417bf
    POP EBP                             ; 004417c4
    POP EDI                             ; 004417c5
    POP ESI                             ; 004417c6
    POP EBX                             ; 004417c7
    RET                                 ; 004417c8

