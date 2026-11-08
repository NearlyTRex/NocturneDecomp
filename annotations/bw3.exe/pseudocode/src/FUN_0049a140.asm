; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004a2930 at 004a2974
;
; Called Functions:
;   FUN_00509e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a140
        ;   Label: FUN_0049a140
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a141
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a145
    PUSH EDX                            ; 0049a149
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049a14a
    PUSH ECX                            ; 0049a14e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049a14f
    PUSH EBX                            ; 0049a153
    MOV dword ptr [EBX + 0x50],EAX      ; 0049a154
    CALL FUN_00509e40                   ; 0049a157
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e40()
    ADD ESP,0xc                         ; 0049a15c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049a15f
    MOV dword ptr [EBX + 0x40],EAX      ; 0049a163
    POP EBX                             ; 0049a166
    RET                                 ; 0049a167

