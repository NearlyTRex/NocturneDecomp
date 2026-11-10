; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_CTempleStone_archive_FUN_00562460(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_destActor_005eb185
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562460
        ;   Label: core_stone.cpp_CTempleStone_archive_FUN_00562460
    PUSH EDX                            ; 00562464
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0 ; 00562465
        ;   XREF to: 0041c7f0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_archive_FUN_0041c7f0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0056246a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056246d
    PUSH 0x5eb185                       ; 00562471 | = "destActor"
    ADD EAX,0x7d4                       ; 00562476
    PUSH EAX                            ; 0056247b
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056247c
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00562481
    RET                                 ; 00562484

