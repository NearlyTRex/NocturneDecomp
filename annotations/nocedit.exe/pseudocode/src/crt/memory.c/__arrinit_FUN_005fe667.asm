; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrinit_FUN_005fe667(void *array_start,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_start
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
; Local Variables:
; void *           Stack[-0x14]:4  original_array_ptr
;
; XREF[85]:
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 at 00409bc0
;   core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0 at 0041382c
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 at 0041902a
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 at 0041bbe0
;   core_box.cpp_CBox_ctor_FUN_0041dc50 at 0041dc61
;   core_boxactor.cpp_staticInit_FUN_00421650 at 0042167f
;   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 at 00424ce5
;   core_chain.cpp_CChain_ctor_FUN_0042fb80 at 0042fb9c
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 at 00427e83
;   core_cloth.cpp_CCloth_ctor_FUN_00438ba0 at 00438bd2
;   ... and 75 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe667
        ;   Label: crt_memory.c___arrinit_FUN_005fe667
    PUSH ESI                            ; 005fe668
    PUSH EDI                            ; 005fe669
    PUSH EBP                            ; 005fe66a
    SUB ESP,0xc                         ; 005fe66b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005fe66e
    MOV EBP,dword ptr [ESP + 0x24]      ; 005fe672
    MOV EDI,dword ptr [ESP + 0x28]      ; 005fe676
    MOV dword ptr [ESP + 0x4],EDI       ; 005fe67a
    MOV dword ptr [ESP + 0x8],EBX       ; 005fe67e
    XOR EDX,EDX                         ; 005fe682
    MOV ESI,dword ptr [EDI + 0x4]       ; 005fe684
    MOV dword ptr [ESP],EDX             ; 005fe687
    MOV EDI,dword ptr [EDI + 0x10]      ; 005fe68a
    CMP EBP,dword ptr [ESP]             ; 005fe68d
        ;   Label: LAB_005fe68d
    JA 0x005fe69e                       ; 005fe690
        ;   XREF to: 005fe69e (CONDITIONAL_JUMP)  ; LAB_005fe69e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fe692
    ADD ESP,0xc                         ; 005fe696
    POP EBP                             ; 005fe699
    POP EDI                             ; 005fe69a
    POP ESI                             ; 005fe69b
    POP EBX                             ; 005fe69c
    RET                                 ; 005fe69d
    PUSH EBX                            ; 005fe69e
        ;   Label: LAB_005fe69e
    CALL ESI                            ; 005fe69f
    ADD ESP,0x4                         ; 005fe6a1
    MOV EAX,dword ptr [ESP]             ; 005fe6a4
    INC EAX                             ; 005fe6a7
    ADD EBX,EDI                         ; 005fe6a8
    MOV dword ptr [ESP],EAX             ; 005fe6aa
    JMP 0x005fe68d                      ; 005fe6ad
        ;   XREF to: 005fe68d (UNCONDITIONAL_JUMP)  ; LAB_005fe68d

