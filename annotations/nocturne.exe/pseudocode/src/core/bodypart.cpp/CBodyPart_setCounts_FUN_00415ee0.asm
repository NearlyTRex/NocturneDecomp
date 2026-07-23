; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00416570 at 00416797
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40 at 00415e5b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 00416d70
;   core_bodypart.cpp_CBodyPart_process_FUN_004168d0 at 0041696f
;   core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70 at 00417d96
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0 at 0051a11e
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00578eae
;   TerminatedCString s_CBodyPart_setCounts_out_00578ec3
;   TerminatedCString s_core_bodypart_cpp_00578f08
;   TerminatedCString s_CBodyPart_setCounts_out_00578f1d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415ee0
        ;   Label: core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
    PUSH ESI                            ; 00415ee1
    PUSH EDI                            ; 00415ee2
    PUSH EBP                            ; 00415ee3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00415ee4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00415ee8
    MOV dword ptr [EBX + 0x16c],EAX     ; 00415eec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00415ef2
    MOV EDX,dword ptr [EBX + 0x16c]     ; 00415ef6
    MOV dword ptr [EBX + 0x178],EAX     ; 00415efc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00415f02
    SUB EAX,EDX                         ; 00415f09
    SHL EAX,0x2                         ; 00415f0b
    PUSH EAX                            ; 00415f0e
    MOV EDX,dword ptr [EBX + 0x170]     ; 00415f0f
    PUSH EDX                            ; 00415f15
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00415f16
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV EDX,dword ptr [EBX + 0x16c]     ; 00415f1b
    MOV dword ptr [EBX + 0x170],EAX     ; 00415f21
    LEA EAX,[EDX*0x4 + 0x0]             ; 00415f27
    SUB EAX,EDX                         ; 00415f2e
    ADD ESP,0x8                         ; 00415f30
    SHL EAX,0x2                         ; 00415f33
    PUSH EAX                            ; 00415f36
    MOV ECX,dword ptr [EBX + 0x174]     ; 00415f37
    PUSH ECX                            ; 00415f3d
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00415f3e
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV dword ptr [EBX + 0x174],EAX     ; 00415f43
    MOV EAX,dword ptr [EBX + 0x178]     ; 00415f49
    SHL EAX,0x2                         ; 00415f4f
    MOV EDX,EAX                         ; 00415f52
    SHL EAX,0x4                         ; 00415f54
    ADD ESP,0x8                         ; 00415f57
    SUB EAX,EDX                         ; 00415f5a
    PUSH EAX                            ; 00415f5c
    MOV ESI,dword ptr [EBX + 0x17c]     ; 00415f5d
    PUSH ESI                            ; 00415f63
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00415f64
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    MOV dword ptr [EBX + 0x17c],EAX     ; 00415f69
    MOV EAX,dword ptr [EBX + 0x178]     ; 00415f6f
    ADD ESP,0x8                         ; 00415f75
    SHL EAX,0x2                         ; 00415f78
    PUSH EAX                            ; 00415f7b
    MOV EDI,dword ptr [EBX + 0x180]     ; 00415f7c
    PUSH EDI                            ; 00415f82
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00415f83
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00415f88
    MOV EBP,dword ptr [EBX + 0x16c]     ; 00415f8b
    MOV dword ptr [EBX + 0x180],EAX     ; 00415f91
    TEST EBP,EBP                        ; 00415f97
    JLE 0x00415fd7                      ; 00415f99
        ;   XREF to: 00415fd7 (CONDITIONAL_JUMP)  ; LAB_00415fd7
    CMP dword ptr [EBX + 0x170],0x0     ; 00415f9b
    JZ 0x00415fad                       ; 00415fa2
        ;   XREF to: 00415fad (CONDITIONAL_JUMP)  ; LAB_00415fad
    CMP dword ptr [EBX + 0x174],0x0     ; 00415fa4
    JNZ 0x00415fd7                      ; 00415fab
        ;   XREF to: 00415fd7 (CONDITIONAL_JUMP)  ; LAB_00415fd7
    MOV EDI,dword ptr [EBX + 0x16c]     ; 00415fad
        ;   Label: LAB_00415fad
    PUSH EDI                            ; 00415fb3
    MOV ECX,0x578eae                    ; 00415fb4 | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb2                        ; 00415fb9
    PUSH 0x578ec3                       ; 00415fbe | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00415fc3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00415fc9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00415fcf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00415fd4
    CMP dword ptr [EBX + 0x178],0x0     ; 00415fd7
        ;   Label: LAB_00415fd7
    JLE 0x00415ff2                      ; 00415fde
        ;   XREF to: 00415ff2 (CONDITIONAL_JUMP)  ; LAB_00415ff2
    CMP dword ptr [EBX + 0x17c],0x0     ; 00415fe0
    JZ 0x00415ff7                       ; 00415fe7
        ;   XREF to: 00415ff7 (CONDITIONAL_JUMP)  ; LAB_00415ff7
    CMP dword ptr [EBX + 0x180],0x0     ; 00415fe9
    JZ 0x00415ff7                       ; 00415ff0
        ;   XREF to: 00415ff7 (CONDITIONAL_JUMP)  ; LAB_00415ff7
    POP EBP                             ; 00415ff2
        ;   Label: LAB_00415ff2
    POP EDI                             ; 00415ff3
    POP ESI                             ; 00415ff4
    POP EBX                             ; 00415ff5
    RET                                 ; 00415ff6
    MOV EDI,dword ptr [EBX + 0x178]     ; 00415ff7
        ;   Label: LAB_00415ff7
    PUSH EDI                            ; 00415ffd
    MOV ECX,0x578f08                    ; 00415ffe | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb7                        ; 00416003
    PUSH 0x578f1d                       ; 00416008 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0041600d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00416013 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00416019
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0041601e
    POP EBP                             ; 00416021
    POP EDI                             ; 00416022
    POP ESI                             ; 00416023
    POP EBX                             ; 00416024
    RET                                 ; 00416025

