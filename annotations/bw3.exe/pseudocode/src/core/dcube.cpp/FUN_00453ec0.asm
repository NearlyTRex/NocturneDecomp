; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00453ec0(int *param_1)
;
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_dtor_FUN_00453cf0 at 00453cf6
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453ec0
        ;   Label: core_dcube.cpp_FUN_00453ec0
    PUSH ESI                            ; 00453ec1
    PUSH EBP                            ; 00453ec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00453ec3
    MOV EDX,dword ptr [EBX + 0x24]      ; 00453ec7
    TEST EDX,EDX                        ; 00453eca
    JNZ 0x00453f1c                      ; 00453ecc
        ;   XREF to: 00453f1c (CONDITIONAL_JUMP)  ; LAB_00453f1c
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00453ece
        ;   Label: LAB_00453ece
    TEST ESI,ESI                        ; 00453ed1
    JZ 0x00453ee5                       ; 00453ed3
        ;   XREF to: 00453ee5 (CONDITIONAL_JUMP)  ; LAB_00453ee5
    PUSH ESI                            ; 00453ed5
    CALL crt_unknown.c_FUN_005a30b6     ; 00453ed6
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00453edb
    MOV dword ptr [EBX + 0x2c],0x0      ; 00453ede
    MOV EBP,dword ptr [EBX + 0x30]      ; 00453ee5
        ;   Label: LAB_00453ee5
    TEST EBP,EBP                        ; 00453ee8
    JZ 0x00453efc                       ; 00453eea
        ;   XREF to: 00453efc (CONDITIONAL_JUMP)  ; LAB_00453efc
    PUSH EBP                            ; 00453eec
    CALL crt_unknown.c_FUN_005a3770     ; 00453eed
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00453ef2
    MOV dword ptr [EBX + 0x30],0x0      ; 00453ef5
    MOV EDX,dword ptr [EBX]             ; 00453efc
        ;   Label: LAB_00453efc
    TEST EDX,EDX                        ; 00453efe
    JZ 0x00453f11                       ; 00453f00
        ;   XREF to: 00453f11 (CONDITIONAL_JUMP)  ; LAB_00453f11
    PUSH EDX                            ; 00453f02
    CALL crt_unknown.c_FUN_005a3770     ; 00453f03
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00453f08
    MOV dword ptr [EBX],0x0             ; 00453f0b
    MOV ESI,dword ptr [EBX + 0x4]       ; 00453f11
        ;   Label: LAB_00453f11
    TEST ESI,ESI                        ; 00453f14
    JNZ 0x00453f2e                      ; 00453f16
        ;   XREF to: 00453f2e (CONDITIONAL_JUMP)  ; LAB_00453f2e
    POP EBP                             ; 00453f18
    POP ESI                             ; 00453f19
    POP EBX                             ; 00453f1a
    RET                                 ; 00453f1b
    PUSH EDX                            ; 00453f1c
        ;   Label: LAB_00453f1c
    CALL crt_unknown.c_FUN_005a30b6     ; 00453f1d
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00453f22
    MOV dword ptr [EBX + 0x24],0x0      ; 00453f25
    JMP 0x00453ece                      ; 00453f2c
        ;   XREF to: 00453ece (UNCONDITIONAL_JUMP)  ; LAB_00453ece
    PUSH ESI                            ; 00453f2e
        ;   Label: LAB_00453f2e
    CALL crt_unknown.c_FUN_005a3770     ; 00453f2f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00453f34
    MOV dword ptr [EBX + 0x4],0x0       ; 00453f37
    POP EBP                             ; 00453f3e
    POP ESI                             ; 00453f3f
    POP EBX                             ; 00453f40
    RET                                 ; 00453f41

