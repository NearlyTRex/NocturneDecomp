; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059ddc0(char *param_1,char *param_2)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059e270 at 0059e2d4
;
; Called Functions:
;   support_trisock.cpp_FUN_0059de90
;   support_trisock.cpp_FUN_0059deb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ddc0
        ;   Label: support_trisock.cpp_FUN_0059ddc0
    PUSH ESI                            ; 0059ddc1
    PUSH EDI                            ; 0059ddc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059ddc3
    PUSH EBX                            ; 0059ddc7
    CALL support_trisock.cpp_FUN_0059de90 ; 0059ddc8
        ;   XREF to: 0059de90 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059de90()
    ADD ESP,0x4                         ; 0059ddcd
    MOV EDI,EBX                         ; 0059ddd0
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059ddd2
    PUSH EDI                            ; 0059ddd6
    MOV AL,byte ptr [ESI]               ; 0059ddd7
        ;   Label: LAB_0059ddd7
    MOV byte ptr [EDI],AL               ; 0059ddd9
    CMP AL,0x0                          ; 0059dddb
    JZ 0x0059ddef                       ; 0059dddd
        ;   XREF to: 0059ddef (CONDITIONAL_JUMP)  ; LAB_0059ddef
    MOV AL,byte ptr [ESI + 0x1]         ; 0059dddf
    ADD ESI,0x2                         ; 0059dde2
    MOV byte ptr [EDI + 0x1],AL         ; 0059dde5
    ADD EDI,0x2                         ; 0059dde8
    CMP AL,0x0                          ; 0059ddeb
    JNZ 0x0059ddd7                      ; 0059dded
        ;   XREF to: 0059ddd7 (CONDITIONAL_JUMP)  ; LAB_0059ddd7
    POP EDI                             ; 0059ddef
        ;   Label: LAB_0059ddef
    PUSH EBX                            ; 0059ddf0
    CALL support_trisock.cpp_FUN_0059deb0 ; 0059ddf1
        ;   XREF to: 0059deb0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059deb0()
    ADD ESP,0x4                         ; 0059ddf6
    POP EDI                             ; 0059ddf9
    POP ESI                             ; 0059ddfa
    POP EBX                             ; 0059ddfb
    RET                                 ; 0059ddfc

