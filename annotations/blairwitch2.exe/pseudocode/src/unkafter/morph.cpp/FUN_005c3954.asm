; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c3954(uint param_1,byte *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005befc0 at 005bf013
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3954
        ;   Label: unkafter_morph.cpp_FUN_005c3954
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c3955
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3959
    MOV EAX,EBX                         ; 005c395d
    AND EAX,0x70                        ; 005c395f
    AND EBX,0x7                         ; 005c3962
    CMP EAX,0x20                        ; 005c3965
    JC 0x005c397a                       ; 005c3968
        ;   XREF to: 005c397a (CONDITIONAL_JUMP)  ; LAB_005c397a
    JBE 0x005c39a4                      ; 005c396a
        ;   XREF to: 005c39a4 (CONDITIONAL_JUMP)  ; LAB_005c39a4
    CMP EAX,0x30                        ; 005c396c
    JC 0x005c39b2                       ; 005c396f
        ;   XREF to: 005c39b2 (CONDITIONAL_JUMP)  ; LAB_005c39b2
    JBE 0x005c399c                      ; 005c3971
        ;   XREF to: 005c399c (CONDITIONAL_JUMP)  ; LAB_005c399c
    CMP EAX,0x40                        ; 005c3973
    JZ 0x005c39ac                       ; 005c3976
        ;   XREF to: 005c39ac (CONDITIONAL_JUMP)  ; LAB_005c39ac
    POP EBX                             ; 005c3978
    RET                                 ; 005c3979
    TEST EAX,EAX                        ; 005c397a
        ;   Label: LAB_005c397a
    JBE 0x005c3985                      ; 005c397c
        ;   XREF to: 005c3985 (CONDITIONAL_JUMP)  ; LAB_005c3985
    CMP EAX,0x10                        ; 005c397e
    JZ 0x005c3994                       ; 005c3981
        ;   XREF to: 005c3994 (CONDITIONAL_JUMP)  ; LAB_005c3994
    POP EBX                             ; 005c3983
    RET                                 ; 005c3984
    MOV dword ptr [EDX],0x1             ; 005c3985
        ;   Label: LAB_005c3985
    TEST EBX,EBX                        ; 005c398b
    JNZ 0x005c39b2                      ; 005c398d
        ;   XREF to: 005c39b2 (CONDITIONAL_JUMP)  ; LAB_005c39b2
    OR byte ptr [EDX],0x2               ; 005c398f
    POP EBX                             ; 005c3992
    RET                                 ; 005c3993
    MOV dword ptr [EDX],0x0             ; 005c3994
        ;   Label: LAB_005c3994
    POP EBX                             ; 005c399a
    RET                                 ; 005c399b
    MOV dword ptr [EDX],0x2             ; 005c399c
        ;   Label: LAB_005c399c
    POP EBX                             ; 005c39a2
    RET                                 ; 005c39a3
    MOV dword ptr [EDX],0x1             ; 005c39a4
        ;   Label: LAB_005c39a4
    POP EBX                             ; 005c39aa
    RET                                 ; 005c39ab
    MOV dword ptr [EDX],0x3             ; 005c39ac
        ;   Label: LAB_005c39ac
    POP EBX                             ; 005c39b2
        ;   Label: LAB_005c39b2
    RET                                 ; 005c39b3

