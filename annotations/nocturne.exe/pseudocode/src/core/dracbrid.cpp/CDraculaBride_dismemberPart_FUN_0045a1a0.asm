; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0045a1a0(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_explode_FUN_00459f70 at 00459fe6
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a1a0
        ;   Label: core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0
    PUSH EBP                            ; 0045a1a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045a1a2
    LEA EAX,[EBX + 0x23b0]              ; 0045a1a6
    CMP byte ptr [EAX],0x0              ; 0045a1ac
    JZ 0x0045a1bf                       ; 0045a1af
        ;   XREF to: 0045a1bf (CONDITIONAL_JUMP)  ; LAB_0045a1bf
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045a1b1
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0045a1b5
    JNZ 0x0045a1c2                      ; 0045a1bd
        ;   XREF to: 0045a1c2 (CONDITIONAL_JUMP)  ; LAB_0045a1c2
    POP EBP                             ; 0045a1bf
        ;   Label: LAB_0045a1bf
    POP EBX                             ; 0045a1c0
    RET                                 ; 0045a1c1
    PUSH EDI                            ; 0045a1c2
        ;   Label: LAB_0045a1c2
    PUSH ESI                            ; 0045a1c3
    MOV ECX,dword ptr [EBX + 0x2608]    ; 0045a1c4
    PUSH ECX                            ; 0045a1ca
    PUSH 0x0                            ; 0045a1cb
    PUSH 0x0                            ; 0045a1cd
    PUSH EBX                            ; 0045a1cf
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045a1d0
    PUSH ESI                            ; 0045a1d4
    LEA EAX,[EBX + 0x30]                ; 0045a1d5
    PUSH EAX                            ; 0045a1d8
    LEA EAX,[EBX + 0x20]                ; 0045a1d9
    PUSH EAX                            ; 0045a1dc
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 0045a1dd
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0045a1e2
    MOV EDI,dword ptr [ESP + 0x20]      ; 0045a1e5
    PUSH EDI                            ; 0045a1e9
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045a1ea
    PUSH EBP                            ; 0045a1ee
    PUSH EAX                            ; 0045a1ef
    PUSH EBX                            ; 0045a1f0
    MOV ESI,EAX                         ; 0045a1f1
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 0045a1f3
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0045a1f8
    PUSH ESI                            ; 0045a1fb
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 0045a1fc
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbdd0]    ; 0045a201
    MOV dword ptr [EBX + EAX*0x4 + 0xbdd4],ESI ; 0045a207
    INC dword ptr [EBX + 0xbdd0]        ; 0045a20e
    MOV dword ptr [ESI + 0xfc],0x1      ; 0045a214
    MOV dword ptr [ESI + 0xc9c],0x1     ; 0045a21e
    ADD ESP,0x4                         ; 0045a228
    MOV dword ptr [ESI + 0xca8],0xffff  ; 0045a22b
    POP ESI                             ; 0045a235
    POP EDI                             ; 0045a236
    POP EBP                             ; 0045a237
    POP EBX                             ; 0045a238
    RET                                 ; 0045a239

