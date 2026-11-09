; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_enemy_cpp_FUN_0048a200(undefined4 param_1,CDemonActor *param_2)
;
;
; XREF[3]:
;   core_carved.cpp_FUN_00428fc0 at 00428fe7
;   core_zombie.cpp_CZombie_isGrabbable_FUN_0058caf0 at 0058cb17
;   unkafter_demnfolk.cpp_FUN_00458ec0 at 00458ee7
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005bdd18
;
; Called Functions:
;   core_actor.cpp_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5bdd18                       ; 0048a200 | = "CBugs"
        ;   Label: unkafter_enemy.cpp_FUN_0048a200
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048a205
    PUSH EDX                            ; 0048a209
    CALL core_actor.cpp_FUN_0040c790    ; 0048a20a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0048a20f
    TEST EAX,EAX                        ; 0048a212
    SETNZ AL                            ; 0048a214
    AND EAX,0xff                        ; 0048a217
    RET                                 ; 0048a21c

