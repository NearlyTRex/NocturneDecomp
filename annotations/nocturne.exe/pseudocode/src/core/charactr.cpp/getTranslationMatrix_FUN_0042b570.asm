; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_getTranslationMatrix_FUN_0042b570(CMatrix3x4f *matrix,CVector3f *out_translation)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   out_translation
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0042b570
        ;   Label: core_charactr.cpp_getTranslationMatrix_FUN_0042b570
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042b573
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042b577
    MOV ECX,dword ptr [EDX + 0xc]       ; 0042b57b
    MOV dword ptr [ESP],ECX             ; 0042b57e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0042b581
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0042b584
    MOV dword ptr [ESP + 0x4],EDX       ; 0042b587
    MOV dword ptr [EAX + 0x4],ECX       ; 0042b58b
    MOV EDX,dword ptr [ESP]             ; 0042b58e
    MOV dword ptr [EAX],EDX             ; 0042b591
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b593
    MOV dword ptr [EAX + 0x8],EDX       ; 0042b597
    ADD ESP,0x8                         ; 0042b59a
    RET                                 ; 0042b59d

