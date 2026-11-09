; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_FUN_0040e3c0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3c0
        ;   Label: core_ammobox.cpp_FUN_0040e3c0
    PUSH EDI                            ; 0040e3c1
    SUB ESP,0x18                        ; 0040e3c2
    MOV EBX,ESI                         ; 0040e3c5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e3c7
    ADD EAX,0x158                       ; 0040e3cb
    PUSH EAX                            ; 0040e3d0
    LEA EDI,[ESP + 0x4]                 ; 0040e3d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0040e3d5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0040e3da
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040e3df
    ADD ESP,0x4                         ; 0040e3e5
    MOVSD.REP ES:EDI,ESI                ; 0040e3e8
    MOV ECX,0x6                         ; 0040e3ea
    MOV ESI,ESP                         ; 0040e3ef
    MOV EDI,EBX                         ; 0040e3f1
    MOVSD.REP ES:EDI,ESI                ; 0040e3f3
    MOV EAX,EBX                         ; 0040e3f5
    ADD ESP,0x18                        ; 0040e3f7
    POP EDI                             ; 0040e3fa
    POP EBX                             ; 0040e3fb
    RET                                 ; 0040e3fc

