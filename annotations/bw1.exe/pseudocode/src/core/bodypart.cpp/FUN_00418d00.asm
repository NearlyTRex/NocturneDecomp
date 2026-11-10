; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00418d00(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_004193c0 at 00419606
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00418c70 at 00418c8b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 at 00419bc0
;   core_bodypart.cpp_CBodyPart_process_FUN_00419740 at 004197de
;   core_bodypart.cpp_FUN_0041ad40 at 0041ad6c
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00565b10 at 00565d6e
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005d42b5
;   TerminatedCString s_CBodyPart_setCounts_out_005d42ca
;   TerminatedCString s_core_bodypart_cpp_005d430f
;   TerminatedCString s_CBodyPart_setCounts_out_005d4324
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418d00
        ;   Label: core_bodypart.cpp_FUN_00418d00
    PUSH ESI                            ; 00418d01
    PUSH EDI                            ; 00418d02
    PUSH EBP                            ; 00418d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00418d04
    MOV EAX,dword ptr [ESP + 0x18]      ; 00418d08
    MOV dword ptr [EBX + 0x174],EAX     ; 00418d0c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00418d12
    MOV EDX,dword ptr [EBX + 0x174]     ; 00418d16
    MOV dword ptr [EBX + 0x180],EAX     ; 00418d1c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418d22
    SUB EAX,EDX                         ; 00418d29
    SHL EAX,0x2                         ; 00418d2b
    PUSH EAX                            ; 00418d2e
    MOV EDX,dword ptr [EBX + 0x178]     ; 00418d2f
    PUSH EDX                            ; 00418d35
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00418d36
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [EBX + 0x174]     ; 00418d3b
    MOV dword ptr [EBX + 0x178],EAX     ; 00418d41
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418d47
    SUB EAX,EDX                         ; 00418d4e
    ADD ESP,0x8                         ; 00418d50
    SHL EAX,0x2                         ; 00418d53
    PUSH EAX                            ; 00418d56
    MOV ECX,dword ptr [EBX + 0x17c]     ; 00418d57
    PUSH ECX                            ; 00418d5d
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00418d5e
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x17c],EAX     ; 00418d63
    MOV EAX,dword ptr [EBX + 0x180]     ; 00418d69
    SHL EAX,0x2                         ; 00418d6f
    MOV EDX,EAX                         ; 00418d72
    SHL EAX,0x4                         ; 00418d74
    ADD ESP,0x8                         ; 00418d77
    SUB EAX,EDX                         ; 00418d7a
    PUSH EAX                            ; 00418d7c
    MOV ESI,dword ptr [EBX + 0x184]     ; 00418d7d
    PUSH ESI                            ; 00418d83
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00418d84
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x184],EAX     ; 00418d89
    MOV EAX,dword ptr [EBX + 0x180]     ; 00418d8f
    ADD ESP,0x8                         ; 00418d95
    SHL EAX,0x2                         ; 00418d98
    PUSH EAX                            ; 00418d9b
    MOV EDI,dword ptr [EBX + 0x188]     ; 00418d9c
    PUSH EDI                            ; 00418da2
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00418da3
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00418da8
    MOV EBP,dword ptr [EBX + 0x174]     ; 00418dab
    MOV dword ptr [EBX + 0x188],EAX     ; 00418db1
    TEST EBP,EBP                        ; 00418db7
    JLE 0x00418df7                      ; 00418db9
        ;   XREF to: 00418df7 (CONDITIONAL_JUMP)  ; LAB_00418df7
    CMP dword ptr [EBX + 0x178],0x0     ; 00418dbb
    JZ 0x00418dcd                       ; 00418dc2
        ;   XREF to: 00418dcd (CONDITIONAL_JUMP)  ; LAB_00418dcd
    CMP dword ptr [EBX + 0x17c],0x0     ; 00418dc4
    JNZ 0x00418df7                      ; 00418dcb
        ;   XREF to: 00418df7 (CONDITIONAL_JUMP)  ; LAB_00418df7
    MOV EDI,dword ptr [EBX + 0x174]     ; 00418dcd
        ;   Label: LAB_00418dcd
    PUSH EDI                            ; 00418dd3
    MOV ECX,0x5d42b5                    ; 00418dd4 | = "..\\core\\bodypart.cpp"
    MOV ESI,0xba                        ; 00418dd9
    PUSH 0x5d42ca                       ; 00418dde | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00418de3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00418de9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00418def
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00418df4
    CMP dword ptr [EBX + 0x180],0x0     ; 00418df7
        ;   Label: LAB_00418df7
    JLE 0x00418e12                      ; 00418dfe
        ;   XREF to: 00418e12 (CONDITIONAL_JUMP)  ; LAB_00418e12
    CMP dword ptr [EBX + 0x184],0x0     ; 00418e00
    JZ 0x00418e17                       ; 00418e07
        ;   XREF to: 00418e17 (CONDITIONAL_JUMP)  ; LAB_00418e17
    CMP dword ptr [EBX + 0x188],0x0     ; 00418e09
    JZ 0x00418e17                       ; 00418e10
        ;   XREF to: 00418e17 (CONDITIONAL_JUMP)  ; LAB_00418e17
    POP EBP                             ; 00418e12
        ;   Label: LAB_00418e12
    POP EDI                             ; 00418e13
    POP ESI                             ; 00418e14
    POP EBX                             ; 00418e15
    RET                                 ; 00418e16
    MOV EDI,dword ptr [EBX + 0x180]     ; 00418e17
        ;   Label: LAB_00418e17
    PUSH EDI                            ; 00418e1d
    MOV ECX,0x5d430f                    ; 00418e1e | = "..\\core\\bodypart.cpp"
    MOV ESI,0xbf                        ; 00418e23
    PUSH 0x5d4324                       ; 00418e28 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00418e2d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00418e33 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00418e39
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00418e3e
    POP EBP                             ; 00418e41
    POP EDI                             ; 00418e42
    POP ESI                             ; 00418e43
    POP EBX                             ; 00418e44
    RET                                 ; 00418e45

