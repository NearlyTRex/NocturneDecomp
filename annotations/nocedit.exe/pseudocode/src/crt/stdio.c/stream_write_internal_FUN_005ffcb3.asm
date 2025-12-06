; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream
; void *           Stack[0x8]:4   buffer
; typedef SIZE_T ULONG_PTR Stack[0xc]:4   count
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452b01
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e103d
;
; Called Functions:
;   crt_stdio.c_prepare_stream_for_write_FUN_00606055
;   crt_stdio.c_reportStreamError_FUN_00606020
;   crt_stdio.c_stream_flush_FUN_006060bb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ffcb3
        ;   Label: crt_stdio.c_stream_write_internal_FUN_005ffcb3
    PUSH ESI                            ; 005ffcb4
    PUSH EDI                            ; 005ffcb5
    PUSH EBP                            ; 005ffcb6
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ffcb7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005ffcbb
    MOV EAX,dword ptr [EBX]             ; 005ffcbf
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ffcc1
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005ffcc4
    MOV EDX,EBX                         ; 005ffcc8
    TEST ECX,ECX                        ; 005ffcca
    JNZ 0x005ffd42                      ; 005ffccc | LAB_005ffd42
        ;   XREF to: 005ffd42 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ffcd2
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ffcd4
    ADD EAX,EBX                         ; 005ffcd7
    MOV EDI,dword ptr [EAX + 0x8]       ; 005ffcd9
    TEST EDI,EDI                        ; 005ffcdc
    JNZ 0x005ffd49                      ; 005ffcde | LAB_005ffd49
        ;   XREF to: 005ffd49 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0xc]       ; 005ffce0
    TEST AH,0x40                        ; 005ffce3
    JNZ 0x005ffd49                      ; 005ffce6 | LAB_005ffd49
        ;   XREF to: 005ffd49 (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 005ffce8
        ;   Label: LAB_005ffce8
    JZ 0x005ffd34                       ; 005ffcea | LAB_005ffd34
        ;   XREF to: 005ffd34 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ffcec
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ffcee
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 005ffcf1
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005ffcf5
    MOV ESI,dword ptr [EDX + 0x20]      ; 005ffcf8
    SUB EAX,ESI                         ; 005ffcfb
    CMP EBP,EAX                         ; 005ffcfd
    JGE 0x005ffd58                      ; 005ffcff | LAB_005ffd58
        ;   XREF to: 005ffd58 (CONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 005ffd01
    MOV ECX,EBP                         ; 005ffd03
    MOV ESI,dword ptr [ESP + 0x18]      ; 005ffd05
    PUSH EDI                            ; 005ffd09
    MOV EAX,ECX                         ; 005ffd0a
    SHR ECX,0x2                         ; 005ffd0c
    MOVSD.REP ES:EDI,ESI                ; 005ffd0f
    MOV CL,AL                           ; 005ffd11
    AND CL,0x3                          ; 005ffd13
    MOVSB.REP ES:EDI,ESI                ; 005ffd16
    POP EDI                             ; 005ffd18
    ADD dword ptr [EDX + 0x20],EBP      ; 005ffd19
    MOV EAX,EBP                         ; 005ffd1c
    CMP EAX,EBP                         ; 005ffd1e
        ;   Label: LAB_005ffd1e
    JZ 0x005ffd34                       ; 005ffd20 | LAB_005ffd34
        ;   XREF to: 005ffd34 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ffd22
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ffd24
    PUSH 0x2                            ; 005ffd27
    ADD EAX,EBX                         ; 005ffd29
    PUSH EAX                            ; 005ffd2b
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 005ffd2c | void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ffd31
    MOV EAX,dword ptr [EBX]             ; 005ffd34
        ;   Label: LAB_005ffd34
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ffd36
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 005ffd39
    TEST AH,0x20                        ; 005ffd3d
    JNZ 0x005ffd6a                      ; 005ffd40 | LAB_005ffd6a
        ;   XREF to: 005ffd6a (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005ffd42
        ;   Label: LAB_005ffd42
    POP EBP                             ; 005ffd44
    POP EDI                             ; 005ffd45
    POP ESI                             ; 005ffd46
    POP EBX                             ; 005ffd47
    RET                                 ; 005ffd48
    PUSH EDX                            ; 005ffd49
        ;   Label: LAB_005ffd49
    CALL crt_stdio.c_prepare_stream_for_write_FUN_00606055 ; 005ffd4a | bool crt_stdio.c_prepare_stream_for_write_FUN_00606055(FILE * stream)
        ;   XREF to: 00606055 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ffd4f
    TEST EAX,EAX                        ; 005ffd52
    JNZ 0x005ffce8                      ; 005ffd54 | LAB_005ffce8
        ;   XREF to: 005ffce8 (CONDITIONAL_JUMP)
    JMP 0x005ffd42                      ; 005ffd56 | LAB_005ffd42
        ;   XREF to: 005ffd42 (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 005ffd58
        ;   Label: LAB_005ffd58
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005ffd59
    PUSH EDI                            ; 005ffd5d
    MOV EAX,dword ptr [EDX + 0x28]      ; 005ffd5e
    PUSH EDX                            ; 005ffd61
    CALL dword ptr [EAX + 0x4]          ; 005ffd62
    ADD ESP,0xc                         ; 005ffd65
    JMP 0x005ffd1e                      ; 005ffd68 | LAB_005ffd1e
        ;   XREF to: 005ffd1e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005ffd6a
        ;   Label: LAB_005ffd6a
    CALL crt_stdio.c_stream_flush_FUN_006060bb ; 005ffd6b | FILE * crt_stdio.c_stream_flush_FUN_006060bb(FILE * stream)
        ;   XREF to: 006060bb (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ffd70
    JMP 0x005ffd42                      ; 005ffd73 | LAB_005ffd42
        ;   XREF to: 005ffd42 (UNCONDITIONAL_JUMP)

