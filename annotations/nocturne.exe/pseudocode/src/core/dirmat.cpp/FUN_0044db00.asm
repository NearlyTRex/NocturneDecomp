; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dirmat_cpp_FUN_0044db00(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0057c4de
;   undefined4 DAT_0057c4e6
;   undefined4 DAT_0057c4ee
;   undefined4 DAT_0057c4f6
;   undefined4 DAT_0057c4fe
;   undefined4 DAT_0057c506
;   undefined4 DAT_0057c50a
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;   crt_math.c_asin_FUN_00565c76
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044db00
        ;   Label: core_dirmat.cpp_FUN_0044db00
    MOV EBP,ESP                         ; 0044db01
    SUB ESP,0x4                         ; 0044db03
    AND ESP,0xfffffff8                  ; 0044db06
    FLD double ptr [EBP + 0x8]          ; 0044db09
    FCOMP double ptr [0x0057c4de]       ; 0044db0c | DAT_0057c4de
    FNSTSW AX                           ; 0044db12
    SAHF                                ; 0044db14
    JNC 0x0044db77                      ; 0044db15
        ;   XREF to: 0044db77 (CONDITIONAL_JUMP)  ; LAB_0044db77
    FLD double ptr [EBP + 0x8]          ; 0044db17
    FCOMP double ptr [0x0057c4e6]       ; 0044db1a | DAT_0057c4e6
    FNSTSW AX                           ; 0044db20
    SAHF                                ; 0044db22
    JBE 0x0044db77                      ; 0044db23
        ;   XREF to: 0044db77 (CONDITIONAL_JUMP)  ; LAB_0044db77
    FLD double ptr [EBP + 0x8]          ; 0044db25
    CALL crt_math.c_asin_FUN_00565c76   ; 0044db28
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLDZ                                ; 0044db2d
    FXCH                                ; 0044db2f
    FSTP float ptr [ESP]                ; 0044db31
    FCOMP double ptr [EBP + 0x10]       ; 0044db34
    FNSTSW AX                           ; 0044db37
    SAHF                                ; 0044db39
    JBE 0x0044db48                      ; 0044db3a
        ;   XREF to: 0044db48 (CONDITIONAL_JUMP)  ; LAB_0044db48
    FLD float ptr [ESP]                 ; 0044db3c
    FSUBR double ptr [0x0057c4f6]       ; 0044db3f | DAT_0057c4f6
    FSTP float ptr [ESP]                ; 0044db45
    FLD float ptr [ESP]                 ; 0044db48
        ;   Label: LAB_0044db48
    FCOMP double ptr [0x0057c4fe]       ; 0044db4b | DAT_0057c4fe
    FNSTSW AX                           ; 0044db51
    SAHF                                ; 0044db53
    JNC 0x0044db62                      ; 0044db54
        ;   XREF to: 0044db62 (CONDITIONAL_JUMP)  ; LAB_0044db62
    FLD float ptr [ESP]                 ; 0044db56
    FADD float ptr [0x0057c506]         ; 0044db59 | DAT_0057c506
    FSTP float ptr [ESP]                ; 0044db5f
    FLD float ptr [ESP]                 ; 0044db62
        ;   Label: LAB_0044db62
    FCOMP double ptr [0x0057c4f6]       ; 0044db65 | DAT_0057c4f6
    FNSTSW AX                           ; 0044db6b
    SAHF                                ; 0044db6d
    JA 0x0044dbbb                       ; 0044db6e
        ;   XREF to: 0044dbbb (CONDITIONAL_JUMP)  ; LAB_0044dbbb
    MOV EAX,dword ptr [ESP]             ; 0044db70
    MOV ESP,EBP                         ; 0044db73
    POP EBP                             ; 0044db75
    RET                                 ; 0044db76
    FLD double ptr [EBP + 0x10]         ; 0044db77
        ;   Label: LAB_0044db77
    FCOMP double ptr [0x0057c4ee]       ; 0044db7a | DAT_0057c4ee
    FNSTSW AX                           ; 0044db80
    SAHF                                ; 0044db82
    JA 0x0044db9d                       ; 0044db83
        ;   XREF to: 0044db9d (CONDITIONAL_JUMP)  ; LAB_0044db9d
    MOV dword ptr [ESP],0x40490fdb      ; 0044db85
    FLDZ                                ; 0044db8c
        ;   Label: LAB_0044db8c
    FCOMP double ptr [EBP + 0x8]        ; 0044db8e
    FNSTSW AX                           ; 0044db91
    SAHF                                ; 0044db93
    JBE 0x0044db48                      ; 0044db94
        ;   XREF to: 0044db48 (CONDITIONAL_JUMP)  ; LAB_0044db48
    XOR byte ptr [ESP + 0x3],0x80       ; 0044db96
    JMP 0x0044db48                      ; 0044db9b
        ;   XREF to: 0044db48 (UNCONDITIONAL_JUMP)  ; LAB_0044db48
    FLD1                                ; 0044db9d
        ;   Label: LAB_0044db9d
    FCOMP double ptr [EBP + 0x10]       ; 0044db9f
    FNSTSW AX                           ; 0044dba2
    SAHF                                ; 0044dba4
    JA 0x0044dbae                       ; 0044dba5
        ;   XREF to: 0044dbae (CONDITIONAL_JUMP)  ; LAB_0044dbae
    XOR EDX,EDX                         ; 0044dba7
    MOV dword ptr [ESP],EDX             ; 0044dba9
    JMP 0x0044db8c                      ; 0044dbac
        ;   XREF to: 0044db8c (UNCONDITIONAL_JUMP)  ; LAB_0044db8c
    FLD double ptr [EBP + 0x10]         ; 0044dbae
        ;   Label: LAB_0044dbae
    CALL crt_math.c_acos_FUN_00565ca4   ; 0044dbb1
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_00565ca4()
    FSTP float ptr [ESP]                ; 0044dbb6
    JMP 0x0044db8c                      ; 0044dbb9
        ;   XREF to: 0044db8c (UNCONDITIONAL_JUMP)  ; LAB_0044db8c
    FLD float ptr [ESP]                 ; 0044dbbb
        ;   Label: LAB_0044dbbb
    FADD float ptr [0x0057c50a]         ; 0044dbbe | DAT_0057c50a
    FSTP float ptr [ESP]                ; 0044dbc4
    MOV EAX,dword ptr [ESP]             ; 0044dbc7
    MOV ESP,EBP                         ; 0044dbca
    POP EBP                             ; 0044dbcc
    RET                                 ; 0044dbcd

