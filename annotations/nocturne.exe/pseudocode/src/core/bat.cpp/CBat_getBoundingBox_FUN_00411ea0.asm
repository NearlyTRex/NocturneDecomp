; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00411ea0(CBat *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 00411ea0
        ;   Label: core_bat.cpp_CBat_getBoundingBox_FUN_00411ea0
    SUB ESP,0x4                         ; 00411ea1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00411ea4
    MOV EBX,dword ptr [ESP + 0x10]      ; 00411ea8
    FLD float ptr [EAX + 0x17c]         ; 00411eac
    ADD EAX,0x180                       ; 00411eb2
    CALL crt_math.c_round_FUN_00563a30  ; 00411eb7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EAX                            ; 00411ebc
    FISTP dword ptr [ESP + 0x4]         ; 00411ebd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00411ec1
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411ec6
    MOV ECX,dword ptr [ESP]             ; 00411ec9
    MOV EDX,EAX                         ; 00411ecc
    LEA EAX,[ECX*0x4 + 0x0]             ; 00411ece
    SUB EAX,ECX                         ; 00411ed5
    MOV EDX,dword ptr [EDX + 0x350]     ; 00411ed7
    SHL EAX,0x3                         ; 00411edd
    ADD EAX,EDX                         ; 00411ee0
    MOV EDX,dword ptr [EAX]             ; 00411ee2
    LEA ECX,[EAX + 0x4]                 ; 00411ee4
    MOV dword ptr [EBX],EDX             ; 00411ee7
    LEA EDX,[EBX + 0x4]                 ; 00411ee9
    MOV ECX,dword ptr [ECX]             ; 00411eec
    MOV dword ptr [EDX],ECX             ; 00411eee
    LEA ECX,[EAX + 0x8]                 ; 00411ef0
    MOV ECX,dword ptr [ECX]             ; 00411ef3
    MOV dword ptr [EDX + 0x4],ECX       ; 00411ef5
    MOV ECX,dword ptr [EAX + 0xc]       ; 00411ef8
    ADD EAX,0xc                         ; 00411efb
    MOV dword ptr [EDX + 0x8],ECX       ; 00411efe
    LEA ECX,[EAX + 0x4]                 ; 00411f01
    MOV ECX,dword ptr [ECX]             ; 00411f04
    MOV dword ptr [EDX + 0xc],ECX       ; 00411f06
    MOV EAX,dword ptr [EAX + 0x8]       ; 00411f09
    MOV dword ptr [EDX + 0x10],EAX      ; 00411f0c
    MOV EAX,EBX                         ; 00411f0f
    ADD ESP,0x4                         ; 00411f11
    POP EBX                             ; 00411f14
    RET                                 ; 00411f15

