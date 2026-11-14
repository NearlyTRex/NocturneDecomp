; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a81b8(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ad1e0 at 005ad221
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005b35c0 = 001b3f52
;   undefined4 DAT_00607960
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;   void* PTR_crt_unknown.c_FUN_005a7f68_006079e0 = 005a7f68
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;   crt_unknown.c_FUN_005a7f68
;   crt_unknown.c_FUN_005a7f6c
;   crt_unknown.c_FUN_005adf10
;   crt_unknown.c_FUN_005ae418
;   crt_unknown.c_FUN_005ae4a0
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a81b8
        ;   Label: crt_unknown.c_FUN_005a81b8
    PUSH 0x0                            ; 005a81b9
    CALL dword ptr CS:[0x5b35c0]        ; 005a81bb | PTR_GetModuleHandleA_005b35c0
    PUSH EAX                            ; 005a81c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a81c3
    PUSH EDX                            ; 005a81c7
    PUSH 0x0                            ; 005a81c8
    CALL crt_unknown.c_FUN_005a7f6c     ; 005a81ca
        ;   XREF to: 005a7f6c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7f6c()
    ADD ESP,0xc                         ; 005a81cf
    PUSH 0x607960                       ; 005a81d2 | DAT_00607960
    CALL dword ptr [0x006079a0]         ; 005a81d7 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
    PUSH EAX                            ; 005a81dd
    CALL crt_unknown.c_FUN_005adf10     ; 005a81de
        ;   XREF to: 005adf10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adf10()
    ADD ESP,0x8                         ; 005a81e3
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a81e6
    PUSH EBX                            ; 005a81ea
    CALL crt_unknown.c_FUN_005ae418     ; 005a81eb
        ;   XREF to: 005ae418 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae418()
    ADD ESP,0x4                         ; 005a81f0
    MOV EAX,0x21                        ; 005a81f3
    CALL crt_unknown.c_FUN_005ae4a0     ; 005a81f8
        ;   XREF to: 005ae4a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae4a0()
    CALL dword ptr [0x006079e0]         ; 005a81fd | PTR_crt_unknown.c_FUN_005a7f68_006079e0
    MOV EAX,0xff                        ; 005a8203
    CALL crt_unknown.c_FUN_005ae4a0     ; 005a8208
        ;   XREF to: 005ae4a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae4a0()
    POP EBX                             ; 005a820d
    RET                                 ; 005a820e

