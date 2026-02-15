; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj *this_ptr,int vertex_index)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3050
        ;   Label: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
    PUSH ESI                            ; 005d3051
    PUSH EDI                            ; 005d3052
    PUSH EBP                            ; 005d3053
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3054
    MOV EBX,dword ptr [ESP + 0x18]      ; 005d3058
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d305c
    XOR ESI,ESI                         ; 005d305f
    TEST EDX,EDX                        ; 005d3061
    JBE 0x005d3092                      ; 005d3063
        ;   XREF to: 005d3092 (CONDITIONAL_JUMP)  ; LAB_005d3092
    IMUL EAX,ESI,0x68                   ; 005d3065
        ;   Label: LAB_005d3065
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d3068
    ADD EAX,EDX                         ; 005d306b
    LEA EDI,[EAX + 0x4]                 ; 005d306d
    XOR EDX,EDX                         ; 005d3070
    MOV EAX,EDI                         ; 005d3072
    LEA ECX,[EDI + 0xc]                 ; 005d3074
    CMP EBX,dword ptr [EDI]             ; 005d3077
    JZ 0x005d3087                       ; 005d3079
        ;   XREF to: 005d3087 (CONDITIONAL_JUMP)  ; LAB_005d3087
    ADD EAX,0x4                         ; 005d307b
        ;   Label: LAB_005d307b
    INC EDX                             ; 005d307e
    CMP EAX,ECX                         ; 005d307f
    JNC 0x005d3087                      ; 005d3081
        ;   XREF to: 005d3087 (CONDITIONAL_JUMP)  ; LAB_005d3087
    CMP EBX,dword ptr [EAX]             ; 005d3083
    JNZ 0x005d307b                      ; 005d3085
        ;   XREF to: 005d307b (CONDITIONAL_JUMP)  ; LAB_005d307b
    CMP EDX,0x3                         ; 005d3087
        ;   Label: LAB_005d3087
    JC 0x005d309c                       ; 005d308a
        ;   XREF to: 005d309c (CONDITIONAL_JUMP)  ; LAB_005d309c
    INC ESI                             ; 005d308c
    CMP ESI,dword ptr [EBP + 0x8]       ; 005d308d
    JC 0x005d3065                       ; 005d3090
        ;   XREF to: 005d3065 (CONDITIONAL_JUMP)  ; LAB_005d3065
    MOV EAX,0x1                         ; 005d3092
        ;   Label: LAB_005d3092
    POP EBP                             ; 005d3097
        ;   Label: LAB_005d3097
    POP EDI                             ; 005d3098
    POP ESI                             ; 005d3099
    POP EBX                             ; 005d309a
    RET                                 ; 005d309b
    PUSH ESI                            ; 005d309c
        ;   Label: LAB_005d309c
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d309d
    PUSH EBP                            ; 005d30a0
    CALL dword ptr [EAX + 0x40]         ; 005d30a1
    ADD ESP,0x8                         ; 005d30a4
    TEST EAX,EAX                        ; 005d30a7
    JZ 0x005d3097                       ; 005d30a9
        ;   XREF to: 005d3097 (CONDITIONAL_JUMP)  ; LAB_005d3097
    DEC ESI                             ; 005d30ab
    INC ESI                             ; 005d30ac
    CMP ESI,dword ptr [EBP + 0x8]       ; 005d30ad
    JC 0x005d3065                       ; 005d30b0
        ;   XREF to: 005d3065 (CONDITIONAL_JUMP)  ; LAB_005d3065
    MOV EAX,0x1                         ; 005d30b2
    POP EBP                             ; 005d30b7
    POP EDI                             ; 005d30b8
    POP ESI                             ; 005d30b9
    POP EBX                             ; 005d30ba
    RET                                 ; 005d30bb

