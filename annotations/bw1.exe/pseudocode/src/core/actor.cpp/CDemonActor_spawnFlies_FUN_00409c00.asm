; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409c00(CDemonActor *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFlies_FUN_00433e50 at 00433e68
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_flies.cpp_findFliesByFollowActor_FUN_004c0970
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409c00
        ;   Label: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409c00
    PUSH EDX                            ; 00409c04
    CALL core_flies.cpp_findFliesByFollowActor_FUN_004c0970 ; 00409c05
        ;   XREF to: 004c0970 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_findFliesByFollowActor_FUN_004c0970(CDemonActor * actor)
    ADD ESP,0x4                         ; 00409c0a
    TEST EAX,EAX                        ; 00409c0d
    JZ 0x00409c12                       ; 00409c0f
        ;   XREF to: 00409c12 (CONDITIONAL_JUMP)  ; LAB_00409c12
    RET                                 ; 00409c11
    PUSH ESI                            ; 00409c12
        ;   Label: LAB_00409c12
    PUSH EBX                            ; 00409c13
    PUSH EAX                            ; 00409c14
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409c15
    PUSH dword ptr [ESP + 0x18]         ; 00409c19
    PUSH ECX                            ; 00409c1d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409c1e
    PUSH EBX                            ; 00409c22
    MOV ESI,dword ptr [0x0061dca4]      ; 00409c23 | g_CGorePtr
    PUSH ESI                            ; 00409c29
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 00409c2a
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00409c2f
    POP EBX                             ; 00409c32
    POP ESI                             ; 00409c33
    RET                                 ; 00409c34

