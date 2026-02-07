; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_CGore_FUN_004ede30(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[19]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415722
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416e3c
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00423c10
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044466d
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f4f3
;   core_dracbrid.cpp_FUN_00484410 at 00484ffe
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048f0cd
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e702d
;   core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20 at 004f71cb
;   core_imp.cpp_CImp_process_FUN_004f9c30 at 004fa1b0
;   ... and 9 more
;
; Called Functions:
;   core_gore.cpp_FUN_004ed0d0
;   core_gore.cpp_FUN_004edde0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004ede30
        ;   Label: core_gore.cpp_CGore_FUN_004ede30
    JNZ 0x004ede38                      ; 004ede35
        ;   XREF to: 004ede38 (CONDITIONAL_JUMP)  ; LAB_004ede38
    RET                                 ; 004ede37
    PUSH ESI                            ; 004ede38
        ;   Label: LAB_004ede38
    PUSH EBX                            ; 004ede39
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ede3a
    PUSH ECX                            ; 004ede3e
    CALL core_gore.cpp_FUN_004edde0     ; 004ede3f
        ;   XREF to: 004edde0 (UNCONDITIONAL_CALL)  ; CBloodPool * core_gore.cpp_FUN_004edde0()
    ADD ESP,0x4                         ; 004ede44
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ede47
    PUSH EBX                            ; 004ede4b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ede4c
    PUSH ESI                            ; 004ede50
    PUSH EAX                            ; 004ede51
    CALL core_gore.cpp_FUN_004ed0d0     ; 004ede52
        ;   XREF to: 004ed0d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ed0d0()
    ADD ESP,0xc                         ; 004ede57
    POP EBX                             ; 004ede5a
    POP ESI                             ; 004ede5b
    RET                                 ; 004ede5c

