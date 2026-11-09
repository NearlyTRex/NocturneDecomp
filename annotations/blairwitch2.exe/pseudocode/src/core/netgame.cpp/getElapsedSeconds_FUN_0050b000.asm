; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0050b000(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e038d
;   undefined4 DAT_005e0395
;   undefined4 DAT_01d34e38
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050b000
        ;   Label: core_netgame.cpp_getElapsedSeconds_FUN_0050b000
    MOV EBP,ESP                         ; 0050b001
    SUB ESP,0x8                         ; 0050b003
    AND ESP,0xfffffff8                  ; 0050b006
    MOV EDX,dword ptr [EBP + 0x8]       ; 0050b009
    MOV EAX,[0x01d34e38]                ; 0050b00c | DAT_01d34e38
    SUB EAX,EDX                         ; 0050b011
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b013
    FILD dword ptr [ESP + 0x4]          ; 0050b017
    FMUL double ptr [0x005e038d]        ; 0050b01b | DAT_005e038d
    FST float ptr [ESP]                 ; 0050b021
    FLDZ                                ; 0050b024
    FCOMPP                              ; 0050b026
    FNSTSW AX                           ; 0050b028
    SAHF                                ; 0050b02a
    JA 0x0050b042                       ; 0050b02b
        ;   XREF to: 0050b042 (CONDITIONAL_JUMP)  ; LAB_0050b042
    FLD float ptr [ESP]                 ; 0050b02d
        ;   Label: LAB_0050b02d
    FCOMP double ptr [0x005e0395]       ; 0050b030 | DAT_005e0395
    FNSTSW AX                           ; 0050b036
    SAHF                                ; 0050b038
    JA 0x0050b049                       ; 0050b039
        ;   XREF to: 0050b049 (CONDITIONAL_JUMP)  ; LAB_0050b049
    MOV EAX,dword ptr [ESP]             ; 0050b03b
    MOV ESP,EBP                         ; 0050b03e
    POP EBP                             ; 0050b040
    RET                                 ; 0050b041
    XOR ECX,ECX                         ; 0050b042
        ;   Label: LAB_0050b042
    MOV dword ptr [ESP],ECX             ; 0050b044
    JMP 0x0050b02d                      ; 0050b047
        ;   XREF to: 0050b02d (UNCONDITIONAL_JUMP)  ; LAB_0050b02d
    MOV dword ptr [ESP],0x41f00000      ; 0050b049
        ;   Label: LAB_0050b049
    MOV EAX,dword ptr [ESP]             ; 0050b050
    MOV ESP,EBP                         ; 0050b053
    POP EBP                             ; 0050b055
    RET                                 ; 0050b056

