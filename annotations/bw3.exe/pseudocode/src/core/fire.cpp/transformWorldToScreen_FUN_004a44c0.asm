; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004a44c0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
; SProjectedVertex * Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   world_position
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;
; Called Functions:
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a44c0
        ;   Label: core_fire.cpp_transformWorldToScreen_FUN_004a44c0
    SUB ESP,0xc                         ; 004a44c1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a44c4
    MOV EBX,ESP                         ; 004a44c8
    FLD float ptr [EAX]                 ; 004a44ca
    FMUL float ptr [0x005df8e4]         ; 004a44cc | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a44d2
    FLD float ptr [EAX + 0x4]           ; 004a44d4
    FMUL float ptr [0x005df8e4]         ; 004a44d7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a44dd
    FLD float ptr [EAX + 0x8]           ; 004a44e0
    FMUL float ptr [0x005df8e4]         ; 004a44e3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a44e9
    MOV EBX,ESP                         ; 004a44ec
    PUSH EBX                            ; 004a44ee
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a44ef
    PUSH EDX                            ; 004a44f3
    CALL engine_special.cpp_FUN_0056356c ; 004a44f4
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a44f9
    ADD ESP,0xc                         ; 004a44fc
    POP EBX                             ; 004a44ff
    RET                                 ; 004a4500

