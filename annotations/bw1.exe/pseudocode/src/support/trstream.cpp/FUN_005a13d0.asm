; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a13d0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a13d0
        ;   Label: support_trstream.cpp_FUN_005a13d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a13d1
    CMP dword ptr [EDX + 0x4],0x0       ; 005a13d5
    JZ 0x005a13ea                       ; 005a13d9
        ;   XREF to: 005a13ea (CONDITIONAL_JUMP)  ; LAB_005a13ea
    MOV EBX,dword ptr [EDX + 0x8]       ; 005a13db
    CMP EBX,dword ptr [EDX + 0xc]       ; 005a13de
    JG 0x005a13f1                       ; 005a13e1
        ;   XREF to: 005a13f1 (CONDITIONAL_JUMP)  ; LAB_005a13f1
    MOV EAX,0x1                         ; 005a13e3
    POP EBX                             ; 005a13e8
    RET                                 ; 005a13e9
    MOV EAX,0xffffffff                  ; 005a13ea
        ;   Label: LAB_005a13ea
    POP EBX                             ; 005a13ef
    RET                                 ; 005a13f0
    XOR EAX,EAX                         ; 005a13f1
        ;   Label: LAB_005a13f1
    POP EBX                             ; 005a13f3
    RET                                 ; 005a13f4

