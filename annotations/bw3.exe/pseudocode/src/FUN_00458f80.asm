; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00458f80(int param_1)
;
;
; Called Functions:
;   FUN_0040c7e0
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00458f80
        ;   Label: FUN_00458f80
    ADD EAX,0x158                       ; 00458f84
    PUSH EAX                            ; 00458f89
    CALL FUN_004fc070                   ; 00458f8a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00458f8f
    ADD ESP,0x4                         ; 00458f92
    CMP EAX,0x23                        ; 00458f95
    JNZ 0x00458fa0                      ; 00458f98
        ;   XREF to: 00458fa0 (CONDITIONAL_JUMP)  ; LAB_00458fa0
    MOV EAX,0x1                         ; 00458f9a
    RET                                 ; 00458f9f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00458fa0
        ;   Label: LAB_00458fa0
    PUSH EDX                            ; 00458fa4
    CALL FUN_0040c7e0                   ; 00458fa5
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c7e0()
    ADD ESP,0x4                         ; 00458faa
    RET                                 ; 00458fad

