; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434810(int param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_00428810 at 00428a29
;   FUN_00445730 at 004458b3
;   FUN_00458680 at 00458816
;   FUN_004c9140 at 004c92d6
;   FUN_004d7bd0 at 004d7d6b
;   FUN_004f9050 at 004f9155
;   FUN_0058c330 at 0058c549
;   FUN_0058f630 at 0058f8d4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434810
        ;   Label: FUN_00434810
    FLD float ptr [EDX + 0x324c]        ; 00434814
    FLDZ                                ; 0043481a
    FCOMPP                              ; 0043481c
    FNSTSW AX                           ; 0043481e
    SAHF                                ; 00434820
    JNC 0x00434824                      ; 00434821
        ;   XREF to: 00434824 (CONDITIONAL_JUMP)  ; LAB_00434824
    RET                                 ; 00434823
    MOV ECX,dword ptr [ESP + 0x8]       ; 00434824
        ;   Label: LAB_00434824
    PUSH ECX                            ; 00434828
    MOV EAX,dword ptr [EDX + 0x154]     ; 00434829
    PUSH EDX                            ; 0043482f
    MOV dword ptr [EDX + 0x324c],0x3dcccccd ; 00434830
    CALL dword ptr [EAX + 0x2c]         ; 0043483a
    ADD ESP,0x8                         ; 0043483d
    RET                                 ; 00434840

