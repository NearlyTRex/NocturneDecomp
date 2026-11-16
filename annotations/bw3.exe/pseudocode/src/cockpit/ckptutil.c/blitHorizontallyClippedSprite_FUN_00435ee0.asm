; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_00435ee0(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   max_height
; int              Stack[0x18]:4   unused_param
; int              Stack[0x1c]:4   src_y_offset
; int              Stack[0x20]:4   src_stride
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435ee0
        ;   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_00435ee0
    PUSH ESI                            ; 00435ee1
    PUSH EDI                            ; 00435ee2
    PUSH EBP                            ; 00435ee3
    SUB ESP,0x18                        ; 00435ee4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00435ee7
    MOV ESI,dword ptr [ESP + 0x30]      ; 00435eeb
    MOV EDI,dword ptr [ESP + 0x44]      ; 00435eef
    MOV EAX,dword ptr [ESP + 0x38]      ; 00435ef3
    SUB EAX,ESI                         ; 00435ef7
    INC EAX                             ; 00435ef9
    MOV EDX,dword ptr [0x01c5faec]      ; 00435efa | DAT_01c5faec
    MOV dword ptr [ESP + 0x14],EAX      ; 00435f00
    MOV EAX,[0x01c5faf0]                ; 00435f04 | DAT_01c5faf0
    SUB EAX,EDX                         ; 00435f09
    MOV dword ptr [ESP + 0x10],EAX      ; 00435f0b
    TEST EBX,EBX                        ; 00435f0f
    JNZ 0x00435f28                      ; 00435f11
        ;   XREF to: 00435f28 (CONDITIONAL_JUMP)  ; LAB_00435f28
    LEA EAX,[EAX]                       ; 00435f13
    LEA EDX,[EDX]                       ; 00435f19
    NOP                                 ; 00435f1f
    ADD ESP,0x18                        ; 00435f20
        ;   Label: LAB_00435f20
    POP EBP                             ; 00435f23
    POP EDI                             ; 00435f24
    POP ESI                             ; 00435f25
    POP EBX                             ; 00435f26
    RET                                 ; 00435f27
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80 ; 00435f28
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80()
        ;   Label: LAB_00435f28
    MOV ECX,dword ptr [ESP + 0x34]      ; 00435f2d
    MOV EBP,EAX                         ; 00435f31
    IMUL ECX,dword ptr [ESP + 0x48]     ; 00435f33
    MOV EAX,[0x005fba18]                ; 00435f38 | DAT_005fba18
    MOV EDX,EAX                         ; 00435f3d
    SAR EDX,0x1f                        ; 00435f3f
    SUB EAX,EDX                         ; 00435f42
    SAR EAX,0x1                         ; 00435f44
    ADD ECX,EBX                         ; 00435f46
    ADD EAX,ECX                         ; 00435f48
    LEA EBX,[EAX + ESI*0x1]             ; 00435f4a
    MOV EDX,dword ptr [0x005fba20]      ; 00435f4d | DAT_005fba20
    MOV EAX,dword ptr [ESP + 0x34]      ; 00435f53
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00435f57
    ADD EAX,EDI                         ; 00435f5b
    SUB ECX,EDI                         ; 00435f5d
    SHL EAX,0x2                         ; 00435f5f
    CMP EDX,0x8                         ; 00435f62
    JNZ 0x00435fac                      ; 00435f65
        ;   XREF to: 00435fac (CONDITIONAL_JUMP)  ; LAB_00435fac
    MOV EDI,dword ptr [EAX + 0x1c5faec] ; 00435f67
    ADD EDI,ESI                         ; 00435f6d
    MOV ESI,dword ptr [ESP + 0x34]      ; 00435f6f
    MOV dword ptr [ESP + 0x8],ECX       ; 00435f73
    CMP ECX,ESI                         ; 00435f77
    JLE 0x00435f20                      ; 00435f79
        ;   XREF to: 00435f20 (CONDITIONAL_JUMP)  ; LAB_00435f20
    MOV ECX,dword ptr [ESP + 0x14]      ; 00435f7b
        ;   Label: LAB_00435f7b
    PUSH ECX                            ; 00435f7f
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435f80
    MOV EAX,EDI                         ; 00435f84
    PUSH EBX                            ; 00435f86
    SUB EAX,EDX                         ; 00435f87
    PUSH EAX                            ; 00435f89
    CALL EBP                            ; 00435f8a
    ADD ESP,0xc                         ; 00435f8c
    INC ESI                             ; 00435f8f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00435f90
    MOV EAX,dword ptr [ESP + 0x48]      ; 00435f94
    MOV EDX,dword ptr [ESP + 0x8]       ; 00435f98
    ADD EDI,ECX                         ; 00435f9c
    ADD EBX,EAX                         ; 00435f9e
    CMP ESI,EDX                         ; 00435fa0
    JL 0x00435f7b                       ; 00435fa2
        ;   XREF to: 00435f7b (CONDITIONAL_JUMP)  ; LAB_00435f7b
    ADD ESP,0x18                        ; 00435fa4
    POP EBP                             ; 00435fa7
    POP EDI                             ; 00435fa8
    POP ESI                             ; 00435fa9
    POP EBX                             ; 00435faa
    RET                                 ; 00435fab
    MOV EDI,dword ptr [EAX + 0x1c5faec] ; 00435fac
        ;   Label: LAB_00435fac
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435fb2
    MOV EDX,EAX                         ; 00435fb6
    SAR EDX,0x1f                        ; 00435fb8
    SUB EAX,EDX                         ; 00435fbb
    SAR EAX,0x1                         ; 00435fbd
    MOV dword ptr [ESP + 0x10],EAX      ; 00435fbf
    MOV EAX,dword ptr [ESP + 0x40]      ; 00435fc3
    MOV dword ptr [ESP + 0xc],ECX       ; 00435fc7
    ADD EAX,EAX                         ; 00435fcb
    ADD ESI,ESI                         ; 00435fcd
    MOV dword ptr [ESP],EAX             ; 00435fcf
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435fd2
    ADD EDI,ESI                         ; 00435fd6
    ADD EAX,EAX                         ; 00435fd8
    MOV ESI,dword ptr [ESP + 0x34]      ; 00435fda
    MOV dword ptr [ESP + 0x4],EAX       ; 00435fde
    CMP ECX,ESI                         ; 00435fe2
    JLE 0x00435f20                      ; 00435fe4
        ;   XREF to: 00435f20 (CONDITIONAL_JUMP)  ; LAB_00435f20
    MOV ECX,dword ptr [ESP + 0x14]      ; 00435fea
        ;   Label: LAB_00435fea
    PUSH ECX                            ; 00435fee
    MOV EDX,dword ptr [ESP + 0x4]       ; 00435fef
    MOV EAX,EDI                         ; 00435ff3
    PUSH EBX                            ; 00435ff5
    SUB EAX,EDX                         ; 00435ff6
    PUSH EAX                            ; 00435ff8
    CALL EBP                            ; 00435ff9
    ADD ESP,0xc                         ; 00435ffb
    INC ESI                             ; 00435ffe
    MOV ECX,dword ptr [ESP + 0x4]       ; 00435fff
    MOV EAX,dword ptr [ESP + 0x48]      ; 00436003
    MOV EDX,dword ptr [ESP + 0xc]       ; 00436007
    ADD EDI,ECX                         ; 0043600b
    ADD EBX,EAX                         ; 0043600d
    CMP ESI,EDX                         ; 0043600f
    JL 0x00435fea                       ; 00436011
        ;   XREF to: 00435fea (CONDITIONAL_JUMP)  ; LAB_00435fea
    ADD ESP,0x18                        ; 00436013
    POP EBP                             ; 00436016
    POP EDI                             ; 00436017
    POP ESI                             ; 00436018
    POP EBX                             ; 00436019
    RET                                 ; 0043601a

