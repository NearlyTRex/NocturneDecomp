; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(CDemonActor *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120 at 0042a138
;
; Referenced Globals:
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;
; Called Functions:
;   core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040b090
        ;   Label: core_actor.cpp_CDemonActor_spawnFlies_FUN_0040b090
    PUSH EDX                            ; 0040b094
    CALL core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0 ; 0040b095
        ;   XREF to: 0048fbe0 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0(CDemonActor * actor)
    ADD ESP,0x4                         ; 0040b09a
    TEST EAX,EAX                        ; 0040b09d
    JZ 0x0040b0a2                       ; 0040b09f
        ;   XREF to: 0040b0a2 (CONDITIONAL_JUMP)  ; LAB_0040b0a2
    RET                                 ; 0040b0a1
    PUSH ESI                            ; 0040b0a2
        ;   Label: LAB_0040b0a2
    PUSH EBX                            ; 0040b0a3
    PUSH EAX                            ; 0040b0a4
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040b0a5
    PUSH dword ptr [ESP + 0x18]         ; 0040b0a9
    PUSH ECX                            ; 0040b0ad
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b0ae
    PUSH EBX                            ; 0040b0b2
    MOV ESI,dword ptr [0x005b96c4]      ; 0040b0b3 | g_CGore_PTR_005b96c4
    PUSH ESI                            ; 0040b0b9
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 0040b0ba
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0040b0bf
    POP EBX                             ; 0040b0c2
    POP ESI                             ; 0040b0c3
    RET                                 ; 0040b0c4

