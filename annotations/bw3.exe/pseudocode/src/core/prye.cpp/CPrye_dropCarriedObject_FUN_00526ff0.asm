; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_dropCarriedObject_FUN_00526ff0(CPrye *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00431c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526ff0
        ;   Label: core_prye.cpp_CPrye_dropCarriedObject_FUN_00526ff0
    PUSH ESI                            ; 00526ff1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00526ff2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00526ff6
    SHL EAX,0x3                         ; 00526ffa
    MOV EDX,EAX                         ; 00526ffd
    SHL EAX,0x4                         ; 00526fff
    SUB EAX,EDX                         ; 00527002
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 00527004
    CMP EAX,dword ptr [EBX + 0x20c24]   ; 0052700b
    JZ 0x00527029                       ; 00527011
        ;   XREF to: 00527029 (CONDITIONAL_JUMP)  ; LAB_00527029
    MOV ECX,dword ptr [ESP + 0x14]      ; 00527013
        ;   Label: LAB_00527013
    PUSH ECX                            ; 00527017
    MOV ESI,dword ptr [ESP + 0x14]      ; 00527018
    PUSH ESI                            ; 0052701c
    PUSH EBX                            ; 0052701d
    CALL core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00431c40 ; 0052701e
        ;   XREF to: 00431c40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00431c40(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 00527023
    POP ESI                             ; 00527026
    POP EBX                             ; 00527027
    RET                                 ; 00527028
    PUSH 0x0                            ; 00527029
        ;   Label: LAB_00527029
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052702b
    PUSH EBX                            ; 00527031
    MOV dword ptr [EBX + 0x20c24],0x0   ; 00527032
    CALL dword ptr [EAX + 0x144]        ; 0052703c
    ADD ESP,0x8                         ; 00527042
    JMP 0x00527013                      ; 00527045
        ;   XREF to: 00527013 (UNCONDITIONAL_JUMP)  ; LAB_00527013

