; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_muzzle_cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect *this_ptr,CVector3f *param_2,undefined4 param_3)
;
; Parameters:
; CMuzzleEffect *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170 at 0049d1af
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_dirmat.cpp_FUN_004496e0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d360
        ;   Label: core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360
    PUSH ESI                            ; 0059d361
    PUSH EDI                            ; 0059d362
    PUSH EBP                            ; 0059d363
    SUB ESP,0x18                        ; 0059d364
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0059d367
    MOV ESI,dword ptr [ESP + 0x30]      ; 0059d36b
    PUSH ESI                            ; 0059d36f
    LEA EBX,[EBP + 0x1c]                ; 0059d370
    PUSH EBX                            ; 0059d373
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 0059d374
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0059d379
    PUSH 0x41000000                     ; 0059d37c
    MOV dword ptr [EBX + 0x3c],0x8000   ; 0059d381
    PUSH EBX                            ; 0059d388
    MOV byte ptr [EBX + 0x1c],0x20      ; 0059d389
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 0059d38d
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0059d392
    PUSH EBX                            ; 0059d395
    MOV EDX,dword ptr [0x0061b5a8]      ; 0059d396 | g_CDemonSetPtr
    PUSH EDX                            ; 0059d39c | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 0059d39d
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 0059d3a4
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    LEA EAX,[EBP + 0x4]                 ; 0059d3a9
    ADD ESP,0x8                         ; 0059d3ac
    CMP EAX,ESI                         ; 0059d3af
    JZ 0x0059d3c3                       ; 0059d3b1
        ;   XREF to: 0059d3c3 (CONDITIONAL_JUMP)  ; LAB_0059d3c3
    MOV EDX,dword ptr [ESI]             ; 0059d3b3
    MOV dword ptr [EAX],EDX             ; 0059d3b5
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059d3b7
    MOV dword ptr [EAX + 0x4],EDX       ; 0059d3ba
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059d3bd
    MOV dword ptr [EAX + 0x8],EDX       ; 0059d3c0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0059d3c3
        ;   Label: LAB_0059d3c3
    MOV ESI,ESP                         ; 0059d3c7
    PUSH ECX                            ; 0059d3c9
    LEA EDI,[ESP + 0x10]                ; 0059d3ca
    LEA EBX,[EBP + 0x10]                ; 0059d3ce
    CALL core_dirmat.cpp_FUN_004496e0   ; 0059d3d1
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    LEA ESI,[ESP + 0x4]                 ; 0059d3d6
    ADD ESP,0x4                         ; 0059d3da
    LEA EAX,[ESP + 0xc]                 ; 0059d3dd
    MOVSD ES:EDI,ESI                    ; 0059d3e1
    MOVSD ES:EDI,ESI                    ; 0059d3e2
    MOVSD ES:EDI,ESI                    ; 0059d3e3
    CMP EBX,EAX                         ; 0059d3e4
    JNZ 0x0059d3f7                      ; 0059d3e6
        ;   XREF to: 0059d3f7 (CONDITIONAL_JUMP)  ; LAB_0059d3f7
    MOV dword ptr [EBP],0x2             ; 0059d3e8
    ADD ESP,0x18                        ; 0059d3ef
    POP EBP                             ; 0059d3f2
    POP EDI                             ; 0059d3f3
    POP ESI                             ; 0059d3f4
    POP EBX                             ; 0059d3f5
    RET                                 ; 0059d3f6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059d3f7
        ;   Label: LAB_0059d3f7
    MOV dword ptr [EBX],EAX             ; 0059d3fb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059d3fd
    MOV dword ptr [EBX + 0x4],EAX       ; 0059d401
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059d404
    MOV dword ptr [EBX + 0x8],EAX       ; 0059d408
    MOV dword ptr [EBP],0x2             ; 0059d40b
    ADD ESP,0x18                        ; 0059d412
    POP EBP                             ; 0059d415
    POP EDI                             ; 0059d416
    POP ESI                             ; 0059d417
    POP EBX                             ; 0059d418
    RET                                 ; 0059d419

