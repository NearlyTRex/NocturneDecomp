; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0043ca10(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ca10
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0043ca10
    PUSH EDI                            ; 0043ca11
    PUSH EBP                            ; 0043ca12
    SUB ESP,0x1c                        ; 0043ca13
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0043ca16
    MOV ECX,dword ptr [ESP + 0x30]      ; 0043ca1a
    MOV dword ptr [ESP + 0x18],ESI      ; 0043ca1e
    MOV EAX,dword ptr [ECX + 0x8]       ; 0043ca22
    MOV dword ptr [ESP + 0x8],EAX       ; 0043ca25
    MOV EAX,dword ptr [ECX]             ; 0043ca29
    MOV dword ptr [ESP],EAX             ; 0043ca2b
    MOV EDX,dword ptr [0x0060b280]      ; 0043ca2e | DAT_0060b280
    MOV EAX,dword ptr [ECX + 0x4]       ; 0043ca34
    PUSH EDX                            ; 0043ca37
    MOV dword ptr [ESP + 0x8],EAX       ; 0043ca38
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 0043ca3c
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    MOV EBX,EAX                         ; 0043ca41
    ADD ESP,0x4                         ; 0043ca43
    TEST EAX,EAX                        ; 0043ca46
    JNZ 0x0043cb00                      ; 0043ca48
        ;   XREF to: 0043cb00 (CONDITIONAL_JUMP)  ; LAB_0043cb00
    MOV ESI,ESP                         ; 0043ca4e
    LEA EDI,[EBP + 0x19c]               ; 0043ca50
    MOV EAX,dword ptr [ESI]             ; 0043ca56
    IMUL dword ptr [EDI]                ; 0043ca58
    MOV EBX,EAX                         ; 0043ca5a
    MOV ECX,EDX                         ; 0043ca5c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043ca5e
    IMUL dword ptr [EDI + 0xc]          ; 0043ca61
    ADD EBX,EAX                         ; 0043ca64
    ADC ECX,EDX                         ; 0043ca66
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043ca68
    IMUL dword ptr [EDI + 0x18]         ; 0043ca6b
    ADD EAX,EBX                         ; 0043ca6e
    ADC EDX,ECX                         ; 0043ca70
    SHRD EAX,EDX,0x10                   ; 0043ca72
    MOV ECX,dword ptr [EBP + 0x16c]     ; 0043ca76
    MOV ESI,ESP                         ; 0043ca7c
    ADD ECX,EAX                         ; 0043ca7e
    LEA EDI,[EBP + 0x1a0]               ; 0043ca80
    MOV dword ptr [ESP + 0xc],ECX       ; 0043ca86
    MOV EAX,dword ptr [ESI]             ; 0043ca8a
    IMUL dword ptr [EDI]                ; 0043ca8c
    MOV EBX,EAX                         ; 0043ca8e
    MOV ECX,EDX                         ; 0043ca90
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043ca92
    IMUL dword ptr [EDI + 0xc]          ; 0043ca95
    ADD EBX,EAX                         ; 0043ca98
    ADC ECX,EDX                         ; 0043ca9a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043ca9c
    IMUL dword ptr [EDI + 0x18]         ; 0043ca9f
    ADD EAX,EBX                         ; 0043caa2
    ADC EDX,ECX                         ; 0043caa4
    SHRD EAX,EDX,0x10                   ; 0043caa6
    MOV ECX,dword ptr [EBP + 0x170]     ; 0043caaa
    MOV ESI,ESP                         ; 0043cab0
    ADD ECX,EAX                         ; 0043cab2
    LEA EDI,[EBP + 0x1a4]               ; 0043cab4
    MOV dword ptr [ESP + 0x10],ECX      ; 0043caba
    MOV EAX,dword ptr [ESI]             ; 0043cabe
    IMUL dword ptr [EDI]                ; 0043cac0
    MOV EBX,EAX                         ; 0043cac2
    MOV ECX,EDX                         ; 0043cac4
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043cac6
    IMUL dword ptr [EDI + 0xc]          ; 0043cac9
    ADD EBX,EAX                         ; 0043cacc
    ADC ECX,EDX                         ; 0043cace
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043cad0
    IMUL dword ptr [EDI + 0x18]         ; 0043cad3
    ADD EAX,EBX                         ; 0043cad6
    ADC EDX,ECX                         ; 0043cad8
    SHRD EAX,EDX,0x10                   ; 0043cada
    MOV ECX,dword ptr [EBP + 0x174]     ; 0043cade
    ADD ECX,EAX                         ; 0043cae4
        ;   Label: LAB_0043cae4
    MOV dword ptr [ESP + 0x14],ECX      ; 0043cae6
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043caea
    LEA ESI,[ESP + 0xc]                 ; 0043caee
    MOVSD ES:EDI,ESI                    ; 0043caf2
    MOVSD ES:EDI,ESI                    ; 0043caf3
    MOVSD ES:EDI,ESI                    ; 0043caf4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043caf5
    ADD ESP,0x1c                        ; 0043caf9
    POP EBP                             ; 0043cafc
    POP EDI                             ; 0043cafd
    POP EBX                             ; 0043cafe
    RET                                 ; 0043caff
    LEA ECX,[EAX*0x4 + 0x0]             ; 0043cb00
        ;   Label: LAB_0043cb00
    ADD ECX,EBP                         ; 0043cb07
    MOV EDX,dword ptr [ESP]             ; 0043cb09
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0043cb0c
    IMUL EDX                            ; 0043cb12
    SHRD EAX,EDX,0x10                   ; 0043cb14
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043cb18
    MOV ESI,EAX                         ; 0043cb1c
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0043cb1e
    IMUL EDX                            ; 0043cb24
    SHRD EAX,EDX,0x10                   ; 0043cb26
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043cb2a
    ADD ESI,EAX                         ; 0043cb2e
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0043cb30
    IMUL EDX                            ; 0043cb36
    SHRD EAX,EDX,0x10                   ; 0043cb38
    ADD ESI,EAX                         ; 0043cb3c
    MOV EAX,EBX                         ; 0043cb3e
    SHL EAX,0x2                         ; 0043cb40
    SUB EAX,EBX                         ; 0043cb43
    SHL EAX,0x2                         ; 0043cb45
    ADD EBP,EAX                         ; 0043cb48
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0043cb4a
    ADD EAX,ESI                         ; 0043cb50
    MOV EDX,dword ptr [ESP]             ; 0043cb52
    MOV dword ptr [ESP + 0xc],EAX       ; 0043cb55
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0043cb59
    IMUL EDX                            ; 0043cb5f
    SHRD EAX,EDX,0x10                   ; 0043cb61
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043cb65
    MOV EBX,EAX                         ; 0043cb69
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0043cb6b
    IMUL EDX                            ; 0043cb71
    SHRD EAX,EDX,0x10                   ; 0043cb73
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043cb77
    ADD EBX,EAX                         ; 0043cb7b
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0043cb7d
    IMUL EDX                            ; 0043cb83
    SHRD EAX,EDX,0x10                   ; 0043cb85
    ADD EAX,EBX                         ; 0043cb89
    MOV EBX,dword ptr [EBP + 0x11f0]    ; 0043cb8b
    MOV EDX,dword ptr [ESP]             ; 0043cb91
    ADD EBX,EAX                         ; 0043cb94
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0043cb96
    MOV dword ptr [ESP + 0x10],EBX      ; 0043cb9c
    IMUL EDX                            ; 0043cba0
    SHRD EAX,EDX,0x10                   ; 0043cba2
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043cba6
    MOV EBX,EAX                         ; 0043cbaa
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0043cbac
    IMUL EDX                            ; 0043cbb2
    SHRD EAX,EDX,0x10                   ; 0043cbb4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043cbb8
    ADD EBX,EAX                         ; 0043cbbc
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0043cbbe
    IMUL EDX                            ; 0043cbc4
    SHRD EAX,EDX,0x10                   ; 0043cbc6
    MOV ECX,dword ptr [EBP + 0x11f4]    ; 0043cbca
    ADD EAX,EBX                         ; 0043cbd0
    JMP 0x0043cae4                      ; 0043cbd2
        ;   XREF to: 0043cae4 (UNCONDITIONAL_JUMP)  ; LAB_0043cae4

