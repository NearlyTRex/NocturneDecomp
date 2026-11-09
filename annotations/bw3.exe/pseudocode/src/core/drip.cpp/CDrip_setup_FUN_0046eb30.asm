; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_setup_FUN_0046eb30(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046eb30
        ;   Label: core_drip.cpp_CDrip_setup_FUN_0046eb30
    SUB ESP,0x4                         ; 0046eb31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046eb34
    LEA EAX,[EBX + 0x158]               ; 0046eb38
    PUSH EAX                            ; 0046eb3e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0046eb3f
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 0046eb44
    LEA EDX,[EBX + 0x2f8]               ; 0046eb47
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0046eb4d
    ADD ESP,0x4                         ; 0046eb57
    MOV ECX,dword ptr [EDX]             ; 0046eb5a
    MOV dword ptr [EAX],ECX             ; 0046eb5c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046eb5e
    MOV dword ptr [EAX + 0x4],ECX       ; 0046eb61
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046eb64
    MOV dword ptr [EAX + 0x8],ECX       ; 0046eb67
    PUSH dword ptr [EBX + 0x2e4]        ; 0046eb6a
    PUSH dword ptr [EBX + 0x2e0]        ; 0046eb70
    CALL core_actor.cpp_FUN_0040ce40    ; 0046eb76
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0046eb7b
    FLD float ptr [ESP + 0x8]           ; 0046eb7f
    ADD ESP,0x8                         ; 0046eb83
    PUSH 0x5bc719                       ; 0046eb86
    PUSH 0x1c0b3dc                      ; 0046eb8b
    FSTP float ptr [EBX + 0x2dc]        ; 0046eb90
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0046eb96
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0046eb9b
    PUSH 0x1c0b3dc                      ; 0046eb9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0046eba3
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046eba8
    MOV dword ptr [EBX + 0x338],0x0     ; 0046ebab
    ADD ESP,0x4                         ; 0046ebb5
    POP EBX                             ; 0046ebb8
    RET                                 ; 0046ebb9

