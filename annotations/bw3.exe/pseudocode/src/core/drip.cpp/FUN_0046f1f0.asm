; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_FUN_0046f1f0(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f1f0
        ;   Label: core_drip.cpp_FUN_0046f1f0
    PUSH EDI                            ; 0046f1f1
    PUSH EBP                            ; 0046f1f2
    SUB ESP,0x30                        ; 0046f1f3
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046f1f6
    MOV EBX,ESI                         ; 0046f1fa
    CMP dword ptr [EAX + 0x2d4],0x2     ; 0046f1fc
    JZ 0x0046f250                       ; 0046f203
        ;   XREF to: 0046f250 (CONDITIONAL_JUMP)  ; LAB_0046f250
    MOV ECX,0xbf000000                  ; 0046f205
    MOV EBP,0x3f000000                  ; 0046f20a
    MOV EAX,0x3f800000                  ; 0046f20f
    LEA EDI,[ESP + 0x18]                ; 0046f214
    XOR ESI,ESI                         ; 0046f218
    MOV dword ptr [ESP + 0x8],ECX       ; 0046f21a
    MOV dword ptr [ESP],ECX             ; 0046f21e
    MOV dword ptr [ESP + 0x4],ESI       ; 0046f221
    MOV dword ptr [ESP + 0xc],EBP       ; 0046f225
    MOV ECX,0x6                         ; 0046f229
    MOV ESI,ESP                         ; 0046f22e
    MOV dword ptr [ESP + 0x10],EAX      ; 0046f230
    MOV dword ptr [ESP + 0x14],EAX      ; 0046f234
    MOVSD.REP ES:EDI,ESI                ; 0046f238
        ;   Label: LAB_0046f238
    MOV ECX,0x6                         ; 0046f23a
    LEA ESI,[ESP + 0x18]                ; 0046f23f
    MOV EDI,EBX                         ; 0046f243
    MOVSD.REP ES:EDI,ESI                ; 0046f245
    MOV EAX,EBX                         ; 0046f247
    ADD ESP,0x30                        ; 0046f249
    POP EBP                             ; 0046f24c
    POP EDI                             ; 0046f24d
    POP EBX                             ; 0046f24e
    RET                                 ; 0046f24f
    ADD EAX,0x158                       ; 0046f250
        ;   Label: LAB_0046f250
    PUSH EAX                            ; 0046f255
    LEA EDI,[ESP + 0x1c]                ; 0046f256
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0046f25a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0046f25f
    MOV ESI,dword ptr [EAX + 0x350]     ; 0046f264
    ADD ESP,0x4                         ; 0046f26a
    JMP 0x0046f238                      ; 0046f26d
        ;   XREF to: 0046f238 (UNCONDITIONAL_JUMP)  ; LAB_0046f238

