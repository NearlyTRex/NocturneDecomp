; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e6c4(void)
;
;
; XREF[1]:
;   FUN_0056e7fc at 0056e882
;
; Referenced Globals:
;   void* PTR_TlsFree_005755c4 = 00176092
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005c1ab8]      ; 0056e6c4 | DAT_005c1ab8
        ;   Label: FUN_0056e6c4
    CMP EDX,-0x1                        ; 0056e6ca
    JZ 0x0056e6e1                       ; 0056e6cd
        ;   XREF to: 0056e6e1 (CONDITIONAL_JUMP)  ; LAB_0056e6e1
    PUSH EDX                            ; 0056e6cf
    CALL dword ptr CS:[0x5755c4]        ; 0056e6d0 | PTR_TlsFree_005755c4
    MOV dword ptr [0x005c1ab8],0xffffffff ; 0056e6d7 | DAT_005c1ab8
    RET                                 ; 0056e6e1
        ;   Label: LAB_0056e6e1

