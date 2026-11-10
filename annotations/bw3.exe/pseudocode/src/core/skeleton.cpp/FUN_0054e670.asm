; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054e670(int param_1)
;
;
; XREF[5]:
;   core_actor.cpp_archivePartStatus_FUN_0040bba0 at 0040bbf2
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419e79
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417d06
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 004432a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 at 0054eb16
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054e670
        ;   Label: core_skeleton.cpp_FUN_0054e670
    MOV EAX,EDX                         ; 0054e674
    ADD EDX,0xf0                        ; 0054e676
    ADD EAX,0x4                         ; 0054e67c
        ;   Label: LAB_0054e67c
    MOV dword ptr [EAX + 0x213c],0x1    ; 0054e67f
    CMP EAX,EDX                         ; 0054e689
    JNZ 0x0054e67c                      ; 0054e68b
        ;   XREF to: 0054e67c (CONDITIONAL_JUMP)  ; LAB_0054e67c
    RET                                 ; 0054e68d

