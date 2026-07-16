; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int dll_dx7_cpp_FUN_10004d10(uint param_1)
;
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30 at 10004bde
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 10004d10
        ;   Label: dll_dx7.cpp_FUN_10004d10
    MOV ECX,dword ptr [ESP + 0x4]       ; 10004d12
    CMP ECX,EAX                         ; 10004d16
    JNZ 0x10004d20                      ; 10004d18
        ;   XREF to: 10004d20 (CONDITIONAL_JUMP)  ; LAB_10004d20
    MOV EAX,0x20                        ; 10004d1a
    RET                                 ; 10004d1f
    CMP ECX,0x1                         ; 10004d20
        ;   Label: LAB_10004d20
    JBE 0x10004d2e                      ; 10004d23
        ;   XREF to: 10004d2e (CONDITIONAL_JUMP)  ; LAB_10004d2e
    SHR ECX,0x1                         ; 10004d25
        ;   Label: LAB_10004d25
    INC EAX                             ; 10004d28
    CMP ECX,0x1                         ; 10004d29
    JA 0x10004d25                       ; 10004d2c
        ;   XREF to: 10004d25 (CONDITIONAL_JUMP)  ; LAB_10004d25
    RET                                 ; 10004d2e
        ;   Label: LAB_10004d2e

