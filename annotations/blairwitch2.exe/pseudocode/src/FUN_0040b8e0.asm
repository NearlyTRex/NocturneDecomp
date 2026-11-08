; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b8e0(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[73]:
;   FUN_0040c330 at 0040c37d
;   FUN_0040e860 at 0040e8c7
;   FUN_0040ecc0 at 0040ed02
;   FUN_0040f040 at 0040f05b
;   FUN_00411110 at 0041113e
;   FUN_004124a0 at 004124bb
;   FUN_00413e60 at 00413e7b
;   FUN_004148b0 at 004148de
;   FUN_00414b10 at 00414b2b
;   FUN_00415250 at 0041526b
;   ... and 63 more
;
; Referenced Globals:
;   undefined4 DAT_005cab3e
;   undefined4 DAT_005cab41
;   TerminatedCString s_Floating_point_value_00609560
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

    PUSH EBX                            ; 0040b8e0
        ;   Label: FUN_0040b8e0
    PUSH EDI                            ; 0040b8e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b8e2
    CMP dword ptr [0x007bc038],0x1      ; 0040b8e6 | DAT_007bc038
    JNZ 0x0040b934                      ; 0040b8ed
        ;   XREF to: 0040b934 (CONDITIONAL_JUMP)  ; LAB_0040b934
    PUSH EAX                            ; 0040b8ef
    PUSH 0x5cab3e                       ; 0040b8f0 | DAT_005cab3e
    MOV EBX,dword ptr [0x007bc034]      ; 0040b8f5 | DAT_007bc034
    PUSH EBX                            ; 0040b8fb
    CALL FUN_005b8100                   ; 0040b8fc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0040b901
    CMP EAX,0x1                         ; 0040b904
    JNZ 0x0040b91e                      ; 0040b907
        ;   XREF to: 0040b91e (CONDITIONAL_JUMP)  ; LAB_0040b91e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b909
        ;   Label: LAB_0040b909
    PUSH EDI                            ; 0040b90d
    PUSH 0x609560                       ; 0040b90e | = "Floating point value"
    CALL FUN_0040b400                   ; 0040b913
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b918
    POP EDI                             ; 0040b91b
    POP EBX                             ; 0040b91c
    RET                                 ; 0040b91d
    PUSH ESI                            ; 0040b91e
        ;   Label: LAB_0040b91e
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b91f
    PUSH ESI                            ; 0040b923
    PUSH 0x609560                       ; 0040b924 | = "Floating point value"
    CALL FUN_0040b380                   ; 0040b929
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b92e
    POP ESI                             ; 0040b931
    JMP 0x0040b909                      ; 0040b932
        ;   XREF to: 0040b909 (UNCONDITIONAL_JUMP)  ; LAB_0040b909
    SUB ESP,0x8                         ; 0040b934
        ;   Label: LAB_0040b934
    FLD float ptr [EAX]                 ; 0040b937
    FSTP double ptr [ESP]               ; 0040b939
    PUSH 0x609590                       ; 0040b93c | DAT_00609590
    PUSH 0x5cab41                       ; 0040b941 | DAT_005cab41
    MOV ECX,dword ptr [0x007bc034]      ; 0040b946 | DAT_007bc034
    PUSH ECX                            ; 0040b94c
    CALL FUN_005b8010                   ; 0040b94d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x14                        ; 0040b952
    JMP 0x0040b909                      ; 0040b955
        ;   XREF to: 0040b909 (UNCONDITIONAL_JUMP)  ; LAB_0040b909

