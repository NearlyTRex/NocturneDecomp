; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_matrix_c_FUN_0046b6f0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_FUN_005341b0 at 0053424a
;
; Referenced Globals:
;   undefined4 DAT_005d15e3
;   undefined4 DAT_005d15eb
;   undefined4 DAT_006141e4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b6f0
        ;   Label: engine_matrix.c_FUN_0046b6f0
    FILD dword ptr [0x006141e4]         ; 0046b6f3 | DAT_006141e4
    FDIVR double ptr [0x005d15e3]       ; 0046b6f9 | DAT_005d15e3
    FMUL double ptr [0x005d15eb]        ; 0046b6ff | DAT_005d15eb
    FSTP float ptr [ESP]                ; 0046b705
    MOV EAX,dword ptr [ESP]             ; 0046b708
    ADD ESP,0x4                         ; 0046b70b
    RET                                 ; 0046b70e

