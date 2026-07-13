; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00557c70(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557c70
        ;   Label: FUN_00557c70
    SUB ESP,0xc                         ; 00557c71
    MOV EDX,dword ptr [ESP + 0x14]      ; 00557c74
    MOV EBX,dword ptr [ESP + 0x18]      ; 00557c78
    MOV ECX,dword ptr [EDX + 0xbd28]    ; 00557c7c
    PUSH ECX                            ; 00557c82
    LEA EAX,[ESP + 0x4]                 ; 00557c83
    PUSH EAX                            ; 00557c87
    LEA EAX,[EDX + 0x150]               ; 00557c88
    PUSH EAX                            ; 00557c8e
    CALL FUN_0051d380                   ; 00557c8f
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 00557c94
    CMP EBX,EAX                         ; 00557c97
    JNZ 0x00557ca5                      ; 00557c99
        ;   XREF to: 00557ca5 (CONDITIONAL_JUMP)  ; LAB_00557ca5
    MOV EAX,0x1                         ; 00557c9b
    ADD ESP,0xc                         ; 00557ca0
    POP EBX                             ; 00557ca3
    RET                                 ; 00557ca4
    MOV EDX,dword ptr [EAX]             ; 00557ca5
        ;   Label: LAB_00557ca5
    MOV dword ptr [EBX],EDX             ; 00557ca7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00557ca9
    MOV dword ptr [EBX + 0x4],EDX       ; 00557cac
    MOV EDX,dword ptr [EAX + 0x8]       ; 00557caf
    MOV dword ptr [EBX + 0x8],EDX       ; 00557cb2
    MOV EAX,0x1                         ; 00557cb5
    ADD ESP,0xc                         ; 00557cba
    POP EBX                             ; 00557cbd
    RET                                 ; 00557cbe

