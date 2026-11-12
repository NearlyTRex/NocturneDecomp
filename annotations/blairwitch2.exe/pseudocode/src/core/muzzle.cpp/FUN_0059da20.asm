; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_muzzle_cpp_FUN_0059da20(int param_1,float param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_process_FUN_0059f420 at 0059f550
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059da70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059da20
        ;   Label: core_muzzle.cpp_FUN_0059da20
    FLD float ptr [EDX + 0x848]         ; 0059da24
    FLDZ                                ; 0059da2a
    FCOMPP                              ; 0059da2c
    FNSTSW AX                           ; 0059da2e
    SAHF                                ; 0059da30
    JC 0x0059da43                       ; 0059da31
        ;   XREF to: 0059da43 (CONDITIONAL_JUMP)  ; LAB_0059da43
    FLD float ptr [EDX + 0x848]         ; 0059da33
    FLDZ                                ; 0059da39
    FCOMPP                              ; 0059da3b
    FNSTSW AX                           ; 0059da3d
    SAHF                                ; 0059da3f
    JNC 0x0059da63                      ; 0059da40
        ;   XREF to: 0059da63 (CONDITIONAL_JUMP)  ; LAB_0059da63
    RET                                 ; 0059da42
    FLD float ptr [EDX + 0x848]         ; 0059da43
        ;   Label: LAB_0059da43
    FSUB float ptr [ESP + 0x8]          ; 0059da49
    FSTP float ptr [EDX + 0x848]        ; 0059da4d
    FLD float ptr [EDX + 0x848]         ; 0059da53
    FLDZ                                ; 0059da59
    FCOMPP                              ; 0059da5b
    FNSTSW AX                           ; 0059da5d
    SAHF                                ; 0059da5f
    JNC 0x0059da63                      ; 0059da60
        ;   XREF to: 0059da63 (CONDITIONAL_JUMP)  ; LAB_0059da63
    RET                                 ; 0059da62
    PUSH EDX                            ; 0059da63
        ;   Label: LAB_0059da63
    CALL core_muzzle.cpp_FUN_0059da70   ; 0059da64
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059da69
    RET                                 ; 0059da6c

