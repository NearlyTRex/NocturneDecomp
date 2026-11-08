; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405290(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0062202c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405290
        ;   Label: FUN_00405290
    MOV ECX,dword ptr [ESP + 0x8]       ; 00405291
    LEA EDX,[ECX + 0xc]                 ; 00405295
    MOV EBX,dword ptr [ECX + 0x8]       ; 00405298
    XOR EAX,EAX                         ; 0040529b
    TEST EBX,EBX                        ; 0040529d
    JLE 0x004052c1                      ; 0040529f
        ;   XREF to: 004052c1 (CONDITIONAL_JUMP)  ; LAB_004052c1
    PUSH ESI                            ; 004052a1
    MOV EBX,dword ptr [ECX + 0x4]       ; 004052a2
        ;   Label: LAB_004052a2
    ADD EBX,EAX                         ; 004052a5
    IMUL EBX,EBX,0x30                   ; 004052a7
    MOV ESI,dword ptr [EDX]             ; 004052aa
    SHL ESI,0x10                        ; 004052ac
    MOV dword ptr [EBX + 0x62202c],ESI  ; 004052af | DAT_0062202c
    INC EAX                             ; 004052b5
    MOV ESI,dword ptr [ECX + 0x8]       ; 004052b6
    ADD EDX,0x4                         ; 004052b9
    CMP EAX,ESI                         ; 004052bc
    JL 0x004052a2                       ; 004052be
        ;   XREF to: 004052a2 (CONDITIONAL_JUMP)  ; LAB_004052a2
    POP ESI                             ; 004052c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004052c1
        ;   Label: LAB_004052c1
    LEA EAX,[ECX + 0xc]                 ; 004052c4
    SHL EDX,0x2                         ; 004052c7
    ADD EAX,EDX                         ; 004052ca
    POP EBX                             ; 004052cc
    RET                                 ; 004052cd

