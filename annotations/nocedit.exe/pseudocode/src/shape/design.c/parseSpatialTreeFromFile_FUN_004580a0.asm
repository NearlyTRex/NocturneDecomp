; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(FILE *file)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_loadModelFile_FUN_00458ac0 at 0045931e
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_f_f_0061a89f
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004580a0
        ;   Label: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
    PUSH ESI                            ; 004580a1
    PUSH EDI                            ; 004580a2
    PUSH EBP                            ; 004580a3
    MOV EBP,ESP                         ; 004580a4
    SUB ESP,0x24                        ; 004580a6
    LEA EAX,[EBP + -0x4]                ; 004580ac
    PUSH EAX                            ; 004580af
    LEA EAX,[EBP + -0x8]                ; 004580b0
    PUSH EAX                            ; 004580b3
    LEA EAX,[EBP + -0xc]                ; 004580b4
    PUSH EAX                            ; 004580b7
    LEA EAX,[EBP + -0x10]               ; 004580b8
    PUSH EAX                            ; 004580bb
    LEA EAX,[EBP + -0x18]               ; 004580bc
    PUSH EAX                            ; 004580bf
    LEA EAX,[EBP + -0x1c]               ; 004580c0
    PUSH EAX                            ; 004580c3
    MOV EAX,0x61a89f                    ; 004580c4 | = "%d,%d,%f,%f,%f,%f\n"
    PUSH EAX                            ; 004580c9 | = "%d,%d,%f,%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + 0x14]      ; 004580ca
    PUSH EAX                            ; 004580cd
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004580ce
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x20                        ; 004580d3
    MOV dword ptr [EBP + -0x14],EAX     ; 004580d6
    CMP dword ptr [EBP + -0x14],0x0     ; 004580d9
    JZ 0x004580e5                       ; 004580dd
        ;   XREF to: 004580e5 (CONDITIONAL_JUMP)  ; LAB_004580e5
    CMP dword ptr [EBP + -0x14],-0x1    ; 004580df
    JNZ 0x004580ee                      ; 004580e3
        ;   XREF to: 004580ee (CONDITIONAL_JUMP)  ; LAB_004580ee
    MOV dword ptr [EBP + -0x24],0x0     ; 004580e5
        ;   Label: LAB_004580e5
    JMP 0x00458162                      ; 004580ec
        ;   XREF to: 00458162 (UNCONDITIONAL_JUMP)  ; LAB_00458162
    CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0 ; 004580ee
        ;   XREF to: 00457ed0 (UNCONDITIONAL_CALL)  ; STreeNode * shape_design.c_allocateSpatialTreeNode_FUN_00457ed0()
        ;   Label: LAB_004580ee
    MOV dword ptr [EBP + -0x20],EAX     ; 004580f3
    MOV EAX,dword ptr [EBP + -0x18]     ; 004580f6
    MOV EDX,dword ptr [EBP + -0x20]     ; 004580f9
    MOV dword ptr [EDX + 0x8],EAX       ; 004580fc
    CMP dword ptr [EBP + -0x14],0x3     ; 004580ff
    JNZ 0x00458115                      ; 00458103
        ;   XREF to: 00458115 (CONDITIONAL_JUMP)  ; LAB_00458115
    MOV EAX,dword ptr [EBP + -0x20]     ; 00458105
    FLD float ptr [EBP + -0x10]         ; 00458108
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045810b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0xc]         ; 00458110
    JMP 0x0045815c                      ; 00458113
        ;   XREF to: 0045815c (UNCONDITIONAL_JUMP)  ; LAB_0045815c
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458115
        ;   Label: LAB_00458115
    MOV EDX,dword ptr [EBP + -0x20]     ; 00458118
    MOV dword ptr [EDX + 0xc],EAX       ; 0045811b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045811e
    MOV EDX,dword ptr [EBP + -0x20]     ; 00458121
    MOV dword ptr [EDX + 0x10],EAX      ; 00458124
    MOV EAX,dword ptr [EBP + -0x8]      ; 00458127
    MOV EDX,dword ptr [EBP + -0x20]     ; 0045812a
    MOV dword ptr [EDX + 0x14],EAX      ; 0045812d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458130
    MOV EDX,dword ptr [EBP + -0x20]     ; 00458133
    MOV dword ptr [EDX + 0x18],EAX      ; 00458136
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458139
    PUSH EAX                            ; 0045813c
    CALL shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 ; 0045813d
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)
    ADD ESP,0x4                         ; 00458142
    MOV EDX,dword ptr [EBP + -0x20]     ; 00458145
    MOV dword ptr [EDX],EAX             ; 00458148
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045814a
    PUSH EAX                            ; 0045814d
    CALL shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 ; 0045814e
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)
    ADD ESP,0x4                         ; 00458153
    MOV EDX,dword ptr [EBP + -0x20]     ; 00458156
    MOV dword ptr [EDX + 0x4],EAX       ; 00458159
    MOV EAX,dword ptr [EBP + -0x20]     ; 0045815c
        ;   Label: LAB_0045815c
    MOV dword ptr [EBP + -0x24],EAX     ; 0045815f
    MOV EAX,dword ptr [EBP + -0x24]     ; 00458162
        ;   Label: LAB_00458162
    MOV ESP,EBP                         ; 00458165
    POP EBP                             ; 00458167
    POP EDI                             ; 00458168
    POP ESI                             ; 00458169
    POP EBX                             ; 0045816a
    RET                                 ; 0045816b

