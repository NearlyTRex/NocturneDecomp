; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059bc10(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bc10
        ;   Label: FUN_0059bc10
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059bc11
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059bc15
    MOV ECX,dword ptr [EDX]             ; 0059bc19
    CMP ECX,0x1                         ; 0059bc1b
    JNZ 0x0059bc30                      ; 0059bc1e
        ;   XREF to: 0059bc30 (CONDITIONAL_JUMP)  ; LAB_0059bc30
    MOV EBX,dword ptr [EAX + 0x174]     ; 0059bc20
    CMP EBX,0x4                         ; 0059bc26
    JZ 0x0059bc5e                       ; 0059bc29
        ;   XREF to: 0059bc5e (CONDITIONAL_JUMP)  ; LAB_0059bc5e
    CMP EBX,0x7                         ; 0059bc2b
    JZ 0x0059bc5e                       ; 0059bc2e
        ;   XREF to: 0059bc5e (CONDITIONAL_JUMP)  ; LAB_0059bc5e
    CMP dword ptr [EDX],0x3             ; 0059bc30
        ;   Label: LAB_0059bc30
    JNZ 0x0059bc49                      ; 0059bc33
        ;   XREF to: 0059bc49 (CONDITIONAL_JUMP)  ; LAB_0059bc49
    CMP dword ptr [EAX + 0x174],0x5     ; 0059bc35
    JNZ 0x0059bc49                      ; 0059bc3c
        ;   XREF to: 0059bc49 (CONDITIONAL_JUMP)  ; LAB_0059bc49
    MOV EBX,dword ptr [EAX + 0x2f4]     ; 0059bc3e
    CMP EBX,dword ptr [EDX + 0x4]       ; 0059bc44
    JZ 0x0059bc57                       ; 0059bc47
        ;   XREF to: 0059bc57 (CONDITIONAL_JUMP)  ; LAB_0059bc57
    CMP dword ptr [EDX],0x4             ; 0059bc49
        ;   Label: LAB_0059bc49
    JNZ 0x0059bc62                      ; 0059bc4c
        ;   XREF to: 0059bc62 (CONDITIONAL_JUMP)  ; LAB_0059bc62
    CMP dword ptr [EAX + 0x174],0xa     ; 0059bc4e
    JNZ 0x0059bc62                      ; 0059bc55
        ;   XREF to: 0059bc62 (CONDITIONAL_JUMP)  ; LAB_0059bc62
    MOV EAX,0x1                         ; 0059bc57
        ;   Label: LAB_0059bc57
    POP EBX                             ; 0059bc5c
    RET                                 ; 0059bc5d
    MOV EAX,ECX                         ; 0059bc5e
        ;   Label: LAB_0059bc5e
    POP EBX                             ; 0059bc60
    RET                                 ; 0059bc61
    XOR EAX,EAX                         ; 0059bc62
        ;   Label: LAB_0059bc62
    POP EBX                             ; 0059bc64
    RET                                 ; 0059bc65

