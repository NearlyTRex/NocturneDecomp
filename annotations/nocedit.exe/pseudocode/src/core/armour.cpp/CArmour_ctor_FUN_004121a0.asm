; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CArmour * core_armour.cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_armour.cpp_constructor_FUN_00412160 at 0041217a
;
; Referenced Globals:
;   TerminatedCString s_armour_dfm_00614dbb
;   TerminatedCString s_none_00614dc6
;   undefined4 s_one_00614dc7
;   undefined4 s_ne_00614dc8
;   undefined4 s_e_00614dc9
;   undefined4 DAT_00659d28
;   undefined4 PTR_FUN_00659d29+3
;   CDemonActor_vtable g_CArmourVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004121a0
        ;   Label: core_armour.cpp_CArmour_ctor_FUN_004121a0
    PUSH ESI                            ; 004121a1
    PUSH EDI                            ; 004121a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004121a3
    PUSH EDX                            ; 004121a7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004121a8
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004121ad
    PUSH 0x614dbb                       ; 004121b0 | = "armour.dfm"
    MOV EBX,EAX                         ; 004121b5
    LEA EDI,[EAX + 0x158]               ; 004121b7
    PUSH EDI                            ; 004121bd
    MOV ESI,0x614dc6                    ; 004121be | = "none"
    MOV dword ptr [EAX + 0x154],0x659d34 ; 004121c3 | g_CArmourVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004121cd
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00659d28]          ; 004121d2 | DAT_00659d28
    FLD float ptr [0x00659d2c]          ; 004121d8 | PTR_FUN_00659d29+3
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 004121de
    ADD ESP,0x8                         ; 004121e8
    MOV dword ptr [EBX + 0x2de0],0x40000000 ; 004121eb
    LEA EDI,[EBX + 0xbebc]              ; 004121f5
    FXCH                                ; 004121fb
    FSTP float ptr [EBX + 0x2de4]       ; 004121fd
    FSTP float ptr [EBX + 0x2de8]       ; 00412203
    PUSH EDI                            ; 00412209
    MOV AL,byte ptr [ESI]               ; 0041220a | = "none" | s_ne_00614dc8
        ;   Label: LAB_0041220a
    MOV byte ptr [EDI],AL               ; 0041220c
    CMP AL,0x0                          ; 0041220e
    JZ 0x00412222                       ; 00412210
        ;   XREF to: 00412222 (CONDITIONAL_JUMP)  ; LAB_00412222
    MOV AL,byte ptr [ESI + 0x1]         ; 00412212 | s_one_00614dc7 | s_e_00614dc9
    ADD ESI,0x2                         ; 00412215
    MOV byte ptr [EDI + 0x1],AL         ; 00412218
    ADD EDI,0x2                         ; 0041221b
    CMP AL,0x0                          ; 0041221e
    JNZ 0x0041220a                      ; 00412220
        ;   XREF to: 0041220a (CONDITIONAL_JUMP)  ; LAB_0041220a
    POP EDI                             ; 00412222
        ;   Label: LAB_00412222
    MOV EAX,EBX                         ; 00412223
    MOV dword ptr [EBX + 0x2610],0x2    ; 00412225
    POP EDI                             ; 0041222f
    POP ESI                             ; 00412230
    POP EBX                             ; 00412231
    RET                                 ; 00412232

