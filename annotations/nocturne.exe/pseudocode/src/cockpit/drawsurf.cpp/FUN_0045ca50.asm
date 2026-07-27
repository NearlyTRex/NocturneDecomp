; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045ca50(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01b4d714
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_0042f600
;   cockpit_ckptutil.c_FUN_004301e0
;   cockpit_ckptutil.c_FUN_00430200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ca50
        ;   Label: cockpit_drawsurf.cpp_FUN_0045ca50
    PUSH ESI                            ; 0045ca51
    PUSH EDI                            ; 0045ca52
    PUSH EBP                            ; 0045ca53
    SUB ESP,0x8                         ; 0045ca54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045ca57
    MOV EDI,dword ptr [0x01c00c58]      ; 0045ca5b | DAT_01c00c58
    MOV EBP,dword ptr [0x01c00c60]      ; 0045ca61 | DAT_01c00c60
    MOV EAX,[0x01c00c5c]                ; 0045ca67 | DAT_01c00c5c
    MOV ESI,dword ptr [EBX + 0x10]      ; 0045ca6c
    MOV dword ptr [ESP],EAX             ; 0045ca6f
    MOV EAX,[0x01c00c64]                ; 0045ca72 | DAT_01c00c64
    MOV dword ptr [0x01c00c58],ESI      ; 0045ca77 | DAT_01c00c58
    MOV dword ptr [ESP + 0x4],EAX       ; 0045ca7d
    MOV EAX,dword ptr [EBX + 0x18]      ; 0045ca81
    MOV ESI,dword ptr [EBX + 0x14]      ; 0045ca84
    MOV [0x01c00c60],EAX                ; 0045ca87 | DAT_01c00c60
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0045ca8c
    MOV dword ptr [0x01c00c5c],ESI      ; 0045ca8f | DAT_01c00c5c
    MOV [0x01c00c64],EAX                ; 0045ca95 | DAT_01c00c64
    CALL cockpit_ckptutil.c_FUN_004301e0 ; 0045ca9a
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_004301e0()
    PUSH 0x1                            ; 0045ca9f
    MOV ESI,EAX                         ; 0045caa1
    CALL cockpit_ckptutil.c_FUN_00430200 ; 0045caa3
        ;   XREF to: 00430200 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00430200()
    MOV EDX,dword ptr [0x01b4d714]      ; 0045caa8 | DAT_01b4d714
    ADD ESP,0x4                         ; 0045caae
    MOV ECX,dword ptr [EBX + 0xc]       ; 0045cab1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045cab4
    PUSH EDX                            ; 0045cab8
    ADD EAX,ECX                         ; 0045cab9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0045cabb
    PUSH EAX                            ; 0045cabe
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045cabf
    ADD EAX,EDX                         ; 0045cac3
    PUSH EAX                            ; 0045cac5
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045cac6
    ADD EAX,ECX                         ; 0045caca
    PUSH EAX                            ; 0045cacc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045cacd
    ADD EAX,EDX                         ; 0045cad1
    PUSH EAX                            ; 0045cad3
    CALL cockpit_ckptutil.c_drawLineAA_FUN_0042f600 ; 0045cad4
        ;   XREF to: 0042f600 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_drawLineAA_FUN_0042f600()
    ADD ESP,0x14                        ; 0045cad9
    PUSH ESI                            ; 0045cadc
    CALL cockpit_ckptutil.c_FUN_00430200 ; 0045cadd
        ;   XREF to: 00430200 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00430200()
    ADD ESP,0x4                         ; 0045cae2
    MOV EAX,dword ptr [ESP]             ; 0045cae5
    MOV dword ptr [0x01c00c58],EDI      ; 0045cae8 | DAT_01c00c58
    MOV [0x01c00c5c],EAX                ; 0045caee | DAT_01c00c5c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045caf3
    MOV dword ptr [0x01c00c60],EBP      ; 0045caf7 | DAT_01c00c60
    MOV [0x01c00c64],EAX                ; 0045cafd | DAT_01c00c64
    ADD ESP,0x8                         ; 0045cb02
    POP EBP                             ; 0045cb05
    POP EDI                             ; 0045cb06
    POP ESI                             ; 0045cb07
    POP EBX                             ; 0045cb08
    RET                                 ; 0045cb09

