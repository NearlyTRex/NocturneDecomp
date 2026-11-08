; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054a2f0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0042e370 at 0042e388
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054a2f0
        ;   Label: FUN_0054a2f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054a2f4
    SUB EAX,EDX                         ; 0054a2fb
    MOV EDX,EAX                         ; 0054a2fd
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a2ff
    SHL EDX,0x5                         ; 0054a303
    ADD EAX,0xc04                       ; 0054a306
    ADD EAX,EDX                         ; 0054a30b
    RET                                 ; 0054a30d

