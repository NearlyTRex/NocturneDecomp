; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00469080(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2aec
;   undefined4 DAT_005f2af0
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_004691e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469080
        ;   Label: cockpit_drawsurf.cpp_FUN_00469080
    PUSH ESI                            ; 00469081
    PUSH EDI                            ; 00469082
    PUSH EBP                            ; 00469083
    SUB ESP,0x4                         ; 00469084
    MOV EDX,0x1                         ; 00469087
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046908c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00469090
    PUSH ESI                            ; 00469094
    MOV EBP,dword ptr [ESP + 0x24]      ; 00469095
    MOV EAX,[0x005f2af0]                ; 00469099 | DAT_005f2af0
    PUSH EDI                            ; 0046909e
    MOV EBX,dword ptr [0x005f2aec]      ; 0046909f | DAT_005f2aec
    MOV dword ptr [ESP + 0x8],EAX       ; 004690a5
    PUSH EBP                            ; 004690a9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004690aa
    MOV dword ptr [0x005f2aec],EDX      ; 004690ae | DAT_005f2aec
    PUSH EAX                            ; 004690b4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004690b5
    XOR ECX,ECX                         ; 004690b9
    PUSH EDX                            ; 004690bb
    MOV dword ptr [0x005f2af0],ECX      ; 004690bc | DAT_005f2af0
    CALL cockpit_drawsurf.cpp_FUN_004691e0 ; 004690c2
        ;   XREF to: 004691e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_004691e0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004690c7
    MOV EAX,dword ptr [ESP]             ; 004690ca
    MOV dword ptr [0x005f2aec],EBX      ; 004690cd | DAT_005f2aec
    MOV [0x005f2af0],EAX                ; 004690d3 | DAT_005f2af0
    ADD ESP,0x4                         ; 004690d8
    POP EBP                             ; 004690db
    POP EDI                             ; 004690dc
    POP ESI                             ; 004690dd
    POP EBX                             ; 004690de
    RET                                 ; 004690df

