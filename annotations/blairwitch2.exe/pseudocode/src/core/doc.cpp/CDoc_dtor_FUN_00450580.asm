; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoc * core_doc_cpp_CDoc_dtor_FUN_00450580(CDoc *this_ptr,uint flags)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CHero_full_vtable g_CDocVTable
;   WatcomTypeInfo g_CDocTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220
;   core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450580
        ;   Label: core_doc.cpp_CDoc_dtor_FUN_00450580
    PUSH ESI                            ; 00450581
    MOV EBX,dword ptr [ESP + 0xc]       ; 00450582
    TEST byte ptr [ESP + 0x10],0x4      ; 00450586
    JNZ 0x004505f3                      ; 0045058b
        ;   XREF to: 004505f3 (CONDITIONAL_JUMP)  ; LAB_004505f3
    PUSH 0x0                            ; 0045058d
    LEA ESI,[EBX + 0x154]               ; 0045058f
    PUSH ESI                            ; 00450595
    MOV dword ptr [EBX + 0x2b0],0x5f5174 ; 00450596 | g_CDocVTable
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 004505a0
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004505a5
    PUSH ESI                            ; 004505a8
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 004505a9
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 004505ae
    PUSH 0x0                            ; 004505b1
    ADD EBX,0x25ea4                     ; 004505b3
    PUSH EBX                            ; 004505b9
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 004505ba
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004505bf
    PUSH 0x1                            ; 004505c2
    SUB EAX,0x4f0                       ; 004505c4
    PUSH EAX                            ; 004505c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004505ca
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004505cf
    PUSH 0x1                            ; 004505d2
    LEA EBX,[EAX + 0xfffda64c]          ; 004505d4
    PUSH EBX                            ; 004505da
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 004505db
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004505e0
    MOV DL,byte ptr [ESP + 0x10]        ; 004505e3
    MOV EBX,EAX                         ; 004505e7
    TEST DL,0x2                         ; 004505e9
    JNZ 0x0045060f                      ; 004505ec
        ;   XREF to: 0045060f (CONDITIONAL_JUMP)  ; LAB_0045060f
    MOV EAX,EBX                         ; 004505ee
    POP ESI                             ; 004505f0
    POP EBX                             ; 004505f1
    RET                                 ; 004505f2
    PUSH 0x5f52f0                       ; 004505f3 | g_CDocTypeInfo
        ;   Label: LAB_004505f3
    PUSH EBX                            ; 004505f8
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004505f9
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004505fe
    PUSH EAX                            ; 00450601
    CALL crt_unknown.c_FUN_005b7fce     ; 00450602
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00450607
    MOV EAX,EBX                         ; 0045060a
    POP ESI                             ; 0045060c
    POP EBX                             ; 0045060d
    RET                                 ; 0045060e
    PUSH EAX                            ; 0045060f
        ;   Label: LAB_0045060f
    CALL crt_unknown.c_FUN_005b7fdc     ; 00450610
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00450615
    MOV EAX,EBX                         ; 00450618
    POP ESI                             ; 0045061a
    POP EBX                             ; 0045061b
    RET                                 ; 0045061c

