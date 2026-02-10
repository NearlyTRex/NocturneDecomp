; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00428e30 (CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   damage_type
; CVector3f *      Stack[0xc]:4   damage_direction
; float            Stack[0x10]:4   impact_force
; Local Variables:
; SDamageInfo      Stack[-0x40]:60  local_40
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f3af0 at 004f3b0d
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428e30
        ;   Label: core_charactr.cpp_CCharacter_kill_FUN_00428e30
    PUSH ESI                            ; 00428e31
    SUB ESP,0x3c                        ; 00428e32
    MOV EBX,dword ptr [ESP + 0x48]      ; 00428e35
    MOV ESI,dword ptr [ESP + 0x50]      ; 00428e39
    PUSH EBX                            ; 00428e3d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428e3e
    CALL dword ptr [EAX + 0x120]        ; 00428e44
    ADD ESP,0x4                         ; 00428e4a
    TEST EAX,EAX                        ; 00428e4d
    JLE 0x00428e57                      ; 00428e4f
        ;   XREF to: 00428e57 (CONDITIONAL_JUMP)  ; LAB_00428e57
    ADD ESP,0x3c                        ; 00428e51
    POP ESI                             ; 00428e54
    POP EBX                             ; 00428e55
    RET                                 ; 00428e56
    MOV EDX,dword ptr [EBX + 0xb7d4]    ; 00428e57
        ;   Label: LAB_00428e57
    PUSH EDX                            ; 00428e5d
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00428e5e
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00428e63
    MOV EAX,ESP                         ; 00428e66
    PUSH EAX                            ; 00428e68
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00428e69
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00428e6e
    MOV ECX,0x461c3c00                  ; 00428e71
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00428e76
    MOV dword ptr [ESP + 0x4],ECX       ; 00428e7a
    MOV dword ptr [ESP + 0x30],EAX      ; 00428e7e
    TEST ESI,ESI                        ; 00428e82
    JZ 0x00428ea2                       ; 00428e84
        ;   XREF to: 00428ea2 (CONDITIONAL_JUMP)  ; LAB_00428ea2
    LEA EAX,[ESP + 0xc]                 ; 00428e86
    CMP EAX,ESI                         ; 00428e8a
    JZ 0x00428ea2                       ; 00428e8c
        ;   XREF to: 00428ea2 (CONDITIONAL_JUMP)  ; LAB_00428ea2
    MOV EAX,dword ptr [ESI]             ; 00428e8e
    MOV dword ptr [ESP + 0xc],EAX       ; 00428e90
    MOV EAX,dword ptr [ESI + 0x4]       ; 00428e94
    MOV dword ptr [ESP + 0x10],EAX      ; 00428e97
    MOV EAX,dword ptr [ESI + 0x8]       ; 00428e9b
    MOV dword ptr [ESP + 0x14],EAX      ; 00428e9e
    FLD float ptr [ESP + 0x54]          ; 00428ea2
        ;   Label: LAB_00428ea2
    FLDZ                                ; 00428ea6
    FCOMPP                              ; 00428ea8
    FNSTSW AX                           ; 00428eaa
    SAHF                                ; 00428eac
    JA 0x00428eb7                       ; 00428ead
        ;   XREF to: 00428eb7 (CONDITIONAL_JUMP)  ; LAB_00428eb7
    MOV EAX,dword ptr [ESP + 0x54]      ; 00428eaf
    MOV dword ptr [ESP + 0x18],EAX      ; 00428eb3
    MOV ESI,ESP                         ; 00428eb7
        ;   Label: LAB_00428eb7
    PUSH ESI                            ; 00428eb9
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428eba
    PUSH EBX                            ; 00428ec0
    CALL dword ptr [EAX + 0x11c]        ; 00428ec1
    ADD ESP,0x8                         ; 00428ec7
    PUSH EBX                            ; 00428eca
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060 ; 00428ecb
        ;   XREF to: 0042d060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00428ed0
    ADD ESP,0x3c                        ; 00428ed3
    POP ESI                             ; 00428ed6
    POP EBX                             ; 00428ed7
    RET                                 ; 00428ed8

