; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004ca9a0(CGround *this_ptr,uint flags)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004caa60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca9a0
        ;   Label: core_ground.cpp_CGround_dtor_FUN_004ca9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca9a1
    PUSH EBX                            ; 004ca9a5
    CALL core_ground.cpp_CGround_free_FUN_004caa60 ; 004ca9a6
        ;   XREF to: 004caa60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004caa60(CGround * this_ptr)
    ADD ESP,0x4                         ; 004ca9ab
    MOV EAX,EBX                         ; 004ca9ae
    POP EBX                             ; 004ca9b0
    RET                                 ; 004ca9b1

