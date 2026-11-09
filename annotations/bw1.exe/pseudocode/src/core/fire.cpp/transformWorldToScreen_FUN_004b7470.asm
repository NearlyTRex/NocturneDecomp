; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004b7470(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
; SProjectedVertex * Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   world_position
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;
; Called Functions:
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7470
        ;   Label: core_fire.cpp_transformWorldToScreen_FUN_004b7470
    SUB ESP,0xc                         ; 004b7471
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b7474
    MOV EBX,ESP                         ; 004b7478
    FLD float ptr [EAX]                 ; 004b747a
    FMUL float ptr [0x005fff94]         ; 004b747c | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b7482
    FLD float ptr [EAX + 0x4]           ; 004b7484
    FMUL float ptr [0x005fff94]         ; 004b7487 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b748d
    FLD float ptr [EAX + 0x8]           ; 004b7490
    FMUL float ptr [0x005fff94]         ; 004b7493 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b7499
    MOV EBX,ESP                         ; 004b749c
    PUSH EBX                            ; 004b749e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b749f
    PUSH EDX                            ; 004b74a3
    CALL engine_special.cpp_FUN_0058043c ; 004b74a4
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b74a9
    ADD ESP,0xc                         ; 004b74ac
    POP EBX                             ; 004b74af
    RET                                 ; 004b74b0

