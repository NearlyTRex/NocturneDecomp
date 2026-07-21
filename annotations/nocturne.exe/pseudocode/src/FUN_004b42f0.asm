; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004b42f0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b42f0
        ;   Label: FUN_004b42f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b42f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b42f5
    ADD EAX,0x150                       ; 004b42f9
    PUSH EAX                            ; 004b42fe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004b42ff
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 004b4304
    MOV EDX,dword ptr [EAX]             ; 004b430a
    LEA ECX,[EAX + 0x4]                 ; 004b430c
    MOV dword ptr [EBX],EDX             ; 004b430f
    LEA EDX,[EBX + 0x4]                 ; 004b4311
    MOV ECX,dword ptr [ECX]             ; 004b4314
    MOV dword ptr [EDX],ECX             ; 004b4316
    LEA ECX,[EAX + 0x8]                 ; 004b4318
    MOV ECX,dword ptr [ECX]             ; 004b431b
    MOV dword ptr [EDX + 0x4],ECX       ; 004b431d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004b4320
    ADD EAX,0xc                         ; 004b4323
    MOV dword ptr [EDX + 0x8],ECX       ; 004b4326
    LEA ECX,[EAX + 0x4]                 ; 004b4329
    MOV ECX,dword ptr [ECX]             ; 004b432c
    MOV dword ptr [EDX + 0xc],ECX       ; 004b432e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004b4331
    ADD ESP,0x4                         ; 004b4334
    MOV dword ptr [EDX + 0x10],EAX      ; 004b4337
    MOV EAX,EBX                         ; 004b433a
    POP EBX                             ; 004b433c
    RET                                 ; 004b433d

