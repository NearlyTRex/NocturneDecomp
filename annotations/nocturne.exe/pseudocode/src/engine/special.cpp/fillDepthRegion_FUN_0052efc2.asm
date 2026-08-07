; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_fillDepthRegion_FUN_0052efc2(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; Referenced Globals:
;   undefined8 DAT_005bf48c
;   undefined4 DAT_005bf494
;   int g_UseExternalRenderer
;
; Called Functions:
;   engine_special.cpp_clearZBox_FUN_00532b70
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052efc2
        ;   Label: engine_special.cpp_fillDepthRegion_FUN_0052efc2
    MOV EBP,ESP                         ; 0052efc3
    PUSH ESI                            ; 0052efc5
    PUSH EDI                            ; 0052efc6
    CMP dword ptr [0x01c02594],0x0      ; 0052efc7 | g_UseExternalRenderer
    JZ 0x0052efe9                       ; 0052efce
        ;   XREF to: 0052efe9 (CONDITIONAL_JUMP)  ; LAB_0052efe9
    PUSH dword ptr [EBP + 0x14]         ; 0052efd0
    PUSH dword ptr [EBP + 0x10]         ; 0052efd3
    PUSH dword ptr [EBP + 0xc]          ; 0052efd6
    PUSH dword ptr [EBP + 0x8]          ; 0052efd9
    CALL engine_special.cpp_clearZBox_FUN_00532b70 ; 0052efdc
        ;   XREF to: 00532b70 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBox_FUN_00532b70(int left, int right, int top, int bottom)
    POP EAX                             ; 0052efe1
    POP EAX                             ; 0052efe2
    POP EAX                             ; 0052efe3
    POP EAX                             ; 0052efe4
    POP EDI                             ; 0052efe5
    POP ESI                             ; 0052efe6
    LEAVE                               ; 0052efe7
    RET                                 ; 0052efe8
    PUSHAD                              ; 0052efe9
        ;   Label: LAB_0052efe9
    CLD                                 ; 0052efea
    PUSH DS                             ; 0052efeb
    POP ES                              ; 0052efec
    MOV ECX,dword ptr [EBP + 0xc]       ; 0052efed
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052eff0
    SUB ECX,dword ptr [EBP + 0x8]       ; 0052eff3
    MOV EAX,0x0                         ; 0052eff6
    INC ECX                             ; 0052effb
    MOV EDX,dword ptr [EBP + 0x8]       ; 0052effc
    SHL EDX,0x2                         ; 0052efff
    FLD double ptr [0x005bf48c]         ; 0052f002 | DAT_005bf48c
    PUSH ECX                            ; 0052f008
        ;   Label: LAB_0052f008
    MOV EDI,dword ptr [EBX*0x4 + 0x1bd4260] ; 0052f009
    ADD EDI,EDX                         ; 0052f010
    AND EDI,0xfffffff8                  ; 0052f012
    SHR ECX,0x1                         ; 0052f015
    FST double ptr [EDI]                ; 0052f017
        ;   Label: LAB_0052f017
    ADD EDI,0x8                         ; 0052f019
    DEC ECX                             ; 0052f01c
    JGE 0x0052f017                      ; 0052f01d
        ;   XREF to: 0052f017 (CONDITIONAL_JUMP)  ; LAB_0052f017
    POP ECX                             ; 0052f01f
    INC EBX                             ; 0052f020
    CMP EBX,dword ptr [EBP + 0x14]      ; 0052f021
    JBE 0x0052f008                      ; 0052f024
        ;   XREF to: 0052f008 (CONDITIONAL_JUMP)  ; LAB_0052f008
    FSTP double ptr [0x005bf494]        ; 0052f026 | DAT_005bf494
    POPAD                               ; 0052f02c
    POP EDI                             ; 0052f02d
    POP ESI                             ; 0052f02e
    LEAVE                               ; 0052f02f
    RET                                 ; 0052f030

