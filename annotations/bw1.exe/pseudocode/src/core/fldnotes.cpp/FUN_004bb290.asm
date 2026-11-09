; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bb290(undefined4 param_1,char *param_2)
;
;
; XREF[3]:
;   core_fldnotes.cpp_FUN_004bbd10 at 004bbdca
;   core_fldnotes.cpp_FUN_004bc130 at 004bc17b
;   core_fldnotes.cpp_FUN_004bca60 at 004bcacd
;
; Referenced Globals:
;   TerminatedCString s_ERROR_item_won_t_fit_br_005df953
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bb2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb290
        ;   Label: core_fldnotes.cpp_FUN_004bb290
    PUSH ESI                            ; 004bb291
    PUSH EDI                            ; 004bb292
    MOV EDI,dword ptr [ESP + 0x10]      ; 004bb293
    MOV EAX,dword ptr [ESP + 0x14]      ; 004bb297
    MOV EBX,EAX                         ; 004bb29b
    MOV DL,byte ptr [EAX]               ; 004bb29d
    XOR ESI,ESI                         ; 004bb29f
    TEST DL,DL                          ; 004bb2a1
    JZ 0x004bb2bc                       ; 004bb2a3
        ;   XREF to: 004bb2bc (CONDITIONAL_JUMP)  ; LAB_004bb2bc
    PUSH EBX                            ; 004bb2a5
        ;   Label: LAB_004bb2a5
    PUSH EDI                            ; 004bb2a6
    CALL core_fldnotes.cpp_FUN_004bb2f0 ; 004bb2a7
        ;   XREF to: 004bb2f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb2f0()
    ADD ESP,0x8                         ; 004bb2ac
    TEST EAX,EAX                        ; 004bb2af
    JL 0x004bb2c5                       ; 004bb2b1
        ;   XREF to: 004bb2c5 (CONDITIONAL_JUMP)  ; LAB_004bb2c5
    JLE 0x004bb2cb                      ; 004bb2b3
        ;   XREF to: 004bb2cb (CONDITIONAL_JUMP)  ; LAB_004bb2cb
    ADD EBX,EAX                         ; 004bb2b5
    CMP byte ptr [EBX],0x0              ; 004bb2b7
        ;   Label: LAB_004bb2b7
    JNZ 0x004bb2a5                      ; 004bb2ba
        ;   XREF to: 004bb2a5 (CONDITIONAL_JUMP)  ; LAB_004bb2a5
    MOV EAX,0x1                         ; 004bb2bc
        ;   Label: LAB_004bb2bc
    POP EDI                             ; 004bb2c1
    POP ESI                             ; 004bb2c2
    POP EBX                             ; 004bb2c3
    RET                                 ; 004bb2c4
    XOR EAX,EAX                         ; 004bb2c5
        ;   Label: LAB_004bb2c5
    POP EDI                             ; 004bb2c7
    POP ESI                             ; 004bb2c8
    POP EBX                             ; 004bb2c9
    RET                                 ; 004bb2ca
    INC ESI                             ; 004bb2cb
        ;   Label: LAB_004bb2cb
    CMP ESI,0x1                         ; 004bb2cc
    JLE 0x004bb2b7                      ; 004bb2cf
        ;   XREF to: 004bb2b7 (CONDITIONAL_JUMP)  ; LAB_004bb2b7
    PUSH 0x5df953                       ; 004bb2d1 | = "ERROR: item won't fit<br>"
    PUSH EDI                            ; 004bb2d6
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bb2d7
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bb2dc
    MOV EAX,0x1                         ; 004bb2df
    POP EDI                             ; 004bb2e4
    POP ESI                             ; 004bb2e5
    POP EBX                             ; 004bb2e6
    RET                                 ; 004bb2e7

