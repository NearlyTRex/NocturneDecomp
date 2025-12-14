; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mobster.cpp_FUN_005251c0 at 005251dd
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e842d
;
; Referenced Globals:
;   TerminatedCString s_mobster1_dfm_006396ca
;   TerminatedCString s_none_006396d7
;   undefined4 DAT_006396d8
;   undefined4 DAT_006396d9
;   undefined4 DAT_006396da
;   undefined4 DAT_00661780
;   undefined4 DAT_00661784
;   CDemonActor_vtable PTR_core_mobster.cpp_FUN_00525340_00661794
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525200
        ;   Label: core_mobster.cpp_CMobster_ctor_FUN_00525200
    PUSH ESI                            ; 00525201
    PUSH EDI                            ; 00525202
    MOV EDX,dword ptr [ESP + 0x10]      ; 00525203
    PUSH EDX                            ; 00525207
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00525208
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0052520d
    PUSH 0x6396ca                       ; 00525210 | = "mobster1.dfm"
    MOV EBX,EAX                         ; 00525215
    ADD EAX,0x158                       ; 00525217
    PUSH EAX                            ; 0052521c
    MOV dword ptr [EAX + -0x4],0x661794 ; 0052521d | PTR_core_mobster.cpp_FUN_00525340_00661794
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00525224
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00661780]          ; 00525229 | DAT_00661780
    ADD ESP,0x8                         ; 0052522f
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 00525232
    FLD float ptr [0x00661784]          ; 0052523c | DAT_00661784
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 00525242
    PUSH 0xff                           ; 0052524c
    FXCH                                ; 00525251
    FSTP float ptr [EBX + 0x2de4]       ; 00525253
    PUSH 0x0                            ; 00525259
    FSTP float ptr [EBX + 0x2de8]       ; 0052525b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00525261
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0xbec0],0x0    ; 00525266
    MOV dword ptr [EBX + 0xbec4],0x0    ; 00525270
    MOV dword ptr [EBX + 0xbec8],0x0    ; 0052527a
    MOV dword ptr [EBX + 0xbf8c],0x0    ; 00525284
    ADD ESP,0x8                         ; 0052528e
    MOV dword ptr [EBX + 0xbf90],0x0    ; 00525291
    PUSH 0x65                           ; 0052529b
    MOV dword ptr [EBX + 0xbeb0],0x42200000 ; 0052529d
    PUSH 0x62                           ; 005252a7
    MOV dword ptr [EBX + 0xbebc],EAX    ; 005252a9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005252af
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0xbed4],0x0    ; 005252b4
    MOV dword ptr [EBX + 0xbecc],0x0    ; 005252be
    MOV dword ptr [EBX + 0xbed8],0x0    ; 005252c8
    MOV dword ptr [EBX + 0xbedc],0x0    ; 005252d2
    MOV dword ptr [EBX + 0xbee0],0x0    ; 005252dc
    MOV ESI,0x6396d7                    ; 005252e6 | = "none"
    MOV dword ptr [EBX + 0xbee4],0x0    ; 005252eb
    ADD ESP,0x8                         ; 005252f5
    MOV dword ptr [EBX + 0xbee8],0x0    ; 005252f8
    LEA EDI,[EBX + 0xbeec]              ; 00525302
    MOV byte ptr [EBX + 0xbed0],AL      ; 00525308
    PUSH EDI                            ; 0052530e
    MOV AL,byte ptr [ESI]               ; 0052530f | = "none" | DAT_006396d9
        ;   Label: LAB_0052530f
    MOV byte ptr [EDI],AL               ; 00525311
    CMP AL,0x0                          ; 00525313
    JZ 0x00525327                       ; 00525315
        ;   XREF to: 00525327 (CONDITIONAL_JUMP)  ; LAB_00525327
    MOV AL,byte ptr [ESI + 0x1]         ; 00525317 | DAT_006396d8 | DAT_006396da
    ADD ESI,0x2                         ; 0052531a
    MOV byte ptr [EDI + 0x1],AL         ; 0052531d
    ADD EDI,0x2                         ; 00525320
    CMP AL,0x0                          ; 00525323
    JNZ 0x0052530f                      ; 00525325
        ;   XREF to: 0052530f (CONDITIONAL_JUMP)  ; LAB_0052530f
    POP EDI                             ; 00525327
        ;   Label: LAB_00525327
    MOV EAX,EBX                         ; 00525328
    MOV dword ptr [EBX + 0xbeb8],0x0    ; 0052532a
    POP EDI                             ; 00525334
    POP ESI                             ; 00525335
    POP EBX                             ; 00525336
    RET                                 ; 00525337

