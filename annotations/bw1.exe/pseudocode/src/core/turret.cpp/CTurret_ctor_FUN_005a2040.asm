; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005a2040(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_turret.cpp_factoryFuncTurret_FUN_005a2010 at 005a2023
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2040
        ;   Label: core_turret.cpp_CTurret_ctor_FUN_005a2040
    PUSH ESI                            ; 005a2041
    PUSH EDI                            ; 005a2042
    SUB ESP,0x24                        ; 005a2043
    MOV EBX,dword ptr [ESP + 0x34]      ; 005a2046
    PUSH EBX                            ; 005a204a
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 005a204b
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a2050
    ADD EAX,0x584                       ; 005a2053
    PUSH EAX                            ; 005a2058
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005a2059
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a205e
    LEA EBX,[EAX + 0xfffffa7c]          ; 005a2061
    PUSH 0x5f89b0                       ; 005a2067
    LEA EAX,[EBX + 0x158]               ; 005a206c
    PUSH EAX                            ; 005a2072
    MOV dword ptr [EBX + 0x154],0x6074e4 ; 005a2073
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a207d
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a2082
    PUSH 0x5f89c1                       ; 005a2085
    LEA EAX,[EBX + 0x584]               ; 005a208a
    PUSH EAX                            ; 005a2090
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a2091
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x700],0x0     ; 005a2096
    MOV byte ptr [EBX + 0x704],0x0      ; 005a20a0
    MOV dword ptr [EBX + 0x768],0x40400000 ; 005a20a7
    MOV dword ptr [EBX + 0x76c],0x40c00000 ; 005a20b1
    MOV dword ptr [EBX + 0x770],0x40400000 ; 005a20bb
    MOV dword ptr [EBX + 0x774],0x3e4ccccd ; 005a20c5
    MOV dword ptr [EBX + 0x778],0x41f00000 ; 005a20cf
    MOV ESI,0x5f89d4                    ; 005a20d9
    MOV dword ptr [EBX + 0x77c],0x0     ; 005a20de
    ADD ESP,0x8                         ; 005a20e8
    MOV dword ptr [EBX + 0x300],0x0     ; 005a20eb
    LEA EDI,[EBX + 0x784]               ; 005a20f5
    MOV dword ptr [EBX + 0x780],0x0     ; 005a20fb
    PUSH EDI                            ; 005a2105
    MOV AL,byte ptr [ESI]               ; 005a2106
        ;   Label: LAB_005a2106
    MOV byte ptr [EDI],AL               ; 005a2108
    CMP AL,0x0                          ; 005a210a
    JZ 0x005a211e                       ; 005a210c
        ;   XREF to: 005a211e (CONDITIONAL_JUMP)  ; LAB_005a211e
    MOV AL,byte ptr [ESI + 0x1]         ; 005a210e
    ADD ESI,0x2                         ; 005a2111
    MOV byte ptr [EDI + 0x1],AL         ; 005a2114
    ADD EDI,0x2                         ; 005a2117
    CMP AL,0x0                          ; 005a211a
    JNZ 0x005a2106                      ; 005a211c
        ;   XREF to: 005a2106 (CONDITIONAL_JUMP)  ; LAB_005a2106
    POP EDI                             ; 005a211e
        ;   Label: LAB_005a211e
    XOR EDX,EDX                         ; 005a211f
    MOV ESI,0x3f800000                  ; 005a2121
    LEA EAX,[ESP + 0x18]                ; 005a2126
    LEA EDI,[ESP + 0xc]                 ; 005a212a
    PUSH EAX                            ; 005a212e
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a212f
    MOV dword ptr [ESP + 0x24],ESI      ; 005a2133
    PUSH EBX                            ; 005a2137
    LEA ESI,[ESP + 0x8]                 ; 005a2138
    MOV dword ptr [ESP + 0x24],EDX      ; 005a213c
    CALL core_actor.cpp_FUN_00408b40    ; 005a2140
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 005a2145
    LEA EAX,[ESP + 0x14]                ; 005a2149
    ADD ESP,0x8                         ; 005a214d
    LEA EDX,[EBX + 0x84c]               ; 005a2150
    MOVSD ES:EDI,ESI                    ; 005a2156
    MOVSD ES:EDI,ESI                    ; 005a2157
    MOVSD ES:EDI,ESI                    ; 005a2158
    CMP EDX,EAX                         ; 005a2159
    JNZ 0x005a2184                      ; 005a215b
        ;   XREF to: 005a2184 (CONDITIONAL_JUMP)  ; LAB_005a2184
    MOV dword ptr [EBX + 0x85c],0x0     ; 005a215d
        ;   Label: LAB_005a215d
    MOV dword ptr [EBX + 0x86c],0x0     ; 005a2167
    MOV EAX,EBX                         ; 005a2171
    MOV dword ptr [EBX + 0x858],0x0     ; 005a2173
    ADD ESP,0x24                        ; 005a217d
    POP EDI                             ; 005a2180
    POP ESI                             ; 005a2181
    POP EBX                             ; 005a2182
    RET                                 ; 005a2183
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a2184
        ;   Label: LAB_005a2184
    MOV dword ptr [EDX],EAX             ; 005a2188
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a218a
    MOV dword ptr [EDX + 0x4],EAX       ; 005a218e
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a2191
    MOV dword ptr [EDX + 0x8],EAX       ; 005a2195
    JMP 0x005a215d                      ; 005a2198
        ;   XREF to: 005a215d (UNCONDITIONAL_JUMP)  ; LAB_005a215d

