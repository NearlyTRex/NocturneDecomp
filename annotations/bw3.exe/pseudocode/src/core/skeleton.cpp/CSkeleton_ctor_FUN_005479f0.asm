; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_CSkeleton_ctor_FUN_005479f0(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_morph.cpp_FUN_004fb1c0
;   crt_unknown.c_FUN_005a5ff7
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 005479f0
        ;   Label: core_skeleton.cpp_CSkeleton_ctor_FUN_005479f0
    CALL crt_unknown.c_FUN_005a5ff7     ; 005479f5
        ;   XREF to: 005a5ff7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5ff7()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005479fa
    PUSH EDX                            ; 005479fe
    CALL core_morph.cpp_FUN_004fb1c0    ; 005479ff
        ;   XREF to: 004fb1c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_004fb1c0()
    MOV dword ptr [EAX + 0x1de78],0x0   ; 00547a04
    MOV dword ptr [EAX + 0x1ec8c],0x0   ; 00547a0e
    MOV dword ptr [EAX + 0x1ec90],0x0   ; 00547a18
    MOV dword ptr [EAX + 0x1ec94],0x0   ; 00547a22
    MOV dword ptr [EAX + 0x1ec98],0x0   ; 00547a2c
    ADD ESP,0x4                         ; 00547a36
    MOV byte ptr [EAX + 0x1de28],0x0    ; 00547a39
    RET                                 ; 00547a40

