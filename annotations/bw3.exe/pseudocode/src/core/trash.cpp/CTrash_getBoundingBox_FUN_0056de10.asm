; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_0056de10(CTrash *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056de10
        ;   Label: core_trash.cpp_CTrash_getBoundingBox_FUN_0056de10
    PUSH EDI                            ; 0056de11
    PUSH EBP                            ; 0056de12
    SUB ESP,0x3c                        ; 0056de13
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0056de16
    MOV EBX,ESI                         ; 0056de1a
    LEA EAX,[EBP + 0x158]               ; 0056de1c
    PUSH EAX                            ; 0056de22
    LEA EDI,[ESP + 0x4]                 ; 0056de23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0056de27
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0056de2c
    MOV ESI,dword ptr [EAX + 0x350]     ; 0056de31
    ADD ESP,0x4                         ; 0056de37
    MOVSD.REP ES:EDI,ESI                ; 0056de3a
    MOV EAX,dword ptr [EBP + 0x310]     ; 0056de3c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056de42
    LEA EAX,[ESP + 0x18]                ; 0056de46
    XOR EDX,EDX                         ; 0056de4a
    PUSH EAX                            ; 0056de4c
    LEA ESI,[ESP + 0x34]                ; 0056de4d
    LEA EDI,[ESP + 0x28]                ; 0056de51
    PUSH EBP                            ; 0056de55
    MOV dword ptr [ESP + 0x20],EDX      ; 0056de56
    MOV dword ptr [ESP + 0x28],EDX      ; 0056de5a
    CALL core_actor.cpp_FUN_00408b40    ; 0056de5e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x38]                ; 0056de63
    ADD ESP,0x8                         ; 0056de67
    MOV ECX,0x6                         ; 0056de6a
    FLD float ptr [ESP]                 ; 0056de6f
    FLD float ptr [ESP + 0x4]           ; 0056de72
    FLD float ptr [ESP + 0x8]           ; 0056de76
    FLD float ptr [ESP + 0xc]           ; 0056de7a
    FLD float ptr [ESP + 0x10]          ; 0056de7e
    MOVSD ES:EDI,ESI                    ; 0056de82
    MOVSD ES:EDI,ESI                    ; 0056de83
    MOVSD ES:EDI,ESI                    ; 0056de84
    FLD float ptr [ESP + 0x14]          ; 0056de85
    MOV ESI,ESP                         ; 0056de89
    MOV EDI,EBX                         ; 0056de8b
    FXCH ST5                            ; 0056de8d
    FADD float ptr [ESP + 0x24]         ; 0056de8f
    FXCH ST4                            ; 0056de93
    FADD float ptr [ESP + 0x28]         ; 0056de95
    FXCH ST3                            ; 0056de99
    FADD float ptr [ESP + 0x2c]         ; 0056de9b
    FXCH ST2                            ; 0056de9f
    FADD float ptr [ESP + 0x24]         ; 0056dea1
    FXCH                                ; 0056dea5
    FADD float ptr [ESP + 0x28]         ; 0056dea7
    FXCH ST5                            ; 0056deab
    FADD float ptr [ESP + 0x2c]         ; 0056dead
    FXCH ST4                            ; 0056deb1
    FSTP float ptr [ESP]                ; 0056deb3
    FXCH ST2                            ; 0056deb6
    FSTP float ptr [ESP + 0x4]          ; 0056deb8
    FSTP float ptr [ESP + 0x8]          ; 0056debc
    FSTP float ptr [ESP + 0xc]          ; 0056dec0
    FXCH                                ; 0056dec4
    FSTP float ptr [ESP + 0x10]         ; 0056dec6
    FSTP float ptr [ESP + 0x14]         ; 0056deca
    MOVSD.REP ES:EDI,ESI                ; 0056dece
    MOV EAX,EBX                         ; 0056ded0
    ADD ESP,0x3c                        ; 0056ded2
    POP EBP                             ; 0056ded5
    POP EDI                             ; 0056ded6
    POP EBX                             ; 0056ded7
    RET                                 ; 0056ded8

