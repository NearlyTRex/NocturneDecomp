; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00588900(void)
;
;
; XREF[1]:
;   thunk_FUN_00588900 at 00401120
;
; Referenced Globals:
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   undefined4 DAT_02661af0
;
; Called Functions:
;   FUN_0055f4d0
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588900
        ;   Label: FUN_00588900
    PUSH ESI                            ; 00588901
    PUSH EBP                            ; 00588902
    MOV EDX,dword ptr [0x00622010]      ; 00588903 | DAT_00622010
    TEST EDX,EDX                        ; 00588909
    JNZ 0x00588988                      ; 0058890b
        ;   XREF to: 00588988 (CONDITIONAL_JUMP)  ; LAB_00588988
    MOV ESI,dword ptr [0x02661af0]      ; 00588911 | DAT_02661af0
        ;   Label: LAB_00588911
    TEST ESI,ESI                        ; 00588917
    JZ 0x0058892c                       ; 00588919
        ;   XREF to: 0058892c (CONDITIONAL_JUMP)  ; LAB_0058892c
    PUSH ESI                            ; 0058891b
    CALL FUN_005b86a0                   ; 0058891c
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR EBP,EBP                         ; 00588921
    ADD ESP,0x4                         ; 00588923
    MOV dword ptr [0x0070c62c],EBP      ; 00588926 | DAT_0070c62c
    CALL FUN_0055f4d0                   ; 0058892c
        ;   XREF to: 0055f4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f4d0()
        ;   Label: LAB_0058892c
    MOV EAX,[0x02661aec]                ; 00588931 | DAT_02661aec
    TEST EAX,EAX                        ; 00588936
    JZ 0x00588948                       ; 00588938
        ;   XREF to: 00588948 (CONDITIONAL_JUMP)  ; LAB_00588948
    PUSH EAX                            ; 0058893a
    MOV EDX,dword ptr [EAX]             ; 0058893b
    CALL dword ptr [EDX + 0x8]          ; 0058893d
    XOR EDX,EDX                         ; 00588940
    MOV dword ptr [0x02661aec],EDX      ; 00588942 | DAT_02661aec
    MOV ECX,dword ptr [0x02661ae8]      ; 00588948 | DAT_02661ae8
        ;   Label: LAB_00588948
    TEST ECX,ECX                        ; 0058894e
    JZ 0x00588960                       ; 00588950
        ;   XREF to: 00588960 (CONDITIONAL_JUMP)  ; LAB_00588960
    PUSH ECX                            ; 00588952
    MOV EDX,dword ptr [ECX]             ; 00588953
    XOR EBX,EBX                         ; 00588955
    CALL dword ptr [EDX + 0x8]          ; 00588957
    MOV dword ptr [0x02661ae8],EBX      ; 0058895a | DAT_02661ae8
    MOV ESI,dword ptr [0x02661ae4]      ; 00588960 | DAT_02661ae4
        ;   Label: LAB_00588960
    TEST ESI,ESI                        ; 00588966
    JZ 0x0058897a                       ; 00588968
        ;   XREF to: 0058897a (CONDITIONAL_JUMP)  ; LAB_0058897a
    PUSH EDI                            ; 0058896a
    PUSH ESI                            ; 0058896b
    MOV EDX,dword ptr [ESI]             ; 0058896c
    XOR EDI,EDI                         ; 0058896e
    CALL dword ptr [EDX + 0x8]          ; 00588970
    MOV dword ptr [0x02661ae4],EDI      ; 00588973 | DAT_02661ae4
    POP EDI                             ; 00588979
    MOV EBP,dword ptr [0x02661ae0]      ; 0058897a | DAT_02661ae0
        ;   Label: LAB_0058897a
    TEST EBP,EBP                        ; 00588980
    JNZ 0x0058899e                      ; 00588982
        ;   XREF to: 0058899e (CONDITIONAL_JUMP)  ; LAB_0058899e
    POP EBP                             ; 00588984
    POP ESI                             ; 00588985
    POP EBX                             ; 00588986
    RET                                 ; 00588987
    PUSH EDX                            ; 00588988
        ;   Label: LAB_00588988
    CALL FUN_005b86a0                   ; 00588989
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR EBX,EBX                         ; 0058898e
    ADD ESP,0x4                         ; 00588990
    MOV dword ptr [0x00622010],EBX      ; 00588993 | DAT_00622010
    JMP 0x00588911                      ; 00588999
        ;   XREF to: 00588911 (UNCONDITIONAL_JUMP)  ; LAB_00588911
    PUSH EBP                            ; 0058899e
        ;   Label: LAB_0058899e
    MOV EDX,dword ptr [EBP]             ; 0058899f
    CALL dword ptr [EDX + 0x4c]         ; 005889a2
    MOV EAX,[0x02661ae0]                ; 005889a5 | DAT_02661ae0
    PUSH EAX                            ; 005889aa
    MOV EDX,dword ptr [EAX]             ; 005889ab
    CALL dword ptr [EDX + 0x8]          ; 005889ad
    XOR EAX,EAX                         ; 005889b0
    MOV [0x02661ae0],EAX                ; 005889b2 | DAT_02661ae0
    POP EBP                             ; 005889b7
    POP ESI                             ; 005889b8
    POP EBX                             ; 005889b9
    RET                                 ; 005889ba

