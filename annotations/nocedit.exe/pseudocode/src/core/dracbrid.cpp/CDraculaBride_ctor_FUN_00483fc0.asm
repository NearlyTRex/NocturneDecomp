; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dracbrid.cpp_factoryFunc_FUN_00483f80 at 00483f9a
;
; Referenced Globals:
;   TerminatedCString s_nbride2_dfm_00621869
;   float FLOAT_0065cd70 = 50
;   float FLOAT_0065cd74 = 100
;   CEnemy_full_vtable g_CDraculaBrideVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00483fc0
        ;   Label: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00483fc1
    PUSH EBX                            ; 00483fc5
    PUSH ESI                            ; 00483fc6
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00483fc7
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00483fcc
    MOV EBX,EAX                         ; 00483fcf
    PUSH 0x621869                       ; 00483fd1 | = "nbride2.dfm"
    MOV ESI,EAX                         ; 00483fd6
    ADD EAX,0x158                       ; 00483fd8
    PUSH EAX                            ; 00483fdd
    MOV dword ptr [EAX + -0x4],0x65cd94 ; 00483fde | g_CDraculaBrideVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00483fe5
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f000000 ; 00483fea
    MOV dword ptr [EBX + 0x2de0],0x3f800000 ; 00483ff4
    MOV byte ptr [EBX + 0xbee0],0x0     ; 00483ffe
    MOV dword ptr [EBX + 0x243c],0x43070000 ; 00484005
    FLD float ptr [0x0065cd70]          ; 0048400f | FLOAT_0065cd70
    MOV dword ptr [EBX + 0xbf48],0x0    ; 00484015
    FLD float ptr [0x0065cd74]          ; 0048401f | FLOAT_0065cd74
    MOV dword ptr [EBX + 0xbf4c],0x0    ; 00484025
    LEA EAX,[EBX + 0xbf58]              ; 0048402f
    FXCH                                ; 00484035
    FSTP float ptr [EBX + 0x2de4]       ; 00484037
    FSTP float ptr [EBX + 0x2de8]       ; 0048403d
    MOV dword ptr [EAX + 0x8],0x0       ; 00484043
    ADD ESP,0x8                         ; 0048404a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048404d
    MOV dword ptr [EAX + 0x4],EDX       ; 00484050
    MOV EDX,dword ptr [EAX + 0x4]       ; 00484053
    MOV dword ptr [EAX],EDX             ; 00484056
    MOV dword ptr [EBX + 0xbf64],0x0    ; 00484058
    MOV EAX,EBX                         ; 00484062
    MOV dword ptr [EBX + 0xbf44],0x1    ; 00484064
    LEA EDX,[EBX + 0x78]                ; 0048406e
    POP EBX                             ; 00484071
    ADD EAX,0x4                         ; 00484072
        ;   Label: LAB_00484072
    MOV dword ptr [EAX + 0xbf68],0x0    ; 00484075
    CMP EAX,EDX                         ; 0048407f
    JNZ 0x00484072                      ; 00484081
        ;   XREF to: 00484072 (CONDITIONAL_JUMP)  ; LAB_00484072
    MOV dword ptr [ESI + 0xbf68],0x0    ; 00484083
    MOV dword ptr [ESI + 0xbfe8],0x0    ; 0048408d
    MOV dword ptr [ESI + 0xbf54],0x0    ; 00484097
    MOV EAX,ESI                         ; 004840a1
    MOV dword ptr [ESI + 0xbfe4],0x0    ; 004840a3
    POP ESI                             ; 004840ad
    RET                                 ; 004840ae

