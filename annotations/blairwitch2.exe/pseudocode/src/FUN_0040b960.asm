; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b960(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[68]:
;   FUN_0040c330 at 0040c39c
;   FUN_0040e1b0 at 0040e1f2
;   FUN_0040e860 at 0040e8a2
;   FUN_0040ecc0 at 0040ed16
;   FUN_0040f4d0 at 0040f4fe
;   FUN_00410600 at 0041064f
;   FUN_00410dc0 at 00410e0f
;   FUN_00413e60 at 00413ee8
;   FUN_00415250 at 004152a1
;   FUN_00415f50 at 00415f70
;   ... and 58 more
;
; Referenced Globals:
;   undefined4 DAT_005cab46
;   undefined4 DAT_005cab49
;   TerminatedCString s_Integer_value_00609578
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   FUN_0040b380
;   FUN_0040b400
;   FUN_005b8010
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b960
        ;   Label: FUN_0040b960
    PUSH EDI                            ; 0040b961
    PUSH EBP                            ; 0040b962
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b963
    CMP dword ptr [0x007bc038],0x1      ; 0040b967 | DAT_007bc038
    JNZ 0x0040b9b4                      ; 0040b96e
        ;   XREF to: 0040b9b4 (CONDITIONAL_JUMP)  ; LAB_0040b9b4
    PUSH EAX                            ; 0040b970
    PUSH 0x5cab46                       ; 0040b971 | DAT_005cab46
    MOV ESI,dword ptr [0x007bc034]      ; 0040b976 | DAT_007bc034
    PUSH ESI                            ; 0040b97c
    CALL FUN_005b8100                   ; 0040b97d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0040b982
    CMP EAX,0x1                         ; 0040b985
    JNZ 0x0040b9a0                      ; 0040b988
        ;   XREF to: 0040b9a0 (CONDITIONAL_JUMP)  ; LAB_0040b9a0
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b98a
        ;   Label: LAB_0040b98a
    PUSH EBP                            ; 0040b98e
    PUSH 0x609578                       ; 0040b98f | = "Integer value"
    CALL FUN_0040b400                   ; 0040b994
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b999
    POP EBP                             ; 0040b99c
    POP EDI                             ; 0040b99d
    POP ESI                             ; 0040b99e
    RET                                 ; 0040b99f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b9a0
        ;   Label: LAB_0040b9a0
    PUSH EDI                            ; 0040b9a4
    PUSH 0x609578                       ; 0040b9a5 | = "Integer value"
    CALL FUN_0040b380                   ; 0040b9aa
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b9af
    JMP 0x0040b98a                      ; 0040b9b2
        ;   XREF to: 0040b98a (UNCONDITIONAL_JUMP)  ; LAB_0040b98a
    PUSH EBX                            ; 0040b9b4
        ;   Label: LAB_0040b9b4
    MOV ECX,dword ptr [EAX]             ; 0040b9b5
    PUSH ECX                            ; 0040b9b7
    PUSH 0x609590                       ; 0040b9b8 | DAT_00609590
    PUSH 0x5cab49                       ; 0040b9bd | DAT_005cab49
    MOV EBX,dword ptr [0x007bc034]      ; 0040b9c2 | DAT_007bc034
    PUSH EBX                            ; 0040b9c8
    CALL FUN_005b8010                   ; 0040b9c9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 0040b9ce
    POP EBX                             ; 0040b9d1
    JMP 0x0040b98a                      ; 0040b9d2
        ;   XREF to: 0040b98a (UNCONDITIONAL_JUMP)  ; LAB_0040b98a

