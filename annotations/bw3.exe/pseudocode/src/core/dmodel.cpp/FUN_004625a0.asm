; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004625a0(int param_1)
;
;
; XREF[68]:
;   FUN_004091b0 at 004095a7
;   FUN_0040dfc0 at 0040dfd5
;   FUN_0040e140 at 0040e151
;   FUN_0040e2b0 at 0040e2c1
;   FUN_0040e810 at 0040e871
;   FUN_0040e8b0 at 0040e8c5
;   FUN_0040f010 at 0040f100
;   FUN_0040f290 at 0040f2b0
;   FUN_0040f690 at 0040f6a5
;   FUN_00412c50 at 00412d22
;   ... and 58 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bbb16
;   TerminatedCString s_Tried_to_do_something_wi_005bbb29
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004625a0
        ;   Label: FUN_004625a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004625a1
    CMP dword ptr [EBX + 0x178],0x0     ; 004625a5
    JZ 0x004625b6                       ; 004625ac
        ;   XREF to: 004625b6 (CONDITIONAL_JUMP)  ; LAB_004625b6
    MOV EAX,dword ptr [EBX + 0x178]     ; 004625ae
    POP EBX                             ; 004625b4
    RET                                 ; 004625b5
    PUSH ESI                            ; 004625b6
        ;   Label: LAB_004625b6
    LEA EAX,[EBX + 0x78]                ; 004625b7
    PUSH EAX                            ; 004625ba
    MOV ECX,0x5bbb16                    ; 004625bb | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 004625c0
    PUSH 0x5bbb29                       ; 004625c5 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004625ca | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004625d0 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004625d6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004625db
    POP ESI                             ; 004625de
    MOV EAX,dword ptr [EBX + 0x178]     ; 004625df
    POP EBX                             ; 004625e5
    RET                                 ; 004625e6

