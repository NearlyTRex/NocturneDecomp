; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * unkafter_2d_cpp_FUN_005c599c(int *param_1)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c41d2 at 005c4255
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c599c
        ;   Label: unkafter_2d.cpp_FUN_005c599c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c599d
    MOV EAX,dword ptr [EBX]             ; 005c59a1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c59a3
    CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 005c59a6
    JZ 0x005c59b1                       ; 005c59ab
        ;   XREF to: 005c59b1 (CONDITIONAL_JUMP)  ; LAB_005c59b1
    MOV EAX,EBX                         ; 005c59ad
        ;   Label: LAB_005c59ad
    POP EBX                             ; 005c59af
    RET                                 ; 005c59b0
    MOV EAX,dword ptr [EBX]             ; 005c59b1
        ;   Label: LAB_005c59b1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c59b3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005c59b6
    PUSH EAX                            ; 005c59ba
    MOV EDX,dword ptr [EAX + 0x28]      ; 005c59bb
    CALL dword ptr [EDX + 0x20]         ; 005c59be
    ADD ESP,0x4                         ; 005c59c1
    CMP EAX,-0x1                        ; 005c59c4
    JNZ 0x005c59ad                      ; 005c59c7
        ;   XREF to: 005c59ad (CONDITIONAL_JUMP)  ; LAB_005c59ad
    MOV EAX,dword ptr [EBX]             ; 005c59c9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c59cb
    PUSH 0x2                            ; 005c59ce
    ADD EAX,EBX                         ; 005c59d0
    PUSH EAX                            ; 005c59d2
    CALL crt_unknown.c_FUN_005c0b85     ; 005c59d3
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005c59d8
    MOV EAX,EBX                         ; 005c59db
    POP EBX                             ; 005c59dd
    RET                                 ; 005c59de

