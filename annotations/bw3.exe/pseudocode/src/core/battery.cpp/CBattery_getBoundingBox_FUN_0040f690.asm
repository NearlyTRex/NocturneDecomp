; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_0040f690(CBattery *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f690
        ;   Label: core_battery.cpp_CBattery_getBoundingBox_FUN_0040f690
    PUSH EDI                            ; 0040f691
    SUB ESP,0x18                        ; 0040f692
    MOV EBX,ESI                         ; 0040f695
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040f697
    ADD EAX,0x158                       ; 0040f69b
    PUSH EAX                            ; 0040f6a0
    LEA EDI,[ESP + 0x4]                 ; 0040f6a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040f6a5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040f6aa
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040f6af
    ADD ESP,0x4                         ; 0040f6b5
    MOVSD.REP ES:EDI,ESI                ; 0040f6b8
    MOV ECX,0x6                         ; 0040f6ba
    MOV ESI,ESP                         ; 0040f6bf
    MOV EDI,EBX                         ; 0040f6c1
    MOVSD.REP ES:EDI,ESI                ; 0040f6c3
    MOV EAX,EBX                         ; 0040f6c5
    ADD ESP,0x18                        ; 0040f6c7
    POP EDI                             ; 0040f6ca
    POP EBX                             ; 0040f6cb
    RET                                 ; 0040f6cc

