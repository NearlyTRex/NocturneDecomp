; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004993f0(CStrList *this_ptr,CStrList *other)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   other
;
; Called Functions:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00499420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004993f0
        ;   Label: shape_edittool.cpp_CStrList_copy_FUN_004993f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004993f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004993f5
    MOV dword ptr [EBX + 0xc],0x5ff814  ; 004993f9
    PUSH EDX                            ; 00499400
    MOV dword ptr [EBX],0x0             ; 00499401
    PUSH EBX                            ; 00499407
    MOV dword ptr [EBX + 0x8],0x0       ; 00499408
    CALL shape_edittool.cpp_CStrList_copyFrom_FUN_00499420 ; 0049940f
        ;   XREF to: 00499420 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_00499420(CStrList * this_ptr, CStrList * source_ptr)
    ADD ESP,0x8                         ; 00499414
    MOV EAX,EBX                         ; 00499417
    POP EBX                             ; 00499419
    RET                                 ; 0049941a

