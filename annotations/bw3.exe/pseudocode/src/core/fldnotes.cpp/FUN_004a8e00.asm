; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a8e00(undefined4 *param_1)
;
;
; XREF[7]:
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004aa7e0 at 004aa7fa
;   core_fldnotes.cpp_FUN_004aa810 at 004aa9be
;   core_fldnotes.cpp_FUN_004abb90 at 004abc01
;   core_fldnotes.cpp_FUN_004abe00 at 004abe72
;   core_fldnotes.cpp_TextView_dtor_FUN_004a8de0 at 004a8de6
;   unkaddr_004a76f0.cpp_FUN_004a826e at 004a8295
;   unkaddr_004a76f0.cpp_FUN_004a82ee at 004a8322
;
; Referenced Globals:
;   undefined4 DAT_01549ac0
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a8cc0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8e00
        ;   Label: core_fldnotes.cpp_FUN_004a8e00
    PUSH EBP                            ; 004a8e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8e02
    CMP dword ptr [EBX + 0x3c],0x0      ; 004a8e06
    JZ 0x004a8e4a                       ; 004a8e0a
        ;   XREF to: 004a8e4a (CONDITIONAL_JUMP)  ; LAB_004a8e4a
    PUSH EDI                            ; 004a8e0c
    MOV ECX,dword ptr [EBX + 0x38]      ; 004a8e0d
    XOR EDI,EDI                         ; 004a8e10
    TEST ECX,ECX                        ; 004a8e12
    JLE 0x004a8e36                      ; 004a8e14
        ;   XREF to: 004a8e36 (CONDITIONAL_JUMP)  ; LAB_004a8e36
    PUSH ESI                            ; 004a8e16
    XOR ESI,ESI                         ; 004a8e17
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a8e19
        ;   Label: LAB_004a8e19
    ADD EAX,ESI                         ; 004a8e1c
    PUSH EAX                            ; 004a8e1e
    INC EDI                             ; 004a8e1f
    CALL core_fldnotes.cpp_FUN_004a8cc0 ; 004a8e20
        ;   XREF to: 004a8cc0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8cc0()
    ADD ESI,0x144                       ; 004a8e25
    MOV EBP,dword ptr [EBX + 0x38]      ; 004a8e2b
    ADD ESP,0x4                         ; 004a8e2e
    CMP EDI,EBP                         ; 004a8e31
    JL 0x004a8e19                       ; 004a8e33
        ;   XREF to: 004a8e19 (CONDITIONAL_JUMP)  ; LAB_004a8e19
    POP ESI                             ; 004a8e35
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a8e36
        ;   Label: LAB_004a8e36
    PUSH EAX                            ; 004a8e39
    CALL crt_unknown.c_FUN_005a3770     ; 004a8e3a
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004a8e3f
    MOV dword ptr [EBX + 0x3c],0x0      ; 004a8e42
    POP EDI                             ; 004a8e49
    MOV dword ptr [EBX + 0x10],0x0      ; 004a8e4a
        ;   Label: LAB_004a8e4a
    MOV dword ptr [EBX + 0x30],0x0      ; 004a8e51
    MOV dword ptr [EBX + 0x34],0x0      ; 004a8e58
    MOV byte ptr [EBX + 0x48],0x0       ; 004a8e5f
    MOV EAX,dword ptr [EBX]             ; 004a8e63
    MOV dword ptr [EBX + 0x38],0x0      ; 004a8e65
    MOV dword ptr [EBX + 0x1c],EAX      ; 004a8e6c
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a8e6f
    MOV dword ptr [EBX + 0x20],EAX      ; 004a8e72
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a8e75
    MOV dword ptr [EBX + 0x24],EAX      ; 004a8e78
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a8e7b
    MOV dword ptr [EBX + 0x28],EAX      ; 004a8e7e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a8e81
    MOV dword ptr [EBX + 0x14],EAX      ; 004a8e84
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a8e87
    MOV dword ptr [EBX + 0x18],EAX      ; 004a8e8a
    MOV EAX,[0x01549ac0]                ; 004a8e8d | DAT_01549ac0
    MOV dword ptr [EBX + 0x2c],EAX      ; 004a8e92
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a8e95
    MOV dword ptr [EBX + 0x40],EAX      ; 004a8e98
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a8e9b
    MOV dword ptr [EBX + 0x44],EAX      ; 004a8e9e
    POP EBP                             ; 004a8ea1
    POP EBX                             ; 004a8ea2
    RET                                 ; 004a8ea3

