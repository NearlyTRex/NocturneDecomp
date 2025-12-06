; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_backgnd.cpp_CBackgroundActor_FUN_00412940(CBackgroundActor * this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412940
        ;   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412940
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412941
    MOV EAX,dword ptr [ESP + 0x8]       ; 00412945
    ADD EAX,0x158                       ; 00412949
    PUSH EAX                            ; 0041294e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0041294f | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00412954
    MOV EDX,dword ptr [EAX]             ; 0041295a
    LEA ECX,[EAX + 0x4]                 ; 0041295c
    MOV dword ptr [EBX],EDX             ; 0041295f
    LEA EDX,[EBX + 0x4]                 ; 00412961
    MOV ECX,dword ptr [ECX]             ; 00412964
    MOV dword ptr [EDX],ECX             ; 00412966
    LEA ECX,[EAX + 0x8]                 ; 00412968
    MOV ECX,dword ptr [ECX]             ; 0041296b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041296d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00412970
    ADD EAX,0xc                         ; 00412973
    MOV dword ptr [EDX + 0x8],ECX       ; 00412976
    LEA ECX,[EAX + 0x4]                 ; 00412979
    MOV ECX,dword ptr [ECX]             ; 0041297c
    MOV dword ptr [EDX + 0xc],ECX       ; 0041297e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00412981
    ADD ESP,0x4                         ; 00412984
    MOV dword ptr [EDX + 0x10],EAX      ; 00412987
    MOV EAX,EBX                         ; 0041298a
    POP EBX                             ; 0041298c
    RET                                 ; 0041298d

