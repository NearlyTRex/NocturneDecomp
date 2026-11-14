; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01ba5c2c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_0042e930
;   cockpit_ckptutil.c_FUN_0042f300
;   cockpit_ckptutil.c_FUN_0042f320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467290
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290
    PUSH ESI                            ; 00467291
    PUSH EDI                            ; 00467292
    PUSH EBP                            ; 00467293
    SUB ESP,0x8                         ; 00467294
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00467297
    MOV EDI,dword ptr [0x01c35e48]      ; 0046729b | DAT_01c35e48
    MOV EBP,dword ptr [0x01c35e50]      ; 004672a1 | DAT_01c35e50
    MOV EAX,[0x01c35e4c]                ; 004672a7 | DAT_01c35e4c
    MOV ESI,dword ptr [EBX + 0x10]      ; 004672ac
    MOV dword ptr [ESP],EAX             ; 004672af
    MOV EAX,[0x01c35e54]                ; 004672b2 | DAT_01c35e54
    MOV dword ptr [0x01c35e48],ESI      ; 004672b7 | DAT_01c35e48
    MOV dword ptr [ESP + 0x4],EAX       ; 004672bd
    MOV EAX,dword ptr [EBX + 0x18]      ; 004672c1
    MOV ESI,dword ptr [EBX + 0x14]      ; 004672c4
    MOV [0x01c35e50],EAX                ; 004672c7 | DAT_01c35e50
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004672cc
    MOV dword ptr [0x01c35e4c],ESI      ; 004672cf | DAT_01c35e4c
    MOV [0x01c35e54],EAX                ; 004672d5 | DAT_01c35e54
    CALL cockpit_ckptutil.c_FUN_0042f300 ; 004672da
        ;   XREF to: 0042f300 (UNCONDITIONAL_CALL)  ; int cockpit_ckptutil.c_FUN_0042f300()
    PUSH 0x1                            ; 004672df
    MOV ESI,EAX                         ; 004672e1
    CALL cockpit_ckptutil.c_FUN_0042f320 ; 004672e3
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f320()
    MOV EDX,dword ptr [0x01ba5c2c]      ; 004672e8 | DAT_01ba5c2c
    ADD ESP,0x4                         ; 004672ee
    MOV ECX,dword ptr [EBX + 0xc]       ; 004672f1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004672f4
    PUSH EDX                            ; 004672f8
    ADD EAX,ECX                         ; 004672f9
    MOV EDX,dword ptr [EBX + 0x8]       ; 004672fb
    PUSH EAX                            ; 004672fe
    MOV EAX,dword ptr [ESP + 0x30]      ; 004672ff
    ADD EAX,EDX                         ; 00467303
    PUSH EAX                            ; 00467305
    MOV EAX,dword ptr [ESP + 0x30]      ; 00467306
    ADD EAX,ECX                         ; 0046730a
    PUSH EAX                            ; 0046730c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046730d
    ADD EAX,EDX                         ; 00467311
    PUSH EAX                            ; 00467313
    CALL cockpit_ckptutil.c_drawLineAA_FUN_0042e930 ; 00467314
        ;   XREF to: 0042e930 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_0042e930(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 00467319
    PUSH ESI                            ; 0046731c
    CALL cockpit_ckptutil.c_FUN_0042f320 ; 0046731d
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f320()
    ADD ESP,0x4                         ; 00467322
    MOV EAX,dword ptr [ESP]             ; 00467325
    MOV dword ptr [0x01c35e48],EDI      ; 00467328 | DAT_01c35e48
    MOV [0x01c35e4c],EAX                ; 0046732e | DAT_01c35e4c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467333
    MOV dword ptr [0x01c35e50],EBP      ; 00467337 | DAT_01c35e50
    MOV [0x01c35e54],EAX                ; 0046733d | DAT_01c35e54
    ADD ESP,0x8                         ; 00467342
    POP EBP                             ; 00467345
    POP EDI                             ; 00467346
    POP ESI                             ; 00467347
    POP EBX                             ; 00467348
    RET                                 ; 00467349

