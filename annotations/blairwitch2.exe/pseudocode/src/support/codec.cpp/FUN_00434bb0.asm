; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434bb0(int param_1,undefined4 param_2,int *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00609b40
;
; Called Functions:
;   support_codec.cpp_FUN_00433780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434bb0
        ;   Label: support_codec.cpp_FUN_00434bb0
    PUSH ESI                            ; 00434bb1
    PUSH EDI                            ; 00434bb2
    MOV EDI,dword ptr [ESP + 0x14]      ; 00434bb3
    MOV ESI,dword ptr [ESP + 0x10]      ; 00434bb7
    MOV EBX,dword ptr [ESP + 0x18]      ; 00434bbb
    ADD ESI,0x4                         ; 00434bbf
    PUSH EDI                            ; 00434bc2
        ;   Label: LAB_00434bc2
    PUSH 0x6                            ; 00434bc3
    PUSH ESI                            ; 00434bc5
    CALL support_codec.cpp_FUN_00433780 ; 00434bc6
        ;   XREF to: 00433780 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00433780()
    ADD ESP,0xc                         ; 00434bcb
    TEST EAX,EAX                        ; 00434bce
    JGE 0x00434bdb                      ; 00434bd0
        ;   XREF to: 00434bdb (CONDITIONAL_JUMP)  ; LAB_00434bdb
    MOV EAX,0x1                         ; 00434bd2
    POP EDI                             ; 00434bd7
    POP ESI                             ; 00434bd8
    POP EBX                             ; 00434bd9
    RET                                 ; 00434bda
    MOV EDX,dword ptr [EBX]             ; 00434bdb
        ;   Label: LAB_00434bdb
    MOV AL,byte ptr [EAX + 0x609b40]    ; 00434bdd | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    AND EAX,0xff                        ; 00434be3
    PUSH EAX                            ; 00434be8
    PUSH EBX                            ; 00434be9
    CALL dword ptr [EDX + 0x4]          ; 00434bea
    ADD ESP,0x8                         ; 00434bed
    JMP 0x00434bc2                      ; 00434bf0
        ;   XREF to: 00434bc2 (UNCONDITIONAL_JUMP)  ; LAB_00434bc2

