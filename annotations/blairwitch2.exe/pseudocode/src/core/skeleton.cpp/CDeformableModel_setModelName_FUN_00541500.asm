; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_00541500(CDeformableModel *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00541500
        ;   Label: core_skeleton.cpp_CDeformableModel_setModelName_FUN_00541500
    PUSH EDI                            ; 00541501
    MOV EDX,dword ptr [ESP + 0xc]       ; 00541502
    MOV ESI,dword ptr [ESP + 0x10]      ; 00541506
    LEA EDI,[EDX + 0x2a1c]              ; 0054150a
    PUSH EDI                            ; 00541510
    MOV AL,byte ptr [ESI]               ; 00541511
        ;   Label: LAB_00541511
    MOV byte ptr [EDI],AL               ; 00541513
    CMP AL,0x0                          ; 00541515
    JZ 0x00541529                       ; 00541517
        ;   XREF to: 00541529 (CONDITIONAL_JUMP)  ; LAB_00541529
    MOV AL,byte ptr [ESI + 0x1]         ; 00541519
    ADD ESI,0x2                         ; 0054151c
    MOV byte ptr [EDI + 0x1],AL         ; 0054151f
    ADD EDI,0x2                         ; 00541522
    CMP AL,0x0                          ; 00541525
    JNZ 0x00541511                      ; 00541527
        ;   XREF to: 00541511 (CONDITIONAL_JUMP)  ; LAB_00541511
    POP EDI                             ; 00541529
        ;   Label: LAB_00541529
    MOV dword ptr [EDX + 0x2a6c],0x0    ; 0054152a
    POP EDI                             ; 00541534
    POP ESI                             ; 00541535
    RET                                 ; 00541536

