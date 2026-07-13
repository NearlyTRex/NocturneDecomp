; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00519b10(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00426570 at 00426588
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00519b10
        ;   Label: FUN_00519b10
    LEA EAX,[EDX*0x4 + 0x0]             ; 00519b14
    SUB EAX,EDX                         ; 00519b1b
    MOV EDX,EAX                         ; 00519b1d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519b1f
    SHL EDX,0x5                         ; 00519b23
    ADD EAX,0xc04                       ; 00519b26
    ADD EAX,EDX                         ; 00519b2b
    RET                                 ; 00519b2d

