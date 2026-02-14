; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; int *            Stack[0xc]:4   data_ptr
;
; XREF[2]:
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 at 0042288b
;   core_melee.cpp_CMelee_getPropertyList_FUN_0050ecf0 at 0050ed11
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e6a0
        ;   Label: core_actor.cpp_CActorPropertyList_addFlags_FUN_0040e6a0
    PUSH 0x0                            ; 0040e6a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e6a3
    PUSH EDX                            ; 0040e6a7
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e6a8
    PUSH ECX                            ; 0040e6ac
    PUSH 0x12                           ; 0040e6ad
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e6af
    PUSH EBX                            ; 0040e6b3
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e6b4
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e6b9
    POP EBX                             ; 0040e6bc
    RET                                 ; 0040e6bd

