; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_setPositionAndOrientation_FUN_00455580(CDoc *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455580
        ;   Label: core_doc.cpp_CDoc_setPositionAndOrientation_FUN_00455580
    PUSH ESI                            ; 00455581
    PUSH EDI                            ; 00455582
    SUB ESP,0xc                         ; 00455583
    MOV EDI,ESP                         ; 00455586
    MOV ESI,dword ptr [ESP + 0x24]      ; 00455588
    MOV EAX,ESP                         ; 0045558c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045558e
    PUSH EAX                            ; 00455592
    MOVSD ES:EDI,ESI                    ; 00455593
    MOVSD ES:EDI,ESI                    ; 00455594
    MOVSD ES:EDI,ESI                    ; 00455595
    PUSH EBX                            ; 00455596
    MOV ESI,dword ptr [ESP + 0x24]      ; 00455597
    XOR EDX,EDX                         ; 0045559b
    PUSH ESI                            ; 0045559d
    MOV dword ptr [ESP + 0xc],EDX       ; 0045559e
    MOV dword ptr [ESP + 0x14],EDX      ; 004555a2
    CALL core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0 ; 004555a6
        ;   XREF to: 00422ec0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0(CCharacter * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    ADD ESP,0xc                         ; 004555ab
    ADD ESP,0xc                         ; 004555ae
    POP EDI                             ; 004555b1
    POP ESI                             ; 004555b2
    POP EBX                             ; 004555b3
    RET                                 ; 004555b4

