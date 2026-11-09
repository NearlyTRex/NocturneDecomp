; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_00427a30(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_bugs.cpp_FUN_00425120 at 00425357
;   core_bugs.cpp_FUN_00426030 at 00426141
;   core_bugs.cpp_FUN_004263d0 at 0042657e
;   core_bugs.cpp_FUN_00426860 at 00426865
;
; Referenced Globals:
;   undefined4 DAT_005d5170
;   undefined4 DAT_005d5174
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427a30
        ;   Label: core_bugs.cpp_FUN_00427a30
    PUSH ESI                            ; 00427a31
    PUSH EDI                            ; 00427a32
    PUSH EBP                            ; 00427a33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00427a34
    LEA EBX,[EDI + 0x19d78]             ; 00427a38
    LEA ESI,[EDI + 0xc278]              ; 00427a3e
    MOV EAX,EBX                         ; 00427a44
    MOV EBP,ESI                         ; 00427a46
    CMP EBX,ESI                         ; 00427a48
    JNZ 0x00427b1d                      ; 00427a4a
        ;   XREF to: 00427b1d (CONDITIONAL_JUMP)  ; LAB_00427b1d
    LEA EBX,[EAX + 0xc]                 ; 00427a50
        ;   Label: LAB_00427a50
    CMP EBX,EBP                         ; 00427a53
    JZ 0x00427a68                       ; 00427a55
        ;   XREF to: 00427a68 (CONDITIONAL_JUMP)  ; LAB_00427a68
    MOV EAX,dword ptr [EBP]             ; 00427a57
    MOV dword ptr [EBX],EAX             ; 00427a5a
    MOV EAX,dword ptr [EBP + 0x4]       ; 00427a5c
    MOV dword ptr [EBX + 0x4],EAX       ; 00427a5f
    MOV EAX,dword ptr [EBP + 0x8]       ; 00427a62
    MOV dword ptr [EBX + 0x8],EAX       ; 00427a65
    MOV ESI,0x1                         ; 00427a68
        ;   Label: LAB_00427a68
    CMP ESI,dword ptr [EDI + 0xc26c]    ; 00427a6d
    JGE 0x00427aa0                      ; 00427a73
        ;   XREF to: 00427aa0 (CONDITIONAL_JUMP)  ; LAB_00427aa0
    LEA EBP,[EDI + 0x19d78]             ; 00427a75
    LEA EBX,[EDI + 0xc2b8]              ; 00427a7b
    PUSH EBX                            ; 00427a81
        ;   Label: LAB_00427a81
    PUSH EBP                            ; 00427a82
    INC ESI                             ; 00427a83
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00427a84
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD EBX,0x40                        ; 00427a89
    MOV ECX,dword ptr [EDI + 0xc26c]    ; 00427a8c
    ADD ESP,0x8                         ; 00427a92
    CMP ESI,ECX                         ; 00427a95
    JL 0x00427a81                       ; 00427a97
        ;   XREF to: 00427a81 (CONDITIONAL_JUMP)  ; LAB_00427a81
    LEA EAX,[EAX]                       ; 00427a99
    NOP                                 ; 00427a9f
    FLD float ptr [EDI + 0x19d78]       ; 00427aa0
        ;   Label: LAB_00427aa0
    FLD float ptr [EDI + 0x19d7c]       ; 00427aa6
    FLD float ptr [EDI + 0x19d80]       ; 00427aac
    FLD float ptr [EDI + 0x19d84]       ; 00427ab2
    FLD float ptr [EDI + 0x19d88]       ; 00427ab8
    FLD float ptr [EDI + 0x19d8c]       ; 00427abe
    FXCH ST5                            ; 00427ac4
    FLD float ptr [0x005d5170]          ; 00427ac6 | DAT_005d5170
    FXCH                                ; 00427acc
    FADD ST0,ST1                        ; 00427ace
    FXCH ST5                            ; 00427ad0
    FADD ST0,ST1                        ; 00427ad2
    FXCH ST4                            ; 00427ad4
    FADDP                               ; 00427ad6
    FXCH ST2                            ; 00427ad8
    FLD float ptr [0x005d5174]          ; 00427ada | DAT_005d5174
    FXCH                                ; 00427ae0
    FADD ST0,ST1                        ; 00427ae2
    FXCH ST2                            ; 00427ae4
    FADD ST0,ST1                        ; 00427ae6
    FXCH ST6                            ; 00427ae8
    FADDP                               ; 00427aea
    FXCH ST3                            ; 00427aec
    FSTP float ptr [EDI + 0x19d7c]      ; 00427aee
    FXCH                                ; 00427af4
    FSTP float ptr [EDI + 0x19d80]      ; 00427af6
    FSTP float ptr [EDI + 0x19d84]      ; 00427afc
    FXCH ST2                            ; 00427b02
    FSTP float ptr [EDI + 0x19d88]      ; 00427b04
    FXCH                                ; 00427b0a
    FSTP float ptr [EDI + 0x19d8c]      ; 00427b0c
    FSTP float ptr [EDI + 0x19d78]      ; 00427b12
    POP EBP                             ; 00427b18
    POP EDI                             ; 00427b19
    POP ESI                             ; 00427b1a
    POP EBX                             ; 00427b1b
    RET                                 ; 00427b1c
    MOV EDX,dword ptr [ESI]             ; 00427b1d
        ;   Label: LAB_00427b1d
    MOV dword ptr [EBX],EDX             ; 00427b1f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00427b21
    MOV dword ptr [EBX + 0x4],EDX       ; 00427b24
    MOV EDX,dword ptr [ESI + 0x8]       ; 00427b27
    MOV dword ptr [EBX + 0x8],EDX       ; 00427b2a
    JMP 0x00427a50                      ; 00427b2d
        ;   XREF to: 00427a50 (UNCONDITIONAL_JUMP)  ; LAB_00427a50

