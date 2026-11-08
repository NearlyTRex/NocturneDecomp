; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bd660(void)
;
;
; XREF[2]:
;   FUN_004b7f90 at 004b87c4
;   FUN_00529a70 at 0052b7ee
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01d22c84
;   undefined4 DAT_01d22c88
;   undefined4 DAT_01d22c8c
;   undefined4 DAT_01d22c90
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01d22c84],0x3      ; 004bd660 | DAT_01d22c84
        ;   Label: FUN_004bd660
    MOV EDX,dword ptr [0x005fba18]      ; 004bd66a | DAT_005fba18
    MOV EAX,EDX                         ; 004bd670
    SAR EDX,0x1f                        ; 004bd672
    SUB EAX,EDX                         ; 004bd675
    SAR EAX,0x1                         ; 004bd677
    MOV EDX,dword ptr [0x005fba1c]      ; 004bd679 | DAT_005fba1c
    MOV [0x01d22c8c],EAX                ; 004bd67f | DAT_01d22c8c
    MOV EAX,EDX                         ; 004bd684
    SAR EDX,0x1f                        ; 004bd686
    SUB EAX,EDX                         ; 004bd689
    SAR EAX,0x1                         ; 004bd68b
    FILD dword ptr [0x005fba18]         ; 004bd68d | DAT_005fba18
    FSTP float ptr [0x01d22c88]         ; 004bd693 | DAT_01d22c88
    MOV [0x01d22c90],EAX                ; 004bd699 | DAT_01d22c90
    MOV EAX,EAX                         ; 004bd69e

