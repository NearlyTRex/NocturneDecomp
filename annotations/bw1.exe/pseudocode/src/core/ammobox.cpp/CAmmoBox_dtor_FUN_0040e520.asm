; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040e520(CAmmoBox *this_ptr,uint flags)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e520
        ;   Label: core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e520
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e521
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e525
    JNZ 0x0040e546                      ; 0040e52a
        ;   XREF to: 0040e546 (CONDITIONAL_JUMP)  ; LAB_0040e546
    PUSH 0x1                            ; 0040e52c
    PUSH EBX                            ; 0040e52e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040e52f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e534
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e537
    MOV EBX,EAX                         ; 0040e53b
    TEST DL,0x2                         ; 0040e53d
    JNZ 0x0040e561                      ; 0040e540
        ;   XREF to: 0040e561 (CONDITIONAL_JUMP)  ; LAB_0040e561
    MOV EAX,EBX                         ; 0040e542
    POP EBX                             ; 0040e544
    RET                                 ; 0040e545
    PUSH 0x5fb670                       ; 0040e546 | g_CAmmoBoxTypeInfo
        ;   Label: LAB_0040e546
    PUSH EBX                            ; 0040e54b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040e54c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0040e551
    PUSH EAX                            ; 0040e554
    CALL crt_unknown.c_FUN_005c0336     ; 0040e555
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040e55a
    MOV EAX,EBX                         ; 0040e55d
    POP EBX                             ; 0040e55f
    RET                                 ; 0040e560
    PUSH EAX                            ; 0040e561
        ;   Label: LAB_0040e561
    CALL crt_unknown.c_FUN_005c0344     ; 0040e562
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040e567
    MOV EAX,EBX                         ; 0040e56a
    POP EBX                             ; 0040e56c
    RET                                 ; 0040e56d

