; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004be6b0(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_factoryFuncFilmReel_FUN_004be670 at 004be68a
;
; Referenced Globals:
;   TerminatedCString s_filmreel_kfm_00629ac3
;   TerminatedCString s_movie3_00629ad0
;   undefined4 s_ovie3_00629ad1
;   undefined4 s_vie3_00629ad2
;   undefined4 s_ie3_00629ad3
;   CDemonActor_vtable g_CFilmReelVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be6b0
        ;   Label: core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0
    PUSH ESI                            ; 004be6b1
    PUSH EDI                            ; 004be6b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004be6b3
    PUSH EBX                            ; 004be6b7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004be6b8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004be6bd
    ADD EAX,0x158                       ; 004be6c0
    PUSH EAX                            ; 004be6c5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004be6c6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004be6cb
    LEA EBX,[EAX + 0xfffffea8]          ; 004be6ce
    PUSH 0x629ac3                       ; 004be6d4 | = "filmreel.kfm"
    LEA EAX,[EBX + 0x158]               ; 004be6d9
    PUSH EAX                            ; 004be6df
    MOV dword ptr [EBX + 0x154],0x65da14 ; 004be6e0 | g_CFilmReelVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004be6ea
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004be6ef
    MOV ESI,0x629ad0                    ; 004be6f2 | = "movie3"
    LEA EDI,[EBX + 0x2d8]               ; 004be6f7
    PUSH EDI                            ; 004be6fd
    MOV AL,byte ptr [ESI]               ; 004be6fe | = "movie3" | s_vie3_00629ad2
        ;   Label: LAB_004be6fe
    MOV byte ptr [EDI],AL               ; 004be700
    CMP AL,0x0                          ; 004be702
    JZ 0x004be716                       ; 004be704
        ;   XREF to: 004be716 (CONDITIONAL_JUMP)  ; LAB_004be716
    MOV AL,byte ptr [ESI + 0x1]         ; 004be706 | s_ovie3_00629ad1 | s_ie3_00629ad3
    ADD ESI,0x2                         ; 004be709
    MOV byte ptr [EDI + 0x1],AL         ; 004be70c
    ADD EDI,0x2                         ; 004be70f
    CMP AL,0x0                          ; 004be712
    JNZ 0x004be6fe                      ; 004be714
        ;   XREF to: 004be6fe (CONDITIONAL_JUMP)  ; LAB_004be6fe
    POP EDI                             ; 004be716
        ;   Label: LAB_004be716
    MOV EAX,EBX                         ; 004be717
    POP EDI                             ; 004be719
    POP ESI                             ; 004be71a
    POP EBX                             ; 004be71b
    RET                                 ; 004be71c

