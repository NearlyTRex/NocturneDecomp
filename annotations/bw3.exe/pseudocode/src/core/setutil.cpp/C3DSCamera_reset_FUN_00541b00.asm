; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_00541b00(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSCamera_load_FUN_00541b70 at 00541b89
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541b00
        ;   Label: core_setutil.cpp_C3DSCamera_reset_FUN_00541b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541b01
    PUSH EBX                            ; 00541b05
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00541ac0 ; 00541b06
        ;   XREF to: 00541ac0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_00541ac0(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 00541b0b
    PUSH 0x1a4                          ; 00541b0e
    PUSH 0x0                            ; 00541b13
    PUSH EBX                            ; 00541b15
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00541b16
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x144],0x41e00000 ; 00541b1b
    MOV dword ptr [EBX + 0x180],0xc3960000 ; 00541b25
    MOV dword ptr [EBX + 0x184],0x0     ; 00541b2f
    MOV dword ptr [EBX + 0x190],0x43960000 ; 00541b39
    MOV dword ptr [EBX + 0x140],0x0     ; 00541b43
    ADD ESP,0xc                         ; 00541b4d
    FLD float ptr [EBX + 0x190]         ; 00541b50
    MOV EAX,dword ptr [EBX + 0x180]     ; 00541b56
    MOV dword ptr [EBX + 0x17c],EAX     ; 00541b5c
    FST float ptr [EBX + 0x18c]         ; 00541b62
    FSTP float ptr [EBX + 0x188]        ; 00541b68
    POP EBX                             ; 00541b6e
    RET                                 ; 00541b6f

