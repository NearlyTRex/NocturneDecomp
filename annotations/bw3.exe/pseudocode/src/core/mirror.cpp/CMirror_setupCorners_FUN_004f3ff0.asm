; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004f3ff0(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; CVector3f *      Stack[0x10]:4   corner3
; CVector3f *      Stack[0x14]:4   corner4
;
; XREF[1]:
;   core_glass.cpp_FUN_004c9ce0 at 004ca190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3ff0
        ;   Label: core_mirror.cpp_CMirror_setupCorners_FUN_004f3ff0
    PUSH ESI                            ; 004f3ff1
    PUSH EDI                            ; 004f3ff2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f3ff3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f3ff7
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f3ffb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f3fff
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f4003
    CMP EAX,EDX                         ; 004f4007
    JNZ 0x004f4044                      ; 004f4009
        ;   XREF to: 004f4044 (CONDITIONAL_JUMP)  ; LAB_004f4044
    LEA EDX,[EAX + 0xc]                 ; 004f400b
        ;   Label: LAB_004f400b
    CMP EDX,EBX                         ; 004f400e
    JZ 0x004f4022                       ; 004f4010
        ;   XREF to: 004f4022 (CONDITIONAL_JUMP)  ; LAB_004f4022
    MOV EDI,dword ptr [EBX]             ; 004f4012
    MOV dword ptr [EDX],EDI             ; 004f4014
    MOV EDI,dword ptr [EBX + 0x4]       ; 004f4016
    MOV dword ptr [EDX + 0x4],EDI       ; 004f4019
    MOV EDI,dword ptr [EBX + 0x8]       ; 004f401c
    MOV dword ptr [EDX + 0x8],EDI       ; 004f401f
    LEA EDX,[EAX + 0x18]                ; 004f4022
        ;   Label: LAB_004f4022
    CMP EDX,ECX                         ; 004f4025
    JZ 0x004f4039                       ; 004f4027
        ;   XREF to: 004f4039 (CONDITIONAL_JUMP)  ; LAB_004f4039
    MOV EBX,dword ptr [ECX]             ; 004f4029
    MOV dword ptr [EDX],EBX             ; 004f402b
    MOV EBX,dword ptr [ECX + 0x4]       ; 004f402d
    MOV dword ptr [EDX + 0x4],EBX       ; 004f4030
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f4033
    MOV dword ptr [EDX + 0x8],EBX       ; 004f4036
    ADD EAX,0x24                        ; 004f4039
        ;   Label: LAB_004f4039
    CMP EAX,ESI                         ; 004f403c
    JNZ 0x004f4056                      ; 004f403e
        ;   XREF to: 004f4056 (CONDITIONAL_JUMP)  ; LAB_004f4056
    POP EDI                             ; 004f4040
    POP ESI                             ; 004f4041
    POP EBX                             ; 004f4042
    RET                                 ; 004f4043
    MOV EDI,dword ptr [EDX]             ; 004f4044
        ;   Label: LAB_004f4044
    MOV dword ptr [EAX],EDI             ; 004f4046
    MOV EDI,dword ptr [EDX + 0x4]       ; 004f4048
    MOV dword ptr [EAX + 0x4],EDI       ; 004f404b
    MOV EDI,dword ptr [EDX + 0x8]       ; 004f404e
    MOV dword ptr [EAX + 0x8],EDI       ; 004f4051
    JMP 0x004f400b                      ; 004f4054
        ;   XREF to: 004f400b (UNCONDITIONAL_JUMP)  ; LAB_004f400b
    MOV EDX,dword ptr [ESI]             ; 004f4056
        ;   Label: LAB_004f4056
    MOV dword ptr [EAX],EDX             ; 004f4058
    MOV EDX,dword ptr [ESI + 0x4]       ; 004f405a
    MOV dword ptr [EAX + 0x4],EDX       ; 004f405d
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f4060
    MOV dword ptr [EAX + 0x8],EDX       ; 004f4063
    POP EDI                             ; 004f4066
    POP ESI                             ; 004f4067
    POP EBX                             ; 004f4068
    RET                                 ; 004f4069

