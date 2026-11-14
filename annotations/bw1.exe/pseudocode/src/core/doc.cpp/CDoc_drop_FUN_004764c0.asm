; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_drop_FUN_004764c0(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; Called Functions:
;   core_charactr.cpp_CCharacter_drop_FUN_00431490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004764c0
        ;   Label: core_doc.cpp_CDoc_drop_FUN_004764c0
    PUSH ESI                            ; 004764c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004764c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004764c6
    CMP EDX,dword ptr [EBX + 0x20004]   ; 004764ca
    JZ 0x004764e8                       ; 004764d0
        ;   XREF to: 004764e8 (CONDITIONAL_JUMP)  ; LAB_004764e8
    MOV ECX,dword ptr [ESP + 0x14]      ; 004764d2
        ;   Label: LAB_004764d2
    PUSH ECX                            ; 004764d6
    MOV ESI,dword ptr [ESP + 0x14]      ; 004764d7
    PUSH ESI                            ; 004764db
    PUSH EBX                            ; 004764dc
    CALL core_charactr.cpp_CCharacter_drop_FUN_00431490 ; 004764dd
        ;   XREF to: 00431490 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_drop_FUN_00431490(CCharacter * this_ptr, CDemonActor * carrier, CVector3f * drop_position)
    ADD ESP,0xc                         ; 004764e2
    POP ESI                             ; 004764e5
    POP EBX                             ; 004764e6
    RET                                 ; 004764e7
    PUSH 0x0                            ; 004764e8
        ;   Label: LAB_004764e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004764ea
    PUSH EBX                            ; 004764f0
    MOV dword ptr [EBX + 0x20004],0x0   ; 004764f1
    CALL dword ptr [EAX + 0x144]        ; 004764fb
    ADD ESP,0x8                         ; 00476501
    JMP 0x004764d2                      ; 00476504
        ;   XREF to: 004764d2 (UNCONDITIONAL_JUMP)  ; LAB_004764d2

