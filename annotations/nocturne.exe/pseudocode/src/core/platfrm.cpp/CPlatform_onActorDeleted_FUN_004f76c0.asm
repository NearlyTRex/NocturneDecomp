; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_004f76c0(CPlatform *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f76c0
        ;   Label: core_platfrm.cpp_CPlatform_onActorDeleted_FUN_004f76c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f76c4
    MOV EAX,EDX                         ; 004f76c8
    ADD EDX,0x208                       ; 004f76ca
    CMP ECX,dword ptr [EAX + 0x514]     ; 004f76d0
        ;   Label: LAB_004f76d0
    JZ 0x004f76e0                       ; 004f76d6
        ;   XREF to: 004f76e0 (CONDITIONAL_JUMP)  ; LAB_004f76e0
    ADD EAX,0x34                        ; 004f76d8
    CMP EAX,EDX                         ; 004f76db
    JNZ 0x004f76d0                      ; 004f76dd
        ;   XREF to: 004f76d0 (CONDITIONAL_JUMP)  ; LAB_004f76d0
    RET                                 ; 004f76df
    MOV dword ptr [EAX + 0x514],0x0     ; 004f76e0
        ;   Label: LAB_004f76e0
    ADD EAX,0x34                        ; 004f76ea
    CMP EAX,EDX                         ; 004f76ed
    JNZ 0x004f76d0                      ; 004f76ef
        ;   XREF to: 004f76d0 (CONDITIONAL_JUMP)  ; LAB_004f76d0
    RET                                 ; 004f76f1

