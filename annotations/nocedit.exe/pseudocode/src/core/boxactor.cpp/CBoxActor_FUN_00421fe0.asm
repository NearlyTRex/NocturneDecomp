; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * core_boxactor.cpp_CBoxActor_FUN_00421fe0(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421fe0
        ;   Label: core_boxactor.cpp_CBoxActor_FUN_00421fe0
    SUB ESP,0x4                         ; 00421fe1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00421fe4
    MOV EBX,dword ptr [ESP + 0x10]      ; 00421fe8
    FLD float ptr [EAX + 0x310]         ; 00421fec
    ADD EAX,0x158                       ; 00421ff2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00421ff7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 00421ffc
    FISTP dword ptr [ESP + 0x4]         ; 00421ffd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00422001
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00422006
    MOV ECX,dword ptr [ESP]             ; 00422009
    MOV EDX,EAX                         ; 0042200c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042200e
    SUB EAX,ECX                         ; 00422015
    MOV EDX,dword ptr [EDX + 0x5690]    ; 00422017
    SHL EAX,0x3                         ; 0042201d
    ADD EAX,EDX                         ; 00422020
    MOV EDX,dword ptr [EAX]             ; 00422022
    LEA ECX,[EAX + 0x4]                 ; 00422024
    MOV dword ptr [EBX],EDX             ; 00422027
    LEA EDX,[EBX + 0x4]                 ; 00422029
    MOV ECX,dword ptr [ECX]             ; 0042202c
    MOV dword ptr [EDX],ECX             ; 0042202e
    LEA ECX,[EAX + 0x8]                 ; 00422030
    MOV ECX,dword ptr [ECX]             ; 00422033
    MOV dword ptr [EDX + 0x4],ECX       ; 00422035
    MOV ECX,dword ptr [EAX + 0xc]       ; 00422038
    ADD EAX,0xc                         ; 0042203b
    MOV dword ptr [EDX + 0x8],ECX       ; 0042203e
    LEA ECX,[EAX + 0x4]                 ; 00422041
    MOV ECX,dword ptr [ECX]             ; 00422044
    MOV dword ptr [EDX + 0xc],ECX       ; 00422046
    MOV EAX,dword ptr [EAX + 0x8]       ; 00422049
    MOV dword ptr [EDX + 0x10],EAX      ; 0042204c
    MOV EAX,EBX                         ; 0042204f
    ADD ESP,0x4                         ; 00422051
    POP EBX                             ; 00422054
    RET                                 ; 00422055

