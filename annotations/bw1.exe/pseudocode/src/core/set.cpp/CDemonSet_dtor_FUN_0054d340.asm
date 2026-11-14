; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_0054d340(CDemonSet *this_ptr,uint flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_set.cpp_CDemonSet_clear_FUN_0054d370
;   core_set.cpp_FUN_005561a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d340
        ;   Label: core_set.cpp_CDemonSet_dtor_FUN_0054d340
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054d341
    PUSH EBX                            ; 0054d345
    CALL core_set.cpp_CDemonSet_clear_FUN_0054d370 ; 0054d346
        ;   XREF to: 0054d370 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_0054d370(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054d34b
    PUSH 0x0                            ; 0054d34e
    ADD EBX,0x4                         ; 0054d350
    PUSH EBX                            ; 0054d353
    CALL core_set.cpp_FUN_005561a0      ; 0054d354
        ;   XREF to: 005561a0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005561a0()
    ADD ESP,0x8                         ; 0054d359
    SUB EAX,0x4                         ; 0054d35c
    POP EBX                             ; 0054d35f
    RET                                 ; 0054d360

