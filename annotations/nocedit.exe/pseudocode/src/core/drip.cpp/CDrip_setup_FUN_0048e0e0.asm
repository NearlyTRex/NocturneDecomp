; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_setup_FUN_0048e0e0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e0e0
        ;   Label: core_drip.cpp_CDrip_setup_FUN_0048e0e0
    SUB ESP,0x4                         ; 0048e0e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048e0e4
    LEA EAX,[EBX + 0x158]               ; 0048e0e8
    PUSH EAX                            ; 0048e0ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0048e0ef
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 0048e0f4
    LEA EDX,[EBX + 0x2f8]               ; 0048e0f7
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0048e0fd
    ADD ESP,0x4                         ; 0048e107
    MOV ECX,dword ptr [EDX]             ; 0048e10a
    MOV dword ptr [EAX],ECX             ; 0048e10c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048e10e
    MOV dword ptr [EAX + 0x4],ECX       ; 0048e111
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048e114
    MOV dword ptr [EAX + 0x8],ECX       ; 0048e117
    PUSH dword ptr [EBX + 0x2e4]        ; 0048e11a
    PUSH dword ptr [EBX + 0x2e0]        ; 0048e120
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048e126
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

