; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00482250(CStrList *this_ptr,int param_2,CStrList *param_3)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; CStrList *       Stack[0xc]:4   param_3
;
; Called Functions:
;   shape_edittool.cpp_CStrList_allocate_FUN_004821a0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482250
        ;   Label: shape_edittool.cpp_CStrList_insertRange_FUN_00482250
    PUSH ESI                            ; 00482251
    PUSH EDI                            ; 00482252
    PUSH EBP                            ; 00482253
    MOV EDI,dword ptr [ESP + 0x14]      ; 00482254
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482258
    MOV EDX,dword ptr [EDI]             ; 0048225c
    MOV EAX,dword ptr [EAX]             ; 0048225e
    ADD EAX,EDX                         ; 00482260
    PUSH EAX                            ; 00482262
    PUSH EDI                            ; 00482263
    CALL shape_edittool.cpp_CStrList_allocate_FUN_004821a0 ; 00482264
        ;   XREF to: 004821a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_004821a0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 00482269
    XOR EBX,EBX                         ; 0048226c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0048226e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482272
    MOV EAX,dword ptr [EAX]             ; 00482276
    CMP EBX,EAX                         ; 00482278
    JL 0x00482281                       ; 0048227a
        ;   XREF to: 00482281 (CONDITIONAL_JUMP)  ; LAB_00482281
    POP EBP                             ; 0048227c
    POP EDI                             ; 0048227d
    POP ESI                             ; 0048227e
    POP EBX                             ; 0048227f
    RET                                 ; 00482280
    PUSH EBX                            ; 00482281
        ;   Label: LAB_00482281
    MOV ECX,dword ptr [ESP + 0x20]      ; 00482282
    PUSH ECX                            ; 00482286
    MOV EBP,dword ptr [EDI + 0xc]       ; 00482287
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 0048228a
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048228f
    PUSH EAX                            ; 00482292
    PUSH ESI                            ; 00482293
    PUSH EDI                            ; 00482294
    INC EBX                             ; 00482295
    INC ESI                             ; 00482296
    CALL dword ptr [EBP + 0xc]          ; 00482297
    ADD ESP,0xc                         ; 0048229a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048229d
    MOV EAX,dword ptr [EAX]             ; 004822a1
    CMP EBX,EAX                         ; 004822a3
    JL 0x00482281                       ; 004822a5
        ;   XREF to: 00482281 (CONDITIONAL_JUMP)  ; LAB_00482281
    POP EBP                             ; 004822a7
    POP EDI                             ; 004822a8
    POP ESI                             ; 004822a9
    POP EBX                             ; 004822aa
    RET                                 ; 004822ab

