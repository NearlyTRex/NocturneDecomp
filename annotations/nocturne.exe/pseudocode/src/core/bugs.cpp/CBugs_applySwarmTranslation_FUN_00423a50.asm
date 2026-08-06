; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(CBugs *this_ptr,CVector3f *new_position)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_bugs.cpp_CBugs_FUN_00422050 at 00422340
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 00422597
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423a50
        ;   Label: core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50
    PUSH ESI                            ; 00423a51
    SUB ESP,0xc                         ; 00423a52
    MOV ESI,dword ptr [ESP + 0x18]      ; 00423a55
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00423a59
    LEA EAX,[ESI + 0x20]                ; 00423a5d
    FLD float ptr [EDX]                 ; 00423a60
    FSUB float ptr [EAX]                ; 00423a62
    FSTP float ptr [ESP]                ; 00423a64
    FLD float ptr [EDX + 0x4]           ; 00423a67
    FSUB float ptr [EAX + 0x4]          ; 00423a6a
    FSTP float ptr [ESP + 0x4]          ; 00423a6d
    FLD float ptr [EDX + 0x8]           ; 00423a71
    FSUB float ptr [EAX + 0x8]          ; 00423a74
    FSTP float ptr [ESP + 0x8]          ; 00423a77
    MOV ECX,dword ptr [EDX]             ; 00423a7b
    MOV dword ptr [EAX],ECX             ; 00423a7d
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423a7f
    MOV dword ptr [EAX + 0x4],ECX       ; 00423a82
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423a85
    MOV dword ptr [EAX + 0x8],ECX       ; 00423a88
    MOV EDX,dword ptr [ESI + 0xbd28]    ; 00423a8b
    XOR ECX,ECX                         ; 00423a91
    TEST EDX,EDX                        ; 00423a93
    JLE 0x00423af0                      ; 00423a95
        ;   XREF to: 00423af0 (CONDITIONAL_JUMP)  ; LAB_00423af0
    LEA EAX,[ESI + 0xbd34]              ; 00423a97
    FLD float ptr [EAX]                 ; 00423a9d
        ;   Label: LAB_00423a9d
    FSUB float ptr [ESP]                ; 00423a9f
    FLD float ptr [EAX + 0x4]           ; 00423aa2
    FXCH                                ; 00423aa5
    FSTP float ptr [EAX]                ; 00423aa7
    FSUB float ptr [ESP + 0x4]          ; 00423aa9
    FLD float ptr [EAX + 0x8]           ; 00423aad
    FXCH                                ; 00423ab0
    FSTP float ptr [EAX + 0x4]          ; 00423ab2
    FSUB float ptr [ESP + 0x8]          ; 00423ab5
    FLD float ptr [EAX + 0x18]          ; 00423ab9
    FXCH                                ; 00423abc
    FSTP float ptr [EAX + 0x8]          ; 00423abe
    FSUB float ptr [ESP]                ; 00423ac1
    FLD float ptr [EAX + 0x1c]          ; 00423ac4
    FXCH                                ; 00423ac7
    FSTP float ptr [EAX + 0x18]         ; 00423ac9
    FSUB float ptr [ESP + 0x4]          ; 00423acc
    FLD float ptr [EAX + 0x20]          ; 00423ad0
    FXCH                                ; 00423ad3
    FSTP float ptr [EAX + 0x1c]         ; 00423ad5
    FSUB float ptr [ESP + 0x8]          ; 00423ad8
    INC ECX                             ; 00423adc
    FSTP float ptr [EAX + 0x20]         ; 00423add
    MOV EBX,dword ptr [ESI + 0xbd28]    ; 00423ae0
    ADD EAX,0x40                        ; 00423ae6
    CMP ECX,EBX                         ; 00423ae9
    JL 0x00423a9d                       ; 00423aeb
        ;   XREF to: 00423a9d (CONDITIONAL_JUMP)  ; LAB_00423a9d
    LEA EAX,[EAX]                       ; 00423aed
    LEA EAX,[ESI + 0x19834]             ; 00423af0
        ;   Label: LAB_00423af0
    FLD float ptr [EAX]                 ; 00423af6
    FSUB float ptr [ESP]                ; 00423af8
    FLD float ptr [EAX + 0x4]           ; 00423afb
    FXCH                                ; 00423afe
    FSTP float ptr [EAX]                ; 00423b00
    FSUB float ptr [ESP + 0x4]          ; 00423b02
    FLD float ptr [EAX + 0x8]           ; 00423b06
    FXCH                                ; 00423b09
    FSTP float ptr [EAX + 0x4]          ; 00423b0b
    FSUB float ptr [ESP + 0x8]          ; 00423b0e
    FSTP float ptr [EAX + 0x8]          ; 00423b12
    LEA EAX,[ESI + 0x19840]             ; 00423b15
    XOR ECX,ECX                         ; 00423b1b
    FLD float ptr [EAX]                 ; 00423b1d
    FSUB float ptr [ESP]                ; 00423b1f
    FLD float ptr [EAX + 0x4]           ; 00423b22
    FXCH                                ; 00423b25
    FSTP float ptr [EAX]                ; 00423b27
    FSUB float ptr [ESP + 0x4]          ; 00423b29
    FLD float ptr [EAX + 0x8]           ; 00423b2d
    FXCH                                ; 00423b30
    FSTP float ptr [EAX + 0x4]          ; 00423b32
    FSUB float ptr [ESP + 0x8]          ; 00423b35
    LEA EBX,[ESI + 0x30]                ; 00423b39
    FSTP float ptr [EAX + 0x8]          ; 00423b3c
    IMUL EAX,ECX,0x30                   ; 00423b3f
        ;   Label: LAB_00423b3f
    MOV EDX,EBX                         ; 00423b42
    ADD EAX,ESI                         ; 00423b44
    FLD float ptr [EAX + 0x12720]       ; 00423b46
        ;   Label: LAB_00423b46
    FSUB float ptr [ESP + 0x4]          ; 00423b4c
    ADD EAX,0x4                         ; 00423b50
    FSTP float ptr [EAX + 0x1271c]      ; 00423b53
    CMP EAX,EDX                         ; 00423b59
    JNZ 0x00423b46                      ; 00423b5b
        ;   XREF to: 00423b46 (CONDITIONAL_JUMP)  ; LAB_00423b46
    INC ECX                             ; 00423b5d
    ADD EBX,0x30                        ; 00423b5e
    CMP ECX,0xc                         ; 00423b61
    JL 0x00423b3f                       ; 00423b64
        ;   XREF to: 00423b3f (CONDITIONAL_JUMP)  ; LAB_00423b3f
    ADD ESP,0xc                         ; 00423b66
    POP ESI                             ; 00423b69
    POP EBX                             ; 00423b6a
    RET                                 ; 00423b6b

