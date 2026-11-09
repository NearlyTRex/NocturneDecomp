; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_passngr_cpp_FUN_00532edc(int param_1,undefined4 param_2,int param_3,undefined1 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01e7abe0
;   undefined4 DAT_01e7d35c
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00532edc
        ;   Label: unkafter_passngr.cpp_FUN_00532edc
    PUSH EBX                            ; 00532ee0
    MOV ECX,dword ptr [0x01e7abe0]      ; 00532ee1 | DAT_01e7abe0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00532ee7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532eeb
    SUB EAX,EDX                         ; 00532ef2
    SHL EAX,0x3                         ; 00532ef4
    ADD EAX,EDX                         ; 00532ef7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00532ef9
    SHL EAX,0x2                         ; 00532efd
    ADD EAX,EDX                         ; 00532f00
    MOV DL,byte ptr [ESP + 0x14]        ; 00532f02
    MOV byte ptr [EAX + 0x1e7abe8],DL   ; 00532f06
    LEA EAX,[ECX*0x4 + 0x0]             ; 00532f0c
    MOV EBX,dword ptr [0x01e7d35c]      ; 00532f13 | DAT_01e7d35c
    SUB EAX,ECX                         ; 00532f19
    MOV EDX,dword ptr [ESP + 0x8]       ; 00532f1b
    INC EBX                             ; 00532f1f
    MOV dword ptr [EAX*0x4 + 0x1e6c17c],EDX ; 00532f20
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532f27
    MOV dword ptr [0x01e7d35c],EBX      ; 00532f2b | DAT_01e7d35c
    MOV dword ptr [EAX*0x4 + 0x1e6c180],EDX ; 00532f31
    MOV EDX,dword ptr [ESP + 0x10]      ; 00532f38
    INC ECX                             ; 00532f3c
    MOV dword ptr [EAX*0x4 + 0x1e6c184],EDX ; 00532f3d
    CMP ECX,0x1388                      ; 00532f44
    JL 0x00532f4e                       ; 00532f4a
        ;   XREF to: 00532f4e (CONDITIONAL_JUMP)  ; LAB_00532f4e
    XOR ECX,ECX                         ; 00532f4c
    MOV dword ptr [0x01e7abe0],ECX      ; 00532f4e | DAT_01e7abe0
        ;   Label: LAB_00532f4e
    POP EBX                             ; 00532f54
    RET                                 ; 00532f55

