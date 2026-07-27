; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
; CDemonActor_FactoryFunc * Stack[0xc]:4   factor_func
; int *            Stack[0x10]:4   max_version
; int              Stack[0x14]:4   version
; CDemonActorType * Stack[0x18]:4   parent_class_info
;
; XREF[106]:
;   core_actor.cpp_staticInit_FUN_00409840 at 00409855
;   core_ammo.cpp_staticInit_FUN_0040eb10 at 0040eb2b
;   core_ammobox.cpp_staticInit_FUN_0040efe0 at 0040effb
;   core_anvil.cpp_staticInit_FUN_0040f500 at 0040f51b
;   core_armour.cpp_staticInit_FUN_0040f900 at 0040f91b
;   core_backgnd.cpp_staticInit_FUN_0040fe70 at 0040fe8b
;   core_baron.cpp_staticInit_FUN_00410140 at 0041015b
;   core_barrier.cpp_staticInit_FUN_004116b0 at 004116cb
;   core_bat.cpp_staticInit_FUN_00411910 at 0041192b
;   core_batcreat.cpp_staticInit_FUN_004120a0 at 004120bb
;   ... and 96 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577f3b
;   TerminatedCString s_Too_many_actor_types_00577f4d
;   undefined4 DAT_005c168c
;   undefined4 DAT_00763e94
;   undefined4 DAT_00763e98
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_ctype.c_tolower_FUN_00564860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d3f0
        ;   Label: core_actor.cpp_registerActorClass_FUN_0040d3f0
    PUSH ESI                            ; 0040d3f1
    PUSH EDI                            ; 0040d3f2
    PUSH EBP                            ; 0040d3f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040d3f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040d3f8
    MOV EDI,EBP                         ; 0040d3fc
    PUSH EDI                            ; 0040d3fe
    MOV AL,byte ptr [ESI]               ; 0040d3ff
        ;   Label: LAB_0040d3ff
    MOV byte ptr [EDI],AL               ; 0040d401
    CMP AL,0x0                          ; 0040d403
    JZ 0x0040d417                       ; 0040d405
        ;   XREF to: 0040d417 (CONDITIONAL_JUMP)  ; LAB_0040d417
    MOV AL,byte ptr [ESI + 0x1]         ; 0040d407
    ADD ESI,0x2                         ; 0040d40a
    MOV byte ptr [EDI + 0x1],AL         ; 0040d40d
    ADD EDI,0x2                         ; 0040d410
    CMP AL,0x0                          ; 0040d413
    JNZ 0x0040d3ff                      ; 0040d415
        ;   XREF to: 0040d3ff (CONDITIONAL_JUMP)  ; LAB_0040d3ff
    POP EDI                             ; 0040d417
        ;   Label: LAB_0040d417
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040d418
    MOV dword ptr [EBP + 0x2c],EAX      ; 0040d41c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040d41f
    MOV dword ptr [EBP + 0x30],EAX      ; 0040d423
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040d426
    XOR EBX,EBX                         ; 0040d42a
    MOV dword ptr [EBP + 0x34],EAX      ; 0040d42c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040d42f
    MOV ESI,EBP                         ; 0040d433
    MOV dword ptr [EBP + 0x28],EAX      ; 0040d435
    XOR EAX,EAX                         ; 0040d438
        ;   Label: LAB_0040d438
    MOV AL,byte ptr [ESI]               ; 0040d43a
    INC ESI                             ; 0040d43c
    TEST EAX,EAX                        ; 0040d43d
    JNZ 0x0040d46e                      ; 0040d43f
        ;   XREF to: 0040d46e (CONDITIONAL_JUMP)  ; LAB_0040d46e
    MOV EDX,dword ptr [0x00763e94]      ; 0040d441 | DAT_00763e94
    MOV dword ptr [EBP + 0x38],EBX      ; 0040d447
    CMP EDX,0xc8                        ; 0040d44a
    JGE 0x0040d49f                      ; 0040d450
        ;   XREF to: 0040d49f (CONDITIONAL_JUMP)  ; LAB_0040d49f
    MOV EAX,[0x00763e94]                ; 0040d452 | DAT_00763e94
        ;   Label: LAB_0040d452
    LEA ESI,[EAX + 0x1]                 ; 0040d457
    MOV dword ptr [EAX*0x4 + 0x763e98],EBP ; 0040d45a | DAT_00763e98
    MOV dword ptr [0x00763e94],ESI      ; 0040d461 | DAT_00763e94
    MOV EAX,EBP                         ; 0040d467
    POP EBP                             ; 0040d469
    POP EDI                             ; 0040d46a
    POP ESI                             ; 0040d46b
    POP EBX                             ; 0040d46c
    RET                                 ; 0040d46d
    MOV DL,AL                           ; 0040d46e
        ;   Label: LAB_0040d46e
    INC DL                              ; 0040d470
    AND EDX,0xff                        ; 0040d472
    TEST byte ptr [EDX + 0x5c168c],0xe0 ; 0040d478 | DAT_005c168c
    JZ 0x0040d438                       ; 0040d47f
        ;   XREF to: 0040d438 (CONDITIONAL_JUMP)  ; LAB_0040d438
    PUSH EAX                            ; 0040d481
    CALL crt_ctype.c_tolower_FUN_00564860 ; 0040d482
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_tolower_FUN_00564860()
    MOV EDX,EBX                         ; 0040d487
    SHL EDX,0x7                         ; 0040d489
    SHR EBX,0x19                        ; 0040d48c
    ADD EDX,EBX                         ; 0040d48f
    MOV EBX,EAX                         ; 0040d491
    SHL EBX,0x11                        ; 0040d493
    ADD EBX,EDX                         ; 0040d496
    ADD ESP,0x4                         ; 0040d498
    ADD EBX,EAX                         ; 0040d49b
    JMP 0x0040d438                      ; 0040d49d
        ;   XREF to: 0040d438 (UNCONDITIONAL_JUMP)  ; LAB_0040d438
    MOV ECX,0x577f3b                    ; 0040d49f | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040d49f
    MOV EBX,0xa19                       ; 0040d4a4
    PUSH 0x577f4d                       ; 0040d4a9 | = "Too many actor types!"
    MOV dword ptr [0x01cc4800],ECX      ; 0040d4ae | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0040d4b4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040d4ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040d4bf
    JMP 0x0040d452                      ; 0040d4c2
        ;   XREF to: 0040d452 (UNCONDITIONAL_JUMP)  ; LAB_0040d452

