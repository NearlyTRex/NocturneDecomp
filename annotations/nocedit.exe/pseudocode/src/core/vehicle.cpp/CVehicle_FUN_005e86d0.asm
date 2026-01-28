; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * __cdecl core_vehicle_cpp_CVehicle_FUN_005e86d0(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e86d0
        ;   Label: core_vehicle.cpp_CVehicle_FUN_005e86d0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e86d1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e86d5
    ADD EAX,0x158                       ; 005e86d9
    PUSH EAX                            ; 005e86de
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e86df
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005e86e4
    MOV EDX,dword ptr [EAX]             ; 005e86ea
    LEA ECX,[EAX + 0x4]                 ; 005e86ec
    MOV dword ptr [EBX],EDX             ; 005e86ef
    LEA EDX,[EBX + 0x4]                 ; 005e86f1
    MOV ECX,dword ptr [ECX]             ; 005e86f4
    MOV dword ptr [EDX],ECX             ; 005e86f6
    LEA ECX,[EAX + 0x8]                 ; 005e86f8
    MOV ECX,dword ptr [ECX]             ; 005e86fb
    MOV dword ptr [EDX + 0x4],ECX       ; 005e86fd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005e8700
    ADD EAX,0xc                         ; 005e8703
    MOV dword ptr [EDX + 0x8],ECX       ; 005e8706
    LEA ECX,[EAX + 0x4]                 ; 005e8709
    MOV ECX,dword ptr [ECX]             ; 005e870c
    MOV dword ptr [EDX + 0xc],ECX       ; 005e870e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005e8711
    ADD ESP,0x4                         ; 005e8714
    MOV dword ptr [EDX + 0x10],EAX      ; 005e8717
    MOV EAX,EBX                         ; 005e871a
    POP EBX                             ; 005e871c
    RET                                 ; 005e871d

