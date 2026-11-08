; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004430d0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00443530 at 0044356b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004430d0
        ;   Label: FUN_004430d0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004430d1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004430d5
    TEST EAX,EAX                        ; 004430d9
    JL 0x00443108                       ; 004430db
        ;   XREF to: 00443108 (CONDITIONAL_JUMP)  ; LAB_00443108
    MOV ECX,dword ptr [ESP + 0x8]       ; 004430dd
    SHL EAX,0x4                         ; 004430e1
    MOV ECX,dword ptr [ECX + 0x10]      ; 004430e4
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 004430e7
    TEST EAX,EAX                        ; 004430eb
    JL 0x00443101                       ; 004430ed
        ;   XREF to: 00443101 (CONDITIONAL_JUMP)  ; LAB_00443101
    MOV EDX,EAX                         ; 004430ef
        ;   Label: LAB_004430ef
    SHL EDX,0x4                         ; 004430f1
    ADD EDX,ECX                         ; 004430f4
    CMP EBX,dword ptr [EDX]             ; 004430f6
    JZ 0x00443106                       ; 004430f8
        ;   XREF to: 00443106 (CONDITIONAL_JUMP)  ; LAB_00443106
    MOV EAX,dword ptr [EDX + 0xc]       ; 004430fa
    TEST EAX,EAX                        ; 004430fd
    JGE 0x004430ef                      ; 004430ff
        ;   XREF to: 004430ef (CONDITIONAL_JUMP)  ; LAB_004430ef
    MOV EAX,0xffffffff                  ; 00443101
        ;   Label: LAB_00443101
    POP EBX                             ; 00443106
        ;   Label: LAB_00443106
    RET                                 ; 00443107
    MOV EAX,EBX                         ; 00443108
        ;   Label: LAB_00443108
    POP EBX                             ; 0044310a
    RET                                 ; 0044310b

