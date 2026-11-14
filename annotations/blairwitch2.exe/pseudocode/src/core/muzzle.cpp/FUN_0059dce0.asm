; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059dce0(int param_1)
;
;
; XREF[1]:
;   core_muzzle.cpp_FUN_0059dcb0 at 0059dcb5
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0059dc46
        ;   Label: LAB_0059dc46
    RET                                 ; 0059dc48
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059dce0
        ;   Label: core_muzzle.cpp_FUN_0059dce0
    FLD float ptr [EAX + 0x848]         ; 0059dce4
    FLDZ                                ; 0059dcea
    FCOMPP                              ; 0059dcec
    FNSTSW AX                           ; 0059dcee
    SAHF                                ; 0059dcf0
    JNC 0x0059dc46                      ; 0059dcf1
        ;   XREF to: 0059dc46 (CONDITIONAL_JUMP)  ; LAB_0059dc46
    MOV EAX,0x1                         ; 0059dcf7
    RET                                 ; 0059dcfc

