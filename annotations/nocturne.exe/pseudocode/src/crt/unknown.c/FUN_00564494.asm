; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564494(int param_1)
;
;
; XREF[147]:
;   FUN_0056b538 at 0056b5a6
;   FUN_0056b5ad at 0056b62c
;   FUN_0056b633 at 0056b676
;   FUN_0056b6e8 at 0056b756
;   FUN_0056b810 at 0056b88f
;   FUN_005701cf at 00570241
;   FUN_00570449 at 005704ba
;   cockpit_ckptutil.c_FUN_0042e7b0 at 0042e944
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 at 00409eed
;   core_ammo.cpp_FUN_0040ef90 at 0040efd2
;   ... and 137 more
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564494
        ;   Label: crt_unknown.c_FUN_00564494
    TEST EDX,EDX                        ; 00564498
    JNZ 0x0056449d                      ; 0056449a
        ;   XREF to: 0056449d (CONDITIONAL_JUMP)  ; LAB_0056449d
    RET                                 ; 0056449c
    PUSH EDX                            ; 0056449d
        ;   Label: LAB_0056449d
    CALL crt_unknown.c_FUN_005638d0     ; 0056449e
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 005644a3
    RET                                 ; 005644a6

