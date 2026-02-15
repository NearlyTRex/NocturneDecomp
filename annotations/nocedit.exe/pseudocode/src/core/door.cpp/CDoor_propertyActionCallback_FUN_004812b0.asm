; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_propertyActionCallback_FUN_004812b0(CDoor *this_ptr,CActorProperty *property)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CActorProperty * Stack[0x8]:4   property
;
; XREF[1]:
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481377
;
; Referenced Globals:
;   undefined4 g_CDoorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_door.cpp_CDoor_reposition_FUN_0047fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004812b0
        ;   Label: core_door.cpp_CDoor_propertyActionCallback_FUN_004812b0
    MOV EDX,dword ptr [0x02c14d14]      ; 004812b1 | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 004812b7
    MOV ECX,dword ptr [ESP + 0xc]       ; 004812b8
    PUSH ECX                            ; 004812bc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004812bd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004812c2
    MOV EBX,dword ptr [EAX + 0x2e0]     ; 004812c5
    MOV EDX,EAX                         ; 004812cb
    CMP EBX,0x2                         ; 004812cd
    JNZ 0x004812f6                      ; 004812d0
        ;   XREF to: 004812f6 (CONDITIONAL_JUMP)  ; LAB_004812f6
    MOV dword ptr [EAX + 0x9ac],0x0     ; 004812d2
    MOV dword ptr [EAX + 0x2e0],0x0     ; 004812dc
    PUSH EDX                            ; 004812e6
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004812e7
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    MOV EAX,0x1                         ; 004812ec
    ADD ESP,0x4                         ; 004812f1
    POP EBX                             ; 004812f4
    RET                                 ; 004812f5
    MOV dword ptr [EAX + 0x2e0],0x2     ; 004812f6
        ;   Label: LAB_004812f6
    MOV ECX,dword ptr [EAX + 0x9b0]     ; 00481300
    MOV dword ptr [EAX + 0x9ac],ECX     ; 00481306
    PUSH EDX                            ; 0048130c
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 0048130d
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    MOV EAX,0x1                         ; 00481312
    ADD ESP,0x4                         ; 00481317
    POP EBX                             ; 0048131a
    RET                                 ; 0048131b

