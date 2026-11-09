; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005ae8c0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a9818 at 005a9818
;   unkafter_asgaya.cpp_FUN_005add3c at 005add80
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079bc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079c4 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   unkafter_asgaya.cpp_FUN_005ae95c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae8c0
        ;   Label: unkafter_asgaya.cpp_FUN_005ae8c0
    PUSH ESI                            ; 005ae8c1
    CALL dword ptr [0x006079bc]         ; 005ae8c2 | PTR_crt_unknown.c_FUN_005a7f44_006079bc
    MOV EAX,[0x006075c4]                ; 005ae8c8 | DAT_006075c4
    TEST EAX,EAX                        ; 005ae8cd
    JZ 0x005ae8f1                       ; 005ae8cf
        ;   XREF to: 005ae8f1 (CONDITIONAL_JUMP)  ; LAB_005ae8f1
    MOV EDX,dword ptr [EAX]             ; 005ae8d1
        ;   Label: LAB_005ae8d1
    MOV ECX,dword ptr [EAX + 0x24]      ; 005ae8d3
    SUB EDX,0x2c                        ; 005ae8d6
    MOV ESI,dword ptr [ECX]             ; 005ae8d9
    MOV EBX,dword ptr [EAX + 0x8]       ; 005ae8db
    CMP EDX,ESI                         ; 005ae8de
    JNZ 0x005ae8eb                      ; 005ae8e0
        ;   XREF to: 005ae8eb (CONDITIONAL_JUMP)  ; LAB_005ae8eb
    PUSH EAX                            ; 005ae8e2
    CALL unkafter_asgaya.cpp_FUN_005ae95c ; 005ae8e3
        ;   XREF to: 005ae95c (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae95c()
    ADD ESP,0x4                         ; 005ae8e8
    MOV EAX,EBX                         ; 005ae8eb
        ;   Label: LAB_005ae8eb
    TEST EBX,EBX                        ; 005ae8ed
    JNZ 0x005ae8d1                      ; 005ae8ef
        ;   XREF to: 005ae8d1 (CONDITIONAL_JUMP)  ; LAB_005ae8d1
    CALL dword ptr [0x006079c4]         ; 005ae8f1 | PTR_crt_unknown.c_FUN_005a7f44_006079c4
        ;   Label: LAB_005ae8f1
    XOR EAX,EAX                         ; 005ae8f7
    POP ESI                             ; 005ae8f9
    POP EBX                             ; 005ae8fa
    RET                                 ; 005ae8fb

