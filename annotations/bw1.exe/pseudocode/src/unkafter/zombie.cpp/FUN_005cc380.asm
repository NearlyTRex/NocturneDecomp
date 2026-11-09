; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cc380(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8dfc at 005c8e2f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50e8_0062660c = 005c50e8
;   undefined4 DAT_006267e0
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c6f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc380
        ;   Label: unkafter_zombie.cpp_FUN_005cc380
    PUSH ESI                            ; 005cc381
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cc382
    TEST EBX,EBX                        ; 005cc386
    JL 0x005cc392                       ; 005cc388
        ;   XREF to: 005cc392 (CONDITIONAL_JUMP)  ; LAB_005cc392
    CMP EBX,dword ptr [0x006267e0]      ; 005cc38a | DAT_006267e0
    JBE 0x005cc3a4                      ; 005cc390
        ;   XREF to: 005cc3a4 (CONDITIONAL_JUMP)  ; LAB_005cc3a4
    PUSH 0x4                            ; 005cc392
        ;   Label: LAB_005cc392
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005cc394
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005cc399
    ADD ESP,0x4                         ; 005cc39e
    POP ESI                             ; 005cc3a1
    POP EBX                             ; 005cc3a2
    RET                                 ; 005cc3a3
    PUSH EBX                            ; 005cc3a4
        ;   Label: LAB_005cc3a4
    CALL dword ptr [0x00626600]         ; 005cc3a5 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    ADD ESP,0x4                         ; 005cc3ab
    PUSH EBX                            ; 005cc3ae
    CALL crt_unknown.c_FUN_005c6f10     ; 005cc3af
        ;   XREF to: 005c6f10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6f10()
    ADD ESP,0x4                         ; 005cc3b4
    PUSH EBX                            ; 005cc3b7
    MOV ESI,EAX                         ; 005cc3b8
    CALL dword ptr [0x00626604]         ; 005cc3ba | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005cc3c0
    PUSH EBX                            ; 005cc3c3
    CALL dword ptr [0x0062660c]         ; 005cc3c4 | PTR_crt_unknown.c_FUN_005c50e8_0062660c
    ADD ESP,0x4                         ; 005cc3ca
    MOV EAX,ESI                         ; 005cc3cd
    POP ESI                             ; 005cc3cf
    POP EBX                             ; 005cc3d0
    RET                                 ; 005cc3d1

