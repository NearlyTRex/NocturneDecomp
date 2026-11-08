; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bb280(void)
;
;
; XREF[1]:
;   FUN_00522350 at 00524252
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01cb80e0
;   undefined4 DAT_01cb810c
;   undefined4 DAT_01cb8110
;   undefined4 DAT_01cb8114
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01cb80e0],0x3      ; 004bb280 | DAT_01cb80e0
        ;   Label: FUN_004bb280
    MOV EDX,dword ptr [0x006141b8]      ; 004bb28a | DAT_006141b8
    MOV EAX,EDX                         ; 004bb290
    SAR EDX,0x1f                        ; 004bb292
    SUB EAX,EDX                         ; 004bb295
    SAR EAX,0x1                         ; 004bb297
    MOV EDX,dword ptr [0x006141bc]      ; 004bb299 | DAT_006141bc
    MOV [0x01cb8110],EAX                ; 004bb29f | DAT_01cb8110
    MOV EAX,EDX                         ; 004bb2a4
    SAR EDX,0x1f                        ; 004bb2a6
    SUB EAX,EDX                         ; 004bb2a9
    SAR EAX,0x1                         ; 004bb2ab
    FILD dword ptr [0x006141b8]         ; 004bb2ad | DAT_006141b8
    FSTP float ptr [0x01cb810c]         ; 004bb2b3 | DAT_01cb810c
    MOV [0x01cb8114],EAX                ; 004bb2b9 | DAT_01cb8114
    MOV EAX,EAX                         ; 004bb2be

