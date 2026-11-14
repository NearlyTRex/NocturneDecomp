; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004cec40(CGore *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[25]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0e17
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00597011
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fc35
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426dcb
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004454e3
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 0045649b
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 00462d12
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c7a0f
;   core_hino.cpp_CHino_process_FUN_0059b960 at 0059bfa6
;   core_hotdemon.cpp_CHotDemon_process_FUN_004d56b0 at 004d59b7
;   ... and 15 more
;
; Called Functions:
;   core_gore.cpp_CBloodPool_init_FUN_004cdff0
;   core_gore.cpp_CGore_allocateBloodPool_FUN_004cebf0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004cec40
        ;   Label: core_gore.cpp_CGore_createBloodPool_FUN_004cec40
    JNZ 0x004cec48                      ; 004cec45
        ;   XREF to: 004cec48 (CONDITIONAL_JUMP)  ; LAB_004cec48
    RET                                 ; 004cec47
    PUSH ESI                            ; 004cec48
        ;   Label: LAB_004cec48
    PUSH EBX                            ; 004cec49
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cec4a
    PUSH ECX                            ; 004cec4e
    CALL core_gore.cpp_CGore_allocateBloodPool_FUN_004cebf0 ; 004cec4f
        ;   XREF to: 004cebf0 (UNCONDITIONAL_CALL)  ; CBloodPool * core_gore.cpp_CGore_allocateBloodPool_FUN_004cebf0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004cec54
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cec57
    PUSH EBX                            ; 004cec5b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004cec5c
    PUSH ESI                            ; 004cec60
    PUSH EAX                            ; 004cec61
    CALL core_gore.cpp_CBloodPool_init_FUN_004cdff0 ; 004cec62
        ;   XREF to: 004cdff0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_init_FUN_004cdff0(CBloodPool * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004cec67
    POP EBX                             ; 004cec6a
    POP ESI                             ; 004cec6b
    RET                                 ; 004cec6c

