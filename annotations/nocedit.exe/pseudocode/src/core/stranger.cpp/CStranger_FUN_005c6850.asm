; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005c6850(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_drop_FUN_0042bf90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6850
        ;   Label: core_stranger.cpp_CStranger_FUN_005c6850
    PUSH ESI                            ; 005c6851
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c6852
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c6856
    CMP EDX,dword ptr [EBX + 0x1fc2c]   ; 005c685a
    JZ 0x005c6878                       ; 005c6860
        ;   XREF to: 005c6878 (CONDITIONAL_JUMP)  ; LAB_005c6878
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c6862
        ;   Label: LAB_005c6862
    PUSH ECX                            ; 005c6866
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c6867
    PUSH ESI                            ; 005c686b
    PUSH EBX                            ; 005c686c
    CALL core_charactr.cpp_CCharacter_drop_FUN_0042bf90 ; 005c686d
        ;   XREF to: 0042bf90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_drop_FUN_0042bf90(CCharacter * this_ptr, CDemonActor * carrier, CVector3f * drop_position)
    ADD ESP,0xc                         ; 005c6872
    POP ESI                             ; 005c6875
    POP EBX                             ; 005c6876
    RET                                 ; 005c6877
    PUSH 0x0                            ; 005c6878
        ;   Label: LAB_005c6878
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c687a
    PUSH EBX                            ; 005c6880
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c6881
    CALL dword ptr [EAX + 0x158]        ; 005c688b
    ADD ESP,0x8                         ; 005c6891
    JMP 0x005c6862                      ; 005c6894
        ;   XREF to: 005c6862 (UNCONDITIONAL_JUMP)  ; LAB_005c6862

