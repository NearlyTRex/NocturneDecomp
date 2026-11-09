; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_FUN_00500160(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6e7a
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500160
        ;   Label: core_lightgun.cpp_FUN_00500160
    PUSH EDI                            ; 00500161
    SUB ESP,0x24                        ; 00500162
    MOV EBX,ESI                         ; 00500165
    MOV EAX,dword ptr [ESP + 0x30]      ; 00500167
    ADD EAX,0x158                       ; 0050016b
    PUSH EAX                            ; 00500170
    LEA EDI,[ESP + 0x4]                 ; 00500171
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00500175
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0050017a
    LEA ESI,[EAX + 0x338]               ; 0050017f
    ADD ESP,0x4                         ; 00500185
    XOR EDX,EDX                         ; 00500188
    MOVSD.REP ES:EDI,ESI                ; 0050018a
    MOV dword ptr [ESP + 0x18],EDX      ; 0050018c
    FLD float ptr [ESP + 0x10]          ; 00500190
    MOV EAX,dword ptr [ESP + 0x14]      ; 00500194
    LEA ESI,[ESP + 0x18]                ; 00500198
    MOV EDI,EBX                         ; 0050019c
    FADD double ptr [0x005e6e7a]        ; 0050019e | DAT_005e6e7a
    MOV dword ptr [ESP + 0x20],EAX      ; 005001a4
    FSTP float ptr [ESP + 0x1c]         ; 005001a8
    MOVSD ES:EDI,ESI                    ; 005001ac
    MOVSD ES:EDI,ESI                    ; 005001ad
    MOVSD ES:EDI,ESI                    ; 005001ae
    MOV EAX,EBX                         ; 005001af
    ADD ESP,0x24                        ; 005001b1
    POP EDI                             ; 005001b4
    POP EBX                             ; 005001b5
    RET                                 ; 005001b6

