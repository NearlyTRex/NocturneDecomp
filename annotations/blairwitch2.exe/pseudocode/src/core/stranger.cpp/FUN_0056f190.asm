; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056f190(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00427a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f190
        ;   Label: core_stranger.cpp_FUN_0056f190
    PUSH ESI                            ; 0056f191
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f192
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056f196
    CMP EDX,dword ptr [EBX + 0x25698]   ; 0056f19a
    JZ 0x0056f1b8                       ; 0056f1a0
        ;   XREF to: 0056f1b8 (CONDITIONAL_JUMP)  ; LAB_0056f1b8
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056f1a2
        ;   Label: LAB_0056f1a2
    PUSH ECX                            ; 0056f1a6
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056f1a7
    PUSH ESI                            ; 0056f1ab
    PUSH EBX                            ; 0056f1ac
    CALL core_charactr.cpp_FUN_00427a60 ; 0056f1ad
        ;   XREF to: 00427a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427a60(CCharacter * this_ptr, CDemonActor * carrier, CVector3f * drop_position)
    ADD ESP,0xc                         ; 0056f1b2
    POP ESI                             ; 0056f1b5
    POP EBX                             ; 0056f1b6
    RET                                 ; 0056f1b7
    PUSH 0x0                            ; 0056f1b8
        ;   Label: LAB_0056f1b8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056f1ba
    PUSH EBX                            ; 0056f1c0
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056f1c1
    CALL dword ptr [EAX + 0x150]        ; 0056f1cb
    ADD ESP,0x8                         ; 0056f1d1
    JMP 0x0056f1a2                      ; 0056f1d4
        ;   XREF to: 0056f1a2 (UNCONDITIONAL_JUMP)  ; LAB_0056f1a2

