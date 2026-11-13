; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_00448650(CCurtain *this_ptr,uint flags)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCurtainTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448650
        ;   Label: core_curtain.cpp_CCurtain_dtor_FUN_00448650
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448651
    TEST byte ptr [ESP + 0xc],0x4       ; 00448655
    JNZ 0x00448676                      ; 0044865a
        ;   XREF to: 00448676 (CONDITIONAL_JUMP)  ; LAB_00448676
    PUSH 0x1                            ; 0044865c
    PUSH EBX                            ; 0044865e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0044865f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00448664
    MOV DL,byte ptr [ESP + 0xc]         ; 00448667
    MOV EBX,EAX                         ; 0044866b
    TEST DL,0x2                         ; 0044866d
    JNZ 0x00448691                      ; 00448670
        ;   XREF to: 00448691 (CONDITIONAL_JUMP)  ; LAB_00448691
    MOV EAX,EBX                         ; 00448672
    POP EBX                             ; 00448674
    RET                                 ; 00448675
    PUSH 0x5ddf90                       ; 00448676 | g_CCurtainTypeInfo
        ;   Label: LAB_00448676
    PUSH EBX                            ; 0044867b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0044867c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00448681
    PUSH EAX                            ; 00448684
    CALL crt_unknown.c_FUN_005a30b6     ; 00448685
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0044868a
    MOV EAX,EBX                         ; 0044868d
    POP EBX                             ; 0044868f
    RET                                 ; 00448690
    PUSH EAX                            ; 00448691
        ;   Label: LAB_00448691
    CALL crt_unknown.c_FUN_005a30c4     ; 00448692
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00448697
    MOV EAX,EBX                         ; 0044869a
    POP EBX                             ; 0044869c
    RET                                 ; 0044869d

