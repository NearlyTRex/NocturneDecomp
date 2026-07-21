; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30 at 00511b35
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bcf0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0
    PUSH ESI                            ; 0046bcf1
    PUSH EDI                            ; 0046bcf2
    PUSH EBP                            ; 0046bcf3
    SUB ESP,0x8                         ; 0046bcf4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046bcf7
    XOR EDX,EDX                         ; 0046bcfb
    MOV ECX,dword ptr [EBP + 0x40]      ; 0046bcfd
    MOV dword ptr [ESP],EDX             ; 0046bd00
    TEST ECX,ECX                        ; 0046bd03
    JLE 0x0046bd59                      ; 0046bd05
        ;   XREF to: 0046bd59 (CONDITIONAL_JUMP)  ; LAB_0046bd59
    XOR EDI,EDI                         ; 0046bd07
        ;   Label: LAB_0046bd07
    MOV EAX,dword ptr [EBP + 0x44]      ; 0046bd09
    MOV dword ptr [ESP + 0x4],EDI       ; 0046bd0c
    TEST EAX,EAX                        ; 0046bd10
    JLE 0x0046bd4b                      ; 0046bd12
        ;   XREF to: 0046bd4b (CONDITIONAL_JUMP)  ; LAB_0046bd4b
    MOV ESI,dword ptr [EBP + 0x48]      ; 0046bd14
        ;   Label: LAB_0046bd14
    XOR EBX,EBX                         ; 0046bd17
    TEST ESI,ESI                        ; 0046bd19
    JLE 0x0046bd3b                      ; 0046bd1b
        ;   XREF to: 0046bd3b (CONDITIONAL_JUMP)  ; LAB_0046bd3b
    PUSH EBX                            ; 0046bd1d
        ;   Label: LAB_0046bd1d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046bd1e
    PUSH EAX                            ; 0046bd22
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046bd23
    PUSH EDX                            ; 0046bd27
    PUSH EBP                            ; 0046bd28
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046bd29
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0()
    ADD ESP,0x10                        ; 0046bd2e
    TEST EAX,EAX                        ; 0046bd31
    JNZ 0x0046bd61                      ; 0046bd33
        ;   XREF to: 0046bd61 (CONDITIONAL_JUMP)  ; LAB_0046bd61
    INC EBX                             ; 0046bd35
        ;   Label: LAB_0046bd35
    CMP EBX,dword ptr [EBP + 0x48]      ; 0046bd36
    JL 0x0046bd1d                       ; 0046bd39
        ;   XREF to: 0046bd1d (CONDITIONAL_JUMP)  ; LAB_0046bd1d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046bd3b
        ;   Label: LAB_0046bd3b
    INC EDX                             ; 0046bd3f
    MOV ECX,dword ptr [EBP + 0x44]      ; 0046bd40
    MOV dword ptr [ESP + 0x4],EDX       ; 0046bd43
    CMP EDX,ECX                         ; 0046bd47
    JL 0x0046bd14                       ; 0046bd49
        ;   XREF to: 0046bd14 (CONDITIONAL_JUMP)  ; LAB_0046bd14
    MOV EBX,dword ptr [ESP]             ; 0046bd4b
        ;   Label: LAB_0046bd4b
    INC EBX                             ; 0046bd4e
    MOV ESI,dword ptr [EBP + 0x40]      ; 0046bd4f
    MOV dword ptr [ESP],EBX             ; 0046bd52
    CMP EBX,ESI                         ; 0046bd55
    JL 0x0046bd07                       ; 0046bd57
        ;   XREF to: 0046bd07 (CONDITIONAL_JUMP)  ; LAB_0046bd07
    ADD ESP,0x8                         ; 0046bd59
        ;   Label: LAB_0046bd59
    POP EBP                             ; 0046bd5c
    POP EDI                             ; 0046bd5d
    POP ESI                             ; 0046bd5e
    POP EBX                             ; 0046bd5f
    RET                                 ; 0046bd60
    MOV ECX,dword ptr [EAX]             ; 0046bd61
        ;   Label: LAB_0046bd61
    TEST ECX,ECX                        ; 0046bd63
    JZ 0x0046bd35                       ; 0046bd65
        ;   XREF to: 0046bd35 (CONDITIONAL_JUMP)  ; LAB_0046bd35
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046bd67
    TEST ESI,ESI                        ; 0046bd6a
    JZ 0x0046bd35                       ; 0046bd6c
        ;   XREF to: 0046bd35 (CONDITIONAL_JUMP)  ; LAB_0046bd35
    MOV EDI,ECX                         ; 0046bd6e
    MOV ECX,0x40                        ; 0046bd70
    PUSH EDI                            ; 0046bd75
    MOV EAX,ECX                         ; 0046bd76
    SHR ECX,0x2                         ; 0046bd78
    MOVSD.REP ES:EDI,ESI                ; 0046bd7b
    MOV CL,AL                           ; 0046bd7d
    AND CL,0x3                          ; 0046bd7f
    MOVSB.REP ES:EDI,ESI                ; 0046bd82
    POP EDI                             ; 0046bd84
    JMP 0x0046bd35                      ; 0046bd85
        ;   XREF to: 0046bd35 (UNCONDITIONAL_JUMP)  ; LAB_0046bd35

