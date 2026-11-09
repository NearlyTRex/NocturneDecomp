; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * unkafter_zombie_cpp_FUN_005bf0de(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9eb34
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005bf0de
        ;   Label: unkafter_zombie.cpp_FUN_005bf0de
    PUSH EBX                            ; 005bf0e0
    PUSH ESI                            ; 005bf0e1
    MOV EBX,dword ptr [0x02c9eb34]      ; 005bf0e2 | DAT_02c9eb34
    MOV ECX,dword ptr [ESP + 0xc]       ; 005bf0e8
    MOV ESI,dword ptr [ESP + 0x10]      ; 005bf0ec
    MOV EAX,0x2c9eb38                   ; 005bf0f0
    XOR EDX,EDX                         ; 005bf0f5
    TEST EBX,EBX                        ; 005bf0f7
    JLE 0x005bf10b                      ; 005bf0f9
        ;   XREF to: 005bf10b (CONDITIONAL_JUMP)  ; LAB_005bf10b
    CMP ECX,dword ptr [EAX]             ; 005bf0fb
        ;   Label: LAB_005bf0fb
    JNZ 0x005bf103                      ; 005bf0fd
        ;   XREF to: 005bf103 (CONDITIONAL_JUMP)  ; LAB_005bf103
    CMP EAX,ESI                         ; 005bf0ff
    JNZ 0x005bf10d                      ; 005bf101
        ;   XREF to: 005bf10d (CONDITIONAL_JUMP)  ; LAB_005bf10d
    INC EDX                             ; 005bf103
        ;   Label: LAB_005bf103
    ADD EAX,0x50                        ; 005bf104
    CMP EDX,EBX                         ; 005bf107
    JL 0x005bf0fb                       ; 005bf109
        ;   XREF to: 005bf0fb (CONDITIONAL_JUMP)  ; LAB_005bf0fb
    XOR EAX,EAX                         ; 005bf10b
        ;   Label: LAB_005bf10b
    MOV dword ptr [0x02c9eb34],EBX      ; 005bf10d | DAT_02c9eb34
        ;   Label: LAB_005bf10d
    POP ESI                             ; 005bf113
    POP EBX                             ; 005bf114
    RET                                 ; 005bf115

