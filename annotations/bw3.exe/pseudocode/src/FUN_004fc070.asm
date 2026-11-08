; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fc070(int *param_1)
;
;
; XREF[108]:
;   FUN_004179b0 at 00417e44
;   FUN_004192d0 at 00419328
;   FUN_00419b40 at 00419fb2
;   FUN_00425da0 at 00426971
;   FUN_00428a80 at 00428b04
;   FUN_0042c230 at 0042c7b8
;   FUN_00433130 at 00433175
;   FUN_0043e2a0 at 0043e514
;   FUN_00442a20 at 00442a3c
;   FUN_00443f00 at 00443f3f
;   ... and 98 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004fc070
        ;   Label: FUN_004fc070
    MOV EDX,dword ptr [ECX + 0x4]       ; 004fc074
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fc077
    ADD EAX,EDX                         ; 004fc07e
    MOV EDX,dword ptr [ECX]             ; 004fc080
    SHL EAX,0x5                         ; 004fc082
    ADD EDX,0x1c28                      ; 004fc085
    ADD EAX,EDX                         ; 004fc08b
    RET                                 ; 004fc08d

