; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00488e30(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0048e7e0 at 0048fa78
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_n_005d2ee6
;   TerminatedCString s_n_005d2ef8
;   TerminatedCString s_Error_parsing_vector_loc_005d2f06
;   undefined4 DAT_005f61e4
;   undefined4 DAT_007bbff8
;   undefined4 DAT_007bc030
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   FUN_00488d00
;   FUN_005b7790
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488e30
        ;   Label: FUN_00488e30
    PUSH ESI                            ; 00488e31
    PUSH EDI                            ; 00488e32
    PUSH EBP                            ; 00488e33
    SUB ESP,0x68                        ; 00488e34
    MOV ESI,dword ptr [ESP + 0x80]      ; 00488e37
    MOV EBX,dword ptr [ESP + 0x84]      ; 00488e3e
    LEA EAX,[ESP + 0x64]                ; 00488e45
    PUSH EAX                            ; 00488e49
    LEA EAX,[EBX + 0x8]                 ; 00488e4a
    PUSH EAX                            ; 00488e4d
    LEA EAX,[EBX + 0x4]                 ; 00488e4e
    MOV EDX,0xffffffff                  ; 00488e51
    PUSH EAX                            ; 00488e56
    MOV dword ptr [ESP + 0x70],EDX      ; 00488e57
    PUSH EBX                            ; 00488e5b
    MOV ECX,dword ptr [ESI]             ; 00488e5c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00488e5e
    PUSH 0x5d2ee6                       ; 00488e65 | = " { %f, %f, %f }%n"
    ADD EAX,ECX                         ; 00488e6a
    PUSH EAX                            ; 00488e6c
    CALL FUN_005ba8cc                   ; 00488e6d
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0x18                        ; 00488e72
    MOV EDI,dword ptr [ESP + 0x64]      ; 00488e75
    CMP EDI,0x7                         ; 00488e79
    JL 0x00488e93                       ; 00488e7c
        ;   XREF to: 00488e93 (CONDITIONAL_JUMP)  ; LAB_00488e93
    MOV EAX,EDI                         ; 00488e7e
    MOV EDI,dword ptr [ESI]             ; 00488e80
    ADD EDI,EAX                         ; 00488e82
    MOV EAX,0x1                         ; 00488e84
    MOV dword ptr [ESI],EDI             ; 00488e89
    ADD ESP,0x68                        ; 00488e8b
    POP EBP                             ; 00488e8e
    POP EDI                             ; 00488e8f
    POP ESI                             ; 00488e90
    POP EBX                             ; 00488e91
    RET                                 ; 00488e92
    LEA EAX,[ESP + 0x64]                ; 00488e93
        ;   Label: LAB_00488e93
    PUSH EAX                            ; 00488e97
    LEA EAX,[ESP + 0x4]                 ; 00488e98
    PUSH EAX                            ; 00488e9c
    MOV EBP,dword ptr [ESI]             ; 00488e9d
    MOV EAX,dword ptr [ESP + 0x84]      ; 00488e9f
    PUSH 0x5d2ef8                       ; 00488ea6 | = " %[^ ,(){}]%n"
    ADD EAX,EBP                         ; 00488eab
    PUSH EAX                            ; 00488ead
    CALL FUN_005ba8cc                   ; 00488eae
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0x10                        ; 00488eb3
    CMP dword ptr [ESP + 0x64],0x0      ; 00488eb6
    JL 0x00488f0e                       ; 00488ebb
        ;   XREF to: 00488f0e (CONDITIONAL_JUMP)  ; LAB_00488f0e
    PUSH 0x7bbff8                       ; 00488ebd | DAT_007bbff8
    MOV EDX,dword ptr [0x007bc030]      ; 00488ec2 | DAT_007bc030
    PUSH EDX                            ; 00488ec8
    LEA EAX,[ESP + 0x8]                 ; 00488ec9
    PUSH EAX                            ; 00488ecd
    CALL FUN_00488d00                   ; 00488ece
        ;   XREF to: 00488d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00488d00()
    MOV EDX,EAX                         ; 00488ed3
    ADD ESP,0xc                         ; 00488ed5
    TEST EAX,EAX                        ; 00488ed8
    JZ 0x00488f2d                       ; 00488eda
        ;   XREF to: 00488f2d (CONDITIONAL_JUMP)  ; LAB_00488f2d
    MOV EAX,dword ptr [ESP + 0x64]      ; 00488edc
    ADD dword ptr [ESI],EAX             ; 00488ee0
    CMP EDX,dword ptr [0x005f61e4]      ; 00488ee2 | DAT_005f61e4
    JZ 0x00488f3a                       ; 00488ee8
        ;   XREF to: 00488f3a (CONDITIONAL_JUMP)  ; LAB_00488f3a
    ADD EDX,0x20                        ; 00488eea
    CMP EBX,EDX                         ; 00488eed
    JZ 0x00488f01                       ; 00488eef
        ;   XREF to: 00488f01 (CONDITIONAL_JUMP)  ; LAB_00488f01
    MOV EAX,dword ptr [EDX]             ; 00488ef1
    MOV dword ptr [EBX],EAX             ; 00488ef3
    MOV EAX,dword ptr [EDX + 0x4]       ; 00488ef5
    MOV dword ptr [EBX + 0x4],EAX       ; 00488ef8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00488efb
    MOV dword ptr [EBX + 0x8],EAX       ; 00488efe
    MOV EAX,0x1                         ; 00488f01
        ;   Label: LAB_00488f01
    ADD ESP,0x68                        ; 00488f06
    POP EBP                             ; 00488f09
    POP EDI                             ; 00488f0a
    POP ESI                             ; 00488f0b
    POP EBX                             ; 00488f0c
    RET                                 ; 00488f0d
    PUSH 0x5d2f06                       ; 00488f0e | = "Error parsing vector location"
        ;   Label: LAB_00488f0e
    PUSH 0x1c3dd10                      ; 00488f13 | DAT_01c3dd10
    CALL FUN_005b7790                   ; 00488f18
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0xffffffff                  ; 00488f1d
    ADD ESP,0x8                         ; 00488f22
    ADD ESP,0x68                        ; 00488f25
    POP EBP                             ; 00488f28
    POP EDI                             ; 00488f29
    POP ESI                             ; 00488f2a
    POP EBX                             ; 00488f2b
    RET                                 ; 00488f2c
    MOV EAX,0xffffffff                  ; 00488f2d
        ;   Label: LAB_00488f2d
    ADD ESP,0x68                        ; 00488f32
    POP EBP                             ; 00488f35
    POP EDI                             ; 00488f36
    POP ESI                             ; 00488f37
    POP EBX                             ; 00488f38
    RET                                 ; 00488f39
    XOR EAX,EAX                         ; 00488f3a
        ;   Label: LAB_00488f3a
    ADD ESP,0x68                        ; 00488f3c
    POP EBP                             ; 00488f3f
    POP EDI                             ; 00488f40
    POP ESI                             ; 00488f41
    POP EBX                             ; 00488f42
    RET                                 ; 00488f43

