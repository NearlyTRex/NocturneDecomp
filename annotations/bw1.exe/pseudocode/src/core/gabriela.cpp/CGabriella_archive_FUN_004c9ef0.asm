; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004c9ef0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005e1163+1
;   TerminatedCString s_doorToOpen_005e1173
;   TerminatedCString s_leverToPull_005e117e
;   TerminatedCString s_ladderToClimb_005e118a
;   TerminatedCString s_lhCarryObject_005e1198
;   TerminatedCString s_rhCarryObject_005e11a6
;   int g_CGabriellaClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9ef0
        ;   Label: core_gabriela.cpp_CGabriella_archive_FUN_004c9ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9ef1
    PUSH EBX                            ; 004c9ef5
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 004c9ef6
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    MOV EDX,dword ptr [0x0061d884]      ; 004c9efb | g_CGabriellaClassVersion
    ADD ESP,0x4                         ; 004c9f01
    CMP EDX,0x2                         ; 004c9f04
    JL 0x004c9f5e                       ; 004c9f07
        ;   XREF to: 004c9f5e (CONDITIONAL_JUMP)  ; LAB_004c9f5e
    CMP EDX,0x3                         ; 004c9f09
    JG 0x004c9f5e                       ; 004c9f0c
        ;   XREF to: 004c9f5e (CONDITIONAL_JUMP)  ; LAB_004c9f5e
    PUSH 0x5e1164                       ; 004c9f0e | s_objectToPickUp_005e1163+1
    LEA EAX,[EBX + 0x1ff78]             ; 004c9f13
    PUSH EAX                            ; 004c9f19
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f1a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f1f
    PUSH 0x5e1173                       ; 004c9f22 | = "doorToOpen"
    LEA EAX,[EBX + 0x1ff74]             ; 004c9f27
    PUSH EAX                            ; 004c9f2d
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f2e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f33
    PUSH 0x5e117e                       ; 004c9f36 | = "leverToPull"
    LEA EAX,[EBX + 0x1ff80]             ; 004c9f3b
    PUSH EAX                            ; 004c9f41
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f42
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f47
    PUSH 0x5e118a                       ; 004c9f4a | = "ladderToClimb"
    LEA EAX,[EBX + 0x1ff84]             ; 004c9f4f
    PUSH EAX                            ; 004c9f55
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f56
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f5b
    CMP dword ptr [0x0061d884],0x2      ; 004c9f5e | g_CGabriellaClassVersion
        ;   Label: LAB_004c9f5e
    JZ 0x004c9f69                       ; 004c9f65
        ;   XREF to: 004c9f69 (CONDITIONAL_JUMP)  ; LAB_004c9f69
    POP EBX                             ; 004c9f67
    RET                                 ; 004c9f68
    PUSH 0x5e1198                       ; 004c9f69 | = "lhCarryObject"
        ;   Label: LAB_004c9f69
    LEA EAX,[EBX + 0x25b0]              ; 004c9f6e
    PUSH EAX                            ; 004c9f74
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f75
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f7a
    PUSH 0x5e11a6                       ; 004c9f7d | = "rhCarryObject"
    ADD EBX,0x2628                      ; 004c9f82
    PUSH EBX                            ; 004c9f88
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004c9f89
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004c9f8e
    POP EBX                             ; 004c9f91
    RET                                 ; 004c9f92

