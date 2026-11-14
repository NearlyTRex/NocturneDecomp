; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_0056bc80(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bc80
        ;   Label: core_stranger.cpp_CStranger_renderTransparent_FUN_0056bc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056bc81
    PUSH EBX                            ; 0056bc85
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 0056bc86
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056bc8b
    ADD ESP,0x4                         ; 0056bc91
    TEST EDX,EDX                        ; 0056bc94
    JNZ 0x0056bc9f                      ; 0056bc96
        ;   XREF to: 0056bc9f (CONDITIONAL_JUMP)  ; LAB_0056bc9f
    MOV EAX,0x1                         ; 0056bc98
    POP EBX                             ; 0056bc9d
    RET                                 ; 0056bc9e
    MOV EAX,EDX                         ; 0056bc9f
        ;   Label: LAB_0056bc9f
    PUSH EAX                            ; 0056bca1
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0056bca2
    CALL dword ptr [EDX + 0x1c]         ; 0056bca8
    ADD ESP,0x4                         ; 0056bcab
    MOV EAX,0x1                         ; 0056bcae
    POP EBX                             ; 0056bcb3
    RET                                 ; 0056bcb4

