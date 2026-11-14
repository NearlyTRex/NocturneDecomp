; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExorcism * __cdecl core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(CExorcism *this_ptr)
;
; Parameters:
; CExorcism *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_exorcism.cpp_factoryFuncExorcism_FUN_0048a2e0 at 0048a2f3
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a310
        ;   Label: core_exorcism.cpp_CExorcism_ctor_FUN_0048a310
    PUSH ESI                            ; 0048a311
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048a312
    PUSH EDX                            ; 0048a316
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 0048a317
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0048a31c
    PUSH 0x5bdd28                       ; 0048a31f
    MOV EBX,EAX                         ; 0048a324
    LEA ESI,[EAX + 0x158]               ; 0048a326
    PUSH ESI                            ; 0048a32c
    MOV dword ptr [EAX + 0x154],0x5df4d4 ; 0048a32d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0048a337
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0048a33c
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048a346
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0048a350
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 0048a35a
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0048a364
    MOV dword ptr [EBX + 0x56c],0xa     ; 0048a36e
    MOV dword ptr [EBX + 0x58c],0x1     ; 0048a378
    MOV dword ptr [EBX + 0x574],0x2     ; 0048a382
    MOV dword ptr [EBX + 0x594],0x0     ; 0048a38c
    MOV dword ptr [EBX + 0x598],0x0     ; 0048a396
    ADD ESP,0x8                         ; 0048a3a0
    MOV dword ptr [EBX + 0x59c],0x0     ; 0048a3a3
    LEA ESI,[EBX + 0x5ac]               ; 0048a3ad
    MOV dword ptr [EBX + 0x5a4],0x0     ; 0048a3b3
    PUSH 0x41000000                     ; 0048a3bd
    MOV dword ptr [ESI + 0x3c],0x8000   ; 0048a3c2
    PUSH ESI                            ; 0048a3c9
    MOV byte ptr [ESI + 0x1c],0x20      ; 0048a3ca
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0048a3ce
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0048a3d3
    MOV dword ptr [ESI + 0x20],0x1      ; 0048a3d6
    LEA ESI,[EBX + 0x5ec]               ; 0048a3dd
    PUSH 0x41000000                     ; 0048a3e3
    MOV dword ptr [ESI + 0x3c],0x8000   ; 0048a3e8
    PUSH ESI                            ; 0048a3ef
    MOV byte ptr [ESI + 0x1c],0x20      ; 0048a3f0
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0048a3f4
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    MOV dword ptr [ESI + 0x20],0x1      ; 0048a3f9
    ADD ESP,0x8                         ; 0048a400
    MOV dword ptr [EBX + 0x57c],0x0     ; 0048a403
    MOV EAX,EBX                         ; 0048a40d
    MOV dword ptr [EBX + 0x5a8],0x0     ; 0048a40f
    POP ESI                             ; 0048a419
    POP EBX                             ; 0048a41a
    RET                                 ; 0048a41b

