; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_0042d9f0(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)
;
; Parameters:
; void *           Stack[0x4]:4   src_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; void *           Stack[0x10]:4   background_base
; int              Stack[0x14]:4   dest_x
; int              Stack[0x18]:4   dest_y
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d9f0
        ;   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_0042d9f0
    PUSH ESI                            ; 0042d9f1
    PUSH EDI                            ; 0042d9f2
    PUSH EBP                            ; 0042d9f3
    SUB ESP,0x10                        ; 0042d9f4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0042d9f7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042d9fb
    MOV EBP,dword ptr [ESP + 0x30]      ; 0042d9ff
    MOV EDX,dword ptr [ESP + 0x38]      ; 0042da03
    TEST ECX,ECX                        ; 0042da07
    JLE 0x0042da70                      ; 0042da09
        ;   XREF to: 0042da70 (CONDITIONAL_JUMP)  ; LAB_0042da70
    MOV dword ptr [ESP + 0x4],ESI       ; 0042da0b
    IMUL EAX,ESI,0x0                    ; 0042da0f
    MOV dword ptr [ESP + 0xc],EDX       ; 0042da12
    ADD EDX,ECX                         ; 0042da16
    MOV dword ptr [ESP],EDX             ; 0042da18
    MOV dword ptr [ESP + 0x8],EAX       ; 0042da1b
    XOR EAX,EAX                         ; 0042da1f
        ;   Label: LAB_0042da1f
    TEST ESI,ESI                        ; 0042da21
    JLE 0x0042da52                      ; 0042da23
        ;   XREF to: 0042da52 (CONDITIONAL_JUMP)  ; LAB_0042da52
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042da25
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042da29
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042da2d
    ADD EDX,ECX                         ; 0042da31
    MOV ECX,dword ptr [0x006141b8]      ; 0042da33 | DAT_006141b8
        ;   Label: LAB_0042da33
    IMUL ECX,EDI                        ; 0042da39
    MOV EBX,dword ptr [ESP + 0x34]      ; 0042da3c
    ADD ECX,EAX                         ; 0042da40
    ADD ECX,EBX                         ; 0042da42
    MOV BL,byte ptr [EDX]               ; 0042da44
    ADD ECX,EBP                         ; 0042da46
    TEST BL,BL                          ; 0042da48
    JZ 0x0042da78                       ; 0042da4a
        ;   XREF to: 0042da78 (CONDITIONAL_JUMP)  ; LAB_0042da78
    INC EAX                             ; 0042da4c
        ;   Label: LAB_0042da4c
    INC EDX                             ; 0042da4d
    CMP EAX,ESI                         ; 0042da4e
    JL 0x0042da33                       ; 0042da50
        ;   XREF to: 0042da33 (CONDITIONAL_JUMP)  ; LAB_0042da33
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042da52
        ;   Label: LAB_0042da52
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042da56
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042da5a
    MOV EBX,dword ptr [ESP]             ; 0042da5e
    INC EDX                             ; 0042da61
    ADD ECX,EAX                         ; 0042da62
    MOV dword ptr [ESP + 0xc],EDX       ; 0042da64
    MOV dword ptr [ESP + 0x8],ECX       ; 0042da68
    CMP EDX,EBX                         ; 0042da6c
    JL 0x0042da1f                       ; 0042da6e
        ;   XREF to: 0042da1f (CONDITIONAL_JUMP)  ; LAB_0042da1f
    ADD ESP,0x10                        ; 0042da70
        ;   Label: LAB_0042da70
    POP EBP                             ; 0042da73
    POP EDI                             ; 0042da74
    POP ESI                             ; 0042da75
    POP EBX                             ; 0042da76
    RET                                 ; 0042da77
    MOV CL,byte ptr [ECX]               ; 0042da78
        ;   Label: LAB_0042da78
    MOV byte ptr [EDX],CL               ; 0042da7a
    JMP 0x0042da4c                      ; 0042da7c
        ;   XREF to: 0042da4c (UNCONDITIONAL_JUMP)  ; LAB_0042da4c

