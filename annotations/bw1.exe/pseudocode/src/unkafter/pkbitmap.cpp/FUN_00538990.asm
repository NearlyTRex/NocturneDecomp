; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_pkbitmap_cpp_FUN_00538990(undefined4 *param_1)
;
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_FUN_005389c0 at 005389d7
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538b49
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538990
        ;   Label: unkafter_pkbitmap.cpp_FUN_00538990
    MOV EBX,dword ptr [ESP + 0x8]       ; 00538991
    PUSH 0x6048f0                       ; 00538995
    MOV EDX,dword ptr [EBX + 0x4]       ; 0053899a
    PUSH EDX                            ; 0053899d
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0053899e
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005389a3
    PUSH EAX                            ; 005389a6
    CALL crt_unknown.c_FUN_005c0336     ; 005389a7
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    MOV dword ptr [EBX],0x0             ; 005389ac
    ADD ESP,0x4                         ; 005389b2
    MOV dword ptr [EBX + 0x4],0x0       ; 005389b5
    POP EBX                             ; 005389bc
    RET                                 ; 005389bd

