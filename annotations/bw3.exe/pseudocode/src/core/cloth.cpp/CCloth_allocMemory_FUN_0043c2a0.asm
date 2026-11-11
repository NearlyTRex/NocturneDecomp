; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043c2a0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043c330 at 0043c58a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005b8f78
;   TerminatedCString s_CCloth_allocMemory_Out_o_005b8f8a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_cloth.cpp_FUN_0043c300
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c2a0
        ;   Label: core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c2a1
    PUSH EBX                            ; 0043c2a5
    CALL core_cloth.cpp_FUN_0043c300    ; 0043c2a6
        ;   XREF to: 0043c300 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c300()
    MOV EAX,dword ptr [EBX + 0x104]     ; 0043c2ab
    ADD ESP,0x4                         ; 0043c2b1
    SHL EAX,0x2                         ; 0043c2b4
    PUSH EAX                            ; 0043c2b7
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 0043c2b8
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 0043c2bd
    MOV dword ptr [EBX + 0x3aafc],EAX   ; 0043c2c0
    TEST EAX,EAX                        ; 0043c2c6
    JZ 0x0043c2cc                       ; 0043c2c8
        ;   XREF to: 0043c2cc (CONDITIONAL_JUMP)  ; LAB_0043c2cc
    POP EBX                             ; 0043c2ca
    RET                                 ; 0043c2cb
    MOV ECX,0x5b8f78                    ; 0043c2cc | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043c2cc
    MOV EBX,0x77                        ; 0043c2d1
    PUSH 0x5b8f8a                       ; 0043c2d6 | = "CCloth::allocMemory - Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 0043c2db | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0043c2e1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043c2e7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043c2ec
    POP EBX                             ; 0043c2ef
    RET                                 ; 0043c2f0

