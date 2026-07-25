; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_ncursfx_cpp_CMouse_ctor_FUN_004ee500(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ee4e0 at 004ee4e5
;
; Referenced Globals:
;   undefined4 DAT_0059df00
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee500
        ;   Label: engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500
    PUSH 0x59df00                       ; 004ee504 | DAT_0059df00
    PUSH 0x8                            ; 004ee509
    PUSH EAX                            ; 004ee50b
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ee50c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004ee511
    PUSH 0x59df00                       ; 004ee514 | DAT_0059df00
    PUSH 0x7                            ; 004ee519
    ADD EAX,0xa0                        ; 004ee51b
    PUSH EAX                            ; 004ee520
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ee521
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004ee526
    PUSH 0x59df00                       ; 004ee529 | DAT_0059df00
    PUSH 0xf                            ; 004ee52e
    ADD EAX,0x8c                        ; 004ee530
    PUSH EAX                            ; 004ee535
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ee536
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    MOV dword ptr [EAX + 0x12c],0x0     ; 004ee53b
    ADD ESP,0xc                         ; 004ee545
    MOV dword ptr [EAX + 0x130],0x0     ; 004ee548
    SUB EAX,0x12c                       ; 004ee552
    RET                                 ; 004ee557

