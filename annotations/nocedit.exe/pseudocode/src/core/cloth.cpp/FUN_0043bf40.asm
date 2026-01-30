; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_cloth_cpp_FUN_0043bf40(void)
;
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 at 00427e44
;   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 at 005c6aa4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bf40
        ;   Label: core_cloth.cpp_FUN_0043bf40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043bf41
    PUSH 0x190                          ; 0043bf45
    PUSH 0x0                            ; 0043bf4a
    LEA EAX,[EBX + 0x4]                 ; 0043bf4c
    PUSH EAX                            ; 0043bf4f
    MOV dword ptr [EBX],0x0             ; 0043bf50
    CALL crt_memory.c_memset_FUN_005fde40 ; 0043bf56
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043bf5b
    PUSH 0x28                           ; 0043bf5e
    PUSH 0x0                            ; 0043bf60
    LEA EAX,[EBX + 0x194]               ; 0043bf62
    PUSH EAX                            ; 0043bf68
    CALL crt_memory.c_memset_FUN_005fde40 ; 0043bf69
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043bf6e
    MOV EAX,EBX                         ; 0043bf71
    POP EBX                             ; 0043bf73
    RET                                 ; 0043bf74

