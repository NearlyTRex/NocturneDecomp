; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_batman_cpp_CBatman_ctor_FUN_004133e0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_batman.dfm_00578a97
;   TerminatedCString s_none_00578aa2
;   undefined4 s_one_00578aa2+1
;   undefined4 s_ne_00578aa2+2
;   undefined4 s_e_00578aa2+3
;   undefined4 DAT_0059a150
;   undefined4 DAT_0059a154
;   undefined1* PTR_core_batman.cpp_CBatman_setup_FUN_004134a0_0059a164 = 004134a0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004133e0
        ;   Label: core_batman.cpp_CBatman_ctor_FUN_004133e0
    PUSH ESI                            ; 004133e1
    PUSH EDI                            ; 004133e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004133e3
    PUSH EDX                            ; 004133e7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 004133e8
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 004133ed
    MOV EBX,EAX                         ; 004133f0
    PUSH 0x578a97                       ; 004133f2 | = "batman.dfm"
    ADD EAX,0x150                       ; 004133f7
    MOV ESI,0x578aa2                    ; 004133fc | = "none"
    PUSH EAX                            ; 00413401
    MOV dword ptr [EAX + -0x4],0x59a164 ; 00413402 | PTR_core_batman.cpp_CBatman_setup_FUN_004134a0_0059a164
    LEA EDI,[EBX + 0xbd24]              ; 00413409
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0041340f
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    FLD float ptr [0x0059a150]          ; 00413414 | DAT_0059a150
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 0041341a
    FLD float ptr [0x0059a154]          ; 00413424 | DAT_0059a154
    MOV dword ptr [EBX + 0x2dd8],0x40000000 ; 0041342a
    ADD ESP,0x8                         ; 00413434
    FXCH                                ; 00413437
    FSTP float ptr [EBX + 0x2ddc]       ; 00413439
    FSTP float ptr [EBX + 0x2de0]       ; 0041343f
    PUSH EDI                            ; 00413445
    MOV AL,byte ptr [ESI]               ; 00413446 | = "none" | s_ne_00578aa2+2
        ;   Label: LAB_00413446
    MOV byte ptr [EDI],AL               ; 00413448
    CMP AL,0x0                          ; 0041344a
    JZ 0x0041345e                       ; 0041344c
        ;   XREF to: 0041345e (CONDITIONAL_JUMP)  ; LAB_0041345e
    MOV AL,byte ptr [ESI + 0x1]         ; 0041344e | s_one_00578aa2+1 | s_e_00578aa2+3
    ADD ESI,0x2                         ; 00413451
    MOV byte ptr [EDI + 0x1],AL         ; 00413454
    ADD EDI,0x2                         ; 00413457
    CMP AL,0x0                          ; 0041345a
    JNZ 0x00413446                      ; 0041345c
        ;   XREF to: 00413446 (CONDITIONAL_JUMP)  ; LAB_00413446
    POP EDI                             ; 0041345e
        ;   Label: LAB_0041345e
    MOV dword ptr [EBX + 0xbdc0],0x0    ; 0041345f
    LEA EAX,[EBX + 0xbdc8]              ; 00413469
    MOV dword ptr [EBX + 0xbdc4],0x0    ; 0041346f
    MOV dword ptr [EAX + 0x8],0x0       ; 00413479
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413480
    MOV dword ptr [EAX + 0x4],EDX       ; 00413483
    MOV EDX,dword ptr [EAX + 0x4]       ; 00413486
    MOV dword ptr [EAX],EDX             ; 00413489
    MOV EAX,EBX                         ; 0041348b
    POP EDI                             ; 0041348d
    POP ESI                             ; 0041348e
    POP EBX                             ; 0041348f
    RET                                 ; 00413490

