; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1980(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0056eb60 at 0056edf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b1980
        ;   Label: FUN_005b1980
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b1984
    ADD EAX,EDX                         ; 005b198b
    SHL EAX,0x3                         ; 005b198d
    SUB EAX,EDX                         ; 005b1990
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b1992
    SHL EAX,0x2                         ; 005b1996
    ADD EAX,EDX                         ; 005b1999
    MOV dword ptr [EAX + 0x470],0xffffffff ; 005b199b
    MOV dword ptr [EAX + 0x40c],0x0     ; 005b19a5
    RET                                 ; 005b19af

