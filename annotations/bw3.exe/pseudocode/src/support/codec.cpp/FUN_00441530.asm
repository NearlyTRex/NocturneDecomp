; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00441530(int param_1,undefined4 param_2,int *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_005f1320
;
; Called Functions:
;   support_codec.cpp_writeBitsToStream_FUN_004400f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441530
        ;   Label: support_codec.cpp_FUN_00441530
    PUSH ESI                            ; 00441531
    PUSH EDI                            ; 00441532
    MOV EDI,dword ptr [ESP + 0x14]      ; 00441533
    MOV ESI,dword ptr [ESP + 0x10]      ; 00441537
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044153b
    ADD ESI,0x4                         ; 0044153f
    PUSH EDI                            ; 00441542
        ;   Label: LAB_00441542
    PUSH 0x6                            ; 00441543
    PUSH ESI                            ; 00441545
    CALL support_codec.cpp_writeBitsToStream_FUN_004400f0 ; 00441546
        ;   XREF to: 004400f0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_writeBitsToStream_FUN_004400f0()
    ADD ESP,0xc                         ; 0044154b
    TEST EAX,EAX                        ; 0044154e
    JGE 0x0044155b                      ; 00441550
        ;   XREF to: 0044155b (CONDITIONAL_JUMP)  ; LAB_0044155b
    MOV EAX,0x1                         ; 00441552
    POP EDI                             ; 00441557
    POP ESI                             ; 00441558
    POP EBX                             ; 00441559
    RET                                 ; 0044155a
    MOV EDX,dword ptr [EBX]             ; 0044155b
        ;   Label: LAB_0044155b
    MOV AL,byte ptr [EAX + 0x5f1320]    ; 0044155d | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    AND EAX,0xff                        ; 00441563
    PUSH EAX                            ; 00441568
    PUSH EBX                            ; 00441569
    CALL dword ptr [EDX + 0x4]          ; 0044156a
    ADD ESP,0x8                         ; 0044156d
    JMP 0x00441542                      ; 00441570
        ;   XREF to: 00441542 (UNCONDITIONAL_JUMP)  ; LAB_00441542

