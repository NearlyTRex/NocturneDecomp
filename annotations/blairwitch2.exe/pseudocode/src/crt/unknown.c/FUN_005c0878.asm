; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0878(int param_1,uint param_2)
;
;
; XREF[5]:
;   crt_unknown.c_FUN_005bebb0 at 005bebf9
;   crt_unknown.c_FUN_005bec40 at 005becd2
;   crt_unknown.c_FUN_005befc0 at 005bf1ef
;   crt_unknown.c_FUN_005c0380 at 005c03d2
;   crt_unknown.c_FUN_005c59e0 at 005c5afa
;
; Referenced Globals:
;   undefined4 DAT_0061f484
;   void* PTR_DAT_0061f4d4 = 0061f484
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0878
        ;   Label: crt_unknown.c_FUN_005c0878
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c0879
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c087d
    SHL EAX,0x2                         ; 005c0881
    TEST EDX,EDX                        ; 005c0884
    JZ 0x005c0896                       ; 005c0886
        ;   XREF to: 005c0896 (CONDITIONAL_JUMP)  ; LAB_005c0896
    MOV EBX,dword ptr [0x0061f4d4]      ; 005c0888 | PTR_DAT_0061f4d4
    OR DH,0x40                          ; 005c088e
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005c0891 | DAT_0061f484
    POP EBX                             ; 005c0894
    RET                                 ; 005c0895
    MOV EBX,dword ptr [0x0061f4d4]      ; 005c0896 | PTR_DAT_0061f4d4
        ;   Label: LAB_005c0896
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005c089c | DAT_0061f484
    POP EBX                             ; 005c089f
    RET                                 ; 005c08a0

