; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00462940(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drone.cpp_FUN_00462910 at 00462923
;
; Referenced Globals:
;   TerminatedCString s_drone_dfm_0057de8b
;   float FLOAT_0059c6fc = 50
;   float FLOAT_0059c700 = 100
;   CEnemy_full_vtable g_CDroneVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462940
        ;   Label: core_drone.cpp_CDrone_ctor_FUN_00462940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462941
    PUSH EDX                            ; 00462945
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00462946
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0046294b
    PUSH 0x57de8b                       ; 0046294e | = "drone.dfm"
    MOV EBX,EAX                         ; 00462953
    ADD EAX,0x150                       ; 00462955
    PUSH EAX                            ; 0046295a
    MOV dword ptr [EAX + -0x4],0x59c714 ; 0046295b | g_CDroneVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00462962
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2dd4],0x3f400000 ; 00462967
    FLD float ptr [0x0059c6fc]          ; 00462971 | FLOAT_0059c6fc
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 00462977
    FLD float ptr [0x0059c700]          ; 00462981 | FLOAT_0059c700
    MOV dword ptr [EBX + 0x2608],0x1    ; 00462987
    ADD ESP,0x8                         ; 00462991
    MOV dword ptr [EBX + 0x2434],0x42960000 ; 00462994
    MOV EAX,EBX                         ; 0046299e
    FXCH                                ; 004629a0
    FSTP float ptr [EBX + 0x2ddc]       ; 004629a2
    FSTP float ptr [EBX + 0x2de0]       ; 004629a8
    POP EBX                             ; 004629ae
    RET                                 ; 004629af

