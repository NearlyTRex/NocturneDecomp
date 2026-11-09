; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434c00(int param_1,int *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00609b40
;
; Called Functions:
;   support_codec.cpp_FUN_004338d0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00434c00
        ;   Label: support_codec.cpp_FUN_00434c00
    MOV EAX,ESP                         ; 00434c03
    PUSH EAX                            ; 00434c05
    MOV EAX,dword ptr [ESP + 0xc]       ; 00434c06
    ADD EAX,0x4                         ; 00434c0a
    PUSH EAX                            ; 00434c0d
    CALL support_codec.cpp_FUN_004338d0 ; 00434c0e
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004338d0()
    ADD ESP,0x8                         ; 00434c13
    CMP dword ptr [ESP],0x0             ; 00434c16
    JG 0x00434c25                       ; 00434c1a
        ;   XREF to: 00434c25 (CONDITIONAL_JUMP)  ; LAB_00434c25
    MOV EAX,0x1                         ; 00434c1c
    ADD ESP,0x4                         ; 00434c21
    RET                                 ; 00434c24
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434c25
        ;   Label: LAB_00434c25
    MOV AL,byte ptr [EAX + 0x609b40]    ; 00434c29 | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    MOV EDX,dword ptr [EDX]             ; 00434c2f
    AND EAX,0xff                        ; 00434c31
    PUSH EAX                            ; 00434c36
    MOV ECX,dword ptr [ESP + 0x10]      ; 00434c37
    PUSH ECX                            ; 00434c3b
    CALL dword ptr [EDX + 0x4]          ; 00434c3c
    ADD ESP,0x8                         ; 00434c3f
    MOV EAX,0x1                         ; 00434c42
    ADD ESP,0x4                         ; 00434c47
    RET                                 ; 00434c4a

