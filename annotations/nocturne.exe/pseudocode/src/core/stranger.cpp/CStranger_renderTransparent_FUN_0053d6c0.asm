; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d6c0
        ;   Label: core_stranger.cpp_CStranger_renderTransparent_FUN_0053d6c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053d6c1
    PUSH EBX                            ; 0053d6c5
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 ; 0053d6c6
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 0053d6cb
    ADD ESP,0x4                         ; 0053d6d1
    TEST EDX,EDX                        ; 0053d6d4
    JNZ 0x0053d6df                      ; 0053d6d6
        ;   XREF to: 0053d6df (CONDITIONAL_JUMP)  ; LAB_0053d6df
    MOV EAX,0x1                         ; 0053d6d8
    POP EBX                             ; 0053d6dd
    RET                                 ; 0053d6de
    MOV EAX,EDX                         ; 0053d6df
        ;   Label: LAB_0053d6df
    PUSH EAX                            ; 0053d6e1
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0053d6e2
    CALL dword ptr [EDX + 0xc]          ; 0053d6e8
    ADD ESP,0x4                         ; 0053d6eb
    MOV EAX,0x1                         ; 0053d6ee
    POP EBX                             ; 0053d6f3
    RET                                 ; 0053d6f4

