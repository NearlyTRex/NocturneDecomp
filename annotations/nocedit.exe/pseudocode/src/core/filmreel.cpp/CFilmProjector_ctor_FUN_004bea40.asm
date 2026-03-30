; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_factoryFuncFilmProjector_FUN_004bea00 at 004bea1d
;
; Referenced Globals:
;   TerminatedCString s_filmreel_kfm_00629b3c
;   TerminatedCString s_CFilmReel_00629b49
;   undefined4 s_FilmReel_00629b4a
;   undefined4 s_ilmReel_00629b4b
;   undefined4 s_lmReel_00629b4c
;   TerminatedCString s_none_00629b53
;   undefined4 s_one_00629b54
;   undefined4 s_ne_00629b55
;   undefined4 s_e_00629b56
;   CDemonActor_vtable g_CFilmProjectorVTable
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_0046f900
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bea40
        ;   Label: core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
    PUSH ESI                            ; 004bea41
    PUSH EDI                            ; 004bea42
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bea43
    PUSH EBX                            ; 004bea47
    CALL core_dest.cpp_CActorDestination_ctor_FUN_0046f900 ; 004bea48
        ;   XREF to: 0046f900 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_0046f900(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 004bea4d
    ADD EAX,0x1f4                       ; 004bea50
    PUSH EAX                            ; 004bea55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bea56
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bea5b
    LEA EBX,[EAX + 0xfffffe0c]          ; 004bea5e
    PUSH 0x629b3c                       ; 004bea64 | = "filmreel.kfm"
    LEA EAX,[EBX + 0x1f4]               ; 004bea69
    PUSH EAX                            ; 004bea6f
    MOV ESI,0x629b49                    ; 004bea70 | = "CFilmReel"
    MOV dword ptr [EBX + 0x154],0x65db04 ; 004bea75 | g_CFilmProjectorVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004bea7f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bea84
    LEA EDI,[EBX + 0x15c]               ; 004bea87
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004bea8d
    PUSH EDI                            ; 004bea97
    MOV AL,byte ptr [ESI]               ; 004bea98 | = "CFilmReel" | s_ilmReel_00629b4b
        ;   Label: LAB_004bea98
    MOV byte ptr [EDI],AL               ; 004bea9a
    CMP AL,0x0                          ; 004bea9c
    JZ 0x004beab0                       ; 004bea9e
        ;   XREF to: 004beab0 (CONDITIONAL_JUMP)  ; LAB_004beab0
    MOV AL,byte ptr [ESI + 0x1]         ; 004beaa0 | s_FilmReel_00629b4a | s_lmReel_00629b4c
    ADD ESI,0x2                         ; 004beaa3
    MOV byte ptr [EDI + 0x1],AL         ; 004beaa6
    ADD EDI,0x2                         ; 004beaa9
    CMP AL,0x0                          ; 004beaac
    JNZ 0x004bea98                      ; 004beaae
        ;   XREF to: 004bea98 (CONDITIONAL_JUMP)  ; LAB_004bea98
    POP EDI                             ; 004beab0
        ;   Label: LAB_004beab0
    MOV ESI,0x629b53                    ; 004beab1 | = "none"
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004beab6
    LEA EDI,[EBX + 0x374]               ; 004beac0
    MOV dword ptr [EBX + 0x370],0x0     ; 004beac6
    PUSH EDI                            ; 004bead0
    MOV AL,byte ptr [ESI]               ; 004bead1 | = "none" | s_ne_00629b55
        ;   Label: LAB_004bead1
    MOV byte ptr [EDI],AL               ; 004bead3
    CMP AL,0x0                          ; 004bead5
    JZ 0x004beae9                       ; 004bead7
        ;   XREF to: 004beae9 (CONDITIONAL_JUMP)  ; LAB_004beae9
    MOV AL,byte ptr [ESI + 0x1]         ; 004bead9 | s_one_00629b54 | s_e_00629b56
    ADD ESI,0x2                         ; 004beadc
    MOV byte ptr [EDI + 0x1],AL         ; 004beadf
    ADD EDI,0x2                         ; 004beae2
    CMP AL,0x0                          ; 004beae5
    JNZ 0x004bead1                      ; 004beae7
        ;   XREF to: 004bead1 (CONDITIONAL_JUMP)  ; LAB_004bead1
    POP EDI                             ; 004beae9
        ;   Label: LAB_004beae9
    MOV EAX,EBX                         ; 004beaea
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004beaec
    POP EDI                             ; 004beaf6
    POP ESI                             ; 004beaf7
    POP EBX                             ; 004beaf8
    RET                                 ; 004beaf9

