; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dd20(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_004a1870 at 004a1997
;   FUN_004a38e0 at 004a3992
;   FUN_004a5700 at 004a5c90
;   FUN_004a61b0 at 004a642e
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dd20
        ;   Label: FUN_0040dd20
    PUSH ESI                            ; 0040dd21
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040dd22
    MOV EAX,dword ptr [EDX + 0xc]       ; 0040dd26
    IMUL EAX,dword ptr [EDX + 0x10]     ; 0040dd29
    PUSH EAX                            ; 0040dd2d
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dd2e
    PUSH EBX                            ; 0040dd32
    MOV ESI,dword ptr [EDX + 0x4]       ; 0040dd33
    PUSH ESI                            ; 0040dd36
    CALL FUN_005b77c0                   ; 0040dd37
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0040dd3c
    POP ESI                             ; 0040dd3f
    POP EBX                             ; 0040dd40
    RET                                 ; 0040dd41

