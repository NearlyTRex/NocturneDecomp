; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3bb0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bc8c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_FUN_004f3740
;   engine_mini3d.cpp_FUN_004f7da0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f3bb0
        ;   Label: engine_mini3d.cpp_FUN_004f3bb0
    PUSH EBP                            ; 004f3bb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3bb2
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3bb6 | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f3bbc | DAT_01d09854
    ADD EDX,EAX                         ; 004f3bc2
    ADD ECX,dword ptr [ESP + 0x10]      ; 004f3bc4
    MOV dword ptr [0x01e61b58],EDX      ; 004f3bc8 | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f3bce | DAT_01d09854
    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f3bd4
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
    CALL engine_mini3d.cpp_FUN_004f7da0 ; 004f3bd9
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7da0()
    CMP dword ptr [0x0264bc8c],0x0      ; 004f3bde | DAT_0264bc8c
    JZ 0x004f3c1a                       ; 004f3be5
        ;   XREF to: 004f3c1a (CONDITIONAL_JUMP)  ; LAB_004f3c1a
    CMP dword ptr [0x01c37788],0x0      ; 004f3be7 | DAT_01c37788
    JZ 0x004f3c1a                       ; 004f3bee
        ;   XREF to: 004f3c1a (CONDITIONAL_JUMP)  ; LAB_004f3c1a
    PUSH ESI                            ; 004f3bf0
    PUSH EBX                            ; 004f3bf1
    MOV EAX,[0x01c38b54]                ; 004f3bf2 | DAT_01c38b54
    PUSH EAX                            ; 004f3bf7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f3bf8
    PUSH EDX                            ; 004f3bfc
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f3bfd
    PUSH ECX                            ; 004f3c01
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f3c02
    PUSH EBX                            ; 004f3c06
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f3c07
    PUSH ESI                            ; 004f3c0b
    CALL dword ptr [0x0264bc8c]         ; 004f3c0c | DAT_0264bc8c
    ADD ESP,0x14                        ; 004f3c12
    POP EBX                             ; 004f3c15
    POP ESI                             ; 004f3c16
    POP EBP                             ; 004f3c17
    POP EDI                             ; 004f3c18
    RET                                 ; 004f3c19
    MOV EDI,0x5ddccc                    ; 004f3c1a
        ;   Label: LAB_004f3c1a
    MOV EBP,0x73a                       ; 004f3c1f
    PUSH 0x5ddce1                       ; 004f3c24
    MOV dword ptr [0x01d046a0],EDI      ; 004f3c29 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f3c2f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3c35
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f3c3a
    POP EBP                             ; 004f3c3d
    POP EDI                             ; 004f3c3e
    RET                                 ; 004f3c3f

