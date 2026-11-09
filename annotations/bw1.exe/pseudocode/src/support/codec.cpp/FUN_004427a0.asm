; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_004427a0(int *param_1,int *param_2)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_00442600 at 00442615
;   support_codec.cpp_FUN_004427e0 at 004427ec
;   support_codec.cpp_FUN_00443290 at 004432a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004427a0
        ;   Label: support_codec.cpp_FUN_004427a0
    PUSH ESI                            ; 004427a1
    PUSH EDI                            ; 004427a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004427a3
    MOV EDX,dword ptr [EBX]             ; 004427a7
    MOV ESI,dword ptr [ESP + 0x14]      ; 004427a9
    CMP EDX,0x8                         ; 004427ad
    JL 0x004427da                       ; 004427b0
        ;   XREF to: 004427da (CONDITIONAL_JUMP)  ; LAB_004427da
    XOR EDX,EDX                         ; 004427b2
        ;   Label: LAB_004427b2
    MOV DL,byte ptr [EBX + 0x4]         ; 004427b4
    PUSH EDX                            ; 004427b7
    MOV EAX,dword ptr [ESI]             ; 004427b8
    PUSH ESI                            ; 004427ba
    CALL dword ptr [EAX + 0x4]          ; 004427bb
    ADD ESP,0x8                         ; 004427be
    TEST EAX,EAX                        ; 004427c1
    JL 0x004427dc                       ; 004427c3
        ;   XREF to: 004427dc (CONDITIONAL_JUMP)  ; LAB_004427dc
    MOV ECX,dword ptr [EBX + 0x4]       ; 004427c5
    MOV EDI,dword ptr [EBX]             ; 004427c8
    SHR ECX,0x8                         ; 004427ca
    SUB EDI,0x8                         ; 004427cd
    MOV dword ptr [EBX + 0x4],ECX       ; 004427d0
    MOV dword ptr [EBX],EDI             ; 004427d3
    CMP EDI,0x8                         ; 004427d5
    JGE 0x004427b2                      ; 004427d8
        ;   XREF to: 004427b2 (CONDITIONAL_JUMP)  ; LAB_004427b2
    XOR EAX,EAX                         ; 004427da
        ;   Label: LAB_004427da
    POP EDI                             ; 004427dc
        ;   Label: LAB_004427dc
    POP ESI                             ; 004427dd
    POP EBX                             ; 004427de
    RET                                 ; 004427df

