; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_keyactor_cpp_CKeyActor_getBoundingBox_FUN_004de9d0(CKeyActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de9d0
        ;   Label: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_004de9d0
    PUSH EDI                            ; 004de9d1
    SUB ESP,0x18                        ; 004de9d2
    MOV EBX,ESI                         ; 004de9d5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004de9d7
    ADD EAX,0x158                       ; 004de9db
    PUSH EAX                            ; 004de9e0
    LEA EDI,[ESP + 0x4]                 ; 004de9e1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004de9e5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004de9ea
    MOV ESI,dword ptr [EAX + 0x350]     ; 004de9ef
    ADD ESP,0x4                         ; 004de9f5
    MOVSD.REP ES:EDI,ESI                ; 004de9f8
    MOV ECX,0x6                         ; 004de9fa
    MOV ESI,ESP                         ; 004de9ff
    MOV EDI,EBX                         ; 004dea01
    MOVSD.REP ES:EDI,ESI                ; 004dea03
    MOV EAX,EBX                         ; 004dea05
    ADD ESP,0x18                        ; 004dea07
    POP EDI                             ; 004dea0a
    POP EBX                             ; 004dea0b
    RET                                 ; 004dea0c

