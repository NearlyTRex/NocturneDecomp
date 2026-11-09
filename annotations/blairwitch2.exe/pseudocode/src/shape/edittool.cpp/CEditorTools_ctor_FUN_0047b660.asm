; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047b660(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_staticInit_FUN_0047a430 at 0047a435
;
; Referenced Globals:
;   undefined4 DAT_01c2559c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   shape_edittool.cpp_CEditorTools_init_FUN_0047b6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b660
        ;   Label: shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047b661
    PUSH 0x9d8                          ; 0047b665
    XOR EDX,EDX                         ; 0047b66a
    PUSH EDX                            ; 0047b66c
    PUSH 0x1c255a0                      ; 0047b66d
    MOV dword ptr [0x01c2559c],EDX      ; 0047b672 | DAT_01c2559c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0047b678
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047b67d
    PUSH EBX                            ; 0047b680
    CALL shape_edittool.cpp_CEditorTools_init_FUN_0047b6f0 ; 0047b681
        ;   XREF to: 0047b6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_init_FUN_0047b6f0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047b686
    MOV EAX,EBX                         ; 0047b689
    POP EBX                             ; 0047b68b
    RET                                 ; 0047b68c

