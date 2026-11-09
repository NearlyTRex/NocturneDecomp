; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a30a0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a2ad0 at 004a2aec
;   core_fldnotes.cpp_FUN_004a2cc0 at 004a2e00
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a2bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a30a0
        ;   Label: core_fldnotes.cpp_FUN_004a30a0
    PUSH ESI                            ; 004a30a1
    PUSH EDI                            ; 004a30a2
    PUSH EBP                            ; 004a30a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a30a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a30a8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a30ac
    MOV EDX,dword ptr [EBX + 0x20]      ; 004a30b0
        ;   Label: LAB_004a30b0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a30b3
    CMP EAX,EDX                         ; 004a30b6
    JLE 0x004a30c3                      ; 004a30b8
        ;   XREF to: 004a30c3 (CONDITIONAL_JUMP)  ; LAB_004a30c3
    MOV ECX,dword ptr [EBX + 0x28]      ; 004a30ba
    ADD EAX,EDI                         ; 004a30bd
    CMP EAX,ECX                         ; 004a30bf
    JG 0x004a30e1                       ; 004a30c1
        ;   XREF to: 004a30e1 (CONDITIONAL_JUMP)  ; LAB_004a30e1
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004a30c3
        ;   Label: LAB_004a30c3
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a30c6
    CMP EAX,EBP                         ; 004a30c9
    JZ 0x004a30e8                       ; 004a30cb
        ;   XREF to: 004a30e8 (CONDITIONAL_JUMP)  ; LAB_004a30e8
    MOV EDX,dword ptr [EBX + 0x24]      ; 004a30cd
    ADD EAX,ESI                         ; 004a30d0
    CMP EAX,EDX                         ; 004a30d2
    JLE 0x004a30e8                      ; 004a30d4
        ;   XREF to: 004a30e8 (CONDITIONAL_JUMP)  ; LAB_004a30e8
    PUSH EBX                            ; 004a30d6
    CALL core_fldnotes.cpp_FUN_004a2bf0 ; 004a30d7
        ;   XREF to: 004a2bf0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2bf0()
    ADD ESP,0x4                         ; 004a30dc
    JMP 0x004a30b0                      ; 004a30df
        ;   XREF to: 004a30b0 (UNCONDITIONAL_JUMP)  ; LAB_004a30b0
    XOR EAX,EAX                         ; 004a30e1
        ;   Label: LAB_004a30e1
    POP EBP                             ; 004a30e3
    POP EDI                             ; 004a30e4
    POP ESI                             ; 004a30e5
    POP EBX                             ; 004a30e6
    RET                                 ; 004a30e7
    MOV EAX,0x1                         ; 004a30e8
        ;   Label: LAB_004a30e8
    POP EBP                             ; 004a30ed
    POP EDI                             ; 004a30ee
    POP ESI                             ; 004a30ef
    POP EBX                             ; 004a30f0
    RET                                 ; 004a30f1

