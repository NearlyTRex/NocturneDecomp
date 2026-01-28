; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_set_cpp_FUN_005714c0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005714c0
        ;   Label: core_set.cpp_FUN_005714c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005714c4
    CMP EAX,EDX                         ; 005714c8
    JNZ 0x005714d7                      ; 005714ca
        ;   XREF to: 005714d7 (CONDITIONAL_JUMP)  ; LAB_005714d7
    ADD EDX,0xc                         ; 005714cc
    LEA ECX,[EAX + 0xc]                 ; 005714cf
    CMP ECX,EDX                         ; 005714d2
    JNZ 0x005714f2                      ; 005714d4
        ;   XREF to: 005714f2 (CONDITIONAL_JUMP)  ; LAB_005714f2
    RET                                 ; 005714d6
    MOV ECX,dword ptr [EDX]             ; 005714d7
        ;   Label: LAB_005714d7
    MOV dword ptr [EAX],ECX             ; 005714d9
    MOV ECX,dword ptr [EDX + 0x4]       ; 005714db
    MOV dword ptr [EAX + 0x4],ECX       ; 005714de
    MOV ECX,dword ptr [EDX + 0x8]       ; 005714e1
    MOV dword ptr [EAX + 0x8],ECX       ; 005714e4
    ADD EDX,0xc                         ; 005714e7
    LEA ECX,[EAX + 0xc]                 ; 005714ea
    CMP ECX,EDX                         ; 005714ed
    JNZ 0x005714f2                      ; 005714ef
        ;   XREF to: 005714f2 (CONDITIONAL_JUMP)  ; LAB_005714f2
    RET                                 ; 005714f1
    PUSH EBX                            ; 005714f2
        ;   Label: LAB_005714f2
    MOV EBX,dword ptr [EDX]             ; 005714f3
    MOV dword ptr [ECX],EBX             ; 005714f5
    MOV EBX,dword ptr [EDX + 0x4]       ; 005714f7
    MOV dword ptr [ECX + 0x4],EBX       ; 005714fa
    MOV EBX,dword ptr [EDX + 0x8]       ; 005714fd
    MOV dword ptr [ECX + 0x8],EBX       ; 00571500
    POP EBX                             ; 00571503
    RET                                 ; 00571504

