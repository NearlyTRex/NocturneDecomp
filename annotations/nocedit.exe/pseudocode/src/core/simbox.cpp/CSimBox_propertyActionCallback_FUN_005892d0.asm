; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_simbox_cpp_CSimBox_propertyActionCallback_FUN_005892d0(CSimBox *this_ptr,CActorProperty *property)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; CActorProperty * Stack[0x8]:4   property
;
; XREF[1]:
;   core_simbox.cpp_CSimBox_getPropertyList_FUN_00589310 at 00589352
;
; Referenced Globals:
;   undefined4 g_CSimBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005892d0
        ;   Label: core_simbox.cpp_CSimBox_propertyActionCallback_FUN_005892d0
    MOV EDX,dword ptr [0x03659820]      ; 005892d1 | g_CSimBoxClassInfo.name_hash
    PUSH EDX                            ; 005892d7
    MOV ECX,dword ptr [ESP + 0xc]       ; 005892d8
    PUSH ECX                            ; 005892dc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005892dd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,dword ptr [EAX + 0x2d4]     ; 005892e2
    ADD ESP,0x8                         ; 005892e8
    TEST EBX,EBX                        ; 005892eb
    SETZ DL                             ; 005892ed
    AND EDX,0xff                        ; 005892f0
    MOV dword ptr [EAX + 0x2d4],EDX     ; 005892f6
    MOV EAX,0x1                         ; 005892fc
    POP EBX                             ; 00589301
    RET                                 ; 00589302

