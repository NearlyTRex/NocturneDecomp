; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0043cea0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vector
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cea0
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0043cea0
    PUSH EDI                            ; 0043cea1
    PUSH EBP                            ; 0043cea2
    SUB ESP,0x24                        ; 0043cea3
    MOV ECX,dword ptr [ESP + 0x34]      ; 0043cea6
    MOV EBX,ESI                         ; 0043ceaa
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043ceac
    MOV EAX,dword ptr [ESI]             ; 0043ceb0
    SUB EAX,dword ptr [ECX + 0x16c]     ; 0043ceb2
    MOV EDI,dword ptr [ECX + 0x170]     ; 0043ceb8
    MOV dword ptr [ESP + 0x18],EAX      ; 0043cebe
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043cec2
    SUB EAX,EDI                         ; 0043cec5
    MOV EBP,dword ptr [ECX + 0x174]     ; 0043cec7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043cecd
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043ced1
    SUB EAX,EBP                         ; 0043ced4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043ced6
    MOV dword ptr [ESP + 0x20],EAX      ; 0043ceda
    MOV EAX,dword ptr [ECX + 0x180]     ; 0043cede
    IMUL EDX                            ; 0043cee4
    SHRD EAX,EDX,0x10                   ; 0043cee6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043ceea
    MOV ESI,EAX                         ; 0043ceee
    MOV EAX,dword ptr [ECX + 0x18c]     ; 0043cef0
    IMUL EDX                            ; 0043cef6
    SHRD EAX,EDX,0x10                   ; 0043cef8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043cefc
    ADD ESI,EAX                         ; 0043cf00
    MOV EAX,dword ptr [ECX + 0x198]     ; 0043cf02
    IMUL EDX                            ; 0043cf08
    SHRD EAX,EDX,0x10                   ; 0043cf0a
    ADD ESI,EAX                         ; 0043cf0e
    MOV dword ptr [ESP + 0x8],ESI       ; 0043cf10
    TEST ESI,ESI                        ; 0043cf14
    JG 0x0043cf36                       ; 0043cf16
        ;   XREF to: 0043cf36 (CONDITIONAL_JUMP)  ; LAB_0043cf36
    LEA EDI,[ESP + 0xc]                 ; 0043cf18
        ;   Label: LAB_0043cf18
    MOV ESI,0x1468540                   ; 0043cf1c
    MOVSD ES:EDI,ESI                    ; 0043cf21
        ;   Label: LAB_0043cf21
    MOVSD ES:EDI,ESI                    ; 0043cf22
    MOVSD ES:EDI,ESI                    ; 0043cf23
    LEA ESI,[ESP + 0xc]                 ; 0043cf24
    MOV EDI,EBX                         ; 0043cf28
    MOVSD ES:EDI,ESI                    ; 0043cf2a
    MOVSD ES:EDI,ESI                    ; 0043cf2b
    MOVSD ES:EDI,ESI                    ; 0043cf2c
    MOV EAX,EBX                         ; 0043cf2d
    ADD ESP,0x24                        ; 0043cf2f
    POP EBP                             ; 0043cf32
    POP EDI                             ; 0043cf33
    POP EBX                             ; 0043cf34
    RET                                 ; 0043cf35
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043cf36
        ;   Label: LAB_0043cf36
    MOV EAX,dword ptr [ECX + 0x178]     ; 0043cf3a
    IMUL EDX                            ; 0043cf40
    SHRD EAX,EDX,0x10                   ; 0043cf42
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043cf46
    MOV ESI,EAX                         ; 0043cf4a
    MOV EAX,dword ptr [ECX + 0x184]     ; 0043cf4c
    IMUL EDX                            ; 0043cf52
    SHRD EAX,EDX,0x10                   ; 0043cf54
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043cf58
    ADD ESI,EAX                         ; 0043cf5c
    MOV EAX,dword ptr [ECX + 0x190]     ; 0043cf5e
    IMUL EDX                            ; 0043cf64
    SHRD EAX,EDX,0x10                   ; 0043cf66
    ADD ESI,EAX                         ; 0043cf6a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043cf6c
    MOV dword ptr [ESP],ESI             ; 0043cf70
    CMP ESI,EDX                         ; 0043cf73
    JGE 0x0043cf18                      ; 0043cf75
        ;   XREF to: 0043cf18 (CONDITIONAL_JUMP)  ; LAB_0043cf18
    MOV EDI,EDX                         ; 0043cf77
    NEG EDI                             ; 0043cf79
    CMP EDI,ESI                         ; 0043cf7b
    JGE 0x0043cf18                      ; 0043cf7d
        ;   XREF to: 0043cf18 (CONDITIONAL_JUMP)  ; LAB_0043cf18
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043cf7f
    MOV EAX,dword ptr [ECX + 0x17c]     ; 0043cf83
    IMUL EDX                            ; 0043cf89
    SHRD EAX,EDX,0x10                   ; 0043cf8b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043cf8f
    MOV ESI,EAX                         ; 0043cf93
    MOV EAX,dword ptr [ECX + 0x188]     ; 0043cf95
    IMUL EDX                            ; 0043cf9b
    SHRD EAX,EDX,0x10                   ; 0043cf9d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043cfa1
    ADD ESI,EAX                         ; 0043cfa5
    MOV EAX,dword ptr [ECX + 0x194]     ; 0043cfa7
    IMUL EDX                            ; 0043cfad
    SHRD EAX,EDX,0x10                   ; 0043cfaf
    ADD ESI,EAX                         ; 0043cfb3
    MOV EBP,dword ptr [ESP + 0x8]       ; 0043cfb5
    MOV dword ptr [ESP + 0x4],ESI       ; 0043cfb9
    CMP ESI,EBP                         ; 0043cfbd
    JGE 0x0043cf18                      ; 0043cfbf
        ;   XREF to: 0043cf18 (CONDITIONAL_JUMP)  ; LAB_0043cf18
    CMP EDI,ESI                         ; 0043cfc5
    JGE 0x0043cf18                      ; 0043cfc7
        ;   XREF to: 0043cf18 (CONDITIONAL_JUMP)  ; LAB_0043cf18
    LEA EDI,[ESP + 0xc]                 ; 0043cfcd
    MOV ESI,ESP                         ; 0043cfd1
    JMP 0x0043cf21                      ; 0043cfd3
        ;   XREF to: 0043cf21 (UNCONDITIONAL_JUMP)  ; LAB_0043cf21

