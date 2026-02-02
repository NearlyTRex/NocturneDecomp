; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0 (CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path, char *extension,int allow_none)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; void *           Stack[0xc]:4   data_ptr
; char *           Stack[0x10]:4   search_path
; char *           Stack[0x14]:4   extension
; int              Stack[0x18]:4   allow_none
;
; XREF[1]:
;   core_bat.cpp_CBat_getPropertyList_FUN_00414dc0 at 00414df0
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3e0
        ;   Label: core_actor.cpp_CActorPropertyList_addFile_FUN_0040e3e0
    PUSH ESI                            ; 0040e3e1
    PUSH EDI                            ; 0040e3e2
    PUSH 0x0                            ; 0040e3e3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040e3e5
    PUSH EDX                            ; 0040e3e9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0040e3ea
    PUSH ECX                            ; 0040e3ee
    PUSH 0xa                            ; 0040e3ef
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040e3f1
    PUSH EBX                            ; 0040e3f5
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e3f6
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    ADD ESP,0x14                        ; 0040e3fb
    MOV EDX,EAX                         ; 0040e3fe
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e400
    LEA EDI,[EAX + 0x70]                ; 0040e404
    PUSH EDI                            ; 0040e407
    MOV AL,byte ptr [ESI]               ; 0040e408
        ;   Label: LAB_0040e408
    MOV byte ptr [EDI],AL               ; 0040e40a
    CMP AL,0x0                          ; 0040e40c
    JZ 0x0040e420                       ; 0040e40e
        ;   XREF to: 0040e420 (CONDITIONAL_JUMP)  ; LAB_0040e420
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e410
    ADD ESI,0x2                         ; 0040e413
    MOV byte ptr [EDI + 0x1],AL         ; 0040e416
    ADD EDI,0x2                         ; 0040e419
    CMP AL,0x0                          ; 0040e41c
    JNZ 0x0040e408                      ; 0040e41e
        ;   XREF to: 0040e408 (CONDITIONAL_JUMP)  ; LAB_0040e408
    POP EDI                             ; 0040e420
        ;   Label: LAB_0040e420
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040e421
    LEA EDI,[EDX + 0x84]                ; 0040e425
    PUSH EDI                            ; 0040e42b
    MOV AL,byte ptr [ESI]               ; 0040e42c
        ;   Label: LAB_0040e42c
    MOV byte ptr [EDI],AL               ; 0040e42e
    CMP AL,0x0                          ; 0040e430
    JZ 0x0040e444                       ; 0040e432
        ;   XREF to: 0040e444 (CONDITIONAL_JUMP)  ; LAB_0040e444
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e434
    ADD ESI,0x2                         ; 0040e437
    MOV byte ptr [EDI + 0x1],AL         ; 0040e43a
    ADD EDI,0x2                         ; 0040e43d
    CMP AL,0x0                          ; 0040e440
    JNZ 0x0040e42c                      ; 0040e442
        ;   XREF to: 0040e42c (CONDITIONAL_JUMP)  ; LAB_0040e42c
    POP EDI                             ; 0040e444
        ;   Label: LAB_0040e444
    MOV EDI,dword ptr [ESP + 0x24]      ; 0040e445
    MOV dword ptr [EDX + 0x58],0x1      ; 0040e449
    MOV EAX,EDX                         ; 0040e450
    MOV dword ptr [EDX + 0x5c],EDI      ; 0040e452
    POP EDI                             ; 0040e455
    POP ESI                             ; 0040e456
    POP EBX                             ; 0040e457
    RET                                 ; 0040e458

