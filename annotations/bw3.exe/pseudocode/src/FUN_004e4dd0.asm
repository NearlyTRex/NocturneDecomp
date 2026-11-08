; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e4dd0(uint param_1)
;
;
; XREF[2]:
;   FUN_004dbe70 at 004dbf66
;   FUN_004e56b0 at 004e5819
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4dd0
        ;   Label: FUN_004e4dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4dd1
    MOV EAX,EBX                         ; 004e4dd5
    SAR EAX,0x8                         ; 004e4dd7
    AND EAX,0xff                        ; 004e4dda
    MOV ECX,dword ptr [EAX*0x4 + 0x1d72240] ; 004e4ddf
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72244] ; 004e4de6
    AND EBX,0xff                        ; 004e4ded
    SUB EDX,ECX                         ; 004e4df3
    IMUL EDX,EBX                        ; 004e4df5
    MOV EAX,EDX                         ; 004e4df8
    SAR EDX,0x1f                        ; 004e4dfa
    SHL EDX,0x8                         ; 004e4dfd
    SBB EAX,EDX                         ; 004e4e00
    SAR EAX,0x8                         ; 004e4e02
    ADD EAX,ECX                         ; 004e4e05
    POP EBX                             ; 004e4e07
    RET                                 ; 004e4e08

