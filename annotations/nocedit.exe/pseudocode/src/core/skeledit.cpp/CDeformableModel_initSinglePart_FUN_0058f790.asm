; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c35e
;   core_skeledit.cpp_CDeformableModel_importGeometryS3D_FUN_0058b660 at 0058b8aa
;
; Referenced Globals:
;   TerminatedCString s_TheOnlyPart_0064b4bf
;   undefined4 s_TheOnlyPart_0064b4bf+1
;   undefined4 s_TheOnlyPart_0064b4bf+2
;   undefined4 s_TheOnlyPart_0064b4bf+3
;
; *****************************************************************************

section .text

    NOP                                 ; 0058f790
        ;   Label: core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790
    NOP                                 ; 0058f791
    NOP                                 ; 0058f792
    NOP                                 ; 0058f793
    NOP                                 ; 0058f794
    NOP                                 ; 0058f795
    NOP                                 ; 0058f796
    NOP                                 ; 0058f797
    NOP                                 ; 0058f798
    NOP                                 ; 0058f799
    PUSH EBX                            ; 0058f79a
    PUSH ESI                            ; 0058f79b
    PUSH EDI                            ; 0058f79c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058f79d
    MOV ESI,0x64b4bf                    ; 0058f7a1 | = "TheOnlyPart"
    LEA EDI,[EBX + 0x7144]              ; 0058f7a6
    MOV dword ptr [EBX + 0x7140],0x1    ; 0058f7ac
    PUSH EDI                            ; 0058f7b6
    MOV AL,byte ptr [ESI]               ; 0058f7b7 | = "TheOnlyPart" | s_TheOnlyPart_0064b4bf+2
        ;   Label: LAB_0058f7b7
    MOV byte ptr [EDI],AL               ; 0058f7b9
    CMP AL,0x0                          ; 0058f7bb
    JZ 0x0058f7cf                       ; 0058f7bd
        ;   XREF to: 0058f7cf (CONDITIONAL_JUMP)  ; LAB_0058f7cf
    MOV AL,byte ptr [ESI + 0x1]         ; 0058f7bf | s_TheOnlyPart_0064b4bf+1 | s_TheOnlyPart_0064b4bf+3
    ADD ESI,0x2                         ; 0058f7c2
    MOV byte ptr [EDI + 0x1],AL         ; 0058f7c5
    ADD EDI,0x2                         ; 0058f7c8
    CMP AL,0x0                          ; 0058f7cb
    JNZ 0x0058f7b7                      ; 0058f7cd
        ;   XREF to: 0058f7b7 (CONDITIONAL_JUMP)  ; LAB_0058f7b7
    POP EDI                             ; 0058f7cf
        ;   Label: LAB_0058f7cf
    MOV ECX,dword ptr [EBX]             ; 0058f7d0
    XOR EDX,EDX                         ; 0058f7d2
    TEST ECX,ECX                        ; 0058f7d4
    JLE 0x0058f800                      ; 0058f7d6
        ;   XREF to: 0058f800 (CONDITIONAL_JUMP)  ; LAB_0058f800
    MOV EAX,EBX                         ; 0058f7d8
    MOV ECX,dword ptr [EAX + 0x54]      ; 0058f7da
        ;   Label: LAB_0058f7da
    MOV dword ptr [EAX + 0x7178],0x0    ; 0058f7dd
    MOV dword ptr [EAX + 0x7164],ECX    ; 0058f7e7
    INC EDX                             ; 0058f7ed
    MOV ESI,dword ptr [EBX]             ; 0058f7ee
    ADD EAX,0x4                         ; 0058f7f0
    CMP EDX,ESI                         ; 0058f7f3
    JL 0x0058f7da                       ; 0058f7f5
        ;   XREF to: 0058f7da (CONDITIONAL_JUMP)  ; LAB_0058f7da
    LEA EAX,[EAX]                       ; 0058f7f7
    LEA EDX,[EDX]                       ; 0058f7fd
    MOV dword ptr [EBX + 0x718c],0x0    ; 0058f800
        ;   Label: LAB_0058f800
    POP EDI                             ; 0058f80a
    POP ESI                             ; 0058f80b
    POP EBX                             ; 0058f80c
    RET                                 ; 0058f80d

