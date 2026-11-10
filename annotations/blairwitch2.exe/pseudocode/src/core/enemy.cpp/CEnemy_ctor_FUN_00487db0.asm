; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00487db0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[30]:
;   core_armour.cpp_CArmour_ctor_FUN_0040ee40 at 0040ee48
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00411690 at 00411696
;   core_batman.cpp_CBatman_ctor_FUN_00412b20 at 00412b28
;   core_beast.cpp_CBeast_ctor_FUN_00414a00 at 00414a06
;   core_biggs.cpp_CBiggs_ctor_FUN_00414d10 at 00414d18
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0 at 004182db
;   core_bride.cpp_CBride_ctor_FUN_0041d950 at 0041d956
;   core_bugs.cpp_CBugs_ctor_FUN_0041ef50 at 0041ef58
;   core_cow.cpp_CZombieCow_ctor_FUN_004390e0 at 004390e6
;   core_dog.cpp_CZombieDog_ctor_FUN_0045e270 at 0045e276
;   ... and 20 more
;
; Referenced Globals:
;   undefined1 DAT_005d2d28
;   undefined1 DAT_005d2d29
;   undefined1 DAT_005d2d2a
;   undefined1 DAT_005d2d2b
;   CEnemy_full_vtable g_CEnemyVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487db0
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_00487db0
    PUSH ESI                            ; 00487db1
    PUSH EDI                            ; 00487db2
    SUB ESP,0x4                         ; 00487db3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00487db6
    PUSH EDX                            ; 00487dba
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00422340 ; 00487dbb
        ;   XREF to: 00422340 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00422340(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00487dc0
    PUSH 0x3f8ccccd                     ; 00487dc3
    MOV EBX,EAX                         ; 00487dc8
    PUSH 0x3f666666                     ; 00487dca
    MOV dword ptr [EAX + 0x2b0],0x5f6074 ; 00487dcf | g_CEnemyVTable
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487dd9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBX + 0x10a64],0x0   ; 00487dde
    MOV dword ptr [EBX + 0x10ae8],0x0   ; 00487de8
    MOV dword ptr [EBX + 0x10a78],0x0   ; 00487df2
    MOV dword ptr [EBX + 0x10a7c],0x0   ; 00487dfc
    MOV dword ptr [EBX + 0x10a80],0x42480000 ; 00487e06
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00487e10
    MOV dword ptr [EBX + 0x10af0],0x0   ; 00487e1a
    MOV dword ptr [EBX + 0x10a6c],0x0   ; 00487e24
    MOV byte ptr [EBX + 0x10a84],0x0    ; 00487e2e
    MOV dword ptr [EBX + 0x10a70],0x42c80000 ; 00487e35
    MOV ESI,0x5d2d28                    ; 00487e3f | DAT_005d2d28
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00487e44
    LEA EDI,[EBX + 0x120]               ; 00487e4e
    MOV dword ptr [EBX + 0x10aec],0x40c00000 ; 00487e54
    MOV dword ptr [ESP + 0x8],EAX       ; 00487e5e
    MOV dword ptr [EBX + 0x10af4],0x1   ; 00487e62
    FLD float ptr [ESP + 0x8]           ; 00487e6c
    ADD ESP,0x8                         ; 00487e70
    FSTP float ptr [EBX + 0x10a60]      ; 00487e73
    PUSH EDI                            ; 00487e79
    MOV AL,byte ptr [ESI]               ; 00487e7a | DAT_005d2d28 | DAT_005d2d2a
        ;   Label: LAB_00487e7a
    MOV byte ptr [EDI],AL               ; 00487e7c
    CMP AL,0x0                          ; 00487e7e
    JZ 0x00487e92                       ; 00487e80
        ;   XREF to: 00487e92 (CONDITIONAL_JUMP)  ; LAB_00487e92
    MOV AL,byte ptr [ESI + 0x1]         ; 00487e82 | DAT_005d2d29 | DAT_005d2d2b
    ADD ESI,0x2                         ; 00487e85
    MOV byte ptr [EDI + 0x1],AL         ; 00487e88
    ADD EDI,0x2                         ; 00487e8b
    CMP AL,0x0                          ; 00487e8e
    JNZ 0x00487e7a                      ; 00487e90
        ;   XREF to: 00487e7a (CONDITIONAL_JUMP)  ; LAB_00487e7a
    POP EDI                             ; 00487e92
        ;   Label: LAB_00487e92
    MOV EAX,EBX                         ; 00487e93
    MOV dword ptr [EBX + 0x259c],0x3fc90fdb ; 00487e95
    ADD ESP,0x4                         ; 00487e9f
    POP EDI                             ; 00487ea2
    POP ESI                             ; 00487ea3
    POP EBX                             ; 00487ea4
    RET                                 ; 00487ea5

