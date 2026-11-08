; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582bf0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ce580 at 004cedb4
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c8342c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582bf0 | DAT_01c50948
        ;   Label: FUN_00582bf0
    JNZ 0x00582bfc                      ; 00582bf7
        ;   XREF to: 00582bfc (CONDITIONAL_JUMP)  ; LAB_00582bfc
    XOR EAX,EAX                         ; 00582bf9
    RET                                 ; 00582bfb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582bfc
        ;   Label: LAB_00582bfc
    PUSH ECX                            ; 00582c00
    CALL dword ptr [0x02c8342c]         ; 00582c01 | DAT_02c8342c
    ADD ESP,0x4                         ; 00582c07
    RET                                 ; 00582c0a

