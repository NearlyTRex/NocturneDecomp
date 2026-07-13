; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_10008850(size_t param_1,int param_2)
;
;
; XREF[1]:
;   FUN_10008830 at 1000883b
;
; Called Functions:
;   __callnewh
;   FUN_10008890
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10008850
        ;   Label: FUN_10008850
    PUSH EDI                            ; 10008851
    MOV ESI,dword ptr [ESP + 0xc]       ; 10008852
    CMP ESI,-0x20                       ; 10008856
    JBE 0x10008860                      ; 10008859
        ;   XREF to: 10008860 (CONDITIONAL_JUMP)  ; LAB_10008860
    XOR EAX,EAX                         ; 1000885b
    POP EDI                             ; 1000885d
    POP ESI                             ; 1000885e
    RET                                 ; 1000885f
    TEST ESI,ESI                        ; 10008860
        ;   Label: LAB_10008860
    JNZ 0x10008869                      ; 10008862
        ;   XREF to: 10008869 (CONDITIONAL_JUMP)  ; LAB_10008869
    MOV ESI,0x1                         ; 10008864
    MOV EDI,dword ptr [ESP + 0x10]      ; 10008869
        ;   Label: LAB_10008869
    PUSH ESI                            ; 1000886d
        ;   Label: LAB_1000886d
    CALL FUN_10008890                   ; 1000886e
        ;   XREF to: 10008890 (UNCONDITIONAL_CALL)  ; undefined FUN_10008890()
    ADD ESP,0x4                         ; 10008873
    TEST EAX,EAX                        ; 10008876
    JNZ 0x1000888d                      ; 10008878
        ;   XREF to: 1000888d (CONDITIONAL_JUMP)  ; LAB_1000888d
    TEST EDI,EDI                        ; 1000887a
    JZ 0x1000888d                       ; 1000887c
        ;   XREF to: 1000888d (CONDITIONAL_JUMP)  ; LAB_1000888d
    PUSH ESI                            ; 1000887e
    CALL __callnewh                     ; 1000887f
        ;   XREF to: 1000ab30 (UNCONDITIONAL_CALL)  ; int __callnewh(size_t _Size)
    ADD ESP,0x4                         ; 10008884
    TEST EAX,EAX                        ; 10008887
    JNZ 0x1000886d                      ; 10008889
        ;   XREF to: 1000886d (CONDITIONAL_JUMP)  ; LAB_1000886d
    XOR EAX,EAX                         ; 1000888b
    POP EDI                             ; 1000888d
        ;   Label: LAB_1000888d
    POP ESI                             ; 1000888e
    RET                                 ; 1000888f

