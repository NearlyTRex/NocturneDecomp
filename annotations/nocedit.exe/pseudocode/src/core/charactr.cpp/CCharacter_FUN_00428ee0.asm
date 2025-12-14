; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_00428ee0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428ee0
        ;   Label: core_charactr.cpp_CCharacter_FUN_00428ee0
    SUB ESP,0x3c                        ; 00428ee1
    MOV EBX,dword ptr [ESP + 0x44]      ; 00428ee4
    PUSH EBX                            ; 00428ee8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428ee9
    CALL dword ptr [EAX + 0x120]        ; 00428eef
    ADD ESP,0x4                         ; 00428ef5
    TEST EAX,EAX                        ; 00428ef8
    JLE 0x00428f01                      ; 00428efa
        ;   XREF to: 00428f01 (CONDITIONAL_JUMP)  ; LAB_00428f01
    ADD ESP,0x3c                        ; 00428efc
    POP EBX                             ; 00428eff
    RET                                 ; 00428f00
    MOV EAX,ESP                         ; 00428f01
        ;   Label: LAB_00428f01
    PUSH EAX                            ; 00428f03
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00428f04
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00428f09
    MOV EAX,dword ptr [ESP + 0x48]      ; 00428f0c
    MOV dword ptr [ESP + 0x30],EAX      ; 00428f10
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00428f14
    MOV dword ptr [ESP + 0x4],EAX       ; 00428f18
    MOV EAX,ESP                         ; 00428f1c
    PUSH EAX                            ; 00428f1e
    MOV EDX,dword ptr [EBX + 0x154]     ; 00428f1f
    PUSH EBX                            ; 00428f25
    CALL dword ptr [EDX + 0x11c]        ; 00428f26
    ADD ESP,0x8                         ; 00428f2c
    ADD ESP,0x3c                        ; 00428f2f
    POP EBX                             ; 00428f32
    RET                                 ; 00428f33

