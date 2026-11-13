; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_morph.cpp_FUN_005238c0
;   crt_unknown.c_FUN_005c3187
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 00562dd0
        ;   Label: core_skeleton.cpp_CSkeleton_ctor_FUN_00562dd0
    CALL crt_unknown.c_FUN_005c3187     ; 00562dd5
        ;   XREF to: 005c3187 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3187()
    MOV EDX,dword ptr [ESP + 0x4]       ; 00562dda
    PUSH EDX                            ; 00562dde
    CALL core_morph.cpp_FUN_005238c0    ; 00562ddf
        ;   XREF to: 005238c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_005238c0()
    MOV dword ptr [EAX + 0x1de78],0x0   ; 00562de4
    MOV dword ptr [EAX + 0x1ec8c],0x0   ; 00562dee
    MOV dword ptr [EAX + 0x1ec90],0x0   ; 00562df8
    MOV dword ptr [EAX + 0x1ec94],0x0   ; 00562e02
    MOV dword ptr [EAX + 0x1ec98],0x0   ; 00562e0c
    ADD ESP,0x4                         ; 00562e16
    MOV byte ptr [EAX + 0x1de28],0x0    ; 00562e19
    RET                                 ; 00562e20

