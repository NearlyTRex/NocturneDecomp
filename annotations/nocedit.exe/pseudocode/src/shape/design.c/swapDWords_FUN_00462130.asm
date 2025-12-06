; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_swapDWords_FUN_00462130(uint * value1_ptr, uint * value2_ptr)
;
; Parameters:
; uint *           Stack[0x4]:4   value1_ptr
; uint *           Stack[0x8]:4   value2_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 004623a3
;   shape_design.c_turnModelInsideOut_FUN_004671e0 at 00467281
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462130
        ;   Label: shape_design.c_swapDWords_FUN_00462130
    PUSH ESI                            ; 00462131
    PUSH EDI                            ; 00462132
    PUSH EBP                            ; 00462133
    MOV EBP,ESP                         ; 00462134
    SUB ESP,0x4                         ; 00462136
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046213c
    MOV EAX,dword ptr [EAX]             ; 0046213f
    MOV dword ptr [EBP + -0x4],EAX      ; 00462141
    MOV EAX,dword ptr [EBP + 0x18]      ; 00462144
    MOV EDX,dword ptr [EAX]             ; 00462147
    MOV EAX,dword ptr [EBP + 0x14]      ; 00462149
    MOV dword ptr [EAX],EDX             ; 0046214c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046214e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00462151
    MOV dword ptr [EDX],EAX             ; 00462154
    MOV ESP,EBP                         ; 00462156
    POP EBP                             ; 00462158
    POP EDI                             ; 00462159
    POP ESI                             ; 0046215a
    POP EBX                             ; 0046215b
    RET                                 ; 0046215c

