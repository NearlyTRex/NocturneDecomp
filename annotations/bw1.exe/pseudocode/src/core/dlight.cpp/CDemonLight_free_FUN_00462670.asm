; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_free_FUN_00462670(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_00462530 at 00462544
;   core_dlight.cpp_CDemonLight_init_FUN_00462590 at 0046259a
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462670
        ;   Label: core_dlight.cpp_CDemonLight_free_FUN_00462670
    PUSH ESI                            ; 00462671
    PUSH EBP                            ; 00462672
    MOV EBX,dword ptr [ESP + 0x10]      ; 00462673
    CMP dword ptr [EBX + 0x2f94],0x0    ; 00462677
    JNZ 0x004626b4                      ; 0046267e
        ;   XREF to: 004626b4 (CONDITIONAL_JUMP)  ; LAB_004626b4
    PUSH EBX                            ; 00462680
        ;   Label: LAB_00462680
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0 ; 00462681
        ;   XREF to: 004627f0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(CDemonLight * this_ptr)
    MOV ESI,dword ptr [EBX + 0x2fa0]    ; 00462686
    ADD ESP,0x4                         ; 0046268c
    TEST ESI,ESI                        ; 0046268f
    JZ 0x004626a6                       ; 00462691
        ;   XREF to: 004626a6 (CONDITIONAL_JUMP)  ; LAB_004626a6
    PUSH ESI                            ; 00462693
    CALL crt_unknown.c_FUN_005c09f0     ; 00462694
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00462699
    MOV dword ptr [EBX + 0x2fa0],0x0    ; 0046269c
    MOV EBP,dword ptr [EBX + 0x1c6c]    ; 004626a6
        ;   Label: LAB_004626a6
    TEST EBP,EBP                        ; 004626ac
    JNZ 0x004626d9                      ; 004626ae
        ;   XREF to: 004626d9 (CONDITIONAL_JUMP)  ; LAB_004626d9
    POP EBP                             ; 004626b0
    POP ESI                             ; 004626b1
    POP EBX                             ; 004626b2
    RET                                 ; 004626b3
    MOV ECX,dword ptr [EBX + 0x2f98]    ; 004626b4
        ;   Label: LAB_004626b4
    PUSH ECX                            ; 004626ba
    CALL crt_unknown.c_FUN_005c09f0     ; 004626bb
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    MOV dword ptr [EBX + 0x2f94],0x0    ; 004626c0
    ADD ESP,0x4                         ; 004626ca
    MOV dword ptr [EBX + 0x2f98],0x0    ; 004626cd
    JMP 0x00462680                      ; 004626d7
        ;   XREF to: 00462680 (UNCONDITIONAL_JUMP)  ; LAB_00462680
    PUSH EBP                            ; 004626d9
        ;   Label: LAB_004626d9
    CALL crt_unknown.c_FUN_005c09f0     ; 004626da
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004626df
    MOV dword ptr [EBX + 0x1c6c],0x0    ; 004626e2
    POP EBP                             ; 004626ec
    POP ESI                             ; 004626ed
    POP EBX                             ; 004626ee
    RET                                 ; 004626ef

