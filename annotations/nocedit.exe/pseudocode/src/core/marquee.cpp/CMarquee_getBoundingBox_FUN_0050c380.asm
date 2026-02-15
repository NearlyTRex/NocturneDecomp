; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380(CMarquee *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c380
        ;   Label: core_marquee.cpp_CMarquee_getBoundingBox_FUN_0050c380
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050c381
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050c385
    LEA EDX,[ECX + 0x184]               ; 0050c389
    CMP EAX,EDX                         ; 0050c38f
    JNZ 0x0050c3a2                      ; 0050c391
        ;   XREF to: 0050c3a2 (CONDITIONAL_JUMP)  ; LAB_0050c3a2
    ADD ECX,0x190                       ; 0050c393
    LEA EDX,[EAX + 0xc]                 ; 0050c399
    CMP EDX,ECX                         ; 0050c39c
    JNZ 0x0050c3c1                      ; 0050c39e
        ;   XREF to: 0050c3c1 (CONDITIONAL_JUMP)  ; LAB_0050c3c1
    POP EBX                             ; 0050c3a0
    RET                                 ; 0050c3a1
    MOV EBX,dword ptr [EDX]             ; 0050c3a2
        ;   Label: LAB_0050c3a2
    MOV dword ptr [EAX],EBX             ; 0050c3a4
    MOV EBX,dword ptr [EDX + 0x4]       ; 0050c3a6
    MOV dword ptr [EAX + 0x4],EBX       ; 0050c3a9
    MOV EBX,dword ptr [EDX + 0x8]       ; 0050c3ac
    MOV dword ptr [EAX + 0x8],EBX       ; 0050c3af
    ADD ECX,0x190                       ; 0050c3b2
    LEA EDX,[EAX + 0xc]                 ; 0050c3b8
    CMP EDX,ECX                         ; 0050c3bb
    JNZ 0x0050c3c1                      ; 0050c3bd
        ;   XREF to: 0050c3c1 (CONDITIONAL_JUMP)  ; LAB_0050c3c1
    POP EBX                             ; 0050c3bf
    RET                                 ; 0050c3c0
    MOV EBX,dword ptr [ECX]             ; 0050c3c1
        ;   Label: LAB_0050c3c1
    MOV dword ptr [EDX],EBX             ; 0050c3c3
    MOV EBX,dword ptr [ECX + 0x4]       ; 0050c3c5
    MOV dword ptr [EDX + 0x4],EBX       ; 0050c3c8
    MOV EBX,dword ptr [ECX + 0x8]       ; 0050c3cb
    MOV dword ptr [EDX + 0x8],EBX       ; 0050c3ce
    POP EBX                             ; 0050c3d1
    RET                                 ; 0050c3d2

