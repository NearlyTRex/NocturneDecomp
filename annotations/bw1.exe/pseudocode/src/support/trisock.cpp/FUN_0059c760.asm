; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0059c760(undefined4 *param_1,short *param_2)
;
;
; XREF[2]:
;   FUN_0059cb20 at 0059cb88
;   FUN_0059cd10 at 0059cd48
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_005f832e
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_005f8345
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_0059c4c0
;   Ordinal_15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c760
        ;   Label: FUN_0059c760
    PUSH ESI                            ; 0059c761
    SUB ESP,0x4                         ; 0059c762
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059c765
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059c769
    CMP word ptr [ESI],0x2              ; 0059c76d
    JNZ 0x0059c7a0                      ; 0059c771
        ;   XREF to: 0059c7a0 (CONDITIONAL_JUMP)  ; LAB_0059c7a0
    XOR EAX,EAX                         ; 0059c773
        ;   Label: LAB_0059c773
    MOV AX,word ptr [ESI + 0x2]         ; 0059c775
    PUSH EAX                            ; 0059c779
    CALL Ordinal_15                     ; 0059c77a
        ;   XREF to: 005cf844 (UNCONDITIONAL_CALL)  ; undefined Ordinal_15()
    MOV word ptr [EBX + 0x4],AX         ; 0059c77f
    LEA EAX,[ESI + 0x4]                 ; 0059c783
    PUSH EAX                            ; 0059c786
    LEA EAX,[ESP + 0x4]                 ; 0059c787
    PUSH EAX                            ; 0059c78b
    CALL FUN_0059c4c0                   ; 0059c78c
        ;   XREF to: 0059c4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c4c0()
    MOV EAX,dword ptr [EAX]             ; 0059c791
    ADD ESP,0x8                         ; 0059c793
    MOV dword ptr [EBX],EAX             ; 0059c796
    MOV EAX,EBX                         ; 0059c798
    ADD ESP,0x4                         ; 0059c79a
    POP ESI                             ; 0059c79d
    POP EBX                             ; 0059c79e
    RET                                 ; 0059c79f
    MOV EDX,0x5f832e                    ; 0059c7a0 | = "..\\support\\trisock.cpp"
        ;   Label: LAB_0059c7a0
    MOV ECX,0xd8                        ; 0059c7a5
    PUSH 0x5f8345                       ; 0059c7aa | = "sockaddr is not of AF_INET family!"
    MOV dword ptr [0x01d1d400],EDX      ; 0059c7af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059c7b5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0059c7bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0059c7c0
    JMP 0x0059c773                      ; 0059c7c3
        ;   XREF to: 0059c773 (UNCONDITIONAL_JUMP)  ; LAB_0059c773

