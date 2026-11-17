; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_staticInit_FUN_005af240(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_02c9a544
;   undefined4 g_CVector3f_02c9a544.y
;   undefined4 g_CVector3f_02c9a544.z
;   CVector3f g_CVector3f_02c9a550
;   undefined4 g_CVector3f_02c9a550.y
;   undefined4 g_CVector3f_02c9a550.z
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af240
        ;   Label: core_werewolf.cpp_staticInit_FUN_005af240
    PUSH ESI                            ; 005af241
    PUSH 0x1c3f668                      ; 005af242
    PUSH 0x6                            ; 005af247
    MOV EDX,0xbe8f5c29                  ; 005af249
    MOV ECX,0x3ed70a3d                  ; 005af24e
    PUSH 0x626098                       ; 005af253
    MOV EBX,0x3f19999a                  ; 005af258
    MOV ESI,0x3eb33333                  ; 005af25d
    PUSH 0x5af2a0                       ; 005af262
    MOV dword ptr [0x02c9a544],EDX      ; 005af267 | g_CVector3f_02c9a544
    MOV dword ptr [0x02c9a548],ECX      ; 005af26d | g_CVector3f_02c9a544.y
    PUSH 0x5f99ca                       ; 005af273
    MOV dword ptr [0x02c9a54c],EBX      ; 005af278 | g_CVector3f_02c9a544.z
    MOV dword ptr [0x02c9a550],ESI      ; 005af27e | g_CVector3f_02c9a550
    PUSH 0x2c9a55c                      ; 005af284
    MOV dword ptr [0x02c9a554],ECX      ; 005af289 | g_CVector3f_02c9a550.y
    MOV dword ptr [0x02c9a558],EBX      ; 005af28f | g_CVector3f_02c9a550.z
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005af295
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005af29a
    POP ESI                             ; 005af29d
    POP EBX                             ; 005af29e
    RET                                 ; 005af29f

