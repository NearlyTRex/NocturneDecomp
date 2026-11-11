; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(STextView *this_ptr,undefined4 *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070 at 004a40b2
;
; Called Functions:
;   core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0
;   core_fldnotes.cpp_STextView_ensureSpace_FUN_004a30a0
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30
;   core_fldnotes.cpp_STextView_newPage_FUN_004a2c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2ad0
        ;   Label: core_fldnotes.cpp_STextView_placeResource_FUN_004a2ad0
    PUSH ESI                            ; 004a2ad1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a2ad2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a2ad6
    PUSH EBX                            ; 004a2ada
    CALL core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30 ; 004a2adb
        ;   XREF to: 004a2b30 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2ae0
    MOV EDX,dword ptr [ESI + 0xc]       ; 004a2ae3
    PUSH EDX                            ; 004a2ae6
    MOV ECX,dword ptr [ESI + 0x8]       ; 004a2ae7
    PUSH ECX                            ; 004a2aea
    PUSH EBX                            ; 004a2aeb
    CALL core_fldnotes.cpp_STextView_ensureSpace_FUN_004a30a0 ; 004a2aec
        ;   XREF to: 004a30a0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_STextView_ensureSpace_FUN_004a30a0(STextView * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004a2af1
    TEST EAX,EAX                        ; 004a2af4
    JZ 0x004a2b22                       ; 004a2af6
        ;   XREF to: 004a2b22 (CONDITIONAL_JUMP)  ; LAB_004a2b22
    PUSH EDI                            ; 004a2af8
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a2af9
    MOV dword ptr [ESI + 0x4],EAX       ; 004a2afc
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a2aff
    MOV dword ptr [ESI],EAX             ; 004a2b02
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a2b04
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a2b07
    PUSH ESI                            ; 004a2b0a
    ADD EDI,EAX                         ; 004a2b0b
    PUSH EBX                            ; 004a2b0d
    MOV dword ptr [EBX + 0x14],EDI      ; 004a2b0e
    CALL core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0 ; 004a2b11
        ;   XREF to: 004a2bb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0(STextView * this_ptr, undefined4 param_2)
    MOV EAX,0x1                         ; 004a2b16
    ADD ESP,0x8                         ; 004a2b1b
    POP EDI                             ; 004a2b1e
    POP ESI                             ; 004a2b1f
    POP EBX                             ; 004a2b20
    RET                                 ; 004a2b21
    PUSH EBX                            ; 004a2b22
        ;   Label: LAB_004a2b22
    CALL core_fldnotes.cpp_STextView_newPage_FUN_004a2c90 ; 004a2b23
        ;   XREF to: 004a2c90 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_newPage_FUN_004a2c90(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2b28
    XOR EAX,EAX                         ; 004a2b2b
    POP ESI                             ; 004a2b2d
    POP EBX                             ; 004a2b2e
    RET                                 ; 004a2b2f

