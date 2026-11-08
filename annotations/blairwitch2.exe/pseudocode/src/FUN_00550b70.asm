; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00550b70(undefined4 param_1)
;
;
; XREF[64]:
;   FUN_00411200 at 00411374
;   FUN_00411a10 at 00412064
;   FUN_00412760 at 00412889
;   FUN_00412f40 at 00413697
;   FUN_00414290 at 004143b9
;   FUN_004186c0 at 00418d35
;   FUN_0041dbe0 at 0041dca2
;   FUN_0041ead0 at 0041ecdf
;   FUN_00436e80 at 00437566
;   FUN_00437de0 at 00437e4b
;   ... and 54 more
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;   FUN_00552b30
;
; *****************************************************************************

section .text

    CALL FUN_00552b30                   ; 00550b70
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b30()
        ;   Label: FUN_00550b70
    CMP EAX,0x1                         ; 00550b75
    JL 0x00550b99                       ; 00550b78
        ;   XREF to: 00550b99 (CONDITIONAL_JUMP)  ; LAB_00550b99
    PUSH 0x1                            ; 00550b7a
    MOV ECX,dword ptr [ESP + 0x8]       ; 00550b7c
    PUSH ECX                            ; 00550b80
    CALL FUN_0054d3a0                   ; 00550b81
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550b86
    TEST EAX,EAX                        ; 00550b89
    JNZ 0x00550b8e                      ; 00550b8b
        ;   XREF to: 00550b8e (CONDITIONAL_JUMP)  ; LAB_00550b8e
    RET                                 ; 00550b8d
    CALL FUN_00551440                   ; 00550b8e
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
        ;   Label: LAB_00550b8e
    MOV EAX,0x1                         ; 00550b93
    RET                                 ; 00550b98
    PUSH 0x0                            ; 00550b99
        ;   Label: LAB_00550b99
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550b9b
    PUSH EDX                            ; 00550b9f
    CALL FUN_0054d3a0                   ; 00550ba0
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550ba5
    TEST EAX,EAX                        ; 00550ba8
    SETNZ AL                            ; 00550baa
    AND EAX,0xff                        ; 00550bad
    RET                                 ; 00550bb2

