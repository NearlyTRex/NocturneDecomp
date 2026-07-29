; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; XREF[14]:
;   core_armour.cpp_FUN_0040fc10 at 0040fc1a
;   core_batcreat.cpp_FUN_004132a0 at 004132aa
;   core_batman.cpp_CBatman_getCollisionType_FUN_00414c40 at 00414c56
;   core_biggs.cpp_FUN_00415a10 at 00415a1a
;   core_boneguy.cpp_CBoneGuy_getCollisionType_FUN_0041a3e0 at 0041a3f6
;   core_dracbrid.cpp_FUN_0045a240 at 0045a256
;   core_gargoyle.cpp_FUN_004a88d0 at 004a88da
;   core_hotdemon.cpp_FUN_004b99b0 at 004b99ba
;   core_imp.cpp_FUN_004bcfb0 at 004bcfba
;   core_mobster.cpp_FUN_004dc920 at 004dc92a
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427da0
        ;   Label: core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
    PUSH ESI                            ; 00427da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00427da2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00427da6
    CMP dword ptr [ESI],0x2             ; 00427daa
    JNZ 0x00427db4                      ; 00427dad
        ;   XREF to: 00427db4 (CONDITIONAL_JUMP)  ; LAB_00427db4
    XOR EAX,EAX                         ; 00427daf
        ;   Label: LAB_00427daf
    POP ESI                             ; 00427db1
    POP EBX                             ; 00427db2
    RET                                 ; 00427db3
    PUSH EBX                            ; 00427db4
        ;   Label: LAB_00427db4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00427db5
    CALL dword ptr [EAX + 0x104]        ; 00427dbb
    ADD ESP,0x4                         ; 00427dc1
    CMP EAX,0x1                         ; 00427dc4
    JG 0x00427daf                       ; 00427dc7
        ;   XREF to: 00427daf (CONDITIONAL_JUMP)  ; LAB_00427daf
    MOV ECX,dword ptr [ESI]             ; 00427dc9
    CMP ECX,0x1                         ; 00427dcb
    JZ 0x00427e20                       ; 00427dce
        ;   XREF to: 00427e20 (CONDITIONAL_JUMP)  ; LAB_00427e20
    CMP ECX,0x3                         ; 00427dd0
    JZ 0x00427e20                       ; 00427dd3
        ;   XREF to: 00427e20 (CONDITIONAL_JUMP)  ; LAB_00427e20
    FLD float ptr [EBX + 0x2de8]        ; 00427dd5
    FMUL float ptr [EBX + 0x2614]       ; 00427ddb
    FSTP float ptr [ESI + 0x18]         ; 00427de1
    FLD float ptr [EBX + 0x2de4]        ; 00427de4
    FMUL float ptr [EBX + 0x2614]       ; 00427dea
    FLD float ptr [ESI + 0x18]          ; 00427df0
    FXCH                                ; 00427df3
    FSTP float ptr [ESI + 0x14]         ; 00427df5
    FCOMP float ptr [ESI + 0x14]        ; 00427df8
    FNSTSW AX                           ; 00427dfb
    SAHF                                ; 00427dfd
    JNC 0x00427e09                      ; 00427dfe
        ;   XREF to: 00427e09 (CONDITIONAL_JUMP)  ; LAB_00427e09
    MOV EAX,dword ptr [EBX + 0x2398]    ; 00427e00
    MOV dword ptr [ESI + 0x18],EAX      ; 00427e06
    FLD float ptr [EBX + 0x2dd8]        ; 00427e09
        ;   Label: LAB_00427e09
    FMUL float ptr [EBX + 0x2614]       ; 00427e0f
    MOV EAX,0x2                         ; 00427e15
    FSTP float ptr [ESI + 0x1c]         ; 00427e1a
    POP ESI                             ; 00427e1d
    POP EBX                             ; 00427e1e
    RET                                 ; 00427e1f
    ADD EBX,0x150                       ; 00427e20
        ;   Label: LAB_00427e20
    MOV EAX,0x1                         ; 00427e26
    MOV dword ptr [ESI + 0x20],EBX      ; 00427e2b
    POP ESI                             ; 00427e2e
    POP EBX                             ; 00427e2f
    RET                                 ; 00427e30

