; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0054c040(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c040
        ;   Label: FUN_0054c040
    SUB ESP,0x4                         ; 0054c041
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054c044
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054c048
    FLD float ptr [EAX + 0xbd24]        ; 0054c04c
    ADD EAX,0xbd28                      ; 0054c052
    CALL crt_math.c_round_FUN_00563a30  ; 0054c057
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 0054c05c
    FISTP dword ptr [ESP + 0x4]         ; 0054c05d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054c061
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 0054c066
    MOV ECX,dword ptr [ESP]             ; 0054c069
    MOV EDX,EAX                         ; 0054c06c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0054c06e
    SUB EAX,ECX                         ; 0054c075
    MOV EDX,dword ptr [EDX + 0x350]     ; 0054c077
    SHL EAX,0x3                         ; 0054c07d
    ADD EAX,EDX                         ; 0054c080
    MOV EDX,dword ptr [EAX]             ; 0054c082
    LEA ECX,[EAX + 0x4]                 ; 0054c084
    MOV dword ptr [EBX],EDX             ; 0054c087
    LEA EDX,[EBX + 0x4]                 ; 0054c089
    MOV ECX,dword ptr [ECX]             ; 0054c08c
    MOV dword ptr [EDX],ECX             ; 0054c08e
    LEA ECX,[EAX + 0x8]                 ; 0054c090
    MOV ECX,dword ptr [ECX]             ; 0054c093
    MOV dword ptr [EDX + 0x4],ECX       ; 0054c095
    MOV ECX,dword ptr [EAX + 0xc]       ; 0054c098
    ADD EAX,0xc                         ; 0054c09b
    MOV dword ptr [EDX + 0x8],ECX       ; 0054c09e
    LEA ECX,[EAX + 0x4]                 ; 0054c0a1
    MOV ECX,dword ptr [ECX]             ; 0054c0a4
    MOV dword ptr [EDX + 0xc],ECX       ; 0054c0a6
    MOV EAX,dword ptr [EAX + 0x8]       ; 0054c0a9
    MOV dword ptr [EDX + 0x10],EAX      ; 0054c0ac
    MOV EAX,EBX                         ; 0054c0af
    ADD ESP,0x4                         ; 0054c0b1
    POP EBX                             ; 0054c0b4
    RET                                 ; 0054c0b5

