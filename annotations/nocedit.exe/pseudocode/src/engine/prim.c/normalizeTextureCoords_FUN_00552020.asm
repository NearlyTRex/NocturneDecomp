; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_normalizeTextureCoords_FUN_00552020(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[4]:
;   engine_3d.c_rasterizePolygonCustom_FUN_005fd4e0 at 005fd782
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553cb0
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 0055272f
;   engine_prim.c_renderScanlinePolygon_FUN_00553470 at 0055378a
;
; Referenced Globals:
;   undefined4 DAT_01000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552020
        ;   Label: engine_prim.c_normalizeTextureCoords_FUN_00552020
    PUSH ESI                            ; 00552021
    PUSH EDI                            ; 00552022
    PUSH EBP                            ; 00552023
    MOV EBX,dword ptr [ESP + 0x14]      ; 00552024
    MOV EBP,dword ptr [ESP + 0x18]      ; 00552028
    MOV ESI,0x7fffffff                  ; 0055202c
    XOR EAX,EAX                         ; 00552031
    TEST EBP,EBP                        ; 00552033
    JLE 0x0055204a                      ; 00552035
        ;   XREF to: 0055204a (CONDITIONAL_JUMP)  ; LAB_0055204a
    MOV ECX,EBX                         ; 00552037
    MOV EDX,dword ptr [ECX + 0x8]       ; 00552039
        ;   Label: LAB_00552039
    CMP ESI,EDX                         ; 0055203c
    JLE 0x00552042                      ; 0055203e
        ;   XREF to: 00552042 (CONDITIONAL_JUMP)  ; LAB_00552042
    MOV ESI,EDX                         ; 00552040
    INC EAX                             ; 00552042
        ;   Label: LAB_00552042
    ADD ECX,0x30                        ; 00552043
    CMP EAX,EBP                         ; 00552046
    JL 0x00552039                       ; 00552048
        ;   XREF to: 00552039 (CONDITIONAL_JUMP)  ; LAB_00552039
    XOR EDI,EDI                         ; 0055204a
        ;   Label: LAB_0055204a
    TEST EBP,EBP                        ; 0055204c
    JLE 0x00552061                      ; 0055204e
        ;   XREF to: 00552061 (CONDITIONAL_JUMP)  ; LAB_00552061
    MOV ECX,EBX                         ; 00552050
    MOV EBX,dword ptr [ECX + 0x8]       ; 00552052
        ;   Label: LAB_00552052
    TEST EBX,EBX                        ; 00552055
    JNZ 0x00552066                      ; 00552057
        ;   XREF to: 00552066 (CONDITIONAL_JUMP)  ; LAB_00552066
    INC EDI                             ; 00552059
    ADD ECX,0x30                        ; 0055205a
    CMP EDI,EBP                         ; 0055205d
    JL 0x00552052                       ; 0055205f
        ;   XREF to: 00552052 (CONDITIONAL_JUMP)  ; LAB_00552052
    POP EBP                             ; 00552061
        ;   Label: LAB_00552061
    POP EDI                             ; 00552062
    POP ESI                             ; 00552063
    POP EBX                             ; 00552064
    RET                                 ; 00552065
    MOV EDX,ESI                         ; 00552066
        ;   Label: LAB_00552066
    MOV EAX,dword ptr [ECX + 0x18]      ; 00552068
    IMUL EDX                            ; 0055206b
    IDIV EBX                            ; 0055206d
    MOV dword ptr [ECX + 0x18],EAX      ; 0055206f
    MOV EDX,ESI                         ; 00552072
    MOV EBX,dword ptr [ECX + 0x8]       ; 00552074
    MOV EAX,dword ptr [ECX + 0x1c]      ; 00552077
    IMUL EDX                            ; 0055207a
    IDIV EBX                            ; 0055207c
    MOV EDX,0x1000000                   ; 0055207e | DAT_01000000
    MOV EBX,dword ptr [ECX + 0x8]       ; 00552083
    MOV dword ptr [ECX + 0x1c],EAX      ; 00552086
    MOV EAX,ESI                         ; 00552089
    IMUL EDX                            ; 0055208b
    IDIV EBX                            ; 0055208d
    MOV dword ptr [ECX + 0x8],EAX       ; 0055208f
    INC EDI                             ; 00552092
    ADD ECX,0x30                        ; 00552093
    CMP EDI,EBP                         ; 00552096
    JL 0x00552052                       ; 00552098
        ;   XREF to: 00552052 (CONDITIONAL_JUMP)  ; LAB_00552052
    POP EBP                             ; 0055209a
    POP EDI                             ; 0055209b
    POP ESI                             ; 0055209c
    POP EBX                             ; 0055209d
    RET                                 ; 0055209e

