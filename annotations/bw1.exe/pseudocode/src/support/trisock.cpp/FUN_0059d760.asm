; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059d760(void)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0
;   support_trisock.cpp_FUN_0059d4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d760
        ;   Label: support_trisock.cpp_FUN_0059d760
    PUSH ESI                            ; 0059d761
    PUSH EDI                            ; 0059d762
    PUSH EBP                            ; 0059d763
    SUB ESP,0x800                       ; 0059d764
    MOV EBX,dword ptr [ESP + 0x828]     ; 0059d76a
    TEST EBX,EBX                        ; 0059d771
    JNZ 0x0059d77a                      ; 0059d773
        ;   XREF to: 0059d77a (CONDITIONAL_JUMP)  ; LAB_0059d77a
    MOV EBX,0x59cef0                    ; 0059d775
    MOV ESI,0x5f84f5                    ; 0059d77a
        ;   Label: LAB_0059d77a
    MOV EDI,ESP                         ; 0059d77f
    PUSH EDI                            ; 0059d781
    MOV AL,byte ptr [ESI]               ; 0059d782
        ;   Label: LAB_0059d782
    MOV byte ptr [EDI],AL               ; 0059d784
    CMP AL,0x0                          ; 0059d786
    JZ 0x0059d79a                       ; 0059d788
        ;   XREF to: 0059d79a (CONDITIONAL_JUMP)  ; LAB_0059d79a
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d78a
    ADD ESI,0x2                         ; 0059d78d
    MOV byte ptr [EDI + 0x1],AL         ; 0059d790
    ADD EDI,0x2                         ; 0059d793
    CMP AL,0x0                          ; 0059d796
    JNZ 0x0059d782                      ; 0059d798
        ;   XREF to: 0059d782 (CONDITIONAL_JUMP)  ; LAB_0059d782
    POP EDI                             ; 0059d79a
        ;   Label: LAB_0059d79a
    MOV EAX,ESP                         ; 0059d79b
    PUSH EAX                            ; 0059d79d
    PUSH 0x0                            ; 0059d79e
    CALL EBX                            ; 0059d7a0
    ADD ESP,0x8                         ; 0059d7a2
    TEST EAX,EAX                        ; 0059d7a5
    JNZ 0x0059d7b4                      ; 0059d7a7
        ;   XREF to: 0059d7b4 (CONDITIONAL_JUMP)  ; LAB_0059d7b4
    ADD ESP,0x800                       ; 0059d7a9
        ;   Label: LAB_0059d7a9
    POP EBP                             ; 0059d7af
    POP EDI                             ; 0059d7b0
    POP ESI                             ; 0059d7b1
    POP EBX                             ; 0059d7b2
    RET                                 ; 0059d7b3
    XOR EAX,EAX                         ; 0059d7b4
        ;   Label: LAB_0059d7b4
    MOV AX,word ptr [ESP + 0x81c]       ; 0059d7b6
    PUSH EAX                            ; 0059d7be
    MOV EDX,dword ptr [ESP + 0x81c]     ; 0059d7bf
    PUSH EDX                            ; 0059d7c6
    MOV ECX,dword ptr [ESP + 0x828]     ; 0059d7c7
    PUSH ECX                            ; 0059d7ce
    PUSH 0x5f8509                       ; 0059d7cf
    LEA EAX,[ESP + 0x10]                ; 0059d7d4
    PUSH EAX                            ; 0059d7d8
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059d7d9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 0059d7de
    PUSH 0x0                            ; 0059d7e1
    LEA EDI,[ESP + 0x4]                 ; 0059d7e3
    SUB ECX,ECX                         ; 0059d7e7
    DEC ECX                             ; 0059d7e9
    XOR EAX,EAX                         ; 0059d7ea
    SCASB.REPNE ES:EDI                  ; 0059d7ec
    NOT ECX                             ; 0059d7ee
    DEC ECX                             ; 0059d7f0
    PUSH ECX                            ; 0059d7f1
    LEA EAX,[ESP + 0x8]                 ; 0059d7f2
    PUSH EAX                            ; 0059d7f6
    MOV ESI,dword ptr [ESP + 0x820]     ; 0059d7f7
    PUSH ESI                            ; 0059d7fe
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0 ; 0059d7ff
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0059d804
    TEST EAX,EAX                        ; 0059d807
    JNZ 0x0059d81a                      ; 0059d809
        ;   XREF to: 0059d81a (CONDITIONAL_JUMP)  ; LAB_0059d81a
    PUSH 0x5f853d                       ; 0059d80b
    PUSH EAX                            ; 0059d810
    CALL EBX                            ; 0059d811
    ADD ESP,0x8                         ; 0059d813
    TEST EAX,EAX                        ; 0059d816
    JZ 0x0059d7a9                       ; 0059d818
        ;   XREF to: 0059d7a9 (CONDITIONAL_JUMP)  ; LAB_0059d7a9
    PUSH EBX                            ; 0059d81a
        ;   Label: LAB_0059d81a
    PUSH 0x5f855d                       ; 0059d81b
    MOV EDI,dword ptr [ESP + 0x82c]     ; 0059d820
    PUSH EDI                            ; 0059d827
    MOV EBP,dword ptr [ESP + 0x820]     ; 0059d828
    PUSH EBP                            ; 0059d82f
    CALL support_trisock.cpp_FUN_0059d4b0 ; 0059d830
        ;   XREF to: 0059d4b0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059d4b0()
    ADD ESP,0x10                        ; 0059d835
    ADD ESP,0x800                       ; 0059d838
    POP EBP                             ; 0059d83e
    POP EDI                             ; 0059d83f
    POP ESI                             ; 0059d840
    POP EBX                             ; 0059d841
    RET                                 ; 0059d842

