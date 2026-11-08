; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414b60(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_00488890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00414b60
        ;   Label: FUN_00414b60
    PUSH EAX                            ; 00414b64
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414b65
    PUSH EDX                            ; 00414b69
    MOV dword ptr [EAX + 0x4],0x0       ; 00414b6a
    CALL FUN_00488890                   ; 00414b71
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 00414b76
    RET                                 ; 00414b79

