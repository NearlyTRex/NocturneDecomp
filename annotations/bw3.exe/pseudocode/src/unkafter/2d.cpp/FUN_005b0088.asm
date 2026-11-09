; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005b0088(int param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a5fb8_00607674 = 005a5fb8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   unkafter_2d.cpp_FUN_005b0df0
;   unkafter_asgaya.cpp_FUN_005afe80
;   unkafter_asgaya.cpp_FUN_005afed4
;   unkafter_asgaya.cpp_FUN_005afef8
;   unkafter_asgaya.cpp_FUN_005affa0
;   unkafter_asgaya.cpp_FUN_005affd8
;   unkafter_asgaya.cpp_FUN_005b0004
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0088
        ;   Label: unkafter_2d.cpp_FUN_005b0088
    PUSH ESI                            ; 005b0089
    PUSH EDI                            ; 005b008a
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b008b
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b008f
    CMP EBX,0x1                         ; 005b0093
    JL 0x005b009d                       ; 005b0096
        ;   XREF to: 005b009d (CONDITIONAL_JUMP)  ; LAB_005b009d
    CMP EBX,0xc                         ; 005b0098
    JLE 0x005b00b0                      ; 005b009b
        ;   XREF to: 005b00b0 (CONDITIONAL_JUMP)  ; LAB_005b00b0
    PUSH 0x9                            ; 005b009d
        ;   Label: LAB_005b009d
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005b009f
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0x3                         ; 005b00a4
    ADD ESP,0x4                         ; 005b00a9
    POP EDI                             ; 005b00ac
    POP ESI                             ; 005b00ad
    POP EBX                             ; 005b00ae
    RET                                 ; 005b00af
    MOV dword ptr [0x00607674],0x5b003c ; 005b00b0 | PTR_crt_unknown.c_FUN_005a5fb8_00607674
        ;   Label: LAB_005b00b0
    CMP EDI,0x2                         ; 005b00ba
    JZ 0x005b00e5                       ; 005b00bd
        ;   XREF to: 005b00e5 (CONDITIONAL_JUMP)  ; LAB_005b00e5
    CMP EDI,0x3                         ; 005b00bf
    JZ 0x005b00e5                       ; 005b00c2
        ;   XREF to: 005b00e5 (CONDITIONAL_JUMP)  ; LAB_005b00e5
    PUSH EBX                            ; 005b00c4
    CALL unkafter_asgaya.cpp_FUN_005afef8 ; 005b00c5
        ;   XREF to: 005afef8 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afef8()
    ADD ESP,0x4                         ; 005b00ca
    TEST EAX,EAX                        ; 005b00cd
    JZ 0x005b00e5                       ; 005b00cf
        ;   XREF to: 005b00e5 (CONDITIONAL_JUMP)  ; LAB_005b00e5
    CMP EBX,0x2                         ; 005b00d1
    JNZ 0x005b00e5                      ; 005b00d4
        ;   XREF to: 005b00e5 (CONDITIONAL_JUMP)  ; LAB_005b00e5
    PUSH 0x9f                           ; 005b00d6
    PUSH 0x0                            ; 005b00db
    CALL unkafter_2d.cpp_FUN_005b0df0   ; 005b00dd
        ;   XREF to: 005b0df0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0df0()
    ADD ESP,0x8                         ; 005b00e2
    PUSH EBX                            ; 005b00e5
        ;   Label: LAB_005b00e5
    CALL unkafter_asgaya.cpp_FUN_005afed4 ; 005b00e6
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afed4()
    ADD ESP,0x4                         ; 005b00eb
    PUSH EDI                            ; 005b00ee
    PUSH EBX                            ; 005b00ef
    MOV ESI,EAX                         ; 005b00f0
    CALL unkafter_asgaya.cpp_FUN_005afe80 ; 005b00f2
        ;   XREF to: 005afe80 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afe80()
    ADD ESP,0x8                         ; 005b00f7
    CALL unkafter_asgaya.cpp_FUN_005affa0 ; 005b00fa
        ;   XREF to: 005affa0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005affa0()
    TEST EAX,EAX                        ; 005b00ff
    JZ 0x005b010a                       ; 005b0101
        ;   XREF to: 005b010a (CONDITIONAL_JUMP)  ; LAB_005b010a
    CALL unkafter_asgaya.cpp_FUN_005affd8 ; 005b0103
        ;   XREF to: 005affd8 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005affd8()
    JMP 0x005b010f                      ; 005b0108
        ;   XREF to: 005b010f (UNCONDITIONAL_JUMP)  ; LAB_005b010f
    CALL unkafter_asgaya.cpp_FUN_005b0004 ; 005b010a
        ;   XREF to: 005b0004 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005b0004()
        ;   Label: LAB_005b010a
    MOV EAX,ESI                         ; 005b010f
        ;   Label: LAB_005b010f
    POP EDI                             ; 005b0111
    POP ESI                             ; 005b0112
    POP EBX                             ; 005b0113
    RET                                 ; 005b0114

