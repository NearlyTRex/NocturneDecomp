; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_matrix_c_FUN_00483bf0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_FUN_00555460 at 005554fa
;
; Referenced Globals:
;   undefined4 DAT_005db3dc
;   undefined4 DAT_005db3e4
;   undefined4 DAT_0061b4c4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00483bf0
        ;   Label: engine_matrix.c_FUN_00483bf0
    FILD dword ptr [0x0061b4c4]         ; 00483bf3 | DAT_0061b4c4
    FDIVR double ptr [0x005db3dc]       ; 00483bf9 | DAT_005db3dc
    FMUL double ptr [0x005db3e4]        ; 00483bff | DAT_005db3e4
    FSTP float ptr [ESP]                ; 00483c05
    MOV EAX,dword ptr [ESP]             ; 00483c08
    ADD ESP,0x4                         ; 00483c0b
    RET                                 ; 00483c0e

