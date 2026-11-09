; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00549310(SVert *this_ptr)
;
; Parameters:
; SVert *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00549310
        ;   Label: core_skeleton.cpp_SVert_ctor_FUN_00549310
    PUSH 0x5f22b0                       ; 00549314
    PUSH 0x3                            ; 00549319
    ADD EAX,0x10                        ; 0054931b
    PUSH EAX                            ; 0054931e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0054931f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00549324
    SUB EAX,0x10                        ; 00549327
    RET                                 ; 0054932a

