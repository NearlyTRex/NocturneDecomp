; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00481c00 at 00481c13
;
; Referenced Globals:
;   TerminatedCString s_filmreel_kfm_00580f8c
;   TerminatedCString s_movie3_00580f99
;   undefined4 s_ovie3_00580f99+1
;   undefined4 s_vie3_00580f99+2
;   undefined4 s_ie3_00580f99+3
;   CDemonActor_vtable g_CFilmReelVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481c30
        ;   Label: core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30
    PUSH ESI                            ; 00481c31
    PUSH EDI                            ; 00481c32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481c33
    PUSH EBX                            ; 00481c37
    CALL core_actor.cpp_FUN_00409d30    ; 00481c38
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00481c3d
    ADD EAX,0x150                       ; 00481c40
    PUSH EAX                            ; 00481c45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00481c46
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00481c4b
    LEA EBX,[EAX + 0xfffffeb0]          ; 00481c4e
    PUSH 0x580f8c                       ; 00481c54 | = "filmreel.kfm"
    LEA EAX,[EBX + 0x150]               ; 00481c59
    PUSH EAX                            ; 00481c5f
    MOV dword ptr [EBX + 0x14c],0x59cf84 ; 00481c60 | g_CFilmReelVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00481c6a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00481c6f
    MOV ESI,0x580f99                    ; 00481c72 | = "movie3"
    LEA EDI,[EBX + 0x2d0]               ; 00481c77
    PUSH EDI                            ; 00481c7d
    MOV AL,byte ptr [ESI]               ; 00481c7e | = "movie3" | s_vie3_00580f99+2
        ;   Label: LAB_00481c7e
    MOV byte ptr [EDI],AL               ; 00481c80
    CMP AL,0x0                          ; 00481c82
    JZ 0x00481c96                       ; 00481c84
        ;   XREF to: 00481c96 (CONDITIONAL_JUMP)  ; LAB_00481c96
    MOV AL,byte ptr [ESI + 0x1]         ; 00481c86 | s_ovie3_00580f99+1 | s_ie3_00580f99+3
    ADD ESI,0x2                         ; 00481c89
    MOV byte ptr [EDI + 0x1],AL         ; 00481c8c
    ADD EDI,0x2                         ; 00481c8f
    CMP AL,0x0                          ; 00481c92
    JNZ 0x00481c7e                      ; 00481c94
        ;   XREF to: 00481c7e (CONDITIONAL_JUMP)  ; LAB_00481c7e
    POP EDI                             ; 00481c96
        ;   Label: LAB_00481c96
    MOV EAX,EBX                         ; 00481c97
    POP EDI                             ; 00481c99
    POP ESI                             ; 00481c9a
    POP EBX                             ; 00481c9b
    RET                                 ; 00481c9c

