; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005abd9f(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005b0f93 at 005b0f9c
;   FUN_005b0ff9 at 005b1007
;
; Called Functions:
;   FUN_005af142
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005abd9f
        ;   Label: FUN_005abd9f
    CMP dword ptr [ESP + 0x8],0x0       ; 005abda3
    JZ 0x005abdc9                       ; 005abda8
        ;   XREF to: 005abdc9 (CONDITIONAL_JUMP)  ; LAB_005abdc9
    MOV EDX,dword ptr [EAX]             ; 005abdaa
        ;   Label: LAB_005abdaa
    MOV EDX,dword ptr [EDX + 0x4]       ; 005abdac
    CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0 ; 005abdaf
    JNZ 0x005abdd7                      ; 005abdb4
        ;   XREF to: 005abdd7 (CONDITIONAL_JUMP)  ; LAB_005abdd7
    MOV EDX,dword ptr [EAX]             ; 005abdb6
    MOV EDX,dword ptr [EDX + 0x4]       ; 005abdb8
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005abdbb
    TEST EDX,EDX                        ; 005abdbf
    JNZ 0x005abdd7                      ; 005abdc1
        ;   XREF to: 005abdd7 (CONDITIONAL_JUMP)  ; LAB_005abdd7
    MOV EAX,0x1                         ; 005abdc3
    RET                                 ; 005abdc8
    MOV EDX,dword ptr [EAX]             ; 005abdc9
        ;   Label: LAB_005abdc9
    MOV EDX,dword ptr [EDX + 0x4]       ; 005abdcb
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc] ; 005abdce
    TEST DL,0x1                         ; 005abdd2
    JZ 0x005abdaa                       ; 005abdd5
        ;   XREF to: 005abdaa (CONDITIONAL_JUMP)  ; LAB_005abdaa
    PUSH EBX                            ; 005abdd7
        ;   Label: LAB_005abdd7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005abdd8
    PUSH EBX                            ; 005abddc
    PUSH EAX                            ; 005abddd
    CALL FUN_005af142                   ; 005abdde
        ;   XREF to: 005af142 (UNCONDITIONAL_CALL)  ; undefined FUN_005af142()
    ADD ESP,0x8                         ; 005abde3
    POP EBX                             ; 005abde6
    RET                                 ; 005abde7

