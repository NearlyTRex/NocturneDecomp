; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10(undefined4 param_1)
;
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00481ee0 at 00481ef3
;
; Referenced Globals:
;   TerminatedCString s_filmreel_kfm_00580fc5
;   TerminatedCString s_CFilmReel_00580fd2
;   undefined4 s_FilmReel_00580fd2+1
;   undefined4 s_ilmReel_00580fd2+2
;   undefined4 s_lmReel_00580fd2+3
;   TerminatedCString s_none_00580fdc
;   undefined4 s_one_00580fdc+1
;   undefined4 s_ne_00580fdc+2
;   undefined4 s_e_00580fdc+3
;   undefined1* PTR_core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0_0059d064 = 00481fd0
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f10
        ;   Label: core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10
    PUSH ESI                            ; 00481f11
    PUSH EDI                            ; 00481f12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481f13
    PUSH EBX                            ; 00481f17
    CALL core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0 ; 00481f18
        ;   XREF to: 0044b7a0 (UNCONDITIONAL_CALL)  ; undefined core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0()
    ADD ESP,0x4                         ; 00481f1d
    ADD EAX,0x1ec                       ; 00481f20
    PUSH EAX                            ; 00481f25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00481f26
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 00481f2b
    LEA EBX,[EAX + 0xfffffe14]          ; 00481f2e
    PUSH 0x580fc5                       ; 00481f34 | = "filmreel.kfm"
    LEA EAX,[EBX + 0x1ec]               ; 00481f39
    PUSH EAX                            ; 00481f3f
    MOV ESI,0x580fd2                    ; 00481f40 | = "CFilmReel"
    MOV dword ptr [EBX + 0x14c],0x59d064 ; 00481f45 | PTR_core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0_0059d064
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00481f4f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 00481f54
    LEA EDI,[EBX + 0x154]               ; 00481f57
    MOV dword ptr [EBX + 0x3d0],0x0     ; 00481f5d
    PUSH EDI                            ; 00481f67
    MOV AL,byte ptr [ESI]               ; 00481f68 | = "CFilmReel" | s_ilmReel_00580fd2+2
        ;   Label: LAB_00481f68
    MOV byte ptr [EDI],AL               ; 00481f6a
    CMP AL,0x0                          ; 00481f6c
    JZ 0x00481f80                       ; 00481f6e
        ;   XREF to: 00481f80 (CONDITIONAL_JUMP)  ; LAB_00481f80
    MOV AL,byte ptr [ESI + 0x1]         ; 00481f70 | s_FilmReel_00580fd2+1 | s_lmReel_00580fd2+3
    ADD ESI,0x2                         ; 00481f73
    MOV byte ptr [EDI + 0x1],AL         ; 00481f76
    ADD EDI,0x2                         ; 00481f79
    CMP AL,0x0                          ; 00481f7c
    JNZ 0x00481f68                      ; 00481f7e
        ;   XREF to: 00481f68 (CONDITIONAL_JUMP)  ; LAB_00481f68
    POP EDI                             ; 00481f80
        ;   Label: LAB_00481f80
    MOV ESI,0x580fdc                    ; 00481f81 | = "none"
    MOV dword ptr [EBX + 0x3d4],0x0     ; 00481f86
    LEA EDI,[EBX + 0x36c]               ; 00481f90
    MOV dword ptr [EBX + 0x368],0x0     ; 00481f96
    PUSH EDI                            ; 00481fa0
    MOV AL,byte ptr [ESI]               ; 00481fa1 | = "none" | s_ne_00580fdc+2
        ;   Label: LAB_00481fa1
    MOV byte ptr [EDI],AL               ; 00481fa3
    CMP AL,0x0                          ; 00481fa5
    JZ 0x00481fb9                       ; 00481fa7
        ;   XREF to: 00481fb9 (CONDITIONAL_JUMP)  ; LAB_00481fb9
    MOV AL,byte ptr [ESI + 0x1]         ; 00481fa9 | s_one_00580fdc+1 | s_e_00580fdc+3
    ADD ESI,0x2                         ; 00481fac
    MOV byte ptr [EDI + 0x1],AL         ; 00481faf
    ADD EDI,0x2                         ; 00481fb2
    CMP AL,0x0                          ; 00481fb5
    JNZ 0x00481fa1                      ; 00481fb7
        ;   XREF to: 00481fa1 (CONDITIONAL_JUMP)  ; LAB_00481fa1
    POP EDI                             ; 00481fb9
        ;   Label: LAB_00481fb9
    MOV EAX,EBX                         ; 00481fba
    MOV dword ptr [EBX + 0x3d8],0x0     ; 00481fbc
    POP EDI                             ; 00481fc6
    POP ESI                             ; 00481fc7
    POP EBX                             ; 00481fc8
    RET                                 ; 00481fc9

