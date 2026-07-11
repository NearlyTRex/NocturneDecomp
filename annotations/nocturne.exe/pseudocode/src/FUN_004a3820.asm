; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3820(void)
;
;
; XREF[2]:
;   FUN_0049da10 at 0049e574
;   FUN_004ff2c0 at 00500b8b
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;   undefined4 DAT_01c78b0c
;   undefined4 DAT_01c78b10
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01c78b04],0x3      ; 004a3820 | DAT_01c78b04
        ;   Label: FUN_004a3820
    MOV EDX,dword ptr [0x005b761c]      ; 004a382a | DAT_005b761c
    MOV EAX,EDX                         ; 004a3830
    SAR EDX,0x1f                        ; 004a3832
    SUB EAX,EDX                         ; 004a3835
    SAR EAX,0x1                         ; 004a3837
    MOV EDX,dword ptr [0x005b7620]      ; 004a3839 | DAT_005b7620
    MOV [0x01c78b0c],EAX                ; 004a383f | DAT_01c78b0c
    MOV EAX,EDX                         ; 004a3844
    SAR EDX,0x1f                        ; 004a3846
    SUB EAX,EDX                         ; 004a3849
    SAR EAX,0x1                         ; 004a384b
    FILD dword ptr [0x005b761c]         ; 004a384d | DAT_005b761c
    FSTP float ptr [0x01c78b08]         ; 004a3853 | DAT_01c78b08
    MOV [0x01c78b10],EAX                ; 004a3859 | DAT_01c78b10
    MOV EAX,EAX                         ; 004a385e

