; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250 (CDoor *this_ptr,CActorPropertyList *property,char *output_buffer)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property
; char *           Stack[0xc]:4   output_buffer
;
; XREF[1]:
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 0048137c
;
; Referenced Globals:
;   TerminatedCString s_Closed_00621340
;   undefined4 s_losed_00621341
;   TerminatedCString s_Open_00621347
;   undefined4 DAT_00621348
;   undefined4 DAT_00621349
;   undefined4 DAT_0062134a
;   TerminatedCString s_Unknown_0062134c
;   undefined4 s_nknown_0062134d
;   undefined4 g_CDoorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481250
        ;   Label: core_door.cpp_CDoor_propertyDisplayCallback_FUN_00481250
    PUSH EDI                            ; 00481251
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481252
    MOV EDX,dword ptr [0x02c14d14]      ; 00481256 | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 0048125c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048125d
    PUSH ECX                            ; 00481261
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00481262
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00481267
    ADD ESP,0x8                         ; 0048126d
    TEST EAX,EAX                        ; 00481270
    JBE 0x0048129b                      ; 00481272
        ;   XREF to: 0048129b (CONDITIONAL_JUMP)  ; LAB_0048129b
    CMP EAX,0x2                         ; 00481274
    JNZ 0x004812a2                      ; 00481277
        ;   XREF to: 004812a2 (CONDITIONAL_JUMP)  ; LAB_004812a2
    MOV ESI,0x621347                    ; 00481279 | = "Open"
    PUSH EDI                            ; 0048127e
        ;   Label: LAB_0048127e
    MOV AL,byte ptr [ESI]               ; 0048127f | = "Closed" | s_Open_00621347 | DAT_00621349
        ;   Label: LAB_0048127f
    MOV byte ptr [EDI],AL               ; 00481281
    CMP AL,0x0                          ; 00481283
    JZ 0x00481297                       ; 00481285
        ;   XREF to: 00481297 (CONDITIONAL_JUMP)  ; LAB_00481297
    MOV AL,byte ptr [ESI + 0x1]         ; 00481287 | s_losed_00621341 | DAT_00621348 | DAT_0062134a
    ADD ESI,0x2                         ; 0048128a
    MOV byte ptr [EDI + 0x1],AL         ; 0048128d
    ADD EDI,0x2                         ; 00481290
    CMP AL,0x0                          ; 00481293
    JNZ 0x0048127f                      ; 00481295
        ;   XREF to: 0048127f (CONDITIONAL_JUMP)  ; LAB_0048127f
    POP EDI                             ; 00481297
        ;   Label: LAB_00481297
    POP EDI                             ; 00481298
    POP ESI                             ; 00481299
    RET                                 ; 0048129a
    MOV ESI,0x621340                    ; 0048129b | = "Closed"
        ;   Label: LAB_0048129b
    JMP 0x0048127e                      ; 004812a0
        ;   XREF to: 0048127e (UNCONDITIONAL_JUMP)  ; LAB_0048127e
    MOV ESI,0x62134c                    ; 004812a2 | = "Unknown"
        ;   Label: LAB_004812a2
    JMP 0x0048127e                      ; 004812a7
        ;   XREF to: 0048127e (UNCONDITIONAL_JUMP)  ; LAB_0048127e

