; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042b510(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position)
;
; Parameters:
; SProjectedVertex * * Stack[0x4]:4   vertex_array
; int              Stack[0x8]:4   vertex_index
; CVector3f *      Stack[0xc]:4   world_position
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0059b070
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b510
        ;   Label: core_charactr.cpp_projectPointToVertex_FUN_0042b510
    SUB ESP,0xc                         ; 0042b511
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042b514
    MOV EBX,ESP                         ; 0042b518
    FLD float ptr [EAX]                 ; 0042b51a
    FMUL float ptr [0x0059b070]         ; 0042b51c | DAT_0059b070
    FISTP dword ptr [EBX]               ; 0042b522
    FLD float ptr [EAX + 0x4]           ; 0042b524
    FMUL float ptr [0x0059b070]         ; 0042b527 | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 0042b52d
    FLD float ptr [EAX + 0x8]           ; 0042b530
    FMUL float ptr [0x0059b070]         ; 0042b533 | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 0042b539
    MOV EAX,ESP                         ; 0042b53c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042b53e
    PUSH EAX                            ; 0042b542
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042b543
    SUB EAX,EDX                         ; 0042b54a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042b54c
    SHL EAX,0x4                         ; 0042b550
    MOV EDX,dword ptr [EDX]             ; 0042b553
    ADD EAX,EDX                         ; 0042b555
    PUSH EAX                            ; 0042b557
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0042b558
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042b55d
    ADD ESP,0xc                         ; 0042b560
    POP EBX                             ; 0042b563
    RET                                 ; 0042b564

