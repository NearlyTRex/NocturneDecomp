; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00434650(int param_1,int param_2,int *param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00434a70 at 00434a8e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434650
        ;   Label: support_codec.cpp_FUN_00434650
    PUSH ESI                            ; 00434651
    PUSH EDI                            ; 00434652
    PUSH EBP                            ; 00434653
    MOV EDI,dword ptr [ESP + 0x14]      ; 00434654
    MOV EBP,dword ptr [ESP + 0x18]      ; 00434658
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043465c
    MOV EAX,EBP                         ; 00434660
    MOV EDX,dword ptr [EDI + 0x10]      ; 00434662
    SHL EAX,0x4                         ; 00434665
    ADD EAX,EDX                         ; 00434668
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043466a
    TEST EDX,EDX                        ; 0043466d
    JGE 0x00434699                      ; 0043466f
        ;   XREF to: 00434699 (CONDITIONAL_JUMP)  ; LAB_00434699
    MOV EBX,dword ptr [EAX]             ; 00434671
    MOV ECX,EBP                         ; 00434673
        ;   Label: LAB_00434673
    MOV EDX,dword ptr [EDI + 0x10]      ; 00434675
    SHL ECX,0x4                         ; 00434678
    MOV EAX,dword ptr [ESI]             ; 0043467b
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 0043467d
    AND EDX,0xff                        ; 00434680
    PUSH EDX                            ; 00434686
    PUSH ESI                            ; 00434687
    CALL dword ptr [EAX + 0x4]          ; 00434688
    ADD ESP,0x8                         ; 0043468b
    TEST EAX,EAX                        ; 0043468e
    JL 0x004346af                       ; 00434690
        ;   XREF to: 004346af (CONDITIONAL_JUMP)  ; LAB_004346af
    MOV EAX,EBX                         ; 00434692
    POP EBP                             ; 00434694
    POP EDI                             ; 00434695
    POP ESI                             ; 00434696
    POP EBX                             ; 00434697
    RET                                 ; 00434698
    PUSH ESI                            ; 00434699
        ;   Label: LAB_00434699
    PUSH EDX                            ; 0043469a
    PUSH EDI                            ; 0043469b
    CALL support_codec.cpp_FUN_00434650 ; 0043469c
        ;   XREF to: 00434650 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434650()
    ADD ESP,0xc                         ; 004346a1
    MOV EBX,EAX                         ; 004346a4
    TEST EAX,EAX                        ; 004346a6
    JGE 0x00434673                      ; 004346a8
        ;   XREF to: 00434673 (CONDITIONAL_JUMP)  ; LAB_00434673
    POP EBP                             ; 004346aa
    POP EDI                             ; 004346ab
    POP ESI                             ; 004346ac
    POP EBX                             ; 004346ad
    RET                                 ; 004346ae
    CMP EAX,-0x1                        ; 004346af
        ;   Label: LAB_004346af
    JNZ 0x004346c0                      ; 004346b2
        ;   XREF to: 004346c0 (CONDITIONAL_JUMP)  ; LAB_004346c0
    MOV EAX,0xfffffffe                  ; 004346b4
    SUB EAX,EBP                         ; 004346b9
    POP EBP                             ; 004346bb
    POP EDI                             ; 004346bc
    POP ESI                             ; 004346bd
    POP EBX                             ; 004346be
    RET                                 ; 004346bf
    MOV EAX,0xffffffff                  ; 004346c0
        ;   Label: LAB_004346c0
    POP EBP                             ; 004346c5
    POP EDI                             ; 004346c6
    POP ESI                             ; 004346c7
    POP EBX                             ; 004346c8
    RET                                 ; 004346c9

