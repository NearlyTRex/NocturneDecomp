; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005408c0
        ;   Label: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005408c0
    PUSH ESI                            ; 005408c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005408c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005408c6
    MOV EAX,EDX                         ; 005408ca
    SHL EAX,0x4                         ; 005408cc
    ADD EAX,EDX                         ; 005408cf
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24ac] ; 005408d1
    CMP EAX,dword ptr [EBX + 0x1fa94]   ; 005408d8
    JZ 0x005408f6                       ; 005408de
        ;   XREF to: 005408f6 (CONDITIONAL_JUMP)  ; LAB_005408f6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005408e0
        ;   Label: LAB_005408e0
    PUSH ECX                            ; 005408e4
    MOV ESI,dword ptr [ESP + 0x14]      ; 005408e5
    PUSH ESI                            ; 005408e9
    PUSH EBX                            ; 005408ea
    CALL core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170 ; 005408eb
        ;   XREF to: 00429170 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 005408f0
    POP ESI                             ; 005408f3
    POP EBX                             ; 005408f4
    RET                                 ; 005408f5
    PUSH 0x0                            ; 005408f6
        ;   Label: LAB_005408f6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005408f8
    PUSH EBX                            ; 005408fe
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 005408ff
    CALL dword ptr [EAX + 0x13c]        ; 00540909
    ADD ESP,0x8                         ; 0054090f
    JMP 0x005408e0                      ; 00540912
        ;   XREF to: 005408e0 (UNCONDITIONAL_JUMP)  ; LAB_005408e0

