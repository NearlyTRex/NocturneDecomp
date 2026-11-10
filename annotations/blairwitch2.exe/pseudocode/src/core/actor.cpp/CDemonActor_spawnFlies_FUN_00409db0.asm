; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409db0(CDemonActor *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFlies_FUN_00429e60 at 00429e78
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_flies.cpp_findFliesByFollowActor_FUN_004a79a0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409db0
        ;   Label: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409db0
    PUSH EDX                            ; 00409db4
    CALL core_flies.cpp_findFliesByFollowActor_FUN_004a79a0 ; 00409db5
        ;   XREF to: 004a79a0 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_findFliesByFollowActor_FUN_004a79a0(CDemonActor * actor)
    ADD ESP,0x4                         ; 00409dba
    TEST EAX,EAX                        ; 00409dbd
    JZ 0x00409dc2                       ; 00409dbf
        ;   XREF to: 00409dc2 (CONDITIONAL_JUMP)  ; LAB_00409dc2
    RET                                 ; 00409dc1
    PUSH ESI                            ; 00409dc2
        ;   Label: LAB_00409dc2
    PUSH EBX                            ; 00409dc3
    PUSH EAX                            ; 00409dc4
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409dc5
    PUSH dword ptr [ESP + 0x18]         ; 00409dc9
    PUSH ECX                            ; 00409dcd
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409dce
    PUSH EBX                            ; 00409dd2
    MOV ESI,dword ptr [0x006167e0]      ; 00409dd3 | g_CGorePtr
    PUSH ESI                            ; 00409dd9
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 00409dda
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00409ddf
    POP EBX                             ; 00409de2
    POP ESI                             ; 00409de3
    RET                                 ; 00409de4

