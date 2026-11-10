; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_004438d0(int param_1,undefined4 param_2,int *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00610d70
;
; Called Functions:
;   support_codec.cpp_writeBitsToStream_FUN_00442490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004438d0
        ;   Label: support_codec.cpp_FUN_004438d0
    PUSH ESI                            ; 004438d1
    PUSH EDI                            ; 004438d2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004438d3
    MOV ESI,dword ptr [ESP + 0x10]      ; 004438d7
    MOV EBX,dword ptr [ESP + 0x18]      ; 004438db
    ADD ESI,0x4                         ; 004438df
    PUSH EDI                            ; 004438e2
        ;   Label: LAB_004438e2
    PUSH 0x6                            ; 004438e3
    PUSH ESI                            ; 004438e5
    CALL support_codec.cpp_writeBitsToStream_FUN_00442490 ; 004438e6
        ;   XREF to: 00442490 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_writeBitsToStream_FUN_00442490()
    ADD ESP,0xc                         ; 004438eb
    TEST EAX,EAX                        ; 004438ee
    JGE 0x004438fb                      ; 004438f0
        ;   XREF to: 004438fb (CONDITIONAL_JUMP)  ; LAB_004438fb
    MOV EAX,0x1                         ; 004438f2
    POP EDI                             ; 004438f7
    POP ESI                             ; 004438f8
    POP EBX                             ; 004438f9
    RET                                 ; 004438fa
    MOV EDX,dword ptr [EBX]             ; 004438fb
        ;   Label: LAB_004438fb
    MOV AL,byte ptr [EAX + 0x610d70]    ; 004438fd | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    AND EAX,0xff                        ; 00443903
    PUSH EAX                            ; 00443908
    PUSH EBX                            ; 00443909
    CALL dword ptr [EDX + 0x4]          ; 0044390a
    ADD ESP,0x8                         ; 0044390d
    JMP 0x004438e2                      ; 00443910
        ;   XREF to: 004438e2 (UNCONDITIONAL_JUMP)  ; LAB_004438e2

