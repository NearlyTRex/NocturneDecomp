; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_0041ebe0(CBoxActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ebe0
        ;   Label: core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_0041ebe0
    SUB ESP,0x4                         ; 0041ebe1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041ebe4
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041ebe8
    FLD float ptr [EAX + 0x308]         ; 0041ebec
    ADD EAX,0x150                       ; 0041ebf2
    CALL crt_math.c_round_FUN_00563a30  ; 0041ebf7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EAX                            ; 0041ebfc
    FISTP dword ptr [ESP + 0x4]         ; 0041ebfd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0041ec01
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041ec06
    MOV ECX,dword ptr [ESP]             ; 0041ec09
    MOV EDX,EAX                         ; 0041ec0c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041ec0e
    SUB EAX,ECX                         ; 0041ec15
    MOV EDX,dword ptr [EDX + 0x350]     ; 0041ec17
    SHL EAX,0x3                         ; 0041ec1d
    ADD EAX,EDX                         ; 0041ec20
    MOV EDX,dword ptr [EAX]             ; 0041ec22
    LEA ECX,[EAX + 0x4]                 ; 0041ec24
    MOV dword ptr [EBX],EDX             ; 0041ec27
    LEA EDX,[EBX + 0x4]                 ; 0041ec29
    MOV ECX,dword ptr [ECX]             ; 0041ec2c
    MOV dword ptr [EDX],ECX             ; 0041ec2e
    LEA ECX,[EAX + 0x8]                 ; 0041ec30
    MOV ECX,dword ptr [ECX]             ; 0041ec33
    MOV dword ptr [EDX + 0x4],ECX       ; 0041ec35
    MOV ECX,dword ptr [EAX + 0xc]       ; 0041ec38
    ADD EAX,0xc                         ; 0041ec3b
    MOV dword ptr [EDX + 0x8],ECX       ; 0041ec3e
    LEA ECX,[EAX + 0x4]                 ; 0041ec41
    MOV ECX,dword ptr [ECX]             ; 0041ec44
    MOV dword ptr [EDX + 0xc],ECX       ; 0041ec46
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041ec49
    MOV dword ptr [EDX + 0x10],EAX      ; 0041ec4c
    MOV EAX,EBX                         ; 0041ec4f
    ADD ESP,0x4                         ; 0041ec51
    POP EBX                             ; 0041ec54
    RET                                 ; 0041ec55

