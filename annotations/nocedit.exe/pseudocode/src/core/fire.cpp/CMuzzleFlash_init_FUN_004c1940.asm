; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_004c1940(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 at 004c7a9f
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1940
        ;   Label: core_fire.cpp_CMuzzleFlash_init_FUN_004c1940
    PUSH ESI                            ; 004c1941
    PUSH EDI                            ; 004c1942
    SUB ESP,0x18                        ; 004c1943
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c1946
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004c194a
    PUSH ESI                            ; 004c194e
    LEA EBX,[EDI + 0x1c]                ; 004c194f
    PUSH EBX                            ; 004c1952
    CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310 ; 004c1953
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
    ADD ESP,0x8                         ; 004c1958
    PUSH 0x41000000                     ; 004c195b
    MOV dword ptr [EBX + 0x3c],0x8000   ; 004c1960
    PUSH EBX                            ; 004c1967
    MOV byte ptr [EBX + 0x1c],0x20      ; 004c1968
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 004c196c
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004c1971
    PUSH EBX                            ; 004c1974
    MOV EDX,dword ptr [0x006810c8]      ; 004c1975 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c197b | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 004c197c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110 ; 004c1983
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004c1988
    XOR ECX,ECX                         ; 004c198b
    LEA EAX,[EDI + 0x4]                 ; 004c198d
    MOV dword ptr [ESP],ECX             ; 004c1990
    MOV dword ptr [ESP + 0x4],ECX       ; 004c1993
    MOV dword ptr [ESP + 0x8],ECX       ; 004c1997
    CMP EAX,ESI                         ; 004c199b
    JZ 0x004c19af                       ; 004c199d
        ;   XREF to: 004c19af (CONDITIONAL_JUMP)  ; LAB_004c19af
    MOV EDX,dword ptr [ESI]             ; 004c199f
    MOV dword ptr [EAX],EDX             ; 004c19a1
    MOV EDX,dword ptr [ESI + 0x4]       ; 004c19a3
    MOV dword ptr [EAX + 0x4],EDX       ; 004c19a6
    MOV EDX,dword ptr [ESI + 0x8]       ; 004c19a9
    MOV dword ptr [EAX + 0x8],EDX       ; 004c19ac
    LEA EAX,[ESP + 0xc]                 ; 004c19af
        ;   Label: LAB_004c19af
    PUSH EAX                            ; 004c19b3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c19b4
    PUSH EAX                            ; 004c19b8
    LEA EBX,[EDI + 0x10]                ; 004c19b9
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 004c19bc
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c19c1
    CMP EBX,EAX                         ; 004c19c4
    JNZ 0x004c19d5                      ; 004c19c6
        ;   XREF to: 004c19d5 (CONDITIONAL_JUMP)  ; LAB_004c19d5
    MOV dword ptr [EDI],0x2             ; 004c19c8
    ADD ESP,0x18                        ; 004c19ce
    POP EDI                             ; 004c19d1
    POP ESI                             ; 004c19d2
    POP EBX                             ; 004c19d3
    RET                                 ; 004c19d4
    MOV EDX,dword ptr [EAX]             ; 004c19d5
        ;   Label: LAB_004c19d5
    MOV dword ptr [EBX],EDX             ; 004c19d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c19d9
    MOV dword ptr [EBX + 0x4],EDX       ; 004c19dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c19df
    MOV dword ptr [EBX + 0x8],EDX       ; 004c19e2
    MOV dword ptr [EDI],0x2             ; 004c19e5
    ADD ESP,0x18                        ; 004c19eb
    POP EDI                             ; 004c19ee
    POP ESI                             ; 004c19ef
    POP EBX                             ; 004c19f0
    RET                                 ; 004c19f1

