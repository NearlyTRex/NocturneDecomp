; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0058ba12
;   undefined4 DAT_0058ba1a
;   undefined4 DAT_01cea3f8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e95d0
        ;   Label: core_netgame.cpp_getElapsedSeconds_FUN_004e95d0
    MOV EBP,ESP                         ; 004e95d1
    SUB ESP,0x8                         ; 004e95d3
    AND ESP,0xfffffff8                  ; 004e95d6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004e95d9
    MOV EAX,[0x01cea3f8]                ; 004e95dc | DAT_01cea3f8
    SUB EAX,EDX                         ; 004e95e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004e95e3
    FILD dword ptr [ESP + 0x4]          ; 004e95e7
    FMUL double ptr [0x0058ba12]        ; 004e95eb | DAT_0058ba12
    FST float ptr [ESP]                 ; 004e95f1
    FLDZ                                ; 004e95f4
    FCOMPP                              ; 004e95f6
    FNSTSW AX                           ; 004e95f8
    SAHF                                ; 004e95fa
    JA 0x004e9612                       ; 004e95fb
        ;   XREF to: 004e9612 (CONDITIONAL_JUMP)  ; LAB_004e9612
    FLD float ptr [ESP]                 ; 004e95fd
        ;   Label: LAB_004e95fd
    FCOMP double ptr [0x0058ba1a]       ; 004e9600 | DAT_0058ba1a
    FNSTSW AX                           ; 004e9606
    SAHF                                ; 004e9608
    JA 0x004e9619                       ; 004e9609
        ;   XREF to: 004e9619 (CONDITIONAL_JUMP)  ; LAB_004e9619
    MOV EAX,dword ptr [ESP]             ; 004e960b
    MOV ESP,EBP                         ; 004e960e
    POP EBP                             ; 004e9610
    RET                                 ; 004e9611
    XOR ECX,ECX                         ; 004e9612
        ;   Label: LAB_004e9612
    MOV dword ptr [ESP],ECX             ; 004e9614
    JMP 0x004e95fd                      ; 004e9617
        ;   XREF to: 004e95fd (UNCONDITIONAL_JUMP)  ; LAB_004e95fd
    MOV dword ptr [ESP],0x41f00000      ; 004e9619
        ;   Label: LAB_004e9619
    MOV EAX,dword ptr [ESP]             ; 004e9620
    MOV ESP,EBP                         ; 004e9623
    POP EBP                             ; 004e9625
    RET                                 ; 004e9626

