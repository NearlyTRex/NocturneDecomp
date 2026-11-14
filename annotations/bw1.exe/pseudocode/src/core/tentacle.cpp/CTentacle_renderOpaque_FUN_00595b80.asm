; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00595b80(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595b80
        ;   Label: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00595b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00595b81
    PUSH EBX                            ; 00595b85
    MOV EAX,dword ptr [EBX + 0x154]     ; 00595b86
    CALL dword ptr [EAX + 0x70]         ; 00595b8c
    ADD ESP,0x4                         ; 00595b8f
    TEST EAX,EAX                        ; 00595b92
    JZ 0x00595ba8                       ; 00595b94
        ;   XREF to: 00595ba8 (CONDITIONAL_JUMP)  ; LAB_00595ba8
    MOV EAX,[0x0061f650]                ; 00595b96 | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 00595b9b | DAT_01d2d908
    JNZ 0x00595ba8                      ; 00595ba2
        ;   XREF to: 00595ba8 (CONDITIONAL_JUMP)  ; LAB_00595ba8
    XOR EAX,EAX                         ; 00595ba4
    POP EBX                             ; 00595ba6
    RET                                 ; 00595ba7
    PUSH EBX                            ; 00595ba8
        ;   Label: LAB_00595ba8
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 00595ba9
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00595bae
    POP EBX                             ; 00595bb1
    RET                                 ; 00595bb2

