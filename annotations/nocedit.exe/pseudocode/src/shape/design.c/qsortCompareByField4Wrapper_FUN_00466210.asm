; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_qsortCompareByField4Wrapper_FUN_00466210(void *element_a,void *element_b)
;
; Parameters:
; void *           Stack[0x4]:4   element_a
; void *           Stack[0x8]:4   element_b
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   shape_design.c_qsortCompareByField4_FUN_004661d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466210
        ;   Label: shape_design.c_qsortCompareByField4Wrapper_FUN_00466210
    PUSH ESI                            ; 00466211
    PUSH EDI                            ; 00466212
    PUSH EBP                            ; 00466213
    MOV EBP,ESP                         ; 00466214
    SUB ESP,0xc                         ; 00466216
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046621c
    MOV dword ptr [EBP + -0x8],EAX      ; 0046621f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00466222
    MOV dword ptr [EBP + -0x4],EAX      ; 00466225
    MOV EAX,dword ptr [EBP + -0x4]      ; 00466228
    PUSH EAX                            ; 0046622b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046622c
    PUSH EAX                            ; 0046622f
    CALL shape_design.c_qsortCompareByField4_FUN_004661d0 ; 00466230
        ;   XREF to: 004661d0 (UNCONDITIONAL_CALL)  ; int shape_design.c_qsortCompareByField4_FUN_004661d0(void * element_a, void * element_b)
    ADD ESP,0x8                         ; 00466235
    MOV dword ptr [EBP + -0xc],EAX      ; 00466238
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046623b
    MOV ESP,EBP                         ; 0046623e
    POP EBP                             ; 00466240
    POP EDI                             ; 00466241
    POP ESI                             ; 00466242
    POP EBX                             ; 00466243
    RET                                 ; 00466244

