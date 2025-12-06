; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_larva.cpp_FUN_005039d0()
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; Referenced Globals:
;   TerminatedCString s_sml_00630fbe
;   TerminatedCString s_med_00630fc2
;   TerminatedCString s_big_00630fc6
;   double DOUBLE_00630fcb = 0.300000000000000
;   double DOUBLE_00630fd3 = 0.700000000000000
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005039d0
        ;   Label: core_larva.cpp_FUN_005039d0
    MOV EBP,ESP                         ; 005039d1
    SUB ESP,0x8                         ; 005039d3
    AND ESP,0xfffffff8                  ; 005039d6
    FLD float ptr [EBP + 0x8]           ; 005039d9
    FST double ptr [ESP]                ; 005039dc
    FCOMP double ptr [0x00630fcb]       ; 005039df | double DOUBLE_00630fcb
    FNSTSW AX                           ; 005039e5
    SAHF                                ; 005039e7
    JC 0x00503a01                       ; 005039e8 | LAB_00503a01
        ;   XREF to: 00503a01 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 005039ea
    FCOMP double ptr [0x00630fd3]       ; 005039ed | double DOUBLE_00630fd3
    FNSTSW AX                           ; 005039f3
    SAHF                                ; 005039f5
    JNC 0x00503a0a                      ; 005039f6 | LAB_00503a0a
        ;   XREF to: 00503a0a (CONDITIONAL_JUMP)
    MOV EAX,0x630fc2                    ; 005039f8 | = "med" | s_med_00630fc2 = med
    MOV ESP,EBP                         ; 005039fd
    POP EBP                             ; 005039ff
    RET                                 ; 00503a00
    MOV EAX,0x630fbe                    ; 00503a01 | = "sml" | s_sml_00630fbe = sml
        ;   Label: LAB_00503a01
    MOV ESP,EBP                         ; 00503a06
    POP EBP                             ; 00503a08
    RET                                 ; 00503a09
    MOV EAX,0x630fc6                    ; 00503a0a | = "big" | s_big_00630fc6 = big
        ;   Label: LAB_00503a0a
    MOV ESP,EBP                         ; 00503a0f
    POP EBP                             ; 00503a11
    RET                                 ; 00503a12

