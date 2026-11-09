; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043e640(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0 at 0043e92a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d6708
;   TerminatedCString s_CCloth_allocMemory_Out_o_005d671a
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e6a0
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e640
        ;   Label: core_cloth.cpp_CCloth_allocMemory_FUN_0043e640
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043e641
    PUSH EBX                            ; 0043e645
    CALL core_cloth.cpp_FUN_0043e6a0    ; 0043e646
        ;   XREF to: 0043e6a0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e6a0()
    MOV EAX,dword ptr [EBX + 0x104]     ; 0043e64b
    ADD ESP,0x4                         ; 0043e651
    SHL EAX,0x2                         ; 0043e654
    PUSH EAX                            ; 0043e657
    CALL crt_unknown.c_FUN_005c1268     ; 0043e658
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 0043e65d
    MOV dword ptr [EBX + 0x3aafc],EAX   ; 0043e660
    TEST EAX,EAX                        ; 0043e666
    JZ 0x0043e66c                       ; 0043e668
        ;   XREF to: 0043e66c (CONDITIONAL_JUMP)  ; LAB_0043e66c
    POP EBX                             ; 0043e66a
    RET                                 ; 0043e66b
    MOV ECX,0x5d6708                    ; 0043e66c | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043e66c
    MOV EBX,0x77                        ; 0043e671
    PUSH 0x5d671a                       ; 0043e676 | = "CCloth::allocMemory - Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 0043e67b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0043e681 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043e687
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043e68c
    POP EBX                             ; 0043e68f
    RET                                 ; 0043e690

