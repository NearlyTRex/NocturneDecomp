; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_00513b90(float ambient)
;
; Parameters:
; float            Stack[0x4]:4   ambient
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d22554
;   undefined4 DAT_02c83450
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00513b90
        ;   Label: engine_mini3d.cpp_setAmbientLight_FUN_00513b90
    MOV EDX,dword ptr [0x02c83450]      ; 00513b94 | DAT_02c83450
    MOV [0x01d22554],EAX                ; 00513b9a | DAT_01d22554
    TEST EDX,EDX                        ; 00513b9f
    JZ 0x00513bac                       ; 00513ba1
        ;   XREF to: 00513bac (CONDITIONAL_JUMP)  ; LAB_00513bac
    CMP dword ptr [0x01c50948],0x0      ; 00513ba3 | DAT_01c50948
    JNZ 0x00513bad                      ; 00513baa
        ;   XREF to: 00513bad (CONDITIONAL_JUMP)  ; LAB_00513bad
    RET                                 ; 00513bac
        ;   Label: LAB_00513bac
    PUSH EAX                            ; 00513bad
        ;   Label: LAB_00513bad
    CALL dword ptr [0x02c83450]         ; 00513bae | DAT_02c83450
    ADD ESP,0x4                         ; 00513bb4
    RET                                 ; 00513bb7

