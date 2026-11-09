; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimpleParticleSystem * unkclass_simppart_cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0(CSimpleParticleSystem *this_ptr)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a7ef0
        ;   Label: unkclass_simppart.cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0
    MOV dword ptr [EAX + 0x18],0x40     ; 005a7ef4
    MOV dword ptr [EAX + 0x1c],0x0      ; 005a7efb
    MOV dword ptr [EAX + 0x14],0x0      ; 005a7f02
    MOV dword ptr [EAX + 0x3c],0x0      ; 005a7f09
    MOV dword ptr [EAX + 0xc],0x3f800000 ; 005a7f10
    MOV dword ptr [EAX + 0x24],0x3f800000 ; 005a7f17
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005a7f1e
    MOV dword ptr [EAX + 0x2c],0x3f800000 ; 005a7f25
    MOV dword ptr [EAX + 0x30],0x0      ; 005a7f2c
    MOV dword ptr [EAX + 0x34],0x0      ; 005a7f33
    MOV dword ptr [EAX + 0x10],0x0      ; 005a7f3a
    MOV dword ptr [EAX + 0x38],0x0      ; 005a7f41
    MOV dword ptr [EAX + 0x40],0x6002e4 ; 005a7f48
    RET                                 ; 005a7f4f

