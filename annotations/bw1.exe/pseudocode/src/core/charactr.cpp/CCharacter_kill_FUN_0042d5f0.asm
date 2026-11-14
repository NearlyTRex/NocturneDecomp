; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_kill_FUN_0042d5f0(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   damage_type
; CVector3f *      Stack[0xc]:4   damage_direction
; float            Stack[0x10]:4   impact_force
;
; XREF[1]:
;   core_hero.cpp_CHero_kill_FUN_004ec540 at 004ec55d
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d5f0
        ;   Label: core_charactr.cpp_CCharacter_kill_FUN_0042d5f0
    PUSH ESI                            ; 0042d5f1
    SUB ESP,0x3c                        ; 0042d5f2
    MOV EBX,dword ptr [ESP + 0x48]      ; 0042d5f5
    MOV ESI,dword ptr [ESP + 0x50]      ; 0042d5f9
    PUSH EBX                            ; 0042d5fd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d5fe
    CALL dword ptr [EAX + 0x10c]        ; 0042d604
    ADD ESP,0x4                         ; 0042d60a
    TEST EAX,EAX                        ; 0042d60d
    JLE 0x0042d617                      ; 0042d60f
        ;   XREF to: 0042d617 (CONDITIONAL_JUMP)  ; LAB_0042d617
    ADD ESP,0x3c                        ; 0042d611
    POP ESI                             ; 0042d614
    POP EBX                             ; 0042d615
    RET                                 ; 0042d616
    MOV EDX,dword ptr [EBX + 0xb9e4]    ; 0042d617
        ;   Label: LAB_0042d617
    PUSH EDX                            ; 0042d61d
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0042d61e
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0042d623
    MOV EAX,ESP                         ; 0042d626
    PUSH EAX                            ; 0042d628
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0042d629
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042d62e
    MOV ECX,0x461c3c00                  ; 0042d631
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d636
    MOV dword ptr [ESP + 0x4],ECX       ; 0042d63a
    MOV dword ptr [ESP + 0x30],EAX      ; 0042d63e
    TEST ESI,ESI                        ; 0042d642
    JZ 0x0042d662                       ; 0042d644
        ;   XREF to: 0042d662 (CONDITIONAL_JUMP)  ; LAB_0042d662
    LEA EAX,[ESP + 0xc]                 ; 0042d646
    CMP EAX,ESI                         ; 0042d64a
    JZ 0x0042d662                       ; 0042d64c
        ;   XREF to: 0042d662 (CONDITIONAL_JUMP)  ; LAB_0042d662
    MOV EAX,dword ptr [ESI]             ; 0042d64e
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d650
    MOV EAX,dword ptr [ESI + 0x4]       ; 0042d654
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d657
    MOV EAX,dword ptr [ESI + 0x8]       ; 0042d65b
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d65e
    FLD float ptr [ESP + 0x54]          ; 0042d662
        ;   Label: LAB_0042d662
    FLDZ                                ; 0042d666
    FCOMPP                              ; 0042d668
    FNSTSW AX                           ; 0042d66a
    SAHF                                ; 0042d66c
    JA 0x0042d677                       ; 0042d66d
        ;   XREF to: 0042d677 (CONDITIONAL_JUMP)  ; LAB_0042d677
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042d66f
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d673
    MOV ESI,ESP                         ; 0042d677
        ;   Label: LAB_0042d677
    PUSH ESI                            ; 0042d679
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d67a
    PUSH EBX                            ; 0042d680
    CALL dword ptr [EAX + 0x108]        ; 0042d681
    ADD ESP,0x8                         ; 0042d687
    PUSH EBX                            ; 0042d68a
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 0042d68b
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042d690
    ADD ESP,0x3c                        ; 0042d693
    POP ESI                             ; 0042d696
    POP EBX                             ; 0042d697
    RET                                 ; 0042d698

