; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00562e30(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_FUN_005238f0
;   core_skeleton.cpp_CSkeleton_free_FUN_00562f70
;   crt_unknown.c_FUN_005c3187
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00562e30
        ;   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30
    CALL crt_unknown.c_FUN_005c3187     ; 00562e35
        ;   XREF to: 005c3187 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3187()
    PUSH 0x1                            ; 00562e3a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00562e3c
    PUSH EDX                            ; 00562e40
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00562f70 ; 00562e41
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00562f70(CSkeleton * this_ptr, int free_motion_list)
    ADD ESP,0x8                         ; 00562e46
    PUSH 0x1                            ; 00562e49
    MOV ECX,dword ptr [ESP + 0x8]       ; 00562e4b
    PUSH ECX                            ; 00562e4f
    CALL core_morph.cpp_FUN_005238f0    ; 00562e50
        ;   XREF to: 005238f0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_005238f0()
    ADD ESP,0x8                         ; 00562e55
    RET                                 ; 00562e58

