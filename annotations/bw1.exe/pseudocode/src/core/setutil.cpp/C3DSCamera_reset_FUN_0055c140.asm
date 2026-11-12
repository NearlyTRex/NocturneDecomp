; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_0055c140(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0 at 0055c1c9
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_0055c100
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c140
        ;   Label: core_setutil.cpp_C3DSCamera_reset_FUN_0055c140
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c141
    PUSH EBX                            ; 0055c145
    CALL core_setutil.cpp_C3DSCamera_free_FUN_0055c100 ; 0055c146
        ;   XREF to: 0055c100 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_0055c100(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 0055c14b
    PUSH 0x1a4                          ; 0055c14e
    PUSH 0x0                            ; 0055c153
    PUSH EBX                            ; 0055c155
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0055c156
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x144],0x41e00000 ; 0055c15b
    MOV dword ptr [EBX + 0x180],0xc3960000 ; 0055c165
    MOV dword ptr [EBX + 0x184],0x0     ; 0055c16f
    MOV dword ptr [EBX + 0x190],0x43960000 ; 0055c179
    MOV dword ptr [EBX + 0x140],0x0     ; 0055c183
    ADD ESP,0xc                         ; 0055c18d
    FLD float ptr [EBX + 0x190]         ; 0055c190
    MOV EAX,dword ptr [EBX + 0x180]     ; 0055c196
    MOV dword ptr [EBX + 0x17c],EAX     ; 0055c19c
    FST float ptr [EBX + 0x18c]         ; 0055c1a2
    FSTP float ptr [EBX + 0x188]        ; 0055c1a8
    POP EBX                             ; 0055c1ae
    RET                                 ; 0055c1af

