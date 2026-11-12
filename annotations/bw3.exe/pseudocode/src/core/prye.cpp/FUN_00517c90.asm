; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_prye_cpp_FUN_00517c90(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_prye.cpp_FUN_0051c1c0 at 0051de70
;
; Referenced Globals:
;   undefined4 DAT_005cca77
;   undefined4 DAT_005cca7f
;   undefined4 DAT_01ed36d8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00517c90
        ;   Label: core_prye.cpp_FUN_00517c90
    MOV EBP,ESP                         ; 00517c91
    SUB ESP,0x8                         ; 00517c93
    AND ESP,0xfffffff8                  ; 00517c96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00517c99
    FLD float ptr [EBP + 0x10]          ; 00517c9c
    FMUL float ptr [0x01ed36d8]         ; 00517c9f | DAT_01ed36d8
    FSTP float ptr [ESP]                ; 00517ca5
    TEST EAX,EAX                        ; 00517ca8
    JLE 0x00517cc6                      ; 00517caa
        ;   XREF to: 00517cc6 (CONDITIONAL_JUMP)  ; LAB_00517cc6
    CMP EAX,0x1                         ; 00517cac
    JNZ 0x00517cd1                      ; 00517caf
        ;   XREF to: 00517cd1 (CONDITIONAL_JUMP)  ; LAB_00517cd1
    FLD float ptr [ESP]                 ; 00517cb1
    FMUL double ptr [0x005cca77]        ; 00517cb4 | DAT_005cca77
    FSTP float ptr [ESP + 0x4]          ; 00517cba
        ;   Label: LAB_00517cba
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517cbe
    MOV ESP,EBP                         ; 00517cc2
    POP EBP                             ; 00517cc4
    RET                                 ; 00517cc5
    FLD float ptr [ESP]                 ; 00517cc6
        ;   Label: LAB_00517cc6
    FMUL double ptr [0x005cca7f]        ; 00517cc9 | DAT_005cca7f
    JMP 0x00517cba                      ; 00517ccf
        ;   XREF to: 00517cba (UNCONDITIONAL_JUMP)  ; LAB_00517cba
    MOV EAX,dword ptr [EBP + 0x10]      ; 00517cd1
        ;   Label: LAB_00517cd1
    MOV dword ptr [ESP + 0x4],EAX       ; 00517cd4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517cd8
    MOV ESP,EBP                         ; 00517cdc
    POP EBP                             ; 00517cde
    RET                                 ; 00517cdf

