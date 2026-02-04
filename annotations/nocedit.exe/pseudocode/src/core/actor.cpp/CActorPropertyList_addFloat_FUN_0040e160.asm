; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160 (CActorPropertyList *this_ptr,char *property_name,float *data_ptr, CDemonActor_CActorPropertyValidatorFunc *callback)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; float *          Stack[0xc]:4   data_ptr
; CDemonActor_CActorPropertyValidatorFunc * Stack[0x10]:4   callback
;
; XREF[31]:
;   core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030 at 0041207f
;   core_bat.cpp_CBat_getPropertyList_FUN_00414dc0 at 00414e22
;   core_battery.cpp_CBattery_getPropertyList_FUN_004180b0 at 00418101
;   core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990 at 0041d9da
;   core_boxactor.cpp_CLightActor_getPropertyList_FUN_004234e0 at 00423582
;   core_chain.cpp_CChain_getPropertyList_FUN_00431120 at 004311a6
;   core_curtain.cpp_FUN_0044b610 at 0044b663
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481483
;   core_drip.cpp_CDrip_getPropertyList_FUN_0048e930 at 0048e9a6
;   core_emitter.cpp_CEmitter_getPropertyList_FUN_004a8db0 at 004a8e05
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e160
        ;   Label: core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
    PUSH ESI                            ; 0040e161
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e162
    PUSH EDX                            ; 0040e166
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e167
    PUSH ECX                            ; 0040e16b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e16c
    PUSH EBX                            ; 0040e170
    PUSH 0x1                            ; 0040e171
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e173
    PUSH ESI                            ; 0040e177
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e178
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    MOV dword ptr [EAX + 0x5c],0x0      ; 0040e17d
    ADD ESP,0x14                        ; 0040e184
    MOV dword ptr [EAX + 0x6c],0x3f800000 ; 0040e187
    POP ESI                             ; 0040e18e
    POP EBX                             ; 0040e18f
    RET                                 ; 0040e190

