; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_qsortCompareByField4_FUN_004661d0(void * element_a, void * element_b)
;
; Parameters:
; void *           Stack[0x4]:4   element_a
; void *           Stack[0x8]:4   element_b
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_qsortCompareByField4Wrapper_FUN_00466210 at 00466230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004661d0
        ;   Label: shape_design.c_qsortCompareByField4_FUN_004661d0
    PUSH ESI                            ; 004661d1
    PUSH EDI                            ; 004661d2
    PUSH EBP                            ; 004661d3
    MOV EBP,ESP                         ; 004661d4
    SUB ESP,0xc                         ; 004661d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004661dc
    MOV EAX,dword ptr [EAX + 0x4]       ; 004661df
    MOV dword ptr [EBP + -0x8],EAX      ; 004661e2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004661e5
    MOV EAX,dword ptr [EAX + 0x4]       ; 004661e8
    MOV dword ptr [EBP + -0x4],EAX      ; 004661eb
    MOV EAX,dword ptr [EBP + -0x4]      ; 004661ee
    SUB EAX,dword ptr [EBP + -0x8]      ; 004661f1
    MOV dword ptr [EBP + -0xc],EAX      ; 004661f4
    MOV EAX,dword ptr [EBP + -0xc]      ; 004661f7
    MOV ESP,EBP                         ; 004661fa
    POP EBP                             ; 004661fc
    POP EDI                             ; 004661fd
    POP ESI                             ; 004661fe
    POP EBX                             ; 004661ff
    RET                                 ; 00466200

