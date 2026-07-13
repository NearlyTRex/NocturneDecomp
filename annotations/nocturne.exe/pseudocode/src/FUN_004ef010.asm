; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef010(int param_1)
;
;
; XREF[8]:
;   FUN_0048c960 at 0048c965
;   FUN_0048c990 at 0048c995
;   FUN_0048c9c0 at 0048c9c5
;   FUN_0048cb00 at 0048cb05
;   FUN_0048cb80 at 0048cb85
;   FUN_0048cbb0 at 0048cbb5
;   FUN_0048cbe0 at 0048cbe5
;   FUN_004b0a30 at 004b0a35
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1034 = 004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef010
        ;   Label: FUN_004ef010
    MOV dword ptr [EAX + 0x18],0x0      ; 004ef014
    MOV dword ptr [EAX + 0x34],0x5a1034 ; 004ef01b | PTR_FUN_005a1034
    RET                                 ; 004ef022

