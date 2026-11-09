; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047c740(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_staticInit_FUN_0047b4c0 at 0047b4c5
;
; Referenced Globals:
;   undefined4 DAT_01c5b104
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   shape_edittool.cpp_CEditorTools_init_FUN_0047c7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c740
        ;   Label: shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047c741
    PUSH 0x9d8                          ; 0047c745
    XOR EDX,EDX                         ; 0047c74a
    PUSH EDX                            ; 0047c74c
    PUSH 0x1c5b108                      ; 0047c74d
    MOV dword ptr [0x01c5b104],EDX      ; 0047c752 | DAT_01c5b104
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0047c758
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0047c75d
    PUSH EBX                            ; 0047c760
    CALL shape_edittool.cpp_CEditorTools_init_FUN_0047c7d0 ; 0047c761
        ;   XREF to: 0047c7d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_init_FUN_0047c7d0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047c766
    MOV EAX,EBX                         ; 0047c769
    POP EBX                             ; 0047c76b
    RET                                 ; 0047c76c

