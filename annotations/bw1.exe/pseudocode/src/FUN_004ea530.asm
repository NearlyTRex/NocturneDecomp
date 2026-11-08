; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ea530(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004f9bd0 at 004f9db9
;
; Referenced Globals:
;   undefined4 DAT_005e45f5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea530
        ;   Label: FUN_004ea530
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ea534
    CMP dword ptr [EDX + 0x2d4],0x0     ; 004ea538
    JLE 0x004ea56e                      ; 004ea53f
        ;   XREF to: 004ea56e (CONDITIONAL_JUMP)  ; LAB_004ea56e
    FLD float ptr [EDX + 0x2d8]         ; 004ea541
    FADD float ptr [ECX + 0x2538]       ; 004ea547
    FST float ptr [ECX + 0x2538]        ; 004ea54d
    FCOMP double ptr [0x005e45f5]       ; 004ea553 | DAT_005e45f5
    FNSTSW AX                           ; 004ea559
    SAHF                                ; 004ea55b
    JBE 0x004ea568                      ; 004ea55c
        ;   XREF to: 004ea568 (CONDITIONAL_JUMP)  ; LAB_004ea568
    MOV dword ptr [ECX + 0x2538],0x42c80000 ; 004ea55e
    DEC dword ptr [EDX + 0x2d4]         ; 004ea568
        ;   Label: LAB_004ea568
    MOV EAX,dword ptr [EDX + 0x2d4]     ; 004ea56e
        ;   Label: LAB_004ea56e
    RET                                 ; 004ea574

