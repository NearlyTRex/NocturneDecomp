; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_0041ed20(CBride *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007bccdc
;   undefined4 DAT_007bcd00
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ed20
        ;   Label: core_bride.cpp_CBride_getTargetPoints_FUN_0041ed20
    PUSH ESI                            ; 0041ed21
    PUSH EDI                            ; 0041ed22
    SUB ESP,0x30                        ; 0041ed23
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041ed26
    MOV EBX,dword ptr [ESP + 0x44]      ; 0041ed2a
    MOV ESI,dword ptr [EAX + 0x10b18]   ; 0041ed2e
    SHL ESI,0x2                         ; 0041ed34
    ADD ESI,EAX                         ; 0041ed37
    MOV EDX,dword ptr [ESI + 0x23f4]    ; 0041ed39
    ADD EAX,0x2b4                       ; 0041ed3f
    TEST EDX,EDX                        ; 0041ed44
    JZ 0x0041ed8c                       ; 0041ed46
        ;   XREF to: 0041ed8c (CONDITIONAL_JUMP)  ; LAB_0041ed8c
    MOV ESI,dword ptr [0x007bccdc]      ; 0041ed48 | DAT_007bccdc
    PUSH ESI                            ; 0041ed4e
    PUSH EAX                            ; 0041ed4f
    LEA ESI,[ESP + 0x2c]                ; 0041ed50
    LEA EDI,[ESP + 0x8]                 ; 0041ed54
    CALL core_skeleton.cpp_FUN_00546a90 ; 0041ed58
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x2c]                ; 0041ed5d
    ADD ESP,0x8                         ; 0041ed61
    MOV EAX,ESP                         ; 0041ed64
    MOVSD ES:EDI,ESI                    ; 0041ed66
    MOVSD ES:EDI,ESI                    ; 0041ed67
    MOVSD ES:EDI,ESI                    ; 0041ed68
    CMP EBX,EAX                         ; 0041ed69
    JZ 0x0041ed80                       ; 0041ed6b
        ;   XREF to: 0041ed80 (CONDITIONAL_JUMP)  ; LAB_0041ed80
    MOV EAX,dword ptr [ESP]             ; 0041ed6d
    MOV dword ptr [EBX],EAX             ; 0041ed70
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041ed72
    MOV dword ptr [EBX + 0x4],EAX       ; 0041ed76
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041ed79
    MOV dword ptr [EBX + 0x8],EAX       ; 0041ed7d
    MOV EAX,0x1                         ; 0041ed80
        ;   Label: LAB_0041ed80
    ADD ESP,0x30                        ; 0041ed85
    POP EDI                             ; 0041ed88
    POP ESI                             ; 0041ed89
    POP EBX                             ; 0041ed8a
    RET                                 ; 0041ed8b
    MOV ECX,dword ptr [0x007bcd00]      ; 0041ed8c | DAT_007bcd00
        ;   Label: LAB_0041ed8c
    PUSH ECX                            ; 0041ed92
    PUSH EAX                            ; 0041ed93
    LEA ESI,[ESP + 0x20]                ; 0041ed94
    LEA EDI,[ESP + 0x14]                ; 0041ed98
    CALL core_skeleton.cpp_FUN_00546a90 ; 0041ed9c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x20]                ; 0041eda1
    ADD ESP,0x8                         ; 0041eda5
    LEA EAX,[ESP + 0xc]                 ; 0041eda8
    MOVSD ES:EDI,ESI                    ; 0041edac
    MOVSD ES:EDI,ESI                    ; 0041edad
    MOVSD ES:EDI,ESI                    ; 0041edae
    CMP EBX,EAX                         ; 0041edaf
    JZ 0x0041ed80                       ; 0041edb1
        ;   XREF to: 0041ed80 (CONDITIONAL_JUMP)  ; LAB_0041ed80
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041edb3
    MOV dword ptr [EBX],EAX             ; 0041edb7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041edb9
    MOV dword ptr [EBX + 0x4],EAX       ; 0041edbd
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041edc0
    MOV dword ptr [EBX + 0x8],EAX       ; 0041edc4
    MOV EAX,0x1                         ; 0041edc7
    ADD ESP,0x30                        ; 0041edcc
    POP EDI                             ; 0041edcf
    POP ESI                             ; 0041edd0
    POP EBX                             ; 0041edd1
    RET                                 ; 0041edd2

