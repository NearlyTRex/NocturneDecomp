; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004343b0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00434810 at 0043484b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004343b0
        ;   Label: FUN_004343b0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004343b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004343b5
    TEST EAX,EAX                        ; 004343b9
    JL 0x004343e8                       ; 004343bb
        ;   XREF to: 004343e8 (CONDITIONAL_JUMP)  ; LAB_004343e8
    MOV ECX,dword ptr [ESP + 0x8]       ; 004343bd
    SHL EAX,0x4                         ; 004343c1
    MOV ECX,dword ptr [ECX + 0x10]      ; 004343c4
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 004343c7
    TEST EAX,EAX                        ; 004343cb
    JL 0x004343e1                       ; 004343cd
        ;   XREF to: 004343e1 (CONDITIONAL_JUMP)  ; LAB_004343e1
    MOV EDX,EAX                         ; 004343cf
        ;   Label: LAB_004343cf
    SHL EDX,0x4                         ; 004343d1
    ADD EDX,ECX                         ; 004343d4
    CMP EBX,dword ptr [EDX]             ; 004343d6
    JZ 0x004343e6                       ; 004343d8
        ;   XREF to: 004343e6 (CONDITIONAL_JUMP)  ; LAB_004343e6
    MOV EAX,dword ptr [EDX + 0xc]       ; 004343da
    TEST EAX,EAX                        ; 004343dd
    JGE 0x004343cf                      ; 004343df
        ;   XREF to: 004343cf (CONDITIONAL_JUMP)  ; LAB_004343cf
    MOV EAX,0xffffffff                  ; 004343e1
        ;   Label: LAB_004343e1
    POP EBX                             ; 004343e6
        ;   Label: LAB_004343e6
    RET                                 ; 004343e7
    MOV EAX,EBX                         ; 004343e8
        ;   Label: LAB_004343e8
    POP EBX                             ; 004343ea
    RET                                 ; 004343eb

