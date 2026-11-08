; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059db70(int param_1)
;
;
; XREF[5]:
;   FUN_0059fae0 at 0059fbb6
;   FUN_0059fc10 at 0059fedd
;   FUN_005a0270 at 005a0344
;   FUN_005aad70 at 005aadae
;   FUN_005ac2f0 at 005ac4f3
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059db70
        ;   Label: FUN_0059db70
    MOV EDX,dword ptr [ECX + 0x840]     ; 0059db74
    DEC EDX                             ; 0059db7a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059db7b
    SUB EAX,EDX                         ; 0059db82
    SHL EAX,0x3                         ; 0059db84
    ADD EAX,EDX                         ; 0059db87
    ADD EAX,ECX                         ; 0059db89
    RET                                 ; 0059db8b

