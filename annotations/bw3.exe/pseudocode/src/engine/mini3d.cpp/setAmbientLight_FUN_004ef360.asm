; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004ef360(float ambient)
;
; Parameters:
; float            Stack[0x4]:4   ambient
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76cd4
;   undefined4 DAT_02cf60ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef360
        ;   Label: engine_mini3d.cpp_setAmbientLight_FUN_004ef360
    MOV EDX,dword ptr [0x02cf60ac]      ; 004ef364 | DAT_02cf60ac
    MOV [0x01d76cd4],EAX                ; 004ef36a | DAT_01d76cd4
    TEST EDX,EDX                        ; 004ef36f
    JZ 0x004ef37c                       ; 004ef371
        ;   XREF to: 004ef37c (CONDITIONAL_JUMP)  ; LAB_004ef37c
    CMP dword ptr [0x01c6cee8],0x0      ; 004ef373 | DAT_01c6cee8
    JNZ 0x004ef37d                      ; 004ef37a
        ;   XREF to: 004ef37d (CONDITIONAL_JUMP)  ; LAB_004ef37d
    RET                                 ; 004ef37c
        ;   Label: LAB_004ef37c
    PUSH EAX                            ; 004ef37d
        ;   Label: LAB_004ef37d
    CALL dword ptr [0x02cf60ac]         ; 004ef37e | DAT_02cf60ac
    ADD ESP,0x4                         ; 004ef384
    RET                                 ; 004ef387

