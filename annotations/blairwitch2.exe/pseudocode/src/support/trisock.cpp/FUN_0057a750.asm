; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a750(char *param_1,char *param_2)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057ac2e at 0057ac94
;
; Called Functions:
;   support_trisock.cpp_FUN_0057a820
;   support_trisock.cpp_FUN_0057a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a750
        ;   Label: support_trisock.cpp_FUN_0057a750
    PUSH ESI                            ; 0057a751
    PUSH EDI                            ; 0057a752
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057a753
    PUSH EBX                            ; 0057a757
    CALL support_trisock.cpp_FUN_0057a820 ; 0057a758
        ;   XREF to: 0057a820 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a820()
    ADD ESP,0x4                         ; 0057a75d
    MOV EDI,EBX                         ; 0057a760
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057a762
    PUSH EDI                            ; 0057a766
    MOV AL,byte ptr [ESI]               ; 0057a767
        ;   Label: LAB_0057a767
    MOV byte ptr [EDI],AL               ; 0057a769
    CMP AL,0x0                          ; 0057a76b
    JZ 0x0057a77f                       ; 0057a76d
        ;   XREF to: 0057a77f (CONDITIONAL_JUMP)  ; LAB_0057a77f
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a76f
    ADD ESI,0x2                         ; 0057a772
    MOV byte ptr [EDI + 0x1],AL         ; 0057a775
    ADD EDI,0x2                         ; 0057a778
    CMP AL,0x0                          ; 0057a77b
    JNZ 0x0057a767                      ; 0057a77d
        ;   XREF to: 0057a767 (CONDITIONAL_JUMP)  ; LAB_0057a767
    POP EDI                             ; 0057a77f
        ;   Label: LAB_0057a77f
    PUSH EBX                            ; 0057a780
    CALL support_trisock.cpp_FUN_0057a840 ; 0057a781
        ;   XREF to: 0057a840 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a840()
    ADD ESP,0x4                         ; 0057a786
    POP EDI                             ; 0057a789
    POP ESI                             ; 0057a78a
    POP EBX                             ; 0057a78b
    RET                                 ; 0057a78c

