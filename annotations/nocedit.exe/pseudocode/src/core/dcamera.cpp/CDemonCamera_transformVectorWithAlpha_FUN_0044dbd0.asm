; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dbd0
        ;   Label: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
    PUSH EDI                            ; 0044dbd1
    PUSH EBP                            ; 0044dbd2
    SUB ESP,0x18                        ; 0044dbd3
    MOV EBP,ESI                         ; 0044dbd6
    MOV EDI,0x2d052e8                   ; 0044dbd8 | g_TransformMatrix
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044dbdd
    MOV EAX,dword ptr [ESI]             ; 0044dbe1
    IMUL dword ptr [EDI]                ; 0044dbe3 | g_TransformMatrix
    MOV EBX,EAX                         ; 0044dbe5
    MOV ECX,EDX                         ; 0044dbe7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dbe9
    IMUL dword ptr [EDI + 0xc]          ; 0044dbec | g_TransformMatrix[1][0]
    ADD EBX,EAX                         ; 0044dbef
    ADC ECX,EDX                         ; 0044dbf1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dbf3
    IMUL dword ptr [EDI + 0x18]         ; 0044dbf6 | g_TransformMatrix[2][0]
    ADD EAX,EBX                         ; 0044dbf9
    ADC EDX,ECX                         ; 0044dbfb
    SHRD EAX,EDX,0x10                   ; 0044dbfd
    MOV EDI,0x2d052ec                   ; 0044dc01 | g_TransformMatrix[0][1]
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044dc06
    MOV dword ptr [ESP],EAX             ; 0044dc0a
    MOV EAX,dword ptr [ESI]             ; 0044dc0d
    IMUL dword ptr [EDI]                ; 0044dc0f | g_TransformMatrix[0][1]
    MOV EBX,EAX                         ; 0044dc11
    MOV ECX,EDX                         ; 0044dc13
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dc15
    IMUL dword ptr [EDI + 0xc]          ; 0044dc18 | g_TransformMatrix[1][1]
    ADD EBX,EAX                         ; 0044dc1b
    ADC ECX,EDX                         ; 0044dc1d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dc1f
    IMUL dword ptr [EDI + 0x18]         ; 0044dc22 | g_TransformMatrix[2][1]
    ADD EAX,EBX                         ; 0044dc25
    ADC EDX,ECX                         ; 0044dc27
    SHRD EAX,EDX,0x10                   ; 0044dc29
    MOV EDI,0x2d052f0                   ; 0044dc2d | g_TransformMatrix[0][2]
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044dc32
    MOV dword ptr [ESP + 0x4],EAX       ; 0044dc36
    MOV EAX,dword ptr [ESI]             ; 0044dc3a
    IMUL dword ptr [EDI]                ; 0044dc3c | g_TransformMatrix[0][2]
    MOV EBX,EAX                         ; 0044dc3e
    MOV ECX,EDX                         ; 0044dc40
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dc42
    IMUL dword ptr [EDI + 0xc]          ; 0044dc45 | g_TransformMatrix[1][2]
    ADD EBX,EAX                         ; 0044dc48
    ADC ECX,EDX                         ; 0044dc4a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dc4c
    IMUL dword ptr [EDI + 0x18]         ; 0044dc4f | g_TransformMatrix[2][2]
    ADD EAX,EBX                         ; 0044dc52
    ADC EDX,ECX                         ; 0044dc54
    SHRD EAX,EDX,0x10                   ; 0044dc56
    MOV EDX,dword ptr [0x006703ec]      ; 0044dc5a | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044dc60 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xc],EAX       ; 0044dc61
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0044dc65
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044dc6a
    TEST EAX,EAX                        ; 0044dc6d
    JNZ 0x0044dd17                      ; 0044dc6f
        ;   XREF to: 0044dd17 (CONDITIONAL_JUMP)  ; LAB_0044dd17
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044dc75
    MOV ESI,ESP                         ; 0044dc79
    ADD EDI,0x19c                       ; 0044dc7b
    MOV EAX,dword ptr [ESI]             ; 0044dc81
    IMUL dword ptr [EDI]                ; 0044dc83
    MOV EBX,EAX                         ; 0044dc85
    MOV ECX,EDX                         ; 0044dc87
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dc89
    IMUL dword ptr [EDI + 0xc]          ; 0044dc8c
    ADD EBX,EAX                         ; 0044dc8f
    ADC ECX,EDX                         ; 0044dc91
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dc93
    IMUL dword ptr [EDI + 0x18]         ; 0044dc96
    ADD EAX,EBX                         ; 0044dc99
    ADC EDX,ECX                         ; 0044dc9b
    SHRD EAX,EDX,0x10                   ; 0044dc9d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044dca1
    MOV ESI,ESP                         ; 0044dca5
    ADD EDI,0x1a0                       ; 0044dca7
    MOV dword ptr [ESP + 0xc],EAX       ; 0044dcad
    MOV EAX,dword ptr [ESI]             ; 0044dcb1
    IMUL dword ptr [EDI]                ; 0044dcb3
    MOV EBX,EAX                         ; 0044dcb5
    MOV ECX,EDX                         ; 0044dcb7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dcb9
    IMUL dword ptr [EDI + 0xc]          ; 0044dcbc
    ADD EBX,EAX                         ; 0044dcbf
    ADC ECX,EDX                         ; 0044dcc1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dcc3
    IMUL dword ptr [EDI + 0x18]         ; 0044dcc6
    ADD EAX,EBX                         ; 0044dcc9
    ADC EDX,ECX                         ; 0044dccb
    SHRD EAX,EDX,0x10                   ; 0044dccd
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044dcd1
    MOV ESI,ESP                         ; 0044dcd5
    ADD EDI,0x1a4                       ; 0044dcd7
    MOV dword ptr [ESP + 0x10],EAX      ; 0044dcdd
    MOV EAX,dword ptr [ESI]             ; 0044dce1
    IMUL dword ptr [EDI]                ; 0044dce3
    MOV EBX,EAX                         ; 0044dce5
    MOV ECX,EDX                         ; 0044dce7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dce9
    IMUL dword ptr [EDI + 0xc]          ; 0044dcec
    ADD EBX,EAX                         ; 0044dcef
    ADC ECX,EDX                         ; 0044dcf1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dcf3
    IMUL dword ptr [EDI + 0x18]         ; 0044dcf6
    ADD EAX,EBX                         ; 0044dcf9
    ADC EDX,ECX                         ; 0044dcfb
    SHRD EAX,EDX,0x10                   ; 0044dcfd
    MOV dword ptr [ESP + 0x14],EAX      ; 0044dd01
    LEA ESI,[ESP + 0xc]                 ; 0044dd05
    MOV EDI,EBP                         ; 0044dd09
    MOVSD ES:EDI,ESI                    ; 0044dd0b
    MOVSD ES:EDI,ESI                    ; 0044dd0c
    MOVSD ES:EDI,ESI                    ; 0044dd0d
    MOV EAX,EBP                         ; 0044dd0e
    ADD ESP,0x18                        ; 0044dd10
    POP EBP                             ; 0044dd13
    POP EDI                             ; 0044dd14
    POP EBX                             ; 0044dd15
    RET                                 ; 0044dd16
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044dd17
        ;   Label: LAB_0044dd17
    SHL EAX,0x2                         ; 0044dd1b
    ADD ECX,EAX                         ; 0044dd1e
    MOV EDX,dword ptr [ESP]             ; 0044dd20
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044dd23
    IMUL EDX                            ; 0044dd29
    SHRD EAX,EDX,0x10                   ; 0044dd2b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044dd2f
    MOV ESI,EAX                         ; 0044dd33
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044dd35
    IMUL EDX                            ; 0044dd3b
    SHRD EAX,EDX,0x10                   ; 0044dd3d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044dd41
    ADD ESI,EAX                         ; 0044dd45
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044dd47
    IMUL EDX                            ; 0044dd4d
    SHRD EAX,EDX,0x10                   ; 0044dd4f
    MOV EDX,dword ptr [ESP]             ; 0044dd53
    ADD ESI,EAX                         ; 0044dd56
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044dd58
    MOV dword ptr [ESP + 0xc],ESI       ; 0044dd5e
    IMUL EDX                            ; 0044dd62
    SHRD EAX,EDX,0x10                   ; 0044dd64
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044dd68
    MOV ESI,EAX                         ; 0044dd6c
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044dd6e
    IMUL EDX                            ; 0044dd74
    SHRD EAX,EDX,0x10                   ; 0044dd76
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044dd7a
    ADD ESI,EAX                         ; 0044dd7e
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044dd80
    IMUL EDX                            ; 0044dd86
    SHRD EAX,EDX,0x10                   ; 0044dd88
    MOV EDX,dword ptr [ESP]             ; 0044dd8c
    ADD ESI,EAX                         ; 0044dd8f
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044dd91
    MOV dword ptr [ESP + 0x10],ESI      ; 0044dd97
    IMUL EDX                            ; 0044dd9b
    SHRD EAX,EDX,0x10                   ; 0044dd9d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044dda1
    MOV ESI,EAX                         ; 0044dda5
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044dda7
    IMUL EDX                            ; 0044ddad
    SHRD EAX,EDX,0x10                   ; 0044ddaf
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044ddb3
    ADD ESI,EAX                         ; 0044ddb7
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044ddb9
    IMUL EDX                            ; 0044ddbf
    SHRD EAX,EDX,0x10                   ; 0044ddc1
    ADD ESI,EAX                         ; 0044ddc5
    MOV dword ptr [ESP + 0x14],ESI      ; 0044ddc7
    LEA ESI,[ESP + 0xc]                 ; 0044ddcb
    MOV EDI,EBP                         ; 0044ddcf
    MOVSD ES:EDI,ESI                    ; 0044ddd1
    MOVSD ES:EDI,ESI                    ; 0044ddd2
    MOVSD ES:EDI,ESI                    ; 0044ddd3
    MOV EAX,EBP                         ; 0044ddd4
    ADD ESP,0x18                        ; 0044ddd6
    POP EBP                             ; 0044ddd9
    POP EDI                             ; 0044ddda
    POP EBX                             ; 0044dddb
    RET                                 ; 0044dddc

