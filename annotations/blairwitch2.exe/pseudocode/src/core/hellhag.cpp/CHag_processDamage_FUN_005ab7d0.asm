; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hellhag_cpp_CHag_processDamage_FUN_005ab7d0(CHag *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_Death_005f0c8d+1
;   undefined4 DAT_005f0c96
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_muzzle.cpp_FUN_0059d8e0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab7d0
        ;   Label: core_hellhag.cpp_CHag_processDamage_FUN_005ab7d0
    PUSH ESI                            ; 005ab7d1
    SUB ESP,0x8                         ; 005ab7d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ab7d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 005ab7d9
    FLD float ptr [EBX + 0x11430]       ; 005ab7dd
    FLDZ                                ; 005ab7e3
    FCOMPP                              ; 005ab7e5
    FNSTSW AX                           ; 005ab7e7
    SAHF                                ; 005ab7e9
    JNC 0x005ab84c                      ; 005ab7ea
        ;   XREF to: 005ab84c (CONDITIONAL_JUMP)  ; LAB_005ab84c
    FLD float ptr [ESI + 0x4]           ; 005ab7ec
        ;   Label: LAB_005ab7ec
    FSUBR float ptr [EBX + 0x25a8]      ; 005ab7ef
    FST float ptr [EBX + 0x25a8]        ; 005ab7f5
    FLDZ                                ; 005ab7fb
    FCOMPP                              ; 005ab7fd
    FNSTSW AX                           ; 005ab7ff
    SAHF                                ; 005ab801
    JC 0x005ab85e                       ; 005ab802
        ;   XREF to: 005ab85e (CONDITIONAL_JUMP)  ; LAB_005ab85e
    CMP byte ptr [EBX + 0x11543],0x0    ; 005ab804
    JZ 0x005ab828                       ; 005ab80b
        ;   XREF to: 005ab828 (CONDITIONAL_JUMP)  ; LAB_005ab828
    LEA EAX,[EBX + 0x20]                ; 005ab80d
    PUSH EAX                            ; 005ab810
    LEA EAX,[EBX + 0x11543]             ; 005ab811
    PUSH EAX                            ; 005ab817
    PUSH EBX                            ; 005ab818
    MOV ESI,dword ptr [0x0061c068]      ; 005ab819 | DAT_0061c068
    PUSH ESI                            ; 005ab81f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005ab820
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ab825
    PUSH 0x5f0c8e                       ; 005ab828 | s_Death_005f0c8d+1
        ;   Label: LAB_005ab828
    ADD EBX,0x10af8                     ; 005ab82d
    PUSH EBX                            ; 005ab833
    MOV dword ptr [EBX + 0xffff1ab0],0x0 ; 005ab834
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005ab83e
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ab843
    ADD ESP,0x8                         ; 005ab846
        ;   Label: LAB_005ab846
    POP ESI                             ; 005ab849
    POP EBX                             ; 005ab84a
    RET                                 ; 005ab84b
    FLD float ptr [ESI + 0x4]           ; 005ab84c
        ;   Label: LAB_005ab84c
    FLD ST0                             ; 005ab84f
    FMUL double ptr [0x005f0c96]        ; 005ab851 | DAT_005f0c96
    FSTP ST1                            ; 005ab857
    FSTP float ptr [ESI + 0x4]          ; 005ab859
    JMP 0x005ab7ec                      ; 005ab85c
        ;   XREF to: 005ab7ec (UNCONDITIONAL_JUMP)  ; LAB_005ab7ec
    PUSH ESI                            ; 005ab85e
        ;   Label: LAB_005ab85e
    PUSH EBX                            ; 005ab85f
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005ab860
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    MOV EAX,dword ptr [ESI + 0x38]      ; 005ab865
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005ab868
    ADD ESP,0x8                         ; 005ab86e
    CMP EAX,EDX                         ; 005ab871
    JNZ 0x005ab881                      ; 005ab873
        ;   XREF to: 005ab881 (CONDITIONAL_JUMP)  ; LAB_005ab881
    MOV EAX,dword ptr [EBX + 0x11378]   ; 005ab875
    MOV dword ptr [EBX + 0x10a7c],EAX   ; 005ab87b
    MOV AH,byte ptr [EBX + 0x11444]     ; 005ab881
        ;   Label: LAB_005ab881
    MOV dword ptr [EBX + 0x11404],0x0   ; 005ab887
    TEST AH,AH                          ; 005ab891
    JZ 0x005ab846                       ; 005ab893
        ;   XREF to: 005ab846 (CONDITIONAL_JUMP)  ; LAB_005ab846
    MOV ECX,dword ptr [EBX + 0x1184c]   ; 005ab895
    PUSH ECX                            ; 005ab89b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005ab89c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 005ab8a1
    TEST EAX,EAX                        ; 005ab8a4
    JNZ 0x005ab846                      ; 005ab8a6
        ;   XREF to: 005ab846 (CONDITIONAL_JUMP)  ; LAB_005ab846
    LEA ESI,[EBX + 0x11444]             ; 005ab8a8
    PUSH ESI                            ; 005ab8ae
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005ab8af
    PUSH EBX                            ; 005ab8b5
    CALL dword ptr [EAX + 0x34]         ; 005ab8b6
    ADD ESP,0x8                         ; 005ab8b9
    MOV dword ptr [EBX + 0x1184c],EAX   ; 005ab8bc
    ADD ESP,0x8                         ; 005ab8c2
    POP ESI                             ; 005ab8c5
    POP EBX                             ; 005ab8c6
    RET                                 ; 005ab8c7

