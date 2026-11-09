; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040e170(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e170
        ;   Label: core_ammo.cpp_FUN_0040e170
    PUSH EDI                            ; 0040e171
    SUB ESP,0x18                        ; 0040e172
    MOV EBX,ESI                         ; 0040e175
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e177
    ADD EAX,0x2b4                       ; 0040e17b
    PUSH EAX                            ; 0040e180
    LEA EDI,[ESP + 0x4]                 ; 0040e181
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0040e185
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040e18a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040e18f
    ADD ESP,0x4                         ; 0040e195
    MOVSD.REP ES:EDI,ESI                ; 0040e198
    MOV ECX,0x6                         ; 0040e19a
    MOV ESI,ESP                         ; 0040e19f
    MOV EDI,EBX                         ; 0040e1a1
    MOVSD.REP ES:EDI,ESI                ; 0040e1a3
    MOV EAX,EBX                         ; 0040e1a5
    ADD ESP,0x18                        ; 0040e1a7
    POP EDI                             ; 0040e1aa
    POP EBX                             ; 0040e1ab
    RET                                 ; 0040e1ac

