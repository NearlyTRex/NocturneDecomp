; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_larva_cpp_getSizeCategory_FUN_004c52c0(float param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0058786c
;   undefined4 DAT_00587874
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c52c0
        ;   Label: core_larva.cpp_getSizeCategory_FUN_004c52c0
    MOV EBP,ESP                         ; 004c52c1
    SUB ESP,0x8                         ; 004c52c3
    AND ESP,0xfffffff8                  ; 004c52c6
    FLD float ptr [EBP + 0x8]           ; 004c52c9
    FST double ptr [ESP]                ; 004c52cc
    FCOMP double ptr [0x0058786c]       ; 004c52cf | DAT_0058786c
    FNSTSW AX                           ; 004c52d5
    SAHF                                ; 004c52d7
    JC 0x004c52f1                       ; 004c52d8
        ;   XREF to: 004c52f1 (CONDITIONAL_JUMP)  ; LAB_004c52f1
    FLD double ptr [ESP]                ; 004c52da
    FCOMP double ptr [0x00587874]       ; 004c52dd | DAT_00587874
    FNSTSW AX                           ; 004c52e3
    SAHF                                ; 004c52e5
    JNC 0x004c52fa                      ; 004c52e6
        ;   XREF to: 004c52fa (CONDITIONAL_JUMP)  ; LAB_004c52fa
    MOV EAX,0x587863                    ; 004c52e8
    MOV ESP,EBP                         ; 004c52ed
    POP EBP                             ; 004c52ef
    RET                                 ; 004c52f0
    MOV EAX,0x58785f                    ; 004c52f1
        ;   Label: LAB_004c52f1
    MOV ESP,EBP                         ; 004c52f6
    POP EBP                             ; 004c52f8
    RET                                 ; 004c52f9
    MOV EAX,0x587867                    ; 004c52fa
        ;   Label: LAB_004c52fa
    MOV ESP,EBP                         ; 004c52ff
    POP EBP                             ; 004c5301
    RET                                 ; 004c5302

