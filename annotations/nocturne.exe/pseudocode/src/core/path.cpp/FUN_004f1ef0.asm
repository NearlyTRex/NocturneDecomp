; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0058ce6f
;   TerminatedCString s_Global_pathmap_list_corr_0058ce80
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01e312f8
;
; Called Functions:
;   FUN_004c8440
;   FUN_004f18c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1ef0
        ;   Label: FUN_004f1ef0
    PUSH ESI                            ; 004f1ef1
    PUSH EDI                            ; 004f1ef2
    PUSH EBP                            ; 004f1ef3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f1ef4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f1ef8
    MOV EDX,dword ptr [0x01e312f8]      ; 004f1efc | DAT_01e312f8
    XOR ESI,ESI                         ; 004f1f02
    TEST EDX,EDX                        ; 004f1f04
    JLE 0x004f1f33                      ; 004f1f06
        ;   XREF to: 004f1f33 (CONDITIONAL_JUMP)  ; LAB_004f1f33
    XOR EBX,EBX                         ; 004f1f08
    CMP dword ptr [EBX + 0x1e312fc],0x0 ; 004f1f0a
        ;   Label: LAB_004f1f0a
    JZ 0x004f1f38                       ; 004f1f11
        ;   XREF to: 004f1f38 (CONDITIONAL_JUMP)  ; LAB_004f1f38
    MOV EDX,dword ptr [EBX + 0x1e312fc] ; 004f1f13
        ;   Label: LAB_004f1f13
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 004f1f19
    JLE 0x004f1f5d                      ; 004f1f23
        ;   XREF to: 004f1f5d (CONDITIONAL_JUMP)  ; LAB_004f1f5d
    MOV ECX,dword ptr [0x01e312f8]      ; 004f1f25 | DAT_01e312f8
        ;   Label: LAB_004f1f25
    INC ESI                             ; 004f1f2b
    ADD EBX,0x4                         ; 004f1f2c
    CMP ESI,ECX                         ; 004f1f2f
    JL 0x004f1f0a                       ; 004f1f31
        ;   XREF to: 004f1f0a (CONDITIONAL_JUMP)  ; LAB_004f1f0a
    POP EBP                             ; 004f1f33
        ;   Label: LAB_004f1f33
    POP EDI                             ; 004f1f34
    POP ESI                             ; 004f1f35
    POP EBX                             ; 004f1f36
    RET                                 ; 004f1f37
    MOV EDX,0x58ce6f                    ; 004f1f38 | = "..\\core\\path.cpp"
        ;   Label: LAB_004f1f38
    MOV ECX,0x6a8                       ; 004f1f3d
    PUSH 0x58ce80                       ; 004f1f42 | = "Global pathmap list corruption"
    MOV dword ptr [0x01cc4800],EDX      ; 004f1f47 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f1f4d | DAT_01cc4804
    CALL FUN_004c8440                   ; 004f1f53
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004f1f58
    JMP 0x004f1f13                      ; 004f1f5b
        ;   XREF to: 004f1f13 (UNCONDITIONAL_JUMP)  ; LAB_004f1f13
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f1f5d
        ;   Label: LAB_004f1f5d
    PUSH EAX                            ; 004f1f61
    PUSH EDI                            ; 004f1f62
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f1f63
    PUSH ECX                            ; 004f1f67
    PUSH EBP                            ; 004f1f68
    PUSH EDX                            ; 004f1f69
    CALL FUN_004f18c0                   ; 004f1f6a
        ;   XREF to: 004f18c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f18c0()
    ADD ESP,0x14                        ; 004f1f6f
    JMP 0x004f1f25                      ; 004f1f72
        ;   XREF to: 004f1f25 (UNCONDITIONAL_JUMP)  ; LAB_004f1f25

