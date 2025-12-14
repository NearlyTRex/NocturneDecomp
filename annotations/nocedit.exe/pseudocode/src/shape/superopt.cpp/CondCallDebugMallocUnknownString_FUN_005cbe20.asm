; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20()
;
;
; XREF[1]:
;   shape_superopt.cpp_FUN_005c91e0 at 005c9304
;
; Called Functions:
;   crt_memory.c_malloc_FUN_006021da
;   crt_memory.c_realloc_FUN_00601df0
;   shape_superopt.cpp_FUN_005cbf20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbe20
        ;   Label: shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
    PUSH ESI                            ; 005cbe21
    PUSH EBP                            ; 005cbe22
    MOV EBX,dword ptr [ESP + 0x10]      ; 005cbe23
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cbe27
    PUSH EDX                            ; 005cbe2b
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cbe2c
    PUSH ECX                            ; 005cbe30
    PUSH EBX                            ; 005cbe31
    CALL shape_superopt.cpp_FUN_005cbf20 ; 005cbe32
        ;   XREF to: 005cbf20 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005cbf20()
    MOV EAX,dword ptr [EBX + 0x8]       ; 005cbe37
    INC EAX                             ; 005cbe3a
    ADD ESP,0xc                         ; 005cbe3b
    SHL EAX,0x3                         ; 005cbe3e
    PUSH EAX                            ; 005cbe41
    MOV ESI,dword ptr [EBX + 0xc]       ; 005cbe42
    PUSH ESI                            ; 005cbe45
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005cbe46
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005cbe4b
    TEST EAX,EAX                        ; 005cbe4e
    JNZ 0x005cbe56                      ; 005cbe50
        ;   XREF to: 005cbe56 (CONDITIONAL_JUMP)  ; LAB_005cbe56
    POP EBP                             ; 005cbe52
        ;   Label: LAB_005cbe52
    POP ESI                             ; 005cbe53
    POP EBX                             ; 005cbe54
    RET                                 ; 005cbe55
    MOV dword ptr [EBX + 0xc],EAX       ; 005cbe56
        ;   Label: LAB_005cbe56
    MOV EAX,dword ptr [EBX + 0x8]       ; 005cbe59
    MOV EBP,dword ptr [EBX + 0xc]       ; 005cbe5c
    SHL EAX,0x3                         ; 005cbe5f
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cbe62
    ADD EBP,EAX                         ; 005cbe66
    LEA EAX,[ESI*0x4 + 0x0]             ; 005cbe68
    SUB EAX,ESI                         ; 005cbe6f
    MOV ESI,EAX                         ; 005cbe71
    SHL ESI,0x5                         ; 005cbe73
    PUSH ESI                            ; 005cbe76
    CALL crt_memory.c_malloc_FUN_006021da ; 005cbe77
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
    ADD ESP,0x4                         ; 005cbe7c
    MOV dword ptr [EBP + 0x4],EAX       ; 005cbe7f
    TEST EAX,EAX                        ; 005cbe82
    JZ 0x005cbe52                       ; 005cbe84
        ;   XREF to: 005cbe52 (CONDITIONAL_JUMP)  ; LAB_005cbe52
    PUSH EDI                            ; 005cbe86
    MOV EDI,EAX                         ; 005cbe87
    MOV ECX,ESI                         ; 005cbe89
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cbe8b
    PUSH EDI                            ; 005cbe8f
    MOV EAX,ECX                         ; 005cbe90
    SHR ECX,0x2                         ; 005cbe92
    MOVSD.REP ES:EDI,ESI                ; 005cbe95
    MOV CL,AL                           ; 005cbe97
    AND CL,0x3                          ; 005cbe99
    MOVSB.REP ES:EDI,ESI                ; 005cbe9c
    POP EDI                             ; 005cbe9e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cbe9f
    MOV dword ptr [EBP],EAX             ; 005cbea3
    MOV EAX,0x1                         ; 005cbea6
    ADD dword ptr [EBX + 0x8],EAX       ; 005cbeab
    POP EDI                             ; 005cbeae
    POP EBP                             ; 005cbeaf
    POP ESI                             ; 005cbeb0
    POP EBX                             ; 005cbeb1
    RET                                 ; 005cbeb2

