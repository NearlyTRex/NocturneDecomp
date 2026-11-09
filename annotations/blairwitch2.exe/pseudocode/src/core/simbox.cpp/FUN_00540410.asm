; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_FUN_00540410(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540410
        ;   Label: core_simbox.cpp_FUN_00540410
    PUSH EDI                            ; 00540411
    SUB ESP,0x18                        ; 00540412
    MOV EBX,ESI                         ; 00540415
    MOV EAX,dword ptr [ESP + 0x24]      ; 00540417
    ADD EAX,0x2b4                       ; 0054041b
    PUSH EAX                            ; 00540420
    LEA EDI,[ESP + 0x4]                 ; 00540421
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00540425
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0054042a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0054042f
    ADD ESP,0x4                         ; 00540435
    MOVSD.REP ES:EDI,ESI                ; 00540438
    MOV ECX,0x6                         ; 0054043a
    MOV ESI,ESP                         ; 0054043f
    MOV EDI,EBX                         ; 00540441
    MOVSD.REP ES:EDI,ESI                ; 00540443
    MOV EAX,EBX                         ; 00540445
    ADD ESP,0x18                        ; 00540447
    POP EDI                             ; 0054044a
    POP EBX                             ; 0054044b
    RET                                 ; 0054044c

