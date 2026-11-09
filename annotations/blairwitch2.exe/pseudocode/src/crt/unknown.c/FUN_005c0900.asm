; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0900(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005bce08 at 005bce0d
;   crt_unknown.c_FUN_005c0a90 at 005c0aaa
;   unkafter_morph.cpp_FUN_005c2844 at 005c2849
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2dc = 005bce04
;   undefined4 DAT_0061f4d8
;   undefined4 DAT_0061f4dc
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0900
        ;   Label: crt_unknown.c_FUN_005c0900
    CALL dword ptr [0x0061f2d8]         ; 005c0901 | PTR_crt_unknown.c_FUN_005bce04_0061f2d8
    MOV EDX,dword ptr [0x0061f4dc]      ; 005c0907 | DAT_0061f4dc
    XOR EBX,EBX                         ; 005c090d
    TEST EDX,EDX                        ; 005c090f
    JLE 0x005c0941                      ; 005c0911
        ;   XREF to: 005c0941 (CONDITIONAL_JUMP)  ; LAB_005c0941
    LEA ECX,[EDX*0x4 + 0x0]             ; 005c0913
    XOR EAX,EAX                         ; 005c091a
    MOV EDX,dword ptr [0x0061f4d8]      ; 005c091c | DAT_0061f4d8
        ;   Label: LAB_005c091c
    ADD EDX,EAX                         ; 005c0922
    CMP dword ptr [EDX],0x0             ; 005c0924
    JNZ 0x005c0939                      ; 005c0927
        ;   XREF to: 005c0939 (CONDITIONAL_JUMP)  ; LAB_005c0939
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c0929
    MOV dword ptr [EDX],EAX             ; 005c092d
    CALL dword ptr [0x0061f2dc]         ; 005c092f | PTR_crt_unknown.c_FUN_005bce04_0061f2dc
    MOV EAX,EBX                         ; 005c0935
    POP EBX                             ; 005c0937
    RET                                 ; 005c0938
    ADD EAX,0x4                         ; 005c0939
        ;   Label: LAB_005c0939
    INC EBX                             ; 005c093c
    CMP EAX,ECX                         ; 005c093d
    JL 0x005c091c                       ; 005c093f
        ;   XREF to: 005c091c (CONDITIONAL_JUMP)  ; LAB_005c091c
    MOV EAX,[0x0061f4dc]                ; 005c0941 | DAT_0061f4dc
        ;   Label: LAB_005c0941
    INC EAX                             ; 005c0946
    SHL EAX,0x2                         ; 005c0947
    PUSH EAX                            ; 005c094a
    MOV EBX,dword ptr [0x0061f4d8]      ; 005c094b | DAT_0061f4d8
    PUSH EBX                            ; 005c0951
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c0952
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [0x0061f4dc]      ; 005c0957 | DAT_0061f4dc
    MOV ECX,dword ptr [0x0061f4dc]      ; 005c095d | DAT_0061f4dc
    ADD ESP,0x8                         ; 005c0963
    MOV [0x0061f4d8],EAX                ; 005c0966 | DAT_0061f4d8
    SHL EDX,0x2                         ; 005c096b
    INC ECX                             ; 005c096e
    ADD EAX,EDX                         ; 005c096f
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c0971
    MOV dword ptr [0x0061f4dc],ECX      ; 005c0975 | DAT_0061f4dc
    MOV dword ptr [EAX],EDX             ; 005c097b
    CALL dword ptr [0x0061f2dc]         ; 005c097d | PTR_crt_unknown.c_FUN_005bce04_0061f2dc
    MOV EAX,[0x0061f4dc]                ; 005c0983 | DAT_0061f4dc
    DEC EAX                             ; 005c0988
    POP EBX                             ; 005c0989
    RET                                 ; 005c098a

