; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * unkafter_zombie_cpp_FUN_0059a06e(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_026672a8
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0059a06e
        ;   Label: unkafter_zombie.cpp_FUN_0059a06e
    PUSH EBX                            ; 0059a070
    PUSH ESI                            ; 0059a071
    MOV EBX,dword ptr [0x026672a8]      ; 0059a072 | DAT_026672a8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059a078
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059a07c
    MOV EAX,0x26672ac                   ; 0059a080
    XOR EDX,EDX                         ; 0059a085
    TEST EBX,EBX                        ; 0059a087
    JLE 0x0059a09b                      ; 0059a089
        ;   XREF to: 0059a09b (CONDITIONAL_JUMP)  ; LAB_0059a09b
    CMP ECX,dword ptr [EAX]             ; 0059a08b
        ;   Label: LAB_0059a08b
    JNZ 0x0059a093                      ; 0059a08d
        ;   XREF to: 0059a093 (CONDITIONAL_JUMP)  ; LAB_0059a093
    CMP EAX,ESI                         ; 0059a08f
    JNZ 0x0059a09d                      ; 0059a091
        ;   XREF to: 0059a09d (CONDITIONAL_JUMP)  ; LAB_0059a09d
    INC EDX                             ; 0059a093
        ;   Label: LAB_0059a093
    ADD EAX,0x50                        ; 0059a094
    CMP EDX,EBX                         ; 0059a097
    JL 0x0059a08b                       ; 0059a099
        ;   XREF to: 0059a08b (CONDITIONAL_JUMP)  ; LAB_0059a08b
    XOR EAX,EAX                         ; 0059a09b
        ;   Label: LAB_0059a09b
    MOV dword ptr [0x026672a8],EBX      ; 0059a09d | DAT_026672a8
        ;   Label: LAB_0059a09d
    POP ESI                             ; 0059a0a3
    POP EBX                             ; 0059a0a4
    RET                                 ; 0059a0a5

