; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521190(void)
;
;
; Referenced Globals:
;   float FLOAT_005a2168 = 4
;   float FLOAT_005a216c = 20
;   undefined4 DAT_02dbd370
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    FLD float ptr [0x005a216c]          ; 00521190 | FLOAT_005a216c
        ;   Label: FUN_00521190
    FDIV float ptr [0x005a2168]         ; 00521196 | FLOAT_005a2168
    PUSH 0x5a2180                       ; 0052119c
    PUSH 0x40                           ; 005211a1
    PUSH 0x2dbd374                      ; 005211a3
    FSTP float ptr [0x02dbd370]         ; 005211a8 | DAT_02dbd370
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005211ae
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 005211b3
    PUSH 0x5a21a0                       ; 005211b6
    PUSH 0x8                            ; 005211bb
    PUSH 0x2dc1b78                      ; 005211bd
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005211c2
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 005211c7
    PUSH 0x5a21c0                       ; 005211ca
    PUSH 0x40                           ; 005211cf
    PUSH 0x2dc1edc                      ; 005211d1
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005211d6
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 005211db
    PUSH 0x5bea20                       ; 005211de
    CALL FUN_00564bb0                   ; 005211e3
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 005211e8
    RET                                 ; 005211eb

