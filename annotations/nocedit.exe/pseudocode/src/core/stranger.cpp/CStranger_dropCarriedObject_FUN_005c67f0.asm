; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_005c67f0(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c67f0
        ;   Label: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005c67f0
    PUSH ESI                            ; 005c67f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c67f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c67f6
    MOV EAX,EDX                         ; 005c67fa
    SHL EAX,0x4                         ; 005c67fc
    ADD EAX,EDX                         ; 005c67ff
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b4] ; 005c6801
    CMP EAX,dword ptr [EBX + 0x1fc2c]   ; 005c6808
    JZ 0x005c6826                       ; 005c680e
        ;   XREF to: 005c6826 (CONDITIONAL_JUMP)  ; LAB_005c6826
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c6810
        ;   Label: LAB_005c6810
    PUSH ECX                            ; 005c6814
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c6815
    PUSH ESI                            ; 005c6819
    PUSH EBX                            ; 005c681a
    CALL core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0 ; 005c681b
        ;   XREF to: 0042cfe0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 005c6820
    POP ESI                             ; 005c6823
    POP EBX                             ; 005c6824
    RET                                 ; 005c6825
    PUSH 0x0                            ; 005c6826
        ;   Label: LAB_005c6826
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c6828
    PUSH EBX                            ; 005c682e
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c682f
    CALL dword ptr [EAX + 0x158]        ; 005c6839
    ADD ESP,0x8                         ; 005c683f
    JMP 0x005c6810                      ; 005c6842
        ;   XREF to: 005c6810 (UNCONDITIONAL_JUMP)  ; LAB_005c6810

