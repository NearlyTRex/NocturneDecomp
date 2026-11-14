; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_spike_cpp_CSpike_getBoundingBox_FUN_00583560(CSpike *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583560
        ;   Label: core_spike.cpp_CSpike_getBoundingBox_FUN_00583560
    PUSH EDI                            ; 00583561
    SUB ESP,0x18                        ; 00583562
    MOV EBX,ESI                         ; 00583565
    MOV EAX,dword ptr [ESP + 0x24]      ; 00583567
    ADD EAX,0x158                       ; 0058356b
    PUSH EAX                            ; 00583570
    LEA EDI,[ESP + 0x4]                 ; 00583571
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00583575
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0058357a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0058357f
    ADD ESP,0x4                         ; 00583585
    MOVSD.REP ES:EDI,ESI                ; 00583588
    MOV ECX,0x6                         ; 0058358a
    MOV ESI,ESP                         ; 0058358f
    MOV EDI,EBX                         ; 00583591
    MOVSD.REP ES:EDI,ESI                ; 00583593
    MOV EAX,EBX                         ; 00583595
    ADD ESP,0x18                        ; 00583597
    POP EDI                             ; 0058359a
    POP EBX                             ; 0058359b
    RET                                 ; 0058359c

