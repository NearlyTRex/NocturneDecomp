; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571e75(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   FUN_005700d0 at 00570122
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571e75
        ;   Label: FUN_00571e75
    PUSH EDI                            ; 00571e76
    MOV EAX,dword ptr [ESP + 0xc]       ; 00571e77
    MOV ECX,dword ptr [ESP + 0x10]      ; 00571e7b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00571e7f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00571e83
    SUB EDX,EBX                         ; 00571e87
    TEST ECX,ECX                        ; 00571e89
    JNZ 0x00571e99                      ; 00571e8b
        ;   XREF to: 00571e99 (CONDITIONAL_JUMP)  ; LAB_00571e99
    CMP EAX,EDX                         ; 00571e8d
    JLE 0x00571e96                      ; 00571e8f
        ;   XREF to: 00571e96 (CONDITIONAL_JUMP)  ; LAB_00571e96
    MOV EAX,0xffffffff                  ; 00571e91
        ;   Label: LAB_00571e91
    POP EDI                             ; 00571e96
        ;   Label: LAB_00571e96
    POP EBX                             ; 00571e97
    RET                                 ; 00571e98
    CMP ECX,0x2                         ; 00571e99
        ;   Label: LAB_00571e99
    JNZ 0x00571eb1                      ; 00571e9c
        ;   XREF to: 00571eb1 (CONDITIONAL_JUMP)  ; LAB_00571eb1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00571e9e
    NEG EAX                             ; 00571ea2
    SUB EDX,EBX                         ; 00571ea4
    CMP EAX,EDX                         ; 00571ea6
    JG 0x00571e91                       ; 00571ea8
        ;   XREF to: 00571e91 (CONDITIONAL_JUMP)  ; LAB_00571e91
    SUB EDX,EAX                         ; 00571eaa
        ;   Label: LAB_00571eaa
    MOV EAX,EDX                         ; 00571eac
        ;   Label: LAB_00571eac
    POP EDI                             ; 00571eae
    POP EBX                             ; 00571eaf
    RET                                 ; 00571eb0
    CMP ECX,0x1                         ; 00571eb1
        ;   Label: LAB_00571eb1
    JNZ 0x00571e91                      ; 00571eb4
        ;   XREF to: 00571e91 (CONDITIONAL_JUMP)  ; LAB_00571e91
    MOV EDX,dword ptr [ESP + 0x18]      ; 00571eb6
    MOV ECX,dword ptr [ESP + 0x20]      ; 00571eba
    MOV EDI,dword ptr [ESP + 0x18]      ; 00571ebe
    SUB EDX,EBX                         ; 00571ec2
    SUB ECX,EDI                         ; 00571ec4
    TEST EAX,EAX                        ; 00571ec6
    JL 0x00571ed5                       ; 00571ec8
        ;   XREF to: 00571ed5 (CONDITIONAL_JUMP)  ; LAB_00571ed5
    JLE 0x00571eac                      ; 00571eca
        ;   XREF to: 00571eac (CONDITIONAL_JUMP)  ; LAB_00571eac
    CMP EAX,ECX                         ; 00571ecc
    JG 0x00571e91                       ; 00571ece
        ;   XREF to: 00571e91 (CONDITIONAL_JUMP)  ; LAB_00571e91
    ADD EAX,EDX                         ; 00571ed0
    POP EDI                             ; 00571ed2
    POP EBX                             ; 00571ed3
    RET                                 ; 00571ed4
    NEG EAX                             ; 00571ed5
        ;   Label: LAB_00571ed5
    CMP EAX,EDX                         ; 00571ed7
    JLE 0x00571eaa                      ; 00571ed9
        ;   XREF to: 00571eaa (CONDITIONAL_JUMP)  ; LAB_00571eaa
    JMP 0x00571e91                      ; 00571edb
        ;   XREF to: 00571e91 (UNCONDITIONAL_JUMP)  ; LAB_00571e91

