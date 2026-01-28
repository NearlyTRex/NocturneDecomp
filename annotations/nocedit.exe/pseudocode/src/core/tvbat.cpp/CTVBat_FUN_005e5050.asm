; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * __cdecl core_tvbat_cpp_CTVBat_FUN_005e5050(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5050
        ;   Label: core_tvbat.cpp_CTVBat_FUN_005e5050
    SUB ESP,0x4                         ; 005e5051
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e5054
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e5058
    FLD float ptr [EAX + 0xbebc]        ; 005e505c
    ADD EAX,0xbec0                      ; 005e5062
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e5067
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 005e506c
    FISTP dword ptr [ESP + 0x4]         ; 005e506d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e5071
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e5076
    MOV ECX,dword ptr [ESP]             ; 005e5079
    MOV EDX,EAX                         ; 005e507c
    LEA EAX,[ECX*0x4 + 0x0]             ; 005e507e
    SUB EAX,ECX                         ; 005e5085
    MOV EDX,dword ptr [EDX + 0x5690]    ; 005e5087
    SHL EAX,0x3                         ; 005e508d
    ADD EAX,EDX                         ; 005e5090
    MOV EDX,dword ptr [EAX]             ; 005e5092
    LEA ECX,[EAX + 0x4]                 ; 005e5094
    MOV dword ptr [EBX],EDX             ; 005e5097
    LEA EDX,[EBX + 0x4]                 ; 005e5099
    MOV ECX,dword ptr [ECX]             ; 005e509c
    MOV dword ptr [EDX],ECX             ; 005e509e
    LEA ECX,[EAX + 0x8]                 ; 005e50a0
    MOV ECX,dword ptr [ECX]             ; 005e50a3
    MOV dword ptr [EDX + 0x4],ECX       ; 005e50a5
    MOV ECX,dword ptr [EAX + 0xc]       ; 005e50a8
    ADD EAX,0xc                         ; 005e50ab
    MOV dword ptr [EDX + 0x8],ECX       ; 005e50ae
    LEA ECX,[EAX + 0x4]                 ; 005e50b1
    MOV ECX,dword ptr [ECX]             ; 005e50b4
    MOV dword ptr [EDX + 0xc],ECX       ; 005e50b6
    MOV EAX,dword ptr [EAX + 0x8]       ; 005e50b9
    MOV dword ptr [EDX + 0x10],EAX      ; 005e50bc
    MOV EAX,EBX                         ; 005e50bf
    ADD ESP,0x4                         ; 005e50c1
    POP EBX                             ; 005e50c4
    RET                                 ; 005e50c5

