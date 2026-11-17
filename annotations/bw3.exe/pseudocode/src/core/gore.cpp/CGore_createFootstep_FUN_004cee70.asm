; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004cee70(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; int              Stack[0x10]:4   surface_type
; int              Stack[0x14]:4   alpha
; EBloodType       Stack[0x18]:4   blood_type
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cbad
;
; Referenced Globals:
;   int g_INT_01d4aec4
;   int g_FootstepCount
;
; Called Functions:
;   core_gore.cpp_CFootstep_init_FUN_004ce170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cee70
        ;   Label: core_gore.cpp_CGore_createFootstep_FUN_004cee70
    PUSH ESI                            ; 004cee71
    PUSH EDI                            ; 004cee72
    PUSH EBP                            ; 004cee73
    MOV EBP,ESP                         ; 004cee74
    MOV EDX,dword ptr [0x01d4aec4]      ; 004cee76 | g_INT_01d4aec4
    MOV EAX,EDX                         ; 004cee7c
    MOV ECX,dword ptr [0x01d4aec4]      ; 004cee7e | g_INT_01d4aec4
    SHL EAX,0x4                         ; 004cee84
    INC ECX                             ; 004cee87
    ADD EAX,EDX                         ; 004cee88
    MOV EDX,0x1d4aecc                   ; 004cee8a
    SHL EAX,0x2                         ; 004cee8f
    MOV dword ptr [0x01d4aec4],ECX      ; 004cee92 | g_INT_01d4aec4
    ADD EDX,EAX                         ; 004cee98
    CMP ECX,0x3e8                       ; 004cee9a
    JGE 0x004ceee5                      ; 004ceea0
        ;   XREF to: 004ceee5 (CONDITIONAL_JUMP)  ; LAB_004ceee5
    MOV EDI,dword ptr [0x01d4aec8]      ; 004ceea2 | g_FootstepCount
        ;   Label: LAB_004ceea2
    CMP EDI,0x3e8                       ; 004ceea8
    JGE 0x004ceeb8                      ; 004ceeae
        ;   XREF to: 004ceeb8 (CONDITIONAL_JUMP)  ; LAB_004ceeb8
    LEA EAX,[EDI + 0x1]                 ; 004ceeb0
    MOV [0x01d4aec8],EAX                ; 004ceeb3 | g_FootstepCount
    MOV ECX,dword ptr [EBP + 0x28]      ; 004ceeb8
        ;   Label: LAB_004ceeb8
    PUSH ECX                            ; 004ceebb
    MOV EBX,dword ptr [EBP + 0x24]      ; 004ceebc
    MOV ESI,dword ptr [EBP + 0x20]      ; 004ceebf
    PUSH EBX                            ; 004ceec2
    CMP ESI,0xb                         ; 004ceec3
    SETZ AL                             ; 004ceec6
    AND EAX,0xff                        ; 004ceec9
    PUSH EAX                            ; 004ceece
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004ceecf
    PUSH EDI                            ; 004ceed2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ceed3
    PUSH EAX                            ; 004ceed6
    PUSH EDX                            ; 004ceed7
    CALL core_gore.cpp_CFootstep_init_FUN_004ce170 ; 004ceed8
        ;   XREF to: 004ce170 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_init_FUN_004ce170(CFootstep * this_ptr, CVector3f * position, UOrientationVector * orientation, int is_bloody, ...)
    ADD ESP,0x18                        ; 004ceedd
    POP EBP                             ; 004ceee0
    POP EDI                             ; 004ceee1
    POP ESI                             ; 004ceee2
    POP EBX                             ; 004ceee3
    RET                                 ; 004ceee4
    XOR ESI,ESI                         ; 004ceee5
        ;   Label: LAB_004ceee5
    MOV dword ptr [0x01d4aec4],ESI      ; 004ceee7 | g_INT_01d4aec4
    JMP 0x004ceea2                      ; 004ceeed
        ;   XREF to: 004ceea2 (UNCONDITIONAL_JUMP)  ; LAB_004ceea2

