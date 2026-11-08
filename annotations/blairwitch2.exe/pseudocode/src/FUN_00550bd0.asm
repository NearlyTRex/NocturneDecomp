; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550bd0(int param_1)
;
;
; XREF[4]:
;   FUN_004b82e0 at 004b8440
;   FUN_004ed260 at 004edb33
;   FUN_004ee3f0 at 004ee724
;   FUN_00553680 at 00553899
;
; Referenced Globals:
;   undefined4 DAT_02648e8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00550bd0
        ;   Label: FUN_00550bd0
    MOV [0x02648e8c],EAX                ; 00550bd4 | DAT_02648e8c
    TEST EAX,EAX                        ; 00550bd9
    JNZ 0x005526b0                      ; 00550bdb
        ;   XREF to: 005526b0 (CONDITIONAL_JUMP)
    RET                                 ; 00550be1

