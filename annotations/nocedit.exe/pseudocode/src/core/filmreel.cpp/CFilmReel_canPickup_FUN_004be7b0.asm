; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004be7b0(CFilmReel *this_ptr,CDemonActor *picker)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00629ae5
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x629ae5                       ; 004be7b0 | = "CHero"
        ;   Label: core_filmreel.cpp_CFilmReel_canPickup_FUN_004be7b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004be7b5
    PUSH EDX                            ; 004be7b9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004be7ba
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004be7bf
    TEST EAX,EAX                        ; 004be7c2
    JZ 0x004be7cb                       ; 004be7c4
        ;   XREF to: 004be7cb (CONDITIONAL_JUMP)  ; LAB_004be7cb
    MOV EAX,0x2                         ; 004be7c6
    RET                                 ; 004be7cb
        ;   Label: LAB_004be7cb

