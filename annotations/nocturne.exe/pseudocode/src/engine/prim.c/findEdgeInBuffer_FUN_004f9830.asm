; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int param_1,int *param_2)
;
;
; XREF[2]:
;   engine_prim.c_FUN_004f9dd0 at 004f9f5a
;   engine_prim.c_FUN_004fa2e0 at 004fa4bf
;
; Referenced Globals:
;   undefined4 DAT_01e52a68
;   undefined4 DAT_01e52a6c
;   undefined4 DAT_01e52ab4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9830
        ;   Label: engine_prim.c_findEdgeInBuffer_FUN_004f9830
    PUSH ESI                            ; 004f9831
    MOV EBX,dword ptr [0x01e52a68]      ; 004f9832 | DAT_01e52a68
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f9838
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f983c
    MOV EAX,0x1e52a6c                   ; 004f9840
    XOR EDX,EDX                         ; 004f9845
    TEST EBX,EBX                        ; 004f9847
    JLE 0x004f985b                      ; 004f9849
        ;   XREF to: 004f985b (CONDITIONAL_JUMP)  ; LAB_004f985b
    CMP ECX,dword ptr [EAX]             ; 004f984b | DAT_01e52a6c | DAT_01e52ab4
        ;   Label: LAB_004f984b
    JNZ 0x004f9853                      ; 004f984d
        ;   XREF to: 004f9853 (CONDITIONAL_JUMP)  ; LAB_004f9853
    CMP EAX,ESI                         ; 004f984f
    JNZ 0x004f985d                      ; 004f9851
        ;   XREF to: 004f985d (CONDITIONAL_JUMP)  ; LAB_004f985d
    INC EDX                             ; 004f9853
        ;   Label: LAB_004f9853
    ADD EAX,0x48                        ; 004f9854 | DAT_01e52ab4
    CMP EDX,EBX                         ; 004f9857
    JL 0x004f984b                       ; 004f9859
        ;   XREF to: 004f984b (CONDITIONAL_JUMP)  ; LAB_004f984b
    XOR EAX,EAX                         ; 004f985b
        ;   Label: LAB_004f985b
    MOV dword ptr [0x01e52a68],EBX      ; 004f985d | DAT_01e52a68
        ;   Label: LAB_004f985d
    POP ESI                             ; 004f9863
    POP EBX                             ; 004f9864
    RET                                 ; 004f9865

