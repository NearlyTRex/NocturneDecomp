; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   target_model
; CVector3i *      Stack[0x8]:4   reference_vertex_list
; int              Stack[0xc]:4   reference_vertex_id
; Local Variables:
; int[1017]        Stack[-0x1010]:4068  aiStackY_1010
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CVector3i *      Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 00468257
;
; Called Functions:
;   shape_design.c_findVertexListInModel_FUN_00468000
;   shape_design.c_getVertexCountFromModel_FUN_00468080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004680f0
        ;   Label: shape_design.c_applyVertexCentering_FUN_004680f0
    PUSH ESI                            ; 004680f1
    PUSH EDI                            ; 004680f2
    PUSH EBP                            ; 004680f3
    MOV EBP,ESP                         ; 004680f4
    SUB ESP,0x18                        ; 004680f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004680fc
    PUSH EAX                            ; 004680ff
    CALL shape_design.c_findVertexListInModel_FUN_00468000 ; 00468100
        ;   XREF to: 00468000 (UNCONDITIONAL_CALL)  ; CVector3i * shape_design.c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended * model_ptr)
    ADD ESP,0x4                         ; 00468105
    MOV dword ptr [EBP + -0x4],EAX      ; 00468108
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046810b
    PUSH EAX                            ; 0046810e
    CALL shape_design.c_getVertexCountFromModel_FUN_00468080 ; 0046810f
        ;   XREF to: 00468080 (UNCONDITIONAL_CALL)  ; int shape_design.c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended * model_ptr)
    ADD ESP,0x4                         ; 00468114
    MOV dword ptr [EBP + -0x8],EAX      ; 00468117
    IMUL ESI,dword ptr [EBP + 0x1c],0xc ; 0046811a
    ADD ESI,dword ptr [EBP + -0x4]      ; 0046811e
    LEA EDI,[EBP + -0x18]               ; 00468121
    MOVSD ES:EDI,ESI                    ; 00468124
    MOVSD ES:EDI,ESI                    ; 00468125
    MOVSD ES:EDI,ESI                    ; 00468126
    MOV dword ptr [EBP + -0xc],0x0      ; 00468127
    JMP 0x00468136                      ; 0046812e
        ;   XREF to: 00468136 (UNCONDITIONAL_JUMP)  ; LAB_00468136
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468130
        ;   Label: LAB_00468130
    INC dword ptr [EBP + -0xc]          ; 00468133
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468136
        ;   Label: LAB_00468136
    CMP EAX,dword ptr [EBP + -0x8]      ; 00468139
    JGE 0x00468194                      ; 0046813c
        ;   XREF to: 00468194 (CONDITIONAL_JUMP)  ; LAB_00468194
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046813e
    ADD EAX,dword ptr [EBP + -0x4]      ; 00468142
    MOV EDX,dword ptr [EAX]             ; 00468145
    SUB EDX,dword ptr [EBP + -0x18]     ; 00468147
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046814a
    ADD EDX,dword ptr [EAX]             ; 0046814d
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046814f
    ADD EAX,dword ptr [EBP + -0x4]      ; 00468153
    MOV dword ptr [EAX],EDX             ; 00468156
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00468158
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046815c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046815f
    SUB EDX,dword ptr [EBP + -0x14]     ; 00468162
    MOV EAX,dword ptr [EBP + 0x18]      ; 00468165
    ADD EDX,dword ptr [EAX + 0x4]       ; 00468168
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046816b
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046816f
    MOV dword ptr [EAX + 0x4],EDX       ; 00468172
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00468175
    ADD EAX,dword ptr [EBP + -0x4]      ; 00468179
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046817c
    SUB EDX,dword ptr [EBP + -0x10]     ; 0046817f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00468182
    ADD EDX,dword ptr [EAX + 0x8]       ; 00468185
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00468188
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046818c
    MOV dword ptr [EAX + 0x8],EDX       ; 0046818f
    JMP 0x00468130                      ; 00468192
        ;   XREF to: 00468130 (UNCONDITIONAL_JUMP)  ; LAB_00468130
    MOV ESP,EBP                         ; 00468194
        ;   Label: LAB_00468194
    POP EBP                             ; 00468196
    POP EDI                             ; 00468197
    POP ESI                             ; 00468198
    POP EBX                             ; 00468199
    RET                                 ; 0046819a

