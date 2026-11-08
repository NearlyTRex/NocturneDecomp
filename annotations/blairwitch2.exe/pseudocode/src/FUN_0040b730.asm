; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b730(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[57]:
;   FUN_0040b850 at 0040b8a5
;   FUN_0040ba60 at 0040ba85
;   FUN_0040bae0 at 0040bb05
;   FUN_0040c330 at 0040c3be
;   FUN_0040e1b0 at 0040e1de
;   FUN_0040e860 at 0040e88e
;   FUN_0040ecc0 at 0040ecee
;   FUN_0040f040 at 0040f091
;   FUN_00410600 at 00410627
;   FUN_00410dc0 at 00410dfb
;   ... and 47 more
;
; Referenced Globals:
;   TerminatedCString s_anon_005cab25
;   TerminatedCString s_s_s_005cab2b
;   TerminatedCString s_String_00609558
;   undefined1 DAT_00609590
;   undefined4 DAT_0061ed94
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   FUN_0040b380
;   FUN_0040b400
;   FUN_005b8010
;   FUN_005b8100
;   FUN_005b8180
;   FUN_005b8350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b730
        ;   Label: FUN_0040b730
    PUSH ESI                            ; 0040b731
    PUSH EDI                            ; 0040b732
    PUSH EBP                            ; 0040b733
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b734
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b738
    CMP dword ptr [0x007bc038],0x1      ; 0040b73c | DAT_007bc038
    JNZ 0x0040b817                      ; 0040b743
        ;   XREF to: 0040b817 (CONDITIONAL_JUMP)  ; LAB_0040b817
    MOV EDI,dword ptr [0x007bc034]      ; 0040b749 | DAT_007bc034
        ;   Label: LAB_0040b749
    PUSH EDI                            ; 0040b74f
    CALL FUN_005b8180                   ; 0040b750
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    MOV EDX,EAX                         ; 0040b755
    ADD ESP,0x4                         ; 0040b757
    INC DL                              ; 0040b75a
    AND EDX,0xff                        ; 0040b75c
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 0040b762 | DAT_0061ed94
    JNZ 0x0040b749                      ; 0040b769
        ;   XREF to: 0040b749 (CONDITIONAL_JUMP)  ; LAB_0040b749
    CMP EAX,0x22                        ; 0040b76b
    JZ 0x0040b77e                       ; 0040b76e
        ;   XREF to: 0040b77e (CONDITIONAL_JUMP)  ; LAB_0040b77e
    PUSH EBX                            ; 0040b770
    PUSH 0x609558                       ; 0040b771 | = "String"
    CALL FUN_0040b380                   ; 0040b776
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b77b
    MOV EBP,dword ptr [0x007bc034]      ; 0040b77e | DAT_007bc034
        ;   Label: LAB_0040b77e
    PUSH EBP                            ; 0040b784
    CALL FUN_005b8180                   ; 0040b785
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 0040b78a
    CMP EAX,0x22                        ; 0040b78d
    JZ 0x0040b7f1                       ; 0040b790
        ;   XREF to: 0040b7f1 (CONDITIONAL_JUMP)  ; LAB_0040b7f1
    MOV EDX,dword ptr [0x007bc034]      ; 0040b792 | DAT_007bc034
    PUSH EDX                            ; 0040b798
    PUSH EAX                            ; 0040b799
    CALL FUN_005b8350                   ; 0040b79a
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8350()
    ADD ESP,0x8                         ; 0040b79f
    PUSH ESI                            ; 0040b7a2
    PUSH 0x5cab25                       ; 0040b7a3 | = "%[^\"]"
    MOV ECX,dword ptr [0x007bc034]      ; 0040b7a8 | DAT_007bc034
    PUSH ECX                            ; 0040b7ae
    CALL FUN_005b8100                   ; 0040b7af
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0040b7b4
    CMP EAX,0x1                         ; 0040b7b7
    JZ 0x0040b7ca                       ; 0040b7ba
        ;   XREF to: 0040b7ca (CONDITIONAL_JUMP)  ; LAB_0040b7ca
    PUSH EBX                            ; 0040b7bc
    PUSH 0x609558                       ; 0040b7bd | = "String"
    CALL FUN_0040b380                   ; 0040b7c2
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b7c7
    MOV ESI,dword ptr [0x007bc034]      ; 0040b7ca | DAT_007bc034
        ;   Label: LAB_0040b7ca
    PUSH ESI                            ; 0040b7d0
    CALL FUN_005b8180                   ; 0040b7d1
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 0040b7d6
    CMP EAX,0x22                        ; 0040b7d9
    JNZ 0x0040b7f6                      ; 0040b7dc
        ;   XREF to: 0040b7f6 (CONDITIONAL_JUMP)  ; LAB_0040b7f6
    PUSH EBX                            ; 0040b7de
        ;   Label: LAB_0040b7de
    PUSH 0x609558                       ; 0040b7df | = "String"
    CALL FUN_0040b400                   ; 0040b7e4
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b7e9
    POP EBP                             ; 0040b7ec
    POP EDI                             ; 0040b7ed
    POP ESI                             ; 0040b7ee
    POP EBX                             ; 0040b7ef
    RET                                 ; 0040b7f0
    MOV byte ptr [ESI],0x0              ; 0040b7f1
        ;   Label: LAB_0040b7f1
    JMP 0x0040b7de                      ; 0040b7f4
        ;   XREF to: 0040b7de (UNCONDITIONAL_JUMP)  ; LAB_0040b7de
    PUSH EBX                            ; 0040b7f6
        ;   Label: LAB_0040b7f6
    PUSH 0x609558                       ; 0040b7f7 | = "String"
    CALL FUN_0040b380                   ; 0040b7fc
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b801
    PUSH EBX                            ; 0040b804
    PUSH 0x609558                       ; 0040b805 | = "String"
    CALL FUN_0040b400                   ; 0040b80a
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b80f
    POP EBP                             ; 0040b812
    POP EDI                             ; 0040b813
    POP ESI                             ; 0040b814
    POP EBX                             ; 0040b815
    RET                                 ; 0040b816
    PUSH ESI                            ; 0040b817
        ;   Label: LAB_0040b817
    PUSH 0x609590                       ; 0040b818 | DAT_00609590
    PUSH 0x5cab2b                       ; 0040b81d | = "%s\"%s\""
    MOV ECX,dword ptr [0x007bc034]      ; 0040b822 | DAT_007bc034
    PUSH ECX                            ; 0040b828
    CALL FUN_005b8010                   ; 0040b829
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 0040b82e
    PUSH EBX                            ; 0040b831
    PUSH 0x609558                       ; 0040b832 | = "String"
    CALL FUN_0040b400                   ; 0040b837
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b83c
    POP EBP                             ; 0040b83f
    POP EDI                             ; 0040b840
    POP ESI                             ; 0040b841
    POP EBX                             ; 0040b842
    RET                                 ; 0040b843

