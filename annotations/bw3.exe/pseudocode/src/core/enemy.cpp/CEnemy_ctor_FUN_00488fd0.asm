; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[29]:
;   core_baal.cpp_CBaal_ctor_FUN_00596660 at 00596667
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 at 0041740b
;   core_bugs.cpp_CBugs_ctor_FUN_00420ea0 at 00420ea8
;   core_carved.cpp_CCarved_ctor_FUN_00425960 at 0042596a
;   core_constrct.cpp_CConstruct_ctor_FUN_00442420 at 00442428
;   core_cow.cpp_CZombieCow_ctor_FUN_00444f60 at 00444f66
;   core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60 at 00454b6c
;   core_dog.cpp_CZombieDog_ctor_FUN_00462710 at 00462716
;   core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0 at 004c4de6
;   core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0 at 004c68e9
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488fd0
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
    PUSH ESI                            ; 00488fd1
    PUSH EDI                            ; 00488fd2
    SUB ESP,0x4                         ; 00488fd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00488fd6
    PUSH EBX                            ; 00488fda
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 ; 00488fdb
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042ac20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00488fe0
    ADD EAX,0xced0                      ; 00488fe3
    PUSH EAX                            ; 00488fe8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00488fe9
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00488fee
    PUSH 0x3f8ccccd                     ; 00488ff1
    LEA EBX,[EAX + 0xffff3130]          ; 00488ff6
    PUSH 0x3f666666                     ; 00488ffc
    MOV dword ptr [EBX + 0x154],0x5df364 ; 00489001
    CALL core_actor.cpp_FUN_0040ce40    ; 0048900b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBX + 0xcdd0],0x0    ; 00489010
    MOV dword ptr [EBX + 0xce54],0x0    ; 0048901a
    MOV dword ptr [EBX + 0xcde4],0x0    ; 00489024
    MOV dword ptr [EBX + 0xcde8],0x0    ; 0048902e
    MOV dword ptr [EBX + 0xcdec],0x42480000 ; 00489038
    MOV dword ptr [EBX + 0xcdd4],0x1    ; 00489042
    MOV dword ptr [EBX + 0xd04c],0x0    ; 0048904c
    MOV dword ptr [EBX + 0xcdd8],0x0    ; 00489056
    MOV byte ptr [EBX + 0xcdf0],0x0     ; 00489060
    MOV dword ptr [EBX + 0xcddc],0x42c80000 ; 00489067
    MOV ESI,0x5bdb7e                    ; 00489071
    MOV dword ptr [EBX + 0xcde0],0x0    ; 00489076
    LEA EDI,[EBX + 0x120]               ; 00489080
    MOV dword ptr [EBX + 0xce58],0x40c00000 ; 00489086
    MOV dword ptr [ESP + 0x8],EAX       ; 00489090
    MOV dword ptr [EBX + 0xd050],0x1    ; 00489094
    FLD float ptr [ESP + 0x8]           ; 0048909e
    ADD ESP,0x8                         ; 004890a2
    FSTP float ptr [EBX + 0xcdcc]       ; 004890a5
    PUSH EDI                            ; 004890ab
    MOV AL,byte ptr [ESI]               ; 004890ac
        ;   Label: LAB_004890ac
    MOV byte ptr [EDI],AL               ; 004890ae
    CMP AL,0x0                          ; 004890b0
    JZ 0x004890c4                       ; 004890b2
        ;   XREF to: 004890c4 (CONDITIONAL_JUMP)  ; LAB_004890c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004890b4
    ADD ESI,0x2                         ; 004890b7
    MOV byte ptr [EDI + 0x1],AL         ; 004890ba
    ADD EDI,0x2                         ; 004890bd
    CMP AL,0x0                          ; 004890c0
    JNZ 0x004890ac                      ; 004890c2
        ;   XREF to: 004890ac (CONDITIONAL_JUMP)  ; LAB_004890ac
    POP EDI                             ; 004890c4
        ;   Label: LAB_004890c4
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 004890c5
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 004890cf
    MOV dword ptr [EBX + 0xce60],0x3f800000 ; 004890d9
    MOV dword ptr [EBX + 0xce64],0x1    ; 004890e3
    MOV byte ptr [EBX + 0xce68],0x0     ; 004890ed
    MOV EAX,EBX                         ; 004890f4
    MOV dword ptr [EBX + 0xcecc],0x0    ; 004890f6
    ADD ESP,0x4                         ; 00489100
    POP EDI                             ; 00489103
    POP ESI                             ; 00489104
    POP EBX                             ; 00489105
    RET                                 ; 00489106

