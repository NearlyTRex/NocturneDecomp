; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
;
; Parameters:
; float *          Stack[0x4]:4   value1_ptr
; float *          Stack[0x8]:4   value2_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 004623c3
;   shape_design.c_turnModelInsideOut_FUN_004671e0 at 004672cb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462160
        ;   Label: shape_design.c_swapFloats_FUN_00462160
    PUSH ESI                            ; 00462161
    PUSH EDI                            ; 00462162
    PUSH EBP                            ; 00462163
    MOV EBP,ESP                         ; 00462164
    SUB ESP,0x4                         ; 00462166
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046216c
    MOV EAX,dword ptr [EAX]             ; 0046216f
    MOV dword ptr [EBP + -0x4],EAX      ; 00462171
    MOV EAX,dword ptr [EBP + 0x18]      ; 00462174
    FLD float ptr [EAX]                 ; 00462177
    MOV EAX,dword ptr [EBP + 0x14]      ; 00462179
    FSTP float ptr [EAX]                ; 0046217c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046217e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00462181
    MOV dword ptr [EDX],EAX             ; 00462184
    MOV ESP,EBP                         ; 00462186
    POP EBP                             ; 00462188
    POP EDI                             ; 00462189
    POP ESI                             ; 0046218a
    POP EBX                             ; 0046218b
    RET                                 ; 0046218c

