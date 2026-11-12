; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00481050(CStrList *this_ptr,int param_2,CStrList *param_3)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; CStrList *       Stack[0xc]:4   param_3
;
; Called Functions:
;   shape_edittool.cpp_CStrList_allocate_FUN_00480fa0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481050
        ;   Label: shape_edittool.cpp_CStrList_insertRange_FUN_00481050
    PUSH ESI                            ; 00481051
    PUSH EDI                            ; 00481052
    PUSH EBP                            ; 00481053
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481054
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00481058
    MOV EDX,dword ptr [EDI]             ; 0048105c
    MOV EAX,dword ptr [EAX]             ; 0048105e
    ADD EAX,EDX                         ; 00481060
    PUSH EAX                            ; 00481062
    PUSH EDI                            ; 00481063
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00480fa0 ; 00481064
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00480fa0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 00481069
    XOR EBX,EBX                         ; 0048106c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048106e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00481072
    MOV EAX,dword ptr [EAX]             ; 00481076
    CMP EBX,EAX                         ; 00481078
    JL 0x00481081                       ; 0048107a
        ;   XREF to: 00481081 (CONDITIONAL_JUMP)  ; LAB_00481081
    POP EBP                             ; 0048107c
    POP EDI                             ; 0048107d
    POP ESI                             ; 0048107e
    POP EBX                             ; 0048107f
    RET                                 ; 00481080
    PUSH EBX                            ; 00481081
        ;   Label: LAB_00481081
    MOV ECX,dword ptr [ESP + 0x20]      ; 00481082
    PUSH ECX                            ; 00481086
    MOV EBP,dword ptr [EDI + 0xc]       ; 00481087
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 0048108a
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048108f
    PUSH EAX                            ; 00481092
    PUSH ESI                            ; 00481093
    PUSH EDI                            ; 00481094
    INC EBX                             ; 00481095
    INC ESI                             ; 00481096
    CALL dword ptr [EBP + 0xc]          ; 00481097
    ADD ESP,0xc                         ; 0048109a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048109d
    MOV EAX,dword ptr [EAX]             ; 004810a1
    CMP EBX,EAX                         ; 004810a3
    JL 0x00481081                       ; 004810a5
        ;   XREF to: 00481081 (CONDITIONAL_JUMP)  ; LAB_00481081
    POP EBP                             ; 004810a7
    POP EDI                             ; 004810a8
    POP ESI                             ; 004810a9
    POP EBX                             ; 004810aa
    RET                                 ; 004810ab

