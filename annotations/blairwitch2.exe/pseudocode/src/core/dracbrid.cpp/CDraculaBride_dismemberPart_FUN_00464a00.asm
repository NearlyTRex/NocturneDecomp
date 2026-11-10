; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_00464a00(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_explode_FUN_00464700 at 0046478c
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_createBodyPart_FUN_004154f0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464a00
        ;   Label: core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00464a00
    PUSH EBP                            ; 00464a01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00464a02
    LEA EAX,[EBX + 0x2514]              ; 00464a06
    CMP byte ptr [EAX],0x0              ; 00464a0c
    JZ 0x00464a1f                       ; 00464a0f
        ;   XREF to: 00464a1f (CONDITIONAL_JUMP)  ; LAB_00464a1f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00464a11
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00464a15
    JNZ 0x00464a22                      ; 00464a1d
        ;   XREF to: 00464a22 (CONDITIONAL_JUMP)  ; LAB_00464a22
    POP EBP                             ; 00464a1f
        ;   Label: LAB_00464a1f
    POP EBX                             ; 00464a20
    RET                                 ; 00464a21
    PUSH EDI                            ; 00464a22
        ;   Label: LAB_00464a22
    PUSH ESI                            ; 00464a23
    MOV ECX,dword ptr [EBX + 0x280c]    ; 00464a24
    PUSH ECX                            ; 00464a2a
    PUSH 0x0                            ; 00464a2b
    PUSH 0x0                            ; 00464a2d
    PUSH EBX                            ; 00464a2f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00464a30
    PUSH ESI                            ; 00464a34
    LEA EAX,[EBX + 0x30]                ; 00464a35
    PUSH EAX                            ; 00464a38
    LEA EAX,[EBX + 0x20]                ; 00464a39
    PUSH EAX                            ; 00464a3c
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 00464a3d
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00464a42
    MOV EDI,dword ptr [ESP + 0x20]      ; 00464a45
    PUSH EDI                            ; 00464a49
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00464a4a
    PUSH EBP                            ; 00464a4e
    PUSH EAX                            ; 00464a4f
    PUSH EBX                            ; 00464a50
    MOV ESI,EAX                         ; 00464a51
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 00464a53
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00464a58
    PUSH ESI                            ; 00464a5b
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 00464a5c
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10ba4]   ; 00464a61
    MOV dword ptr [EBX + EAX*0x4 + 0x10ba8],ESI ; 00464a67
    INC dword ptr [EBX + 0x10ba4]       ; 00464a6e
    MOV dword ptr [ESI + 0xfc],0x1      ; 00464a74
    MOV dword ptr [ESI + 0x10c8],0x1    ; 00464a7e
    ADD ESP,0x4                         ; 00464a88
    MOV dword ptr [ESI + 0x10d4],0xffff ; 00464a8b
    POP ESI                             ; 00464a95
    POP EDI                             ; 00464a96
    POP EBP                             ; 00464a97
    POP EBX                             ; 00464a98
    RET                                 ; 00464a99

