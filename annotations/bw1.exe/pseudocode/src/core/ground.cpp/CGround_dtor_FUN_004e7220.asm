; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004e7220(CGround *this_ptr,uint flags)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004e72e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7220
        ;   Label: core_ground.cpp_CGround_dtor_FUN_004e7220
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7221
    PUSH EBX                            ; 004e7225
    CALL core_ground.cpp_CGround_free_FUN_004e72e0 ; 004e7226
        ;   XREF to: 004e72e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004e72e0(CGround * this_ptr)
    ADD ESP,0x4                         ; 004e722b
    MOV EAX,EBX                         ; 004e722e
    POP EBX                             ; 004e7230
    RET                                 ; 004e7231

