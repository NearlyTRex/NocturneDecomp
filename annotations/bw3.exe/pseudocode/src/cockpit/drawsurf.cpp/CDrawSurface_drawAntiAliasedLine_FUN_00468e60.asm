; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_00437250
;   cockpit_ckptutil.c_FUN_00437c40
;   cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00437c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468e60
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60
    PUSH ESI                            ; 00468e61
    PUSH EDI                            ; 00468e62
    PUSH EBP                            ; 00468e63
    SUB ESP,0x8                         ; 00468e64
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00468e67
    MOV EDI,dword ptr [0x01c6b5a8]      ; 00468e6b | DAT_01c6b5a8
    MOV EBP,dword ptr [0x01c6b5b0]      ; 00468e71 | DAT_01c6b5b0
    MOV EAX,[0x01c6b5ac]                ; 00468e77 | DAT_01c6b5ac
    MOV ESI,dword ptr [EBX + 0x10]      ; 00468e7c
    MOV dword ptr [ESP],EAX             ; 00468e7f
    MOV EAX,[0x01c6b5b4]                ; 00468e82 | DAT_01c6b5b4
    MOV dword ptr [0x01c6b5a8],ESI      ; 00468e87 | DAT_01c6b5a8
    MOV dword ptr [ESP + 0x4],EAX       ; 00468e8d
    MOV EAX,dword ptr [EBX + 0x18]      ; 00468e91
    MOV ESI,dword ptr [EBX + 0x14]      ; 00468e94
    MOV [0x01c6b5b0],EAX                ; 00468e97 | DAT_01c6b5b0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00468e9c
    MOV dword ptr [0x01c6b5ac],ESI      ; 00468e9f | DAT_01c6b5ac
    MOV [0x01c6b5b4],EAX                ; 00468ea5 | DAT_01c6b5b4
    CALL cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00437c20 ; 00468eaa
        ;   XREF to: 00437c20 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00437c20()
    PUSH 0x1                            ; 00468eaf
    MOV ESI,EAX                         ; 00468eb1
    CALL cockpit_ckptutil.c_FUN_00437c40 ; 00468eb3
        ;   XREF to: 00437c40 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437c40()
    MOV EDX,dword ptr [0x01bdd7c0]      ; 00468eb8 | DAT_01bdd7c0
    ADD ESP,0x4                         ; 00468ebe
    MOV ECX,dword ptr [EBX + 0xc]       ; 00468ec1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00468ec4
    PUSH EDX                            ; 00468ec8
    ADD EAX,ECX                         ; 00468ec9
    MOV EDX,dword ptr [EBX + 0x8]       ; 00468ecb
    PUSH EAX                            ; 00468ece
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468ecf
    ADD EAX,EDX                         ; 00468ed3
    PUSH EAX                            ; 00468ed5
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468ed6
    ADD EAX,ECX                         ; 00468eda
    PUSH EAX                            ; 00468edc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468edd
    ADD EAX,EDX                         ; 00468ee1
    PUSH EAX                            ; 00468ee3
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00437250 ; 00468ee4
        ;   XREF to: 00437250 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00437250(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 00468ee9
    PUSH ESI                            ; 00468eec
    CALL cockpit_ckptutil.c_FUN_00437c40 ; 00468eed
        ;   XREF to: 00437c40 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437c40()
    ADD ESP,0x4                         ; 00468ef2
    MOV EAX,dword ptr [ESP]             ; 00468ef5
    MOV dword ptr [0x01c6b5a8],EDI      ; 00468ef8 | DAT_01c6b5a8
    MOV [0x01c6b5ac],EAX                ; 00468efe | DAT_01c6b5ac
    MOV EAX,dword ptr [ESP + 0x4]       ; 00468f03
    MOV dword ptr [0x01c6b5b0],EBP      ; 00468f07 | DAT_01c6b5b0
    MOV [0x01c6b5b4],EAX                ; 00468f0d | DAT_01c6b5b4
    ADD ESP,0x8                         ; 00468f12
    POP EBP                             ; 00468f15
    POP EDI                             ; 00468f16
    POP ESI                             ; 00468f17
    POP EBX                             ; 00468f18
    RET                                 ; 00468f19

