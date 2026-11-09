; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005743c0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005743c0
        ;   Label: support_trstream.cpp_FUN_005743c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005743c1
    CMP dword ptr [EDX + 0x4],0x0       ; 005743c5
    JZ 0x005743da                       ; 005743c9
        ;   XREF to: 005743da (CONDITIONAL_JUMP)  ; LAB_005743da
    MOV EBX,dword ptr [EDX + 0x8]       ; 005743cb
    CMP EBX,dword ptr [EDX + 0xc]       ; 005743ce
    JG 0x005743e1                       ; 005743d1
        ;   XREF to: 005743e1 (CONDITIONAL_JUMP)  ; LAB_005743e1
    MOV EAX,0x1                         ; 005743d3
    POP EBX                             ; 005743d8
    RET                                 ; 005743d9
    MOV EAX,0xffffffff                  ; 005743da
        ;   Label: LAB_005743da
    POP EBX                             ; 005743df
    RET                                 ; 005743e0
    XOR EAX,EAX                         ; 005743e1
        ;   Label: LAB_005743e1
    POP EBX                             ; 005743e3
    RET                                 ; 005743e4

