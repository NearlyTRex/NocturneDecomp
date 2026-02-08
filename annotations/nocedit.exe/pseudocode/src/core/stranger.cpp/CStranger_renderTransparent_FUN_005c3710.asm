; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_005c3710(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042b0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3710
        ;   Label: core_stranger.cpp_CStranger_renderTransparent_FUN_005c3710
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c3711
    PUSH EBX                            ; 005c3715
    CALL core_charactr.cpp_CCharacter_FUN_0042b0e0 ; 005c3716
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042b0e0(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c371b
    ADD ESP,0x4                         ; 005c3721
    TEST EDX,EDX                        ; 005c3724
    JNZ 0x005c372f                      ; 005c3726
        ;   XREF to: 005c372f (CONDITIONAL_JUMP)  ; LAB_005c372f
    MOV EAX,0x1                         ; 005c3728
    POP EBX                             ; 005c372d
    RET                                 ; 005c372e
    MOV EAX,EDX                         ; 005c372f
        ;   Label: LAB_005c372f
    PUSH EAX                            ; 005c3731
    MOV EDX,dword ptr [EDX + 0x154]     ; 005c3732
    CALL dword ptr [EDX + 0xc]          ; 005c3738
    ADD ESP,0x4                         ; 005c373b
    MOV EAX,0x1                         ; 005c373e
    POP EBX                             ; 005c3743
    RET                                 ; 005c3744

