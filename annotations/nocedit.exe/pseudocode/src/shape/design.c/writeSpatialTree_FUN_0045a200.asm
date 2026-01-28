; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,FILE *output_file,int node_index)
;
; Parameters:
; STreeNode *      Stack[0x4]:4   node
; FILE *           Stack[0x8]:4   output_file
; int              Stack[0xc]:4   node_index
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_MODEL_d_0061ae20
;   TerminatedCString s_JUMP_s_0061ae2a
;   TerminatedCString s_ORDER_d_d_d_d_MODEL_d_MO_0061ae35
;   float g_BSPScalingFactor = 65535
;   SModelPartName[500] g_ModelPartNames
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a200
        ;   Label: shape_design.c_writeSpatialTree_FUN_0045a200
    PUSH ESI                            ; 0045a201
    PUSH EDI                            ; 0045a202
    PUSH EBP                            ; 0045a203
    MOV EBP,ESP                         ; 0045a204
    SUB ESP,0x10                        ; 0045a206
    CMP dword ptr [EBP + 0x14],0x0      ; 0045a20c
    JZ 0x0045a30a                       ; 0045a210
        ;   XREF to: 0045a30a (CONDITIONAL_JUMP)  ; LAB_0045a30a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045a216
    PUSH EAX                            ; 0045a219
    MOV EAX,0x61ae20                    ; 0045a21a | = "MODEL%d:\n"
    PUSH EAX                            ; 0045a21f | = "MODEL%d:\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a220
    PUSH EAX                            ; 0045a223
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a224
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a229
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a22c
    CMP dword ptr [EAX + 0x8],0x0       ; 0045a22f
    JNZ 0x0045a25b                      ; 0045a233
        ;   XREF to: 0045a25b (CONDITIONAL_JUMP)  ; LAB_0045a25b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a235
    IMUL EAX,dword ptr [EAX + 0xc],0x14 ; 0045a238
    MOV EDX,0x1e50190                   ; 0045a23c | g_ModelPartNames
    ADD EAX,EDX                         ; 0045a241
    PUSH EAX                            ; 0045a243
    MOV EAX,0x61ae2a                    ; 0045a244 | = "\tJUMP\t%s\n\n"
    PUSH EAX                            ; 0045a249 | = "\tJUMP\t%s\n\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a24a
    PUSH EAX                            ; 0045a24d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a24e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a253
    JMP 0x0045a30a                      ; 0045a256
        ;   XREF to: 0045a30a (UNCONDITIONAL_JUMP)  ; LAB_0045a30a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a25b
        ;   Label: LAB_0045a25b
    FLD float ptr [EAX + 0xc]           ; 0045a25e
    FMUL float ptr [0x0061ae5a]         ; 0045a261 | g_BSPScalingFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a267
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x10]       ; 0045a26c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a26f
    FLD float ptr [EAX + 0x10]          ; 0045a272
    FMUL float ptr [0x0061ae5a]         ; 0045a275 | g_BSPScalingFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a27b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 0045a280
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a283
    FLD float ptr [EAX + 0x14]          ; 0045a286
    FMUL float ptr [0x0061ae5a]         ; 0045a289 | g_BSPScalingFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a28f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x8]        ; 0045a294
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a297
    FLD float ptr [EAX + 0x18]          ; 0045a29a
    FMUL float ptr [0x0061ae5a]         ; 0045a29d | g_BSPScalingFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045a2a3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x4]        ; 0045a2a8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045a2ab
    ADD EAX,EAX                         ; 0045a2ae
    PUSH EAX                            ; 0045a2b0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045a2b1
    ADD EAX,EAX                         ; 0045a2b4
    INC EAX                             ; 0045a2b6
    PUSH EAX                            ; 0045a2b7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a2b8
    PUSH EAX                            ; 0045a2bb
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a2bc
    PUSH EAX                            ; 0045a2bf
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a2c0
    PUSH EAX                            ; 0045a2c3
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045a2c4
    PUSH EAX                            ; 0045a2c7
    MOV EAX,0x61ae35                    ; 0045a2c8 | = "\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n"
    PUSH EAX                            ; 0045a2cd | = "\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a2ce
    PUSH EAX                            ; 0045a2d1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a2d2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 0045a2d7
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045a2da
    ADD EAX,EAX                         ; 0045a2dd
    PUSH EAX                            ; 0045a2df
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a2e0
    PUSH EAX                            ; 0045a2e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a2e4
    PUSH dword ptr [EAX]                ; 0045a2e7
    CALL shape_design.c_writeSpatialTree_FUN_0045a200 ; 0045a2e9
        ;   XREF to: 0045a200 (UNCONDITIONAL_CALL)  ; void shape_design.c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index)
    ADD ESP,0xc                         ; 0045a2ee
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045a2f1
    ADD EAX,EAX                         ; 0045a2f4
    INC EAX                             ; 0045a2f6
    PUSH EAX                            ; 0045a2f7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045a2f8
    PUSH EAX                            ; 0045a2fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045a2fc
    PUSH dword ptr [EAX + 0x4]          ; 0045a2ff
    CALL shape_design.c_writeSpatialTree_FUN_0045a200 ; 0045a302
        ;   XREF to: 0045a200 (UNCONDITIONAL_CALL)  ; void shape_design.c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index)
    ADD ESP,0xc                         ; 0045a307
    MOV ESP,EBP                         ; 0045a30a
        ;   Label: LAB_0045a30a
    POP EBP                             ; 0045a30c
    POP EDI                             ; 0045a30d
    POP ESI                             ; 0045a30e
    POP EBX                             ; 0045a30f
    RET                                 ; 0045a310

