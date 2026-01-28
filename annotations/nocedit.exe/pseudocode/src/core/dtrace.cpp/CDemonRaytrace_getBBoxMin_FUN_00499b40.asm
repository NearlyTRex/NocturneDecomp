; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40 (CDemonRaytrace *this_ptr,CVector3f *output_vector)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vector
;
; XREF[2]:
;   core_dskybox.cpp_renderSkyDome_FUN_004901f0 at 00490239
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 at 005e9edb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499b40
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
    MOV ECX,dword ptr [ESP + 0xc]       ; 00499b41
    MOV EAX,dword ptr [ESP + 0x8]       ; 00499b45
    ADD EAX,0x10                        ; 00499b49
    MOV EDX,dword ptr [EAX]             ; 00499b4c
    LEA EBX,[EAX + 0x4]                 ; 00499b4e
    MOV dword ptr [ECX],EDX             ; 00499b51
    LEA EDX,[ECX + 0x4]                 ; 00499b53
    MOV EBX,dword ptr [EBX]             ; 00499b56
    MOV dword ptr [EDX],EBX             ; 00499b58
    MOV EAX,dword ptr [EAX + 0x8]       ; 00499b5a
    MOV dword ptr [EDX + 0x4],EAX       ; 00499b5d
    MOV EAX,ECX                         ; 00499b60
    POP EBX                             ; 00499b62
    RET                                 ; 00499b63

