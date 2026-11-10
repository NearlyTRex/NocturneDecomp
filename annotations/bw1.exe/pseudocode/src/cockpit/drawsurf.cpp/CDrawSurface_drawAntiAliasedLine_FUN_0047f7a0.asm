; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01bc11e8
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_00439640
;   cockpit_ckptutil.c_FUN_0043a030
;   cockpit_ckptutil.c_setLineBlendingDisabled_FUN_0043a010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f7a0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0
    PUSH ESI                            ; 0047f7a1
    PUSH EDI                            ; 0047f7a2
    PUSH EBP                            ; 0047f7a3
    SUB ESP,0x8                         ; 0047f7a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047f7a7
    MOV EDI,dword ptr [0x01c4f008]      ; 0047f7ab | DAT_01c4f008
    MOV EBP,dword ptr [0x01c4f010]      ; 0047f7b1 | DAT_01c4f010
    MOV EAX,[0x01c4f00c]                ; 0047f7b7 | DAT_01c4f00c
    MOV ESI,dword ptr [EBX + 0x10]      ; 0047f7bc
    MOV dword ptr [ESP],EAX             ; 0047f7bf
    MOV EAX,[0x01c4f014]                ; 0047f7c2 | DAT_01c4f014
    MOV dword ptr [0x01c4f008],ESI      ; 0047f7c7 | DAT_01c4f008
    MOV dword ptr [ESP + 0x4],EAX       ; 0047f7cd
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047f7d1
    MOV ESI,dword ptr [EBX + 0x14]      ; 0047f7d4
    MOV [0x01c4f010],EAX                ; 0047f7d7 | DAT_01c4f010
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0047f7dc
    MOV dword ptr [0x01c4f00c],ESI      ; 0047f7df | DAT_01c4f00c
    MOV [0x01c4f014],EAX                ; 0047f7e5 | DAT_01c4f014
    CALL cockpit_ckptutil.c_setLineBlendingDisabled_FUN_0043a010 ; 0047f7ea
        ;   XREF to: 0043a010 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_setLineBlendingDisabled_FUN_0043a010()
    PUSH 0x1                            ; 0047f7ef
    MOV ESI,EAX                         ; 0047f7f1
    CALL cockpit_ckptutil.c_FUN_0043a030 ; 0047f7f3
        ;   XREF to: 0043a030 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0043a030()
    MOV EDX,dword ptr [0x01bc11e8]      ; 0047f7f8 | DAT_01bc11e8
    ADD ESP,0x4                         ; 0047f7fe
    MOV ECX,dword ptr [EBX + 0xc]       ; 0047f801
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047f804
    PUSH EDX                            ; 0047f808
    ADD EAX,ECX                         ; 0047f809
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047f80b
    PUSH EAX                            ; 0047f80e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047f80f
    ADD EAX,EDX                         ; 0047f813
    PUSH EAX                            ; 0047f815
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047f816
    ADD EAX,ECX                         ; 0047f81a
    PUSH EAX                            ; 0047f81c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047f81d
    ADD EAX,EDX                         ; 0047f821
    PUSH EAX                            ; 0047f823
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00439640 ; 0047f824
        ;   XREF to: 00439640 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00439640(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 0047f829
    PUSH ESI                            ; 0047f82c
    CALL cockpit_ckptutil.c_FUN_0043a030 ; 0047f82d
        ;   XREF to: 0043a030 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0043a030()
    ADD ESP,0x4                         ; 0047f832
    MOV EAX,dword ptr [ESP]             ; 0047f835
    MOV dword ptr [0x01c4f008],EDI      ; 0047f838 | DAT_01c4f008
    MOV [0x01c4f00c],EAX                ; 0047f83e | DAT_01c4f00c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047f843
    MOV dword ptr [0x01c4f010],EBP      ; 0047f847 | DAT_01c4f010
    MOV [0x01c4f014],EAX                ; 0047f84d | DAT_01c4f014
    ADD ESP,0x8                         ; 0047f852
    POP EBP                             ; 0047f855
    POP EDI                             ; 0047f856
    POP ESI                             ; 0047f857
    POP EBX                             ; 0047f858
    RET                                 ; 0047f859

