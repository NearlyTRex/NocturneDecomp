; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_0054d000(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_0054cec0 at 0054cec5
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d000
        ;   Label: core_set.cpp_CDemonSet_ctor_FUN_0054d000
    PUSH ESI                            ; 0054d001
    PUSH EDI                            ; 0054d002
    PUSH EBP                            ; 0054d003
    MOV EBP,ESP                         ; 0054d004
    SUB ESP,0x8                         ; 0054d006
    AND ESP,0xfffffff8                  ; 0054d009
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d00c
    PUSH 0x605060                       ; 0054d00f
    PUSH 0xfa                           ; 0054d014
    ADD EBX,0x4                         ; 0054d019
    PUSH EBX                            ; 0054d01c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054d01d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054d022
    PUSH 0x605080                       ; 0054d025
    PUSH 0xc8                           ; 0054d02a
    ADD EAX,0x19a2c                     ; 0054d02f
    PUSH EAX                            ; 0054d034
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054d035
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054d03a
    PUSH 0x6050a0                       ; 0054d03d
    PUSH 0x14                           ; 0054d042
    ADD EAX,0x1414a8                    ; 0054d044
    PUSH EAX                            ; 0054d049
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054d04a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054d04f
    PUSH 0x6050c0                       ; 0054d052
    PUSH 0xfa                           ; 0054d057
    ADD EAX,0x554                       ; 0054d05c
    PUSH EAX                            ; 0054d061
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054d062
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffea4bd4]          ; 0054d067
    MOV dword ptr [EBX],0x0             ; 0054d06d
    MOV dword ptr [EBX + 0x19a2c],0x0   ; 0054d073
    MOV dword ptr [EBX + 0x15aeac],0xffffffff ; 0054d07d
    MOV dword ptr [EBX + 0x15aeb0],0xffffffff ; 0054d087
    MOV byte ptr [EBX + 0x14d0f0],0x0   ; 0054d091
    MOV dword ptr [EBX + 0x14d164],0x0  ; 0054d098
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 0054d0a2
    MOV dword ptr [EBX + 0x150fec],0x0  ; 0054d0ac
    MOV dword ptr [EBX + 0x152f30],0x0  ; 0054d0b6
    MOV dword ptr [EBX + 0x154e74],0x0  ; 0054d0c0
    MOV dword ptr [EBX + 0x15f6fc],0x0  ; 0054d0ca
    MOV dword ptr [EBX + 0x156db8],0x0  ; 0054d0d4
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 0054d0de
    MOV dword ptr [EBX + 0x15aeb4],0x1  ; 0054d0e8
    MOV dword ptr [EBX + 0x15aeb8],0xffffffff ; 0054d0f2
    MOV dword ptr [EBX + 0x15aebc],0xffffffff ; 0054d0fc
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 0054d106
    MOV dword ptr [EBX + 0x15aed0],0x0  ; 0054d110
    MOV dword ptr [EBX + 0x15aed4],0x0  ; 0054d11a
    ADD ESP,0xc                         ; 0054d124
    MOV dword ptr [EBX + 0x15ac90],0x0  ; 0054d127
    MOV dword ptr [EBX + 0x15ac94],0x0  ; 0054d131
    MOV dword ptr [EBX + 0x15ac9c],0x0  ; 0054d13b
    MOV ESI,0x5f047a                    ; 0054d145
    MOV dword ptr [EBX + 0x15aca0],0x0  ; 0054d14a
    LEA EDI,[EBX + 0x15aca8]            ; 0054d154
    MOV dword ptr [EBX + 0x15aca4],0x0  ; 0054d15a
    PUSH EDI                            ; 0054d164
    MOV AL,byte ptr [ESI]               ; 0054d165
        ;   Label: LAB_0054d165
    MOV byte ptr [EDI],AL               ; 0054d167
    CMP AL,0x0                          ; 0054d169
    JZ 0x0054d17d                       ; 0054d16b
        ;   XREF to: 0054d17d (CONDITIONAL_JUMP)  ; LAB_0054d17d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054d16d
    ADD ESI,0x2                         ; 0054d170
    MOV byte ptr [EDI + 0x1],AL         ; 0054d173
    ADD EDI,0x2                         ; 0054d176
    CMP AL,0x0                          ; 0054d179
    JNZ 0x0054d165                      ; 0054d17b
        ;   XREF to: 0054d165 (CONDITIONAL_JUMP)  ; LAB_0054d165
    POP EDI                             ; 0054d17d
        ;   Label: LAB_0054d17d
    PUSH EBX                            ; 0054d17e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0054d17f
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x15f6f8],0x0  ; 0054d184
    MOV dword ptr [EBX + 0x15acc0],0x0  ; 0054d18e
    MOV dword ptr [EBX + 0x15f694],0x2  ; 0054d198
    MOV dword ptr [EBX + 0x15aecc],0x0  ; 0054d1a2
    MOV dword ptr [EBX + 0x15acc4],0x0  ; 0054d1ac
    MOV dword ptr [EBX + 0x161640],0x0  ; 0054d1b6
    MOV dword ptr [EBX + 0x15acc8],0x0  ; 0054d1c0
    MOV dword ptr [EBX + 0x16166c],0x0  ; 0054d1ca
    MOV dword ptr [EBX + 0x15b428],0x0  ; 0054d1d4
    MOV dword ptr [EBX + 0x15ae9c],0x10000 ; 0054d1de
    MOV dword ptr [EBX + 0x15aea0],0x10000 ; 0054d1e8
    MOV ESI,0x5f047f                    ; 0054d1f2
    MOV dword ptr [EBX + 0x15aea4],0x10000 ; 0054d1f7
    ADD ESP,0x4                         ; 0054d201
    MOV dword ptr [EBX + 0x161670],0x0  ; 0054d204
    LEA EDI,[EBX + 0x15ae64]            ; 0054d20e
    MOV dword ptr [EBX + 0x15ae60],0x0  ; 0054d214
    PUSH EDI                            ; 0054d21e
    MOV AL,byte ptr [ESI]               ; 0054d21f
        ;   Label: LAB_0054d21f
    MOV byte ptr [EDI],AL               ; 0054d221
    CMP AL,0x0                          ; 0054d223
    JZ 0x0054d237                       ; 0054d225
        ;   XREF to: 0054d237 (CONDITIONAL_JUMP)  ; LAB_0054d237
    MOV AL,byte ptr [ESI + 0x1]         ; 0054d227
    ADD ESI,0x2                         ; 0054d22a
    MOV byte ptr [EDI + 0x1],AL         ; 0054d22d
    ADD EDI,0x2                         ; 0054d230
    CMP AL,0x0                          ; 0054d233
    JNZ 0x0054d21f                      ; 0054d235
        ;   XREF to: 0054d21f (CONDITIONAL_JUMP)  ; LAB_0054d21f
    POP EDI                             ; 0054d237
        ;   Label: LAB_0054d237
    MOV dword ptr [EBX + 0x15ac98],0x0  ; 0054d238
    MOV dword ptr [EBX + 0x15ac8c],0x0  ; 0054d242
    MOV dword ptr [EBX + 0x15ae84],0x0  ; 0054d24c
    MOV dword ptr [EBX + 0x15ae88],0xffff6f78 ; 0054d256
    MOV dword ptr [EBX + 0x15ae8c],0xffff6f78 ; 0054d260
    MOV dword ptr [EBX + 0x15ae90],0x9088 ; 0054d26a
    MOV dword ptr [EBX + 0x15ae94],0x280 ; 0054d274
    MOV dword ptr [EBX + 0x15ae98],0x0  ; 0054d27e
    MOV dword ptr [EBX + 0x15ac88],0x0  ; 0054d288
    MOV dword ptr [EBX + 0x15acbc],0x0  ; 0054d292
    MOV dword ptr [EBX + 0x14d154],0xbf800000 ; 0054d29c
    MOV dword ptr [EBX + 0x14d158],0xbf800000 ; 0054d2a6
    LEA EDX,[EBX + 0x14d154]            ; 0054d2b0
    MOV dword ptr [EBX + 0x14d15c],0xbf800000 ; 0054d2b6
    FLD float ptr [EDX + 0x4]           ; 0054d2c0
    FMUL ST0                            ; 0054d2c3
    FLD float ptr [EDX]                 ; 0054d2c5
    FMUL ST0                            ; 0054d2c7
    FADDP                               ; 0054d2c9
    FLD float ptr [EDX + 0x8]           ; 0054d2cb
    FMUL ST0                            ; 0054d2ce
    FADDP                               ; 0054d2d0
    FSQRT                               ; 0054d2d2
    FLDZ                                ; 0054d2d4
    FXCH                                ; 0054d2d6
    FSTP float ptr [ESP + 0x4]          ; 0054d2d8
    FCOMP float ptr [ESP + 0x4]         ; 0054d2dc
    FNSTSW AX                           ; 0054d2e0
    SAHF                                ; 0054d2e2
    JNC 0x0054d31a                      ; 0054d2e3
        ;   XREF to: 0054d31a (CONDITIONAL_JUMP)  ; LAB_0054d31a
    FLD1                                ; 0054d2e5
    FLD float ptr [EDX]                 ; 0054d2e7
    FXCH                                ; 0054d2e9
    FDIV float ptr [ESP + 0x4]          ; 0054d2eb
    FXCH                                ; 0054d2ef
    FMUL ST1                            ; 0054d2f1
    FLD float ptr [EDX + 0x4]           ; 0054d2f3
    FMUL ST2                            ; 0054d2f6
    FLD float ptr [EDX + 0x8]           ; 0054d2f8
    FMULP ST3                           ; 0054d2fb
    FXCH                                ; 0054d2fd
    FSTP float ptr [EDX]                ; 0054d2ff
    FSTP float ptr [EDX + 0x4]          ; 0054d301
    FSTP float ptr [EDX + 0x8]          ; 0054d304
    MOV EAX,EBX                         ; 0054d307
    MOV dword ptr [EBX + 0x14d160],0x0  ; 0054d309
    MOV ESP,EBP                         ; 0054d313
    POP EBP                             ; 0054d315
    POP EDI                             ; 0054d316
    POP ESI                             ; 0054d317
    POP EBX                             ; 0054d318
    RET                                 ; 0054d319
    MOV dword ptr [EDX + 0x8],0x0       ; 0054d31a
        ;   Label: LAB_0054d31a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054d321
    MOV dword ptr [EDX + 0x4],EAX       ; 0054d324
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054d327
    MOV dword ptr [EDX],EAX             ; 0054d32a
    MOV EAX,EBX                         ; 0054d32c
    MOV dword ptr [EBX + 0x14d160],0x0  ; 0054d32e
    MOV ESP,EBP                         ; 0054d338
    POP EBP                             ; 0054d33a
    POP EDI                             ; 0054d33b
    POP ESI                             ; 0054d33c
    POP EBX                             ; 0054d33d
    RET                                 ; 0054d33e

