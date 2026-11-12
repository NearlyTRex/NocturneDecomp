; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_0054b890(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0264901c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054b890
        ;   Label: sound_sndmain.cpp_FUN_0054b890
    CMP dword ptr [0x0264901c],0x0      ; 0054b891 | DAT_0264901c
    JLE 0x0054b8c2                      ; 0054b898
        ;   XREF to: 0054b8c2 (CONDITIONAL_JUMP)  ; LAB_0054b8c2
    MOV ESI,dword ptr [0x0263cf80]      ; 0054b89a | DAT_0263cf80
        ;   Label: LAB_0054b89a
    XOR EAX,EAX                         ; 0054b8a0
    XOR EDX,EDX                         ; 0054b8a2
    TEST ESI,ESI                        ; 0054b8a4
    JZ 0x0054b8be                       ; 0054b8a6
        ;   XREF to: 0054b8be (CONDITIONAL_JUMP)  ; LAB_0054b8be
    ADD EAX,0x11c                       ; 0054b8a8
        ;   Label: LAB_0054b8a8
    INC EDX                             ; 0054b8ad
    CMP EAX,0x4700                      ; 0054b8ae
    JGE 0x0054b8e9                      ; 0054b8b3
        ;   XREF to: 0054b8e9 (CONDITIONAL_JUMP)  ; LAB_0054b8e9
    CMP dword ptr [EAX + 0x263cf80],0x0 ; 0054b8b5
    JNZ 0x0054b8a8                      ; 0054b8bc
        ;   XREF to: 0054b8a8 (CONDITIONAL_JUMP)  ; LAB_0054b8a8
    MOV EAX,EDX                         ; 0054b8be
        ;   Label: LAB_0054b8be
    POP ESI                             ; 0054b8c0
    RET                                 ; 0054b8c1
    PUSH EBX                            ; 0054b8c2
        ;   Label: LAB_0054b8c2
    MOV ECX,0x5e7a23                    ; 0054b8c3
    MOV EBX,0x249                       ; 0054b8c8
    PUSH 0x5e7a38                       ; 0054b8cd
    MOV dword ptr [0x01d046a0],ECX      ; 0054b8d2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054b8d8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054b8de
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054b8e3
    POP EBX                             ; 0054b8e6
    JMP 0x0054b89a                      ; 0054b8e7
        ;   XREF to: 0054b89a (UNCONDITIONAL_JUMP)  ; LAB_0054b89a
    MOV EAX,0xffffffff                  ; 0054b8e9
        ;   Label: LAB_0054b8e9
    POP ESI                             ; 0054b8ee
    RET                                 ; 0054b8ef

