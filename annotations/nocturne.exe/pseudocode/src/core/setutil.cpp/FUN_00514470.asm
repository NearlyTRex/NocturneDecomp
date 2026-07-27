; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setutil_cpp_FUN_00514470(int param_1)
;
;
; XREF[1]:
;   core_setutil.cpp_C3DSCamera_load_FUN_005144e0 at 005144f9
;
; Called Functions:
;   core_setutil.cpp_FUN_00514430
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514470
        ;   Label: core_setutil.cpp_FUN_00514470
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514471
    PUSH EBX                            ; 00514475
    CALL core_setutil.cpp_FUN_00514430  ; 00514476
        ;   XREF to: 00514430 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_00514430()
    ADD ESP,0x4                         ; 0051447b
    PUSH 0x1a0                          ; 0051447e
    PUSH 0x0                            ; 00514483
    PUSH EBX                            ; 00514485
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00514486
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV dword ptr [EBX + 0x140],0x41e00000 ; 0051448b
    MOV dword ptr [EBX + 0x17c],0xc3960000 ; 00514495
    MOV dword ptr [EBX + 0x180],0x0     ; 0051449f
    MOV dword ptr [EBX + 0x18c],0x43960000 ; 005144a9
    ADD ESP,0xc                         ; 005144b3
    FLD float ptr [EBX + 0x18c]         ; 005144b6
    MOV EAX,dword ptr [EBX + 0x17c]     ; 005144bc
    MOV dword ptr [EBX + 0x178],EAX     ; 005144c2
    FST float ptr [EBX + 0x188]         ; 005144c8
    FSTP float ptr [EBX + 0x184]        ; 005144ce
    POP EBX                             ; 005144d4
    RET                                 ; 005144d5

