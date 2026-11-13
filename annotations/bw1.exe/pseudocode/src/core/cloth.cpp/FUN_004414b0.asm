; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_004414b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_cloth.cpp_FUN_00441500
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004414b0
        ;   Label: core_cloth.cpp_FUN_004414b0
    PUSH ESI                            ; 004414b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004414b2
    PUSH 0xff                           ; 004414b6
    MOV EDX,dword ptr [0x00612560]      ; 004414bb | DAT_00612560
    PUSH EDX                            ; 004414c1
    XOR EBX,EBX                         ; 004414c2
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0 ; 004414c4
        ;   XREF to: 00483ce0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer * this_ptr, int color)
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 004414c9
    ADD ESP,0x8                         ; 004414cf
    TEST ECX,ECX                        ; 004414d2
    JLE 0x004414ef                      ; 004414d4
        ;   XREF to: 004414ef (CONDITIONAL_JUMP)  ; LAB_004414ef
    PUSH EDI                            ; 004414d6
    PUSH 0x0                            ; 004414d7
        ;   Label: LAB_004414d7
    PUSH EBX                            ; 004414d9
    PUSH ESI                            ; 004414da
    CALL core_cloth.cpp_FUN_00441500    ; 004414db
        ;   XREF to: 00441500 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00441500()
    INC EBX                             ; 004414e0
    MOV EDI,dword ptr [ESI + 0x37b4c]   ; 004414e1
    ADD ESP,0xc                         ; 004414e7
    CMP EBX,EDI                         ; 004414ea
    JL 0x004414d7                       ; 004414ec
        ;   XREF to: 004414d7 (CONDITIONAL_JUMP)  ; LAB_004414d7
    POP EDI                             ; 004414ee
    POP ESI                             ; 004414ef
        ;   Label: LAB_004414ef
    POP EBX                             ; 004414f0
    RET                                 ; 004414f1

