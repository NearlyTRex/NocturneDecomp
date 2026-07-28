; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_frankgen_cpp_FUN_00495000(int param_1,undefined4 *param_2)
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

    PUSH EBX                            ; 00495000
        ;   Label: core_frankgen.cpp_FUN_00495000
    SUB ESP,0x4                         ; 00495001
    MOV EAX,dword ptr [ESP + 0xc]       ; 00495004
    MOV EBX,dword ptr [ESP + 0x10]      ; 00495008
    FLD float ptr [EAX + 0x178]         ; 0049500c
    ADD EAX,0x17c                       ; 00495012
    CALL crt_math.c_round_FUN_00563a30  ; 00495017
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EAX                            ; 0049501c
    FISTP dword ptr [ESP + 0x4]         ; 0049501d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00495021
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00495026
    MOV ECX,dword ptr [ESP]             ; 00495029
    MOV EDX,EAX                         ; 0049502c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0049502e
    SUB EAX,ECX                         ; 00495035
    MOV EDX,dword ptr [EDX + 0x350]     ; 00495037
    SHL EAX,0x3                         ; 0049503d
    ADD EAX,EDX                         ; 00495040
    MOV EDX,dword ptr [EAX]             ; 00495042
    LEA ECX,[EAX + 0x4]                 ; 00495044
    MOV dword ptr [EBX],EDX             ; 00495047
    LEA EDX,[EBX + 0x4]                 ; 00495049
    MOV ECX,dword ptr [ECX]             ; 0049504c
    MOV dword ptr [EDX],ECX             ; 0049504e
    LEA ECX,[EAX + 0x8]                 ; 00495050
    MOV ECX,dword ptr [ECX]             ; 00495053
    MOV dword ptr [EDX + 0x4],ECX       ; 00495055
    MOV ECX,dword ptr [EAX + 0xc]       ; 00495058
    ADD EAX,0xc                         ; 0049505b
    MOV dword ptr [EDX + 0x8],ECX       ; 0049505e
    LEA ECX,[EAX + 0x4]                 ; 00495061
    MOV ECX,dword ptr [ECX]             ; 00495064
    MOV dword ptr [EDX + 0xc],ECX       ; 00495066
    MOV EAX,dword ptr [EAX + 0x8]       ; 00495069
    MOV dword ptr [EDX + 0x10],EAX      ; 0049506c
    MOV EAX,EBX                         ; 0049506f
    ADD ESP,0x4                         ; 00495071
    POP EBX                             ; 00495074
    RET                                 ; 00495075

