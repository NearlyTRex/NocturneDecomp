; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544ee0(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_004f04f0 at 004f076d
;   FUN_00501530 at 00501aff
;   FUN_005115e0 at 00511684
;   FUN_005474b0 at 005475da
;   FUN_0056f3a0 at 0056f695
;   FUN_0056f6d0 at 0056f980
;   FUN_00581660 at 0058180e
;   FUN_00581910 at 00581971
;   FUN_005ae680 at 005af096
;   FUN_005b6510 at 005b6517
;
; Called Functions:
;   FUN_00544f00
;   FUN_00546ae0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00544ee0
        ;   Label: FUN_00544ee0
    PUSH EDX                            ; 00544ee4
    CALL FUN_00544f00                   ; 00544ee5
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00544eea
    MOV ECX,dword ptr [ESP + 0x4]       ; 00544eed
    PUSH ECX                            ; 00544ef1
    CALL FUN_00546ae0                   ; 00544ef2
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 00544ef7
    RET                                 ; 00544efa

