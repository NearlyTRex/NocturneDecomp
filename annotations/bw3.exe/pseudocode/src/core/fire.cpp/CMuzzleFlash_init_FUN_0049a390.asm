; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_0049a390(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 at 004a248f
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_dirmat.cpp_FUN_0045b9b0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a390
        ;   Label: core_fire.cpp_CMuzzleFlash_init_FUN_0049a390
    PUSH ESI                            ; 0049a391
    PUSH EDI                            ; 0049a392
    PUSH EBP                            ; 0049a393
    SUB ESP,0x18                        ; 0049a394
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0049a397
    MOV ESI,dword ptr [ESP + 0x30]      ; 0049a39b
    PUSH ESI                            ; 0049a39f
    LEA EBX,[EBP + 0x1c]                ; 0049a3a0
    PUSH EBX                            ; 0049a3a3
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 0049a3a4
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0049a3a9
    PUSH 0x41000000                     ; 0049a3ac
    MOV dword ptr [EBX + 0x3c],0x8000   ; 0049a3b1
    PUSH EBX                            ; 0049a3b8
    MOV byte ptr [EBX + 0x1c],0x20      ; 0049a3b9
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0049a3bd
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0049a3c2
    PUSH EBX                            ; 0049a3c5
    MOV EDX,dword ptr [0x00603b28]      ; 0049a3c6 | g_CDemonSetPtr
    PUSH EDX                            ; 0049a3cc | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 0049a3cd
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 0049a3d4
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    LEA EAX,[EBP + 0x4]                 ; 0049a3d9
    ADD ESP,0x8                         ; 0049a3dc
    CMP EAX,ESI                         ; 0049a3df
    JZ 0x0049a3f3                       ; 0049a3e1
        ;   XREF to: 0049a3f3 (CONDITIONAL_JUMP)  ; LAB_0049a3f3
    MOV EDX,dword ptr [ESI]             ; 0049a3e3
    MOV dword ptr [EAX],EDX             ; 0049a3e5
    MOV EDX,dword ptr [ESI + 0x4]       ; 0049a3e7
    MOV dword ptr [EAX + 0x4],EDX       ; 0049a3ea
    MOV EDX,dword ptr [ESI + 0x8]       ; 0049a3ed
    MOV dword ptr [EAX + 0x8],EDX       ; 0049a3f0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0049a3f3
        ;   Label: LAB_0049a3f3
    MOV ESI,ESP                         ; 0049a3f7
    PUSH ECX                            ; 0049a3f9
    LEA EDI,[ESP + 0x10]                ; 0049a3fa
    LEA EBX,[EBP + 0x10]                ; 0049a3fe
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0049a401
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    LEA ESI,[ESP + 0x4]                 ; 0049a406
    ADD ESP,0x4                         ; 0049a40a
    LEA EAX,[ESP + 0xc]                 ; 0049a40d
    MOVSD ES:EDI,ESI                    ; 0049a411
    MOVSD ES:EDI,ESI                    ; 0049a412
    MOVSD ES:EDI,ESI                    ; 0049a413
    CMP EBX,EAX                         ; 0049a414
    JNZ 0x0049a427                      ; 0049a416
        ;   XREF to: 0049a427 (CONDITIONAL_JUMP)  ; LAB_0049a427
    MOV dword ptr [EBP],0x2             ; 0049a418
    ADD ESP,0x18                        ; 0049a41f
    POP EBP                             ; 0049a422
    POP EDI                             ; 0049a423
    POP ESI                             ; 0049a424
    POP EBX                             ; 0049a425
    RET                                 ; 0049a426
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049a427
        ;   Label: LAB_0049a427
    MOV dword ptr [EBX],EAX             ; 0049a42b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049a42d
    MOV dword ptr [EBX + 0x4],EAX       ; 0049a431
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049a434
    MOV dword ptr [EBX + 0x8],EAX       ; 0049a438
    MOV dword ptr [EBP],0x2             ; 0049a43b
    ADD ESP,0x18                        ; 0049a442
    POP EBP                             ; 0049a445
    POP EDI                             ; 0049a446
    POP ESI                             ; 0049a447
    POP EBX                             ; 0049a448
    RET                                 ; 0049a449

