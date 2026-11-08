; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ce900(void)
;
;
; XREF[2]:
;   FUN_004ce950 at 004ce95f
;   FUN_004ce980 at 004ce990
;
; Referenced Globals:
;   undefined4 DAT_01d276b4
;   undefined4 DAT_01d276b8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01d276b4]      ; 004ce900 | DAT_01d276b4
        ;   Label: FUN_004ce900
    LEA EAX,[ECX*0x8 + 0x0]             ; 004ce906
    ADD EAX,ECX                         ; 004ce90d
    SHL EAX,0x3                         ; 004ce90f
    INC ECX                             ; 004ce912
    ADD EAX,0x1d276bc                   ; 004ce913
    CMP ECX,0x7d0                       ; 004ce918
    JL 0x004ce922                       ; 004ce91e
        ;   XREF to: 004ce922 (CONDITIONAL_JUMP)  ; LAB_004ce922
    XOR ECX,ECX                         ; 004ce920
    MOV EDX,dword ptr [0x01d276b8]      ; 004ce922 | DAT_01d276b8
        ;   Label: LAB_004ce922
    CMP EDX,0x7d0                       ; 004ce928
    JL 0x004ce937                       ; 004ce92e
        ;   XREF to: 004ce937 (CONDITIONAL_JUMP)  ; LAB_004ce937
    MOV dword ptr [0x01d276b4],ECX      ; 004ce930 | DAT_01d276b4
    RET                                 ; 004ce936
    PUSH EBX                            ; 004ce937
        ;   Label: LAB_004ce937
    LEA EBX,[EDX + 0x1]                 ; 004ce938
    MOV dword ptr [0x01d276b8],EBX      ; 004ce93b | DAT_01d276b8
    POP EBX                             ; 004ce941
    MOV dword ptr [0x01d276b4],ECX      ; 004ce942 | DAT_01d276b4
    RET                                 ; 004ce948

