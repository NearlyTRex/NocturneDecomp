; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040c2e0 (CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func, int *max_version,int version,CDemonActorType *parent_class_info)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
; CDemonActor_FactoryFunc * Stack[0xc]:4   factor_func
; int *            Stack[0x10]:4   max_version
; int              Stack[0x14]:4   version
; CDemonActorType * Stack[0x18]:4   parent_class_info
;
; XREF[107]:
;   core_actor.cpp_staticInit_FUN_00408320 at 00408335
;   core_ammo.cpp_staticInit_FUN_00410d50 at 00410d6b
;   core_ammobox.cpp_staticInit_FUN_00411530 at 0041154b
;   core_anvil.cpp_staticInit_FUN_00411c70 at 00411c8b
;   core_armour.cpp_staticInit_FUN_00412130 at 0041214b
;   core_backgnd.cpp_staticInit_FUN_00412740 at 0041275b
;   core_baron.cpp_staticInit_FUN_00412b20 at 00412b3b
;   core_baron.cpp_staticInit_FUN_00412b41 at 00412b6b
;   core_barrier.cpp_staticInit_FUN_00414150 at 0041416b
;   core_bat.cpp_staticInit_FUN_004146c0 at 004146db
;   ... and 97 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006141e2
;   TerminatedCString s_Too_many_actor_types_006141f4
;   uchar[257] g_CharacterClassificationTable
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c2e0
        ;   Label: core_actor.cpp_registerActorClass_FUN_0040c2e0
    PUSH ESI                            ; 0040c2e1
    PUSH EDI                            ; 0040c2e2
    PUSH EBP                            ; 0040c2e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c2e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c2e8
    MOV EDI,EBP                         ; 0040c2ec
    PUSH EDI                            ; 0040c2ee
    MOV AL,byte ptr [ESI]               ; 0040c2ef
        ;   Label: LAB_0040c2ef
    MOV byte ptr [EDI],AL               ; 0040c2f1
    CMP AL,0x0                          ; 0040c2f3
    JZ 0x0040c307                       ; 0040c2f5
        ;   XREF to: 0040c307 (CONDITIONAL_JUMP)  ; LAB_0040c307
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c2f7
    ADD ESI,0x2                         ; 0040c2fa
    MOV byte ptr [EDI + 0x1],AL         ; 0040c2fd
    ADD EDI,0x2                         ; 0040c300
    CMP AL,0x0                          ; 0040c303
    JNZ 0x0040c2ef                      ; 0040c305
        ;   XREF to: 0040c2ef (CONDITIONAL_JUMP)  ; LAB_0040c2ef
    POP EDI                             ; 0040c307
        ;   Label: LAB_0040c307
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040c308
    MOV dword ptr [EBP + 0x2c],EAX      ; 0040c30c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040c30f
    MOV dword ptr [EBP + 0x30],EAX      ; 0040c313
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040c316
    XOR EBX,EBX                         ; 0040c31a
    MOV dword ptr [EBP + 0x34],EAX      ; 0040c31c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040c31f
    MOV ESI,EBP                         ; 0040c323
    MOV dword ptr [EBP + 0x28],EAX      ; 0040c325
    XOR EAX,EAX                         ; 0040c328
        ;   Label: LAB_0040c328
    MOV AL,byte ptr [ESI]               ; 0040c32a
    INC ESI                             ; 0040c32c
    TEST EAX,EAX                        ; 0040c32d
    JNZ 0x0040c35e                      ; 0040c32f
        ;   XREF to: 0040c35e (CONDITIONAL_JUMP)  ; LAB_0040c35e
    MOV EDX,dword ptr [0x00822044]      ; 0040c331 | g_NumActorClassTypes
    MOV dword ptr [EBP + 0x38],EBX      ; 0040c337
    CMP EDX,0xc8                        ; 0040c33a
    JGE 0x0040c38f                      ; 0040c340
        ;   XREF to: 0040c38f (CONDITIONAL_JUMP)  ; LAB_0040c38f
    MOV EAX,[0x00822044]                ; 0040c342 | g_NumActorClassTypes
        ;   Label: LAB_0040c342
    LEA ESI,[EAX + 0x1]                 ; 0040c347
    MOV dword ptr [EAX*0x4 + 0x822048],EBP ; 0040c34a | g_ActorClassRegistrations
    MOV dword ptr [0x00822044],ESI      ; 0040c351 | g_NumActorClassTypes
    MOV EAX,EBP                         ; 0040c357
    POP EBP                             ; 0040c359
    POP EDI                             ; 0040c35a
    POP ESI                             ; 0040c35b
    POP EBX                             ; 0040c35c
    RET                                 ; 0040c35d
    MOV DL,AL                           ; 0040c35e
        ;   Label: LAB_0040c35e
    INC DL                              ; 0040c360
    AND EDX,0xff                        ; 0040c362
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0040c368 | g_CharacterClassificationTable
    JZ 0x0040c328                       ; 0040c36f
        ;   XREF to: 0040c328 (CONDITIONAL_JUMP)  ; LAB_0040c328
    PUSH EAX                            ; 0040c371
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0040c372
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    MOV EDX,EBX                         ; 0040c377
    SHL EDX,0x7                         ; 0040c379
    SHR EBX,0x19                        ; 0040c37c
    ADD EDX,EBX                         ; 0040c37f
    MOV EBX,EAX                         ; 0040c381
    SHL EBX,0x11                        ; 0040c383
    ADD EBX,EDX                         ; 0040c386
    ADD ESP,0x4                         ; 0040c388
    ADD EBX,EAX                         ; 0040c38b
    JMP 0x0040c328                      ; 0040c38d
        ;   XREF to: 0040c328 (UNCONDITIONAL_JUMP)  ; LAB_0040c328
    MOV ECX,0x6141e2                    ; 0040c38f | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040c38f
    MOV EBX,0xa0a                       ; 0040c394
    PUSH 0x6141f4                       ; 0040c399 | = "Too many actor types!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0040c39e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0040c3a4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040c3aa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0040c3af
    JMP 0x0040c342                      ; 0040c3b2
        ;   XREF to: 0040c342 (UNCONDITIONAL_JUMP)  ; LAB_0040c342

