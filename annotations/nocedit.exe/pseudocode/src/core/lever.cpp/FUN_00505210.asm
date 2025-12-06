; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_00505210()
;
;
; XREF[1]:
;   core_lever.cpp_FUN_00505240 at 00505283
;
; Referenced Globals:
;   undefined4 g_CLeverClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_lever.cpp_FUN_00504c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dd3090]      ; 00505210 | g_CLeverClassInfo.name_hash
        ;   Label: core_lever.cpp_FUN_00505210
    PUSH EDX                            ; 00505216
    MOV ECX,dword ptr [ESP + 0x8]       ; 00505217
    PUSH ECX                            ; 0050521b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0050521c | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00505221
    PUSH EAX                            ; 00505224
    CALL core_lever.cpp_FUN_00504c90    ; 00505225 | undefined core_lever.cpp_FUN_00504c90()
        ;   XREF to: 00504c90 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 0050522a
    ADD ESP,0x4                         ; 0050522f
    RET                                 ; 00505232

