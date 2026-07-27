; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004b0480(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[18]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412732
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413dcc
;   core_bride.cpp_FUN_0041fe40 at 00420020
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043c10d
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454b03
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 0045967e
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 00462ebd
;   core_ghoul.cpp_FUN_004a9270 at 004a9c9d
;   core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20 at 004b91cb
;   core_imp.cpp_CImp_process_FUN_004bbaf0 at 004bc070
;   ... and 8 more
;
; Called Functions:
;   core_gore.cpp_CBloodPool_init_FUN_004af730
;   core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004b0480
        ;   Label: core_gore.cpp_FUN_004b0480
    JNZ 0x004b0488                      ; 004b0485
        ;   XREF to: 004b0488 (CONDITIONAL_JUMP)  ; LAB_004b0488
    RET                                 ; 004b0487
    PUSH ESI                            ; 004b0488
        ;   Label: LAB_004b0488
    PUSH EBX                            ; 004b0489
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b048a
    PUSH ECX                            ; 004b048e
    CALL core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430 ; 004b048f
        ;   XREF to: 004b0430 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430()
    ADD ESP,0x4                         ; 004b0494
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0497
    PUSH EBX                            ; 004b049b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b049c
    PUSH ESI                            ; 004b04a0
    PUSH EAX                            ; 004b04a1
    CALL core_gore.cpp_CBloodPool_init_FUN_004af730 ; 004b04a2
        ;   XREF to: 004af730 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodPool_init_FUN_004af730()
    ADD ESP,0xc                         ; 004b04a7
    POP EBX                             ; 004b04aa
    POP ESI                             ; 004b04ab
    RET                                 ; 004b04ac

