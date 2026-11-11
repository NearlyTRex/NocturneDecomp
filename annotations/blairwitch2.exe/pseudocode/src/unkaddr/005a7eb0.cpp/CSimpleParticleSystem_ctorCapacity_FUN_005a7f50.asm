; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50(CSimpleParticleSystem *this_ptr,int param_2)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; XREF[1]:
;   unkaddr_005a7eb0.cpp_FUN_005a7eb0 at 005a7eba
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005b8580
;   unkafter_superopt.cpp_FUN_005a84c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7f50
        ;   Label: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50
    PUSH EDI                            ; 005a7f51
    MOV EDI,dword ptr [ESP + 0xc]       ; 005a7f52
    MOV dword ptr [EDI + 0x40],0x6002e4 ; 005a7f56
    MOV dword ptr [EDI + 0x1c],0x0      ; 005a7f5d
    MOV dword ptr [EDI + 0x14],0x0      ; 005a7f64
    MOV dword ptr [EDI + 0x3c],0x0      ; 005a7f6b
    MOV dword ptr [EDI + 0xc],0x3f800000 ; 005a7f72
    MOV dword ptr [EDI + 0x24],0x3f800000 ; 005a7f79
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a7f80
    MOV dword ptr [EDI + 0x28],0x3f800000 ; 005a7f84
    MOV dword ptr [EDI + 0x18],EAX      ; 005a7f8b
    MOV EBX,dword ptr [EDI + 0x18]      ; 005a7f8e
    MOV dword ptr [EDI + 0x2c],0x3f800000 ; 005a7f91
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a7f98
    MOV dword ptr [EDI + 0x30],0x0      ; 005a7f9f
    SUB EAX,EBX                         ; 005a7fa6
    MOV dword ptr [EDI + 0x34],0x0      ; 005a7fa8
    SHL EAX,0x5                         ; 005a7faf
    MOV dword ptr [EDI + 0x10],0x0      ; 005a7fb2
    PUSH EAX                            ; 005a7fb9
    MOV dword ptr [EDI + 0x38],0x1      ; 005a7fba
    XOR EBX,EBX                         ; 005a7fc1
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005a7fc3
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005a7fc8
    MOV EDX,dword ptr [EDI + 0x18]      ; 005a7fcb
    MOV dword ptr [EDI + 0x3c],EAX      ; 005a7fce
    TEST EDX,EDX                        ; 005a7fd1
    JLE 0x005a7ff2                      ; 005a7fd3
        ;   XREF to: 005a7ff2 (CONDITIONAL_JUMP)  ; LAB_005a7ff2
    PUSH ESI                            ; 005a7fd5
    XOR ESI,ESI                         ; 005a7fd6
    MOV EAX,dword ptr [EDI + 0x3c]      ; 005a7fd8
        ;   Label: LAB_005a7fd8
    ADD EAX,ESI                         ; 005a7fdb
    PUSH EAX                            ; 005a7fdd
    INC EBX                             ; 005a7fde
    CALL unkafter_superopt.cpp_FUN_005a84c0 ; 005a7fdf
        ;   XREF to: 005a84c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a84c0()
    ADD ESI,0x60                        ; 005a7fe4
    MOV ECX,dword ptr [EDI + 0x18]      ; 005a7fe7
    ADD ESP,0x4                         ; 005a7fea
    CMP EBX,ECX                         ; 005a7fed
    JL 0x005a7fd8                       ; 005a7fef
        ;   XREF to: 005a7fd8 (CONDITIONAL_JUMP)  ; LAB_005a7fd8
    POP ESI                             ; 005a7ff1
    MOV EAX,EDI                         ; 005a7ff2
        ;   Label: LAB_005a7ff2
    MOV dword ptr [EDI + 0x10],0x1      ; 005a7ff4
    POP EDI                             ; 005a7ffb
    POP EBX                             ; 005a7ffc
    RET                                 ; 005a7ffd

