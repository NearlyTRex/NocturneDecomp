; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_FUN_004c2170(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c7d60 at 004c7da4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2170
        ;   Label: core_fire.cpp_FUN_004c2170
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c2171
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c2175
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c2179
    CMP EAX,EDX                         ; 004c217d
    JNZ 0x004c219f                      ; 004c217f
        ;   XREF to: 004c219f (CONDITIONAL_JUMP)  ; LAB_004c219f
    LEA EDX,[EAX + 0xc]                 ; 004c2181
        ;   Label: LAB_004c2181
    CMP EDX,ECX                         ; 004c2184
    JNZ 0x004c21b1                      ; 004c2186
        ;   XREF to: 004c21b1 (CONDITIONAL_JUMP)  ; LAB_004c21b1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c2188
        ;   Label: LAB_004c2188
    MOV dword ptr [EAX + 0x20],0x2      ; 004c218c
    MOV dword ptr [EAX + 0x18],EDX      ; 004c2193
    MOV EDX,dword ptr [ESP + 0x18]      ; 004c2196
    MOV dword ptr [EAX + 0x1c],EDX      ; 004c219a
    POP EBX                             ; 004c219d
    RET                                 ; 004c219e
    MOV EBX,dword ptr [EDX]             ; 004c219f
        ;   Label: LAB_004c219f
    MOV dword ptr [EAX],EBX             ; 004c21a1
    MOV EBX,dword ptr [EDX + 0x4]       ; 004c21a3
    MOV dword ptr [EAX + 0x4],EBX       ; 004c21a6
    MOV EBX,dword ptr [EDX + 0x8]       ; 004c21a9
    MOV dword ptr [EAX + 0x8],EBX       ; 004c21ac
    JMP 0x004c2181                      ; 004c21af
        ;   XREF to: 004c2181 (UNCONDITIONAL_JUMP)  ; LAB_004c2181
    MOV EBX,dword ptr [ECX]             ; 004c21b1
        ;   Label: LAB_004c21b1
    MOV dword ptr [EDX],EBX             ; 004c21b3
    MOV EBX,dword ptr [ECX + 0x4]       ; 004c21b5
    MOV dword ptr [EDX + 0x4],EBX       ; 004c21b8
    MOV EBX,dword ptr [ECX + 0x8]       ; 004c21bb
    MOV dword ptr [EDX + 0x8],EBX       ; 004c21be
    JMP 0x004c2188                      ; 004c21c1
        ;   XREF to: 004c2188 (UNCONDITIONAL_JUMP)  ; LAB_004c2188

