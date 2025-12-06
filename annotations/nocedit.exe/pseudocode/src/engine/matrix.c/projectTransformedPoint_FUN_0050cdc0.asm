; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   point
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 at 00574cd3
;   engine_matrix.c_projectCachedPoint_FUN_0050cda0 at 0050cdb6
;
; Referenced Globals:
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050cdc0
        ;   Label: engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
    PUSH EDI                            ; 0050cdc1
    PUSH EBP                            ; 0050cdc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050cdc3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0050cdc7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0050cdca
    MOV EDI,dword ptr [ESI]             ; 0050cdcd
    TEST ECX,ECX                        ; 0050cdcf
    JLE 0x0050ce53                      ; 0050cdd1 | LAB_0050ce53
        ;   XREF to: 0050ce53 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0050cdd7
    CMP EDI,ECX                         ; 0050cdd9
    JLE 0x0050cde2                      ; 0050cddb | LAB_0050cde2
        ;   XREF to: 0050cde2 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0050cddd
    MOV EDX,ECX                         ; 0050cde2
        ;   Label: LAB_0050cde2
    NEG EDX                             ; 0050cde4
    CMP EDI,EDX                         ; 0050cde6
    JGE 0x0050cdec                      ; 0050cde8 | LAB_0050cdec
        ;   XREF to: 0050cdec (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 0050cdea
    CMP EBP,ECX                         ; 0050cdec
        ;   Label: LAB_0050cdec
    JLE 0x0050cdf2                      ; 0050cdee | LAB_0050cdf2
        ;   XREF to: 0050cdf2 (CONDITIONAL_JUMP)
    OR AL,0x4                           ; 0050cdf0
    MOV EDX,ECX                         ; 0050cdf2
        ;   Label: LAB_0050cdf2
    NEG EDX                             ; 0050cdf4
    CMP EBP,EDX                         ; 0050cdf6
    JGE 0x0050cdfc                      ; 0050cdf8 | LAB_0050cdfc
        ;   XREF to: 0050cdfc (CONDITIONAL_JUMP)
    OR AL,0x8                           ; 0050cdfa
    TEST EAX,EAX                        ; 0050cdfc
        ;   Label: LAB_0050cdfc
    JZ 0x0050ce0c                       ; 0050cdfe | LAB_0050ce0c
        ;   XREF to: 0050ce0c (CONDITIONAL_JUMP)
    OR EAX,0x80000000                   ; 0050ce00
    MOV dword ptr [ESI + 0x10],EAX      ; 0050ce05
    POP EBP                             ; 0050ce08
    POP EDI                             ; 0050ce09
    POP ESI                             ; 0050ce0a
    RET                                 ; 0050ce0b
    PUSH EBX                            ; 0050ce0c
        ;   Label: LAB_0050ce0c
    MOV EAX,0x7fffffff                  ; 0050ce0d
    MOV EDX,EAX                         ; 0050ce12
    SAR EDX,0x1f                        ; 0050ce14
    IDIV ECX                            ; 0050ce17
    MOV EBX,ECX                         ; 0050ce19
    MOV EDX,dword ptr [0x02d02548]      ; 0050ce1b | int g_ViewportCenterXFixed
    MOV dword ptr [ESI + 0xc],EAX       ; 0050ce21
    MOV EAX,EDI                         ; 0050ce24
    IMUL EDX                            ; 0050ce26
    IDIV EBX                            ; 0050ce28
    MOV EDX,dword ptr [0x02d02550]      ; 0050ce2a | int g_ViewportRightFixed
    MOV EBX,ECX                         ; 0050ce30
    ADD EAX,EDX                         ; 0050ce32
    MOV EDX,dword ptr [0x02d0254c]      ; 0050ce34 | int g_ViewportCenterYFixed
    MOV dword ptr [ESI + 0x10],EAX      ; 0050ce3a
    MOV EAX,EBP                         ; 0050ce3d
    IMUL EDX                            ; 0050ce3f
    IDIV EBX                            ; 0050ce41
    MOV EDX,dword ptr [0x02d02554]      ; 0050ce43 | int g_ViewportBottomFixed
    ADD EAX,EDX                         ; 0050ce49
    MOV dword ptr [ESI + 0x14],EAX      ; 0050ce4b
    POP EBX                             ; 0050ce4e
    POP EBP                             ; 0050ce4f
    POP EDI                             ; 0050ce50
    POP ESI                             ; 0050ce51
    RET                                 ; 0050ce52
    MOV dword ptr [ESI + 0x10],0x80000010 ; 0050ce53
        ;   Label: LAB_0050ce53
    POP EBP                             ; 0050ce5a
    POP EDI                             ; 0050ce5b
    POP ESI                             ; 0050ce5c
    RET                                 ; 0050ce5d

