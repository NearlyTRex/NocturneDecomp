; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00547a50(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_FUN_004fb1f0
;   core_skeleton.cpp_CSkeleton_free_FUN_00547b90
;   crt_unknown.c_FUN_005a5ff7
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00547a50
        ;   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_00547a50
    CALL crt_unknown.c_FUN_005a5ff7     ; 00547a55
        ;   XREF to: 005a5ff7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5ff7()
    PUSH 0x1                            ; 00547a5a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00547a5c
    PUSH EDX                            ; 00547a60
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00547b90 ; 00547a61
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00547b90(CSkeleton * this_ptr, int free_motion_list)
    ADD ESP,0x8                         ; 00547a66
    PUSH 0x1                            ; 00547a69
    MOV ECX,dword ptr [ESP + 0x8]       ; 00547a6b
    PUSH ECX                            ; 00547a6f
    CALL core_morph.cpp_FUN_004fb1f0    ; 00547a70
        ;   XREF to: 004fb1f0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_004fb1f0()
    ADD ESP,0x8                         ; 00547a75
    RET                                 ; 00547a78

