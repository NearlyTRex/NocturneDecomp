; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_drop_FUN_0045de30(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; Called Functions:
;   core_charactr.cpp_CCharacter_drop_FUN_00427a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de30
        ;   Label: core_doc.cpp_CDoc_drop_FUN_0045de30
    PUSH ESI                            ; 0045de31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045de32
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045de36
    CMP EDX,dword ptr [EBX + 0x25698]   ; 0045de3a
    JZ 0x0045de58                       ; 0045de40
        ;   XREF to: 0045de58 (CONDITIONAL_JUMP)  ; LAB_0045de58
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045de42
        ;   Label: LAB_0045de42
    PUSH ECX                            ; 0045de46
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045de47
    PUSH ESI                            ; 0045de4b
    PUSH EBX                            ; 0045de4c
    CALL core_charactr.cpp_CCharacter_drop_FUN_00427a60 ; 0045de4d
        ;   XREF to: 00427a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_drop_FUN_00427a60(CCharacter * this_ptr, CDemonActor * carrier, CVector3f * drop_position)
    ADD ESP,0xc                         ; 0045de52
    POP ESI                             ; 0045de55
    POP EBX                             ; 0045de56
    RET                                 ; 0045de57
    PUSH 0x0                            ; 0045de58
        ;   Label: LAB_0045de58
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045de5a
    PUSH EBX                            ; 0045de60
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045de61
    CALL dword ptr [EAX + 0x150]        ; 0045de6b
    ADD ESP,0x8                         ; 0045de71
    JMP 0x0045de42                      ; 0045de74
        ;   XREF to: 0045de42 (UNCONDITIONAL_JUMP)  ; LAB_0045de42

