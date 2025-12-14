; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CZombieDog * core_dog.cpp_factoryFunc_FUN_0047f010(void)
;
;
; XREF[1]:
;   core_dog.cpp_staticInit_FUN_0047efe0 at 0047efec
;
; Referenced Globals:
;   TerminatedCString s_core_dog_cpp_00620f8c
;
; Called Functions:
;   core_dog.cpp_CZombieDog_ctor_FUN_0047f050
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x37                           ; 0047f010
        ;   Label: core_dog.cpp_factoryFunc_FUN_0047f010
    PUSH 0x620f8c                       ; 0047f012 | = "..\\core\\dog.cpp"
    PUSH 0xbec8                         ; 0047f017
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0047f01c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047f021
    TEST EAX,EAX                        ; 0047f024
    JNZ 0x0047f029                      ; 0047f026
        ;   XREF to: 0047f029 (CONDITIONAL_JUMP)  ; LAB_0047f029
    RET                                 ; 0047f028
    PUSH EAX                            ; 0047f029
        ;   Label: LAB_0047f029
    CALL core_dog.cpp_CZombieDog_ctor_FUN_0047f050 ; 0047f02a
        ;   XREF to: 0047f050 (UNCONDITIONAL_CALL)  ; CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog * this_ptr)
    ADD ESP,0x4                         ; 0047f02f
    RET                                 ; 0047f032

