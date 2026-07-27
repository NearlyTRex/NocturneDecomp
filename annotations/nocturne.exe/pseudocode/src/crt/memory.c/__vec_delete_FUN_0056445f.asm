; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl crt_memory_c___vec_delete_FUN_0056445f(int param_1,undefined4 param_2)
;
;
; XREF[137]:
;   FUN_0056b538 at 0056b57d
;   FUN_0056b5ad at 0056b603
;   FUN_0056b633 at 0056b660
;   FUN_0056b6e8 at 0056b72d
;   FUN_0056b810 at 0056b866
;   FUN_005701cf at 00570225
;   FUN_00570449 at 005704a4
;   cockpit_pkbitmap.cpp_FUN_004f5320 at 004f532e
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 at 00409ed7
;   core_ammo.cpp_FUN_0040ef90 at 0040efbc
;   ... and 127 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056445f
        ;   Label: crt_memory.c___vec_delete_FUN_0056445f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00564460
    TEST EAX,EAX                        ; 00564464
    JNZ 0x0056446e                      ; 00564466
        ;   XREF to: 0056446e (CONDITIONAL_JUMP)  ; LAB_0056446e
    XOR EBX,EBX                         ; 00564468
    MOV EAX,EBX                         ; 0056446a
    POP EBX                             ; 0056446c
    RET                                 ; 0056446d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056446e
        ;   Label: LAB_0056446e
    LEA EBX,[EAX + -0x4]                ; 00564472
    PUSH EDX                            ; 00564475
    MOV ECX,dword ptr [EBX]             ; 00564476
    PUSH ECX                            ; 00564478
    PUSH EAX                            ; 00564479
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0056447a
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0056447f
    MOV EAX,EBX                         ; 00564482
    POP EBX                             ; 00564484
    RET                                 ; 00564485

