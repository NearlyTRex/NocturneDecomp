; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CAmmo * __cdecl core_ammo_cpp_factoryFunc_FUN_00410d80(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_00410d50 at 00410d5c
;
; Referenced Globals:
;   TerminatedCString s_core_ammo_cpp_00614923
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1e                           ; 00410d80
        ;   Label: core_ammo.cpp_factoryFunc_FUN_00410d80
    PUSH 0x614923                       ; 00410d82 | = "..\\core\\ammo.cpp"
    PUSH 0x31c                          ; 00410d87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00410d8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00410d91
    TEST EAX,EAX                        ; 00410d94
    JNZ 0x00410d99                      ; 00410d96
        ;   XREF to: 00410d99 (CONDITIONAL_JUMP)  ; LAB_00410d99
    RET                                 ; 00410d98
    PUSH EAX                            ; 00410d99
        ;   Label: LAB_00410d99
    CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 ; 00410d9a
        ;   XREF to: 00410dc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 00410d9f
    RET                                 ; 00410da2

