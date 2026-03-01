; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_colquant_c_refinePartitionByDistance_FUN_00441110(SColorQuantMapper *workspace,int box_index,int new_box_index)
;
; Parameters:
; SColorQuantMapper * Stack[0x4]:4   workspace
; int              Stack[0x8]:4   box_index
; int              Stack[0xc]:4   new_box_index
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_colquant.c_partitionByBlue_FUN_00440dc0 at 00440ee4
;   engine_colquant.c_partitionByGreen_FUN_00440c80 at 00440da4
;   engine_colquant.c_partitionByIntensity_FUN_00440f00 at 00441024
;   engine_colquant.c_partitionByRed_FUN_00440b40 at 00440c62
;
; Called Functions:
;   engine_colquant.c_computeBoxStatistics_FUN_00441260
;   engine_colquant.c_computeWeightedColorDistance_FUN_00441040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441110
        ;   Label: engine_colquant.c_refinePartitionByDistance_FUN_00441110
    PUSH ESI                            ; 00441111
    PUSH EDI                            ; 00441112
    PUSH EBP                            ; 00441113
    SUB ESP,0x18                        ; 00441114
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00441117
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044111b
    MOV EAX,EBP                         ; 0044111f
    SHL EAX,0x6                         ; 00441121
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4040] ; 00441124
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4044] ; 0044112b
    ADD EBX,EDI                         ; 00441132
    DEC EBX                             ; 00441134
    CMP EDI,EBX                         ; 00441135
    JGE 0x004411fc                      ; 00441137
        ;   XREF to: 004411fc (CONDITIONAL_JUMP)  ; LAB_004411fc
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044113d
    MOV dword ptr [ESP + 0x14],EAX      ; 00441144
    PUSH EDI                            ; 00441148
        ;   Label: LAB_00441148
    PUSH EBP                            ; 00441149
    PUSH ESI                            ; 0044114a
    CALL engine_colquant.c_computeWeightedColorDistance_FUN_00441040 ; 0044114b
        ;   XREF to: 00441040 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper * workspace, int box_index, int color_index)
    MOV dword ptr [ESP + 0x14],EAX      ; 00441150
    MOV dword ptr [ESP + 0x18],EDX      ; 00441154
    ADD ESP,0xc                         ; 00441158
    PUSH EDI                            ; 0044115b
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044115c
    PUSH ECX                            ; 00441160
    PUSH ESI                            ; 00441161
    CALL engine_colquant.c_computeWeightedColorDistance_FUN_00441040 ; 00441162
        ;   XREF to: 00441040 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper * workspace, int box_index, int color_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 00441167
    MOV dword ptr [ESP + 0x10],EDX      ; 0044116b
    FLD double ptr [ESP + 0xc]          ; 0044116f
    ADD ESP,0xc                         ; 00441173
    FCOMP double ptr [ESP + 0x8]        ; 00441176
    FNSTSW AX                           ; 0044117a
    SAHF                                ; 0044117c
    JNC 0x004411e8                      ; 0044117d
        ;   XREF to: 004411e8 (CONDITIONAL_JUMP)  ; LAB_004411e8
    CMP EDI,EBX                         ; 0044117f
        ;   Label: LAB_0044117f
    JGE 0x004411bc                      ; 00441181
        ;   XREF to: 004411bc (CONDITIONAL_JUMP)  ; LAB_004411bc
    PUSH EBX                            ; 00441183
    PUSH EBP                            ; 00441184
    PUSH ESI                            ; 00441185
    CALL engine_colquant.c_computeWeightedColorDistance_FUN_00441040 ; 00441186
        ;   XREF to: 00441040 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper * workspace, int box_index, int color_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 0044118b
    MOV dword ptr [ESP + 0x10],EDX      ; 0044118f
    ADD ESP,0xc                         ; 00441193
    PUSH EBX                            ; 00441196
    MOV EAX,dword ptr [ESP + 0x38]      ; 00441197
    PUSH EAX                            ; 0044119b
    PUSH ESI                            ; 0044119c
    CALL engine_colquant.c_computeWeightedColorDistance_FUN_00441040 ; 0044119d
        ;   XREF to: 00441040 (UNCONDITIONAL_CALL)  ; double engine_colquant.c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper * workspace, int box_index, int color_index)
    MOV dword ptr [ESP + 0x14],EAX      ; 004411a2
    MOV dword ptr [ESP + 0x18],EDX      ; 004411a6
    FLD double ptr [ESP + 0x14]         ; 004411aa
    ADD ESP,0xc                         ; 004411ae
    FCOMP double ptr [ESP]              ; 004411b1
    FNSTSW AX                           ; 004411b4
    SAHF                                ; 004411b6
    JNC 0x004411bc                      ; 004411b7
        ;   XREF to: 004411bc (CONDITIONAL_JUMP)  ; LAB_004411bc
    DEC EBX                             ; 004411b9
    JMP 0x0044117f                      ; 004411ba
        ;   XREF to: 0044117f (UNCONDITIONAL_JUMP)  ; LAB_0044117f
    MOV ECX,dword ptr [ESP + 0x14]      ; 004411bc
        ;   Label: LAB_004411bc
    MOV EDX,dword ptr [ESI + 0x2004]    ; 004411c0
    ADD ECX,EDX                         ; 004411c6
    MOV EAX,dword ptr [ECX]             ; 004411c8
    MOV dword ptr [ESP + 0x10],EAX      ; 004411ca
    LEA EAX,[EBX*0x4 + 0x0]             ; 004411ce
    MOV EDX,dword ptr [EDX + EAX*0x1]   ; 004411d5
    MOV dword ptr [ECX],EDX             ; 004411d8
    MOV EDX,dword ptr [ESI + 0x2004]    ; 004411da
    ADD EAX,EDX                         ; 004411e0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004411e2
    MOV dword ptr [EAX],EDX             ; 004411e6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004411e8
        ;   Label: LAB_004411e8
    ADD EDX,0x4                         ; 004411ec
    INC EDI                             ; 004411ef
    MOV dword ptr [ESP + 0x14],EDX      ; 004411f0
    CMP EDI,EBX                         ; 004411f4
    JL 0x00441148                       ; 004411f6
        ;   XREF to: 00441148 (CONDITIONAL_JUMP)  ; LAB_00441148
    MOV EDX,dword ptr [ESP + 0x34]      ; 004411fc
        ;   Label: LAB_004411fc
    MOV EAX,EBP                         ; 00441200
    SHL EDX,0x6                         ; 00441202
    SHL EAX,0x6                         ; 00441205
    MOV dword ptr [EDX + ESI*0x1 + 0x4040],EBX ; 00441208
    MOV EDI,EBX                         ; 0044120f
    SUB EDI,dword ptr [ESI + EAX*0x1 + 0x4040] ; 00441211
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4044] ; 00441218
    SUB ECX,EDI                         ; 0044121f
    MOV dword ptr [EDX + ESI*0x1 + 0x4044],ECX ; 00441221
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4040] ; 00441228
    PUSH EBP                            ; 0044122f
    SUB EBX,EDI                         ; 00441230
    PUSH ESI                            ; 00441232
    MOV dword ptr [ESI + EAX*0x1 + 0x4044],EBX ; 00441233
    CALL engine_colquant.c_computeBoxStatistics_FUN_00441260 ; 0044123a
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_computeBoxStatistics_FUN_00441260(SColorQuantMapper * workspace, int box_index)
    ADD ESP,0x8                         ; 0044123f
    MOV EBP,dword ptr [ESP + 0x34]      ; 00441242
    PUSH EBP                            ; 00441246
    PUSH ESI                            ; 00441247
    CALL engine_colquant.c_computeBoxStatistics_FUN_00441260 ; 00441248
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_computeBoxStatistics_FUN_00441260(SColorQuantMapper * workspace, int box_index)
    ADD ESP,0x8                         ; 0044124d
    ADD ESP,0x18                        ; 00441250
    POP EBP                             ; 00441253
    POP EDI                             ; 00441254
    POP ESI                             ; 00441255
    POP EBX                             ; 00441256
    RET                                 ; 00441257

