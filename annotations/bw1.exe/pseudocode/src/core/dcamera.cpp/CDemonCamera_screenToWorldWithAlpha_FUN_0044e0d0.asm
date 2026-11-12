; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044e0d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e0d0
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044e0d0
    PUSH EDI                            ; 0044e0d1
    PUSH EBP                            ; 0044e0d2
    SUB ESP,0x1c                        ; 0044e0d3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044e0d6
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044e0da
    MOV dword ptr [ESP + 0x18],ESI      ; 0044e0de
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044e0e2
    MOV dword ptr [ESP + 0x8],EAX       ; 0044e0e5
    MOV EAX,dword ptr [ECX]             ; 0044e0e9
    MOV dword ptr [ESP],EAX             ; 0044e0eb
    MOV EDX,dword ptr [0x00612560]      ; 0044e0ee | DAT_00612560
    MOV EAX,dword ptr [ECX + 0x4]       ; 0044e0f4
    PUSH EDX                            ; 0044e0f7
    MOV dword ptr [ESP + 0x8],EAX       ; 0044e0f8
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0044e0fc
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    MOV EBX,EAX                         ; 0044e101
    ADD ESP,0x4                         ; 0044e103
    TEST EAX,EAX                        ; 0044e106
    JNZ 0x0044e1c0                      ; 0044e108
        ;   XREF to: 0044e1c0 (CONDITIONAL_JUMP)  ; LAB_0044e1c0
    MOV ESI,ESP                         ; 0044e10e
    LEA EDI,[EBP + 0x19c]               ; 0044e110
    MOV EAX,dword ptr [ESI]             ; 0044e116
    IMUL dword ptr [EDI]                ; 0044e118
    MOV EBX,EAX                         ; 0044e11a
    MOV ECX,EDX                         ; 0044e11c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e11e
    IMUL dword ptr [EDI + 0xc]          ; 0044e121
    ADD EBX,EAX                         ; 0044e124
    ADC ECX,EDX                         ; 0044e126
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e128
    IMUL dword ptr [EDI + 0x18]         ; 0044e12b
    ADD EAX,EBX                         ; 0044e12e
    ADC EDX,ECX                         ; 0044e130
    SHRD EAX,EDX,0x10                   ; 0044e132
    MOV ECX,dword ptr [EBP + 0x16c]     ; 0044e136
    MOV ESI,ESP                         ; 0044e13c
    ADD ECX,EAX                         ; 0044e13e
    LEA EDI,[EBP + 0x1a0]               ; 0044e140
    MOV dword ptr [ESP + 0xc],ECX       ; 0044e146
    MOV EAX,dword ptr [ESI]             ; 0044e14a
    IMUL dword ptr [EDI]                ; 0044e14c
    MOV EBX,EAX                         ; 0044e14e
    MOV ECX,EDX                         ; 0044e150
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e152
    IMUL dword ptr [EDI + 0xc]          ; 0044e155
    ADD EBX,EAX                         ; 0044e158
    ADC ECX,EDX                         ; 0044e15a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e15c
    IMUL dword ptr [EDI + 0x18]         ; 0044e15f
    ADD EAX,EBX                         ; 0044e162
    ADC EDX,ECX                         ; 0044e164
    SHRD EAX,EDX,0x10                   ; 0044e166
    MOV ECX,dword ptr [EBP + 0x170]     ; 0044e16a
    MOV ESI,ESP                         ; 0044e170
    ADD ECX,EAX                         ; 0044e172
    LEA EDI,[EBP + 0x1a4]               ; 0044e174
    MOV dword ptr [ESP + 0x10],ECX      ; 0044e17a
    MOV EAX,dword ptr [ESI]             ; 0044e17e
    IMUL dword ptr [EDI]                ; 0044e180
    MOV EBX,EAX                         ; 0044e182
    MOV ECX,EDX                         ; 0044e184
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e186
    IMUL dword ptr [EDI + 0xc]          ; 0044e189
    ADD EBX,EAX                         ; 0044e18c
    ADC ECX,EDX                         ; 0044e18e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e190
    IMUL dword ptr [EDI + 0x18]         ; 0044e193
    ADD EAX,EBX                         ; 0044e196
    ADC EDX,ECX                         ; 0044e198
    SHRD EAX,EDX,0x10                   ; 0044e19a
    MOV ECX,dword ptr [EBP + 0x174]     ; 0044e19e
    ADD ECX,EAX                         ; 0044e1a4
        ;   Label: LAB_0044e1a4
    MOV dword ptr [ESP + 0x14],ECX      ; 0044e1a6
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044e1aa
    LEA ESI,[ESP + 0xc]                 ; 0044e1ae
    MOVSD ES:EDI,ESI                    ; 0044e1b2
    MOVSD ES:EDI,ESI                    ; 0044e1b3
    MOVSD ES:EDI,ESI                    ; 0044e1b4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e1b5
    ADD ESP,0x1c                        ; 0044e1b9
    POP EBP                             ; 0044e1bc
    POP EDI                             ; 0044e1bd
    POP EBX                             ; 0044e1be
    RET                                 ; 0044e1bf
    LEA ECX,[EAX*0x4 + 0x0]             ; 0044e1c0
        ;   Label: LAB_0044e1c0
    ADD ECX,EBP                         ; 0044e1c7
    MOV EDX,dword ptr [ESP]             ; 0044e1c9
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044e1cc
    IMUL EDX                            ; 0044e1d2
    SHRD EAX,EDX,0x10                   ; 0044e1d4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e1d8
    MOV ESI,EAX                         ; 0044e1dc
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044e1de
    IMUL EDX                            ; 0044e1e4
    SHRD EAX,EDX,0x10                   ; 0044e1e6
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e1ea
    ADD ESI,EAX                         ; 0044e1ee
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044e1f0
    IMUL EDX                            ; 0044e1f6
    SHRD EAX,EDX,0x10                   ; 0044e1f8
    ADD ESI,EAX                         ; 0044e1fc
    MOV EAX,EBX                         ; 0044e1fe
    SHL EAX,0x2                         ; 0044e200
    SUB EAX,EBX                         ; 0044e203
    SHL EAX,0x2                         ; 0044e205
    ADD EBP,EAX                         ; 0044e208
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0044e20a
    ADD EAX,ESI                         ; 0044e210
    MOV EDX,dword ptr [ESP]             ; 0044e212
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e215
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044e219
    IMUL EDX                            ; 0044e21f
    SHRD EAX,EDX,0x10                   ; 0044e221
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e225
    MOV EBX,EAX                         ; 0044e229
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044e22b
    IMUL EDX                            ; 0044e231
    SHRD EAX,EDX,0x10                   ; 0044e233
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e237
    ADD EBX,EAX                         ; 0044e23b
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044e23d
    IMUL EDX                            ; 0044e243
    SHRD EAX,EDX,0x10                   ; 0044e245
    ADD EAX,EBX                         ; 0044e249
    MOV EBX,dword ptr [EBP + 0x11f0]    ; 0044e24b
    MOV EDX,dword ptr [ESP]             ; 0044e251
    ADD EBX,EAX                         ; 0044e254
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044e256
    MOV dword ptr [ESP + 0x10],EBX      ; 0044e25c
    IMUL EDX                            ; 0044e260
    SHRD EAX,EDX,0x10                   ; 0044e262
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e266
    MOV EBX,EAX                         ; 0044e26a
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044e26c
    IMUL EDX                            ; 0044e272
    SHRD EAX,EDX,0x10                   ; 0044e274
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e278
    ADD EBX,EAX                         ; 0044e27c
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044e27e
    IMUL EDX                            ; 0044e284
    SHRD EAX,EDX,0x10                   ; 0044e286
    MOV ECX,dword ptr [EBP + 0x11f4]    ; 0044e28a
    ADD EAX,EBX                         ; 0044e290
    JMP 0x0044e1a4                      ; 0044e292
        ;   XREF to: 0044e1a4 (UNCONDITIONAL_JUMP)  ; LAB_0044e1a4

