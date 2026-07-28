; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_renderPolygonTexturedUVLit_FUN_00406920(SMRGLHeaderPrimitive *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;   engine_matrix.c_normalizeVector3DFixed_FUN_004cde10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406920
        ;   Label: engine_3d.c_renderPolygonTexturedUVLit_FUN_00406920
    PUSH ESI                            ; 00406921
    PUSH EDI                            ; 00406922
    PUSH EBP                            ; 00406923
    SUB ESP,0x18                        ; 00406924
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00406927
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040692b
    MOV dword ptr [ESP],EAX             ; 0040692e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00406931
    MOV dword ptr [ESP + 0x4],EAX       ; 00406934
    MOV EAX,dword ptr [EBX + 0x10]      ; 00406938
    MOV dword ptr [ESP + 0x8],EAX       ; 0040693b
    MOV EAX,ESP                         ; 0040693f
    PUSH EAX                            ; 00406941
    LEA ESI,[ESP + 0x10]                ; 00406942
    LEA EDI,[ESP + 0x4]                 ; 00406946
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004cde10 ; 0040694a
        ;   XREF to: 004cde10 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFixed_FUN_004cde10()
    LEA ESI,[ESP + 0x10]                ; 0040694f
    ADD ESP,0x4                         ; 00406953
    MOVSD ES:EDI,ESI                    ; 00406956
    MOVSD ES:EDI,ESI                    ; 00406957
    MOVSD ES:EDI,ESI                    ; 00406958
    LEA ESI,[EBX + 0x18]                ; 00406959
    LEA EAX,[EBX + 0x8]                 ; 0040695c
    PUSH EAX                            ; 0040695f
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406960
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406965
    TEST EAX,EAX                        ; 00406968
    JZ 0x004069b1                       ; 0040696a
        ;   XREF to: 004069b1 (CONDITIONAL_JUMP)  ; LAB_004069b1
    CMP dword ptr [0x01c03948],0x0      ; 0040696c | DAT_01c03948
    JNZ 0x004069d0                      ; 00406973
        ;   XREF to: 004069d0 (CONDITIONAL_JUMP)  ; LAB_004069d0
    CMP dword ptr [0x005b7624],0x20     ; 00406975 | DAT_005b7624
    JNZ 0x004069c4                      ; 0040697c
        ;   XREF to: 004069c4 (CONDITIONAL_JUMP)  ; LAB_004069c4
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040697e | DAT_01c00c7c
    MOV EDI,0x1                         ; 00406988
        ;   Label: LAB_00406988
    PUSH EBX                            ; 0040698d
    XOR EBP,EBP                         ; 0040698e
    MOV dword ptr [0x01c039a0],EDI      ; 00406990 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00406996 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040699c
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004069a1
    PUSH ESI                            ; 004069a4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004069a5
    PUSH EAX                            ; 004069a8
    CALL engine_clipper.c_FUN_00432cd0  ; 004069a9
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 004069ae
    MOV ESI,dword ptr [EBX + 0x4]       ; 004069b1
        ;   Label: LAB_004069b1
    LEA EAX,[EBX + 0x18]                ; 004069b4
    SHL ESI,0x2                         ; 004069b7
    ADD EAX,ESI                         ; 004069ba
    ADD ESP,0x18                        ; 004069bc
    POP EBP                             ; 004069bf
    POP EDI                             ; 004069c0
    POP ESI                             ; 004069c1
    POP EBX                             ; 004069c2
    RET                                 ; 004069c3
    MOV dword ptr [0x01c00c7c],0x530322 ; 004069c4 | DAT_01c00c7c
        ;   Label: LAB_004069c4
    JMP 0x00406988                      ; 004069ce
        ;   XREF to: 00406988 (UNCONDITIONAL_JUMP)  ; LAB_00406988
    CMP dword ptr [0x005b7624],0x20     ; 004069d0 | DAT_005b7624
        ;   Label: LAB_004069d0
    JNZ 0x004069e5                      ; 004069d7
        ;   XREF to: 004069e5 (CONDITIONAL_JUMP)  ; LAB_004069e5
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004069d9 | DAT_01c00c7c
    JMP 0x00406988                      ; 004069e3
        ;   XREF to: 00406988 (UNCONDITIONAL_JUMP)  ; LAB_00406988
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004069e5 | DAT_01c00c7c
        ;   Label: LAB_004069e5
    JMP 0x00406988                      ; 004069ef
        ;   XREF to: 00406988 (UNCONDITIONAL_JUMP)  ; LAB_00406988

