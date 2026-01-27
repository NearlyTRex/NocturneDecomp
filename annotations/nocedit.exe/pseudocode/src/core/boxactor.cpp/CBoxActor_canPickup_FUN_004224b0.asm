; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_boxactor.cpp_CBoxActor_canPickup_FUN_004224b0(CBoxActor * this_ptr, CDemonActor * picker)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_0061679f
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004224b0
        ;   Label: core_boxactor.cpp_CBoxActor_canPickup_FUN_004224b0
    CMP dword ptr [EAX + 0x314],0x3     ; 004224b4
    JNZ 0x004224c8                      ; 004224bb
        ;   XREF to: 004224c8 (CONDITIONAL_JUMP)  ; LAB_004224c8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004224bd
        ;   Label: LAB_004224bd
    MOV EAX,dword ptr [EAX + 0x314]     ; 004224c1
    RET                                 ; 004224c7
    PUSH 0x61679f                       ; 004224c8 | = "CHero"
        ;   Label: LAB_004224c8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004224cd
    PUSH ECX                            ; 004224d1
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004224d2
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004224d7
    TEST EAX,EAX                        ; 004224da
    JNZ 0x004224bd                      ; 004224dc
        ;   XREF to: 004224bd (CONDITIONAL_JUMP)  ; LAB_004224bd
    RET                                 ; 004224de

