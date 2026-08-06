; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005173a0(CSkeleton *this_ptr,uint flags)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_FUN_005174e0
;   crt_unknown.c_FUN_005670b1
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 005173a0
        ;   Label: core_skeleton.cpp_CSkeleton_dtor_FUN_005173a0
    CALL crt_unknown.c_FUN_005670b1     ; 005173a5
        ;   XREF to: 005670b1 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005670b1()
    PUSH EBX                            ; 005173aa
    MOV EBX,dword ptr [ESP + 0x8]       ; 005173ab
    PUSH EBX                            ; 005173af
    CALL core_skeleton.cpp_CSkeleton_FUN_005174e0 ; 005173b0
        ;   XREF to: 005174e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_FUN_005174e0(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 005173b5
    MOV EAX,EBX                         ; 005173b8
    POP EBX                             ; 005173ba
    RET                                 ; 005173bb

