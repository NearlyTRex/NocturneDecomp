; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_health_cpp_CHealthItem_getBoundingBox_FUN_004cdea0(CHealthItem *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdea0
        ;   Label: core_health.cpp_CHealthItem_getBoundingBox_FUN_004cdea0
    PUSH EDI                            ; 004cdea1
    SUB ESP,0x18                        ; 004cdea2
    MOV EBX,ESI                         ; 004cdea5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cdea7
    ADD EAX,0x2b4                       ; 004cdeab
    PUSH EAX                            ; 004cdeb0
    LEA EDI,[ESP + 0x4]                 ; 004cdeb1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004cdeb5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004cdeba
    MOV ESI,dword ptr [EAX + 0x350]     ; 004cdebf
    ADD ESP,0x4                         ; 004cdec5
    MOVSD.REP ES:EDI,ESI                ; 004cdec8
    MOV ECX,0x6                         ; 004cdeca
    MOV ESI,ESP                         ; 004cdecf
    MOV EDI,EBX                         ; 004cded1
    MOVSD.REP ES:EDI,ESI                ; 004cded3
    MOV EAX,EBX                         ; 004cded5
    ADD ESP,0x18                        ; 004cded7
    POP EDI                             ; 004cdeda
    POP EBX                             ; 004cdedb
    RET                                 ; 004cdedc

