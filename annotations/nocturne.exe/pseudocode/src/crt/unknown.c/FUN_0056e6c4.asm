; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e6c4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e7fc at 0056e882
;
; Referenced Globals:
;   void* PTR_TlsFree_005755c4 = 00176092
;   int g_INT_005c1ab8 = -0x1
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005c1ab8]      ; 0056e6c4 | g_INT_005c1ab8
        ;   Label: crt_unknown.c_FUN_0056e6c4
    CMP EDX,-0x1                        ; 0056e6ca
    JZ 0x0056e6e1                       ; 0056e6cd
        ;   XREF to: 0056e6e1 (CONDITIONAL_JUMP)  ; LAB_0056e6e1
    PUSH EDX                            ; 0056e6cf
    CALL dword ptr CS:[0x5755c4]        ; 0056e6d0 | PTR_TlsFree_005755c4
    MOV dword ptr [0x005c1ab8],0xffffffff ; 0056e6d7 | g_INT_005c1ab8
    RET                                 ; 0056e6e1
        ;   Label: LAB_0056e6e1

