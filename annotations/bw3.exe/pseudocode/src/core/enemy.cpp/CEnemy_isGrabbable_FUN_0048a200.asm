; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_isGrabbable_FUN_0048a200(CEnemy *this_ptr,CDemonActor *grabber)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
;
; XREF[3]:
;   core_carved.cpp_CCarved_isGrabbable_FUN_00428fc0 at 00428fe7
;   core_demnfolk.cpp_CDemnfolk_isGrabbable_FUN_00458ec0 at 00458ee7
;   core_zombie.cpp_CZombie_isGrabbable_FUN_0058caf0 at 0058cb17
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005bdd18
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5bdd18                       ; 0048a200 | = "CBugs"
        ;   Label: core_enemy.cpp_CEnemy_isGrabbable_FUN_0048a200
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048a205
    PUSH EDX                            ; 0048a209
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0048a20a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0048a20f
    TEST EAX,EAX                        ; 0048a212
    SETNZ AL                            ; 0048a214
    AND EAX,0xff                        ; 0048a217
    RET                                 ; 0048a21c

