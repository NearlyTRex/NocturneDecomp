; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_FUN_00409c40(CDemonActor *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; XREF[1]:
;   core_charactr.cpp_FUN_00433320 at 00433338
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_flies.cpp_FUN_004ae6c0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409c40
        ;   Label: core_actor.cpp_FUN_00409c40
    PUSH EDX                            ; 00409c44
    CALL core_flies.cpp_FUN_004ae6c0    ; 00409c45
        ;   XREF to: 004ae6c0 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_FUN_004ae6c0(CDemonActor * actor)
    ADD ESP,0x4                         ; 00409c4a
    TEST EAX,EAX                        ; 00409c4d
    JZ 0x00409c52                       ; 00409c4f
        ;   XREF to: 00409c52 (CONDITIONAL_JUMP)  ; LAB_00409c52
    RET                                 ; 00409c51
    PUSH ESI                            ; 00409c52
        ;   Label: LAB_00409c52
    PUSH EBX                            ; 00409c53
    PUSH EAX                            ; 00409c54
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409c55
    PUSH dword ptr [ESP + 0x18]         ; 00409c59
    PUSH ECX                            ; 00409c5d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409c5e
    PUSH EBX                            ; 00409c62
    MOV ESI,dword ptr [0x005fed24]      ; 00409c63 | g_CGorePtr
    PUSH ESI                            ; 00409c69
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30 ; 00409c6a
        ;   XREF to: 004cee30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00409c6f
    POP EBX                             ; 00409c72
    POP ESI                             ; 00409c73
    RET                                 ; 00409c74

