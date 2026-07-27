; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_drender_cpp_FUN_00461d50(int *param_1,int *param_2)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 at 00461dfa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461d50
        ;   Label: engine_drender.cpp_FUN_00461d50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00461d51
    MOV EAX,dword ptr [ESP + 0xc]       ; 00461d55
    MOV EDX,dword ptr [EDX]             ; 00461d59
    MOV EAX,dword ptr [EAX]             ; 00461d5b
    MOV ECX,dword ptr [EDX + 0x8]       ; 00461d5d
    MOV EBX,dword ptr [EAX + 0x8]       ; 00461d60
    CMP ECX,EBX                         ; 00461d63
    JG 0x00461d70                       ; 00461d65
        ;   XREF to: 00461d70 (CONDITIONAL_JUMP)  ; LAB_00461d70
    JGE 0x00461d77                      ; 00461d67
        ;   XREF to: 00461d77 (CONDITIONAL_JUMP)  ; LAB_00461d77
    MOV EAX,0xffffffff                  ; 00461d69
    POP EBX                             ; 00461d6e
    RET                                 ; 00461d6f
    MOV EAX,0x1                         ; 00461d70
        ;   Label: LAB_00461d70
    POP EBX                             ; 00461d75
    RET                                 ; 00461d76
    XOR EAX,EAX                         ; 00461d77
        ;   Label: LAB_00461d77
    POP EBX                             ; 00461d79
    RET                                 ; 00461d7a

