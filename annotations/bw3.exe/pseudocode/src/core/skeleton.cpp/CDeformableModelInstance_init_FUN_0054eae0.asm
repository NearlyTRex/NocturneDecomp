; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; XREF[71]:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 at 0040ba61
;   core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10 at 005a0a93
;   core_baal.cpp_CBaal_ctor_FUN_00596660 at 00596685
;   core_bird.cpp_CBird_ctor_FUN_0040f9f0 at 0040fa87
;   core_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0 at 00419ae2
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 at 00417444
;   core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20 at 00419a42
;   core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0 at 00419902
;   core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980 at 004199a2
;   core_bugs.cpp_CBugs_ctor_FUN_00420ea0 at 00420f49
;   ... and 61 more
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054e670
;   core_skeleton.cpp_FUN_0054e690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054eae0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
    PUSH ESI                            ; 0054eae1
    PUSH EDI                            ; 0054eae2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054eae3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054eae7
    LEA EDI,[EBX + 0x2350]              ; 0054eaeb
    PUSH EDI                            ; 0054eaf1
    MOV AL,byte ptr [ESI]               ; 0054eaf2
        ;   Label: LAB_0054eaf2
    MOV byte ptr [EDI],AL               ; 0054eaf4
    CMP AL,0x0                          ; 0054eaf6
    JZ 0x0054eb0a                       ; 0054eaf8
        ;   XREF to: 0054eb0a (CONDITIONAL_JUMP)  ; LAB_0054eb0a
    MOV AL,byte ptr [ESI + 0x1]         ; 0054eafa
    ADD ESI,0x2                         ; 0054eafd
    MOV byte ptr [EDI + 0x1],AL         ; 0054eb00
    ADD EDI,0x2                         ; 0054eb03
    CMP AL,0x0                          ; 0054eb06
    JNZ 0x0054eaf2                      ; 0054eb08
        ;   XREF to: 0054eaf2 (CONDITIONAL_JUMP)  ; LAB_0054eaf2
    POP EDI                             ; 0054eb0a
        ;   Label: LAB_0054eb0a
    PUSH EBX                            ; 0054eb0b
    MOV dword ptr [EBX + 0x23a0],0x0    ; 0054eb0c
    CALL core_skeleton.cpp_FUN_0054e670 ; 0054eb16
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054e670()
    ADD ESP,0x4                         ; 0054eb1b
    PUSH EBX                            ; 0054eb1e
    CALL core_skeleton.cpp_FUN_0054e690 ; 0054eb1f
        ;   XREF to: 0054e690 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e690(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054eb24
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 0054eb27
    POP EDI                             ; 0054eb31
    POP ESI                             ; 0054eb32
    POP EBX                             ; 0054eb33
    RET                                 ; 0054eb34

