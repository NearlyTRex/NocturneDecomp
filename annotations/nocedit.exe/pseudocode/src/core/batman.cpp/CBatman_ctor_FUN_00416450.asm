; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBatman * core_batman.cpp_CBatman_ctor_FUN_00416450(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_FUN_00416410 at 0041642a
;
; Referenced Globals:
;   TerminatedCString s_batman_dfm_006156e0
;   TerminatedCString s_none_006156eb
;   undefined4 s_one_006156ec
;   undefined4 s_ne_006156ed
;   undefined4 s_e_006156ee
;   undefined4 DAT_0065a770
;   undefined4 PTR_FUN_0065a771+3
;   CDemonActor_vtable g_CBatmanVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416450
        ;   Label: core_batman.cpp_CBatman_ctor_FUN_00416450
    PUSH ESI                            ; 00416451
    PUSH EDI                            ; 00416452
    MOV EDX,dword ptr [ESP + 0x10]      ; 00416453
    PUSH EDX                            ; 00416457
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00416458 | CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041645d
    MOV EBX,EAX                         ; 00416460
    PUSH 0x6156e0                       ; 00416462 | = "batman.dfm" | s_batman_dfm_006156e0 = batman.dfm
    ADD EAX,0x158                       ; 00416467
    MOV ESI,0x6156eb                    ; 0041646c | = "none" | s_none_006156eb = none
    PUSH EAX                            ; 00416471
    MOV dword ptr [EAX + -0x4],0x65a784 ; 00416472 | CDemonActor_vtable g_CBatmanVTable
    LEA EDI,[EBX + 0xbebc]              ; 00416479
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0041647f | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    FLD float ptr [0x0065a770]          ; 00416484 | DAT_0065a770
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 0041648a
    FLD float ptr [0x0065a774]          ; 00416494 | PTR_FUN_0065a771+3
    MOV dword ptr [EBX + 0x2de0],0x40000000 ; 0041649a
    ADD ESP,0x8                         ; 004164a4
    FXCH                                ; 004164a7
    FSTP float ptr [EBX + 0x2de4]       ; 004164a9
    FSTP float ptr [EBX + 0x2de8]       ; 004164af
    PUSH EDI                            ; 004164b5
    MOV AL,byte ptr [ESI]               ; 004164b6 | = "none" | s_none_006156eb = none
        ;   Label: LAB_004164b6
    MOV byte ptr [EDI],AL               ; 004164b8
    CMP AL,0x0                          ; 004164ba
    JZ 0x004164ce                       ; 004164bc | LAB_004164ce
        ;   XREF to: 004164ce (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004164be | s_one_006156ec
    ADD ESI,0x2                         ; 004164c1
    MOV byte ptr [EDI + 0x1],AL         ; 004164c4
    ADD EDI,0x2                         ; 004164c7
    CMP AL,0x0                          ; 004164ca
    JNZ 0x004164b6                      ; 004164cc | LAB_004164b6
        ;   XREF to: 004164b6 (CONDITIONAL_JUMP)
    POP EDI                             ; 004164ce
        ;   Label: LAB_004164ce
    MOV dword ptr [EBX + 0xbf58],0x0    ; 004164cf
    LEA EAX,[EBX + 0xbf60]              ; 004164d9
    MOV dword ptr [EBX + 0xbf5c],0x0    ; 004164df
    MOV dword ptr [EAX + 0x8],0x0       ; 004164e9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004164f0
    MOV dword ptr [EAX + 0x4],EDX       ; 004164f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004164f6
    MOV dword ptr [EAX],EDX             ; 004164f9
    MOV EAX,EBX                         ; 004164fb
    POP EDI                             ; 004164fd
    POP ESI                             ; 004164fe
    POP EBX                             ; 004164ff
    RET                                 ; 00416500

