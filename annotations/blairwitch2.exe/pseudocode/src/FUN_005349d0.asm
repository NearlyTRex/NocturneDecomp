; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005349d0(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_004bb9b0 at 004bbb7a
;
; Referenced Globals:
;   undefined4 DAT_01fc8d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005349d0
        ;   Label: FUN_005349d0
    MOV EBX,dword ptr [0x01fc8d00]      ; 005349d1 | DAT_01fc8d00
    MOV ECX,dword ptr [ESP + 0xc]       ; 005349d7
    MOV EAX,EBX                         ; 005349db
    MOV dword ptr [ECX],EBX             ; 005349dd
    XOR EAX,EBX                         ; 005349df
    TEST EBX,EBX                        ; 005349e1
    JLE 0x00534a00                      ; 005349e3
        ;   XREF to: 00534a00 (CONDITIONAL_JUMP)  ; LAB_00534a00
    MOV EDX,ECX                         ; 005349e5
    MOV ECX,dword ptr [EAX*0x4 + 0x1fc8d04] ; 005349e7
        ;   Label: LAB_005349e7
    ADD EDX,0x4                         ; 005349ee
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 005349f1
    INC EAX                             ; 005349f7
    MOV dword ptr [EDX],ECX             ; 005349f8
    CMP EAX,EBX                         ; 005349fa
    JL 0x005349e7                       ; 005349fc
        ;   XREF to: 005349e7 (CONDITIONAL_JUMP)  ; LAB_005349e7
    MOV EAX,EAX                         ; 005349fe
    MOV dword ptr [0x01fc8d00],EBX      ; 00534a00 | DAT_01fc8d00
        ;   Label: LAB_00534a00
    POP EBX                             ; 00534a06
    RET                                 ; 00534a07

