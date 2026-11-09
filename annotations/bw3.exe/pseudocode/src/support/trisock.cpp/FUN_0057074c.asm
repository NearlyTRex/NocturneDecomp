; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057074c(CSocket *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,code *param_6)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a28c0
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0
;   support_trisock.cpp_FUN_005704a0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0057074c
        ;   Label: support_trisock.cpp_FUN_0057074c
    PUSH EBX                            ; 00570750
    PUSH ESI                            ; 00570751
    PUSH EDI                            ; 00570752
    PUSH EBP                            ; 00570753
    SUB ESP,0x800                       ; 00570754
    MOV EBX,dword ptr [ESP + 0x828]     ; 0057075a
    TEST EBX,EBX                        ; 00570761
    JNZ 0x0057076a                      ; 00570763
        ;   XREF to: 0057076a (CONDITIONAL_JUMP)  ; LAB_0057076a
    MOV EBX,0x56fee0                    ; 00570765
    MOV ESI,0x5d6a64                    ; 0057076a
        ;   Label: LAB_0057076a
    MOV EDI,ESP                         ; 0057076f
    PUSH EDI                            ; 00570771
    MOV AL,byte ptr [ESI]               ; 00570772
        ;   Label: LAB_00570772
    MOV byte ptr [EDI],AL               ; 00570774
    CMP AL,0x0                          ; 00570776
    JZ 0x0057078a                       ; 00570778
        ;   XREF to: 0057078a (CONDITIONAL_JUMP)  ; LAB_0057078a
    MOV AL,byte ptr [ESI + 0x1]         ; 0057077a
    ADD ESI,0x2                         ; 0057077d
    MOV byte ptr [EDI + 0x1],AL         ; 00570780
    ADD EDI,0x2                         ; 00570783
    CMP AL,0x0                          ; 00570786
    JNZ 0x00570772                      ; 00570788
        ;   XREF to: 00570772 (CONDITIONAL_JUMP)  ; LAB_00570772
    POP EDI                             ; 0057078a
        ;   Label: LAB_0057078a
    MOV EAX,ESP                         ; 0057078b
    PUSH EAX                            ; 0057078d
    PUSH 0x0                            ; 0057078e
    CALL EBX                            ; 00570790
    ADD ESP,0x8                         ; 00570792
    TEST EAX,EAX                        ; 00570795
    JNZ 0x005707a4                      ; 00570797
        ;   XREF to: 005707a4 (CONDITIONAL_JUMP)  ; LAB_005707a4
    ADD ESP,0x800                       ; 00570799
        ;   Label: LAB_00570799
    POP EBP                             ; 0057079f
    POP EDI                             ; 005707a0
    POP ESI                             ; 005707a1
    POP EBX                             ; 005707a2
    RET                                 ; 005707a3
    XOR EAX,EAX                         ; 005707a4
        ;   Label: LAB_005707a4
    MOV AX,word ptr [ESP + 0x81c]       ; 005707a6
    PUSH EAX                            ; 005707ae
    MOV EDX,dword ptr [ESP + 0x81c]     ; 005707af
    PUSH EDX                            ; 005707b6
    MOV ECX,dword ptr [ESP + 0x828]     ; 005707b7
    PUSH ECX                            ; 005707be
    PUSH 0x5d6a78                       ; 005707bf
    LEA EAX,[ESP + 0x10]                ; 005707c4
    PUSH EAX                            ; 005707c8
    CALL crt_unknown.c_FUN_005a28c0     ; 005707c9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 005707ce
    PUSH 0x0                            ; 005707d1
    LEA EDI,[ESP + 0x4]                 ; 005707d3
    SUB ECX,ECX                         ; 005707d7
    DEC ECX                             ; 005707d9
    XOR EAX,EAX                         ; 005707da
    SCASB.REPNE ES:EDI                  ; 005707dc
    NOT ECX                             ; 005707de
    DEC ECX                             ; 005707e0
    PUSH ECX                            ; 005707e1
    LEA EAX,[ESP + 0x8]                 ; 005707e2
    PUSH EAX                            ; 005707e6
    MOV ESI,dword ptr [ESP + 0x820]     ; 005707e7
    PUSH ESI                            ; 005707ee
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 005707ef
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 005707f4
    TEST EAX,EAX                        ; 005707f7
    JNZ 0x0057080a                      ; 005707f9
        ;   XREF to: 0057080a (CONDITIONAL_JUMP)  ; LAB_0057080a
    PUSH 0x5d6aac                       ; 005707fb
    PUSH EAX                            ; 00570800
    CALL EBX                            ; 00570801
    ADD ESP,0x8                         ; 00570803
    TEST EAX,EAX                        ; 00570806
    JZ 0x00570799                       ; 00570808
        ;   XREF to: 00570799 (CONDITIONAL_JUMP)  ; LAB_00570799
    PUSH EBX                            ; 0057080a
        ;   Label: LAB_0057080a
    PUSH 0x5d6acc                       ; 0057080b
    MOV EDI,dword ptr [ESP + 0x82c]     ; 00570810
    PUSH EDI                            ; 00570817
    MOV EBP,dword ptr [ESP + 0x820]     ; 00570818
    PUSH EBP                            ; 0057081f
    CALL support_trisock.cpp_FUN_005704a0 ; 00570820
        ;   XREF to: 005704a0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005704a0()
    ADD ESP,0x10                        ; 00570825
    ADD ESP,0x800                       ; 00570828
    POP EBP                             ; 0057082e
    POP EDI                             ; 0057082f
    POP ESI                             ; 00570830
    POP EBX                             ; 00570831
    RET                                 ; 00570832

