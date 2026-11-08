; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507bf0(int param_1)
;
;
; XREF[3]:
;   FUN_00407af0 at 00407d25
;   FUN_00407df0 at 0040802f
;   FUN_00483e70 at 00484102
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629020
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507bf0
        ;   Label: FUN_00507bf0
    PUSH ESI                            ; 00507bf1
    PUSH EDI                            ; 00507bf2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00507bf3
    LEA ECX,[EAX*0x4 + 0x0]             ; 00507bf7
    SUB ECX,EAX                         ; 00507bfe
    MOV EAX,0x7fffffff                  ; 00507c00
    SHL ECX,0x4                         ; 00507c05
    MOV EDX,EAX                         ; 00507c08
    MOV EBX,dword ptr [ECX + 0x62901c]  ; 00507c0a | DAT_0062901c
    SAR EDX,0x1f                        ; 00507c10
    IDIV EBX                            ; 00507c13
    MOV dword ptr [ECX + 0x629020],EAX  ; 00507c15 | DAT_00629020
    MOV EDX,dword ptr [0x01c4eff8]      ; 00507c1b | DAT_01c4eff8
    MOV EBX,dword ptr [ECX + 0x62901c]  ; 00507c21 | DAT_0062901c
    MOV EAX,dword ptr [ECX + 0x629014]  ; 00507c27 | DAT_00629014
    IMUL EDX                            ; 00507c2d
    IDIV EBX                            ; 00507c2f
    MOV ESI,dword ptr [0x01c4f000]      ; 00507c31 | DAT_01c4f000
    ADD EAX,ESI                         ; 00507c37
    MOV dword ptr [ECX + 0x629024],EAX  ; 00507c39 | DAT_00629024
    MOV EDX,dword ptr [0x01c4effc]      ; 00507c3f | DAT_01c4effc
    MOV EBX,dword ptr [ECX + 0x62901c]  ; 00507c45 | DAT_0062901c
    MOV EAX,dword ptr [ECX + 0x629018]  ; 00507c4b | DAT_00629018
    IMUL EDX                            ; 00507c51
    IDIV EBX                            ; 00507c53
    MOV EDI,dword ptr [0x01c4f004]      ; 00507c55 | DAT_01c4f004
    ADD EAX,EDI                         ; 00507c5b
    MOV dword ptr [ECX + 0x629028],EAX  ; 00507c5d | DAT_00629028
    POP EDI                             ; 00507c63
    POP ESI                             ; 00507c64
    POP EBX                             ; 00507c65
    RET                                 ; 00507c66

