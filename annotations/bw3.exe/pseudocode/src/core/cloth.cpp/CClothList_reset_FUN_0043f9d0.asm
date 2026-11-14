; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_reset_FUN_0043f9d0(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900 at 0043f906
;   core_prye.cpp_CPrye_renderOpaque_FUN_005220d0 at 005226c1
;
; Called Functions:
;   core_cloth.cpp_FUN_0043c280
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f9d0
        ;   Label: core_cloth.cpp_CClothList_reset_FUN_0043f9d0
    PUSH ESI                            ; 0043f9d1
    PUSH EDI                            ; 0043f9d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043f9d3
    MOV EDX,dword ptr [EDI]             ; 0043f9d7
    XOR EBX,EBX                         ; 0043f9d9
    TEST EDX,EDX                        ; 0043f9db
    JLE 0x0043fa09                      ; 0043f9dd
        ;   XREF to: 0043fa09 (CONDITIONAL_JUMP)  ; LAB_0043fa09
    MOV ESI,EDI                         ; 0043f9df
    MOV EAX,dword ptr [ESI + 0x194]     ; 0043f9e1
        ;   Label: LAB_0043f9e1
    TEST EAX,EAX                        ; 0043f9e7
    JZ 0x0043f9ff                       ; 0043f9e9
        ;   XREF to: 0043f9ff (CONDITIONAL_JUMP)  ; LAB_0043f9ff
    PUSH 0x0                            ; 0043f9eb
    PUSH EAX                            ; 0043f9ed
    CALL core_cloth.cpp_FUN_0043c280    ; 0043f9ee
        ;   XREF to: 0043c280 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c280()
    ADD ESP,0x8                         ; 0043f9f3
    PUSH EAX                            ; 0043f9f6
    CALL crt_unknown.c_FUN_005a30c4     ; 0043f9f7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0043f9fc
    INC EBX                             ; 0043f9ff
        ;   Label: LAB_0043f9ff
    MOV ECX,dword ptr [EDI]             ; 0043fa00
    ADD ESI,0x4                         ; 0043fa02
    CMP EBX,ECX                         ; 0043fa05
    JL 0x0043f9e1                       ; 0043fa07
        ;   XREF to: 0043f9e1 (CONDITIONAL_JUMP)  ; LAB_0043f9e1
    PUSH 0x190                          ; 0043fa09
        ;   Label: LAB_0043fa09
    PUSH 0x0                            ; 0043fa0e
    LEA EAX,[EDI + 0x4]                 ; 0043fa10
    PUSH EAX                            ; 0043fa13
    MOV dword ptr [EDI],0x0             ; 0043fa14
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0043fa1a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043fa1f
    PUSH 0x28                           ; 0043fa22
    PUSH 0x0                            ; 0043fa24
    ADD EDI,0x194                       ; 0043fa26
    PUSH EDI                            ; 0043fa2c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0043fa2d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0043fa32
    POP EDI                             ; 0043fa35
    POP ESI                             ; 0043fa36
    POP EBX                             ; 0043fa37
    RET                                 ; 0043fa38

