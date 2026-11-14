; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00472220(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472220
        ;   Label: core_doc.cpp_CDoc_renderTransparent_FUN_00472220
    MOV EBX,dword ptr [ESP + 0x8]       ; 00472221
    PUSH EBX                            ; 00472225
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0 ; 00472226
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0047222b
    ADD ESP,0x4                         ; 00472231
    TEST EDX,EDX                        ; 00472234
    JNZ 0x0047223f                      ; 00472236
        ;   XREF to: 0047223f (CONDITIONAL_JUMP)  ; LAB_0047223f
    MOV EAX,0x1                         ; 00472238
    POP EBX                             ; 0047223d
    RET                                 ; 0047223e
    MOV EAX,EDX                         ; 0047223f
        ;   Label: LAB_0047223f
    PUSH EAX                            ; 00472241
    MOV EDX,dword ptr [EDX + 0x154]     ; 00472242
    CALL dword ptr [EDX + 0x14]         ; 00472248
    ADD ESP,0x4                         ; 0047224b
    MOV EAX,0x1                         ; 0047224e
    POP EBX                             ; 00472253
    RET                                 ; 00472254

