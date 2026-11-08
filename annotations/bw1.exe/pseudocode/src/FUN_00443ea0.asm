; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443ea0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443ea0
        ;   Label: FUN_00443ea0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00443ea1
    CMP dword ptr [EAX + 0x10],0x0      ; 00443ea5
    JZ 0x00443eb8                       ; 00443ea9
        ;   XREF to: 00443eb8 (CONDITIONAL_JUMP)  ; LAB_00443eb8
    CMP dword ptr [EAX + 0x4],0x0       ; 00443eab
    JZ 0x00443eb8                       ; 00443eaf
        ;   XREF to: 00443eb8 (CONDITIONAL_JUMP)  ; LAB_00443eb8
    MOV EBX,dword ptr [EAX + 0x8]       ; 00443eb1
    TEST EBX,EBX                        ; 00443eb4
    JNZ 0x00443ebc                      ; 00443eb6
        ;   XREF to: 00443ebc (CONDITIONAL_JUMP)  ; LAB_00443ebc
    XOR EAX,EAX                         ; 00443eb8
        ;   Label: LAB_00443eb8
    POP EBX                             ; 00443eba
    RET                                 ; 00443ebb
    PUSH EBX                            ; 00443ebc
        ;   Label: LAB_00443ebc
    MOV EDX,dword ptr [EBX]             ; 00443ebd
    CALL dword ptr [EDX + 0x1c]         ; 00443ebf
    ADD ESP,0x4                         ; 00443ec2
    POP EBX                             ; 00443ec5
    RET                                 ; 00443ec6

