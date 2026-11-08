; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004087f0(int param_1)
;
;
; XREF[67]:
;   FUN_0040df20 at 0040df2b
;   FUN_0040e810 at 0040e81d
;   FUN_0040f200 at 0040f20b
;   FUN_00414bd0 at 00414c19
;   FUN_00414d40 at 00414dac
;   FUN_00414e90 at 00414ed6
;   FUN_00418f90 at 00418fad
;   FUN_004215f0 at 00421626
;   FUN_0042a280 at 0042a2b2
;   FUN_0042e220 at 0042e250
;   ... and 57 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046ce90
;   FUN_0046cf30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004087f0
        ;   Label: FUN_004087f0
    ADD EAX,0x20                        ; 004087f4
    PUSH EAX                            ; 004087f7
    MOV EDX,dword ptr [0x005f2afc]      ; 004087f8 | DAT_005f2afc
    PUSH EDX                            ; 004087fe | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 004087ff
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 00408804
    MOV EAX,dword ptr [ESP + 0x4]       ; 00408807
    PUSH 0x0                            ; 0040880b
    ADD EAX,0x30                        ; 0040880d
    PUSH EAX                            ; 00408810
    MOV ECX,dword ptr [0x005f2afc]      ; 00408811 | DAT_005f2afc
    PUSH ECX                            ; 00408817 | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 00408818
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0040881d
    RET                                 ; 00408820

