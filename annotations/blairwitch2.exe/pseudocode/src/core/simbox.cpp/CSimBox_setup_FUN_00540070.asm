; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00540070(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540070
        ;   Label: core_simbox.cpp_CSimBox_setup_FUN_00540070
    PUSH ESI                            ; 00540071
    PUSH EDI                            ; 00540072
    SUB ESP,0x60                        ; 00540073
    MOV EBX,dword ptr [ESP + 0x70]      ; 00540076
    LEA EAX,[EBX + 0x2b4]               ; 0054007a
    PUSH EAX                            ; 00540080
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00540081
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00540086
    PUSH EBX                            ; 00540089
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0054008a
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054008f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00540092
    PUSH EBX                            ; 00540098
    LEA ESI,[ESP + 0x1c]                ; 00540099
    LEA EDI,[ESP + 0x4]                 ; 0054009d
    CALL dword ptr [EAX + 0x24]         ; 005400a1
    MOV ECX,0x6                         ; 005400a4
    LEA ESI,[ESP + 0x1c]                ; 005400a9
    ADD ESP,0x4                         ; 005400ad
    MOVSD.REP ES:EDI,ESI                ; 005400b0
    LEA EAX,[ESP + 0x30]                ; 005400b2
    MOV ESI,ESP                         ; 005400b6
    CMP EAX,ESI                         ; 005400b8
    JNZ 0x00540181                      ; 005400ba
        ;   XREF to: 00540181 (CONDITIONAL_JUMP)  ; LAB_00540181
    LEA EAX,[ESP + 0x3c]                ; 005400c0
        ;   Label: LAB_005400c0
    ADD ESI,0xc                         ; 005400c4
    CMP EAX,ESI                         ; 005400c7
    JZ 0x005400df                       ; 005400c9
        ;   XREF to: 005400df (CONDITIONAL_JUMP)  ; LAB_005400df
    MOV EAX,dword ptr [ESI]             ; 005400cb
    MOV dword ptr [ESP + 0x3c],EAX      ; 005400cd
    MOV EAX,dword ptr [ESI + 0x4]       ; 005400d1
    MOV dword ptr [ESP + 0x40],EAX      ; 005400d4
    MOV EAX,dword ptr [ESI + 0x8]       ; 005400d8
    MOV dword ptr [ESP + 0x44],EAX      ; 005400db
    FLD float ptr [ESP + 0x3c]          ; 005400df
        ;   Label: LAB_005400df
    FLD float ptr [ESP + 0x40]          ; 005400e3
    FLD float ptr [ESP + 0x44]          ; 005400e7
    LEA EDI,[ESP + 0x48]                ; 005400eb
    LEA ESI,[ESP + 0x54]                ; 005400ef
    FXCH ST2                            ; 005400f3
    FSUB float ptr [ESP + 0x30]         ; 005400f5
    FXCH                                ; 005400f9
    FSUB float ptr [ESP + 0x34]         ; 005400fb
    FXCH ST2                            ; 005400ff
    FSUB float ptr [ESP + 0x38]         ; 00540101
    FXCH                                ; 00540105
    FSTP float ptr [ESP + 0x54]         ; 00540107
    FXCH                                ; 0054010b
    FSTP float ptr [ESP + 0x58]         ; 0054010d
    FSTP float ptr [ESP + 0x5c]         ; 00540111
    MOVSD ES:EDI,ESI                    ; 00540115
    MOVSD ES:EDI,ESI                    ; 00540116
    MOVSD ES:EDI,ESI                    ; 00540117
    LEA EAX,[ESP + 0x48]                ; 00540118
    PUSH dword ptr [EBX + 0x434]        ; 0054011c
    PUSH EAX                            ; 00540122
    LEA EAX,[EBX + 0x30]                ; 00540123
    PUSH EAX                            ; 00540126
    LEA ESI,[EBX + 0x20]                ; 00540127
    PUSH ESI                            ; 0054012a
    LEA EAX,[EBX + 0x4b4]               ; 0054012b
    PUSH EAX                            ; 00540131
    CALL core_box.cpp_CBox_setupCorners_FUN_005b1c80 ; 00540132
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_005b1c80(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    LEA EAX,[EBX + 0x710]               ; 00540137
    ADD ESP,0x14                        ; 0054013d
    CMP EAX,ESI                         ; 00540140
    JZ 0x00540154                       ; 00540142
        ;   XREF to: 00540154 (CONDITIONAL_JUMP)  ; LAB_00540154
    MOV EDX,dword ptr [ESI]             ; 00540144
    MOV dword ptr [EAX],EDX             ; 00540146
    MOV EDX,dword ptr [ESI + 0x4]       ; 00540148
    MOV dword ptr [EAX + 0x4],EDX       ; 0054014b
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054014e
    MOV dword ptr [EAX + 0x8],EDX       ; 00540151
    LEA ESI,[EBX + 0x71c]               ; 00540154
        ;   Label: LAB_00540154
    LEA EAX,[EBX + 0x30]                ; 0054015a
    CMP ESI,EAX                         ; 0054015d
    JZ 0x00540171                       ; 0054015f
        ;   XREF to: 00540171 (CONDITIONAL_JUMP)  ; LAB_00540171
    MOV EDX,dword ptr [EAX]             ; 00540161
    MOV dword ptr [ESI],EDX             ; 00540163
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540165
    MOV dword ptr [ESI + 0x4],EDX       ; 00540168
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054016b
    MOV dword ptr [ESI + 0x8],EDX       ; 0054016e
    CMP dword ptr [EBX + 0x430],0x1     ; 00540171
        ;   Label: LAB_00540171
    JZ 0x0054019d                       ; 00540178
        ;   XREF to: 0054019d (CONDITIONAL_JUMP)  ; LAB_0054019d
    ADD ESP,0x60                        ; 0054017a
    POP EDI                             ; 0054017d
    POP ESI                             ; 0054017e
    POP EBX                             ; 0054017f
    RET                                 ; 00540180
    MOV EAX,dword ptr [ESP]             ; 00540181
        ;   Label: LAB_00540181
    MOV dword ptr [ESP + 0x30],EAX      ; 00540184
    MOV EAX,dword ptr [ESP + 0x4]       ; 00540188
    MOV dword ptr [ESP + 0x34],EAX      ; 0054018c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00540190
    MOV dword ptr [ESP + 0x38],EAX      ; 00540194
    JMP 0x005400c0                      ; 00540198
        ;   XREF to: 005400c0 (UNCONDITIONAL_JUMP)  ; LAB_005400c0
    MOV dword ptr [EBX + 0x708],0x0     ; 0054019d
        ;   Label: LAB_0054019d
    ADD ESP,0x60                        ; 005401a7
    POP EDI                             ; 005401aa
    POP ESI                             ; 005401ab
    POP EBX                             ; 005401ac
    RET                                 ; 005401ad

