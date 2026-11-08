; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0056f750(undefined4 *param_1,short *param_2)
;
;
; XREF[2]:
;   FUN_0056fb10 at 0056fb78
;   FUN_0056fd00 at 0056fd38
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_005d689d
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_005d68b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_0056f4b0
;   Ordinal_15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f750
        ;   Label: FUN_0056f750
    PUSH ESI                            ; 0056f751
    SUB ESP,0x4                         ; 0056f752
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f755
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056f759
    CMP word ptr [ESI],0x2              ; 0056f75d
    JNZ 0x0056f790                      ; 0056f761
        ;   XREF to: 0056f790 (CONDITIONAL_JUMP)  ; LAB_0056f790
    XOR EAX,EAX                         ; 0056f763
        ;   Label: LAB_0056f763
    MOV AX,word ptr [ESI + 0x2]         ; 0056f765
    PUSH EAX                            ; 0056f769
    CALL Ordinal_15                     ; 0056f76a
        ;   XREF to: 005b25d4 (UNCONDITIONAL_CALL)  ; undefined Ordinal_15()
    MOV word ptr [EBX + 0x4],AX         ; 0056f76f
    LEA EAX,[ESI + 0x4]                 ; 0056f773
    PUSH EAX                            ; 0056f776
    LEA EAX,[ESP + 0x4]                 ; 0056f777
    PUSH EAX                            ; 0056f77b
    CALL FUN_0056f4b0                   ; 0056f77c
        ;   XREF to: 0056f4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f4b0()
    MOV EAX,dword ptr [EAX]             ; 0056f781
    ADD ESP,0x8                         ; 0056f783
    MOV dword ptr [EBX],EAX             ; 0056f786
    MOV EAX,EBX                         ; 0056f788
    ADD ESP,0x4                         ; 0056f78a
    POP ESI                             ; 0056f78d
    POP EBX                             ; 0056f78e
    RET                                 ; 0056f78f
    MOV EDX,0x5d689d                    ; 0056f790 | = "..\\support\\trisock.cpp"
        ;   Label: LAB_0056f790
    MOV ECX,0xd8                        ; 0056f795
    PUSH 0x5d68b4                       ; 0056f79a | = "sockaddr is not of AF_INET family!"
    MOV dword ptr [0x01d71de0],EDX      ; 0056f79f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056f7a5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0056f7ab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0056f7b0
    JMP 0x0056f763                      ; 0056f7b3
        ;   XREF to: 0056f763 (UNCONDITIONAL_JUMP)  ; LAB_0056f763

