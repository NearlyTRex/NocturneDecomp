; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00403970(int *param_1)
;
;
; XREF[65]:
;   FUN_00403af0 at 00403afe
;   FUN_00403bc0 at 00403bce
;   FUN_00403ce0 at 00403cee
;   FUN_00403d80 at 00403d8e
;   FUN_00403f40 at 00403f4d
;   FUN_00404140 at 0040414e
;   FUN_00404240 at 00404252
;   FUN_004044c0 at 004044ce
;   FUN_004046e0 at 004046f4
;   FUN_00404860 at 0040486d
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_0070ca68
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403970
        ;   Label: FUN_00403970
    PUSH ESI                            ; 00403971
    MOV EDX,dword ptr [0x0070ca68]      ; 00403972 | DAT_0070ca68
    INC EDX                             ; 00403978
    MOV ESI,dword ptr [ESP + 0xc]       ; 00403979
    MOV dword ptr [0x0070ca68],EDX      ; 0040397d | DAT_0070ca68
    MOV EAX,0x1                         ; 00403983
    CMP dword ptr [0x0070ca7c],0x0      ; 00403988 | DAT_0070ca7c
    JNZ 0x004039d8                      ; 0040398f
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EBX,dword ptr [ESI]             ; 00403991
    OR EBX,dword ptr [ESI + 0x4]        ; 00403993
    OR EBX,dword ptr [ESI + 0x8]        ; 00403996
    OR EBX,dword ptr [ESI + 0xc]        ; 00403999
    JZ 0x004039d8                       ; 0040399c
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EAX,dword ptr [ESI]             ; 0040399e
    IMUL dword ptr [0x01c38b6c]         ; 004039a0 | DAT_01c38b6c
    MOV EBX,EAX                         ; 004039a6
    MOV ECX,EDX                         ; 004039a8
    MOV EAX,dword ptr [ESI + 0x4]       ; 004039aa
    IMUL dword ptr [0x01c38b70]         ; 004039ad | DAT_01c38b70
    ADD EBX,EAX                         ; 004039b3
    ADC ECX,EDX                         ; 004039b5
    MOV EAX,dword ptr [ESI + 0x8]       ; 004039b7
    IMUL dword ptr [0x01c38b74]         ; 004039ba | DAT_01c38b74
    ADD EBX,EAX                         ; 004039c0
    ADC ECX,EDX                         ; 004039c2
    MOV EAX,dword ptr [ESI + 0xc]       ; 004039c4
    CDQ                                 ; 004039c7
    SUB EAX,EBX                         ; 004039c8
    SBB EDX,ECX                         ; 004039ca
    MOV EAX,0x1                         ; 004039cc
    JL 0x004039d8                       ; 004039d1
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EAX,0x0                         ; 004039d3
    POP ESI                             ; 004039d8
        ;   Label: LAB_004039d8
    POP EBX                             ; 004039d9
    RET                                 ; 004039da

