; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523cb0(int param_1)
;
;
; XREF[3]:
;   FUN_00522480 at 005227a4
;   FUN_00523a60 at 00523a70
;   FUN_00523ea0 at 005243cd
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523cb0
        ;   Label: FUN_00523cb0
    PUSH EBP                            ; 00523cb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00523cb2
    CMP dword ptr [EBX + 0x154],0x0     ; 00523cb6
    JZ 0x00523ce9                       ; 00523cbd
        ;   XREF to: 00523ce9 (CONDITIONAL_JUMP)  ; LAB_00523ce9
    PUSH ESI                            ; 00523cbf
    MOV ECX,dword ptr [EBX + 0x130]     ; 00523cc0
    TEST ECX,ECX                        ; 00523cc6
    JZ 0x00523cd4                       ; 00523cc8
        ;   XREF to: 00523cd4 (CONDITIONAL_JUMP)  ; LAB_00523cd4
    MOV ESI,dword ptr [0x02dc8318]      ; 00523cca | DAT_02dc8318
    TEST ESI,ESI                        ; 00523cd0
    JNZ 0x00523cec                      ; 00523cd2
        ;   XREF to: 00523cec (CONDITIONAL_JUMP)  ; LAB_00523cec
    MOV dword ptr [EBX + 0x154],0x0     ; 00523cd4
        ;   Label: LAB_00523cd4
    MOV dword ptr [EBX + 0x150],0x0     ; 00523cde
    POP ESI                             ; 00523ce8
    POP EBP                             ; 00523ce9
        ;   Label: LAB_00523ce9
    POP EBX                             ; 00523cea
    RET                                 ; 00523ceb
    PUSH EDI                            ; 00523cec
        ;   Label: LAB_00523cec
    PUSH EBX                            ; 00523ced
    MOV EDI,dword ptr [EBX + 0x154]     ; 00523cee
    PUSH EDI                            ; 00523cf4
    MOV EBP,dword ptr [EBX + 0x150]     ; 00523cf5
    PUSH EBP                            ; 00523cfb
    PUSH ECX                            ; 00523cfc
    MOV EDX,dword ptr [ESI]             ; 00523cfd
    PUSH ESI                            ; 00523cff
    CALL dword ptr [EDX + 0x38]         ; 00523d00
    ADD ESP,0x14                        ; 00523d03
    POP EDI                             ; 00523d06
    JMP 0x00523cd4                      ; 00523d07
        ;   XREF to: 00523cd4 (UNCONDITIONAL_JUMP)  ; LAB_00523cd4

