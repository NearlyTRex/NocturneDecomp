; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_comparePolygonIndices_FUN_00463800(int *first_value_ptr,int *second_value_ptr)
;
; Parameters:
; int *            Stack[0x4]:4   first_value_ptr
; int *            Stack[0x8]:4   second_value_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_complexPolygonReduction_FUN_00463b30 at 00464744
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463800
        ;   Label: shape_design.c_comparePolygonIndices_FUN_00463800
    PUSH ESI                            ; 00463801
    PUSH EDI                            ; 00463802
    PUSH EBP                            ; 00463803
    MOV EBP,ESP                         ; 00463804
    SUB ESP,0xc                         ; 00463806
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046380c
    MOV EAX,dword ptr [EAX]             ; 0046380f
    MOV dword ptr [EBP + -0x8],EAX      ; 00463811
    MOV EAX,dword ptr [EBP + 0x18]      ; 00463814
    MOV EAX,dword ptr [EAX]             ; 00463817
    MOV dword ptr [EBP + -0x4],EAX      ; 00463819
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046381c
    SUB EAX,dword ptr [EBP + -0x8]      ; 0046381f
    MOV dword ptr [EBP + -0xc],EAX      ; 00463822
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463825
    MOV ESP,EBP                         ; 00463828
    POP EBP                             ; 0046382a
    POP EDI                             ; 0046382b
    POP ESI                             ; 0046382c
    POP EBX                             ; 0046382d
    RET                                 ; 0046382e

