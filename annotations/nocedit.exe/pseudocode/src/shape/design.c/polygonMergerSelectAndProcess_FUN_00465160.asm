; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index,float tolerance)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; float            Stack[0x8]:4   tolerance
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464ea8
;
; Referenced Globals:
;   int g_SecondaryPolygonIndex
;
; Called Functions:
;   shape_design.c_mergePolygonsWithValidation_FUN_00465b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465160
        ;   Label: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
    PUSH ESI                            ; 00465161
    PUSH EDI                            ; 00465162
    PUSH EBP                            ; 00465163
    MOV EBP,ESP                         ; 00465164
    SUB ESP,0x0                         ; 00465166
    CMP dword ptr [0x01e528bc],-0x1     ; 0046516c | g_SecondaryPolygonIndex
    JNZ 0x0046517f                      ; 00465173
        ;   XREF to: 0046517f (CONDITIONAL_JUMP)  ; LAB_0046517f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00465175
    MOV [0x01e528bc],EAX                ; 00465178 | g_SecondaryPolygonIndex
    JMP 0x004651a6                      ; 0046517d
        ;   XREF to: 004651a6 (UNCONDITIONAL_JUMP)  ; LAB_004651a6
    PUSH 0x0                            ; 0046517f
        ;   Label: LAB_0046517f
    FLD float ptr [EBP + 0x18]          ; 00465181
    SUB ESP,0x4                         ; 00465184
    FSTP float ptr [ESP]                ; 00465187
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046518a
    PUSH EAX                            ; 0046518d
    PUSH dword ptr [0x01e528bc]         ; 0046518e | g_SecondaryPolygonIndex
    CALL shape_design.c_mergePolygonsWithValidation_FUN_00465b40 ; 00465194
        ;   XREF to: 00465b40 (UNCONDITIONAL_CALL)  ; void shape_design.c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index, int polygon2_index, float tolerance, int enforce_part_match)
    ADD ESP,0x10                        ; 00465199
    MOV dword ptr [0x01e528bc],0xffffffff ; 0046519c | g_SecondaryPolygonIndex
    POP EBP                             ; 004651a6
        ;   Label: LAB_004651a6
    POP EDI                             ; 004651a7
    POP ESI                             ; 004651a8
    POP EBX                             ; 004651a9
    RET                                 ; 004651aa

