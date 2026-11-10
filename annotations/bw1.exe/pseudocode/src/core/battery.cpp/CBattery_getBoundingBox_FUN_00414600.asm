; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_00414600(CBattery *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414600
        ;   Label: core_battery.cpp_CBattery_getBoundingBox_FUN_00414600
    PUSH EDI                            ; 00414601
    SUB ESP,0x18                        ; 00414602
    MOV EBX,ESI                         ; 00414605
    MOV EAX,dword ptr [ESP + 0x24]      ; 00414607
    ADD EAX,0x158                       ; 0041460b
    PUSH EAX                            ; 00414610
    LEA EDI,[ESP + 0x4]                 ; 00414611
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00414615
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0041461a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0041461f
    ADD ESP,0x4                         ; 00414625
    MOVSD.REP ES:EDI,ESI                ; 00414628
    MOV ECX,0x6                         ; 0041462a
    MOV ESI,ESP                         ; 0041462f
    MOV EDI,EBX                         ; 00414631
    MOVSD.REP ES:EDI,ESI                ; 00414633
    MOV EAX,EBX                         ; 00414635
    ADD ESP,0x18                        ; 00414637
    POP EDI                             ; 0041463a
    POP EBX                             ; 0041463b
    RET                                 ; 0041463c

