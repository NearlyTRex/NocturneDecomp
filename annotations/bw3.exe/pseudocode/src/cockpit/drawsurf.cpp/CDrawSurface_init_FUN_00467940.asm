; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00467940(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 at 00467922
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467940
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00467940
    PUSH ESI                            ; 00467941
    PUSH EDI                            ; 00467942
    PUSH EBP                            ; 00467943
    MOV EAX,dword ptr [ESP + 0x14]      ; 00467944
    MOV EDX,dword ptr [ESP + 0x28]      ; 00467948
    MOV ECX,dword ptr [ESP + 0x18]      ; 0046794c
    MOV dword ptr [EAX + 0x8],ECX       ; 00467950
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00467953
    MOV dword ptr [EAX + 0xc],ECX       ; 00467957
    MOV ECX,dword ptr [ESP + 0x20]      ; 0046795a
    MOV dword ptr [EAX],ECX             ; 0046795e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00467960
    MOV dword ptr [EAX + 0x4],ECX       ; 00467964
    MOV ECX,dword ptr [EAX + 0x8]       ; 00467967
    MOV dword ptr [EAX + 0x10],ECX      ; 0046796a
    MOV ECX,dword ptr [EAX + 0xc]       ; 0046796d
    MOV dword ptr [EAX + 0x14],ECX      ; 00467970
    MOV EBX,dword ptr [EAX]             ; 00467973
    MOV ECX,dword ptr [EAX + 0x8]       ; 00467975
    ADD ECX,EBX                         ; 00467978
    DEC ECX                             ; 0046797a
    MOV dword ptr [EAX + 0x18],ECX      ; 0046797b
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046797e
    MOV ECX,dword ptr [EAX + 0xc]       ; 00467981
    ADD ECX,ESI                         ; 00467984
    DEC ECX                             ; 00467986
    MOV dword ptr [EAX + 0x1c],ECX      ; 00467987
    TEST EDX,EDX                        ; 0046798a
    JNZ 0x004679c7                      ; 0046798c
        ;   XREF to: 004679c7 (CONDITIONAL_JUMP)  ; LAB_004679c7
    CMP dword ptr [EAX + 0x10],0x0      ; 0046798e
        ;   Label: LAB_0046798e
    JL 0x00467a40                       ; 00467992
        ;   XREF to: 00467a40 (CONDITIONAL_JUMP)  ; LAB_00467a40
    CMP dword ptr [EAX + 0x14],0x0      ; 00467998
        ;   Label: LAB_00467998
    JL 0x00467a4c                       ; 0046799c
        ;   XREF to: 00467a4c (CONDITIONAL_JUMP)  ; LAB_00467a4c
    MOV EBX,dword ptr [0x005fba18]      ; 004679a2 | DAT_005fba18
        ;   Label: LAB_004679a2
    CMP EBX,dword ptr [EAX + 0x18]      ; 004679a8
    JG 0x004679b3                       ; 004679ab
        ;   XREF to: 004679b3 (CONDITIONAL_JUMP)  ; LAB_004679b3
    LEA EDX,[EBX + -0x1]                ; 004679ad
    MOV dword ptr [EAX + 0x18],EDX      ; 004679b0
    MOV ESI,dword ptr [0x005fba1c]      ; 004679b3 | DAT_005fba1c
        ;   Label: LAB_004679b3
    CMP ESI,dword ptr [EAX + 0x1c]      ; 004679b9
    JLE 0x00467a58                      ; 004679bc
        ;   XREF to: 00467a58 (CONDITIONAL_JUMP)  ; LAB_00467a58
    POP EBP                             ; 004679c2
    POP EDI                             ; 004679c3
    POP ESI                             ; 004679c4
    POP EBX                             ; 004679c5
    RET                                 ; 004679c6
    MOV EDI,dword ptr [EAX + 0x8]       ; 004679c7
        ;   Label: LAB_004679c7
    MOV ECX,dword ptr [EDX + 0x8]       ; 004679ca
    ADD EDI,ECX                         ; 004679cd
    MOV dword ptr [EAX + 0x8],EDI       ; 004679cf
    MOV EBP,dword ptr [EAX + 0xc]       ; 004679d2
    MOV ECX,dword ptr [EDX + 0xc]       ; 004679d5
    ADD EBP,ECX                         ; 004679d8
    MOV dword ptr [EAX + 0xc],EBP       ; 004679da
    MOV EBX,dword ptr [EAX + 0x10]      ; 004679dd
    MOV ECX,dword ptr [EDX + 0x8]       ; 004679e0
    ADD EBX,ECX                         ; 004679e3
    MOV dword ptr [EAX + 0x10],EBX      ; 004679e5
    MOV ESI,dword ptr [EAX + 0x14]      ; 004679e8
    MOV ECX,dword ptr [EDX + 0xc]       ; 004679eb
    ADD ESI,ECX                         ; 004679ee
    MOV dword ptr [EAX + 0x14],ESI      ; 004679f0
    MOV EDI,dword ptr [EAX + 0x18]      ; 004679f3
    MOV ECX,dword ptr [EDX + 0x8]       ; 004679f6
    ADD EDI,ECX                         ; 004679f9
    MOV dword ptr [EAX + 0x18],EDI      ; 004679fb
    MOV EBP,dword ptr [EAX + 0x1c]      ; 004679fe
    MOV ECX,dword ptr [EDX + 0xc]       ; 00467a01
    ADD EBP,ECX                         ; 00467a04
    MOV dword ptr [EAX + 0x1c],EBP      ; 00467a06
    MOV ECX,dword ptr [EAX + 0x10]      ; 00467a09
    MOV EBX,dword ptr [EDX + 0x10]      ; 00467a0c
    CMP ECX,EBX                         ; 00467a0f
    JGE 0x00467a16                      ; 00467a11
        ;   XREF to: 00467a16 (CONDITIONAL_JUMP)  ; LAB_00467a16
    MOV dword ptr [EAX + 0x10],EBX      ; 00467a13
    MOV ESI,dword ptr [EDX + 0x14]      ; 00467a16
        ;   Label: LAB_00467a16
    CMP ESI,dword ptr [EAX + 0x14]      ; 00467a19
    JLE 0x00467a21                      ; 00467a1c
        ;   XREF to: 00467a21 (CONDITIONAL_JUMP)  ; LAB_00467a21
    MOV dword ptr [EAX + 0x14],ESI      ; 00467a1e
    MOV EDI,dword ptr [EDX + 0x18]      ; 00467a21
        ;   Label: LAB_00467a21
    CMP EDI,dword ptr [EAX + 0x18]      ; 00467a24
    JGE 0x00467a2c                      ; 00467a27
        ;   XREF to: 00467a2c (CONDITIONAL_JUMP)  ; LAB_00467a2c
    MOV dword ptr [EAX + 0x18],EDI      ; 00467a29
    MOV EBP,dword ptr [EDX + 0x1c]      ; 00467a2c
        ;   Label: LAB_00467a2c
    CMP EBP,dword ptr [EAX + 0x1c]      ; 00467a2f
    JGE 0x0046798e                      ; 00467a32
        ;   XREF to: 0046798e (CONDITIONAL_JUMP)  ; LAB_0046798e
    MOV dword ptr [EAX + 0x1c],EBP      ; 00467a38
    JMP 0x0046798e                      ; 00467a3b
        ;   XREF to: 0046798e (UNCONDITIONAL_JUMP)  ; LAB_0046798e
    MOV dword ptr [EAX + 0x10],0x0      ; 00467a40
        ;   Label: LAB_00467a40
    JMP 0x00467998                      ; 00467a47
        ;   XREF to: 00467998 (UNCONDITIONAL_JUMP)  ; LAB_00467998
    MOV dword ptr [EAX + 0x14],0x0      ; 00467a4c
        ;   Label: LAB_00467a4c
    JMP 0x004679a2                      ; 00467a53
        ;   XREF to: 004679a2 (UNCONDITIONAL_JUMP)  ; LAB_004679a2
    LEA EDX,[ESI + -0x1]                ; 00467a58
        ;   Label: LAB_00467a58
    MOV dword ptr [EAX + 0x1c],EDX      ; 00467a5b
    POP EBP                             ; 00467a5e
    POP EDI                             ; 00467a5f
    POP ESI                             ; 00467a60
    POP EBX                             ; 00467a61
    RET                                 ; 00467a62

