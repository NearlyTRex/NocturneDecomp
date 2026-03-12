; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_transformWorldToScreen_FUN_004c9400(CVector3i *input,SProjectedVertex *output,CVector3f *world_position)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
; SProjectedVertex * Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   world_position
; Local Variables:
; CVector3i        Stack[-0x10]:12  local_10
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;
; Called Functions:
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9400
        ;   Label: core_fire.cpp_transformWorldToScreen_FUN_004c9400
    SUB ESP,0xc                         ; 004c9401
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c9404
    MOV EBX,ESP                         ; 004c9408
    FLD float ptr [EAX]                 ; 004c940a
    FMUL float ptr [0x0065dca8]         ; 004c940c | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c9412
    FLD float ptr [EAX + 0x4]           ; 004c9414
    FMUL float ptr [0x0065dca8]         ; 004c9417 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c941d
    FLD float ptr [EAX + 0x8]           ; 004c9420
    FMUL float ptr [0x0065dca8]         ; 004c9423 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c9429
    MOV EBX,ESP                         ; 004c942c
    PUSH EBX                            ; 004c942e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c942f
    PUSH EDX                            ; 004c9433
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c9434
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c9439
    ADD ESP,0xc                         ; 004c943c
    POP EBX                             ; 004c943f
    RET                                 ; 004c9440

