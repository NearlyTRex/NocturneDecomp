; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_vehicle_cpp_CVehicle_getBoundingBox_FUN_005a8490(CVehicle *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8490
        ;   Label: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_005a8490
    PUSH EDI                            ; 005a8491
    SUB ESP,0x18                        ; 005a8492
    MOV EBX,ESI                         ; 005a8495
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a8497
    ADD EAX,0x158                       ; 005a849b
    PUSH EAX                            ; 005a84a0
    LEA EDI,[ESP + 0x4]                 ; 005a84a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a84a5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005a84aa
    MOV ESI,dword ptr [EAX + 0x350]     ; 005a84af
    ADD ESP,0x4                         ; 005a84b5
    MOVSD.REP ES:EDI,ESI                ; 005a84b8
    MOV ECX,0x6                         ; 005a84ba
    MOV ESI,ESP                         ; 005a84bf
    MOV EDI,EBX                         ; 005a84c1
    MOVSD.REP ES:EDI,ESI                ; 005a84c3
    MOV EAX,EBX                         ; 005a84c5
    ADD ESP,0x18                        ; 005a84c7
    POP EDI                             ; 005a84ca
    POP EBX                             ; 005a84cb
    RET                                 ; 005a84cc

