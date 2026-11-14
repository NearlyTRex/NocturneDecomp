; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00423900(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   damage_type
; CVector3f *      Stack[0xc]:4   damage_direction
; float            Stack[0x10]:4   impact_force
;
; XREF[1]:
;   core_hero.cpp_CHero_kill_FUN_004d02b0 at 004d02cd
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423900
        ;   Label: core_charactr.cpp_CCharacter_kill_FUN_00423900
    PUSH ESI                            ; 00423901
    SUB ESP,0x3c                        ; 00423902
    MOV EBX,dword ptr [ESP + 0x48]      ; 00423905
    MOV ESI,dword ptr [ESP + 0x50]      ; 00423909
    PUSH EBX                            ; 0042390d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042390e
    CALL dword ptr [EAX + 0x114]        ; 00423914
    ADD ESP,0x4                         ; 0042391a
    TEST EAX,EAX                        ; 0042391d
    JLE 0x00423927                      ; 0042391f
        ;   XREF to: 00423927 (CONDITIONAL_JUMP)  ; LAB_00423927
    ADD ESP,0x3c                        ; 00423921
    POP ESI                             ; 00423924
    POP EBX                             ; 00423925
    RET                                 ; 00423926
    MOV EDX,dword ptr [EBX + 0x10220]   ; 00423927
        ;   Label: LAB_00423927
    PUSH EDX                            ; 0042392d
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0042392e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00423933
    MOV EAX,ESP                         ; 00423936
    PUSH EAX                            ; 00423938
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00423939
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042393e
    MOV ECX,0x461c3c00                  ; 00423941
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00423946
    MOV dword ptr [ESP + 0x4],ECX       ; 0042394a
    MOV dword ptr [ESP + 0x30],EAX      ; 0042394e
    TEST ESI,ESI                        ; 00423952
    JZ 0x00423972                       ; 00423954
        ;   XREF to: 00423972 (CONDITIONAL_JUMP)  ; LAB_00423972
    LEA EAX,[ESP + 0xc]                 ; 00423956
    CMP EAX,ESI                         ; 0042395a
    JZ 0x00423972                       ; 0042395c
        ;   XREF to: 00423972 (CONDITIONAL_JUMP)  ; LAB_00423972
    MOV EAX,dword ptr [ESI]             ; 0042395e
    MOV dword ptr [ESP + 0xc],EAX       ; 00423960
    MOV EAX,dword ptr [ESI + 0x4]       ; 00423964
    MOV dword ptr [ESP + 0x10],EAX      ; 00423967
    MOV EAX,dword ptr [ESI + 0x8]       ; 0042396b
    MOV dword ptr [ESP + 0x14],EAX      ; 0042396e
    FLD float ptr [ESP + 0x54]          ; 00423972
        ;   Label: LAB_00423972
    FLDZ                                ; 00423976
    FCOMPP                              ; 00423978
    FNSTSW AX                           ; 0042397a
    SAHF                                ; 0042397c
    JA 0x00423987                       ; 0042397d
        ;   XREF to: 00423987 (CONDITIONAL_JUMP)  ; LAB_00423987
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042397f
    MOV dword ptr [ESP + 0x18],EAX      ; 00423983
    MOV ESI,ESP                         ; 00423987
        ;   Label: LAB_00423987
    PUSH ESI                            ; 00423989
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042398a
    PUSH EBX                            ; 00423990
    CALL dword ptr [EAX + 0x110]        ; 00423991
    ADD ESP,0x8                         ; 00423997
    PUSH EBX                            ; 0042399a
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00 ; 0042399b
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004239a0
    ADD ESP,0x3c                        ; 004239a3
    POP ESI                             ; 004239a6
    POP EBX                             ; 004239a7
    RET                                 ; 004239a8

