; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_battery.cpp_FUN_00418060()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418060
        ;   Label: core_battery.cpp_FUN_00418060
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418061
    MOV EAX,dword ptr [ESP + 0x8]       ; 00418065
    ADD EAX,0x158                       ; 00418069
    PUSH EAX                            ; 0041806e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0041806f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00418074
    MOV EDX,dword ptr [EAX]             ; 0041807a
    LEA ECX,[EAX + 0x4]                 ; 0041807c
    MOV dword ptr [EBX],EDX             ; 0041807f
    LEA EDX,[EBX + 0x4]                 ; 00418081
    MOV ECX,dword ptr [ECX]             ; 00418084
    MOV dword ptr [EDX],ECX             ; 00418086
    LEA ECX,[EAX + 0x8]                 ; 00418088
    MOV ECX,dword ptr [ECX]             ; 0041808b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041808d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00418090
    ADD EAX,0xc                         ; 00418093
    MOV dword ptr [EDX + 0x8],ECX       ; 00418096
    LEA ECX,[EAX + 0x4]                 ; 00418099
    MOV ECX,dword ptr [ECX]             ; 0041809c
    MOV dword ptr [EDX + 0xc],ECX       ; 0041809e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004180a1
    ADD ESP,0x4                         ; 004180a4
    MOV dword ptr [EDX + 0x10],EAX      ; 004180a7
    MOV EAX,EBX                         ; 004180aa
    POP EBX                             ; 004180ac
    RET                                 ; 004180ad

