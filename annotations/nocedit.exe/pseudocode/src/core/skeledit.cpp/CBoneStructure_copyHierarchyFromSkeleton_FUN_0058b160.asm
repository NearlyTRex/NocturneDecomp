; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton
; Local Variables:
; CSkeleton *      Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c25f
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 0058b160
        ;   Label: core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058b165
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058b16a
    PUSH ESI                            ; 0058b16b
    PUSH EBP                            ; 0058b16c
    SUB ESP,0x4                         ; 0058b16d
    MOV ESI,dword ptr [ESP + 0x18]      ; 0058b170
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058b174
    MOV EAX,dword ptr [ESI + 0x28558]   ; 0058b178
    XOR EBX,EBX                         ; 0058b17e
    MOV dword ptr [EDX],EAX             ; 0058b180
    TEST EAX,EAX                        ; 0058b182
    JLE 0x0058b1ed                      ; 0058b184
        ;   XREF to: 0058b1ed (CONDITIONAL_JUMP)  ; LAB_0058b1ed
    PUSH EDI                            ; 0058b186
    MOV ECX,dword ptr [ESP + 0x18]      ; 0058b187
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058b18b
    LEA EDX,[ESI + 0x2855c]             ; 0058b18f
    ADD ECX,0x4                         ; 0058b195
    MOV dword ptr [ESP + 0x4],ESI       ; 0058b198
    MOV ESI,EDX                         ; 0058b19c
        ;   Label: LAB_0058b19c
    MOV EDI,ECX                         ; 0058b19e
    PUSH EDI                            ; 0058b1a0
    MOV AL,byte ptr [ESI]               ; 0058b1a1
        ;   Label: LAB_0058b1a1
    MOV byte ptr [EDI],AL               ; 0058b1a3
    CMP AL,0x0                          ; 0058b1a5
    JZ 0x0058b1b9                       ; 0058b1a7
        ;   XREF to: 0058b1b9 (CONDITIONAL_JUMP)  ; LAB_0058b1b9
    MOV AL,byte ptr [ESI + 0x1]         ; 0058b1a9
    ADD ESI,0x2                         ; 0058b1ac
    MOV byte ptr [EDI + 0x1],AL         ; 0058b1af
    ADD EDI,0x2                         ; 0058b1b2
    CMP AL,0x0                          ; 0058b1b5
    JNZ 0x0058b1a1                      ; 0058b1b7
        ;   XREF to: 0058b1a1 (CONDITIONAL_JUMP)  ; LAB_0058b1a1
    POP EDI                             ; 0058b1b9
        ;   Label: LAB_0058b1b9
    ADD EBP,0x84                        ; 0058b1ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058b1c0
    INC EBX                             ; 0058b1c4
    MOV ESI,dword ptr [ESP + 0x4]       ; 0058b1c5
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0058b1c9
    ADD ECX,0x84                        ; 0058b1cf
    MOV dword ptr [EBP + -0x60],EAX     ; 0058b1d5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058b1d8
    ADD EDX,0x24                        ; 0058b1dc
    ADD ESI,0x24                        ; 0058b1df
    MOV EDI,dword ptr [EAX]             ; 0058b1e2
    MOV dword ptr [ESP + 0x4],ESI       ; 0058b1e4
    CMP EBX,EDI                         ; 0058b1e8
    JL 0x0058b19c                       ; 0058b1ea
        ;   XREF to: 0058b19c (CONDITIONAL_JUMP)  ; LAB_0058b19c
    POP EDI                             ; 0058b1ec
    ADD ESP,0x4                         ; 0058b1ed
        ;   Label: LAB_0058b1ed
    POP EBP                             ; 0058b1f0
    POP ESI                             ; 0058b1f1
    POP EBX                             ; 0058b1f2
    RET                                 ; 0058b1f3

