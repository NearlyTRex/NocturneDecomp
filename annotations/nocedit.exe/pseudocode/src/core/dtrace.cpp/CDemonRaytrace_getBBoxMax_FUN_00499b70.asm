; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace * this_ptr, CVector3f * output_vector)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vector
;
; XREF[2]:
;   core_dskybox.cpp_renderSkyDome_FUN_004901f0 at 0049024b
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 at 005e9eed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499b70
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
    MOV ECX,dword ptr [ESP + 0xc]       ; 00499b71
    MOV EAX,dword ptr [ESP + 0x8]       ; 00499b75
    ADD EAX,0x1c                        ; 00499b79
    MOV EDX,dword ptr [EAX]             ; 00499b7c
    LEA EBX,[EAX + 0x4]                 ; 00499b7e
    MOV dword ptr [ECX],EDX             ; 00499b81
    LEA EDX,[ECX + 0x4]                 ; 00499b83
    MOV EBX,dword ptr [EBX]             ; 00499b86
    MOV dword ptr [EDX],EBX             ; 00499b88
    MOV EAX,dword ptr [EAX + 0x8]       ; 00499b8a
    MOV dword ptr [EDX + 0x4],EAX       ; 00499b8d
    MOV EAX,ECX                         ; 00499b90
    POP EBX                             ; 00499b92
    RET                                 ; 00499b93

