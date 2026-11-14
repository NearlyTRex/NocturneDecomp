; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_00581300(CTVBat *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581300
        ;   Label: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_00581300
    PUSH EDI                            ; 00581301
    SUB ESP,0x1c                        ; 00581302
    MOV EAX,dword ptr [ESP + 0x28]      ; 00581305
    MOV EBX,ESI                         ; 00581309
    FLD float ptr [EAX + 0x10af8]       ; 0058130b
    ADD EAX,0x10afc                     ; 00581311
    CALL crt_math.c_round_FUN_005b7ff0  ; 00581316
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 0058131b
    FISTP dword ptr [ESP + 0x1c]        ; 0058131c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00581320
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00581325
    MOV EDX,dword ptr [ESP + 0x18]      ; 00581328
    MOV ESI,EAX                         ; 0058132c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058132e
    MOV EDI,ESP                         ; 00581335
    SUB EAX,EDX                         ; 00581337
    MOV ESI,dword ptr [ESI + 0x350]     ; 00581339
    SHL EAX,0x3                         ; 0058133f
    MOV ECX,0x6                         ; 00581342
    ADD ESI,EAX                         ; 00581347
    MOVSD.REP ES:EDI,ESI                ; 00581349
    MOV ECX,0x6                         ; 0058134b
    MOV ESI,ESP                         ; 00581350
    MOV EDI,EBX                         ; 00581352
    MOVSD.REP ES:EDI,ESI                ; 00581354
    MOV EAX,EBX                         ; 00581356
    ADD ESP,0x1c                        ; 00581358
    POP EDI                             ; 0058135b
    POP EBX                             ; 0058135c
    RET                                 ; 0058135d

