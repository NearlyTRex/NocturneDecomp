; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00415890(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00415f50 at 00416177
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415800 at 0041581b
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416730
;   core_bodypart.cpp_FUN_004162b0 at 0041634e
;   core_bodypart.cpp_FUN_004178c0 at 004178ec
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00543490 at 005436ee
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005cbd56
;   TerminatedCString s_CBodyPart_setCounts_out_005cbd6b
;   TerminatedCString s_core_bodypart_cpp_005cbdb0
;   TerminatedCString s_CBodyPart_setCounts_out_005cbdc5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415890
        ;   Label: core_bodypart.cpp_FUN_00415890
    PUSH ESI                            ; 00415891
    PUSH EDI                            ; 00415892
    PUSH EBP                            ; 00415893
    MOV EBX,dword ptr [ESP + 0x14]      ; 00415894
    MOV EAX,dword ptr [ESP + 0x18]      ; 00415898
    MOV dword ptr [EBX + 0x2d0],EAX     ; 0041589c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004158a2
    MOV EDX,dword ptr [EBX + 0x2d0]     ; 004158a6
    MOV dword ptr [EBX + 0x2dc],EAX     ; 004158ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004158b2
    SUB EAX,EDX                         ; 004158b9
    SHL EAX,0x2                         ; 004158bb
    PUSH EAX                            ; 004158be
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 004158bf
    PUSH EDX                            ; 004158c5
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 004158c6
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [EBX + 0x2d0]     ; 004158cb
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004158d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004158d7
    SUB EAX,EDX                         ; 004158de
    ADD ESP,0x8                         ; 004158e0
    SHL EAX,0x2                         ; 004158e3
    PUSH EAX                            ; 004158e6
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 004158e7
    PUSH ECX                            ; 004158ed
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 004158ee
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x2d8],EAX     ; 004158f3
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 004158f9
    SHL EAX,0x2                         ; 004158ff
    MOV EDX,EAX                         ; 00415902
    SHL EAX,0x4                         ; 00415904
    ADD ESP,0x8                         ; 00415907
    SUB EAX,EDX                         ; 0041590a
    PUSH EAX                            ; 0041590c
    MOV ESI,dword ptr [EBX + 0x2e0]     ; 0041590d
    PUSH ESI                            ; 00415913
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00415914
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x2e0],EAX     ; 00415919
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 0041591f
    ADD ESP,0x8                         ; 00415925
    SHL EAX,0x2                         ; 00415928
    PUSH EAX                            ; 0041592b
    MOV EDI,dword ptr [EBX + 0x2e4]     ; 0041592c
    PUSH EDI                            ; 00415932
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00415933
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00415938
    MOV EBP,dword ptr [EBX + 0x2d0]     ; 0041593b
    MOV dword ptr [EBX + 0x2e4],EAX     ; 00415941
    TEST EBP,EBP                        ; 00415947
    JLE 0x00415987                      ; 00415949
        ;   XREF to: 00415987 (CONDITIONAL_JUMP)  ; LAB_00415987
    CMP dword ptr [EBX + 0x2d4],0x0     ; 0041594b
    JZ 0x0041595d                       ; 00415952
        ;   XREF to: 0041595d (CONDITIONAL_JUMP)  ; LAB_0041595d
    CMP dword ptr [EBX + 0x2d8],0x0     ; 00415954
    JNZ 0x00415987                      ; 0041595b
        ;   XREF to: 00415987 (CONDITIONAL_JUMP)  ; LAB_00415987
    MOV EDI,dword ptr [EBX + 0x2d0]     ; 0041595d
        ;   Label: LAB_0041595d
    PUSH EDI                            ; 00415963
    MOV ECX,0x5cbd56                    ; 00415964 | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb2                        ; 00415969
    PUSH 0x5cbd6b                       ; 0041596e | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00415973 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00415979 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0041597f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00415984
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00415987
        ;   Label: LAB_00415987
    JLE 0x004159a2                      ; 0041598e
        ;   XREF to: 004159a2 (CONDITIONAL_JUMP)  ; LAB_004159a2
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00415990
    JZ 0x004159a7                       ; 00415997
        ;   XREF to: 004159a7 (CONDITIONAL_JUMP)  ; LAB_004159a7
    CMP dword ptr [EBX + 0x2e4],0x0     ; 00415999
    JZ 0x004159a7                       ; 004159a0
        ;   XREF to: 004159a7 (CONDITIONAL_JUMP)  ; LAB_004159a7
    POP EBP                             ; 004159a2
        ;   Label: LAB_004159a2
    POP EDI                             ; 004159a3
    POP ESI                             ; 004159a4
    POP EBX                             ; 004159a5
    RET                                 ; 004159a6
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 004159a7
        ;   Label: LAB_004159a7
    PUSH EDI                            ; 004159ad
    MOV ECX,0x5cbdb0                    ; 004159ae | = "..\\core\\bodypart.cpp"
    MOV ESI,0xb7                        ; 004159b3
    PUSH 0x5cbdc5                       ; 004159b8 | = "CBodyPart::setCounts - out of memory ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004159bd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004159c3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004159c9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004159ce
    POP EBP                             ; 004159d1
    POP EDI                             ; 004159d2
    POP ESI                             ; 004159d3
    POP EBX                             ; 004159d4
    RET                                 ; 004159d5

