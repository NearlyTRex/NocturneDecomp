; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582790(void)
;
;
; XREF[2]:
;   FUN_0044ceb0 at 0044d0e8
;   FUN_0057dc40 at 0057dc4b
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833e8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582790 | DAT_01c50948
        ;   Label: FUN_00582790
    JNZ 0x0058279c                      ; 00582797
        ;   XREF to: 0058279c (CONDITIONAL_JUMP)  ; LAB_0058279c
    XOR EAX,EAX                         ; 00582799
    RET                                 ; 0058279b
    CALL dword ptr [0x02c833e8]         ; 0058279c | DAT_02c833e8
        ;   Label: LAB_0058279c
    RET                                 ; 005827a2

