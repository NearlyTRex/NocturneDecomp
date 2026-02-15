; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
;
; Parameters:
; int              Stack[0x4]:4   respect_part_assignments
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 00465640
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 00465aa7
;
; Referenced Globals:
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004651b0
        ;   Label: shape_design.c_removeDuplicatePolygons_FUN_004651b0
    PUSH ESI                            ; 004651b1
    PUSH EDI                            ; 004651b2
    PUSH EBP                            ; 004651b3
    MOV EBP,ESP                         ; 004651b4
    SUB ESP,0x14                        ; 004651b6
    MOV dword ptr [EBP + -0x10],0x0     ; 004651bc
    JMP 0x004651cb                      ; 004651c3
        ;   XREF to: 004651cb (UNCONDITIONAL_JUMP)  ; LAB_004651cb
    MOV EAX,dword ptr [EBP + -0x10]     ; 004651c5
        ;   Label: LAB_004651c5
    INC dword ptr [EBP + -0x10]         ; 004651c8
    MOV EAX,dword ptr [EBP + -0x10]     ; 004651cb
        ;   Label: LAB_004651cb
    CMP EAX,dword ptr [0x016e990c]      ; 004651ce | g_PolygonCount
    JGE 0x00465303                      ; 004651d4
        ;   XREF to: 00465303 (CONDITIONAL_JUMP)  ; LAB_00465303
    MOV EAX,dword ptr [EBP + -0x10]     ; 004651da
    INC EAX                             ; 004651dd
    MOV dword ptr [EBP + -0x14],EAX     ; 004651de
    MOV EAX,dword ptr [EBP + -0x14]     ; 004651e1
        ;   Label: LAB_004651e1
    CMP EAX,dword ptr [0x016e990c]      ; 004651e4 | g_PolygonCount
    JGE 0x004652fe                      ; 004651ea
        ;   XREF to: 004652fe (CONDITIONAL_JUMP)  ; LAB_004652fe
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 004651f0
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 004651f7
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 004651fe | DAT_016e99b4
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00465204 | DAT_016e99b4
    JZ 0x00465214                       ; 0046520a
        ;   XREF to: 00465214 (CONDITIONAL_JUMP)  ; LAB_00465214
    INC dword ptr [EBP + -0x14]         ; 0046520c
    JMP 0x004652f9                      ; 0046520f
        ;   XREF to: 004652f9 (UNCONDITIONAL_JUMP)  ; LAB_004652f9
    CMP dword ptr [EBP + 0x14],0x0      ; 00465214
        ;   Label: LAB_00465214
    JZ 0x00465236                       ; 00465218
        ;   XREF to: 00465236 (CONDITIONAL_JUMP)  ; LAB_00465236
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 0046521a
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465221
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 00465228 | DAT_016e9a88
    CMP EAX,dword ptr [EDX + 0x16e9a88] ; 0046522e | DAT_016e9a88
    JNZ 0x00465238                      ; 00465234
        ;   XREF to: 00465238 (CONDITIONAL_JUMP)  ; LAB_00465238
    JMP 0x00465240                      ; 00465236
        ;   XREF to: 00465240 (UNCONDITIONAL_JUMP)  ; LAB_00465240
        ;   Label: LAB_00465236
    INC dword ptr [EBP + -0x14]         ; 00465238
        ;   Label: LAB_00465238
    JMP 0x004652f9                      ; 0046523b
        ;   XREF to: 004652f9 (UNCONDITIONAL_JUMP)  ; LAB_004652f9
    MOV dword ptr [EBP + -0x4],0x0      ; 00465240
        ;   Label: LAB_00465240
    MOV dword ptr [EBP + -0x8],0x0      ; 00465247
    JMP 0x00465256                      ; 0046524e
        ;   XREF to: 00465256 (UNCONDITIONAL_JUMP)  ; LAB_00465256
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465250
        ;   Label: LAB_00465250
    INC dword ptr [EBP + -0x8]          ; 00465253
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00465256
        ;   Label: LAB_00465256
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046525d
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00465260 | DAT_016e99b4
    JGE 0x0046529d                      ; 00465266
        ;   XREF to: 0046529d (CONDITIONAL_JUMP)  ; LAB_0046529d
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00465268
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046526f
    SHL EAX,0x2                         ; 00465272
    LEA ECX,[EDX + EAX*0x1]             ; 00465275
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465278
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046527f
    SHL EAX,0x2                         ; 00465282
    ADD EDX,EAX                         ; 00465285
    MOV EAX,dword ptr [ECX + 0x16e99c8] ; 00465287 | DAT_016e99c8
    CMP EAX,dword ptr [EDX + 0x16e99c8] ; 0046528d | DAT_016e99c8
    JNZ 0x0046529b                      ; 00465293
        ;   XREF to: 0046529b (CONDITIONAL_JUMP)  ; LAB_0046529b
    MOV EAX,dword ptr [EBP + -0x4]      ; 00465295
    INC dword ptr [EBP + -0x4]          ; 00465298
    JMP 0x00465250                      ; 0046529b
        ;   XREF to: 00465250 (UNCONDITIONAL_JUMP)  ; LAB_00465250
        ;   Label: LAB_0046529b
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0046529d
        ;   Label: LAB_0046529d
    MOV EAX,dword ptr [EBP + -0x4]      ; 004652a4
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004652a7 | DAT_016e99b4
    JNZ 0x004652f6                      ; 004652ad
        ;   XREF to: 004652f6 (CONDITIONAL_JUMP)  ; LAB_004652f6
    MOV EAX,dword ptr [EBP + -0x14]     ; 004652af
    MOV dword ptr [EBP + -0x8],EAX      ; 004652b2
    JMP 0x004652bd                      ; 004652b5
        ;   XREF to: 004652bd (UNCONDITIONAL_JUMP)  ; LAB_004652bd
    MOV EAX,dword ptr [EBP + -0x8]      ; 004652b7
        ;   Label: LAB_004652b7
    INC dword ptr [EBP + -0x8]          ; 004652ba
    MOV EAX,[0x016e990c]                ; 004652bd | g_PolygonCount
        ;   Label: LAB_004652bd
    DEC EAX                             ; 004652c2
    CMP EAX,dword ptr [EBP + -0x8]      ; 004652c3
    JLE 0x004652ee                      ; 004652c6
        ;   XREF to: 004652ee (CONDITIONAL_JUMP)  ; LAB_004652ee
    MOV EAX,dword ptr [EBP + -0x8]      ; 004652c8
    INC EAX                             ; 004652cb
    IMUL EAX,EAX,0x184                  ; 004652cc
    IMUL ESI,dword ptr [EBP + -0x8],0x184 ; 004652d2
    MOV ECX,0x61                        ; 004652d9
    LEA EDI,[ESI + 0x16e9910]           ; 004652de | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 004652e4 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 004652ea | g_ModelPolygonData | DAT_016e9914
    JMP 0x004652b7                      ; 004652ec
        ;   XREF to: 004652b7 (UNCONDITIONAL_JUMP)  ; LAB_004652b7
    DEC dword ptr [0x016e990c]          ; 004652ee | g_PolygonCount
        ;   Label: LAB_004652ee
    JMP 0x004652f9                      ; 004652f4
        ;   XREF to: 004652f9 (UNCONDITIONAL_JUMP)  ; LAB_004652f9
    INC dword ptr [EBP + -0x14]         ; 004652f6
        ;   Label: LAB_004652f6
    JMP 0x004651e1                      ; 004652f9
        ;   XREF to: 004651e1 (UNCONDITIONAL_JUMP)  ; LAB_004651e1
        ;   Label: LAB_004652f9
    JMP 0x004651c5                      ; 004652fe
        ;   XREF to: 004651c5 (UNCONDITIONAL_JUMP)  ; LAB_004651c5
        ;   Label: LAB_004652fe
    MOV ESP,EBP                         ; 00465303
        ;   Label: LAB_00465303
    POP EBP                             ; 00465305
    POP EDI                             ; 00465306
    POP ESI                             ; 00465307
    POP EBX                             ; 00465308
    RET                                 ; 00465309

