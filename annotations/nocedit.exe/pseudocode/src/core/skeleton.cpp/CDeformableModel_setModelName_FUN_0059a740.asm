; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_0059a740(CDeformableModel *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059a740
        ;   Label: core_skeleton.cpp_CDeformableModel_setModelName_FUN_0059a740
    PUSH EDI                            ; 0059a741
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059a742
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059a746
    LEA EDI,[EDX + 0x8f5c]              ; 0059a74a
    PUSH EDI                            ; 0059a750
    MOV AL,byte ptr [ESI]               ; 0059a751
        ;   Label: LAB_0059a751
    MOV byte ptr [EDI],AL               ; 0059a753
    CMP AL,0x0                          ; 0059a755
    JZ 0x0059a769                       ; 0059a757
        ;   XREF to: 0059a769 (CONDITIONAL_JUMP)  ; LAB_0059a769
    MOV AL,byte ptr [ESI + 0x1]         ; 0059a759
    ADD ESI,0x2                         ; 0059a75c
    MOV byte ptr [EDI + 0x1],AL         ; 0059a75f
    ADD EDI,0x2                         ; 0059a762
    CMP AL,0x0                          ; 0059a765
    JNZ 0x0059a751                      ; 0059a767
        ;   XREF to: 0059a751 (CONDITIONAL_JUMP)  ; LAB_0059a751
    POP EDI                             ; 0059a769
        ;   Label: LAB_0059a769
    MOV dword ptr [EDX + 0x8fac],0x0    ; 0059a76a
    POP EDI                             ; 0059a774
    POP ESI                             ; 0059a775
    RET                                 ; 0059a776

